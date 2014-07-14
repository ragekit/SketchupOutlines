// Copyright 2013 Trimble Navigation Ltd. All Rights Reserved.

#ifndef SKPTOXML_PLUGIN_XMLPLUGIN_H_
#define SKPTOXML_PLUGIN_XMLPLUGIN_H_

#include <string>
#include <slapi/import_export/modelexporterplugin.h>
#include "../Common/XMLExporter.h"
#include "../Common/XMLOptions.h"

// This is the implementation of the new plugin interface
class CXmlExporterPlugin : public SketchUpDeprecatedModelExporterInterface {
 public:
  CXmlExporterPlugin();
  ~CXmlExporterPlugin();

  std::string GetIdentifier() const {
    return "com.sketchup.exporters.deprecated.xml";
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

  bool ExportSelectionSetOnly() { return m_XMLOptions.GetExportSelectionSet(); }

  // The dialogs are platform dependent.
  virtual void ShowOptionsDialog(bool model_has_selection) = 0;

  // The entry-point for the conversion
  virtual bool DeprecatedConvertFromSkp(
      void* document,
      const std::string& output,
      SketchUpPluginProgressCallback* progress);

  virtual void ShowSummaryDialog() = 0;

 protected:
  class CXMLExporter* m_pXMLExporter;
  CXMLOptions m_XMLOptions;
};

#endif  // SKPTOXML_PLUGIN_XMLPLUGIN_H_
