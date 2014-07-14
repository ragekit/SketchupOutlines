#pragma once


// CXMLOptionsDlg dialog

class CXMLOptionsDlg : public CDialog
{
	DECLARE_DYNAMIC(CXMLOptionsDlg)

public:
	CXMLOptionsDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CXMLOptionsDlg();

// Dialog Data
	enum { IDD = IDD_DIALOG_EXPORT_OPTIONS };
    BOOL m_bExportMaterials;
    BOOL m_bExportFaces;
    BOOL m_bExportEdges;
    BOOL m_bExportCameras;
    BOOL m_bExportMaterialsByLayer;
    BOOL m_bExportLayers;
    BOOL m_bExportOptions;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
