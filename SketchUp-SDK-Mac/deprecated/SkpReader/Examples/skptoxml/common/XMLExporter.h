#pragma once

#include "stdafx.h"
#include "XMLOptions.h"
#include "XMLExporterBase.h"
#include "HResult.h"
#include <set>
#include "InheritanceManager.h"

//Export Statistics - a struct to help count our exported objects
//These stats are displayed at the end of the export in the results dialog
struct CXMLExportStats
{
    CXMLExportStats();
    unsigned long m_nTextures;
    unsigned long m_nFaces;
    unsigned long m_nEdges;
    unsigned long m_nCameras;
    unsigned long m_nLayers;
    unsigned long m_nOptions;
};

//CXMLExporter definition - Platform independent exporter class
class CXMLExporter : public CXMLExporterBase
{
public:

    CXMLExporter(CXMLOptions* pOptions);
    virtual ~CXMLExporter(void);

    HRESULT WriteModel();

    // Access to stats
    CXMLExportStats* GetStats() {return &m_Stats;}

private:

    void WriteTextureFiles();
    void LoadTexturesFromEntities(CComPtr<ISkpEntityProvider> pEntProvider);
    void LoadTexturesFromLayers();

    void WriteOptions();
    void WriteOptionsProvider(const char* title, CComPtr<ISkpNamedValues> pNVs);

    void WriteLayers();
    void WriteLayer(CComPtr<ISkpLayer> pLayer);

    void WriteMaterials();
    void WriteMaterial(CComPtr<ISkpMaterial> pMaterial);

    void WriteGeometry();
    void WriteFacesAndEdges(CComPtr<ISkpEntityProvider> pEntProvider);

    void WriteFace(CComPtr<ISkpFace> pFace);
    void WriteFaceStart(long frontId, long backId, long layerId);

    void WriteEdge(CComPtr<ISkpEdge> pEdge);

private:
    
    CInheritanceManager m_InheritanceManager;
    CXMLOptions* m_pOptions;
    CXMLExportStats m_Stats;
    CComPtr<ISkpTextureWriter2> m_pTextureWriter;
};
