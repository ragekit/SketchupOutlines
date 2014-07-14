// Copyright 2013 Trimble Navigation Ltd. All Rights Reserved.

#include "./xmlplugin.h"
#include "../common/xmlexporter.h"
#include "../common/xmloptions.h"
#include "../common/xmlstats.h"

#include <slapi/import_export/pluginprogresscallback.h>

CXmlExporterPlugin::CXmlExporterPlugin() {
  // Initialize user preferences
  m_bExportMaterials = false;
  m_bExportFaces = true;
  m_bExportEdges = true;
  m_bExportMaterialsByLayer = false;
  m_bExportLayers = false;
  m_bExportOptions = true;
  m_bExportSelectionSet = false;
}

std::string CXmlExporterPlugin::GetDescription(int index) const {
  return "XML Exporter (*.xml)";
}

static void GetNumberString(size_t number, char* numberString, int length) {
#ifdef _WINDOWS
  _snprintf_s(numberString, length, _TRUNCATE, "%5u\n", number);
#else
  snprintf(numberString, length, "%5u\n", number);
#endif
}

bool CXmlExporterPlugin::ConvertFromSkp(const std::string& input_skp,
    const std::string& output_xml,
    SketchUpPluginProgressCallback* callback,
    void* reserved) {
  bool converted = false;
  m_summary.clear();
  CXmlExporter exporter;
  try {
    // Set the user preferences on the exporter
    CXmlOptions options;
    options.set_export_materials(m_bExportMaterials);
    options.set_export_faces(m_bExportFaces);
    options.set_export_edges(m_bExportEdges);
    options.set_export_materials_by_layer(m_bExportMaterialsByLayer);
    options.set_export_layers(m_bExportLayers);
    options.set_export_options(m_bExportOptions);
    exporter.SetOptions(options);

    // Convert
    converted = exporter.Convert(input_skp, output_xml, callback);
  } catch (...) {
    converted = false;
  }

  std::string summary;
  int length = 32;
  char numberString[32];
  const CXmlExportStats& stats = exporter.stats();
  summary.append("XML Entities Exported:\n\n");
  std::string countString;
  if (stats.faces() > 0) {
    GetNumberString(stats.faces(), &numberString[0], length);
    summary.append("\tFaces:\t\t");
    summary.append(numberString);
  }
  if (stats.edges() > 0) {
    GetNumberString(stats.edges(), &numberString[0], length);
    summary.append("\tEdges:\t\t");
    summary.append(numberString);
  }
  if (stats.textures() > 0) {
    GetNumberString(stats.textures(), &numberString[0], length);
    summary.append("\tTextures:\t\t");
    summary.append(numberString);
  }
  if (stats.layers() > 0) {
    GetNumberString(stats.layers(), &numberString[0], length);
    summary.append("\tLayers:\t\t");
    summary.append(numberString);
  }
  m_summary = summary;

  return converted; 
}

void CXmlExporterPlugin::ShowSummaryDialog() {
  if (!m_summary.empty()) {
    ShowSummaryDialog(m_summary);
  }
  m_summary.clear();
}
