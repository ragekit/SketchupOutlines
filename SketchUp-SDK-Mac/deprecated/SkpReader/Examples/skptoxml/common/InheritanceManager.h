#pragma once

#include "GeomUtilities.h"
#include <vector>

//CInheritanceManager - A cross-platform class that manages the properties
//of geometric elements (faces and edges) that can be inherited from component
//instances, groups and images.  These properties are transformations to world
//space, layers and materials.
class CInheritanceManager
{
public:

    CInheritanceManager();
    CInheritanceManager(bool bMaterialsByLayer);
    virtual ~CInheritanceManager();

    void PushElement(CComPtr<ISkpComponentInstance> pElement);
    void PushElement(CComPtr<ISkpGroup> pElement);
    void PushElement(CComPtr<ISkpImage> pElement);
    void PushElement(CComPtr<ISkpFace> pElement);
    void PushElement(CComPtr<ISkpEdge> pElement);
    void PopElement();

    CComPtr<ISkpLayer> GetCurrentLayer();
    CTransform GetCurrentTransform();
    CComPtr<ISkpMaterial> GetCurrentFrontMaterial();
    CComPtr<ISkpMaterial> GetCurrentBackMaterial();

protected: //Methods

    void PushTransform(CTransform t);

protected: //Data

    bool m_bMaterialsByLayer;
    std::vector<CTransform> m_Transforms;
    std::vector<ISkpLayer*> m_Layers;
    std::vector<ISkpMaterial*> m_FrontMaterials;
    std::vector<ISkpMaterial*> m_BackMaterials;
};
