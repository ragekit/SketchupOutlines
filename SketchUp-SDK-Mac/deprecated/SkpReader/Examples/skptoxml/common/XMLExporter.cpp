#include "StdAfx.h"
#include "XmlExporter.h"
#include "GeomUtilities.h"
#include "LocalizedStrings.h"

#include "../win32/resource.h"

//A set to help count the textures that we export
static std::set<long> textureHandles;

//Initialize the stats struct
CXMLExportStats::CXMLExportStats()
{
    m_nTextures = 0;
    m_nCameras = 0;
    m_nFaces = 0;
    m_nEdges = 0;
    m_nLayers = 0;
    m_nOptions = 0;
}

CXMLExporter::CXMLExporter(CXMLOptions* pOptions)
{
    m_pOptions = pOptions;

    //Initialize the inheritance manager - pass in the option to materials by layer so that
    //the class can offer up the appropriate material for the faces later on
    m_InheritanceManager = CInheritanceManager(m_pOptions->GetExportMaterialsByLayer());
}

CXMLExporter::~CXMLExporter(void)
{
}

HRESULT CXMLExporter::WriteModel()
{
    try
    {
        if (m_pProgressBar)
        {
            m_pProgressBar->SetPercentDone(0.0);
            m_pProgressBar->SetProgressMessage(LoadLocalizedString(IDS_WRITING_TEXTURE_FILES));
        }
        WriteTextureFiles();

        Write("<SkpToXML xmlversion=\"1.0\" skpversion=\"5.0\" units=\"inches\">\n");

        if (m_pProgressBar)
        {
            m_pProgressBar->SetPercentDone(10.0);
            m_pProgressBar->SetProgressMessage(LoadLocalizedString(IDS_WRITING_LAYERS));
        }
        WriteLayers();

        if (m_pProgressBar)
        {
            m_pProgressBar->SetPercentDone(20.0);
            m_pProgressBar->SetProgressMessage(LoadLocalizedString(IDS_WRITING_MATERIALS));
        }
        WriteMaterials();

        if (m_pProgressBar)
        {
            m_pProgressBar->SetPercentDone(30.0);
            m_pProgressBar->SetProgressMessage(LoadLocalizedString(IDS_WRITING_OPTIONS));
        }
        WriteOptions();

        if (m_pProgressBar)
        {
            m_pProgressBar->SetPercentDone(40.0);
            m_pProgressBar->SetProgressMessage(LoadLocalizedString(IDS_WRITING_GEOMETRY));
        }
        WriteGeometry();

        Write("</SkpToXML>");

        if (m_pProgressBar)
        {
            m_pProgressBar->SetPercentDone(100.0);
            m_pProgressBar->SetProgressMessage(LoadLocalizedString(IDS_EXPORT_COMPLETE));
        }

        return S_OK;
    }
    catch(HRESULT hr)
    {
        return hr;
    }
}

void CXMLExporter::WriteTextureFiles()
{
    if (m_pOptions->GetExportMaterials())
    {
        HResult hr;

        // Get the ISkpApplication from the ISkpDocument
        CComPtr<ISkpApplication> pApp;
        hr = m_pDocument->get_Application(&pApp);

        // Get the ISkpTextureWriter2 interface from ISkpApplication.  You
        // first have to get the ISkpTextureWriter, then get the ISkpTextureWriter2
        // extension from that.
        CComPtr<ISkpTextureWriter> pTW;
        hr = pApp->CreateTextureWriter(&pTW);
        hr = pTW->QueryInterface(IID_ISkpTextureWriter2, (void**)&m_pTextureWriter);

        if (m_pOptions->GetExportMaterialsByLayer())
        {
            LoadTexturesFromLayers();
        }
        else
        {
            // Get the top-level ISkpEntityProvider interface from the ISkpDocument, 
            // which is the root component in the model
            CComPtr<ISkpEntityProvider> pEntProvider;
            hr = m_pDocument->QueryInterface(IID_ISkpEntityProvider, (void**) &pEntProvider);

            // Start recursing down the component hierarchy, loading the textures into
            // the ISkpTextureWriter2 along the way
            LoadTexturesFromEntities(pEntProvider);
        }
		
        // Get the number of textures for the statisics output
        long textureCount;
        m_pTextureWriter->get_Count(&textureCount);
        m_Stats.m_nTextures = textureCount;

        // Write out all the textures to a folder 
        std::string btextureDir = GetExportFolder();
		    _bstr_t textDirBstr(btextureDir.c_str());
        hr = m_pTextureWriter->WriteAllTextures(textDirBstr, FALSE);
    }
}

void CXMLExporter::LoadTexturesFromLayers()
{
    CComPtr<ISkpLayers> pLayers;
    HResult hr = m_pDocument->get_Layers(&pLayers);

    long count;
    hr = pLayers->get_Count(&count);

    for(long i=0; i<count; i++) 
    {
        CComPtr<ISkpLayer> pLayer;
        hr = pLayers->get_Item(i, &pLayer);

        long handle;
        hr = m_pTextureWriter->LoadLayer(pLayer, &handle);

        if (hr == S_OK)
        {
            if (handle > 0)
            {
                textureHandles.insert(handle);
            }
        }
    }
}

void CXMLExporter::LoadTexturesFromEntities(CComPtr<ISkpEntityProvider> pEntProvider)
{
    HResult hr;
    long nElements, i;

    // Load all the textures applied to component instances
    CComPtr<ISkpComponentInstances> pInstances = NULL;
    hr = pEntProvider->get_ComponentInstances(&pInstances);
    hr = pInstances->get_Count(&nElements);

    for(i=0; i<nElements; i++)
    {
        // Get the ISkpComponentInstance from the ISkpComponentInstances
        CComPtr<ISkpComponentInstance> pInstance;
        hr = pInstances->get_Item(i, &pInstance);

        // Get the ISkpEntity interface for this ISkpComponentInstance
        CComPtr<ISkpEntity> pEnt;
        hr = pInstance->QueryInterface(IID_ISkpEntity, (void**) &pEnt);

        // Load the component instance into the texture writer
        long handle;
        hr = m_pTextureWriter->LoadComponentInstance(pInstance, &handle);

        if (hr == S_OK)
        {
            if (handle > 0)
            {
                // Record the resulting texture handle into our static std::set<long> of handles.
                textureHandles.insert(handle);
            }
        }

        // Get the instance's component definition (ISkpComponentDefinition)
        CComPtr<ISkpComponentDefinition> pDef;
        hr = pInstance->get_ComponentDefinition(&pDef);

        // Get the ISkpEntityProvider interface from the ISkpComponentDefinition
        CComPtr<ISkpEntityProvider> pEntProvider;
        hr = pDef->QueryInterface(IID_ISkpEntityProvider, (void**) &pEntProvider);

        // Recursively call this function
        LoadTexturesFromEntities(pEntProvider);
    }

    // Load all the textures applied to groups
    CComPtr<ISkpGroups> pGroups = NULL;
    hr = pEntProvider->get_Groups(&pGroups);
    hr = pGroups->get_Count(&nElements);

    for(i=0; i<nElements; i++)
    {
        // Get the ISkpGroup from the ISkpGroups
        CComPtr<ISkpGroup> pGroup;
        hr = pGroups->get_Item(i, &pGroup);
        
        // Load the group instance into the texture writer
        long handle;
        hr = m_pTextureWriter->LoadGroup(pGroup, &handle);

        if (hr == S_OK)
        {
            if (handle > 0)
            {
                // Record the resulting texture handle into our static std::set<long> of handles.
                textureHandles.insert(handle);
            }
        }

        // Get the ISkpEntityProvider interface from the ISkpGroup
        CComPtr<ISkpEntityProvider> pEntProvider;
        hr = pGroup->QueryInterface(IID_ISkpEntityProvider, (void**) &pEntProvider);

        // Recursively call this function
        LoadTexturesFromEntities(pEntProvider);
    }

    //Load all the textures applied to images
    CComPtr<ISkpImages> pImages = NULL;
    hr = pEntProvider->get_Images(&pImages);
    hr = pImages->get_Count(&nElements);

    for(i=0; i<nElements; i++)
    {
        // Get the ISkpImage from the ISkpImages
        CComPtr<ISkpImage> pImage;
        hr = pImages->get_Item(i, &pImage);

        // Load the image into the texture writer
        long handle;
        hr = m_pTextureWriter->LoadImage(pImage, &handle);

        if (hr == S_OK)
        {
            if (handle > 0)
            {
                // Record the resulting texture handle into our static std::set<long> of handles.
                textureHandles.insert(handle);
            }
        }

        // Get the ISkpEntityProvider interface from the ISkpImage
        CComPtr<ISkpEntityProvider> pEntProvider;
        hr = pImage->QueryInterface(IID_ISkpEntityProvider, (void**) &pEntProvider);

        // Recursively call this function
        LoadTexturesFromEntities(pEntProvider);
    }

    //Load all the textures applied to faces
    CComPtr<ISkpFaces> pFaces = NULL;
    hr = pEntProvider->get_Faces(&pFaces);
    hr = pFaces->get_Count(&nElements);

    for(i=0; i<nElements; i++)
    {
        // Get the ISkpFace from the ISkpFaces
        CComPtr<ISkpFace> pFace;
        hr = pFaces->get_Item(i, &pFace);

        // Load the texture on the FRONT side of the face into the texture writer
        long handle = 0;
        hr = m_pTextureWriter->LoadFace(pFace, /*bFront*/ true, &handle);

        if (hr == S_OK)
        {
            if (handle > 0)
            {
                // Record the resulting texture handle into our static std::set<long> of handles.
                textureHandles.insert(handle);
            }
        }

        // Load the texture on the BACK side of the face into the texture writer
        handle=0;
        hr = m_pTextureWriter->LoadFace(pFace, /*bFront*/ false, &handle);

        if (hr == S_OK)
        {
            if (handle > 0)
            {
                // Record the resulting texture handle into our static std::set<long> of handles.
                textureHandles.insert(handle);
            }
        }
    }
}

void CXMLExporter::WriteOptions()
{
    if (m_pOptions->GetExportOptions())
    {
        HResult hr;

        CComPtr<ISkpOptionsManager> pOptManager;
        hr = m_pDocument->get_OptionsManager(&pOptManager);

        long count;
        hr = pOptManager->get_Count(&count);

        if (count>0)
        {
            IncreaseIndent();
            Write("<Options>\n");

            VARIANT vNum;
            ::VariantInit(&vNum);
            vNum.vt = VT_I4;
            for(long i=0; i<count; i++)
            {
                CComPtr<ISkpOptionsProvider> pProvider;

                vNum.lVal = i;
                hr = pOptManager->get_Item(vNum, &pProvider);
                
                // write the option provider
                CComPtr<ISkpNamedValues> pNamedOptions;
                hr = pProvider->QueryInterface(IID_ISkpNamedValues, (void**)&pNamedOptions);

                BSTR bProviderName;
                hr = pProvider->get_Name(&bProviderName);
                _bstr_t szProviderName(bProviderName, true);

                WriteOptionsProvider((const char*)szProviderName, pNamedOptions);

                SysFreeString(bProviderName);
            }
            Write("</Options>\n");
            DecreaseIndent();
        }
    }
}

void CXMLExporter::WriteOptionsProvider(const char* title, CComPtr<ISkpNamedValues> pNVs)
{
    if(pNVs == NULL) 
    {
        return;
    }

    long count;
    HResult hr;

    hr = pNVs->get_Count(&count);

    if (count>0)
    {
        IncreaseIndent();
        Write("<OptionsProvider name=\"%s\">\n", title);
        IncreaseIndent();
        for(long i=0; i<count; i++)
        {
			CComPtr<ISkpNamedValue> pNV;
            hr = pNVs->get_Item(i, &pNV);
            BSTR bName; 
            VARIANT vValue;
            VariantInit(&vValue);

            hr = pNV->get_Name(&bName);
            hr = pNV->get_Value(&vValue);

            m_Stats.m_nOptions += 1;
            CXMLExporterBase::WriteOption(bName, vValue);

            SysFreeString(bName);
            VariantClear(&vValue);
        }
        DecreaseIndent();
        Write("</OptionsProvider>\n");
        DecreaseIndent();
    }
}

void CXMLExporter::WriteLayers()
{
    if (m_pOptions->GetExportLayers())
    {
        HResult hr;

        CComPtr<ISkpLayers> pLayers;
        hr = m_pDocument->get_Layers(&pLayers);
        
        long count;
        hr = pLayers->get_Count(&count);

        if (count>0)
        {
            IncreaseIndent();
            Write("<Layers>\n", count);
            IncreaseIndent();
            for(long i=0; i<count; i++) 
            {
                CComPtr<ISkpLayer> pLayer;
                hr = pLayers->get_Item(i, &pLayer);
                WriteLayer(pLayer);
            }
            DecreaseIndent();
            Write("</Layers>\n");
            DecreaseIndent();
        }
    }
}

void CXMLExporter::WriteLayer(CComPtr<ISkpLayer> pLayer)
{
    HResult hr;

    m_Stats.m_nLayers += 1;

    long entityId = GetEntityId(pLayer);

    BSTR layerName;
    hr = pLayer->get_Name(&layerName);
    _bstr_t szLayerName(layerName, true);

    OLE_COLOR color;
    hr = pLayer->get_Color(&color);

    BOOL isVisible = TRUE;
    hr = pLayer->get_IsVisible(&isVisible);

    Write("<Layer id=\"%d\" name=\"%s\" color=\"#%06x\" visible=\"%s\" />\n", entityId, (const char*)szLayerName, color, BoolToText(isVisible));
    SysFreeString(layerName);
}

void CXMLExporter::WriteMaterials()
{
    if (m_pOptions->GetExportMaterials())
    {
        if (m_pOptions->GetExportMaterialsByLayer())
        {
            HResult hr;

            CComPtr<ISkpLayers> pLayers;
            hr = m_pDocument->get_Layers(&pLayers);

            long count;
            hr = pLayers->get_Count(&count);

            if (count>0)
            {
                for(long i=0; i<count; i++) 
                {
                    CComPtr<ISkpLayer> pLayer;
                    hr = pLayers->get_Item(i, &pLayer);

                    CComPtr<ISkpMaterial> pMaterial;
                    hr = pLayer->get_Material(&pMaterial);
                    WriteMaterial(pMaterial);
                }
            }
        }
        else
        {
            HResult hr;
            CComPtr<ISkpMaterials> pMats;

            hr = m_pDocument->get_Materials(&pMats);
            long count = 0L;
            hr = pMats->get_Count(&count);
            
            if (count>0)
            {
                IncreaseIndent();
                Write("<Materials count=\"%ld\">\n", count);
                IncreaseIndent();
                for(long i=0; i<count; i++)
                {
                    CComPtr<ISkpMaterial> pMat;
                    hr = pMats->get_Item(i, &pMat);
                    WriteMaterial(pMat);
                }
                DecreaseIndent();
                Write("</Materials>\n");
                DecreaseIndent();
            }
        }
    }
}

void CXMLExporter::WriteMaterial(CComPtr<ISkpMaterial> pMaterial)
{
    if(pMaterial == NULL)
    {
        return;
    }

    HResult hr;
    BSTR materialName;

    hr = pMaterial->get_Name(&materialName);
    _bstr_t szMaterialName(materialName, true);

    Write("<Material id=\"%d\" name=\"%s\">\n", GetEntityId(pMaterial), (const char*)szMaterialName);
    SysFreeString(materialName);

    IncreaseIndent();

    //Color
    BOOL isColor;
    hr = pMaterial->get_IsColor(&isColor);
    if ( isColor )
    {
        OLE_COLOR color;
        hr = pMaterial->get_Color(&color);
        Write("<Color> #%06x </Color>\n", color);
    }

    // Alpha
    BOOL usesAlpha;
    hr = pMaterial->get_UsesAlpha(&usesAlpha);
    if ( usesAlpha )
    {
        double alpha = 0;
        hr = pMaterial->get_Alpha(&alpha);
        Write("<Alpha>%lf</Alpha>\n", alpha);
    }

    // See if it has a texture
    BOOL isTexture = FALSE;
    hr = pMaterial->get_IsTexture(&isTexture);
    if( isTexture )
    {
        CComPtr<ISkpTexture> pTexture = NULL;
        hr = pMaterial->get_Texture(&pTexture);
        if(pTexture != NULL)
        {
            BSTR texturePath = NULL;
            hr = pTexture->get_Filename(&texturePath);
            std::string bstrFilename = GetFileName(texturePath);
            _bstr_t szTexturePath(bstrFilename.c_str());
            
            double width = 0;
            double height = 0;
            hr = pTexture->get_XScale(&width);
            hr = pTexture->get_YScale(&height);
            
            Write("<Texture path=\"%s\" xscale=\"%8.4lf\" yscale=\"%8.4lf\" />\n", bstrFilename.c_str(), width, height);
            SysFreeString(texturePath);
        }
    }

    DecreaseIndent();
    Write("</Material>\n");
}

void CXMLExporter::WriteGeometry()
{
    HResult hr;

    CComPtr<ISkpEntityProvider> pEntProvider;
    hr = m_pDocument->QueryInterface(IID_ISkpEntityProvider, (void**) &pEntProvider);

    IncreaseIndent();
    Write("<Geometry>\n");
        IncreaseIndent();
        WriteFacesAndEdges(pEntProvider);
        DecreaseIndent();
    Write("</Geometry>\n");
    DecreaseIndent();
}

void CXMLExporter::WriteFacesAndEdges(CComPtr<ISkpEntityProvider> pEntProvider)
{
    HResult hr;
    long nElements, i;

    //Recurse all the instances
    CComPtr<ISkpComponentInstances> pInstances = NULL;
    hr = pEntProvider->get_ComponentInstances(&pInstances);
    hr = pInstances->get_Count(&nElements);

    for(i=0; i<nElements; i++)
    {
        CComPtr<ISkpComponentInstance> pInstance;
        hr = pInstances->get_Item(i, &pInstance);

        CComPtr<ISkpComponentDefinition> pDef;
        hr = pInstance->get_ComponentDefinition(&pDef);

        CComPtr<ISkpEntityProvider> pEntProvider;
        hr = pDef->QueryInterface(IID_ISkpEntityProvider, (void**) &pEntProvider);

        //Push Transform, Material and Layer
        m_InheritanceManager.PushElement(pInstance);

        WriteFacesAndEdges(pEntProvider);

        //Pop Transform, Material and Layer
        m_InheritanceManager.PopElement();
    }

    //Recurse all the groups
    CComPtr<ISkpGroups> pGroups = NULL;
    hr = pEntProvider->get_Groups(&pGroups);
    hr = pGroups->get_Count(&nElements);

    for(i=0; i<nElements; i++)
    {
        CComPtr<ISkpGroup> pGroup;
        hr = pGroups->get_Item(i, &pGroup);

        CComPtr<ISkpEntityProvider> pEntProvider;
        hr = pGroup->QueryInterface(IID_ISkpEntityProvider, (void**) &pEntProvider);

        //Push Transform, Material and Layer
        m_InheritanceManager.PushElement(pGroup);

        WriteFacesAndEdges(pEntProvider);

        //Pop Transform, Material and Layer
        m_InheritanceManager.PopElement();
    }

    //Recurse all the images
    CComPtr<ISkpImages> pImages = NULL;
    hr = pEntProvider->get_Images(&pImages);
    hr = pImages->get_Count(&nElements);

    for(i=0; i<nElements; i++)
    {
        CComPtr<ISkpImage> pImage;
        hr = pImages->get_Item(i, &pImage);

        CComPtr<ISkpEntityProvider> pEntProvider;
        hr = pImage->QueryInterface(IID_ISkpEntityProvider, (void**) &pEntProvider);

        //Push Transform, Material and Layer
        m_InheritanceManager.PushElement(pImage);

        WriteFacesAndEdges(pEntProvider);

        //Pop Transform, Material and Layer
        m_InheritanceManager.PopElement();
    }

    if (m_pOptions->GetExportFaces())
    {
        //Write all the faces
        CComPtr<ISkpFaces> pFaces = NULL;
        hr = pEntProvider->get_Faces(&pFaces);
        hr = pFaces->get_Count(&nElements);

        for(i=0; i<nElements; i++)
        {
            CComPtr<ISkpFace> pFace;
            hr = pFaces->get_Item(i, &pFace);

            if (hr==S_OK)
            {
                //Push Transform, Material and Layer
                m_InheritanceManager.PushElement(pFace);

                WriteFace(pFace);

                //Pop Transform, Material and Layer
                m_InheritanceManager.PopElement();
            }
        }
    }

    if (m_pOptions->GetExportFaces())
    {
        //Write all the edges
        CComPtr<ISkpEdges> pEdges = NULL;
        hr = pEntProvider->get_Edges(&pEdges);
        hr = pEdges->get_Count(&nElements);

        for(i=0; i<nElements; i++)
        {
            CComPtr<ISkpEdge> pEdge;
            hr = pEdges->get_Item(i, &pEdge);

            if (hr==S_OK)
            {
                //Push Transform, Material and Layer
                m_InheritanceManager.PushElement(pEdge);

                WriteEdge(pEdge);

                //Pop Transform, Material and Layer
                m_InheritanceManager.PopElement();
            }
        }
    }
}

void CXMLExporter::WriteFaceStart(long frontId, long backId, long layerId)
{
    m_Stats.m_nFaces += 1;

    Write("<Face");
    if (frontId!=-1) {Write(" frontMaterial=\"%d\"", frontId);}
    if (backId!=-1) {Write(" backMaterial=\"%d\"", backId);}
    if (layerId!=-1) {Write(" layer=\"%d\"", layerId);}
    Write(">\n");
}

void CXMLExporter::WriteFace(CComPtr<ISkpFace> pFace)
{
    HResult hr;

    BOOL bHasFrontTexture = false;
    BOOL bHasBackTexture = false;
    long frontId=-1;
    long backId=-1;
    long layerId=-1;

    if (m_pOptions->GetExportMaterials())
    {
        CComPtr<ISkpMaterial> pFrontMaterial = m_InheritanceManager.GetCurrentFrontMaterial();
        if (pFrontMaterial)
        {
            hr = pFrontMaterial->get_IsTexture(&bHasFrontTexture);
            frontId = GetEntityId(pFrontMaterial);
        }

        CComPtr<ISkpMaterial> pBackMaterial = m_InheritanceManager.GetCurrentBackMaterial();

        if (pBackMaterial)
        {
            hr = pBackMaterial->get_IsTexture(&bHasBackTexture);
            backId = GetEntityId(pBackMaterial);
        }
    }

    if (m_pOptions->GetExportLayers())
    {
        CComPtr<ISkpDrawingElement> pDE;
        hr = pFace->QueryInterface(IID_ISkpDrawingElement, (void**) &pDE);

        CComPtr<ISkpLayer> pLayer;
        hr = pDE->get_Layer(&pLayer);

        layerId = GetEntityId(pLayer);
    }

    BOOL bHasTexture = bHasFrontTexture | bHasBackTexture;
    CComPtr<ISkpUVHelper> pUVHelper = NULL;

    //If the face has a texture(s) applied to it, then create a UVHelper class so we can output the uv
    //coordinance at each vertex.
    if (bHasTexture)
    {
        CComPtr<ISkpCorrectPerspective> pCorrectPerspective;
        hr = m_pTextureWriter->QueryInterface(IID_ISkpCorrectPerspective, (void**)&pCorrectPerspective); 

        hr = pFace->GetUVHelper(bHasFrontTexture, bHasBackTexture, pCorrectPerspective, &pUVHelper);
    }

    //Find out how many loops the face has
    CComPtr<ISkpLoops> pLoops;
    hr = pFace->get_Loops(&pLoops);

    long nLoops;
    hr = pLoops->get_Count(&nLoops);

    //If this is a simple face (no loops)
    if (nLoops==1)
    {
        WriteFaceStart(frontId, backId, layerId);

        IncreaseIndent();

        CComPtr<ISkpLoop> pLoop;
        hr = pFace->get_OuterLoop(&pLoop);

        CComPtr<ISkpVertices> pVerts;
        hr = pLoop->get_Vertices(&pVerts);

        long nVerts;
        hr = pVerts->get_Count(&nVerts);

        for (long i=0;i<nVerts;i++)
        {
            CComPtr<ISkpVertex> pVert;
            hr = pVerts->get_Item(i, &pVert);

            CComPtr<ISkpPoint3d> pSkpPoint;
            hr = pVert->get_Position(&pSkpPoint);

            CPoint3d point(pSkpPoint);
            CPoint3d worldPoint = m_InheritanceManager.GetCurrentTransform() * point;

            if (bHasTexture)
            {
                Write("<Vertex x=\"%f\" y=\"%f\" z=\"%f\">\n", worldPoint.X(), worldPoint.Y(), worldPoint.Z());
            }
            else
            {
                //This one closes the tag as well because we don't have child (UV) nodes
                Write("<Vertex x=\"%f\" y=\"%f\" z=\"%f\" />\n", worldPoint.X(), worldPoint.Y(), worldPoint.Z());
            }

            if (bHasFrontTexture)
            {
                IncreaseIndent();
                double u, v, q;
                pUVHelper->GetFrontUVQ(worldPoint.X(), worldPoint.Y(), worldPoint.Z(), &u, &v, &q);
                Write("<TextureCood front=\"true\" u=\"%f\" v=\"%f\" />\n", u, v);
                DecreaseIndent();
            }

            if (bHasBackTexture)
            {
                IncreaseIndent();
                double u, v, q;
                pUVHelper->GetBackUVQ(worldPoint.X(), worldPoint.Y(), worldPoint.Z(), &u, &v, &q);
                Write("<TextureCood front=\"false\" u=\"%f\" v=\"%f\" />\n", u, v);
                DecreaseIndent();
            }

            if (bHasTexture)
            {
                Write("</Vertex>\n");
            }

        }
        DecreaseIndent();
        Write("</Face>\n");
    }
    else
    {
        //If this is a complex face with one or more holes in it
        //we tesselate it into triangles using the polygon mesh class, then
        //export each triangle as a face.

        CComPtr<ISkpPolygonMesh> pMesh;

        if (bHasTexture)
        {
            pFace->CreateMeshWithUVHelper(3, pUVHelper, &pMesh);
        }
        else
        {
            pFace->CreateMesh(0, NULL, &pMesh);
        }

        long nPolys;
        hr = pMesh->get_NumPolygons(&nPolys);

        for (long i=0;i<nPolys;i++)
        {
            long nPoints;

            //The mesh is 1 based
            hr = pMesh->CountPolygonPoints(i+1, &nPoints);

            WriteFaceStart(frontId, backId, layerId);

            IncreaseIndent();
            for (long j=0;j<nPoints;j++)
            {
                CComPtr<ISkpPoint3d> skpPoint;
                hr = pMesh->get_PolygonPoint(i+1, j+1, &skpPoint);

                CPoint3d point(skpPoint);
                CPoint3d worldPoint = m_InheritanceManager.GetCurrentTransform() * point;

                if (bHasTexture)
                {
                    Write("<Vertex x=\"%f\" y=\"%f\" z=\"%f\">\n", worldPoint.X(), worldPoint.Y(), worldPoint.Z());
                }
                else
                {
                    //This one closes the tag as well because we don't have child (UV) nodes
                   Write("<Vertex x=\"%f\" y=\"%f\" z=\"%f\" />\n", worldPoint.X(), worldPoint.Y(), worldPoint.Z());
                }

                if (bHasFrontTexture)
                {
                    IncreaseIndent();
                    double u, v, q;
                    pUVHelper->GetFrontUVQ(worldPoint.X(), worldPoint.Y(), worldPoint.Z(), &u, &v, &q);
                    Write("<TextureCood front=\"true\" u=\"%f\" v=\"%f\" />\n", u, v);
                    DecreaseIndent();
                }

                if (bHasBackTexture)
                {
                    IncreaseIndent();
                    double u, v, q;
                    pUVHelper->GetBackUVQ(worldPoint.X(), worldPoint.Y(), worldPoint.Z(), &u, &v, &q);
                    Write("<TextureCood front=\"false\" u=\"%f\" v=\"%f\" />\n", u, v);
                    DecreaseIndent();
                }

                if (bHasTexture)
                {
                    Write("</Vertex>\n");
                }
            }
            DecreaseIndent();
            Write("</Face>\n");
        }
    }
}

void CXMLExporter::WriteEdge(CComPtr<ISkpEdge> pEdge)
{
    HResult hr;

    m_Stats.m_nEdges += 1;

    if (m_pOptions->GetExportLayers())
    {
        CComPtr<ISkpDrawingElement> pDE;
        hr = pEdge->QueryInterface(IID_ISkpDrawingElement, (void**) &pDE);

        CComPtr<ISkpLayer> pLayer;
        hr = pDE->get_Layer(&pLayer);

        long layerId = GetEntityId(pLayer);

        Write("<Edge layer=\"%d\">\n", layerId);
    }
    else
    {
        Write("<Edge>\n");
    }

    IncreaseIndent();

    CComPtr<ISkpPoint3d> pStartPoint;
    hr = pEdge->get_StartPoint(&pStartPoint);
    CPoint3d startPt(pStartPoint);
    CPoint3d startPoint = m_InheritanceManager.GetCurrentTransform() * startPt;
    Write("<Start x=\"%f\" y=\"%f\" z=\"%f\" />\n", startPoint.X(), startPoint.Y(), startPoint.Z());

    CComPtr<ISkpPoint3d> pEndPoint;
    hr = pEdge->get_EndPoint(&pEndPoint);
    CPoint3d endPt(pEndPoint);
    CPoint3d endPoint = m_InheritanceManager.GetCurrentTransform() * endPt;
    Write("<End x=\"%f\" y=\"%f\" z=\"%f\" />\n", endPoint.X(), endPoint.Y(), endPoint.Z());

    DecreaseIndent();

    Write("</Edge>\n");
}
