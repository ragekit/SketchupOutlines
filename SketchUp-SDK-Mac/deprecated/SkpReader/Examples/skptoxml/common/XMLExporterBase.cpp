#include "stdafx.h"
#include "XMLExporterBase.h"

CXMLExporterBase::CXMLExporterBase()
{
    m_indent = 0;
    m_pFile = NULL;
}

CXMLExporterBase::~CXMLExporterBase()
{
}

long CXMLExporterBase::GetEntityId(IUnknown* pUnk)
{
    long entityId = 0;
    CComPtr<ISkpEntity> pEntity = NULL;
    if( SUCCEEDED(pUnk->QueryInterface(IID_ISkpEntity, (void**)&pEntity)) )
    {
        pEntity->get_Id(&entityId);
        return entityId;
    }

    CComPtr<ISkpEntity> pSkpEnt = NULL;
    if( SUCCEEDED(pUnk->QueryInterface(IID_ISkpEntity, (void**)&pSkpEnt)) )
    {
        pSkpEnt->get_Id(&entityId);
        return entityId;
    }
    return -1;
}

HRESULT CXMLExporterBase::WriteOption(BSTR name, _variant_t value)
{
    HRESULT hr;
    _bstr_t bName(name, true);
    switch( value.vt )
    {
        case VT_I4:
        case VT_I2:
            Write("<Option name=\"%s\" value=\"%d\" />\n",
                  (const char*)bName, (long)value);
            break;
        case VT_R4:
        case VT_R8:
            Write("<Option name=\"%s\" value=\"%g\" />\n",
                  (const char*)bName, (double)value);
            break;
        case VT_BOOL:
            Write("<Option name=\"%s\" value=\"%s\" />\n",
                  (const char*)bName, BoolToText((bool)value));
            break;
        case VT_BSTR:
        {
            _bstr_t bValue = (_bstr_t) value.bstrVal;
            Write("<Option name=\"%s\" value=\"%s\" />\n",
                (const char*)bName, (const char*)bValue);
        }
            break;
        case VT_DATE:
        {
#ifdef _WIN32
            DATE time = (DATE)value;
            SYSTEMTIME sysTime;
            if( VariantTimeToSystemTime(time, &sysTime) )
            {
                TCHAR dateStr[16], timeStr[16];
                GetDateFormat(NULL, 0, &sysTime, _T("MM'/'dd'/'yyyy"), dateStr, 16);
                GetTimeFormat(NULL, 0, &sysTime, _T("HH':'mm':'ss"), timeStr, 16);
                Write("<Option name=\"%s\" value=\"%s %s\" />\n",
                      (const char*)bName, dateStr, timeStr);
            }
            else
            {
                Write("<Option name=\"%s\" value=\"invalid time\" />\n",
                      (const char*)bName);
            }
#else
            // On the Mac, DATE == time_t
            DATE date = value.date;
            Write("<Option name=\"%s\" value=\"%s\" />\n",
                  (const char*)bName, asctime(gmtime((time_t*)&date)));
#endif
        }
            break;
        case VT_UNKNOWN:
            // The unknown can be either a point or a vector
            {
                IUnknown* pUnk = value.punkVal;
                ISkpPoint3d* pPoint = NULL;
                hr = pUnk->QueryInterface(IID_ISkpPoint3d, (void**)&pPoint);
                if( SUCCEEDED(hr) )
                {
                    double p[3];
                    pPoint->Get(p, p+1, p+2);
                    WritePosition( (const char*)bName , p);
                    RELEASE(pPoint);
                }
                else
                {
                    ISkpVector3d* pVec = NULL;
                    hr = pUnk->QueryInterface(IID_ISkpVector3d, (void**)&pVec);
                    if( SUCCEEDED(hr) )
                    {
                        double v[3];
                        pVec->Get(v,v+1,v+2);
                        WriteVector( (const char*)bName , v);
                        RELEASE(pVec);
                    }
                }
            
            }
            break;
        default:
            Write("<Option name=\"%s\" value=\"unknown type\" />\n", (const char*)bName);
    }

    return S_OK;
}

HRESULT CXMLExporterBase::WritePosition(const char* elem, double* pos)
{
    Write("<%s>%8.4lf %8.4lf %8.4lf</%s>\n", elem, pos[0], pos[1], pos[2], elem);
    return S_OK;
}

HRESULT CXMLExporterBase::WriteVector(const char* elem, double* vec)
{
    Write("<%s>%g %g %g</%s>\n", elem, vec[0], vec[1], vec[2], elem);
    return S_OK;
}

bool CXMLExporterBase::OpenFile(BSTR filename)
{
    if( m_pFile )
    {
        printf("Warning! opening already open file\n");
        return true;
    }

    if( filename )
    {
        _bstr_t bFileName(filename, true);
        m_pFile = fopen( (const char*)bFileName, "w");
    }
    else
    {
        m_pFile = stdout;
    }
    return m_pFile != NULL;
}

void CXMLExporterBase::CloseFile()
{
    if( m_pFile && (m_pFile != stdout) ) fclose(m_pFile);
}

void CXMLExporterBase::Indent()
{
    // Do the indent
    if( m_indent > 0 )
    {
        int numSpaces = 2*m_indent;
        fprintf(m_pFile, "%*s", numSpaces, " ");
    }
}

void CXMLExporterBase::Write(const char* lpszFormat, ...)
{
    va_list argList;
    va_start(argList, lpszFormat);

    Indent();

    // Write the data
    vfprintf(m_pFile, lpszFormat, argList);

    va_end(argList);
}

HRESULT CXMLExporterBase::DoExport(BSTR filename, ISkpDocument* activeDocument,
                                   SketchUpPluginProgressCallback* callback)
{
    printf("File: %s\n", (const char *)((_bstr_t)filename));
    _bstr_t bFileName(filename, true);

    m_pDocument = activeDocument;
    m_pProgressBar = callback;

    if( m_pDocument==NULL )
    {
        printf("The document interface is not set\n");
        return E_FAIL;
    }

    if( !OpenFile(filename) )
    {
        printf("Cannot open file: %s\n", (const char*)bFileName);
        return E_FAIL;
    }

    m_fileName = (const char*)bFileName;
    printf("Filename %s\n", m_fileName.c_str());
    
    // Write the beginning of the block
    Write("<?xml version=\"1.0\" encoding=\"UTF-8\" ?>\n");

    HRESULT hr;
    try
    {
        hr = WriteModel();
    }
    catch(HRESULT hres)
    {
        hr = hres;
    }

    CloseFile();
    
    return hr;
}

std::string CXMLExporterBase::GetExportFolder()
{
    // what is the directory in which we are writing?
    long index = static_cast<long>(m_fileName.rfind(47));
    if (index == -1)
    {
        index = static_cast<long>(m_fileName.rfind(92));
    }
    std::string path = (m_fileName.substr(0,index+1));
	
    return path;
}

std::string CXMLExporterBase::GetFileName(BSTR path)
{	
#ifdef _WINDOWS
    _bstr_t bpath(path, true);
    std::string filePath = (const char*) bpath;
#else
	std::string filePath = BSTRToPath(path);
#endif
	
    long index = static_cast<long>(filePath.rfind(47));
    if (index == -1)
    {
        index = static_cast<long>(filePath.rfind(92));
    }
    std::string filename = filePath.substr(index+1,m_fileName.size());

    return filename;
}