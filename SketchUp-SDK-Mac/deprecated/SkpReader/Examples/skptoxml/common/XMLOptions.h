#pragma once

//CXMLOptions - A cross-platform class that controls the state of each 
//export option
class CXMLOptions
{
public:
    CXMLOptions(void);
    virtual ~CXMLOptions(void);

    bool GetExportMaterials(){return m_bExportMaterials;}
    void SetExportMaterials(bool bValue){m_bExportMaterials = bValue;}
    bool GetExportFaces(){return m_bExportFaces;}
    void SetExportFaces(bool bValue){m_bExportFaces = bValue;}
    bool GetExportEdges(){return m_bExportEdges;}
    void SetExportEdges(bool bValue){m_bExportEdges = bValue;}
    bool GetExportCameras(){return m_bExportCameras;}
    void SetExportCameras(bool bValue){m_bExportCameras = bValue;}
    bool GetExportMaterialsByLayer() {return m_bExportMaterialsByLayer;}
    void SetExportMaterialsByLayer(bool bValue){m_bExportMaterialsByLayer = bValue;}
    bool GetExportLayers() {return m_bExportLayers;}
    void SetExportLayers(bool bValue){m_bExportLayers = bValue;}
    bool GetExportOptions() {return m_bExportOptions;}
    void SetExportOptions(bool bValue){m_bExportOptions = bValue;}
    bool GetExportSelectionSet() {return m_bExportSelectionSet;}
    void SetExportSelectionSet(bool bValue){m_bExportSelectionSet = bValue;}

private:

    bool m_bExportMaterials;
    bool m_bExportFaces;
    bool m_bExportEdges;
    bool m_bExportCameras;
    bool m_bExportMaterialsByLayer;
    bool m_bExportLayers;
    bool m_bExportOptions;
    bool m_bExportSelectionSet;
};
