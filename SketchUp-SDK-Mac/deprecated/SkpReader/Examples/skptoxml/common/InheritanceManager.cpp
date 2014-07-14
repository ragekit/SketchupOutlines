#include "stdafx.h"
#include <assert.h>
#include "InheritanceManager.h"
#include "HResult.h"

CInheritanceManager::CInheritanceManager()
{
    m_bMaterialsByLayer = false;
}

CInheritanceManager::CInheritanceManager(bool bMaterialsByLayer)
{
    m_bMaterialsByLayer = bMaterialsByLayer;
}

CInheritanceManager::~CInheritanceManager()
{
  std::vector<ISkpMaterial*>::iterator material_it = m_BackMaterials.begin();
  while (material_it != m_BackMaterials.end()) 
  {
      ISkpMaterial* const pMaterial = *material_it;
    if (NULL != pMaterial) pMaterial->Release();
  }
  material_it = m_FrontMaterials.begin();
  while (material_it != m_FrontMaterials.end()) 
  {
    ISkpMaterial* const pMaterial = *material_it;
    if (NULL != pMaterial) pMaterial->Release();
  }
  std::vector<ISkpLayer*>::iterator layer_it = m_Layers.begin();
  while (layer_it != m_Layers.end()) 
  {
    ISkpLayer* const pLayer = *layer_it;
    if (NULL != pLayer) pLayer->Release();
  }  
}

void CInheritanceManager::PushTransform(CTransform t)
{
    CTransform tCurrent = GetCurrentTransform();
    CTransform tNew = tCurrent * t;
    m_Transforms.push_back(tNew);
}

void CInheritanceManager::PushElement(CComPtr<ISkpComponentInstance> pInstance)
{
    HResult hr;

    //Transform
    CComPtr<ISkpTransform> pTransform;
    hr = pInstance->get_Transform(&pTransform);
    double tMatrix[16];
    hr = pTransform->GetData(tMatrix);
    CTransform t(tMatrix);
    PushTransform(t);

    CComPtr<ISkpDrawingElement> pDrawElement = NULL;
    hr = pInstance->QueryInterface(IID_ISkpDrawingElement, (void**)&pDrawElement);

    //Material
    BOOL hasMaterial;
    hr = pDrawElement->get_HasMaterial(&hasMaterial);
    if(hasMaterial)
    {
        ISkpMaterial* pMaterial;
        hr = pDrawElement->get_Material(&pMaterial);

        pMaterial->AddRef();
        m_FrontMaterials.push_back(pMaterial);
        pMaterial->AddRef();        
        m_BackMaterials.push_back(pMaterial);
    }
    else
    {
        m_FrontMaterials.push_back(NULL);
        m_BackMaterials.push_back(NULL);
    }

    //Layer
    ISkpLayer* pLayer;
    hr = pDrawElement->get_Layer(&pLayer);
    pLayer->AddRef();
    m_Layers.push_back(pLayer);
}

void CInheritanceManager::PushElement(CComPtr<ISkpGroup> pGroup)
{
    HResult hr;

    //Transform
    CComPtr<ISkpTransform> pTransform;
    hr = pGroup->get_Transform(&pTransform);
    double tMatrix[16];
    hr = pTransform->GetData(tMatrix);
    CTransform t(tMatrix);
    PushTransform(t);

    CComPtr<ISkpDrawingElement> pDrawElement = NULL;
    hr = pGroup->QueryInterface(IID_ISkpDrawingElement, (void**)&pDrawElement);

    //Material
    BOOL hasMaterial;
    hr = pDrawElement->get_HasMaterial(&hasMaterial);
    if(hasMaterial)
    {
        ISkpMaterial* pMaterial;
        hr = pDrawElement->get_Material(&pMaterial);

        pMaterial->AddRef();
        m_FrontMaterials.push_back(pMaterial);
        pMaterial->AddRef();
        m_BackMaterials.push_back(pMaterial);
    }
    else
    {
        m_FrontMaterials.push_back(NULL);
        m_BackMaterials.push_back(NULL);
    }

    //Layer
    ISkpLayer* pLayer;
    hr = pDrawElement->get_Layer(&pLayer);
    pLayer->AddRef();
    m_Layers.push_back(pLayer);
}

void CInheritanceManager::PushElement(CComPtr<ISkpImage> pImage)
{
    HResult hr;

    //Transform
    CComPtr<ISkpTransform> pTransform;
    hr = pImage->get_Transform(&pTransform);
    double tMatrix[16];
    hr = pTransform->GetData(tMatrix);
    CTransform t(tMatrix);
    PushTransform(t);

    CComPtr<ISkpDrawingElement> pDrawElement = NULL;
    hr = pImage->QueryInterface(IID_ISkpDrawingElement, (void**)&pDrawElement);

    //Material
    BOOL hasMaterial;
    hr = pDrawElement->get_HasMaterial(&hasMaterial);
    if(hasMaterial)
    {
        ISkpMaterial* pMaterial;
        hr = pDrawElement->get_Material(&pMaterial);

        pMaterial->AddRef();
        m_FrontMaterials.push_back(pMaterial);
        pMaterial->AddRef();
        m_BackMaterials.push_back(pMaterial);
    }
    else
    {
        m_FrontMaterials.push_back(NULL);
        m_BackMaterials.push_back(NULL);
    }

    //Layer
    ISkpLayer* pLayer;
    hr = pDrawElement->get_Layer(&pLayer);
    pLayer->AddRef();
    m_Layers.push_back(pLayer);
}

void CInheritanceManager::PushElement(CComPtr<ISkpFace> pFace)
{
    HResult hr;

    //Transform - Faces don't have a transforms so just push an identity on the stack
    CTransform tIdentity;
    PushTransform(tIdentity);

    //Front Material
    ISkpMaterial* pFrontMaterial = NULL;

    if (FAILED(pFace->get_FrontMaterial(&pFrontMaterial)) ||
        pFrontMaterial == NULL)
    {
        m_FrontMaterials.push_back(NULL);
    }
    else
    {
        pFrontMaterial->AddRef();
        m_FrontMaterials.push_back(pFrontMaterial);
    }

    //Back Material
    ISkpMaterial* pBackMaterial = NULL;

    if (FAILED(pFace->get_BackMaterial(&pBackMaterial)) ||
        pBackMaterial == NULL)
    {
        m_BackMaterials.push_back(NULL);
    }
    else
    {
        pBackMaterial->AddRef();
        m_BackMaterials.push_back(pBackMaterial);
    }

    CComPtr<ISkpDrawingElement> pDrawElement = NULL;
    hr = pFace->QueryInterface(IID_ISkpDrawingElement, (void**)&pDrawElement);

    //Layer
    ISkpLayer* pLayer;
    hr = pDrawElement->get_Layer(&pLayer);
    pLayer->AddRef();
    m_Layers.push_back(pLayer);
}

void CInheritanceManager::PushElement(CComPtr<ISkpEdge> pEdge)
{
    HResult hr;

    //Transform - Edges don't have a transforms so just push an identity on the stack
    CTransform tIdentity;
    PushTransform(tIdentity);

    //Materials - Edges don't have materials so just push a null on the stack
    m_FrontMaterials.push_back(NULL);
    m_BackMaterials.push_back(NULL);

    CComPtr<ISkpDrawingElement> pDrawElement = NULL;
    hr = pEdge->QueryInterface(IID_ISkpDrawingElement, (void**)&pDrawElement);

    //Layer
    ISkpLayer* pLayer;
    hr = pDrawElement->get_Layer(&pLayer);
    pLayer->AddRef();
    m_Layers.push_back(pLayer);
}

void CInheritanceManager::PopElement()
{
    //Transforms
    assert(m_Transforms.size() > 0);
    m_Transforms.pop_back();

    //Materials
    assert(m_FrontMaterials.size() > 0);
    ISkpMaterial* pMaterial = m_FrontMaterials.back();
    if (NULL != pMaterial) pMaterial->Release();
    m_FrontMaterials.pop_back();

    assert(m_BackMaterials.size() > 0);
    pMaterial = m_BackMaterials.back();
    if (NULL != pMaterial) pMaterial->Release();      
    m_BackMaterials.pop_back();

    //Layers
    assert(m_Layers.size() > 0);
    ISkpLayer* pLayer = m_Layers.back();
    if (NULL != pLayer) pLayer->Release();
    m_Layers.pop_back();
}

CComPtr<ISkpLayer> CInheritanceManager::GetCurrentLayer()
{
    //Search layer stack for first non-null layer
    int n = static_cast<int>(m_Layers.size());
    for (int i = n; --i >= 0;)
    {
        if (m_Layers[i]) return m_Layers[i];
    }
    return NULL;
}

CTransform CInheritanceManager::GetCurrentTransform()
{
    int size = static_cast<int>(m_Transforms.size());
    if (size == 0)
    {
        return CTransform(); // identity
    }
    else
    {
        return m_Transforms[size - 1];
    }
}
CComPtr<ISkpMaterial> CInheritanceManager::GetCurrentFrontMaterial()
{
    HResult hr;
    if (m_bMaterialsByLayer)
    {
        CComPtr<ISkpLayer> pLayer = GetCurrentLayer();
        ISkpMaterial* pMaterial;
        hr = pLayer->get_Material(&pMaterial);
        return pMaterial;
    }
    else
    {
        //Search material stack for first non-null layer
        int n = static_cast<int>(m_FrontMaterials.size());
        for (int i = n; --i >= 0;)
        {
            if (m_FrontMaterials[i]) return m_FrontMaterials[i];
        }
        return NULL;
   }
}

CComPtr<ISkpMaterial> CInheritanceManager::GetCurrentBackMaterial()
{
    HResult hr;
    if (m_bMaterialsByLayer)
    {
        CComPtr<ISkpLayer> pLayer = GetCurrentLayer();
        ISkpMaterial* pMaterial;
        hr = pLayer->get_Material(&pMaterial);
        return pMaterial;
    }
    else
    {
        //Search material stack for first non-null layer
        int n = static_cast<int>(m_BackMaterials.size());
        for (int i = n; --i >= 0;)
        {
            if (m_BackMaterials[i]) return m_BackMaterials[i];
        }
        return NULL;
    }
}