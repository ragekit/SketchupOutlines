// Copyright 2013 Trimble Navigation Ltd. All Rights Reserved.

#include "./xmlplugin.h"

#include <slapi/import_export/pluginprogresscallback.h>

CXmlExporterPlugin::CXmlExporterPlugin() {
  m_pXMLExporter = NULL;
}

CXmlExporterPlugin::~CXmlExporterPlugin()
{
  delete m_pXMLExporter;
}

std::string CXmlExporterPlugin::GetDescription(int index) const {
  return "Deprecated XML Exporter (*.xml)";
}

static void GetNumberString(size_t number, char* numberString, int length) {
#ifdef _WINDOWS
  _snprintf_s(numberString, length, _TRUNCATE, "%5u\n", number);
#else
  snprintf(numberString, length, "%5u\n", number);
#endif
}

bool CXmlExporterPlugin::DeprecatedConvertFromSkp(
      void* document,
      const std::string& output,
      SketchUpPluginProgressCallback* progress) {

  bool converted = false;

  try {
    // Get the IDocument interface
    IUnknown* activeDocument = (IUnknown*)document;
    if (activeDocument == NULL)
      return false;
    ISkpDocument* pDoc = NULL;
    HRESULT hr = activeDocument->QueryInterface(IID_ISkpDocument,
                                                (void**) &pDoc);

    // Initialize the exporter class
    delete m_pXMLExporter;
    m_pXMLExporter = new CXMLExporter(&m_XMLOptions);

    // Do the export
    _bstr_t file_path = output.c_str();
    hr = m_pXMLExporter->DoExport(file_path, pDoc, progress);

    converted = SUCCEEDED(hr);

  } catch (...) {
    converted = false;
  }

  return converted; 
}
