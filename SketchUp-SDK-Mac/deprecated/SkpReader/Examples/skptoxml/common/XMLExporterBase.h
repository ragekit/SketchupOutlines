#ifndef __XMLExporterBase__H
#define __XMLExporterBase__H

#define BoolToText(b) ((b) ? "true" : "false")
#define RELEASE(pUnk) if( pUnk ) pUnk->Release(); pUnk = NULL

#include "HResult.h"
#include <string>
#include <slapi/import_export/pluginprogresscallback.h>

#ifdef __APPLE__
#include <SketchUp/sketchup.h>
#endif

//CXMLExporterBase definition - A platform independent base class that handles the low-level
//formatting details
class CXMLExporterBase
{
public:

    CXMLExporterBase();
    virtual ~CXMLExporterBase();

    HRESULT DoExport(BSTR filename, ISkpDocument* activeDocument,
                     SketchUpPluginProgressCallback* callback);

    virtual HRESULT WriteModel() = 0;

protected:
    
    long GetEntityId(IUnknown* pUnk);

    std::string GetExportFolder();
    std::string GetFileName(BSTR path);

protected: // Methods

    bool OpenFile(BSTR filename);
    void CloseFile();

    // These are used to control output to the file with the right
    // amount of indentation to make it more readable
    void Write(const char* lpszFormat, ...);
    void IncreaseIndent() { m_indent++; }
    void DecreaseIndent() { if( m_indent > 0 ) m_indent--; }
    void Indent();

    // >> Useful methods
    HRESULT WritePosition(const char* elem, double* pos);
    HRESULT WriteVector(const char* elem, double* vec);
    HRESULT WriteOption(BSTR name, _variant_t value);
    // << Useful methods

protected: // Data

    // The file that we are writing to
    FILE* m_pFile;

    // The name of the file to which we are writing
    std::string m_fileName;

    // The indentation level
    int m_indent;

    //The SketchUp Document interface
    ISkpDocument* m_pDocument;

    SketchUpPluginProgressCallback* m_pProgressBar;
};


#endif // __XMLExporterBase__H