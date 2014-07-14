#include "stdafx.h"
#include "xmloptions.h"

CXMLOptions::CXMLOptions(void)
{
  m_bExportMaterials = true;
  m_bExportFaces = true;
  m_bExportEdges = true;
  m_bExportCameras = true;
  m_bExportMaterialsByLayer = false;
  m_bExportLayers = true;
  m_bExportOptions = true;
  m_bExportSelectionSet = false;
}

CXMLOptions::~CXMLOptions(void)
{
}
