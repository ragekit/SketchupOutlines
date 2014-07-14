// Copyright 2013 Trimble Navigation Limited. All Rights Reserved.

#include "../Common/stdafx.h"
#include "./xmlpluginwin.h"
#include "XMLOptionsDlg.h"
#include "XMLExportResultsDlg.h"

CXmlExporterPluginWin *CXmlExporterPluginWin::s_pInstance = NULL;

CXmlExporterPluginWin::CXmlExporterPluginWin() {
}

CXmlExporterPluginWin *CXmlExporterPluginWin::GetInstance() {
  if (s_pInstance == NULL) {
    s_pInstance = new CXmlExporterPluginWin();
  }
  return s_pInstance;
}

void CXmlExporterPluginWin::DestroyInstance() {
  if (s_pInstance) {
    delete s_pInstance;
    s_pInstance = NULL;
  }
}

void CXmlExporterPluginWin::ShowOptionsDialog(bool model_has_selection) {
  AFX_MANAGE_STATE(AfxGetStaticModuleState ());

  CXMLOptionsDlg dlg;
  dlg.m_bExportMaterials = m_XMLOptions.GetExportMaterials();
  dlg.m_bExportFaces = m_XMLOptions.GetExportFaces();
  dlg.m_bExportEdges = m_XMLOptions.GetExportEdges();
  dlg.m_bExportCameras = m_XMLOptions.GetExportCameras();
  dlg.m_bExportMaterialsByLayer = m_XMLOptions.GetExportMaterialsByLayer();
  dlg.m_bExportLayers = m_XMLOptions.GetExportLayers();
  dlg.m_bExportOptions = m_XMLOptions.GetExportOptions();

  if (dlg.DoModal () == IDOK)
  {
    m_XMLOptions.SetExportMaterials((dlg.m_bExportMaterials != false));
    m_XMLOptions.SetExportFaces((dlg.m_bExportFaces != false));
    m_XMLOptions.SetExportEdges((dlg.m_bExportEdges != false));
    m_XMLOptions.SetExportCameras((dlg.m_bExportCameras != false));
    m_XMLOptions.SetExportMaterialsByLayer((dlg.m_bExportMaterialsByLayer != false));
    m_XMLOptions.SetExportLayers((dlg.m_bExportLayers != false));
    m_XMLOptions.SetExportOptions((dlg.m_bExportOptions != false));
  }
}

static void AppendMessage(int number, UINT msgId, CString& to) {
  if (number > 0) {
    CString tmp;
    tmp.FormatMessage(msgId, number);
    to += tmp;
  }
}

void CXmlExporterPluginWin::ShowSummaryDialog() {
  AFX_MANAGE_STATE(AfxGetStaticModuleState());
  CXMLExportStats* pStats = m_pXMLExporter->GetStats();
  CXMLExportResultsDlg statsdlg;
  statsdlg.SetStats(*pStats);
  statsdlg.DoModal();
}
