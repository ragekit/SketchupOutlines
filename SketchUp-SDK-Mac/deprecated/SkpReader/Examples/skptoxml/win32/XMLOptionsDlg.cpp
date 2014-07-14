#include "../Common/stdafx.h"
#include "XMLOptionsDlg.h"

// CXMLOptionsDlg dialog

IMPLEMENT_DYNAMIC(CXMLOptionsDlg, CDialog)
CXMLOptionsDlg::CXMLOptionsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CXMLOptionsDlg::IDD, pParent)
{
  m_bExportMaterials = true;
  m_bExportFaces = true;
  m_bExportEdges = true;
  m_bExportCameras = true;
  m_bExportMaterialsByLayer = false;
  m_bExportLayers = true;
  m_bExportOptions = true;
}

CXMLOptionsDlg::~CXMLOptionsDlg()
{
}

void CXMLOptionsDlg::DoDataExchange(CDataExchange* pDX)
{
  CDialog::DoDataExchange(pDX);
  DDX_Check(pDX, IDC_CHECK_EXPORT_MATERIALS, m_bExportMaterials);
  DDX_Check(pDX, IDC_CHECK_EXPORT_FACES, m_bExportFaces);
  DDX_Check(pDX, IDC_CHECK_EXPORT_EDGES, m_bExportEdges);
  DDX_Check(pDX, IDC_CHECK_EXPORT_CAMERAS, m_bExportCameras);
  DDX_Check(pDX, IDC_CHECK_EXPORT_MATERIALS_BY_LAYER, m_bExportMaterialsByLayer);
  DDX_Check(pDX, IDC_CHECK_EXPORT_LAYERS, m_bExportLayers);
  DDX_Check(pDX, IDC_CHECK_EXPORT_OPTIONS, m_bExportOptions);
}

BEGIN_MESSAGE_MAP(CXMLOptionsDlg, CDialog)
END_MESSAGE_MAP()
