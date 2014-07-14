#include "../Common/stdafx.h"
#include "XMLExportResultsDlg.h"

// CXMLExportResultsDlg dialog

IMPLEMENT_DYNAMIC(CXMLExportResultsDlg, CDialog)
CXMLExportResultsDlg::CXMLExportResultsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CXMLExportResultsDlg::IDD, pParent)
{
    m_StatsMessage = _T("Hi There.");
}

CXMLExportResultsDlg::~CXMLExportResultsDlg()
{
}

void CXMLExportResultsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
  DDX_Text(pDX, IDC_EDIT_STATS_MESSAGE, m_StatsMessage);
}


BEGIN_MESSAGE_MAP(CXMLExportResultsDlg, CDialog)
END_MESSAGE_MAP()

// CXMLExportResultsDlg message handlers
static void AppendMessage( int number, UINT msgId, CString& to )
{
    if( number > 0 )
    {
        CString tmp;
        tmp.FormatMessage( msgId, number );
        to += tmp;
    }
}

void CXMLExportResultsDlg::SetStats( const CXMLExportStats& stats )
{
    CString exported;
    exported.LoadString(IDS_EXPORT_XML_TITLE);

    AppendMessage(stats.m_nFaces, IDS_EXPORT_XML_FACES, exported);
    AppendMessage(stats.m_nEdges, IDS_EXPORT_XML_EDGES, exported);
    AppendMessage(stats.m_nTextures, IDS_EXPORT_XML_TEXTURES, exported);
    AppendMessage(stats.m_nCameras, IDS_EXPORT_XML_CAMERAS, exported);
    AppendMessage(stats.m_nLayers, IDS_EXPORT_XML_LAYERS, exported);
    AppendMessage(stats.m_nOptions, IDS_EXPORT_XML_OPTIONS, exported);

    m_StatsMessage = exported;
}
