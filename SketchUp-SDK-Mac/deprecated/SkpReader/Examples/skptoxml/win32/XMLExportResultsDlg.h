#pragma once

#include "../Common/XMLExporter.h"

// CXMLExportResultsDlg dialog
class CXMLExportResultsDlg : public CDialog
{
	DECLARE_DYNAMIC(CXMLExportResultsDlg)

public:
	CXMLExportResultsDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CXMLExportResultsDlg();

    // Dialog Data
	enum { IDD = IDD_DIALOG_EXPORT_RESULTS };

    void SetStats( const CXMLExportStats& stats );

protected:

    CString	m_StatsMessage;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
