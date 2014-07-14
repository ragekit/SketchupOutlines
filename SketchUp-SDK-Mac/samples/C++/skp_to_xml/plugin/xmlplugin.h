// Copyright 2013 Trimble Navigation Ltd. All Rights Reserved.

#ifndef SKPTOXML_PLUGIN_XMLPLUGIN_H_
#define SKPTOXML_PLUGIN_XMLPLUGIN_H_

#include <string>
#include <slapi/import_export/modelexporterplugin.h>
#include "../common/xmlexporter.h"

// This is the shared portion of the xml exporter plugin interface.
class CXmlExporterPlugin : public SketchUpModelExporterInterface {
 public:
  CXmlExporterPlugin();
  ~CXmlExporterPlugin() {}

  std::string GetIdentifier() const {
    return "com.sketchup.exporters.xml";
  }

  int GetFileExtensionCount() const {
    return 1;
  }

  std::string GetFileExtension(int index) const {
    return "xml";
  }

  std::string GetDescription(int index) const;

  bool SupportsOptions() const {
    return true;
  }

  bool ExportSelectionSetOnly() { return m_bExportSelectionSet; }

  // The dialogs are platform dependent.
  virtual void ShowOptionsDialog(bool model_has_selection) = 0;

  // The conversion is entirely platform independent!
  bool ConvertFromSkp(const std::string& input_skp,
                      const std::string& output_xml,
                      SketchUpPluginProgressCallback* callback,
                      void* reserved);
  virtual void ShowSummaryDialog();

  // User Preference accessors
  bool ExportMaterials() { return m_bExportMaterials; }
  void SetExportMaterials(bool bSet) { m_bExportMaterials = bSet; }
  bool ExportFaces() { return m_bExportFaces; }
  void SetExportFaces(bool bSet) { m_bExportFaces = bSet; }
  bool ExportEdges() { return m_bExportEdges; }
  void SetExportEdges(bool bSet) { m_bExportEdges = bSet; }
  bool ExportCameras() { return m_bExportCameras; }
  void SetExportCameras(bool bSet) { m_bExportCameras = bSet; }
  bool ExportMaterialsByLayer() { return m_bExportMaterialsByLayer; }
  void SetExportMaterialsByLayer(bool bSet) {
    m_bExportMaterialsByLayer = bSet;
  }
  bool ExportLayers() { return m_bExportLayers; }
  void SetExportLayers(bool bSet) { m_bExportLayers = bSet; }
  bool ExportOptions() { return m_bExportOptions; }
  void SetExportOptions(bool bSet) { m_bExportOptions = bSet; }
  bool ExportSelectionSet() { return m_bExportSelectionSet; }
  void SetExportSelectionSet(bool bSet) { m_bExportSelectionSet = bSet; }

 protected:
  virtual void ShowSummaryDialog(const std::string& summary) = 0;

  // User preference values
  bool m_bExportMaterials;
  bool m_bExportFaces;
  bool m_bExportEdges;
  bool m_bExportCameras;
  bool m_bExportMaterialsByLayer;
  bool m_bExportLayers;
  bool m_bExportOptions;
  bool m_bExportSelectionSet;
  // Summary information saved by the ConvertFromSkp method and used by the
  // ShowSummaryDialog method.
  std::string m_summary;

 private:
  CXmlExporter m_exporter;
};

#endif  // SKPTOXML_PLUGIN_XMLPLUGIN_H_
