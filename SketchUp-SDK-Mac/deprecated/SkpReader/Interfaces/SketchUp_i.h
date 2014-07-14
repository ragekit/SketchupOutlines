

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri May 11 14:48:15 2012
 */
/* Compiler settings for .\..\winapp\sketchup.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SketchUp_i_h__
#define __SketchUp_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISkpRenderer_FWD_DEFINED__
#define __ISkpRenderer_FWD_DEFINED__
typedef interface ISkpRenderer ISkpRenderer;
#endif 	/* __ISkpRenderer_FWD_DEFINED__ */


#ifndef __ISkpInputPointFinder_FWD_DEFINED__
#define __ISkpInputPointFinder_FWD_DEFINED__
typedef interface ISkpInputPointFinder ISkpInputPointFinder;
#endif 	/* __ISkpInputPointFinder_FWD_DEFINED__ */


#ifndef __ISkpHLRView_FWD_DEFINED__
#define __ISkpHLRView_FWD_DEFINED__
typedef interface ISkpHLRView ISkpHLRView;
#endif 	/* __ISkpHLRView_FWD_DEFINED__ */


#ifndef __ISkpCoordinateSystem_FWD_DEFINED__
#define __ISkpCoordinateSystem_FWD_DEFINED__
typedef interface ISkpCoordinateSystem ISkpCoordinateSystem;
#endif 	/* __ISkpCoordinateSystem_FWD_DEFINED__ */


#ifndef __ISkpPoint3d_FWD_DEFINED__
#define __ISkpPoint3d_FWD_DEFINED__
typedef interface ISkpPoint3d ISkpPoint3d;
#endif 	/* __ISkpPoint3d_FWD_DEFINED__ */


#ifndef __ISkpVector3d_FWD_DEFINED__
#define __ISkpVector3d_FWD_DEFINED__
typedef interface ISkpVector3d ISkpVector3d;
#endif 	/* __ISkpVector3d_FWD_DEFINED__ */


#ifndef __ISkpVertex_FWD_DEFINED__
#define __ISkpVertex_FWD_DEFINED__
typedef interface ISkpVertex ISkpVertex;
#endif 	/* __ISkpVertex_FWD_DEFINED__ */


#ifndef __ISkpNamedValue_FWD_DEFINED__
#define __ISkpNamedValue_FWD_DEFINED__
typedef interface ISkpNamedValue ISkpNamedValue;
#endif 	/* __ISkpNamedValue_FWD_DEFINED__ */


#ifndef __ISkpNamedValues_FWD_DEFINED__
#define __ISkpNamedValues_FWD_DEFINED__
typedef interface ISkpNamedValues ISkpNamedValues;
#endif 	/* __ISkpNamedValues_FWD_DEFINED__ */


#ifndef __ISkpNamedValuesM_FWD_DEFINED__
#define __ISkpNamedValuesM_FWD_DEFINED__
typedef interface ISkpNamedValuesM ISkpNamedValuesM;
#endif 	/* __ISkpNamedValuesM_FWD_DEFINED__ */


#ifndef __ISkpPlane_FWD_DEFINED__
#define __ISkpPlane_FWD_DEFINED__
typedef interface ISkpPlane ISkpPlane;
#endif 	/* __ISkpPlane_FWD_DEFINED__ */


#ifndef __ISkpApplication_FWD_DEFINED__
#define __ISkpApplication_FWD_DEFINED__
typedef interface ISkpApplication ISkpApplication;
#endif 	/* __ISkpApplication_FWD_DEFINED__ */


#ifndef __ISkpFileReader_FWD_DEFINED__
#define __ISkpFileReader_FWD_DEFINED__
typedef interface ISkpFileReader ISkpFileReader;
#endif 	/* __ISkpFileReader_FWD_DEFINED__ */


#ifndef __ISkpFileWriter_FWD_DEFINED__
#define __ISkpFileWriter_FWD_DEFINED__
typedef interface ISkpFileWriter ISkpFileWriter;
#endif 	/* __ISkpFileWriter_FWD_DEFINED__ */


#ifndef __ISkpViewProvider_FWD_DEFINED__
#define __ISkpViewProvider_FWD_DEFINED__
typedef interface ISkpViewProvider ISkpViewProvider;
#endif 	/* __ISkpViewProvider_FWD_DEFINED__ */


#ifndef __ISkpEntityProvider_FWD_DEFINED__
#define __ISkpEntityProvider_FWD_DEFINED__
typedef interface ISkpEntityProvider ISkpEntityProvider;
#endif 	/* __ISkpEntityProvider_FWD_DEFINED__ */


#ifndef __ISkpDocument_FWD_DEFINED__
#define __ISkpDocument_FWD_DEFINED__
typedef interface ISkpDocument ISkpDocument;
#endif 	/* __ISkpDocument_FWD_DEFINED__ */


#ifndef __ISkpThumbnailProvider_FWD_DEFINED__
#define __ISkpThumbnailProvider_FWD_DEFINED__
typedef interface ISkpThumbnailProvider ISkpThumbnailProvider;
#endif 	/* __ISkpThumbnailProvider_FWD_DEFINED__ */


#ifndef __ISkpHLRGeneration_FWD_DEFINED__
#define __ISkpHLRGeneration_FWD_DEFINED__
typedef interface ISkpHLRGeneration ISkpHLRGeneration;
#endif 	/* __ISkpHLRGeneration_FWD_DEFINED__ */


#ifndef __ISkpHLRWriter_FWD_DEFINED__
#define __ISkpHLRWriter_FWD_DEFINED__
typedef interface ISkpHLRWriter ISkpHLRWriter;
#endif 	/* __ISkpHLRWriter_FWD_DEFINED__ */


#ifndef __ISkpView_FWD_DEFINED__
#define __ISkpView_FWD_DEFINED__
typedef interface ISkpView ISkpView;
#endif 	/* __ISkpView_FWD_DEFINED__ */


#ifndef __ISkpDimensions_FWD_DEFINED__
#define __ISkpDimensions_FWD_DEFINED__
typedef interface ISkpDimensions ISkpDimensions;
#endif 	/* __ISkpDimensions_FWD_DEFINED__ */


#ifndef __ISkpDimension_FWD_DEFINED__
#define __ISkpDimension_FWD_DEFINED__
typedef interface ISkpDimension ISkpDimension;
#endif 	/* __ISkpDimension_FWD_DEFINED__ */


#ifndef __ISkpDimensionLinear_FWD_DEFINED__
#define __ISkpDimensionLinear_FWD_DEFINED__
typedef interface ISkpDimensionLinear ISkpDimensionLinear;
#endif 	/* __ISkpDimensionLinear_FWD_DEFINED__ */


#ifndef __ISkpDimensionRadial_FWD_DEFINED__
#define __ISkpDimensionRadial_FWD_DEFINED__
typedef interface ISkpDimensionRadial ISkpDimensionRadial;
#endif 	/* __ISkpDimensionRadial_FWD_DEFINED__ */


#ifndef __ISkpDimensionStyle_FWD_DEFINED__
#define __ISkpDimensionStyle_FWD_DEFINED__
typedef interface ISkpDimensionStyle ISkpDimensionStyle;
#endif 	/* __ISkpDimensionStyle_FWD_DEFINED__ */


#ifndef __ISkpFont_FWD_DEFINED__
#define __ISkpFont_FWD_DEFINED__
typedef interface ISkpFont ISkpFont;
#endif 	/* __ISkpFont_FWD_DEFINED__ */


#ifndef __ISkpFonts_FWD_DEFINED__
#define __ISkpFonts_FWD_DEFINED__
typedef interface ISkpFonts ISkpFonts;
#endif 	/* __ISkpFonts_FWD_DEFINED__ */


#ifndef __ISkpText_FWD_DEFINED__
#define __ISkpText_FWD_DEFINED__
typedef interface ISkpText ISkpText;
#endif 	/* __ISkpText_FWD_DEFINED__ */


#ifndef __ISkpTexts_FWD_DEFINED__
#define __ISkpTexts_FWD_DEFINED__
typedef interface ISkpTexts ISkpTexts;
#endif 	/* __ISkpTexts_FWD_DEFINED__ */


#ifndef __ISkpOptionsManager_FWD_DEFINED__
#define __ISkpOptionsManager_FWD_DEFINED__
typedef interface ISkpOptionsManager ISkpOptionsManager;
#endif 	/* __ISkpOptionsManager_FWD_DEFINED__ */


#ifndef __ISkpOptionsProvider_FWD_DEFINED__
#define __ISkpOptionsProvider_FWD_DEFINED__
typedef interface ISkpOptionsProvider ISkpOptionsProvider;
#endif 	/* __ISkpOptionsProvider_FWD_DEFINED__ */


#ifndef __ISkpAttributes_FWD_DEFINED__
#define __ISkpAttributes_FWD_DEFINED__
typedef interface ISkpAttributes ISkpAttributes;
#endif 	/* __ISkpAttributes_FWD_DEFINED__ */


#ifndef __ISkpAttribute_FWD_DEFINED__
#define __ISkpAttribute_FWD_DEFINED__
typedef interface ISkpAttribute ISkpAttribute;
#endif 	/* __ISkpAttribute_FWD_DEFINED__ */


#ifndef __ISkpFaceTextureCoordsAttribute_FWD_DEFINED__
#define __ISkpFaceTextureCoordsAttribute_FWD_DEFINED__
typedef interface ISkpFaceTextureCoordsAttribute ISkpFaceTextureCoordsAttribute;
#endif 	/* __ISkpFaceTextureCoordsAttribute_FWD_DEFINED__ */


#ifndef __ISkpAttributeDictionary_FWD_DEFINED__
#define __ISkpAttributeDictionary_FWD_DEFINED__
typedef interface ISkpAttributeDictionary ISkpAttributeDictionary;
#endif 	/* __ISkpAttributeDictionary_FWD_DEFINED__ */


#ifndef __ISkpCurve_FWD_DEFINED__
#define __ISkpCurve_FWD_DEFINED__
typedef interface ISkpCurve ISkpCurve;
#endif 	/* __ISkpCurve_FWD_DEFINED__ */


#ifndef __ISkpArcCurve_FWD_DEFINED__
#define __ISkpArcCurve_FWD_DEFINED__
typedef interface ISkpArcCurve ISkpArcCurve;
#endif 	/* __ISkpArcCurve_FWD_DEFINED__ */


#ifndef __ISkpLineCurve_FWD_DEFINED__
#define __ISkpLineCurve_FWD_DEFINED__
typedef interface ISkpLineCurve ISkpLineCurve;
#endif 	/* __ISkpLineCurve_FWD_DEFINED__ */


#ifndef __ISkpBoundingBox3d_FWD_DEFINED__
#define __ISkpBoundingBox3d_FWD_DEFINED__
typedef interface ISkpBoundingBox3d ISkpBoundingBox3d;
#endif 	/* __ISkpBoundingBox3d_FWD_DEFINED__ */


#ifndef __ISkpEntities_FWD_DEFINED__
#define __ISkpEntities_FWD_DEFINED__
typedef interface ISkpEntities ISkpEntities;
#endif 	/* __ISkpEntities_FWD_DEFINED__ */


#ifndef __ISkpEdges_FWD_DEFINED__
#define __ISkpEdges_FWD_DEFINED__
typedef interface ISkpEdges ISkpEdges;
#endif 	/* __ISkpEdges_FWD_DEFINED__ */


#ifndef __ISkpEdge_FWD_DEFINED__
#define __ISkpEdge_FWD_DEFINED__
typedef interface ISkpEdge ISkpEdge;
#endif 	/* __ISkpEdge_FWD_DEFINED__ */


#ifndef __ISkpEntity_FWD_DEFINED__
#define __ISkpEntity_FWD_DEFINED__
typedef interface ISkpEntity ISkpEntity;
#endif 	/* __ISkpEntity_FWD_DEFINED__ */


#ifndef __ISkpAttributeProvider_FWD_DEFINED__
#define __ISkpAttributeProvider_FWD_DEFINED__
typedef interface ISkpAttributeProvider ISkpAttributeProvider;
#endif 	/* __ISkpAttributeProvider_FWD_DEFINED__ */


#ifndef __ISkpDrawingElement_FWD_DEFINED__
#define __ISkpDrawingElement_FWD_DEFINED__
typedef interface ISkpDrawingElement ISkpDrawingElement;
#endif 	/* __ISkpDrawingElement_FWD_DEFINED__ */


#ifndef __ISkpPolygonMesh_FWD_DEFINED__
#define __ISkpPolygonMesh_FWD_DEFINED__
typedef interface ISkpPolygonMesh ISkpPolygonMesh;
#endif 	/* __ISkpPolygonMesh_FWD_DEFINED__ */


#ifndef __ISkpFace_FWD_DEFINED__
#define __ISkpFace_FWD_DEFINED__
typedef interface ISkpFace ISkpFace;
#endif 	/* __ISkpFace_FWD_DEFINED__ */


#ifndef __ISkpFaces_FWD_DEFINED__
#define __ISkpFaces_FWD_DEFINED__
typedef interface ISkpFaces ISkpFaces;
#endif 	/* __ISkpFaces_FWD_DEFINED__ */


#ifndef __ISkpCorrectPerspective_FWD_DEFINED__
#define __ISkpCorrectPerspective_FWD_DEFINED__
typedef interface ISkpCorrectPerspective ISkpCorrectPerspective;
#endif 	/* __ISkpCorrectPerspective_FWD_DEFINED__ */


#ifndef __ISkpUVHelper_FWD_DEFINED__
#define __ISkpUVHelper_FWD_DEFINED__
typedef interface ISkpUVHelper ISkpUVHelper;
#endif 	/* __ISkpUVHelper_FWD_DEFINED__ */


#ifndef __ISkpTextureWriter_FWD_DEFINED__
#define __ISkpTextureWriter_FWD_DEFINED__
typedef interface ISkpTextureWriter ISkpTextureWriter;
#endif 	/* __ISkpTextureWriter_FWD_DEFINED__ */


#ifndef __ISkpTextureWriter2_FWD_DEFINED__
#define __ISkpTextureWriter2_FWD_DEFINED__
typedef interface ISkpTextureWriter2 ISkpTextureWriter2;
#endif 	/* __ISkpTextureWriter2_FWD_DEFINED__ */


#ifndef __ISkpVertices_FWD_DEFINED__
#define __ISkpVertices_FWD_DEFINED__
typedef interface ISkpVertices ISkpVertices;
#endif 	/* __ISkpVertices_FWD_DEFINED__ */


#ifndef __ISkpLayer_FWD_DEFINED__
#define __ISkpLayer_FWD_DEFINED__
typedef interface ISkpLayer ISkpLayer;
#endif 	/* __ISkpLayer_FWD_DEFINED__ */


#ifndef __ISkpLayers_FWD_DEFINED__
#define __ISkpLayers_FWD_DEFINED__
typedef interface ISkpLayers ISkpLayers;
#endif 	/* __ISkpLayers_FWD_DEFINED__ */


#ifndef __ISkpMaterial_FWD_DEFINED__
#define __ISkpMaterial_FWD_DEFINED__
typedef interface ISkpMaterial ISkpMaterial;
#endif 	/* __ISkpMaterial_FWD_DEFINED__ */


#ifndef __ISkpMaterials_FWD_DEFINED__
#define __ISkpMaterials_FWD_DEFINED__
typedef interface ISkpMaterials ISkpMaterials;
#endif 	/* __ISkpMaterials_FWD_DEFINED__ */


#ifndef __ISkpTexture_FWD_DEFINED__
#define __ISkpTexture_FWD_DEFINED__
typedef interface ISkpTexture ISkpTexture;
#endif 	/* __ISkpTexture_FWD_DEFINED__ */


#ifndef __ISkpTextures_FWD_DEFINED__
#define __ISkpTextures_FWD_DEFINED__
typedef interface ISkpTextures ISkpTextures;
#endif 	/* __ISkpTextures_FWD_DEFINED__ */


#ifndef __ISkpTransform_FWD_DEFINED__
#define __ISkpTransform_FWD_DEFINED__
typedef interface ISkpTransform ISkpTransform;
#endif 	/* __ISkpTransform_FWD_DEFINED__ */


#ifndef __ISkpComponentDefinition_FWD_DEFINED__
#define __ISkpComponentDefinition_FWD_DEFINED__
typedef interface ISkpComponentDefinition ISkpComponentDefinition;
#endif 	/* __ISkpComponentDefinition_FWD_DEFINED__ */


#ifndef __ISkpComponentDefinitions_FWD_DEFINED__
#define __ISkpComponentDefinitions_FWD_DEFINED__
typedef interface ISkpComponentDefinitions ISkpComponentDefinitions;
#endif 	/* __ISkpComponentDefinitions_FWD_DEFINED__ */


#ifndef __ISkpComponentInstance_FWD_DEFINED__
#define __ISkpComponentInstance_FWD_DEFINED__
typedef interface ISkpComponentInstance ISkpComponentInstance;
#endif 	/* __ISkpComponentInstance_FWD_DEFINED__ */


#ifndef __ISkpComponentInstances_FWD_DEFINED__
#define __ISkpComponentInstances_FWD_DEFINED__
typedef interface ISkpComponentInstances ISkpComponentInstances;
#endif 	/* __ISkpComponentInstances_FWD_DEFINED__ */


#ifndef __ISkpEdgeUse_FWD_DEFINED__
#define __ISkpEdgeUse_FWD_DEFINED__
typedef interface ISkpEdgeUse ISkpEdgeUse;
#endif 	/* __ISkpEdgeUse_FWD_DEFINED__ */


#ifndef __ISkpEdgeUses_FWD_DEFINED__
#define __ISkpEdgeUses_FWD_DEFINED__
typedef interface ISkpEdgeUses ISkpEdgeUses;
#endif 	/* __ISkpEdgeUses_FWD_DEFINED__ */


#ifndef __ISkpLoop_FWD_DEFINED__
#define __ISkpLoop_FWD_DEFINED__
typedef interface ISkpLoop ISkpLoop;
#endif 	/* __ISkpLoop_FWD_DEFINED__ */


#ifndef __ISkpLoops_FWD_DEFINED__
#define __ISkpLoops_FWD_DEFINED__
typedef interface ISkpLoops ISkpLoops;
#endif 	/* __ISkpLoops_FWD_DEFINED__ */


#ifndef __ISkpPolyline3d_FWD_DEFINED__
#define __ISkpPolyline3d_FWD_DEFINED__
typedef interface ISkpPolyline3d ISkpPolyline3d;
#endif 	/* __ISkpPolyline3d_FWD_DEFINED__ */


#ifndef __ISkpPolyline3ds_FWD_DEFINED__
#define __ISkpPolyline3ds_FWD_DEFINED__
typedef interface ISkpPolyline3ds ISkpPolyline3ds;
#endif 	/* __ISkpPolyline3ds_FWD_DEFINED__ */


#ifndef __ISkpConstructionLine_FWD_DEFINED__
#define __ISkpConstructionLine_FWD_DEFINED__
typedef interface ISkpConstructionLine ISkpConstructionLine;
#endif 	/* __ISkpConstructionLine_FWD_DEFINED__ */


#ifndef __ISkpConstructionLines_FWD_DEFINED__
#define __ISkpConstructionLines_FWD_DEFINED__
typedef interface ISkpConstructionLines ISkpConstructionLines;
#endif 	/* __ISkpConstructionLines_FWD_DEFINED__ */


#ifndef __ISkpConstructionPoint_FWD_DEFINED__
#define __ISkpConstructionPoint_FWD_DEFINED__
typedef interface ISkpConstructionPoint ISkpConstructionPoint;
#endif 	/* __ISkpConstructionPoint_FWD_DEFINED__ */


#ifndef __ISkpConstructionPoints_FWD_DEFINED__
#define __ISkpConstructionPoints_FWD_DEFINED__
typedef interface ISkpConstructionPoints ISkpConstructionPoints;
#endif 	/* __ISkpConstructionPoints_FWD_DEFINED__ */


#ifndef __ISkpGroup_FWD_DEFINED__
#define __ISkpGroup_FWD_DEFINED__
typedef interface ISkpGroup ISkpGroup;
#endif 	/* __ISkpGroup_FWD_DEFINED__ */


#ifndef __ISkpGroups_FWD_DEFINED__
#define __ISkpGroups_FWD_DEFINED__
typedef interface ISkpGroups ISkpGroups;
#endif 	/* __ISkpGroups_FWD_DEFINED__ */


#ifndef __ISkpImage_FWD_DEFINED__
#define __ISkpImage_FWD_DEFINED__
typedef interface ISkpImage ISkpImage;
#endif 	/* __ISkpImage_FWD_DEFINED__ */


#ifndef __ISkpImages_FWD_DEFINED__
#define __ISkpImages_FWD_DEFINED__
typedef interface ISkpImages ISkpImages;
#endif 	/* __ISkpImages_FWD_DEFINED__ */


#ifndef __ISkpCamera_FWD_DEFINED__
#define __ISkpCamera_FWD_DEFINED__
typedef interface ISkpCamera ISkpCamera;
#endif 	/* __ISkpCamera_FWD_DEFINED__ */


#ifndef __ISkpCameraM_FWD_DEFINED__
#define __ISkpCameraM_FWD_DEFINED__
typedef interface ISkpCameraM ISkpCameraM;
#endif 	/* __ISkpCameraM_FWD_DEFINED__ */


#ifndef __ISkpPage_FWD_DEFINED__
#define __ISkpPage_FWD_DEFINED__
typedef interface ISkpPage ISkpPage;
#endif 	/* __ISkpPage_FWD_DEFINED__ */


#ifndef __ISkpPageM_FWD_DEFINED__
#define __ISkpPageM_FWD_DEFINED__
typedef interface ISkpPageM ISkpPageM;
#endif 	/* __ISkpPageM_FWD_DEFINED__ */


#ifndef __ISkpPages_FWD_DEFINED__
#define __ISkpPages_FWD_DEFINED__
typedef interface ISkpPages ISkpPages;
#endif 	/* __ISkpPages_FWD_DEFINED__ */


#ifndef __ISkpPagesM_FWD_DEFINED__
#define __ISkpPagesM_FWD_DEFINED__
typedef interface ISkpPagesM ISkpPagesM;
#endif 	/* __ISkpPagesM_FWD_DEFINED__ */


#ifndef __ISkpEntityTransformPair_FWD_DEFINED__
#define __ISkpEntityTransformPair_FWD_DEFINED__
typedef interface ISkpEntityTransformPair ISkpEntityTransformPair;
#endif 	/* __ISkpEntityTransformPair_FWD_DEFINED__ */


#ifndef __ISkpEntityTransformPairs_FWD_DEFINED__
#define __ISkpEntityTransformPairs_FWD_DEFINED__
typedef interface ISkpEntityTransformPairs ISkpEntityTransformPairs;
#endif 	/* __ISkpEntityTransformPairs_FWD_DEFINED__ */


#ifndef __ISkpOpening_FWD_DEFINED__
#define __ISkpOpening_FWD_DEFINED__
typedef interface ISkpOpening ISkpOpening;
#endif 	/* __ISkpOpening_FWD_DEFINED__ */


#ifndef __ISkpOpenings_FWD_DEFINED__
#define __ISkpOpenings_FWD_DEFINED__
typedef interface ISkpOpenings ISkpOpenings;
#endif 	/* __ISkpOpenings_FWD_DEFINED__ */


#ifndef __ISkpSelectionSet_FWD_DEFINED__
#define __ISkpSelectionSet_FWD_DEFINED__
typedef interface ISkpSelectionSet ISkpSelectionSet;
#endif 	/* __ISkpSelectionSet_FWD_DEFINED__ */


#ifndef __ISkpSectionPlane_FWD_DEFINED__
#define __ISkpSectionPlane_FWD_DEFINED__
typedef interface ISkpSectionPlane ISkpSectionPlane;
#endif 	/* __ISkpSectionPlane_FWD_DEFINED__ */


#ifndef __ISkpSectionPlanes_FWD_DEFINED__
#define __ISkpSectionPlanes_FWD_DEFINED__
typedef interface ISkpSectionPlanes ISkpSectionPlanes;
#endif 	/* __ISkpSectionPlanes_FWD_DEFINED__ */


#ifndef __ISkpEntityProviderStatistics_FWD_DEFINED__
#define __ISkpEntityProviderStatistics_FWD_DEFINED__
typedef interface ISkpEntityProviderStatistics ISkpEntityProviderStatistics;
#endif 	/* __ISkpEntityProviderStatistics_FWD_DEFINED__ */


#ifndef __ISkpStyleManager_FWD_DEFINED__
#define __ISkpStyleManager_FWD_DEFINED__
typedef interface ISkpStyleManager ISkpStyleManager;
#endif 	/* __ISkpStyleManager_FWD_DEFINED__ */


#ifndef __ISkpStyleManagerM_FWD_DEFINED__
#define __ISkpStyleManagerM_FWD_DEFINED__
typedef interface ISkpStyleManagerM ISkpStyleManagerM;
#endif 	/* __ISkpStyleManagerM_FWD_DEFINED__ */


#ifndef __ISkpStyle_FWD_DEFINED__
#define __ISkpStyle_FWD_DEFINED__
typedef interface ISkpStyle ISkpStyle;
#endif 	/* __ISkpStyle_FWD_DEFINED__ */


#ifndef __ISkpStyleM_FWD_DEFINED__
#define __ISkpStyleM_FWD_DEFINED__
typedef interface ISkpStyleM ISkpStyleM;
#endif 	/* __ISkpStyleM_FWD_DEFINED__ */


#ifndef __ISkpStyles_FWD_DEFINED__
#define __ISkpStyles_FWD_DEFINED__
typedef interface ISkpStyles ISkpStyles;
#endif 	/* __ISkpStyles_FWD_DEFINED__ */


#ifndef __ISkpPoint3d_FWD_DEFINED__
#define __ISkpPoint3d_FWD_DEFINED__
typedef interface ISkpPoint3d ISkpPoint3d;
#endif 	/* __ISkpPoint3d_FWD_DEFINED__ */


#ifndef __ISkpVector3d_FWD_DEFINED__
#define __ISkpVector3d_FWD_DEFINED__
typedef interface ISkpVector3d ISkpVector3d;
#endif 	/* __ISkpVector3d_FWD_DEFINED__ */


#ifndef __ISkpApplication_FWD_DEFINED__
#define __ISkpApplication_FWD_DEFINED__
typedef interface ISkpApplication ISkpApplication;
#endif 	/* __ISkpApplication_FWD_DEFINED__ */


#ifndef __ISkpViewProvider_FWD_DEFINED__
#define __ISkpViewProvider_FWD_DEFINED__
typedef interface ISkpViewProvider ISkpViewProvider;
#endif 	/* __ISkpViewProvider_FWD_DEFINED__ */


#ifndef __ISkpDocument_FWD_DEFINED__
#define __ISkpDocument_FWD_DEFINED__
typedef interface ISkpDocument ISkpDocument;
#endif 	/* __ISkpDocument_FWD_DEFINED__ */


#ifndef __ISkpPlane_FWD_DEFINED__
#define __ISkpPlane_FWD_DEFINED__
typedef interface ISkpPlane ISkpPlane;
#endif 	/* __ISkpPlane_FWD_DEFINED__ */


#ifndef __ISkpView_FWD_DEFINED__
#define __ISkpView_FWD_DEFINED__
typedef interface ISkpView ISkpView;
#endif 	/* __ISkpView_FWD_DEFINED__ */


#ifndef __ISkpSelectionSet_FWD_DEFINED__
#define __ISkpSelectionSet_FWD_DEFINED__
typedef interface ISkpSelectionSet ISkpSelectionSet;
#endif 	/* __ISkpSelectionSet_FWD_DEFINED__ */


#ifndef __ISkpHLRWriter_FWD_DEFINED__
#define __ISkpHLRWriter_FWD_DEFINED__
typedef interface ISkpHLRWriter ISkpHLRWriter;
#endif 	/* __ISkpHLRWriter_FWD_DEFINED__ */


#ifndef __ISkpHLRGeneration_FWD_DEFINED__
#define __ISkpHLRGeneration_FWD_DEFINED__
typedef interface ISkpHLRGeneration ISkpHLRGeneration;
#endif 	/* __ISkpHLRGeneration_FWD_DEFINED__ */


#ifndef __ISkpOptionsManager_FWD_DEFINED__
#define __ISkpOptionsManager_FWD_DEFINED__
typedef interface ISkpOptionsManager ISkpOptionsManager;
#endif 	/* __ISkpOptionsManager_FWD_DEFINED__ */


#ifndef __ISkpOptionsProvider_FWD_DEFINED__
#define __ISkpOptionsProvider_FWD_DEFINED__
typedef interface ISkpOptionsProvider ISkpOptionsProvider;
#endif 	/* __ISkpOptionsProvider_FWD_DEFINED__ */


#ifndef __ISkpAttributes_FWD_DEFINED__
#define __ISkpAttributes_FWD_DEFINED__
typedef interface ISkpAttributes ISkpAttributes;
#endif 	/* __ISkpAttributes_FWD_DEFINED__ */


#ifndef __ISkpAttribute_FWD_DEFINED__
#define __ISkpAttribute_FWD_DEFINED__
typedef interface ISkpAttribute ISkpAttribute;
#endif 	/* __ISkpAttribute_FWD_DEFINED__ */


#ifndef __ISkpFaceTextureCoordsAttribute_FWD_DEFINED__
#define __ISkpFaceTextureCoordsAttribute_FWD_DEFINED__
typedef interface ISkpFaceTextureCoordsAttribute ISkpFaceTextureCoordsAttribute;
#endif 	/* __ISkpFaceTextureCoordsAttribute_FWD_DEFINED__ */


#ifndef __ISkpAttributeDictionary_FWD_DEFINED__
#define __ISkpAttributeDictionary_FWD_DEFINED__
typedef interface ISkpAttributeDictionary ISkpAttributeDictionary;
#endif 	/* __ISkpAttributeDictionary_FWD_DEFINED__ */


#ifndef __ISkpCurve_FWD_DEFINED__
#define __ISkpCurve_FWD_DEFINED__
typedef interface ISkpCurve ISkpCurve;
#endif 	/* __ISkpCurve_FWD_DEFINED__ */


#ifndef __ISkpArcCurve_FWD_DEFINED__
#define __ISkpArcCurve_FWD_DEFINED__
typedef interface ISkpArcCurve ISkpArcCurve;
#endif 	/* __ISkpArcCurve_FWD_DEFINED__ */


#ifndef __ISkpLineCurve_FWD_DEFINED__
#define __ISkpLineCurve_FWD_DEFINED__
typedef interface ISkpLineCurve ISkpLineCurve;
#endif 	/* __ISkpLineCurve_FWD_DEFINED__ */


#ifndef __ISkpBoundingBox3d_FWD_DEFINED__
#define __ISkpBoundingBox3d_FWD_DEFINED__
typedef interface ISkpBoundingBox3d ISkpBoundingBox3d;
#endif 	/* __ISkpBoundingBox3d_FWD_DEFINED__ */


#ifndef __ISkpDrawingElement_FWD_DEFINED__
#define __ISkpDrawingElement_FWD_DEFINED__
typedef interface ISkpDrawingElement ISkpDrawingElement;
#endif 	/* __ISkpDrawingElement_FWD_DEFINED__ */


#ifndef __ISkpNamedValue_FWD_DEFINED__
#define __ISkpNamedValue_FWD_DEFINED__
typedef interface ISkpNamedValue ISkpNamedValue;
#endif 	/* __ISkpNamedValue_FWD_DEFINED__ */


#ifndef __ISkpNamedValues_FWD_DEFINED__
#define __ISkpNamedValues_FWD_DEFINED__
typedef interface ISkpNamedValues ISkpNamedValues;
#endif 	/* __ISkpNamedValues_FWD_DEFINED__ */


#ifndef __ISkpPolygonMesh_FWD_DEFINED__
#define __ISkpPolygonMesh_FWD_DEFINED__
typedef interface ISkpPolygonMesh ISkpPolygonMesh;
#endif 	/* __ISkpPolygonMesh_FWD_DEFINED__ */


#ifndef __ISkpTextureWriter_FWD_DEFINED__
#define __ISkpTextureWriter_FWD_DEFINED__
typedef interface ISkpTextureWriter ISkpTextureWriter;
#endif 	/* __ISkpTextureWriter_FWD_DEFINED__ */


#ifndef __ISkpEntity_FWD_DEFINED__
#define __ISkpEntity_FWD_DEFINED__
typedef interface ISkpEntity ISkpEntity;
#endif 	/* __ISkpEntity_FWD_DEFINED__ */


#ifndef __ISkpEntities_FWD_DEFINED__
#define __ISkpEntities_FWD_DEFINED__
typedef interface ISkpEntities ISkpEntities;
#endif 	/* __ISkpEntities_FWD_DEFINED__ */


#ifndef __ISkpEntityTransformPairs_FWD_DEFINED__
#define __ISkpEntityTransformPairs_FWD_DEFINED__
typedef interface ISkpEntityTransformPairs ISkpEntityTransformPairs;
#endif 	/* __ISkpEntityTransformPairs_FWD_DEFINED__ */


#ifndef __ISkpEdge_FWD_DEFINED__
#define __ISkpEdge_FWD_DEFINED__
typedef interface ISkpEdge ISkpEdge;
#endif 	/* __ISkpEdge_FWD_DEFINED__ */


#ifndef __ISkpEdges_FWD_DEFINED__
#define __ISkpEdges_FWD_DEFINED__
typedef interface ISkpEdges ISkpEdges;
#endif 	/* __ISkpEdges_FWD_DEFINED__ */


#ifndef __ISkpVertex_FWD_DEFINED__
#define __ISkpVertex_FWD_DEFINED__
typedef interface ISkpVertex ISkpVertex;
#endif 	/* __ISkpVertex_FWD_DEFINED__ */


#ifndef __ISkpVertices_FWD_DEFINED__
#define __ISkpVertices_FWD_DEFINED__
typedef interface ISkpVertices ISkpVertices;
#endif 	/* __ISkpVertices_FWD_DEFINED__ */


#ifndef __ISkpLayer_FWD_DEFINED__
#define __ISkpLayer_FWD_DEFINED__
typedef interface ISkpLayer ISkpLayer;
#endif 	/* __ISkpLayer_FWD_DEFINED__ */


#ifndef __ISkpLayers_FWD_DEFINED__
#define __ISkpLayers_FWD_DEFINED__
typedef interface ISkpLayers ISkpLayers;
#endif 	/* __ISkpLayers_FWD_DEFINED__ */


#ifndef __ISkpMaterial_FWD_DEFINED__
#define __ISkpMaterial_FWD_DEFINED__
typedef interface ISkpMaterial ISkpMaterial;
#endif 	/* __ISkpMaterial_FWD_DEFINED__ */


#ifndef __ISkpMaterials_FWD_DEFINED__
#define __ISkpMaterials_FWD_DEFINED__
typedef interface ISkpMaterials ISkpMaterials;
#endif 	/* __ISkpMaterials_FWD_DEFINED__ */


#ifndef __ISkpTexture_FWD_DEFINED__
#define __ISkpTexture_FWD_DEFINED__
typedef interface ISkpTexture ISkpTexture;
#endif 	/* __ISkpTexture_FWD_DEFINED__ */


#ifndef __ISkpTextures_FWD_DEFINED__
#define __ISkpTextures_FWD_DEFINED__
typedef interface ISkpTextures ISkpTextures;
#endif 	/* __ISkpTextures_FWD_DEFINED__ */


#ifndef __ISkpFace_FWD_DEFINED__
#define __ISkpFace_FWD_DEFINED__
typedef interface ISkpFace ISkpFace;
#endif 	/* __ISkpFace_FWD_DEFINED__ */


#ifndef __ISkpFaces_FWD_DEFINED__
#define __ISkpFaces_FWD_DEFINED__
typedef interface ISkpFaces ISkpFaces;
#endif 	/* __ISkpFaces_FWD_DEFINED__ */


#ifndef __ISkpFont_FWD_DEFINED__
#define __ISkpFont_FWD_DEFINED__
typedef interface ISkpFont ISkpFont;
#endif 	/* __ISkpFont_FWD_DEFINED__ */


#ifndef __ISkpFonts_FWD_DEFINED__
#define __ISkpFonts_FWD_DEFINED__
typedef interface ISkpFonts ISkpFonts;
#endif 	/* __ISkpFonts_FWD_DEFINED__ */


#ifndef __ISkpText_FWD_DEFINED__
#define __ISkpText_FWD_DEFINED__
typedef interface ISkpText ISkpText;
#endif 	/* __ISkpText_FWD_DEFINED__ */


#ifndef __ISkpTexts_FWD_DEFINED__
#define __ISkpTexts_FWD_DEFINED__
typedef interface ISkpTexts ISkpTexts;
#endif 	/* __ISkpTexts_FWD_DEFINED__ */


#ifndef __ISkpSectionPlane_FWD_DEFINED__
#define __ISkpSectionPlane_FWD_DEFINED__
typedef interface ISkpSectionPlane ISkpSectionPlane;
#endif 	/* __ISkpSectionPlane_FWD_DEFINED__ */


#ifndef __ISkpSectionPlanes_FWD_DEFINED__
#define __ISkpSectionPlanes_FWD_DEFINED__
typedef interface ISkpSectionPlanes ISkpSectionPlanes;
#endif 	/* __ISkpSectionPlanes_FWD_DEFINED__ */


#ifndef __ISkpDimension_FWD_DEFINED__
#define __ISkpDimension_FWD_DEFINED__
typedef interface ISkpDimension ISkpDimension;
#endif 	/* __ISkpDimension_FWD_DEFINED__ */


#ifndef __ISkpDimensionLinear_FWD_DEFINED__
#define __ISkpDimensionLinear_FWD_DEFINED__
typedef interface ISkpDimensionLinear ISkpDimensionLinear;
#endif 	/* __ISkpDimensionLinear_FWD_DEFINED__ */


#ifndef __ISkpDimensionRadial_FWD_DEFINED__
#define __ISkpDimensionRadial_FWD_DEFINED__
typedef interface ISkpDimensionRadial ISkpDimensionRadial;
#endif 	/* __ISkpDimensionRadial_FWD_DEFINED__ */


#ifndef __ISkpDimensionStyle_FWD_DEFINED__
#define __ISkpDimensionStyle_FWD_DEFINED__
typedef interface ISkpDimensionStyle ISkpDimensionStyle;
#endif 	/* __ISkpDimensionStyle_FWD_DEFINED__ */


#ifndef __ISkpDimensions_FWD_DEFINED__
#define __ISkpDimensions_FWD_DEFINED__
typedef interface ISkpDimensions ISkpDimensions;
#endif 	/* __ISkpDimensions_FWD_DEFINED__ */


#ifndef __ISkpTransform_FWD_DEFINED__
#define __ISkpTransform_FWD_DEFINED__
typedef interface ISkpTransform ISkpTransform;
#endif 	/* __ISkpTransform_FWD_DEFINED__ */


#ifndef __ISkpCamera_FWD_DEFINED__
#define __ISkpCamera_FWD_DEFINED__
typedef interface ISkpCamera ISkpCamera;
#endif 	/* __ISkpCamera_FWD_DEFINED__ */


#ifndef __ISkpPage_FWD_DEFINED__
#define __ISkpPage_FWD_DEFINED__
typedef interface ISkpPage ISkpPage;
#endif 	/* __ISkpPage_FWD_DEFINED__ */


#ifndef __ISkpPages_FWD_DEFINED__
#define __ISkpPages_FWD_DEFINED__
typedef interface ISkpPages ISkpPages;
#endif 	/* __ISkpPages_FWD_DEFINED__ */


#ifndef __ISkpComponentDefinition_FWD_DEFINED__
#define __ISkpComponentDefinition_FWD_DEFINED__
typedef interface ISkpComponentDefinition ISkpComponentDefinition;
#endif 	/* __ISkpComponentDefinition_FWD_DEFINED__ */


#ifndef __ISkpComponentDefinitions_FWD_DEFINED__
#define __ISkpComponentDefinitions_FWD_DEFINED__
typedef interface ISkpComponentDefinitions ISkpComponentDefinitions;
#endif 	/* __ISkpComponentDefinitions_FWD_DEFINED__ */


#ifndef __ISkpComponentInstance_FWD_DEFINED__
#define __ISkpComponentInstance_FWD_DEFINED__
typedef interface ISkpComponentInstance ISkpComponentInstance;
#endif 	/* __ISkpComponentInstance_FWD_DEFINED__ */


#ifndef __ISkpComponentInstances_FWD_DEFINED__
#define __ISkpComponentInstances_FWD_DEFINED__
typedef interface ISkpComponentInstances ISkpComponentInstances;
#endif 	/* __ISkpComponentInstances_FWD_DEFINED__ */


#ifndef __ISkpEdgeUse_FWD_DEFINED__
#define __ISkpEdgeUse_FWD_DEFINED__
typedef interface ISkpEdgeUse ISkpEdgeUse;
#endif 	/* __ISkpEdgeUse_FWD_DEFINED__ */


#ifndef __ISkpEdgeUses_FWD_DEFINED__
#define __ISkpEdgeUses_FWD_DEFINED__
typedef interface ISkpEdgeUses ISkpEdgeUses;
#endif 	/* __ISkpEdgeUses_FWD_DEFINED__ */


#ifndef __ISkpLoop_FWD_DEFINED__
#define __ISkpLoop_FWD_DEFINED__
typedef interface ISkpLoop ISkpLoop;
#endif 	/* __ISkpLoop_FWD_DEFINED__ */


#ifndef __ISkpLoops_FWD_DEFINED__
#define __ISkpLoops_FWD_DEFINED__
typedef interface ISkpLoops ISkpLoops;
#endif 	/* __ISkpLoops_FWD_DEFINED__ */


#ifndef __ISkpGroup_FWD_DEFINED__
#define __ISkpGroup_FWD_DEFINED__
typedef interface ISkpGroup ISkpGroup;
#endif 	/* __ISkpGroup_FWD_DEFINED__ */


#ifndef __ISkpGroups_FWD_DEFINED__
#define __ISkpGroups_FWD_DEFINED__
typedef interface ISkpGroups ISkpGroups;
#endif 	/* __ISkpGroups_FWD_DEFINED__ */


#ifndef __ISkpConstructionLine_FWD_DEFINED__
#define __ISkpConstructionLine_FWD_DEFINED__
typedef interface ISkpConstructionLine ISkpConstructionLine;
#endif 	/* __ISkpConstructionLine_FWD_DEFINED__ */


#ifndef __ISkpConstructionLines_FWD_DEFINED__
#define __ISkpConstructionLines_FWD_DEFINED__
typedef interface ISkpConstructionLines ISkpConstructionLines;
#endif 	/* __ISkpConstructionLines_FWD_DEFINED__ */


#ifndef __ISkpConstructionPoint_FWD_DEFINED__
#define __ISkpConstructionPoint_FWD_DEFINED__
typedef interface ISkpConstructionPoint ISkpConstructionPoint;
#endif 	/* __ISkpConstructionPoint_FWD_DEFINED__ */


#ifndef __ISkpConstructionPoints_FWD_DEFINED__
#define __ISkpConstructionPoints_FWD_DEFINED__
typedef interface ISkpConstructionPoints ISkpConstructionPoints;
#endif 	/* __ISkpConstructionPoints_FWD_DEFINED__ */


#ifndef __ISkpPolyline3d_FWD_DEFINED__
#define __ISkpPolyline3d_FWD_DEFINED__
typedef interface ISkpPolyline3d ISkpPolyline3d;
#endif 	/* __ISkpPolyline3d_FWD_DEFINED__ */


#ifndef __ISkpPolyline3ds_FWD_DEFINED__
#define __ISkpPolyline3ds_FWD_DEFINED__
typedef interface ISkpPolyline3ds ISkpPolyline3ds;
#endif 	/* __ISkpPolyline3ds_FWD_DEFINED__ */


#ifndef __ISkpImage_FWD_DEFINED__
#define __ISkpImage_FWD_DEFINED__
typedef interface ISkpImage ISkpImage;
#endif 	/* __ISkpImage_FWD_DEFINED__ */


#ifndef __ISkpImages_FWD_DEFINED__
#define __ISkpImages_FWD_DEFINED__
typedef interface ISkpImages ISkpImages;
#endif 	/* __ISkpImages_FWD_DEFINED__ */


#ifndef __ISkpOpening_FWD_DEFINED__
#define __ISkpOpening_FWD_DEFINED__
typedef interface ISkpOpening ISkpOpening;
#endif 	/* __ISkpOpening_FWD_DEFINED__ */


#ifndef __ISkpOpenings_FWD_DEFINED__
#define __ISkpOpenings_FWD_DEFINED__
typedef interface ISkpOpenings ISkpOpenings;
#endif 	/* __ISkpOpenings_FWD_DEFINED__ */


#ifndef __ISkpEntityProvider_FWD_DEFINED__
#define __ISkpEntityProvider_FWD_DEFINED__
typedef interface ISkpEntityProvider ISkpEntityProvider;
#endif 	/* __ISkpEntityProvider_FWD_DEFINED__ */


#ifndef __ISkpCorrectPerspective_FWD_DEFINED__
#define __ISkpCorrectPerspective_FWD_DEFINED__
typedef interface ISkpCorrectPerspective ISkpCorrectPerspective;
#endif 	/* __ISkpCorrectPerspective_FWD_DEFINED__ */


#ifndef __ISkpUVHelper_FWD_DEFINED__
#define __ISkpUVHelper_FWD_DEFINED__
typedef interface ISkpUVHelper ISkpUVHelper;
#endif 	/* __ISkpUVHelper_FWD_DEFINED__ */


#ifndef __ISkpFileReader_FWD_DEFINED__
#define __ISkpFileReader_FWD_DEFINED__
typedef interface ISkpFileReader ISkpFileReader;
#endif 	/* __ISkpFileReader_FWD_DEFINED__ */


#ifndef __ISkpCoordinateSystem_FWD_DEFINED__
#define __ISkpCoordinateSystem_FWD_DEFINED__
typedef interface ISkpCoordinateSystem ISkpCoordinateSystem;
#endif 	/* __ISkpCoordinateSystem_FWD_DEFINED__ */


#ifndef __ISkpRenderer_FWD_DEFINED__
#define __ISkpRenderer_FWD_DEFINED__
typedef interface ISkpRenderer ISkpRenderer;
#endif 	/* __ISkpRenderer_FWD_DEFINED__ */


#ifndef __ISkpStyleManager_FWD_DEFINED__
#define __ISkpStyleManager_FWD_DEFINED__
typedef interface ISkpStyleManager ISkpStyleManager;
#endif 	/* __ISkpStyleManager_FWD_DEFINED__ */


#ifndef __ISkpStyleManagerM_FWD_DEFINED__
#define __ISkpStyleManagerM_FWD_DEFINED__
typedef interface ISkpStyleManagerM ISkpStyleManagerM;
#endif 	/* __ISkpStyleManagerM_FWD_DEFINED__ */


#ifndef __ISkpStyle_FWD_DEFINED__
#define __ISkpStyle_FWD_DEFINED__
typedef interface ISkpStyle ISkpStyle;
#endif 	/* __ISkpStyle_FWD_DEFINED__ */


#ifndef __ISkpStyleM_FWD_DEFINED__
#define __ISkpStyleM_FWD_DEFINED__
typedef interface ISkpStyleM ISkpStyleM;
#endif 	/* __ISkpStyleM_FWD_DEFINED__ */


#ifndef __ISkpStyles_FWD_DEFINED__
#define __ISkpStyles_FWD_DEFINED__
typedef interface ISkpStyles ISkpStyles;
#endif 	/* __ISkpStyles_FWD_DEFINED__ */


#ifndef __ISkpHLRView_FWD_DEFINED__
#define __ISkpHLRView_FWD_DEFINED__
typedef interface ISkpHLRView ISkpHLRView;
#endif 	/* __ISkpHLRView_FWD_DEFINED__ */


#ifndef __ISkpInputPointFinder_FWD_DEFINED__
#define __ISkpInputPointFinder_FWD_DEFINED__
typedef interface ISkpInputPointFinder ISkpInputPointFinder;
#endif 	/* __ISkpInputPointFinder_FWD_DEFINED__ */


#ifndef __ISkpCameraM_FWD_DEFINED__
#define __ISkpCameraM_FWD_DEFINED__
typedef interface ISkpCameraM ISkpCameraM;
#endif 	/* __ISkpCameraM_FWD_DEFINED__ */


#ifndef __ISkpNamedValuesM_FWD_DEFINED__
#define __ISkpNamedValuesM_FWD_DEFINED__
typedef interface ISkpNamedValuesM ISkpNamedValuesM;
#endif 	/* __ISkpNamedValuesM_FWD_DEFINED__ */


#ifndef __SkpCurve_FWD_DEFINED__
#define __SkpCurve_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpCurve SkpCurve;
#else
typedef struct SkpCurve SkpCurve;
#endif /* __cplusplus */

#endif 	/* __SkpCurve_FWD_DEFINED__ */


#ifndef __SkpArcCurve_FWD_DEFINED__
#define __SkpArcCurve_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpArcCurve SkpArcCurve;
#else
typedef struct SkpArcCurve SkpArcCurve;
#endif /* __cplusplus */

#endif 	/* __SkpArcCurve_FWD_DEFINED__ */


#ifndef __SkpLineCurve_FWD_DEFINED__
#define __SkpLineCurve_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpLineCurve SkpLineCurve;
#else
typedef struct SkpLineCurve SkpLineCurve;
#endif /* __cplusplus */

#endif 	/* __SkpLineCurve_FWD_DEFINED__ */


#ifndef __SkpBoundingBox3d_FWD_DEFINED__
#define __SkpBoundingBox3d_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpBoundingBox3d SkpBoundingBox3d;
#else
typedef struct SkpBoundingBox3d SkpBoundingBox3d;
#endif /* __cplusplus */

#endif 	/* __SkpBoundingBox3d_FWD_DEFINED__ */


#ifndef __SkpDimensions_FWD_DEFINED__
#define __SkpDimensions_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpDimensions SkpDimensions;
#else
typedef struct SkpDimensions SkpDimensions;
#endif /* __cplusplus */

#endif 	/* __SkpDimensions_FWD_DEFINED__ */


#ifndef __SkpDimensionStyle_FWD_DEFINED__
#define __SkpDimensionStyle_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpDimensionStyle SkpDimensionStyle;
#else
typedef struct SkpDimensionStyle SkpDimensionStyle;
#endif /* __cplusplus */

#endif 	/* __SkpDimensionStyle_FWD_DEFINED__ */


#ifndef __SkpDimensionRadial_FWD_DEFINED__
#define __SkpDimensionRadial_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpDimensionRadial SkpDimensionRadial;
#else
typedef struct SkpDimensionRadial SkpDimensionRadial;
#endif /* __cplusplus */

#endif 	/* __SkpDimensionRadial_FWD_DEFINED__ */


#ifndef __SkpDimensionLinear_FWD_DEFINED__
#define __SkpDimensionLinear_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpDimensionLinear SkpDimensionLinear;
#else
typedef struct SkpDimensionLinear SkpDimensionLinear;
#endif /* __cplusplus */

#endif 	/* __SkpDimensionLinear_FWD_DEFINED__ */


#ifndef __SkpFont_FWD_DEFINED__
#define __SkpFont_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpFont SkpFont;
#else
typedef struct SkpFont SkpFont;
#endif /* __cplusplus */

#endif 	/* __SkpFont_FWD_DEFINED__ */


#ifndef __SkpFonts_FWD_DEFINED__
#define __SkpFonts_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpFonts SkpFonts;
#else
typedef struct SkpFonts SkpFonts;
#endif /* __cplusplus */

#endif 	/* __SkpFonts_FWD_DEFINED__ */


#ifndef __SkpView_FWD_DEFINED__
#define __SkpView_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpView SkpView;
#else
typedef struct SkpView SkpView;
#endif /* __cplusplus */

#endif 	/* __SkpView_FWD_DEFINED__ */


#ifndef __SkpText_FWD_DEFINED__
#define __SkpText_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpText SkpText;
#else
typedef struct SkpText SkpText;
#endif /* __cplusplus */

#endif 	/* __SkpText_FWD_DEFINED__ */


#ifndef __SkpTexts_FWD_DEFINED__
#define __SkpTexts_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpTexts SkpTexts;
#else
typedef struct SkpTexts SkpTexts;
#endif /* __cplusplus */

#endif 	/* __SkpTexts_FWD_DEFINED__ */


#ifndef __SkpOptionsManager_FWD_DEFINED__
#define __SkpOptionsManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpOptionsManager SkpOptionsManager;
#else
typedef struct SkpOptionsManager SkpOptionsManager;
#endif /* __cplusplus */

#endif 	/* __SkpOptionsManager_FWD_DEFINED__ */


#ifndef __SkpOptionsProvider_FWD_DEFINED__
#define __SkpOptionsProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpOptionsProvider SkpOptionsProvider;
#else
typedef struct SkpOptionsProvider SkpOptionsProvider;
#endif /* __cplusplus */

#endif 	/* __SkpOptionsProvider_FWD_DEFINED__ */


#ifndef __SkpFaceTextureCoordsAttribute_FWD_DEFINED__
#define __SkpFaceTextureCoordsAttribute_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpFaceTextureCoordsAttribute SkpFaceTextureCoordsAttribute;
#else
typedef struct SkpFaceTextureCoordsAttribute SkpFaceTextureCoordsAttribute;
#endif /* __cplusplus */

#endif 	/* __SkpFaceTextureCoordsAttribute_FWD_DEFINED__ */


#ifndef __SkpAttributeDictionary_FWD_DEFINED__
#define __SkpAttributeDictionary_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpAttributeDictionary SkpAttributeDictionary;
#else
typedef struct SkpAttributeDictionary SkpAttributeDictionary;
#endif /* __cplusplus */

#endif 	/* __SkpAttributeDictionary_FWD_DEFINED__ */


#ifndef __SkpAttribute_FWD_DEFINED__
#define __SkpAttribute_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpAttribute SkpAttribute;
#else
typedef struct SkpAttribute SkpAttribute;
#endif /* __cplusplus */

#endif 	/* __SkpAttribute_FWD_DEFINED__ */


#ifndef __SkpAttributes_FWD_DEFINED__
#define __SkpAttributes_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpAttributes SkpAttributes;
#else
typedef struct SkpAttributes SkpAttributes;
#endif /* __cplusplus */

#endif 	/* __SkpAttributes_FWD_DEFINED__ */


#ifndef __SkpPlane_FWD_DEFINED__
#define __SkpPlane_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpPlane SkpPlane;
#else
typedef struct SkpPlane SkpPlane;
#endif /* __cplusplus */

#endif 	/* __SkpPlane_FWD_DEFINED__ */


#ifndef __SkpNamedValue_FWD_DEFINED__
#define __SkpNamedValue_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpNamedValue SkpNamedValue;
#else
typedef struct SkpNamedValue SkpNamedValue;
#endif /* __cplusplus */

#endif 	/* __SkpNamedValue_FWD_DEFINED__ */


#ifndef __SkpEntities_FWD_DEFINED__
#define __SkpEntities_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpEntities SkpEntities;
#else
typedef struct SkpEntities SkpEntities;
#endif /* __cplusplus */

#endif 	/* __SkpEntities_FWD_DEFINED__ */


#ifndef __SkpPolygonMesh_FWD_DEFINED__
#define __SkpPolygonMesh_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpPolygonMesh SkpPolygonMesh;
#else
typedef struct SkpPolygonMesh SkpPolygonMesh;
#endif /* __cplusplus */

#endif 	/* __SkpPolygonMesh_FWD_DEFINED__ */


#ifndef __SkpFace_FWD_DEFINED__
#define __SkpFace_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpFace SkpFace;
#else
typedef struct SkpFace SkpFace;
#endif /* __cplusplus */

#endif 	/* __SkpFace_FWD_DEFINED__ */


#ifndef __SkpFaces_FWD_DEFINED__
#define __SkpFaces_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpFaces SkpFaces;
#else
typedef struct SkpFaces SkpFaces;
#endif /* __cplusplus */

#endif 	/* __SkpFaces_FWD_DEFINED__ */


#ifndef __SkpTextureWriter_FWD_DEFINED__
#define __SkpTextureWriter_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpTextureWriter SkpTextureWriter;
#else
typedef struct SkpTextureWriter SkpTextureWriter;
#endif /* __cplusplus */

#endif 	/* __SkpTextureWriter_FWD_DEFINED__ */


#ifndef __SkpApplication_FWD_DEFINED__
#define __SkpApplication_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpApplication SkpApplication;
#else
typedef struct SkpApplication SkpApplication;
#endif /* __cplusplus */

#endif 	/* __SkpApplication_FWD_DEFINED__ */


#ifndef __SkpDocument_FWD_DEFINED__
#define __SkpDocument_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpDocument SkpDocument;
#else
typedef struct SkpDocument SkpDocument;
#endif /* __cplusplus */

#endif 	/* __SkpDocument_FWD_DEFINED__ */


#ifndef __SkpEdge_FWD_DEFINED__
#define __SkpEdge_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpEdge SkpEdge;
#else
typedef struct SkpEdge SkpEdge;
#endif /* __cplusplus */

#endif 	/* __SkpEdge_FWD_DEFINED__ */


#ifndef __SkpEdges_FWD_DEFINED__
#define __SkpEdges_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpEdges SkpEdges;
#else
typedef struct SkpEdges SkpEdges;
#endif /* __cplusplus */

#endif 	/* __SkpEdges_FWD_DEFINED__ */


#ifndef __SkpNamedValues_FWD_DEFINED__
#define __SkpNamedValues_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpNamedValues SkpNamedValues;
#else
typedef struct SkpNamedValues SkpNamedValues;
#endif /* __cplusplus */

#endif 	/* __SkpNamedValues_FWD_DEFINED__ */


#ifndef __SkpVertex_FWD_DEFINED__
#define __SkpVertex_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpVertex SkpVertex;
#else
typedef struct SkpVertex SkpVertex;
#endif /* __cplusplus */

#endif 	/* __SkpVertex_FWD_DEFINED__ */


#ifndef __SkpVertices_FWD_DEFINED__
#define __SkpVertices_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpVertices SkpVertices;
#else
typedef struct SkpVertices SkpVertices;
#endif /* __cplusplus */

#endif 	/* __SkpVertices_FWD_DEFINED__ */


#ifndef __SkpLayer_FWD_DEFINED__
#define __SkpLayer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpLayer SkpLayer;
#else
typedef struct SkpLayer SkpLayer;
#endif /* __cplusplus */

#endif 	/* __SkpLayer_FWD_DEFINED__ */


#ifndef __SkpLayers_FWD_DEFINED__
#define __SkpLayers_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpLayers SkpLayers;
#else
typedef struct SkpLayers SkpLayers;
#endif /* __cplusplus */

#endif 	/* __SkpLayers_FWD_DEFINED__ */


#ifndef __SkpMaterial_FWD_DEFINED__
#define __SkpMaterial_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpMaterial SkpMaterial;
#else
typedef struct SkpMaterial SkpMaterial;
#endif /* __cplusplus */

#endif 	/* __SkpMaterial_FWD_DEFINED__ */


#ifndef __SkpMaterials_FWD_DEFINED__
#define __SkpMaterials_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpMaterials SkpMaterials;
#else
typedef struct SkpMaterials SkpMaterials;
#endif /* __cplusplus */

#endif 	/* __SkpMaterials_FWD_DEFINED__ */


#ifndef __SkpTexture_FWD_DEFINED__
#define __SkpTexture_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpTexture SkpTexture;
#else
typedef struct SkpTexture SkpTexture;
#endif /* __cplusplus */

#endif 	/* __SkpTexture_FWD_DEFINED__ */


#ifndef __SkpTextures_FWD_DEFINED__
#define __SkpTextures_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpTextures SkpTextures;
#else
typedef struct SkpTextures SkpTextures;
#endif /* __cplusplus */

#endif 	/* __SkpTextures_FWD_DEFINED__ */


#ifndef __SkpTransform_FWD_DEFINED__
#define __SkpTransform_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpTransform SkpTransform;
#else
typedef struct SkpTransform SkpTransform;
#endif /* __cplusplus */

#endif 	/* __SkpTransform_FWD_DEFINED__ */


#ifndef __SkpComponentDefinition_FWD_DEFINED__
#define __SkpComponentDefinition_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpComponentDefinition SkpComponentDefinition;
#else
typedef struct SkpComponentDefinition SkpComponentDefinition;
#endif /* __cplusplus */

#endif 	/* __SkpComponentDefinition_FWD_DEFINED__ */


#ifndef __SkpComponentDefinitions_FWD_DEFINED__
#define __SkpComponentDefinitions_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpComponentDefinitions SkpComponentDefinitions;
#else
typedef struct SkpComponentDefinitions SkpComponentDefinitions;
#endif /* __cplusplus */

#endif 	/* __SkpComponentDefinitions_FWD_DEFINED__ */


#ifndef __SkpComponentInstance_FWD_DEFINED__
#define __SkpComponentInstance_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpComponentInstance SkpComponentInstance;
#else
typedef struct SkpComponentInstance SkpComponentInstance;
#endif /* __cplusplus */

#endif 	/* __SkpComponentInstance_FWD_DEFINED__ */


#ifndef __SkpComponentInstances_FWD_DEFINED__
#define __SkpComponentInstances_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpComponentInstances SkpComponentInstances;
#else
typedef struct SkpComponentInstances SkpComponentInstances;
#endif /* __cplusplus */

#endif 	/* __SkpComponentInstances_FWD_DEFINED__ */


#ifndef __SkpEdgeUse_FWD_DEFINED__
#define __SkpEdgeUse_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpEdgeUse SkpEdgeUse;
#else
typedef struct SkpEdgeUse SkpEdgeUse;
#endif /* __cplusplus */

#endif 	/* __SkpEdgeUse_FWD_DEFINED__ */


#ifndef __SkpEdgeUses_FWD_DEFINED__
#define __SkpEdgeUses_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpEdgeUses SkpEdgeUses;
#else
typedef struct SkpEdgeUses SkpEdgeUses;
#endif /* __cplusplus */

#endif 	/* __SkpEdgeUses_FWD_DEFINED__ */


#ifndef __SkpLoop_FWD_DEFINED__
#define __SkpLoop_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpLoop SkpLoop;
#else
typedef struct SkpLoop SkpLoop;
#endif /* __cplusplus */

#endif 	/* __SkpLoop_FWD_DEFINED__ */


#ifndef __SkpLoops_FWD_DEFINED__
#define __SkpLoops_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpLoops SkpLoops;
#else
typedef struct SkpLoops SkpLoops;
#endif /* __cplusplus */

#endif 	/* __SkpLoops_FWD_DEFINED__ */


#ifndef __SkpPolyline3d_FWD_DEFINED__
#define __SkpPolyline3d_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpPolyline3d SkpPolyline3d;
#else
typedef struct SkpPolyline3d SkpPolyline3d;
#endif /* __cplusplus */

#endif 	/* __SkpPolyline3d_FWD_DEFINED__ */


#ifndef __SkpPolyline3ds_FWD_DEFINED__
#define __SkpPolyline3ds_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpPolyline3ds SkpPolyline3ds;
#else
typedef struct SkpPolyline3ds SkpPolyline3ds;
#endif /* __cplusplus */

#endif 	/* __SkpPolyline3ds_FWD_DEFINED__ */


#ifndef __SkpConstructionLine_FWD_DEFINED__
#define __SkpConstructionLine_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpConstructionLine SkpConstructionLine;
#else
typedef struct SkpConstructionLine SkpConstructionLine;
#endif /* __cplusplus */

#endif 	/* __SkpConstructionLine_FWD_DEFINED__ */


#ifndef __SkpConstructionLines_FWD_DEFINED__
#define __SkpConstructionLines_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpConstructionLines SkpConstructionLines;
#else
typedef struct SkpConstructionLines SkpConstructionLines;
#endif /* __cplusplus */

#endif 	/* __SkpConstructionLines_FWD_DEFINED__ */


#ifndef __SkpConstructionPoint_FWD_DEFINED__
#define __SkpConstructionPoint_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpConstructionPoint SkpConstructionPoint;
#else
typedef struct SkpConstructionPoint SkpConstructionPoint;
#endif /* __cplusplus */

#endif 	/* __SkpConstructionPoint_FWD_DEFINED__ */


#ifndef __SkpConstructionPoints_FWD_DEFINED__
#define __SkpConstructionPoints_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpConstructionPoints SkpConstructionPoints;
#else
typedef struct SkpConstructionPoints SkpConstructionPoints;
#endif /* __cplusplus */

#endif 	/* __SkpConstructionPoints_FWD_DEFINED__ */


#ifndef __SkpGroup_FWD_DEFINED__
#define __SkpGroup_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpGroup SkpGroup;
#else
typedef struct SkpGroup SkpGroup;
#endif /* __cplusplus */

#endif 	/* __SkpGroup_FWD_DEFINED__ */


#ifndef __SkpGroups_FWD_DEFINED__
#define __SkpGroups_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpGroups SkpGroups;
#else
typedef struct SkpGroups SkpGroups;
#endif /* __cplusplus */

#endif 	/* __SkpGroups_FWD_DEFINED__ */


#ifndef __SkpImage_FWD_DEFINED__
#define __SkpImage_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpImage SkpImage;
#else
typedef struct SkpImage SkpImage;
#endif /* __cplusplus */

#endif 	/* __SkpImage_FWD_DEFINED__ */


#ifndef __SkpImages_FWD_DEFINED__
#define __SkpImages_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpImages SkpImages;
#else
typedef struct SkpImages SkpImages;
#endif /* __cplusplus */

#endif 	/* __SkpImages_FWD_DEFINED__ */


#ifndef __SkpCamera_FWD_DEFINED__
#define __SkpCamera_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpCamera SkpCamera;
#else
typedef struct SkpCamera SkpCamera;
#endif /* __cplusplus */

#endif 	/* __SkpCamera_FWD_DEFINED__ */


#ifndef __SkpPage_FWD_DEFINED__
#define __SkpPage_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpPage SkpPage;
#else
typedef struct SkpPage SkpPage;
#endif /* __cplusplus */

#endif 	/* __SkpPage_FWD_DEFINED__ */


#ifndef __SkpPages_FWD_DEFINED__
#define __SkpPages_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpPages SkpPages;
#else
typedef struct SkpPages SkpPages;
#endif /* __cplusplus */

#endif 	/* __SkpPages_FWD_DEFINED__ */


#ifndef __SkpEntityTransformPair_FWD_DEFINED__
#define __SkpEntityTransformPair_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpEntityTransformPair SkpEntityTransformPair;
#else
typedef struct SkpEntityTransformPair SkpEntityTransformPair;
#endif /* __cplusplus */

#endif 	/* __SkpEntityTransformPair_FWD_DEFINED__ */


#ifndef __SkpEntityTransformPairs_FWD_DEFINED__
#define __SkpEntityTransformPairs_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpEntityTransformPairs SkpEntityTransformPairs;
#else
typedef struct SkpEntityTransformPairs SkpEntityTransformPairs;
#endif /* __cplusplus */

#endif 	/* __SkpEntityTransformPairs_FWD_DEFINED__ */


#ifndef __SkpOpening_FWD_DEFINED__
#define __SkpOpening_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpOpening SkpOpening;
#else
typedef struct SkpOpening SkpOpening;
#endif /* __cplusplus */

#endif 	/* __SkpOpening_FWD_DEFINED__ */


#ifndef __SkpOpenings_FWD_DEFINED__
#define __SkpOpenings_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpOpenings SkpOpenings;
#else
typedef struct SkpOpenings SkpOpenings;
#endif /* __cplusplus */

#endif 	/* __SkpOpenings_FWD_DEFINED__ */


#ifndef __SkpPoint3d_FWD_DEFINED__
#define __SkpPoint3d_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpPoint3d SkpPoint3d;
#else
typedef struct SkpPoint3d SkpPoint3d;
#endif /* __cplusplus */

#endif 	/* __SkpPoint3d_FWD_DEFINED__ */


#ifndef __SkpVector3d_FWD_DEFINED__
#define __SkpVector3d_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpVector3d SkpVector3d;
#else
typedef struct SkpVector3d SkpVector3d;
#endif /* __cplusplus */

#endif 	/* __SkpVector3d_FWD_DEFINED__ */


#ifndef __SkpSelectionSet_FWD_DEFINED__
#define __SkpSelectionSet_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpSelectionSet SkpSelectionSet;
#else
typedef struct SkpSelectionSet SkpSelectionSet;
#endif /* __cplusplus */

#endif 	/* __SkpSelectionSet_FWD_DEFINED__ */


#ifndef __SkpSectionPlane_FWD_DEFINED__
#define __SkpSectionPlane_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpSectionPlane SkpSectionPlane;
#else
typedef struct SkpSectionPlane SkpSectionPlane;
#endif /* __cplusplus */

#endif 	/* __SkpSectionPlane_FWD_DEFINED__ */


#ifndef __SkpSectionPlanes_FWD_DEFINED__
#define __SkpSectionPlanes_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpSectionPlanes SkpSectionPlanes;
#else
typedef struct SkpSectionPlanes SkpSectionPlanes;
#endif /* __cplusplus */

#endif 	/* __SkpSectionPlanes_FWD_DEFINED__ */


#ifndef __SkpUVHelper_FWD_DEFINED__
#define __SkpUVHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpUVHelper SkpUVHelper;
#else
typedef struct SkpUVHelper SkpUVHelper;
#endif /* __cplusplus */

#endif 	/* __SkpUVHelper_FWD_DEFINED__ */


#ifndef __SkpCoordinateSystem_FWD_DEFINED__
#define __SkpCoordinateSystem_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpCoordinateSystem SkpCoordinateSystem;
#else
typedef struct SkpCoordinateSystem SkpCoordinateSystem;
#endif /* __cplusplus */

#endif 	/* __SkpCoordinateSystem_FWD_DEFINED__ */


#ifndef __SkpEntityProviderStatistics_FWD_DEFINED__
#define __SkpEntityProviderStatistics_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpEntityProviderStatistics SkpEntityProviderStatistics;
#else
typedef struct SkpEntityProviderStatistics SkpEntityProviderStatistics;
#endif /* __cplusplus */

#endif 	/* __SkpEntityProviderStatistics_FWD_DEFINED__ */


#ifndef __SkpRenderer_FWD_DEFINED__
#define __SkpRenderer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpRenderer SkpRenderer;
#else
typedef struct SkpRenderer SkpRenderer;
#endif /* __cplusplus */

#endif 	/* __SkpRenderer_FWD_DEFINED__ */


#ifndef __SkpStyleManager_FWD_DEFINED__
#define __SkpStyleManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpStyleManager SkpStyleManager;
#else
typedef struct SkpStyleManager SkpStyleManager;
#endif /* __cplusplus */

#endif 	/* __SkpStyleManager_FWD_DEFINED__ */


#ifndef __SkpStyle_FWD_DEFINED__
#define __SkpStyle_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpStyle SkpStyle;
#else
typedef struct SkpStyle SkpStyle;
#endif /* __cplusplus */

#endif 	/* __SkpStyle_FWD_DEFINED__ */


#ifndef __SkpStyles_FWD_DEFINED__
#define __SkpStyles_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpStyles SkpStyles;
#else
typedef struct SkpStyles SkpStyles;
#endif /* __cplusplus */

#endif 	/* __SkpStyles_FWD_DEFINED__ */


#ifndef __SkpCameraM_FWD_DEFINED__
#define __SkpCameraM_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpCameraM SkpCameraM;
#else
typedef struct SkpCameraM SkpCameraM;
#endif /* __cplusplus */

#endif 	/* __SkpCameraM_FWD_DEFINED__ */


#ifndef __SkpNamedValuesM_FWD_DEFINED__
#define __SkpNamedValuesM_FWD_DEFINED__

#ifdef __cplusplus
typedef class SkpNamedValuesM SkpNamedValuesM;
#else
typedef struct SkpNamedValuesM SkpNamedValuesM;
#endif /* __cplusplus */

#endif 	/* __SkpNamedValuesM_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_sketchup_0000 */
/* [local] */ 

#define MUST_DEFINE_SKETCHUP_ERROR_CODES 1
#ifdef MUST_DEFINE_SKETCHUP_ERROR_CODES
#ifndef MAKE_HRESULT
#define MAKE_HRESULT(sev,fac,code) ((HRESULT)(((unsigned long)(sev)<<31)|((unsigned long)(fac)<<16)|((unsigned long)(code))))
#endif
#ifndef FACILITY_ITF
#define FACILITY_ITF 4
#endif
#define E_SKP_SKETCHUP_MODEL_MORE_RECENT      MAKE_HRESULT(1, FACILITY_ITF, 1)
#define E_SKP_SKETCHUP_MODEL_INVALID          MAKE_HRESULT(1, FACILITY_ITF, 2)
#define E_SKP_FILE_NOT_FOUND                  MAKE_HRESULT(1, FACILITY_ITF, 3)
#define E_SKP_FILE_SERIALIZATION_ERROR        MAKE_HRESULT(1, FACILITY_ITF, 4)
#define E_SKP_IMAGE_FILE_FORMAT_NOT_SUPPORTED MAKE_HRESULT(1, FACILITY_ITF, 5)
#endif // MUST_DEFINE_SKETCHUP_ERROR_CODES

























































































typedef /* [public][v1_enum] */ 
enum __MIDL___MIDL_itf_sketchup_0000_0001
    {	Decimal	= 1,
	Architectural	= 2,
	Engineering	= 3,
	Fractional	= 4
    } 	SkpLengthFormatType;

typedef /* [public][v1_enum] */ 
enum __MIDL___MIDL_itf_sketchup_0000_0002
    {	Inches	= 1,
	Feet	= 2,
	Millimeter	= 3,
	Centimeter	= 4,
	Meter	= 5
    } 	SkpLengthUnitType;

typedef /* [public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_sketchup_0000_0003
    {	DimensionTextAbove	= 1,
	DimensionTextCenter	= 2,
	DimensionTextOutside	= 4
    } 	SkpDimensionTextPosition;

typedef /* [public][public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_sketchup_0000_0004
    {	DimensionArrowNone	= 1,
	DimensionArrowSlash	= 2,
	DimensionArrowDot	= 3,
	DimensionArrowClosed	= 4,
	DimensionArrowOpen	= 5
    } 	SkpDimensionArrow;

typedef /* [public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_sketchup_0000_0005
    {	Radius	= 1,
	Diameter	= 2
    } 	SkpRadialDimensionType;

typedef /* [public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_sketchup_0000_0006
    {	LinearAligned	= 1,
	LinearHorizontal	= 2,
	LinearVertical	= 3
    } 	SkpLinearDimensionType;

typedef /* [public][public][public][public][public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_sketchup_0000_0007
    {	TextJustBottomLeft	= 1,
	TextJustBottomCenter	= 2,
	TextJustBottomRight	= 3,
	TextJustMiddleLeft	= 4,
	TextJustMiddleCenter	= 5,
	TextJustMiddleRight	= 6,
	TextJustTopLeft	= 7,
	TextJustTopCenter	= 8,
	TextJustTopRight	= 9,
	TextJustTopLineMiddleLeft	= 10,
	TextJustTopLineMiddleRight	= 11
    } 	SkpTextJustification;

typedef /* [public][v1_enum] */ 
enum __MIDL___MIDL_itf_sketchup_0000_0008
    {	BitmapFont	= 1,
	PixmapFont	= 2,
	PolygonFont	= 3,
	TextureFont	= 4,
	OutlineFont	= 5,
	ExtrudedFont	= 6,
	ImageFont	= 7
    } 	SkpFontType;

typedef /* [public][public][public][public][public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_sketchup_0000_0009
    {	TextAlignLeft	= 1,
	TextAlignCenter	= 2,
	TextAlignRight	= 3
    } 	SkpTextAlignment;

typedef /* [public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_sketchup_0000_0010
    {	ALeaderNone	= 1,
	ALeaderView	= 2,
	ALeaderModel	= 3
    } 	SkpTextLeader;

typedef /* [public][v1_enum] */ 
enum __MIDL___MIDL_itf_sketchup_0000_0011
    {	PolygonMeshPoints	= 0,
	PolygonMeshUVQFront	= 1,
	PolygonMeshUVQBack	= 2,
	PolygonMeshNormals	= 4
    } 	SkpMeshType;



extern RPC_IF_HANDLE __MIDL_itf_sketchup_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sketchup_0000_v0_0_s_ifspec;

#ifndef __ISkpRenderer_INTERFACE_DEFINED__
#define __ISkpRenderer_INTERFACE_DEFINED__

/* interface ISkpRenderer */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C7D9298D-9F63-4ab1-B96C-A8FB96F9BA08")
    ISkpRenderer : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPage( 
            /* [retval][out] */ ISkpPage **ppPage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenderToBitmap( 
            /* [in] */ unsigned long width,
            /* [in] */ unsigned long height,
            /* [in] */ unsigned long bytesPerPixel,
            /* [in] */ unsigned long bytesPerRow,
            /* [in] */ unsigned long backgroundMode,
            /* [in] */ unsigned long format,
            /* [in] */ unsigned long type,
            /* [in] */ BOOL topToBottom,
            /* [in] */ BOOL nprSpeedMatters,
            /* [in] */ float outputDPI,
            /* [in] */ float linewidth,
            /* [out][in] */ unsigned char *bitmapBytes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _GuessTarget( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTileSize( 
            /* [in] */ int width,
            /* [in] */ int height) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_View( 
            /* [retval][out] */ ISkpView **ppView) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenderToFile( 
            /* [in] */ unsigned long width,
            /* [in] */ unsigned long height,
            /* [in] */ unsigned long bytesPerPixel,
            /* [in] */ unsigned long bytesPerRow,
            /* [in] */ unsigned long backgroundMode,
            /* [in] */ unsigned long format,
            /* [in] */ unsigned long type,
            /* [in] */ BOOL topToBottom,
            /* [in] */ BOOL nprSpeedMatters,
            /* [in] */ float outputDPI,
            /* [in] */ float linewidth,
            /* [in] */ BSTR filename) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpRendererVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpRenderer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpRenderer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpRenderer * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPage )( 
            ISkpRenderer * This,
            /* [retval][out] */ ISkpPage **ppPage);
        
        HRESULT ( STDMETHODCALLTYPE *RenderToBitmap )( 
            ISkpRenderer * This,
            /* [in] */ unsigned long width,
            /* [in] */ unsigned long height,
            /* [in] */ unsigned long bytesPerPixel,
            /* [in] */ unsigned long bytesPerRow,
            /* [in] */ unsigned long backgroundMode,
            /* [in] */ unsigned long format,
            /* [in] */ unsigned long type,
            /* [in] */ BOOL topToBottom,
            /* [in] */ BOOL nprSpeedMatters,
            /* [in] */ float outputDPI,
            /* [in] */ float linewidth,
            /* [out][in] */ unsigned char *bitmapBytes);
        
        HRESULT ( STDMETHODCALLTYPE *_GuessTarget )( 
            ISkpRenderer * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        HRESULT ( STDMETHODCALLTYPE *SetTileSize )( 
            ISkpRenderer * This,
            /* [in] */ int width,
            /* [in] */ int height);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_View )( 
            ISkpRenderer * This,
            /* [retval][out] */ ISkpView **ppView);
        
        HRESULT ( STDMETHODCALLTYPE *RenderToFile )( 
            ISkpRenderer * This,
            /* [in] */ unsigned long width,
            /* [in] */ unsigned long height,
            /* [in] */ unsigned long bytesPerPixel,
            /* [in] */ unsigned long bytesPerRow,
            /* [in] */ unsigned long backgroundMode,
            /* [in] */ unsigned long format,
            /* [in] */ unsigned long type,
            /* [in] */ BOOL topToBottom,
            /* [in] */ BOOL nprSpeedMatters,
            /* [in] */ float outputDPI,
            /* [in] */ float linewidth,
            /* [in] */ BSTR filename);
        
        END_INTERFACE
    } ISkpRendererVtbl;

    interface ISkpRenderer
    {
        CONST_VTBL struct ISkpRendererVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpRenderer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpRenderer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpRenderer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpRenderer_GetPage(This,ppPage)	\
    (This)->lpVtbl -> GetPage(This,ppPage)

#define ISkpRenderer_RenderToBitmap(This,width,height,bytesPerPixel,bytesPerRow,backgroundMode,format,type,topToBottom,nprSpeedMatters,outputDPI,linewidth,bitmapBytes)	\
    (This)->lpVtbl -> RenderToBitmap(This,width,height,bytesPerPixel,bytesPerRow,backgroundMode,format,type,topToBottom,nprSpeedMatters,outputDPI,linewidth,bitmapBytes)

#define ISkpRenderer__GuessTarget(This,pPoint3d)	\
    (This)->lpVtbl -> _GuessTarget(This,pPoint3d)

#define ISkpRenderer_SetTileSize(This,width,height)	\
    (This)->lpVtbl -> SetTileSize(This,width,height)

#define ISkpRenderer_get_View(This,ppView)	\
    (This)->lpVtbl -> get_View(This,ppView)

#define ISkpRenderer_RenderToFile(This,width,height,bytesPerPixel,bytesPerRow,backgroundMode,format,type,topToBottom,nprSpeedMatters,outputDPI,linewidth,filename)	\
    (This)->lpVtbl -> RenderToFile(This,width,height,bytesPerPixel,bytesPerRow,backgroundMode,format,type,topToBottom,nprSpeedMatters,outputDPI,linewidth,filename)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpRenderer_GetPage_Proxy( 
    ISkpRenderer * This,
    /* [retval][out] */ ISkpPage **ppPage);


void __RPC_STUB ISkpRenderer_GetPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpRenderer_RenderToBitmap_Proxy( 
    ISkpRenderer * This,
    /* [in] */ unsigned long width,
    /* [in] */ unsigned long height,
    /* [in] */ unsigned long bytesPerPixel,
    /* [in] */ unsigned long bytesPerRow,
    /* [in] */ unsigned long backgroundMode,
    /* [in] */ unsigned long format,
    /* [in] */ unsigned long type,
    /* [in] */ BOOL topToBottom,
    /* [in] */ BOOL nprSpeedMatters,
    /* [in] */ float outputDPI,
    /* [in] */ float linewidth,
    /* [out][in] */ unsigned char *bitmapBytes);


void __RPC_STUB ISkpRenderer_RenderToBitmap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpRenderer__GuessTarget_Proxy( 
    ISkpRenderer * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpRenderer__GuessTarget_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpRenderer_SetTileSize_Proxy( 
    ISkpRenderer * This,
    /* [in] */ int width,
    /* [in] */ int height);


void __RPC_STUB ISkpRenderer_SetTileSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpRenderer_get_View_Proxy( 
    ISkpRenderer * This,
    /* [retval][out] */ ISkpView **ppView);


void __RPC_STUB ISkpRenderer_get_View_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpRenderer_RenderToFile_Proxy( 
    ISkpRenderer * This,
    /* [in] */ unsigned long width,
    /* [in] */ unsigned long height,
    /* [in] */ unsigned long bytesPerPixel,
    /* [in] */ unsigned long bytesPerRow,
    /* [in] */ unsigned long backgroundMode,
    /* [in] */ unsigned long format,
    /* [in] */ unsigned long type,
    /* [in] */ BOOL topToBottom,
    /* [in] */ BOOL nprSpeedMatters,
    /* [in] */ float outputDPI,
    /* [in] */ float linewidth,
    /* [in] */ BSTR filename);


void __RPC_STUB ISkpRenderer_RenderToFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpRenderer_INTERFACE_DEFINED__ */


#ifndef __ISkpInputPointFinder_INTERFACE_DEFINED__
#define __ISkpInputPointFinder_INTERFACE_DEFINED__

/* interface ISkpInputPointFinder */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpInputPointFinder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4861A4BE-32EE-4c5d-8B88-350D0463E445")
    ISkpInputPointFinder : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindPoint( 
            /* [in] */ unsigned long x,
            /* [in] */ unsigned long y,
            /* [in] */ double aperture_in_pixels,
            /* [out] */ double picked_point[ 3 ],
            /* [out] */ unsigned long *input_point_type,
            /* [out] */ ISkpEntity **picked_entity) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearRecentPoints( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpInputPointFinderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpInputPointFinder * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpInputPointFinder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpInputPointFinder * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindPoint )( 
            ISkpInputPointFinder * This,
            /* [in] */ unsigned long x,
            /* [in] */ unsigned long y,
            /* [in] */ double aperture_in_pixels,
            /* [out] */ double picked_point[ 3 ],
            /* [out] */ unsigned long *input_point_type,
            /* [out] */ ISkpEntity **picked_entity);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearRecentPoints )( 
            ISkpInputPointFinder * This);
        
        END_INTERFACE
    } ISkpInputPointFinderVtbl;

    interface ISkpInputPointFinder
    {
        CONST_VTBL struct ISkpInputPointFinderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpInputPointFinder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpInputPointFinder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpInputPointFinder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpInputPointFinder_FindPoint(This,x,y,aperture_in_pixels,picked_point,input_point_type,picked_entity)	\
    (This)->lpVtbl -> FindPoint(This,x,y,aperture_in_pixels,picked_point,input_point_type,picked_entity)

#define ISkpInputPointFinder_ClearRecentPoints(This)	\
    (This)->lpVtbl -> ClearRecentPoints(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpInputPointFinder_FindPoint_Proxy( 
    ISkpInputPointFinder * This,
    /* [in] */ unsigned long x,
    /* [in] */ unsigned long y,
    /* [in] */ double aperture_in_pixels,
    /* [out] */ double picked_point[ 3 ],
    /* [out] */ unsigned long *input_point_type,
    /* [out] */ ISkpEntity **picked_entity);


void __RPC_STUB ISkpInputPointFinder_FindPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpInputPointFinder_ClearRecentPoints_Proxy( 
    ISkpInputPointFinder * This);


void __RPC_STUB ISkpInputPointFinder_ClearRecentPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpInputPointFinder_INTERFACE_DEFINED__ */


#ifndef __ISkpHLRView_INTERFACE_DEFINED__
#define __ISkpHLRView_INTERFACE_DEFINED__

/* interface ISkpHLRView */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpHLRView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E9855DB-E4D8-40d2-8E30-F4F026674E34")
    ISkpHLRView : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPage( 
            /* [retval][out] */ ISkpPage **ppPage) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_View( 
            /* [retval][out] */ ISkpView **ppView) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitializeView( 
            /* [in] */ unsigned long width,
            /* [in] */ unsigned long height,
            /* [in] */ float outputDPI,
            /* [in] */ float linewidth) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _GuessTarget( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpHLRViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpHLRView * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpHLRView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpHLRView * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPage )( 
            ISkpHLRView * This,
            /* [retval][out] */ ISkpPage **ppPage);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_View )( 
            ISkpHLRView * This,
            /* [retval][out] */ ISkpView **ppView);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitializeView )( 
            ISkpHLRView * This,
            /* [in] */ unsigned long width,
            /* [in] */ unsigned long height,
            /* [in] */ float outputDPI,
            /* [in] */ float linewidth);
        
        HRESULT ( STDMETHODCALLTYPE *_GuessTarget )( 
            ISkpHLRView * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        END_INTERFACE
    } ISkpHLRViewVtbl;

    interface ISkpHLRView
    {
        CONST_VTBL struct ISkpHLRViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpHLRView_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpHLRView_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpHLRView_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpHLRView_GetPage(This,ppPage)	\
    (This)->lpVtbl -> GetPage(This,ppPage)

#define ISkpHLRView_get_View(This,ppView)	\
    (This)->lpVtbl -> get_View(This,ppView)

#define ISkpHLRView_InitializeView(This,width,height,outputDPI,linewidth)	\
    (This)->lpVtbl -> InitializeView(This,width,height,outputDPI,linewidth)

#define ISkpHLRView__GuessTarget(This,pPoint3d)	\
    (This)->lpVtbl -> _GuessTarget(This,pPoint3d)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpHLRView_GetPage_Proxy( 
    ISkpHLRView * This,
    /* [retval][out] */ ISkpPage **ppPage);


void __RPC_STUB ISkpHLRView_GetPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpHLRView_get_View_Proxy( 
    ISkpHLRView * This,
    /* [retval][out] */ ISkpView **ppView);


void __RPC_STUB ISkpHLRView_get_View_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpHLRView_InitializeView_Proxy( 
    ISkpHLRView * This,
    /* [in] */ unsigned long width,
    /* [in] */ unsigned long height,
    /* [in] */ float outputDPI,
    /* [in] */ float linewidth);


void __RPC_STUB ISkpHLRView_InitializeView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpHLRView__GuessTarget_Proxy( 
    ISkpHLRView * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpHLRView__GuessTarget_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpHLRView_INTERFACE_DEFINED__ */


#ifndef __ISkpCoordinateSystem_INTERFACE_DEFINED__
#define __ISkpCoordinateSystem_INTERFACE_DEFINED__

/* interface ISkpCoordinateSystem */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpCoordinateSystem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40723364-9619-4ca8-BE77-25ABA612958C")
    ISkpCoordinateSystem : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Origin( 
            /* [retval][out] */ ISkpPoint3d **ppOrigin) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _GetOrigin( 
            /* [out] */ double origin[ 3 ]) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_XAxis( 
            /* [retval][out] */ ISkpVector3d **ppXAxis) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _GetXAxis( 
            /* [out] */ double XAxis[ 3 ]) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_YAxis( 
            /* [retval][out] */ ISkpVector3d **ppYAxis) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _GetYAxis( 
            /* [out] */ double YAxis[ 3 ]) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ZAxis( 
            /* [retval][out] */ ISkpVector3d **ppZAxis) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _GetZAxis( 
            /* [out] */ double ZAxis[ 3 ]) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Plane( 
            /* [retval][out] */ ISkpPlane **ppPlane) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpCoordinateSystemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpCoordinateSystem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpCoordinateSystem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpCoordinateSystem * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Origin )( 
            ISkpCoordinateSystem * This,
            /* [retval][out] */ ISkpPoint3d **ppOrigin);
        
        HRESULT ( STDMETHODCALLTYPE *_GetOrigin )( 
            ISkpCoordinateSystem * This,
            /* [out] */ double origin[ 3 ]);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_XAxis )( 
            ISkpCoordinateSystem * This,
            /* [retval][out] */ ISkpVector3d **ppXAxis);
        
        HRESULT ( STDMETHODCALLTYPE *_GetXAxis )( 
            ISkpCoordinateSystem * This,
            /* [out] */ double XAxis[ 3 ]);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_YAxis )( 
            ISkpCoordinateSystem * This,
            /* [retval][out] */ ISkpVector3d **ppYAxis);
        
        HRESULT ( STDMETHODCALLTYPE *_GetYAxis )( 
            ISkpCoordinateSystem * This,
            /* [out] */ double YAxis[ 3 ]);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZAxis )( 
            ISkpCoordinateSystem * This,
            /* [retval][out] */ ISkpVector3d **ppZAxis);
        
        HRESULT ( STDMETHODCALLTYPE *_GetZAxis )( 
            ISkpCoordinateSystem * This,
            /* [out] */ double ZAxis[ 3 ]);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Plane )( 
            ISkpCoordinateSystem * This,
            /* [retval][out] */ ISkpPlane **ppPlane);
        
        END_INTERFACE
    } ISkpCoordinateSystemVtbl;

    interface ISkpCoordinateSystem
    {
        CONST_VTBL struct ISkpCoordinateSystemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpCoordinateSystem_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpCoordinateSystem_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpCoordinateSystem_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpCoordinateSystem_get_Origin(This,ppOrigin)	\
    (This)->lpVtbl -> get_Origin(This,ppOrigin)

#define ISkpCoordinateSystem__GetOrigin(This,origin)	\
    (This)->lpVtbl -> _GetOrigin(This,origin)

#define ISkpCoordinateSystem_get_XAxis(This,ppXAxis)	\
    (This)->lpVtbl -> get_XAxis(This,ppXAxis)

#define ISkpCoordinateSystem__GetXAxis(This,XAxis)	\
    (This)->lpVtbl -> _GetXAxis(This,XAxis)

#define ISkpCoordinateSystem_get_YAxis(This,ppYAxis)	\
    (This)->lpVtbl -> get_YAxis(This,ppYAxis)

#define ISkpCoordinateSystem__GetYAxis(This,YAxis)	\
    (This)->lpVtbl -> _GetYAxis(This,YAxis)

#define ISkpCoordinateSystem_get_ZAxis(This,ppZAxis)	\
    (This)->lpVtbl -> get_ZAxis(This,ppZAxis)

#define ISkpCoordinateSystem__GetZAxis(This,ZAxis)	\
    (This)->lpVtbl -> _GetZAxis(This,ZAxis)

#define ISkpCoordinateSystem_get_Plane(This,ppPlane)	\
    (This)->lpVtbl -> get_Plane(This,ppPlane)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpCoordinateSystem_get_Origin_Proxy( 
    ISkpCoordinateSystem * This,
    /* [retval][out] */ ISkpPoint3d **ppOrigin);


void __RPC_STUB ISkpCoordinateSystem_get_Origin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpCoordinateSystem__GetOrigin_Proxy( 
    ISkpCoordinateSystem * This,
    /* [out] */ double origin[ 3 ]);


void __RPC_STUB ISkpCoordinateSystem__GetOrigin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpCoordinateSystem_get_XAxis_Proxy( 
    ISkpCoordinateSystem * This,
    /* [retval][out] */ ISkpVector3d **ppXAxis);


void __RPC_STUB ISkpCoordinateSystem_get_XAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpCoordinateSystem__GetXAxis_Proxy( 
    ISkpCoordinateSystem * This,
    /* [out] */ double XAxis[ 3 ]);


void __RPC_STUB ISkpCoordinateSystem__GetXAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpCoordinateSystem_get_YAxis_Proxy( 
    ISkpCoordinateSystem * This,
    /* [retval][out] */ ISkpVector3d **ppYAxis);


void __RPC_STUB ISkpCoordinateSystem_get_YAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpCoordinateSystem__GetYAxis_Proxy( 
    ISkpCoordinateSystem * This,
    /* [out] */ double YAxis[ 3 ]);


void __RPC_STUB ISkpCoordinateSystem__GetYAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpCoordinateSystem_get_ZAxis_Proxy( 
    ISkpCoordinateSystem * This,
    /* [retval][out] */ ISkpVector3d **ppZAxis);


void __RPC_STUB ISkpCoordinateSystem_get_ZAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpCoordinateSystem__GetZAxis_Proxy( 
    ISkpCoordinateSystem * This,
    /* [out] */ double ZAxis[ 3 ]);


void __RPC_STUB ISkpCoordinateSystem__GetZAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpCoordinateSystem_get_Plane_Proxy( 
    ISkpCoordinateSystem * This,
    /* [retval][out] */ ISkpPlane **ppPlane);


void __RPC_STUB ISkpCoordinateSystem_get_Plane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpCoordinateSystem_INTERFACE_DEFINED__ */


#ifndef __ISkpPoint3d_INTERFACE_DEFINED__
#define __ISkpPoint3d_INTERFACE_DEFINED__

/* interface ISkpPoint3d */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpPoint3d;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("797A86D9-8EC2-4064-BE94-D4F589FC1A53")
    ISkpPoint3d : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_X( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Y( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Z( 
            /* [retval][out] */ double *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpPoint3dVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpPoint3d * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpPoint3d * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpPoint3d * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            ISkpPoint3d * This,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X )( 
            ISkpPoint3d * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Y )( 
            ISkpPoint3d * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Z )( 
            ISkpPoint3d * This,
            /* [retval][out] */ double *pVal);
        
        END_INTERFACE
    } ISkpPoint3dVtbl;

    interface ISkpPoint3d
    {
        CONST_VTBL struct ISkpPoint3dVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpPoint3d_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpPoint3d_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpPoint3d_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpPoint3d_Get(This,x,y,z)	\
    (This)->lpVtbl -> Get(This,x,y,z)

#define ISkpPoint3d_get_X(This,pVal)	\
    (This)->lpVtbl -> get_X(This,pVal)

#define ISkpPoint3d_get_Y(This,pVal)	\
    (This)->lpVtbl -> get_Y(This,pVal)

#define ISkpPoint3d_get_Z(This,pVal)	\
    (This)->lpVtbl -> get_Z(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPoint3d_Get_Proxy( 
    ISkpPoint3d * This,
    /* [out] */ double *x,
    /* [out] */ double *y,
    /* [out] */ double *z);


void __RPC_STUB ISkpPoint3d_Get_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPoint3d_get_X_Proxy( 
    ISkpPoint3d * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpPoint3d_get_X_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPoint3d_get_Y_Proxy( 
    ISkpPoint3d * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpPoint3d_get_Y_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPoint3d_get_Z_Proxy( 
    ISkpPoint3d * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpPoint3d_get_Z_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpPoint3d_INTERFACE_DEFINED__ */


#ifndef __ISkpVector3d_INTERFACE_DEFINED__
#define __ISkpVector3d_INTERFACE_DEFINED__

/* interface ISkpVector3d */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpVector3d;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D2F07F1-6BC9-44e8-A228-489E0C6393A0")
    ISkpVector3d : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_X( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Y( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Z( 
            /* [retval][out] */ double *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpVector3dVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpVector3d * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpVector3d * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpVector3d * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            ISkpVector3d * This,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X )( 
            ISkpVector3d * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Y )( 
            ISkpVector3d * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Z )( 
            ISkpVector3d * This,
            /* [retval][out] */ double *pVal);
        
        END_INTERFACE
    } ISkpVector3dVtbl;

    interface ISkpVector3d
    {
        CONST_VTBL struct ISkpVector3dVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpVector3d_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpVector3d_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpVector3d_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpVector3d_Get(This,x,y,z)	\
    (This)->lpVtbl -> Get(This,x,y,z)

#define ISkpVector3d_get_X(This,pVal)	\
    (This)->lpVtbl -> get_X(This,pVal)

#define ISkpVector3d_get_Y(This,pVal)	\
    (This)->lpVtbl -> get_Y(This,pVal)

#define ISkpVector3d_get_Z(This,pVal)	\
    (This)->lpVtbl -> get_Z(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpVector3d_Get_Proxy( 
    ISkpVector3d * This,
    /* [out] */ double *x,
    /* [out] */ double *y,
    /* [out] */ double *z);


void __RPC_STUB ISkpVector3d_Get_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpVector3d_get_X_Proxy( 
    ISkpVector3d * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpVector3d_get_X_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpVector3d_get_Y_Proxy( 
    ISkpVector3d * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpVector3d_get_Y_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpVector3d_get_Z_Proxy( 
    ISkpVector3d * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpVector3d_get_Z_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpVector3d_INTERFACE_DEFINED__ */


#ifndef __ISkpVertex_INTERFACE_DEFINED__
#define __ISkpVertex_INTERFACE_DEFINED__

/* interface ISkpVertex */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpVertex;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A578615C-F813-4bba-9C1F-5E01ABF197A6")
    ISkpVertex : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetPosition( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ ISkpPoint3d *pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Edges( 
            /* [retval][out] */ ISkpEdges **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Faces( 
            /* [retval][out] */ ISkpFaces **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Loops( 
            /* [retval][out] */ ISkpLoops **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpVertexVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpVertex * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpVertex * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpVertex * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetPosition )( 
            ISkpVertex * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ISkpVertex * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            ISkpVertex * This,
            /* [in] */ ISkpPoint3d *pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Edges )( 
            ISkpVertex * This,
            /* [retval][out] */ ISkpEdges **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Faces )( 
            ISkpVertex * This,
            /* [retval][out] */ ISkpFaces **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Loops )( 
            ISkpVertex * This,
            /* [retval][out] */ ISkpLoops **pVal);
        
        END_INTERFACE
    } ISkpVertexVtbl;

    interface ISkpVertex
    {
        CONST_VTBL struct ISkpVertexVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpVertex_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpVertex_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpVertex_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpVertex__GetPosition(This,pPoint3d)	\
    (This)->lpVtbl -> _GetPosition(This,pPoint3d)

#define ISkpVertex_get_Position(This,pPoint3d)	\
    (This)->lpVtbl -> get_Position(This,pPoint3d)

#define ISkpVertex_put_Position(This,pPoint3d)	\
    (This)->lpVtbl -> put_Position(This,pPoint3d)

#define ISkpVertex_get_Edges(This,pVal)	\
    (This)->lpVtbl -> get_Edges(This,pVal)

#define ISkpVertex_get_Faces(This,pVal)	\
    (This)->lpVtbl -> get_Faces(This,pVal)

#define ISkpVertex_get_Loops(This,pVal)	\
    (This)->lpVtbl -> get_Loops(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpVertex__GetPosition_Proxy( 
    ISkpVertex * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpVertex__GetPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpVertex_get_Position_Proxy( 
    ISkpVertex * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpVertex_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpVertex_put_Position_Proxy( 
    ISkpVertex * This,
    /* [in] */ ISkpPoint3d *pPoint3d);


void __RPC_STUB ISkpVertex_put_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpVertex_get_Edges_Proxy( 
    ISkpVertex * This,
    /* [retval][out] */ ISkpEdges **pVal);


void __RPC_STUB ISkpVertex_get_Edges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpVertex_get_Faces_Proxy( 
    ISkpVertex * This,
    /* [retval][out] */ ISkpFaces **pVal);


void __RPC_STUB ISkpVertex_get_Faces_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpVertex_get_Loops_Proxy( 
    ISkpVertex * This,
    /* [retval][out] */ ISkpLoops **pVal);


void __RPC_STUB ISkpVertex_get_Loops_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpVertex_INTERFACE_DEFINED__ */


#ifndef __ISkpNamedValue_INTERFACE_DEFINED__
#define __ISkpNamedValue_INTERFACE_DEFINED__

/* interface ISkpNamedValue */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpNamedValue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("03B1BA1E-3A11-492b-9F4F-7B5BC7C28922")
    ISkpNamedValue : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpNamedValueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpNamedValue * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpNamedValue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpNamedValue * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpNamedValue * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ISkpNamedValue * This,
            /* [retval][out] */ VARIANT *pVal);
        
        END_INTERFACE
    } ISkpNamedValueVtbl;

    interface ISkpNamedValue
    {
        CONST_VTBL struct ISkpNamedValueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpNamedValue_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpNamedValue_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpNamedValue_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpNamedValue_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISkpNamedValue_get_Value(This,pVal)	\
    (This)->lpVtbl -> get_Value(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpNamedValue_get_Name_Proxy( 
    ISkpNamedValue * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpNamedValue_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpNamedValue_get_Value_Proxy( 
    ISkpNamedValue * This,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISkpNamedValue_get_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpNamedValue_INTERFACE_DEFINED__ */


#ifndef __ISkpNamedValues_INTERFACE_DEFINED__
#define __ISkpNamedValues_INTERFACE_DEFINED__

/* interface ISkpNamedValues */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpNamedValues;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1513EB56-F0D5-41d0-BC71-7DB252A9032A")
    ISkpNamedValues : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpNamedValue **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [in] */ BSTR valueName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpNamedValuesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpNamedValues * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpNamedValues * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpNamedValues * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpNamedValues * This,
            /* [retval][out] */ long *pVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpNamedValues * This,
            /* [retval][out] */ IUnknown **pVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpNamedValues * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpNamedValue **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ISkpNamedValues * This,
            /* [in] */ BSTR valueName,
            /* [retval][out] */ VARIANT *pVal);
        
        END_INTERFACE
    } ISkpNamedValuesVtbl;

    interface ISkpNamedValues
    {
        CONST_VTBL struct ISkpNamedValuesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpNamedValues_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpNamedValues_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpNamedValues_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpNamedValues_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpNamedValues_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define ISkpNamedValues_get_Item(This,nIndex,pVal)	\
    (This)->lpVtbl -> get_Item(This,nIndex,pVal)

#define ISkpNamedValues_get_Value(This,valueName,pVal)	\
    (This)->lpVtbl -> get_Value(This,valueName,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpNamedValues_get_Count_Proxy( 
    ISkpNamedValues * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpNamedValues_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpNamedValues_get__NewEnum_Proxy( 
    ISkpNamedValues * This,
    /* [retval][out] */ IUnknown **pVal);


void __RPC_STUB ISkpNamedValues_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpNamedValues_get_Item_Proxy( 
    ISkpNamedValues * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ISkpNamedValue **pVal);


void __RPC_STUB ISkpNamedValues_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpNamedValues_get_Value_Proxy( 
    ISkpNamedValues * This,
    /* [in] */ BSTR valueName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISkpNamedValues_get_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpNamedValues_INTERFACE_DEFINED__ */


#ifndef __ISkpNamedValuesM_INTERFACE_DEFINED__
#define __ISkpNamedValuesM_INTERFACE_DEFINED__

/* interface ISkpNamedValuesM */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpNamedValuesM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6F13DFAB-D068-44db-88E6-3D0F22C8BFFB")
    ISkpNamedValuesM : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpNamedValue **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [in] */ BSTR valueName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Set( 
            /* [in] */ BSTR valueName,
            /* [in] */ VARIANT value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpNamedValuesMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpNamedValuesM * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpNamedValuesM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpNamedValuesM * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpNamedValuesM * This,
            /* [retval][out] */ long *pVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpNamedValuesM * This,
            /* [retval][out] */ IUnknown **pVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpNamedValuesM * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpNamedValue **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ISkpNamedValuesM * This,
            /* [in] */ BSTR valueName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Set )( 
            ISkpNamedValuesM * This,
            /* [in] */ BSTR valueName,
            /* [in] */ VARIANT value);
        
        END_INTERFACE
    } ISkpNamedValuesMVtbl;

    interface ISkpNamedValuesM
    {
        CONST_VTBL struct ISkpNamedValuesMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpNamedValuesM_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpNamedValuesM_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpNamedValuesM_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpNamedValuesM_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpNamedValuesM_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#define ISkpNamedValuesM_get_Item(This,nIndex,pVal)	\
    (This)->lpVtbl -> get_Item(This,nIndex,pVal)

#define ISkpNamedValuesM_get_Value(This,valueName,pVal)	\
    (This)->lpVtbl -> get_Value(This,valueName,pVal)

#define ISkpNamedValuesM_Set(This,valueName,value)	\
    (This)->lpVtbl -> Set(This,valueName,value)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpNamedValuesM_get_Count_Proxy( 
    ISkpNamedValuesM * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpNamedValuesM_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpNamedValuesM_get__NewEnum_Proxy( 
    ISkpNamedValuesM * This,
    /* [retval][out] */ IUnknown **pVal);


void __RPC_STUB ISkpNamedValuesM_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpNamedValuesM_get_Item_Proxy( 
    ISkpNamedValuesM * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ISkpNamedValue **pVal);


void __RPC_STUB ISkpNamedValuesM_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpNamedValuesM_get_Value_Proxy( 
    ISkpNamedValuesM * This,
    /* [in] */ BSTR valueName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISkpNamedValuesM_get_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpNamedValuesM_Set_Proxy( 
    ISkpNamedValuesM * This,
    /* [in] */ BSTR valueName,
    /* [in] */ VARIANT value);


void __RPC_STUB ISkpNamedValuesM_Set_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpNamedValuesM_INTERFACE_DEFINED__ */


#ifndef __ISkpPlane_INTERFACE_DEFINED__
#define __ISkpPlane_INTERFACE_DEFINED__

/* interface ISkpPlane */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpPlane;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1AC7CB56-7C6A-4e9d-A274-4DCE1C5C9749")
    ISkpPlane : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetPosition( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetNormal( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Normal( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [out] */ double *a,
            /* [out] */ double *b,
            /* [out] */ double *c,
            /* [out] */ double *d) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpPlaneVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpPlane * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpPlane * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpPlane * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetPosition )( 
            ISkpPlane * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ISkpPlane * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetNormal )( 
            ISkpPlane * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Normal )( 
            ISkpPlane * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            ISkpPlane * This,
            /* [out] */ double *a,
            /* [out] */ double *b,
            /* [out] */ double *c,
            /* [out] */ double *d);
        
        END_INTERFACE
    } ISkpPlaneVtbl;

    interface ISkpPlane
    {
        CONST_VTBL struct ISkpPlaneVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpPlane_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpPlane_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpPlane_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpPlane__GetPosition(This,pPoint3d)	\
    (This)->lpVtbl -> _GetPosition(This,pPoint3d)

#define ISkpPlane_get_Position(This,pPoint3d)	\
    (This)->lpVtbl -> get_Position(This,pPoint3d)

#define ISkpPlane__GetNormal(This,pVector3d)	\
    (This)->lpVtbl -> _GetNormal(This,pVector3d)

#define ISkpPlane_get_Normal(This,pVector3d)	\
    (This)->lpVtbl -> get_Normal(This,pVector3d)

#define ISkpPlane_Get(This,a,b,c,d)	\
    (This)->lpVtbl -> Get(This,a,b,c,d)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPlane__GetPosition_Proxy( 
    ISkpPlane * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpPlane__GetPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPlane_get_Position_Proxy( 
    ISkpPlane * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpPlane_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPlane__GetNormal_Proxy( 
    ISkpPlane * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpPlane__GetNormal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPlane_get_Normal_Proxy( 
    ISkpPlane * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpPlane_get_Normal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPlane_Get_Proxy( 
    ISkpPlane * This,
    /* [out] */ double *a,
    /* [out] */ double *b,
    /* [out] */ double *c,
    /* [out] */ double *d);


void __RPC_STUB ISkpPlane_Get_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpPlane_INTERFACE_DEFINED__ */


#ifndef __ISkpApplication_INTERFACE_DEFINED__
#define __ISkpApplication_INTERFACE_DEFINED__

/* interface ISkpApplication */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("06E0C968-19B6-4973-98CF-E056E6D157AA")
    ISkpApplication : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Fullname( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveDocument( 
            /* [retval][out] */ ISkpDocument **pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_StatusText( 
            /* [in] */ BSTR str) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TypeName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateTextureWriter( 
            /* [retval][out] */ ISkpTextureWriter **pWriter) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpApplication * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpApplication * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpApplication * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fullname )( 
            ISkpApplication * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISkpApplication * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveDocument )( 
            ISkpApplication * This,
            /* [retval][out] */ ISkpDocument **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusText )( 
            ISkpApplication * This,
            /* [in] */ BSTR str);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeName )( 
            ISkpApplication * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateTextureWriter )( 
            ISkpApplication * This,
            /* [retval][out] */ ISkpTextureWriter **pWriter);
        
        END_INTERFACE
    } ISkpApplicationVtbl;

    interface ISkpApplication
    {
        CONST_VTBL struct ISkpApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpApplication_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpApplication_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpApplication_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpApplication_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISkpApplication_get_Fullname(This,pVal)	\
    (This)->lpVtbl -> get_Fullname(This,pVal)

#define ISkpApplication_get_Version(This,pVal)	\
    (This)->lpVtbl -> get_Version(This,pVal)

#define ISkpApplication_get_ActiveDocument(This,pVal)	\
    (This)->lpVtbl -> get_ActiveDocument(This,pVal)

#define ISkpApplication_put_StatusText(This,str)	\
    (This)->lpVtbl -> put_StatusText(This,str)

#define ISkpApplication_get_TypeName(This,pVal)	\
    (This)->lpVtbl -> get_TypeName(This,pVal)

#define ISkpApplication_CreateTextureWriter(This,pWriter)	\
    (This)->lpVtbl -> CreateTextureWriter(This,pWriter)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpApplication_get_Name_Proxy( 
    ISkpApplication * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpApplication_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpApplication_get_Fullname_Proxy( 
    ISkpApplication * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpApplication_get_Fullname_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpApplication_get_Version_Proxy( 
    ISkpApplication * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpApplication_get_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpApplication_get_ActiveDocument_Proxy( 
    ISkpApplication * This,
    /* [retval][out] */ ISkpDocument **pVal);


void __RPC_STUB ISkpApplication_get_ActiveDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpApplication_put_StatusText_Proxy( 
    ISkpApplication * This,
    /* [in] */ BSTR str);


void __RPC_STUB ISkpApplication_put_StatusText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpApplication_get_TypeName_Proxy( 
    ISkpApplication * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpApplication_get_TypeName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpApplication_CreateTextureWriter_Proxy( 
    ISkpApplication * This,
    /* [retval][out] */ ISkpTextureWriter **pWriter);


void __RPC_STUB ISkpApplication_CreateTextureWriter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpApplication_INTERFACE_DEFINED__ */


#ifndef __ISkpFileReader_INTERFACE_DEFINED__
#define __ISkpFileReader_INTERFACE_DEFINED__

/* interface ISkpFileReader */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpFileReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D9B338BF-6B14-4813-AB17-DA7E7C64CAB5")
    ISkpFileReader : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenFile( 
            /* [in] */ BSTR filePath,
            /* [retval][out] */ ISkpDocument **ppDoc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenFromStream( 
            /* [in] */ IStream *pStream,
            /* [retval][out] */ ISkpDocument **ppDoc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenFromClipboard( 
            /* [retval][out] */ ISkpDocument **ppDoc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpFileReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpFileReader * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpFileReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpFileReader * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenFile )( 
            ISkpFileReader * This,
            /* [in] */ BSTR filePath,
            /* [retval][out] */ ISkpDocument **ppDoc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenFromStream )( 
            ISkpFileReader * This,
            /* [in] */ IStream *pStream,
            /* [retval][out] */ ISkpDocument **ppDoc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenFromClipboard )( 
            ISkpFileReader * This,
            /* [retval][out] */ ISkpDocument **ppDoc);
        
        END_INTERFACE
    } ISkpFileReaderVtbl;

    interface ISkpFileReader
    {
        CONST_VTBL struct ISkpFileReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpFileReader_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpFileReader_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpFileReader_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpFileReader_OpenFile(This,filePath,ppDoc)	\
    (This)->lpVtbl -> OpenFile(This,filePath,ppDoc)

#define ISkpFileReader_OpenFromStream(This,pStream,ppDoc)	\
    (This)->lpVtbl -> OpenFromStream(This,pStream,ppDoc)

#define ISkpFileReader_OpenFromClipboard(This,ppDoc)	\
    (This)->lpVtbl -> OpenFromClipboard(This,ppDoc)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFileReader_OpenFile_Proxy( 
    ISkpFileReader * This,
    /* [in] */ BSTR filePath,
    /* [retval][out] */ ISkpDocument **ppDoc);


void __RPC_STUB ISkpFileReader_OpenFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFileReader_OpenFromStream_Proxy( 
    ISkpFileReader * This,
    /* [in] */ IStream *pStream,
    /* [retval][out] */ ISkpDocument **ppDoc);


void __RPC_STUB ISkpFileReader_OpenFromStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFileReader_OpenFromClipboard_Proxy( 
    ISkpFileReader * This,
    /* [retval][out] */ ISkpDocument **ppDoc);


void __RPC_STUB ISkpFileReader_OpenFromClipboard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpFileReader_INTERFACE_DEFINED__ */


#ifndef __ISkpFileWriter_INTERFACE_DEFINED__
#define __ISkpFileWriter_INTERFACE_DEFINED__

/* interface ISkpFileWriter */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpFileWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("562CEEEE-91BF-4296-8F72-5635E7412FA7")
    ISkpFileWriter : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveToFile( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveToStream( 
            /* [in] */ IStream *pStream) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSaveVersion( 
            /* [in] */ long version) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpFileWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpFileWriter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpFileWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpFileWriter * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveToFile )( 
            ISkpFileWriter * This,
            /* [in] */ BSTR filePath);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveToStream )( 
            ISkpFileWriter * This,
            /* [in] */ IStream *pStream);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSaveVersion )( 
            ISkpFileWriter * This,
            /* [in] */ long version);
        
        END_INTERFACE
    } ISkpFileWriterVtbl;

    interface ISkpFileWriter
    {
        CONST_VTBL struct ISkpFileWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpFileWriter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpFileWriter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpFileWriter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpFileWriter_SaveToFile(This,filePath)	\
    (This)->lpVtbl -> SaveToFile(This,filePath)

#define ISkpFileWriter_SaveToStream(This,pStream)	\
    (This)->lpVtbl -> SaveToStream(This,pStream)

#define ISkpFileWriter_SetSaveVersion(This,version)	\
    (This)->lpVtbl -> SetSaveVersion(This,version)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFileWriter_SaveToFile_Proxy( 
    ISkpFileWriter * This,
    /* [in] */ BSTR filePath);


void __RPC_STUB ISkpFileWriter_SaveToFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFileWriter_SaveToStream_Proxy( 
    ISkpFileWriter * This,
    /* [in] */ IStream *pStream);


void __RPC_STUB ISkpFileWriter_SaveToStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFileWriter_SetSaveVersion_Proxy( 
    ISkpFileWriter * This,
    /* [in] */ long version);


void __RPC_STUB ISkpFileWriter_SetSaveVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpFileWriter_INTERFACE_DEFINED__ */


#ifndef __ISkpViewProvider_INTERFACE_DEFINED__
#define __ISkpViewProvider_INTERFACE_DEFINED__

/* interface ISkpViewProvider */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpViewProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8044FCF8-16C9-43f9-BB3C-B93983151E3E")
    ISkpViewProvider : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentView( 
            /* [retval][out] */ ISkpView **ppView) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpViewProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpViewProvider * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpViewProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpViewProvider * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentView )( 
            ISkpViewProvider * This,
            /* [retval][out] */ ISkpView **ppView);
        
        END_INTERFACE
    } ISkpViewProviderVtbl;

    interface ISkpViewProvider
    {
        CONST_VTBL struct ISkpViewProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpViewProvider_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpViewProvider_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpViewProvider_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpViewProvider_get_CurrentView(This,ppView)	\
    (This)->lpVtbl -> get_CurrentView(This,ppView)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpViewProvider_get_CurrentView_Proxy( 
    ISkpViewProvider * This,
    /* [retval][out] */ ISkpView **ppView);


void __RPC_STUB ISkpViewProvider_get_CurrentView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpViewProvider_INTERFACE_DEFINED__ */


#ifndef __ISkpEntityProvider_INTERFACE_DEFINED__
#define __ISkpEntityProvider_INTERFACE_DEFINED__

/* interface ISkpEntityProvider */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpEntityProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16BB046B-9742-4670-81C0-77C0804E2931")
    ISkpEntityProvider : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Edges( 
            /* [retval][out] */ ISkpEdges **pEdges) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EdgeUses( 
            /* [retval][out] */ ISkpEdgeUses **pEdgeUses) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Faces( 
            /* [retval][out] */ ISkpFaces **pFaces) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Vertices( 
            /* [retval][out] */ ISkpVertices **pVertices) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Polyline3ds( 
            /* [retval][out] */ ISkpPolyline3ds **pPolylines) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Loops( 
            /* [retval][out] */ ISkpLoops **pLoops) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Images( 
            /* [retval][out] */ ISkpImages **pImages) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Texts( 
            /* [retval][out] */ ISkpTexts **pTexts) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Groups( 
            /* [retval][out] */ ISkpGroups **pGroups) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ConstructionLines( 
            /* [retval][out] */ ISkpConstructionLines **pConstructionLines) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ConstructionPoints( 
            /* [retval][out] */ ISkpConstructionPoints **pConstructionPoints) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Dimensions( 
            /* [retval][out] */ ISkpDimensions **pDimensions) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ComponentInstances( 
            /* [retval][out] */ ISkpComponentInstances **pInstances) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Entities( 
            /* [retval][out] */ ISkpEntities **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SectionPlanes( 
            /* [retval][out] */ ISkpSectionPlanes **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HasSectionCuts( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStatistics( 
            /* [retval][out] */ ISkpEntityProviderStatistics **ppStats) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpEntityProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpEntityProvider * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpEntityProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpEntityProvider * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Edges )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpEdges **pEdges);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EdgeUses )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpEdgeUses **pEdgeUses);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Faces )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpFaces **pFaces);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vertices )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpVertices **pVertices);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Polyline3ds )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpPolyline3ds **pPolylines);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Loops )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpLoops **pLoops);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Images )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpImages **pImages);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Texts )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpTexts **pTexts);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Groups )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpGroups **pGroups);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConstructionLines )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpConstructionLines **pConstructionLines);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConstructionPoints )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpConstructionPoints **pConstructionPoints);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dimensions )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpDimensions **pDimensions);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentInstances )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpComponentInstances **pInstances);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Entities )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpEntities **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SectionPlanes )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpSectionPlanes **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasSectionCuts )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStatistics )( 
            ISkpEntityProvider * This,
            /* [retval][out] */ ISkpEntityProviderStatistics **ppStats);
        
        END_INTERFACE
    } ISkpEntityProviderVtbl;

    interface ISkpEntityProvider
    {
        CONST_VTBL struct ISkpEntityProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpEntityProvider_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpEntityProvider_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpEntityProvider_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpEntityProvider_get_Edges(This,pEdges)	\
    (This)->lpVtbl -> get_Edges(This,pEdges)

#define ISkpEntityProvider_get_EdgeUses(This,pEdgeUses)	\
    (This)->lpVtbl -> get_EdgeUses(This,pEdgeUses)

#define ISkpEntityProvider_get_Faces(This,pFaces)	\
    (This)->lpVtbl -> get_Faces(This,pFaces)

#define ISkpEntityProvider_get_Vertices(This,pVertices)	\
    (This)->lpVtbl -> get_Vertices(This,pVertices)

#define ISkpEntityProvider_get_Polyline3ds(This,pPolylines)	\
    (This)->lpVtbl -> get_Polyline3ds(This,pPolylines)

#define ISkpEntityProvider_get_Loops(This,pLoops)	\
    (This)->lpVtbl -> get_Loops(This,pLoops)

#define ISkpEntityProvider_get_Images(This,pImages)	\
    (This)->lpVtbl -> get_Images(This,pImages)

#define ISkpEntityProvider_get_Texts(This,pTexts)	\
    (This)->lpVtbl -> get_Texts(This,pTexts)

#define ISkpEntityProvider_get_Groups(This,pGroups)	\
    (This)->lpVtbl -> get_Groups(This,pGroups)

#define ISkpEntityProvider_get_ConstructionLines(This,pConstructionLines)	\
    (This)->lpVtbl -> get_ConstructionLines(This,pConstructionLines)

#define ISkpEntityProvider_get_ConstructionPoints(This,pConstructionPoints)	\
    (This)->lpVtbl -> get_ConstructionPoints(This,pConstructionPoints)

#define ISkpEntityProvider_get_Dimensions(This,pDimensions)	\
    (This)->lpVtbl -> get_Dimensions(This,pDimensions)

#define ISkpEntityProvider_get_ComponentInstances(This,pInstances)	\
    (This)->lpVtbl -> get_ComponentInstances(This,pInstances)

#define ISkpEntityProvider_get_Entities(This,pVal)	\
    (This)->lpVtbl -> get_Entities(This,pVal)

#define ISkpEntityProvider_get_SectionPlanes(This,pVal)	\
    (This)->lpVtbl -> get_SectionPlanes(This,pVal)

#define ISkpEntityProvider_HasSectionCuts(This,pVal)	\
    (This)->lpVtbl -> HasSectionCuts(This,pVal)

#define ISkpEntityProvider_GetStatistics(This,ppStats)	\
    (This)->lpVtbl -> GetStatistics(This,ppStats)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_Edges_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpEdges **pEdges);


void __RPC_STUB ISkpEntityProvider_get_Edges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_EdgeUses_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpEdgeUses **pEdgeUses);


void __RPC_STUB ISkpEntityProvider_get_EdgeUses_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_Faces_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpFaces **pFaces);


void __RPC_STUB ISkpEntityProvider_get_Faces_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_Vertices_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpVertices **pVertices);


void __RPC_STUB ISkpEntityProvider_get_Vertices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_Polyline3ds_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpPolyline3ds **pPolylines);


void __RPC_STUB ISkpEntityProvider_get_Polyline3ds_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_Loops_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpLoops **pLoops);


void __RPC_STUB ISkpEntityProvider_get_Loops_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_Images_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpImages **pImages);


void __RPC_STUB ISkpEntityProvider_get_Images_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_Texts_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpTexts **pTexts);


void __RPC_STUB ISkpEntityProvider_get_Texts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_Groups_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpGroups **pGroups);


void __RPC_STUB ISkpEntityProvider_get_Groups_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_ConstructionLines_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpConstructionLines **pConstructionLines);


void __RPC_STUB ISkpEntityProvider_get_ConstructionLines_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_ConstructionPoints_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpConstructionPoints **pConstructionPoints);


void __RPC_STUB ISkpEntityProvider_get_ConstructionPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_Dimensions_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpDimensions **pDimensions);


void __RPC_STUB ISkpEntityProvider_get_Dimensions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_ComponentInstances_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpComponentInstances **pInstances);


void __RPC_STUB ISkpEntityProvider_get_ComponentInstances_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_Entities_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpEntities **pVal);


void __RPC_STUB ISkpEntityProvider_get_Entities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_get_SectionPlanes_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpSectionPlanes **pVal);


void __RPC_STUB ISkpEntityProvider_get_SectionPlanes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_HasSectionCuts_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpEntityProvider_HasSectionCuts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpEntityProvider_GetStatistics_Proxy( 
    ISkpEntityProvider * This,
    /* [retval][out] */ ISkpEntityProviderStatistics **ppStats);


void __RPC_STUB ISkpEntityProvider_GetStatistics_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpEntityProvider_INTERFACE_DEFINED__ */


#ifndef __ISkpDocument_INTERFACE_DEFINED__
#define __ISkpDocument_INTERFACE_DEFINED__

/* interface ISkpDocument */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E6E72823-A815-4760-91A1-76CED4F4AA60")
    ISkpDocument : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ ISkpApplication **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ModelExtents( 
            /* [retval][out] */ ISkpBoundingBox3d **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Fonts( 
            /* [retval][out] */ ISkpFonts **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Materials( 
            /* [retval][out] */ ISkpMaterials **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Layers( 
            /* [retval][out] */ ISkpLayers **pLayers) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OptionsManager( 
            /* [retval][out] */ ISkpOptionsManager **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ComponentDefinitions( 
            /* [retval][out] */ ISkpComponentDefinitions **pDefinitions) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCamera( 
            /* [retval][out] */ ISkpCamera **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Pages( 
            /* [retval][out] */ ISkpPages **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectionSet( 
            /* [retval][out] */ ISkpSelectionSet **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pDesc) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Renderer( 
            /* [retval][out] */ ISkpRenderer **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowOptions( 
            /* [retval][out] */ ISkpOptionsProvider **ppShadowOptions) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StyleManager( 
            /* [retval][out] */ ISkpStyleManager **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ModelExtentsLLA( 
            /* [retval][out] */ ISkpBoundingBox3d **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HLRView( 
            /* [retval][out] */ ISkpHLRView **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCameraM( 
            /* [retval][out] */ ISkpCameraM **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpDocument * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpDocument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpDocument * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpApplication **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModelExtents )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpBoundingBox3d **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fonts )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpFonts **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Materials )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpMaterials **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Layers )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpLayers **pLayers);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OptionsManager )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpOptionsManager **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentDefinitions )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpComponentDefinitions **pDefinitions);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCamera )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpCamera **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Pages )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpPages **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectionSet )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpSelectionSet **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ISkpDocument * This,
            /* [retval][out] */ BSTR *pDesc);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Renderer )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpRenderer **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowOptions )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpOptionsProvider **ppShadowOptions);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StyleManager )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpStyleManager **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModelExtentsLLA )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpBoundingBox3d **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HLRView )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpHLRView **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCameraM )( 
            ISkpDocument * This,
            /* [retval][out] */ ISkpCameraM **pVal);
        
        END_INTERFACE
    } ISkpDocumentVtbl;

    interface ISkpDocument
    {
        CONST_VTBL struct ISkpDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpDocument_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpDocument_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpDocument_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpDocument_get_Application(This,pVal)	\
    (This)->lpVtbl -> get_Application(This,pVal)

#define ISkpDocument_get_ModelExtents(This,pVal)	\
    (This)->lpVtbl -> get_ModelExtents(This,pVal)

#define ISkpDocument_get_Fonts(This,pVal)	\
    (This)->lpVtbl -> get_Fonts(This,pVal)

#define ISkpDocument_get_Materials(This,pVal)	\
    (This)->lpVtbl -> get_Materials(This,pVal)

#define ISkpDocument_get_Layers(This,pLayers)	\
    (This)->lpVtbl -> get_Layers(This,pLayers)

#define ISkpDocument_get_OptionsManager(This,pVal)	\
    (This)->lpVtbl -> get_OptionsManager(This,pVal)

#define ISkpDocument_get_ComponentDefinitions(This,pDefinitions)	\
    (This)->lpVtbl -> get_ComponentDefinitions(This,pDefinitions)

#define ISkpDocument_get_CurrentCamera(This,pVal)	\
    (This)->lpVtbl -> get_CurrentCamera(This,pVal)

#define ISkpDocument_get_Pages(This,pVal)	\
    (This)->lpVtbl -> get_Pages(This,pVal)

#define ISkpDocument_get_SelectionSet(This,pVal)	\
    (This)->lpVtbl -> get_SelectionSet(This,pVal)

#define ISkpDocument_get_Description(This,pDesc)	\
    (This)->lpVtbl -> get_Description(This,pDesc)

#define ISkpDocument_get_Renderer(This,pVal)	\
    (This)->lpVtbl -> get_Renderer(This,pVal)

#define ISkpDocument_get_ShadowOptions(This,ppShadowOptions)	\
    (This)->lpVtbl -> get_ShadowOptions(This,ppShadowOptions)

#define ISkpDocument_get_StyleManager(This,pVal)	\
    (This)->lpVtbl -> get_StyleManager(This,pVal)

#define ISkpDocument_get_ModelExtentsLLA(This,pVal)	\
    (This)->lpVtbl -> get_ModelExtentsLLA(This,pVal)

#define ISkpDocument_get_HLRView(This,pVal)	\
    (This)->lpVtbl -> get_HLRView(This,pVal)

#define ISkpDocument_get_CurrentCameraM(This,pVal)	\
    (This)->lpVtbl -> get_CurrentCameraM(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_Application_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpApplication **pVal);


void __RPC_STUB ISkpDocument_get_Application_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_ModelExtents_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpBoundingBox3d **pVal);


void __RPC_STUB ISkpDocument_get_ModelExtents_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_Fonts_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpFonts **pVal);


void __RPC_STUB ISkpDocument_get_Fonts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_Materials_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpMaterials **pVal);


void __RPC_STUB ISkpDocument_get_Materials_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_Layers_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpLayers **pLayers);


void __RPC_STUB ISkpDocument_get_Layers_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_OptionsManager_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpOptionsManager **pVal);


void __RPC_STUB ISkpDocument_get_OptionsManager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_ComponentDefinitions_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpComponentDefinitions **pDefinitions);


void __RPC_STUB ISkpDocument_get_ComponentDefinitions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_CurrentCamera_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpCamera **pVal);


void __RPC_STUB ISkpDocument_get_CurrentCamera_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_Pages_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpPages **pVal);


void __RPC_STUB ISkpDocument_get_Pages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_SelectionSet_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpSelectionSet **pVal);


void __RPC_STUB ISkpDocument_get_SelectionSet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_Description_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ BSTR *pDesc);


void __RPC_STUB ISkpDocument_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_Renderer_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpRenderer **pVal);


void __RPC_STUB ISkpDocument_get_Renderer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_ShadowOptions_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpOptionsProvider **ppShadowOptions);


void __RPC_STUB ISkpDocument_get_ShadowOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_StyleManager_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpStyleManager **pVal);


void __RPC_STUB ISkpDocument_get_StyleManager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_ModelExtentsLLA_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpBoundingBox3d **pVal);


void __RPC_STUB ISkpDocument_get_ModelExtentsLLA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_HLRView_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpHLRView **pVal);


void __RPC_STUB ISkpDocument_get_HLRView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDocument_get_CurrentCameraM_Proxy( 
    ISkpDocument * This,
    /* [retval][out] */ ISkpCameraM **pVal);


void __RPC_STUB ISkpDocument_get_CurrentCameraM_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpDocument_INTERFACE_DEFINED__ */


#ifndef __ISkpThumbnailProvider_INTERFACE_DEFINED__
#define __ISkpThumbnailProvider_INTERFACE_DEFINED__

/* interface ISkpThumbnailProvider */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpThumbnailProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e47e315d-9c39-444d-b91f-12aa14efc484")
    ISkpThumbnailProvider : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetThumbnailSize( 
            /* [out] */ long *nWidth,
            /* [out] */ long *nHeight) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetThumbnail( 
            /* [in] */ long nWidth,
            /* [in] */ long nHeight,
            /* [size_is][out] */ BYTE pBytes[  ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveThumbnail( 
            /* [in] */ BSTR bstrFilePath) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpThumbnailProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpThumbnailProvider * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpThumbnailProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpThumbnailProvider * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetThumbnailSize )( 
            ISkpThumbnailProvider * This,
            /* [out] */ long *nWidth,
            /* [out] */ long *nHeight);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetThumbnail )( 
            ISkpThumbnailProvider * This,
            /* [in] */ long nWidth,
            /* [in] */ long nHeight,
            /* [size_is][out] */ BYTE pBytes[  ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveThumbnail )( 
            ISkpThumbnailProvider * This,
            /* [in] */ BSTR bstrFilePath);
        
        END_INTERFACE
    } ISkpThumbnailProviderVtbl;

    interface ISkpThumbnailProvider
    {
        CONST_VTBL struct ISkpThumbnailProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpThumbnailProvider_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpThumbnailProvider_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpThumbnailProvider_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpThumbnailProvider_GetThumbnailSize(This,nWidth,nHeight)	\
    (This)->lpVtbl -> GetThumbnailSize(This,nWidth,nHeight)

#define ISkpThumbnailProvider_GetThumbnail(This,nWidth,nHeight,pBytes)	\
    (This)->lpVtbl -> GetThumbnail(This,nWidth,nHeight,pBytes)

#define ISkpThumbnailProvider_SaveThumbnail(This,bstrFilePath)	\
    (This)->lpVtbl -> SaveThumbnail(This,bstrFilePath)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpThumbnailProvider_GetThumbnailSize_Proxy( 
    ISkpThumbnailProvider * This,
    /* [out] */ long *nWidth,
    /* [out] */ long *nHeight);


void __RPC_STUB ISkpThumbnailProvider_GetThumbnailSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpThumbnailProvider_GetThumbnail_Proxy( 
    ISkpThumbnailProvider * This,
    /* [in] */ long nWidth,
    /* [in] */ long nHeight,
    /* [size_is][out] */ BYTE pBytes[  ]);


void __RPC_STUB ISkpThumbnailProvider_GetThumbnail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpThumbnailProvider_SaveThumbnail_Proxy( 
    ISkpThumbnailProvider * This,
    /* [in] */ BSTR bstrFilePath);


void __RPC_STUB ISkpThumbnailProvider_SaveThumbnail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpThumbnailProvider_INTERFACE_DEFINED__ */


#ifndef __ISkpHLRGeneration_INTERFACE_DEFINED__
#define __ISkpHLRGeneration_INTERFACE_DEFINED__

/* interface ISkpHLRGeneration */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpHLRGeneration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80ACB93F-E86E-4198-90BE-17805448CA0C")
    ISkpHLRGeneration : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Options( 
            /* [retval][out] */ ISkpNamedValues **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Option( 
            /* [in] */ BSTR optionName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Option( 
            /* [in] */ BSTR optionName,
            /* [in] */ VARIANT value) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoHLR( 
            /* [in] */ ISkpView *pView,
            /* [in] */ ISkpHLRWriter *pWriter) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetHLRClipWindow( 
            /* [in] */ ISkpView *pView,
            /* [in] */ BOOL computeTightClipWindow,
            /* [out] */ double *minX,
            /* [out] */ double *minY,
            /* [out] */ double *maxX,
            /* [out] */ double *maxY,
            /* [out] */ double *nearDist,
            /* [out] */ double *farDist) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpHLRGenerationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpHLRGeneration * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpHLRGeneration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpHLRGeneration * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ISkpHLRGeneration * This,
            /* [retval][out] */ ISkpNamedValues **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Option )( 
            ISkpHLRGeneration * This,
            /* [in] */ BSTR optionName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Option )( 
            ISkpHLRGeneration * This,
            /* [in] */ BSTR optionName,
            /* [in] */ VARIANT value);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoHLR )( 
            ISkpHLRGeneration * This,
            /* [in] */ ISkpView *pView,
            /* [in] */ ISkpHLRWriter *pWriter);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHLRClipWindow )( 
            ISkpHLRGeneration * This,
            /* [in] */ ISkpView *pView,
            /* [in] */ BOOL computeTightClipWindow,
            /* [out] */ double *minX,
            /* [out] */ double *minY,
            /* [out] */ double *maxX,
            /* [out] */ double *maxY,
            /* [out] */ double *nearDist,
            /* [out] */ double *farDist);
        
        END_INTERFACE
    } ISkpHLRGenerationVtbl;

    interface ISkpHLRGeneration
    {
        CONST_VTBL struct ISkpHLRGenerationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpHLRGeneration_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpHLRGeneration_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpHLRGeneration_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpHLRGeneration_get_Options(This,pVal)	\
    (This)->lpVtbl -> get_Options(This,pVal)

#define ISkpHLRGeneration_get_Option(This,optionName,pVal)	\
    (This)->lpVtbl -> get_Option(This,optionName,pVal)

#define ISkpHLRGeneration_put_Option(This,optionName,value)	\
    (This)->lpVtbl -> put_Option(This,optionName,value)

#define ISkpHLRGeneration_DoHLR(This,pView,pWriter)	\
    (This)->lpVtbl -> DoHLR(This,pView,pWriter)

#define ISkpHLRGeneration_GetHLRClipWindow(This,pView,computeTightClipWindow,minX,minY,maxX,maxY,nearDist,farDist)	\
    (This)->lpVtbl -> GetHLRClipWindow(This,pView,computeTightClipWindow,minX,minY,maxX,maxY,nearDist,farDist)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpHLRGeneration_get_Options_Proxy( 
    ISkpHLRGeneration * This,
    /* [retval][out] */ ISkpNamedValues **pVal);


void __RPC_STUB ISkpHLRGeneration_get_Options_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpHLRGeneration_get_Option_Proxy( 
    ISkpHLRGeneration * This,
    /* [in] */ BSTR optionName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISkpHLRGeneration_get_Option_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpHLRGeneration_put_Option_Proxy( 
    ISkpHLRGeneration * This,
    /* [in] */ BSTR optionName,
    /* [in] */ VARIANT value);


void __RPC_STUB ISkpHLRGeneration_put_Option_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpHLRGeneration_DoHLR_Proxy( 
    ISkpHLRGeneration * This,
    /* [in] */ ISkpView *pView,
    /* [in] */ ISkpHLRWriter *pWriter);


void __RPC_STUB ISkpHLRGeneration_DoHLR_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpHLRGeneration_GetHLRClipWindow_Proxy( 
    ISkpHLRGeneration * This,
    /* [in] */ ISkpView *pView,
    /* [in] */ BOOL computeTightClipWindow,
    /* [out] */ double *minX,
    /* [out] */ double *minY,
    /* [out] */ double *maxX,
    /* [out] */ double *maxY,
    /* [out] */ double *nearDist,
    /* [out] */ double *farDist);


void __RPC_STUB ISkpHLRGeneration_GetHLRClipWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpHLRGeneration_INTERFACE_DEFINED__ */


#ifndef __ISkpHLRWriter_INTERFACE_DEFINED__
#define __ISkpHLRWriter_INTERFACE_DEFINED__

/* interface ISkpHLRWriter */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpHLRWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8C930912-0653-4adc-99E4-3438DE820D6C")
    ISkpHLRWriter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StoreSegment( 
            /* [in] */ OLE_COLOR color,
            /* [in] */ BOOL bSilhouette,
            /* [in] */ double *pFromPoint3d,
            /* [in] */ double *pToPoint3d) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StoreSliceSegment( 
            /* [in] */ OLE_COLOR color,
            /* [in] */ double *pFromPoint3d,
            /* [in] */ double *pToPoint3d) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StoreFace( 
            /* [in] */ OLE_COLOR color,
            /* [in] */ ISkpFace *pOutputFace) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StoreText( 
            /* [in] */ double *originPoint3d,
            /* [in] */ double *xAxisPoint3d,
            /* [in] */ double *yAxisPoint3d,
            /* [in] */ double width,
            /* [in] */ double height,
            /* [in] */ BOOL bItalic,
            /* [in] */ BOOL bBold,
            /* [in] */ BSTR fontFace,
            /* [in] */ BSTR line,
            /* [in] */ OLE_COLOR color) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StoreTextWithFont( 
            /* [in] */ double *originPoint3d,
            /* [in] */ double *xAxisPoint3d,
            /* [in] */ double *yAxisPoint3d,
            /* [in] */ double width,
            /* [in] */ double height,
            /* [in] */ ISkpFont *font,
            /* [in] */ BSTR line,
            /* [in] */ OLE_COLOR color) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpHLRWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpHLRWriter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpHLRWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpHLRWriter * This);
        
        HRESULT ( STDMETHODCALLTYPE *StoreSegment )( 
            ISkpHLRWriter * This,
            /* [in] */ OLE_COLOR color,
            /* [in] */ BOOL bSilhouette,
            /* [in] */ double *pFromPoint3d,
            /* [in] */ double *pToPoint3d);
        
        HRESULT ( STDMETHODCALLTYPE *StoreSliceSegment )( 
            ISkpHLRWriter * This,
            /* [in] */ OLE_COLOR color,
            /* [in] */ double *pFromPoint3d,
            /* [in] */ double *pToPoint3d);
        
        HRESULT ( STDMETHODCALLTYPE *StoreFace )( 
            ISkpHLRWriter * This,
            /* [in] */ OLE_COLOR color,
            /* [in] */ ISkpFace *pOutputFace);
        
        HRESULT ( STDMETHODCALLTYPE *StoreText )( 
            ISkpHLRWriter * This,
            /* [in] */ double *originPoint3d,
            /* [in] */ double *xAxisPoint3d,
            /* [in] */ double *yAxisPoint3d,
            /* [in] */ double width,
            /* [in] */ double height,
            /* [in] */ BOOL bItalic,
            /* [in] */ BOOL bBold,
            /* [in] */ BSTR fontFace,
            /* [in] */ BSTR line,
            /* [in] */ OLE_COLOR color);
        
        HRESULT ( STDMETHODCALLTYPE *StoreTextWithFont )( 
            ISkpHLRWriter * This,
            /* [in] */ double *originPoint3d,
            /* [in] */ double *xAxisPoint3d,
            /* [in] */ double *yAxisPoint3d,
            /* [in] */ double width,
            /* [in] */ double height,
            /* [in] */ ISkpFont *font,
            /* [in] */ BSTR line,
            /* [in] */ OLE_COLOR color);
        
        END_INTERFACE
    } ISkpHLRWriterVtbl;

    interface ISkpHLRWriter
    {
        CONST_VTBL struct ISkpHLRWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpHLRWriter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpHLRWriter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpHLRWriter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpHLRWriter_StoreSegment(This,color,bSilhouette,pFromPoint3d,pToPoint3d)	\
    (This)->lpVtbl -> StoreSegment(This,color,bSilhouette,pFromPoint3d,pToPoint3d)

#define ISkpHLRWriter_StoreSliceSegment(This,color,pFromPoint3d,pToPoint3d)	\
    (This)->lpVtbl -> StoreSliceSegment(This,color,pFromPoint3d,pToPoint3d)

#define ISkpHLRWriter_StoreFace(This,color,pOutputFace)	\
    (This)->lpVtbl -> StoreFace(This,color,pOutputFace)

#define ISkpHLRWriter_StoreText(This,originPoint3d,xAxisPoint3d,yAxisPoint3d,width,height,bItalic,bBold,fontFace,line,color)	\
    (This)->lpVtbl -> StoreText(This,originPoint3d,xAxisPoint3d,yAxisPoint3d,width,height,bItalic,bBold,fontFace,line,color)

#define ISkpHLRWriter_StoreTextWithFont(This,originPoint3d,xAxisPoint3d,yAxisPoint3d,width,height,font,line,color)	\
    (This)->lpVtbl -> StoreTextWithFont(This,originPoint3d,xAxisPoint3d,yAxisPoint3d,width,height,font,line,color)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISkpHLRWriter_StoreSegment_Proxy( 
    ISkpHLRWriter * This,
    /* [in] */ OLE_COLOR color,
    /* [in] */ BOOL bSilhouette,
    /* [in] */ double *pFromPoint3d,
    /* [in] */ double *pToPoint3d);


void __RPC_STUB ISkpHLRWriter_StoreSegment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpHLRWriter_StoreSliceSegment_Proxy( 
    ISkpHLRWriter * This,
    /* [in] */ OLE_COLOR color,
    /* [in] */ double *pFromPoint3d,
    /* [in] */ double *pToPoint3d);


void __RPC_STUB ISkpHLRWriter_StoreSliceSegment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpHLRWriter_StoreFace_Proxy( 
    ISkpHLRWriter * This,
    /* [in] */ OLE_COLOR color,
    /* [in] */ ISkpFace *pOutputFace);


void __RPC_STUB ISkpHLRWriter_StoreFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpHLRWriter_StoreText_Proxy( 
    ISkpHLRWriter * This,
    /* [in] */ double *originPoint3d,
    /* [in] */ double *xAxisPoint3d,
    /* [in] */ double *yAxisPoint3d,
    /* [in] */ double width,
    /* [in] */ double height,
    /* [in] */ BOOL bItalic,
    /* [in] */ BOOL bBold,
    /* [in] */ BSTR fontFace,
    /* [in] */ BSTR line,
    /* [in] */ OLE_COLOR color);


void __RPC_STUB ISkpHLRWriter_StoreText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpHLRWriter_StoreTextWithFont_Proxy( 
    ISkpHLRWriter * This,
    /* [in] */ double *originPoint3d,
    /* [in] */ double *xAxisPoint3d,
    /* [in] */ double *yAxisPoint3d,
    /* [in] */ double width,
    /* [in] */ double height,
    /* [in] */ ISkpFont *font,
    /* [in] */ BSTR line,
    /* [in] */ OLE_COLOR color);


void __RPC_STUB ISkpHLRWriter_StoreTextWithFont_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpHLRWriter_INTERFACE_DEFINED__ */


#ifndef __ISkpView_INTERFACE_DEFINED__
#define __ISkpView_INTERFACE_DEFINED__

/* interface ISkpView */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2EF46735-233B-45a7-983A-361649055B98")
    ISkpView : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PixelToModel( 
            /* [in] */ long pixels,
            /* [in] */ double *pPoint3d,
            /* [out] */ double *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPixelsPerInch( 
            /* [out] */ long *x,
            /* [out] */ long *y) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetDirection( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetXVec( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetYVec( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_XVec( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_YVec( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MapToViewport( 
            /* [in] */ double *pModelSpacePoint3d,
            /* [out] */ double *pViewportPoint3d,
            /* [out] */ BOOL *pSuccess) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetScreenDimensions( 
            /* [out] */ long *x,
            /* [out] */ long *y) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpView * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpView * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PixelToModel )( 
            ISkpView * This,
            /* [in] */ long pixels,
            /* [in] */ double *pPoint3d,
            /* [out] */ double *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPixelsPerInch )( 
            ISkpView * This,
            /* [out] */ long *x,
            /* [out] */ long *y);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Direction )( 
            ISkpView * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetDirection )( 
            ISkpView * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetXVec )( 
            ISkpView * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetYVec )( 
            ISkpView * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XVec )( 
            ISkpView * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YVec )( 
            ISkpView * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MapToViewport )( 
            ISkpView * This,
            /* [in] */ double *pModelSpacePoint3d,
            /* [out] */ double *pViewportPoint3d,
            /* [out] */ BOOL *pSuccess);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetScreenDimensions )( 
            ISkpView * This,
            /* [out] */ long *x,
            /* [out] */ long *y);
        
        END_INTERFACE
    } ISkpViewVtbl;

    interface ISkpView
    {
        CONST_VTBL struct ISkpViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpView_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpView_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpView_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpView_PixelToModel(This,pixels,pPoint3d,pVal)	\
    (This)->lpVtbl -> PixelToModel(This,pixels,pPoint3d,pVal)

#define ISkpView_GetPixelsPerInch(This,x,y)	\
    (This)->lpVtbl -> GetPixelsPerInch(This,x,y)

#define ISkpView_get_Direction(This,pVector3d)	\
    (This)->lpVtbl -> get_Direction(This,pVector3d)

#define ISkpView__GetDirection(This,pVector3d)	\
    (This)->lpVtbl -> _GetDirection(This,pVector3d)

#define ISkpView__GetXVec(This,pVector3d)	\
    (This)->lpVtbl -> _GetXVec(This,pVector3d)

#define ISkpView__GetYVec(This,pVector3d)	\
    (This)->lpVtbl -> _GetYVec(This,pVector3d)

#define ISkpView_get_XVec(This,pVector3d)	\
    (This)->lpVtbl -> get_XVec(This,pVector3d)

#define ISkpView_get_YVec(This,pVector3d)	\
    (This)->lpVtbl -> get_YVec(This,pVector3d)

#define ISkpView_MapToViewport(This,pModelSpacePoint3d,pViewportPoint3d,pSuccess)	\
    (This)->lpVtbl -> MapToViewport(This,pModelSpacePoint3d,pViewportPoint3d,pSuccess)

#define ISkpView_GetScreenDimensions(This,x,y)	\
    (This)->lpVtbl -> GetScreenDimensions(This,x,y)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpView_PixelToModel_Proxy( 
    ISkpView * This,
    /* [in] */ long pixels,
    /* [in] */ double *pPoint3d,
    /* [out] */ double *pVal);


void __RPC_STUB ISkpView_PixelToModel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpView_GetPixelsPerInch_Proxy( 
    ISkpView * This,
    /* [out] */ long *x,
    /* [out] */ long *y);


void __RPC_STUB ISkpView_GetPixelsPerInch_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpView_get_Direction_Proxy( 
    ISkpView * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpView_get_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpView__GetDirection_Proxy( 
    ISkpView * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpView__GetDirection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpView__GetXVec_Proxy( 
    ISkpView * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpView__GetXVec_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpView__GetYVec_Proxy( 
    ISkpView * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpView__GetYVec_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpView_get_XVec_Proxy( 
    ISkpView * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpView_get_XVec_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpView_get_YVec_Proxy( 
    ISkpView * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpView_get_YVec_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpView_MapToViewport_Proxy( 
    ISkpView * This,
    /* [in] */ double *pModelSpacePoint3d,
    /* [out] */ double *pViewportPoint3d,
    /* [out] */ BOOL *pSuccess);


void __RPC_STUB ISkpView_MapToViewport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpView_GetScreenDimensions_Proxy( 
    ISkpView * This,
    /* [out] */ long *x,
    /* [out] */ long *y);


void __RPC_STUB ISkpView_GetScreenDimensions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpView_INTERFACE_DEFINED__ */


#ifndef __ISkpDimensions_INTERFACE_DEFINED__
#define __ISkpDimensions_INTERFACE_DEFINED__

/* interface ISkpDimensions */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpDimensions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DD5AFA7-10BC-4537-8793-CDCF86CEB17E")
    ISkpDimensions : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpDimension **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpDimensionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpDimensions * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpDimensions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpDimensions * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpDimensions * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpDimensions * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpDimension **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpDimensions * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpDimensionsVtbl;

    interface ISkpDimensions
    {
        CONST_VTBL struct ISkpDimensionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpDimensions_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpDimensions_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpDimensions_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpDimensions_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpDimensions_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpDimensions_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensions_get_Count_Proxy( 
    ISkpDimensions * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpDimensions_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensions_get_Item_Proxy( 
    ISkpDimensions * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpDimension **pVal);


void __RPC_STUB ISkpDimensions_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensions_get__NewEnum_Proxy( 
    ISkpDimensions * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpDimensions_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpDimensions_INTERFACE_DEFINED__ */


#ifndef __ISkpDimension_INTERFACE_DEFINED__
#define __ISkpDimension_INTERFACE_DEFINED__

/* interface ISkpDimension */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpDimension;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("738115B6-B41C-4ee4-94C1-E48AE59B225D")
    ISkpDimension : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Style( 
            /* [retval][out] */ ISkpDimensionStyle **ppVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Plane( 
            /* [retval][out] */ ISkpPlane **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFormattedText( 
            /* [in] */ ISkpView *pView,
            /* [in] */ BOOL bNotToScale,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetTextPosition( 
            /* [in] */ ISkpView *pView,
            /* [out] */ double textPositionPoint3d[ 3 ],
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TextPosition( 
            /* [in] */ ISkpView *pView,
            /* [out] */ ISkpPoint3d **textPositionPoint3d,
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Font( 
            /* [retval][out] */ ISkpFont **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Has3DText( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ArrowType( 
            /* [retval][out] */ SkpDimensionArrow *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpDimensionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpDimension * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpDimension * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpDimension * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Style )( 
            ISkpDimension * This,
            /* [retval][out] */ ISkpDimensionStyle **ppVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ISkpDimension * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Plane )( 
            ISkpDimension * This,
            /* [retval][out] */ ISkpPlane **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFormattedText )( 
            ISkpDimension * This,
            /* [in] */ ISkpView *pView,
            /* [in] */ BOOL bNotToScale,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetTextPosition )( 
            ISkpDimension * This,
            /* [in] */ ISkpView *pView,
            /* [out] */ double textPositionPoint3d[ 3 ],
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TextPosition )( 
            ISkpDimension * This,
            /* [in] */ ISkpView *pView,
            /* [out] */ ISkpPoint3d **textPositionPoint3d,
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Font )( 
            ISkpDimension * This,
            /* [retval][out] */ ISkpFont **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Has3DText )( 
            ISkpDimension * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArrowType )( 
            ISkpDimension * This,
            /* [retval][out] */ SkpDimensionArrow *pVal);
        
        END_INTERFACE
    } ISkpDimensionVtbl;

    interface ISkpDimension
    {
        CONST_VTBL struct ISkpDimensionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpDimension_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpDimension_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpDimension_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpDimension_get_Style(This,ppVal)	\
    (This)->lpVtbl -> get_Style(This,ppVal)

#define ISkpDimension_get_Text(This,pVal)	\
    (This)->lpVtbl -> get_Text(This,pVal)

#define ISkpDimension_get_Plane(This,pVal)	\
    (This)->lpVtbl -> get_Plane(This,pVal)

#define ISkpDimension_GetFormattedText(This,pView,bNotToScale,pVal)	\
    (This)->lpVtbl -> GetFormattedText(This,pView,bNotToScale,pVal)

#define ISkpDimension__GetTextPosition(This,pView,textPositionPoint3d,just,align)	\
    (This)->lpVtbl -> _GetTextPosition(This,pView,textPositionPoint3d,just,align)

#define ISkpDimension_TextPosition(This,pView,textPositionPoint3d,just,align)	\
    (This)->lpVtbl -> TextPosition(This,pView,textPositionPoint3d,just,align)

#define ISkpDimension_get_Font(This,pVal)	\
    (This)->lpVtbl -> get_Font(This,pVal)

#define ISkpDimension_get_Has3DText(This,pVal)	\
    (This)->lpVtbl -> get_Has3DText(This,pVal)

#define ISkpDimension_get_ArrowType(This,pVal)	\
    (This)->lpVtbl -> get_ArrowType(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimension_get_Style_Proxy( 
    ISkpDimension * This,
    /* [retval][out] */ ISkpDimensionStyle **ppVal);


void __RPC_STUB ISkpDimension_get_Style_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimension_get_Text_Proxy( 
    ISkpDimension * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpDimension_get_Text_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimension_get_Plane_Proxy( 
    ISkpDimension * This,
    /* [retval][out] */ ISkpPlane **pVal);


void __RPC_STUB ISkpDimension_get_Plane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimension_GetFormattedText_Proxy( 
    ISkpDimension * This,
    /* [in] */ ISkpView *pView,
    /* [in] */ BOOL bNotToScale,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpDimension_GetFormattedText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimension__GetTextPosition_Proxy( 
    ISkpDimension * This,
    /* [in] */ ISkpView *pView,
    /* [out] */ double textPositionPoint3d[ 3 ],
    /* [out] */ SkpTextJustification *just,
    /* [out] */ SkpTextAlignment *align);


void __RPC_STUB ISkpDimension__GetTextPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimension_TextPosition_Proxy( 
    ISkpDimension * This,
    /* [in] */ ISkpView *pView,
    /* [out] */ ISkpPoint3d **textPositionPoint3d,
    /* [out] */ SkpTextJustification *just,
    /* [out] */ SkpTextAlignment *align);


void __RPC_STUB ISkpDimension_TextPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimension_get_Font_Proxy( 
    ISkpDimension * This,
    /* [retval][out] */ ISkpFont **pVal);


void __RPC_STUB ISkpDimension_get_Font_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimension_get_Has3DText_Proxy( 
    ISkpDimension * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDimension_get_Has3DText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimension_get_ArrowType_Proxy( 
    ISkpDimension * This,
    /* [retval][out] */ SkpDimensionArrow *pVal);


void __RPC_STUB ISkpDimension_get_ArrowType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpDimension_INTERFACE_DEFINED__ */


#ifndef __ISkpDimensionLinear_INTERFACE_DEFINED__
#define __ISkpDimensionLinear_INTERFACE_DEFINED__

/* interface ISkpDimensionLinear */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpDimensionLinear;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8AD10337-A9CE-4281-89FA-EE6ADA9C242D")
    ISkpDimensionLinear : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetStartPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetEndPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetNormal( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Normal( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetXAxis( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_XAxis( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_XPosition( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_YPosition( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ SkpLinearDimensionType *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TextPosition( 
            /* [retval][out] */ SkpDimensionTextPosition *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpDimensionLinearVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpDimensionLinear * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpDimensionLinear * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpDimensionLinear * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetStartPoint )( 
            ISkpDimensionLinear * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            ISkpDimensionLinear * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetEndPoint )( 
            ISkpDimensionLinear * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            ISkpDimensionLinear * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetNormal )( 
            ISkpDimensionLinear * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Normal )( 
            ISkpDimensionLinear * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetXAxis )( 
            ISkpDimensionLinear * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XAxis )( 
            ISkpDimensionLinear * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XPosition )( 
            ISkpDimensionLinear * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YPosition )( 
            ISkpDimensionLinear * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISkpDimensionLinear * This,
            /* [retval][out] */ SkpLinearDimensionType *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TextPosition )( 
            ISkpDimensionLinear * This,
            /* [retval][out] */ SkpDimensionTextPosition *pVal);
        
        END_INTERFACE
    } ISkpDimensionLinearVtbl;

    interface ISkpDimensionLinear
    {
        CONST_VTBL struct ISkpDimensionLinearVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpDimensionLinear_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpDimensionLinear_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpDimensionLinear_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpDimensionLinear__GetStartPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetStartPoint(This,pPoint3d)

#define ISkpDimensionLinear_get_StartPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_StartPoint(This,pPoint3d)

#define ISkpDimensionLinear__GetEndPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetEndPoint(This,pPoint3d)

#define ISkpDimensionLinear_get_EndPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_EndPoint(This,pPoint3d)

#define ISkpDimensionLinear__GetNormal(This,pVector3d)	\
    (This)->lpVtbl -> _GetNormal(This,pVector3d)

#define ISkpDimensionLinear_get_Normal(This,pVector3d)	\
    (This)->lpVtbl -> get_Normal(This,pVector3d)

#define ISkpDimensionLinear__GetXAxis(This,pVector3d)	\
    (This)->lpVtbl -> _GetXAxis(This,pVector3d)

#define ISkpDimensionLinear_get_XAxis(This,pVector3d)	\
    (This)->lpVtbl -> get_XAxis(This,pVector3d)

#define ISkpDimensionLinear_get_XPosition(This,pVal)	\
    (This)->lpVtbl -> get_XPosition(This,pVal)

#define ISkpDimensionLinear_get_YPosition(This,pVal)	\
    (This)->lpVtbl -> get_YPosition(This,pVal)

#define ISkpDimensionLinear_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ISkpDimensionLinear_get_TextPosition(This,pVal)	\
    (This)->lpVtbl -> get_TextPosition(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear__GetStartPoint_Proxy( 
    ISkpDimensionLinear * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpDimensionLinear__GetStartPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear_get_StartPoint_Proxy( 
    ISkpDimensionLinear * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpDimensionLinear_get_StartPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear__GetEndPoint_Proxy( 
    ISkpDimensionLinear * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpDimensionLinear__GetEndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear_get_EndPoint_Proxy( 
    ISkpDimensionLinear * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpDimensionLinear_get_EndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear__GetNormal_Proxy( 
    ISkpDimensionLinear * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpDimensionLinear__GetNormal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear_get_Normal_Proxy( 
    ISkpDimensionLinear * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpDimensionLinear_get_Normal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear__GetXAxis_Proxy( 
    ISkpDimensionLinear * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpDimensionLinear__GetXAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear_get_XAxis_Proxy( 
    ISkpDimensionLinear * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpDimensionLinear_get_XAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear_get_XPosition_Proxy( 
    ISkpDimensionLinear * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpDimensionLinear_get_XPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear_get_YPosition_Proxy( 
    ISkpDimensionLinear * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpDimensionLinear_get_YPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear_get_Type_Proxy( 
    ISkpDimensionLinear * This,
    /* [retval][out] */ SkpLinearDimensionType *pVal);


void __RPC_STUB ISkpDimensionLinear_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionLinear_get_TextPosition_Proxy( 
    ISkpDimensionLinear * This,
    /* [retval][out] */ SkpDimensionTextPosition *pVal);


void __RPC_STUB ISkpDimensionLinear_get_TextPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpDimensionLinear_INTERFACE_DEFINED__ */


#ifndef __ISkpDimensionRadial_INTERFACE_DEFINED__
#define __ISkpDimensionRadial_INTERFACE_DEFINED__

/* interface ISkpDimensionRadial */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpDimensionRadial;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("663E44A6-13A5-43b8-B216-8277B9E1AE1E")
    ISkpDimensionRadial : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RadialType( 
            /* [retval][out] */ SkpRadialDimensionType *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetCenter( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Center( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Ratio( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_T( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetLeaderPoints( 
            /* [out] */ double p1Point3d[ 3 ],
            /* [out] */ double p2Point3d[ 3 ],
            /* [out] */ double p3Point3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LeaderPoints( 
            /* [out] */ ISkpPoint3d **p1Point3d,
            /* [out] */ ISkpPoint3d **p2Point3d,
            /* [out] */ ISkpPoint3d **p3Point3d) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetTextInfo( 
            /* [in] */ ISkpView *pView,
            /* [in] */ double p1Point3d[ 3 ],
            /* [in] */ double p2Point3d[ 3 ],
            /* [in] */ ISkpPlane *plane,
            /* [out] */ double pTextPositionPoint3d[ 3 ],
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align,
            /* [out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TextInfo( 
            /* [in] */ ISkpView *pView,
            /* [in] */ ISkpPoint3d **p1Point3d,
            /* [in] */ ISkpPoint3d **p2Point3d,
            /* [in] */ ISkpPlane *plane,
            /* [out] */ ISkpPoint3d **pTextPositionPoint3d,
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align,
            /* [out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpDimensionRadialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpDimensionRadial * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpDimensionRadial * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpDimensionRadial * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RadialType )( 
            ISkpDimensionRadial * This,
            /* [retval][out] */ SkpRadialDimensionType *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetCenter )( 
            ISkpDimensionRadial * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Center )( 
            ISkpDimensionRadial * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ratio )( 
            ISkpDimensionRadial * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_T )( 
            ISkpDimensionRadial * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetLeaderPoints )( 
            ISkpDimensionRadial * This,
            /* [out] */ double p1Point3d[ 3 ],
            /* [out] */ double p2Point3d[ 3 ],
            /* [out] */ double p3Point3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LeaderPoints )( 
            ISkpDimensionRadial * This,
            /* [out] */ ISkpPoint3d **p1Point3d,
            /* [out] */ ISkpPoint3d **p2Point3d,
            /* [out] */ ISkpPoint3d **p3Point3d);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetTextInfo )( 
            ISkpDimensionRadial * This,
            /* [in] */ ISkpView *pView,
            /* [in] */ double p1Point3d[ 3 ],
            /* [in] */ double p2Point3d[ 3 ],
            /* [in] */ ISkpPlane *plane,
            /* [out] */ double pTextPositionPoint3d[ 3 ],
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align,
            /* [out] */ BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TextInfo )( 
            ISkpDimensionRadial * This,
            /* [in] */ ISkpView *pView,
            /* [in] */ ISkpPoint3d **p1Point3d,
            /* [in] */ ISkpPoint3d **p2Point3d,
            /* [in] */ ISkpPlane *plane,
            /* [out] */ ISkpPoint3d **pTextPositionPoint3d,
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align,
            /* [out] */ BOOL *pVal);
        
        END_INTERFACE
    } ISkpDimensionRadialVtbl;

    interface ISkpDimensionRadial
    {
        CONST_VTBL struct ISkpDimensionRadialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpDimensionRadial_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpDimensionRadial_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpDimensionRadial_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpDimensionRadial_get_RadialType(This,pVal)	\
    (This)->lpVtbl -> get_RadialType(This,pVal)

#define ISkpDimensionRadial__GetCenter(This,pPoint3d)	\
    (This)->lpVtbl -> _GetCenter(This,pPoint3d)

#define ISkpDimensionRadial_get_Center(This,pPoint3d)	\
    (This)->lpVtbl -> get_Center(This,pPoint3d)

#define ISkpDimensionRadial_get_Ratio(This,pVal)	\
    (This)->lpVtbl -> get_Ratio(This,pVal)

#define ISkpDimensionRadial_get_T(This,pVal)	\
    (This)->lpVtbl -> get_T(This,pVal)

#define ISkpDimensionRadial__GetLeaderPoints(This,p1Point3d,p2Point3d,p3Point3d)	\
    (This)->lpVtbl -> _GetLeaderPoints(This,p1Point3d,p2Point3d,p3Point3d)

#define ISkpDimensionRadial_LeaderPoints(This,p1Point3d,p2Point3d,p3Point3d)	\
    (This)->lpVtbl -> LeaderPoints(This,p1Point3d,p2Point3d,p3Point3d)

#define ISkpDimensionRadial__GetTextInfo(This,pView,p1Point3d,p2Point3d,plane,pTextPositionPoint3d,just,align,pVal)	\
    (This)->lpVtbl -> _GetTextInfo(This,pView,p1Point3d,p2Point3d,plane,pTextPositionPoint3d,just,align,pVal)

#define ISkpDimensionRadial_TextInfo(This,pView,p1Point3d,p2Point3d,plane,pTextPositionPoint3d,just,align,pVal)	\
    (This)->lpVtbl -> TextInfo(This,pView,p1Point3d,p2Point3d,plane,pTextPositionPoint3d,just,align,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionRadial_get_RadialType_Proxy( 
    ISkpDimensionRadial * This,
    /* [retval][out] */ SkpRadialDimensionType *pVal);


void __RPC_STUB ISkpDimensionRadial_get_RadialType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimensionRadial__GetCenter_Proxy( 
    ISkpDimensionRadial * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpDimensionRadial__GetCenter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionRadial_get_Center_Proxy( 
    ISkpDimensionRadial * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpDimensionRadial_get_Center_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionRadial_get_Ratio_Proxy( 
    ISkpDimensionRadial * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpDimensionRadial_get_Ratio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionRadial_get_T_Proxy( 
    ISkpDimensionRadial * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpDimensionRadial_get_T_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimensionRadial__GetLeaderPoints_Proxy( 
    ISkpDimensionRadial * This,
    /* [out] */ double p1Point3d[ 3 ],
    /* [out] */ double p2Point3d[ 3 ],
    /* [out] */ double p3Point3d[ 3 ]);


void __RPC_STUB ISkpDimensionRadial__GetLeaderPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimensionRadial_LeaderPoints_Proxy( 
    ISkpDimensionRadial * This,
    /* [out] */ ISkpPoint3d **p1Point3d,
    /* [out] */ ISkpPoint3d **p2Point3d,
    /* [out] */ ISkpPoint3d **p3Point3d);


void __RPC_STUB ISkpDimensionRadial_LeaderPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimensionRadial__GetTextInfo_Proxy( 
    ISkpDimensionRadial * This,
    /* [in] */ ISkpView *pView,
    /* [in] */ double p1Point3d[ 3 ],
    /* [in] */ double p2Point3d[ 3 ],
    /* [in] */ ISkpPlane *plane,
    /* [out] */ double pTextPositionPoint3d[ 3 ],
    /* [out] */ SkpTextJustification *just,
    /* [out] */ SkpTextAlignment *align,
    /* [out] */ BOOL *pVal);


void __RPC_STUB ISkpDimensionRadial__GetTextInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpDimensionRadial_TextInfo_Proxy( 
    ISkpDimensionRadial * This,
    /* [in] */ ISkpView *pView,
    /* [in] */ ISkpPoint3d **p1Point3d,
    /* [in] */ ISkpPoint3d **p2Point3d,
    /* [in] */ ISkpPlane *plane,
    /* [out] */ ISkpPoint3d **pTextPositionPoint3d,
    /* [out] */ SkpTextJustification *just,
    /* [out] */ SkpTextAlignment *align,
    /* [out] */ BOOL *pVal);


void __RPC_STUB ISkpDimensionRadial_TextInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpDimensionRadial_INTERFACE_DEFINED__ */


#ifndef __ISkpDimensionStyle_INTERFACE_DEFINED__
#define __ISkpDimensionStyle_INTERFACE_DEFINED__

/* interface ISkpDimensionStyle */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpDimensionStyle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE6A3A09-EE20-4de1-A4C9-346AF3B95DBF")
    ISkpDimensionStyle : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Font( 
            /* [retval][out] */ ISkpFont **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Has3DText( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TextPosition( 
            /* [retval][out] */ SkpDimensionTextPosition *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ArrowType( 
            /* [retval][out] */ SkpDimensionArrow *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ArrowSize( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ OLE_COLOR *pColor) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TextColor( 
            /* [retval][out] */ OLE_COLOR *pColor) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AlwaysReadable( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExtensionLineOffset( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExtensionLineOvershoot( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LineWeight( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HighlightNonAssociativeDimensions( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HighlightNonAssociativeDimensionsColor( 
            /* [retval][out] */ OLE_COLOR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ShowRadialDiamPrefix( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HideOutOfPlane( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HideOutOfPlaneValue( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HideSmall( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HideSmallValue( 
            /* [retval][out] */ double *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpDimensionStyleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpDimensionStyle * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpDimensionStyle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpDimensionStyle * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Font )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ ISkpFont **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Has3DText )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TextPosition )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ SkpDimensionTextPosition *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArrowType )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ SkpDimensionArrow *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArrowSize )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ OLE_COLOR *pColor);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TextColor )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ OLE_COLOR *pColor);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlwaysReadable )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtensionLineOffset )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtensionLineOvershoot )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineWeight )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HighlightNonAssociativeDimensions )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HighlightNonAssociativeDimensionsColor )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowRadialDiamPrefix )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HideOutOfPlane )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HideOutOfPlaneValue )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HideSmall )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HideSmallValue )( 
            ISkpDimensionStyle * This,
            /* [retval][out] */ double *pVal);
        
        END_INTERFACE
    } ISkpDimensionStyleVtbl;

    interface ISkpDimensionStyle
    {
        CONST_VTBL struct ISkpDimensionStyleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpDimensionStyle_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpDimensionStyle_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpDimensionStyle_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpDimensionStyle_get_Font(This,pVal)	\
    (This)->lpVtbl -> get_Font(This,pVal)

#define ISkpDimensionStyle_get_Has3DText(This,pVal)	\
    (This)->lpVtbl -> get_Has3DText(This,pVal)

#define ISkpDimensionStyle_get_TextPosition(This,pVal)	\
    (This)->lpVtbl -> get_TextPosition(This,pVal)

#define ISkpDimensionStyle_get_ArrowType(This,pVal)	\
    (This)->lpVtbl -> get_ArrowType(This,pVal)

#define ISkpDimensionStyle_get_ArrowSize(This,pVal)	\
    (This)->lpVtbl -> get_ArrowSize(This,pVal)

#define ISkpDimensionStyle_get_Color(This,pColor)	\
    (This)->lpVtbl -> get_Color(This,pColor)

#define ISkpDimensionStyle_get_TextColor(This,pColor)	\
    (This)->lpVtbl -> get_TextColor(This,pColor)

#define ISkpDimensionStyle_get_AlwaysReadable(This,pVal)	\
    (This)->lpVtbl -> get_AlwaysReadable(This,pVal)

#define ISkpDimensionStyle_get_ExtensionLineOffset(This,pVal)	\
    (This)->lpVtbl -> get_ExtensionLineOffset(This,pVal)

#define ISkpDimensionStyle_get_ExtensionLineOvershoot(This,pVal)	\
    (This)->lpVtbl -> get_ExtensionLineOvershoot(This,pVal)

#define ISkpDimensionStyle_get_LineWeight(This,pVal)	\
    (This)->lpVtbl -> get_LineWeight(This,pVal)

#define ISkpDimensionStyle_get_HighlightNonAssociativeDimensions(This,pVal)	\
    (This)->lpVtbl -> get_HighlightNonAssociativeDimensions(This,pVal)

#define ISkpDimensionStyle_get_HighlightNonAssociativeDimensionsColor(This,pVal)	\
    (This)->lpVtbl -> get_HighlightNonAssociativeDimensionsColor(This,pVal)

#define ISkpDimensionStyle_get_ShowRadialDiamPrefix(This,pVal)	\
    (This)->lpVtbl -> get_ShowRadialDiamPrefix(This,pVal)

#define ISkpDimensionStyle_get_HideOutOfPlane(This,pVal)	\
    (This)->lpVtbl -> get_HideOutOfPlane(This,pVal)

#define ISkpDimensionStyle_get_HideOutOfPlaneValue(This,pVal)	\
    (This)->lpVtbl -> get_HideOutOfPlaneValue(This,pVal)

#define ISkpDimensionStyle_get_HideSmall(This,pVal)	\
    (This)->lpVtbl -> get_HideSmall(This,pVal)

#define ISkpDimensionStyle_get_HideSmallValue(This,pVal)	\
    (This)->lpVtbl -> get_HideSmallValue(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_Font_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ ISkpFont **pVal);


void __RPC_STUB ISkpDimensionStyle_get_Font_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_Has3DText_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDimensionStyle_get_Has3DText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_TextPosition_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ SkpDimensionTextPosition *pVal);


void __RPC_STUB ISkpDimensionStyle_get_TextPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_ArrowType_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ SkpDimensionArrow *pVal);


void __RPC_STUB ISkpDimensionStyle_get_ArrowType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_ArrowSize_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpDimensionStyle_get_ArrowSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_Color_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ OLE_COLOR *pColor);


void __RPC_STUB ISkpDimensionStyle_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_TextColor_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ OLE_COLOR *pColor);


void __RPC_STUB ISkpDimensionStyle_get_TextColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_AlwaysReadable_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDimensionStyle_get_AlwaysReadable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_ExtensionLineOffset_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpDimensionStyle_get_ExtensionLineOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_ExtensionLineOvershoot_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpDimensionStyle_get_ExtensionLineOvershoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_LineWeight_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpDimensionStyle_get_LineWeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_HighlightNonAssociativeDimensions_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDimensionStyle_get_HighlightNonAssociativeDimensions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_HighlightNonAssociativeDimensionsColor_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ OLE_COLOR *pVal);


void __RPC_STUB ISkpDimensionStyle_get_HighlightNonAssociativeDimensionsColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_ShowRadialDiamPrefix_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDimensionStyle_get_ShowRadialDiamPrefix_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_HideOutOfPlane_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDimensionStyle_get_HideOutOfPlane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_HideOutOfPlaneValue_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpDimensionStyle_get_HideOutOfPlaneValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_HideSmall_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDimensionStyle_get_HideSmall_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDimensionStyle_get_HideSmallValue_Proxy( 
    ISkpDimensionStyle * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpDimensionStyle_get_HideSmallValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpDimensionStyle_INTERFACE_DEFINED__ */


#ifndef __ISkpFont_INTERFACE_DEFINED__
#define __ISkpFont_INTERFACE_DEFINED__

/* interface ISkpFont */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpFont;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("69AD8EA1-31BB-4070-B61D-A1313DDCB5BA")
    ISkpFont : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PointSize( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FontFace( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Bold( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Italic( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBoundsMultiLine( 
            /* [in] */ ISkpView *pView,
            /* [in] */ BSTR text,
            /* [retval][out] */ ISkpBoundingBox3d **ppBox) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_WorldSize( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseWorldSize( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpFontVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpFont * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpFont * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpFont * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PointSize )( 
            ISkpFont * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontFace )( 
            ISkpFont * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bold )( 
            ISkpFont * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Italic )( 
            ISkpFont * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBoundsMultiLine )( 
            ISkpFont * This,
            /* [in] */ ISkpView *pView,
            /* [in] */ BSTR text,
            /* [retval][out] */ ISkpBoundingBox3d **ppBox);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorldSize )( 
            ISkpFont * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseWorldSize )( 
            ISkpFont * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } ISkpFontVtbl;

    interface ISkpFont
    {
        CONST_VTBL struct ISkpFontVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpFont_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpFont_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpFont_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpFont_get_PointSize(This,pVal)	\
    (This)->lpVtbl -> get_PointSize(This,pVal)

#define ISkpFont_get_FontFace(This,pVal)	\
    (This)->lpVtbl -> get_FontFace(This,pVal)

#define ISkpFont_get_Bold(This,pVal)	\
    (This)->lpVtbl -> get_Bold(This,pVal)

#define ISkpFont_get_Italic(This,pVal)	\
    (This)->lpVtbl -> get_Italic(This,pVal)

#define ISkpFont_GetBoundsMultiLine(This,pView,text,ppBox)	\
    (This)->lpVtbl -> GetBoundsMultiLine(This,pView,text,ppBox)

#define ISkpFont_get_WorldSize(This,pVal)	\
    (This)->lpVtbl -> get_WorldSize(This,pVal)

#define ISkpFont_get_UseWorldSize(This,pVal)	\
    (This)->lpVtbl -> get_UseWorldSize(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFont_get_PointSize_Proxy( 
    ISkpFont * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpFont_get_PointSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFont_get_FontFace_Proxy( 
    ISkpFont * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpFont_get_FontFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFont_get_Bold_Proxy( 
    ISkpFont * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpFont_get_Bold_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFont_get_Italic_Proxy( 
    ISkpFont * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpFont_get_Italic_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFont_GetBoundsMultiLine_Proxy( 
    ISkpFont * This,
    /* [in] */ ISkpView *pView,
    /* [in] */ BSTR text,
    /* [retval][out] */ ISkpBoundingBox3d **ppBox);


void __RPC_STUB ISkpFont_GetBoundsMultiLine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFont_get_WorldSize_Proxy( 
    ISkpFont * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpFont_get_WorldSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFont_get_UseWorldSize_Proxy( 
    ISkpFont * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpFont_get_UseWorldSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpFont_INTERFACE_DEFINED__ */


#ifndef __ISkpFonts_INTERFACE_DEFINED__
#define __ISkpFonts_INTERFACE_DEFINED__

/* interface ISkpFonts */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpFonts;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DF614131-E9F3-42b9-93A2-391058AC0FC1")
    ISkpFonts : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpFont **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpFontsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpFonts * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpFonts * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpFonts * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpFonts * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpFont **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpFonts * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpFonts * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpFontsVtbl;

    interface ISkpFonts
    {
        CONST_VTBL struct ISkpFontsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpFonts_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpFonts_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpFonts_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpFonts_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpFonts_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpFonts_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFonts_get_Item_Proxy( 
    ISkpFonts * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpFont **pVal);


void __RPC_STUB ISkpFonts_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFonts_get_Count_Proxy( 
    ISkpFonts * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpFonts_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpFonts_get__NewEnum_Proxy( 
    ISkpFonts * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpFonts_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpFonts_INTERFACE_DEFINED__ */


#ifndef __ISkpText_INTERFACE_DEFINED__
#define __ISkpText_INTERFACE_DEFINED__

/* interface ISkpText */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpText;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D45DAAEC-1E6C-4908-8C3F-168838AA0B4B")
    ISkpText : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DrawingFont( 
            /* [retval][out] */ ISkpFont **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LeaderType( 
            /* [retval][out] */ SkpTextLeader *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayLeader( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ArrowType( 
            /* [retval][out] */ SkpDimensionArrow *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetLeaderPoints( 
            /* [in] */ ISkpView *pView,
            /* [out] */ double *pLeaderStartPoint3d,
            /* [out] */ double *pLeaderEndPoint3d,
            /* [out] */ double *pExtensionEndPoint3d,
            /* [out] */ double *pTextOffsetPoint3d,
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LeaderPoints( 
            /* [in] */ ISkpView *pView,
            /* [out] */ ISkpPoint3d **pLeaderStartPoint3d,
            /* [out] */ ISkpPoint3d **pLeaderEndPoint3d,
            /* [out] */ ISkpPoint3d **pExtensionEndPoint3d,
            /* [out] */ ISkpPoint3d **pTextOffsetPoint3d,
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpTextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpText * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpText * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpText * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ISkpText * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DrawingFont )( 
            ISkpText * This,
            /* [retval][out] */ ISkpFont **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LeaderType )( 
            ISkpText * This,
            /* [retval][out] */ SkpTextLeader *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayLeader )( 
            ISkpText * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArrowType )( 
            ISkpText * This,
            /* [retval][out] */ SkpDimensionArrow *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetLeaderPoints )( 
            ISkpText * This,
            /* [in] */ ISkpView *pView,
            /* [out] */ double *pLeaderStartPoint3d,
            /* [out] */ double *pLeaderEndPoint3d,
            /* [out] */ double *pExtensionEndPoint3d,
            /* [out] */ double *pTextOffsetPoint3d,
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LeaderPoints )( 
            ISkpText * This,
            /* [in] */ ISkpView *pView,
            /* [out] */ ISkpPoint3d **pLeaderStartPoint3d,
            /* [out] */ ISkpPoint3d **pLeaderEndPoint3d,
            /* [out] */ ISkpPoint3d **pExtensionEndPoint3d,
            /* [out] */ ISkpPoint3d **pTextOffsetPoint3d,
            /* [out] */ SkpTextJustification *just,
            /* [out] */ SkpTextAlignment *align);
        
        END_INTERFACE
    } ISkpTextVtbl;

    interface ISkpText
    {
        CONST_VTBL struct ISkpTextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpText_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpText_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpText_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpText_get_Text(This,pVal)	\
    (This)->lpVtbl -> get_Text(This,pVal)

#define ISkpText_get_DrawingFont(This,pVal)	\
    (This)->lpVtbl -> get_DrawingFont(This,pVal)

#define ISkpText_get_LeaderType(This,pVal)	\
    (This)->lpVtbl -> get_LeaderType(This,pVal)

#define ISkpText_get_DisplayLeader(This,pVal)	\
    (This)->lpVtbl -> get_DisplayLeader(This,pVal)

#define ISkpText_get_ArrowType(This,pVal)	\
    (This)->lpVtbl -> get_ArrowType(This,pVal)

#define ISkpText__GetLeaderPoints(This,pView,pLeaderStartPoint3d,pLeaderEndPoint3d,pExtensionEndPoint3d,pTextOffsetPoint3d,just,align)	\
    (This)->lpVtbl -> _GetLeaderPoints(This,pView,pLeaderStartPoint3d,pLeaderEndPoint3d,pExtensionEndPoint3d,pTextOffsetPoint3d,just,align)

#define ISkpText_LeaderPoints(This,pView,pLeaderStartPoint3d,pLeaderEndPoint3d,pExtensionEndPoint3d,pTextOffsetPoint3d,just,align)	\
    (This)->lpVtbl -> LeaderPoints(This,pView,pLeaderStartPoint3d,pLeaderEndPoint3d,pExtensionEndPoint3d,pTextOffsetPoint3d,just,align)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpText_get_Text_Proxy( 
    ISkpText * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpText_get_Text_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpText_get_DrawingFont_Proxy( 
    ISkpText * This,
    /* [retval][out] */ ISkpFont **pVal);


void __RPC_STUB ISkpText_get_DrawingFont_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpText_get_LeaderType_Proxy( 
    ISkpText * This,
    /* [retval][out] */ SkpTextLeader *pVal);


void __RPC_STUB ISkpText_get_LeaderType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpText_get_DisplayLeader_Proxy( 
    ISkpText * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpText_get_DisplayLeader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpText_get_ArrowType_Proxy( 
    ISkpText * This,
    /* [retval][out] */ SkpDimensionArrow *pVal);


void __RPC_STUB ISkpText_get_ArrowType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpText__GetLeaderPoints_Proxy( 
    ISkpText * This,
    /* [in] */ ISkpView *pView,
    /* [out] */ double *pLeaderStartPoint3d,
    /* [out] */ double *pLeaderEndPoint3d,
    /* [out] */ double *pExtensionEndPoint3d,
    /* [out] */ double *pTextOffsetPoint3d,
    /* [out] */ SkpTextJustification *just,
    /* [out] */ SkpTextAlignment *align);


void __RPC_STUB ISkpText__GetLeaderPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpText_LeaderPoints_Proxy( 
    ISkpText * This,
    /* [in] */ ISkpView *pView,
    /* [out] */ ISkpPoint3d **pLeaderStartPoint3d,
    /* [out] */ ISkpPoint3d **pLeaderEndPoint3d,
    /* [out] */ ISkpPoint3d **pExtensionEndPoint3d,
    /* [out] */ ISkpPoint3d **pTextOffsetPoint3d,
    /* [out] */ SkpTextJustification *just,
    /* [out] */ SkpTextAlignment *align);


void __RPC_STUB ISkpText_LeaderPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpText_INTERFACE_DEFINED__ */


#ifndef __ISkpTexts_INTERFACE_DEFINED__
#define __ISkpTexts_INTERFACE_DEFINED__

/* interface ISkpTexts */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpTexts;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A09F67E-C54A-404a-8C46-D7F35576CDD6")
    ISkpTexts : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpText **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpTextsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpTexts * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpTexts * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpTexts * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpTexts * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpText **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpTexts * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpTexts * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpTextsVtbl;

    interface ISkpTexts
    {
        CONST_VTBL struct ISkpTextsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpTexts_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpTexts_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpTexts_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpTexts_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpTexts_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpTexts_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpTexts_get_Item_Proxy( 
    ISkpTexts * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpText **pVal);


void __RPC_STUB ISkpTexts_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpTexts_get_Count_Proxy( 
    ISkpTexts * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpTexts_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpTexts_get__NewEnum_Proxy( 
    ISkpTexts * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpTexts_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpTexts_INTERFACE_DEFINED__ */


#ifndef __ISkpOptionsManager_INTERFACE_DEFINED__
#define __ISkpOptionsManager_INTERFACE_DEFINED__

/* interface ISkpOptionsManager */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpOptionsManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("31A3B2BA-D512-473d-9289-2709BDBF2D1D")
    ISkpOptionsManager : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT IndexOrName,
            /* [retval][out] */ ISkpOptionsProvider **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpOptionsManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpOptionsManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpOptionsManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpOptionsManager * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpOptionsManager * This,
            /* [in] */ VARIANT IndexOrName,
            /* [retval][out] */ ISkpOptionsProvider **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpOptionsManager * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpOptionsManager * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpOptionsManagerVtbl;

    interface ISkpOptionsManager
    {
        CONST_VTBL struct ISkpOptionsManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpOptionsManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpOptionsManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpOptionsManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpOptionsManager_get_Item(This,IndexOrName,pVal)	\
    (This)->lpVtbl -> get_Item(This,IndexOrName,pVal)

#define ISkpOptionsManager_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpOptionsManager_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpOptionsManager_get_Item_Proxy( 
    ISkpOptionsManager * This,
    /* [in] */ VARIANT IndexOrName,
    /* [retval][out] */ ISkpOptionsProvider **pVal);


void __RPC_STUB ISkpOptionsManager_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpOptionsManager_get_Count_Proxy( 
    ISkpOptionsManager * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpOptionsManager_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpOptionsManager_get__NewEnum_Proxy( 
    ISkpOptionsManager * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpOptionsManager_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpOptionsManager_INTERFACE_DEFINED__ */


#ifndef __ISkpOptionsProvider_INTERFACE_DEFINED__
#define __ISkpOptionsProvider_INTERFACE_DEFINED__

/* interface ISkpOptionsProvider */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpOptionsProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("120A278B-61BF-49c9-8A5C-4045D5631DCC")
    ISkpOptionsProvider : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Options( 
            /* [retval][out] */ ISkpNamedValues **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Option( 
            /* [in] */ BSTR optionName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpOptionsProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpOptionsProvider * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpOptionsProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpOptionsProvider * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ISkpOptionsProvider * This,
            /* [retval][out] */ ISkpNamedValues **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpOptionsProvider * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Option )( 
            ISkpOptionsProvider * This,
            /* [in] */ BSTR optionName,
            /* [retval][out] */ VARIANT *pVal);
        
        END_INTERFACE
    } ISkpOptionsProviderVtbl;

    interface ISkpOptionsProvider
    {
        CONST_VTBL struct ISkpOptionsProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpOptionsProvider_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpOptionsProvider_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpOptionsProvider_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpOptionsProvider_get_Options(This,pVal)	\
    (This)->lpVtbl -> get_Options(This,pVal)

#define ISkpOptionsProvider_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISkpOptionsProvider_get_Option(This,optionName,pVal)	\
    (This)->lpVtbl -> get_Option(This,optionName,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpOptionsProvider_get_Options_Proxy( 
    ISkpOptionsProvider * This,
    /* [retval][out] */ ISkpNamedValues **pVal);


void __RPC_STUB ISkpOptionsProvider_get_Options_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpOptionsProvider_get_Name_Proxy( 
    ISkpOptionsProvider * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpOptionsProvider_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpOptionsProvider_get_Option_Proxy( 
    ISkpOptionsProvider * This,
    /* [in] */ BSTR optionName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISkpOptionsProvider_get_Option_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpOptionsProvider_INTERFACE_DEFINED__ */


#ifndef __ISkpAttributes_INTERFACE_DEFINED__
#define __ISkpAttributes_INTERFACE_DEFINED__

/* interface ISkpAttributes */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E9D8816-993A-4c3b-9427-3458C9280AE9")
    ISkpAttributes : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpAttribute **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpAttributesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpAttributes * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpAttributes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpAttributes * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpAttributes * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpAttributes * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpAttribute **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpAttributes * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpAttributesVtbl;

    interface ISkpAttributes
    {
        CONST_VTBL struct ISkpAttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpAttributes_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpAttributes_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpAttributes_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpAttributes_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpAttributes_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpAttributes_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpAttributes_get_Count_Proxy( 
    ISkpAttributes * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpAttributes_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpAttributes_get_Item_Proxy( 
    ISkpAttributes * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpAttribute **pVal);


void __RPC_STUB ISkpAttributes_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpAttributes_get__NewEnum_Proxy( 
    ISkpAttributes * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpAttributes_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpAttributes_INTERFACE_DEFINED__ */


#ifndef __ISkpAttribute_INTERFACE_DEFINED__
#define __ISkpAttribute_INTERFACE_DEFINED__

/* interface ISkpAttribute */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D1A0D3D4-A608-4840-A646-2D6CA547C34C")
    ISkpAttribute : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISkpAttributeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpAttribute * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpAttribute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpAttribute * This);
        
        END_INTERFACE
    } ISkpAttributeVtbl;

    interface ISkpAttribute
    {
        CONST_VTBL struct ISkpAttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpAttribute_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpAttribute_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpAttribute_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISkpAttribute_INTERFACE_DEFINED__ */


#ifndef __ISkpFaceTextureCoordsAttribute_INTERFACE_DEFINED__
#define __ISkpFaceTextureCoordsAttribute_INTERFACE_DEFINED__

/* interface ISkpFaceTextureCoordsAttribute */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpFaceTextureCoordsAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9EA3F921-C6D0-4fc0-B0E2-A397FF2EEA39")
    ISkpFaceTextureCoordsAttribute : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISkpFaceTextureCoordsAttributeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpFaceTextureCoordsAttribute * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpFaceTextureCoordsAttribute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpFaceTextureCoordsAttribute * This);
        
        END_INTERFACE
    } ISkpFaceTextureCoordsAttributeVtbl;

    interface ISkpFaceTextureCoordsAttribute
    {
        CONST_VTBL struct ISkpFaceTextureCoordsAttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpFaceTextureCoordsAttribute_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpFaceTextureCoordsAttribute_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpFaceTextureCoordsAttribute_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISkpFaceTextureCoordsAttribute_INTERFACE_DEFINED__ */


#ifndef __ISkpAttributeDictionary_INTERFACE_DEFINED__
#define __ISkpAttributeDictionary_INTERFACE_DEFINED__

/* interface ISkpAttributeDictionary */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpAttributeDictionary;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B091771F-1144-4af9-9FA3-A8D7147D42B7")
    ISkpAttributeDictionary : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpAttributeDictionaryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpAttributeDictionary * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpAttributeDictionary * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpAttributeDictionary * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpAttributeDictionary * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpAttributeDictionary * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpAttributeDictionary * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpAttributeDictionary * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpAttributeDictionaryVtbl;

    interface ISkpAttributeDictionary
    {
        CONST_VTBL struct ISkpAttributeDictionaryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpAttributeDictionary_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpAttributeDictionary_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpAttributeDictionary_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpAttributeDictionary_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISkpAttributeDictionary_get_Item(This,bstrName,pVal)	\
    (This)->lpVtbl -> get_Item(This,bstrName,pVal)

#define ISkpAttributeDictionary_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpAttributeDictionary_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpAttributeDictionary_get_Name_Proxy( 
    ISkpAttributeDictionary * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpAttributeDictionary_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpAttributeDictionary_get_Item_Proxy( 
    ISkpAttributeDictionary * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ VARIANT *pVal);


void __RPC_STUB ISkpAttributeDictionary_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpAttributeDictionary_get_Count_Proxy( 
    ISkpAttributeDictionary * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpAttributeDictionary_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpAttributeDictionary_get__NewEnum_Proxy( 
    ISkpAttributeDictionary * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpAttributeDictionary_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpAttributeDictionary_INTERFACE_DEFINED__ */


#ifndef __ISkpCurve_INTERFACE_DEFINED__
#define __ISkpCurve_INTERFACE_DEFINED__

/* interface ISkpCurve */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpCurve;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC4F4363-D5F9-42af-BBBF-BAED0A9501AD")
    ISkpCurve : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Edges( 
            /* [retval][out] */ ISkpEdges **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FirstEdge( 
            /* [retval][out] */ ISkpEdge **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LastEdge( 
            /* [retval][out] */ ISkpEdge **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpCurveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpCurve * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpCurve * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpCurve * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Edges )( 
            ISkpCurve * This,
            /* [retval][out] */ ISkpEdges **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FirstEdge )( 
            ISkpCurve * This,
            /* [retval][out] */ ISkpEdge **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastEdge )( 
            ISkpCurve * This,
            /* [retval][out] */ ISkpEdge **pVal);
        
        END_INTERFACE
    } ISkpCurveVtbl;

    interface ISkpCurve
    {
        CONST_VTBL struct ISkpCurveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpCurve_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpCurve_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpCurve_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpCurve_get_Edges(This,pVal)	\
    (This)->lpVtbl -> get_Edges(This,pVal)

#define ISkpCurve_get_FirstEdge(This,pVal)	\
    (This)->lpVtbl -> get_FirstEdge(This,pVal)

#define ISkpCurve_get_LastEdge(This,pVal)	\
    (This)->lpVtbl -> get_LastEdge(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCurve_get_Edges_Proxy( 
    ISkpCurve * This,
    /* [retval][out] */ ISkpEdges **pVal);


void __RPC_STUB ISkpCurve_get_Edges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCurve_get_FirstEdge_Proxy( 
    ISkpCurve * This,
    /* [retval][out] */ ISkpEdge **pVal);


void __RPC_STUB ISkpCurve_get_FirstEdge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCurve_get_LastEdge_Proxy( 
    ISkpCurve * This,
    /* [retval][out] */ ISkpEdge **pVal);


void __RPC_STUB ISkpCurve_get_LastEdge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpCurve_INTERFACE_DEFINED__ */


#ifndef __ISkpArcCurve_INTERFACE_DEFINED__
#define __ISkpArcCurve_INTERFACE_DEFINED__

/* interface ISkpArcCurve */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpArcCurve;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A5A4B9B7-3384-4750-B43B-33C788E7FFC3")
    ISkpArcCurve : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Radius( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetStartPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetEndPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetXAxis( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetYAxis( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetCenter( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetNormal( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_XAxis( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_YAxis( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Center( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Normal( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EndAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsFullCircle( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpArcCurveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpArcCurve * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpArcCurve * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpArcCurve * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            ISkpArcCurve * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetStartPoint )( 
            ISkpArcCurve * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetEndPoint )( 
            ISkpArcCurve * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetXAxis )( 
            ISkpArcCurve * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetYAxis )( 
            ISkpArcCurve * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetCenter )( 
            ISkpArcCurve * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetNormal )( 
            ISkpArcCurve * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            ISkpArcCurve * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            ISkpArcCurve * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XAxis )( 
            ISkpArcCurve * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YAxis )( 
            ISkpArcCurve * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Center )( 
            ISkpArcCurve * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Normal )( 
            ISkpArcCurve * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartAngle )( 
            ISkpArcCurve * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndAngle )( 
            ISkpArcCurve * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFullCircle )( 
            ISkpArcCurve * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } ISkpArcCurveVtbl;

    interface ISkpArcCurve
    {
        CONST_VTBL struct ISkpArcCurveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpArcCurve_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpArcCurve_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpArcCurve_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpArcCurve_get_Radius(This,pVal)	\
    (This)->lpVtbl -> get_Radius(This,pVal)

#define ISkpArcCurve__GetStartPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetStartPoint(This,pPoint3d)

#define ISkpArcCurve__GetEndPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetEndPoint(This,pPoint3d)

#define ISkpArcCurve__GetXAxis(This,pVector3d)	\
    (This)->lpVtbl -> _GetXAxis(This,pVector3d)

#define ISkpArcCurve__GetYAxis(This,pVector3d)	\
    (This)->lpVtbl -> _GetYAxis(This,pVector3d)

#define ISkpArcCurve__GetCenter(This,pPoint3d)	\
    (This)->lpVtbl -> _GetCenter(This,pPoint3d)

#define ISkpArcCurve__GetNormal(This,pVector3d)	\
    (This)->lpVtbl -> _GetNormal(This,pVector3d)

#define ISkpArcCurve_get_StartPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_StartPoint(This,pPoint3d)

#define ISkpArcCurve_get_EndPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_EndPoint(This,pPoint3d)

#define ISkpArcCurve_get_XAxis(This,pVector3d)	\
    (This)->lpVtbl -> get_XAxis(This,pVector3d)

#define ISkpArcCurve_get_YAxis(This,pVector3d)	\
    (This)->lpVtbl -> get_YAxis(This,pVector3d)

#define ISkpArcCurve_get_Center(This,pPoint3d)	\
    (This)->lpVtbl -> get_Center(This,pPoint3d)

#define ISkpArcCurve_get_Normal(This,pVector3d)	\
    (This)->lpVtbl -> get_Normal(This,pVector3d)

#define ISkpArcCurve_get_StartAngle(This,pVal)	\
    (This)->lpVtbl -> get_StartAngle(This,pVal)

#define ISkpArcCurve_get_EndAngle(This,pVal)	\
    (This)->lpVtbl -> get_EndAngle(This,pVal)

#define ISkpArcCurve_get_IsFullCircle(This,pVal)	\
    (This)->lpVtbl -> get_IsFullCircle(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve_get_Radius_Proxy( 
    ISkpArcCurve * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpArcCurve_get_Radius_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve__GetStartPoint_Proxy( 
    ISkpArcCurve * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpArcCurve__GetStartPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve__GetEndPoint_Proxy( 
    ISkpArcCurve * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpArcCurve__GetEndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve__GetXAxis_Proxy( 
    ISkpArcCurve * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpArcCurve__GetXAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve__GetYAxis_Proxy( 
    ISkpArcCurve * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpArcCurve__GetYAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve__GetCenter_Proxy( 
    ISkpArcCurve * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpArcCurve__GetCenter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve__GetNormal_Proxy( 
    ISkpArcCurve * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpArcCurve__GetNormal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve_get_StartPoint_Proxy( 
    ISkpArcCurve * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpArcCurve_get_StartPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve_get_EndPoint_Proxy( 
    ISkpArcCurve * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpArcCurve_get_EndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve_get_XAxis_Proxy( 
    ISkpArcCurve * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpArcCurve_get_XAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve_get_YAxis_Proxy( 
    ISkpArcCurve * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpArcCurve_get_YAxis_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve_get_Center_Proxy( 
    ISkpArcCurve * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpArcCurve_get_Center_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve_get_Normal_Proxy( 
    ISkpArcCurve * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpArcCurve_get_Normal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve_get_StartAngle_Proxy( 
    ISkpArcCurve * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpArcCurve_get_StartAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve_get_EndAngle_Proxy( 
    ISkpArcCurve * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpArcCurve_get_EndAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpArcCurve_get_IsFullCircle_Proxy( 
    ISkpArcCurve * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpArcCurve_get_IsFullCircle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpArcCurve_INTERFACE_DEFINED__ */


#ifndef __ISkpLineCurve_INTERFACE_DEFINED__
#define __ISkpLineCurve_INTERFACE_DEFINED__

/* interface ISkpLineCurve */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpLineCurve;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BD4EEF9E-B1D1-4fe1-A835-6EA9568AADC1")
    ISkpLineCurve : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetStartPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetEndPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartVertex( 
            /* [retval][out] */ ISkpVertex **pStartVertex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EndVertex( 
            /* [retval][out] */ ISkpVertex **pEndVertex) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpLineCurveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpLineCurve * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpLineCurve * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpLineCurve * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetStartPoint )( 
            ISkpLineCurve * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetEndPoint )( 
            ISkpLineCurve * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            ISkpLineCurve * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            ISkpLineCurve * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartVertex )( 
            ISkpLineCurve * This,
            /* [retval][out] */ ISkpVertex **pStartVertex);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndVertex )( 
            ISkpLineCurve * This,
            /* [retval][out] */ ISkpVertex **pEndVertex);
        
        END_INTERFACE
    } ISkpLineCurveVtbl;

    interface ISkpLineCurve
    {
        CONST_VTBL struct ISkpLineCurveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpLineCurve_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpLineCurve_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpLineCurve_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpLineCurve__GetStartPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetStartPoint(This,pPoint3d)

#define ISkpLineCurve__GetEndPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetEndPoint(This,pPoint3d)

#define ISkpLineCurve_get_StartPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_StartPoint(This,pPoint3d)

#define ISkpLineCurve_get_EndPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_EndPoint(This,pPoint3d)

#define ISkpLineCurve_get_StartVertex(This,pStartVertex)	\
    (This)->lpVtbl -> get_StartVertex(This,pStartVertex)

#define ISkpLineCurve_get_EndVertex(This,pEndVertex)	\
    (This)->lpVtbl -> get_EndVertex(This,pEndVertex)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpLineCurve__GetStartPoint_Proxy( 
    ISkpLineCurve * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpLineCurve__GetStartPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpLineCurve__GetEndPoint_Proxy( 
    ISkpLineCurve * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpLineCurve__GetEndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLineCurve_get_StartPoint_Proxy( 
    ISkpLineCurve * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpLineCurve_get_StartPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLineCurve_get_EndPoint_Proxy( 
    ISkpLineCurve * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpLineCurve_get_EndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLineCurve_get_StartVertex_Proxy( 
    ISkpLineCurve * This,
    /* [retval][out] */ ISkpVertex **pStartVertex);


void __RPC_STUB ISkpLineCurve_get_StartVertex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLineCurve_get_EndVertex_Proxy( 
    ISkpLineCurve * This,
    /* [retval][out] */ ISkpVertex **pEndVertex);


void __RPC_STUB ISkpLineCurve_get_EndVertex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpLineCurve_INTERFACE_DEFINED__ */


#ifndef __ISkpBoundingBox3d_INTERFACE_DEFINED__
#define __ISkpBoundingBox3d_INTERFACE_DEFINED__

/* interface ISkpBoundingBox3d */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpBoundingBox3d;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20131A69-C286-4b2e-9309-E8F6014DF323")
    ISkpBoundingBox3d : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetMinPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetMaxPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetMidPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MinPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MaxPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MidPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpBoundingBox3dVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpBoundingBox3d * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpBoundingBox3d * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpBoundingBox3d * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetMinPoint )( 
            ISkpBoundingBox3d * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetMaxPoint )( 
            ISkpBoundingBox3d * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetMidPoint )( 
            ISkpBoundingBox3d * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinPoint )( 
            ISkpBoundingBox3d * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxPoint )( 
            ISkpBoundingBox3d * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MidPoint )( 
            ISkpBoundingBox3d * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        END_INTERFACE
    } ISkpBoundingBox3dVtbl;

    interface ISkpBoundingBox3d
    {
        CONST_VTBL struct ISkpBoundingBox3dVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpBoundingBox3d_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpBoundingBox3d_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpBoundingBox3d_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpBoundingBox3d__GetMinPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetMinPoint(This,pPoint3d)

#define ISkpBoundingBox3d__GetMaxPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetMaxPoint(This,pPoint3d)

#define ISkpBoundingBox3d__GetMidPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetMidPoint(This,pPoint3d)

#define ISkpBoundingBox3d_get_MinPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_MinPoint(This,pPoint3d)

#define ISkpBoundingBox3d_get_MaxPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_MaxPoint(This,pPoint3d)

#define ISkpBoundingBox3d_get_MidPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_MidPoint(This,pPoint3d)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpBoundingBox3d__GetMinPoint_Proxy( 
    ISkpBoundingBox3d * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpBoundingBox3d__GetMinPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpBoundingBox3d__GetMaxPoint_Proxy( 
    ISkpBoundingBox3d * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpBoundingBox3d__GetMaxPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpBoundingBox3d__GetMidPoint_Proxy( 
    ISkpBoundingBox3d * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpBoundingBox3d__GetMidPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpBoundingBox3d_get_MinPoint_Proxy( 
    ISkpBoundingBox3d * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpBoundingBox3d_get_MinPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpBoundingBox3d_get_MaxPoint_Proxy( 
    ISkpBoundingBox3d * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpBoundingBox3d_get_MaxPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpBoundingBox3d_get_MidPoint_Proxy( 
    ISkpBoundingBox3d * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpBoundingBox3d_get_MidPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpBoundingBox3d_INTERFACE_DEFINED__ */


#ifndef __ISkpEntities_INTERFACE_DEFINED__
#define __ISkpEntities_INTERFACE_DEFINED__

/* interface ISkpEntities */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpEntities;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D3949A7-0A77-48b8-9295-EF5546998F6B")
    ISkpEntities : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpEntity **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpEntitiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpEntities * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpEntities * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpEntities * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpEntities * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpEntities * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpEntity **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpEntities * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpEntitiesVtbl;

    interface ISkpEntities
    {
        CONST_VTBL struct ISkpEntitiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpEntities_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpEntities_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpEntities_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpEntities_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpEntities_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpEntities_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntities_get_Count_Proxy( 
    ISkpEntities * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpEntities_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntities_get_Item_Proxy( 
    ISkpEntities * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpEntity **pVal);


void __RPC_STUB ISkpEntities_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntities_get__NewEnum_Proxy( 
    ISkpEntities * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpEntities_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpEntities_INTERFACE_DEFINED__ */


#ifndef __ISkpEdges_INTERFACE_DEFINED__
#define __ISkpEdges_INTERFACE_DEFINED__

/* interface ISkpEdges */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpEdges;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("108747BB-8B0C-46ef-A371-223B849CC2CA")
    ISkpEdges : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpEdge **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpEdgesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpEdges * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpEdges * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpEdges * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpEdges * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpEdges * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpEdge **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpEdges * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpEdgesVtbl;

    interface ISkpEdges
    {
        CONST_VTBL struct ISkpEdgesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpEdges_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpEdges_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpEdges_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpEdges_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpEdges_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpEdges_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdges_get_Count_Proxy( 
    ISkpEdges * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpEdges_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdges_get_Item_Proxy( 
    ISkpEdges * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpEdge **pVal);


void __RPC_STUB ISkpEdges_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdges_get__NewEnum_Proxy( 
    ISkpEdges * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpEdges_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpEdges_INTERFACE_DEFINED__ */


#ifndef __ISkpEdge_INTERFACE_DEFINED__
#define __ISkpEdge_INTERFACE_DEFINED__

/* interface ISkpEdge */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpEdge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2840457C-FA4F-4cbb-93D3-088DD4D4E338")
    ISkpEdge : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsSmooth( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsSoft( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Curve( 
            /* [retval][out] */ ISkpCurve **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartVertex( 
            /* [retval][out] */ ISkpVertex **pStartVertex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EndVertex( 
            /* [retval][out] */ ISkpVertex **pEndVertex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetStartPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetEndPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Faces( 
            /* [retval][out] */ ISkpFaces **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpEdgeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpEdge * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpEdge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpEdge * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSmooth )( 
            ISkpEdge * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSoft )( 
            ISkpEdge * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Curve )( 
            ISkpEdge * This,
            /* [retval][out] */ ISkpCurve **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartVertex )( 
            ISkpEdge * This,
            /* [retval][out] */ ISkpVertex **pStartVertex);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndVertex )( 
            ISkpEdge * This,
            /* [retval][out] */ ISkpVertex **pEndVertex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetStartPoint )( 
            ISkpEdge * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetEndPoint )( 
            ISkpEdge * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            ISkpEdge * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            ISkpEdge * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Faces )( 
            ISkpEdge * This,
            /* [retval][out] */ ISkpFaces **pVal);
        
        END_INTERFACE
    } ISkpEdgeVtbl;

    interface ISkpEdge
    {
        CONST_VTBL struct ISkpEdgeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpEdge_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpEdge_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpEdge_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpEdge_get_IsSmooth(This,pVal)	\
    (This)->lpVtbl -> get_IsSmooth(This,pVal)

#define ISkpEdge_get_IsSoft(This,pVal)	\
    (This)->lpVtbl -> get_IsSoft(This,pVal)

#define ISkpEdge_get_Curve(This,pVal)	\
    (This)->lpVtbl -> get_Curve(This,pVal)

#define ISkpEdge_get_StartVertex(This,pStartVertex)	\
    (This)->lpVtbl -> get_StartVertex(This,pStartVertex)

#define ISkpEdge_get_EndVertex(This,pEndVertex)	\
    (This)->lpVtbl -> get_EndVertex(This,pEndVertex)

#define ISkpEdge__GetStartPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetStartPoint(This,pPoint3d)

#define ISkpEdge__GetEndPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetEndPoint(This,pPoint3d)

#define ISkpEdge_get_StartPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_StartPoint(This,pPoint3d)

#define ISkpEdge_get_EndPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_EndPoint(This,pPoint3d)

#define ISkpEdge_get_Faces(This,pVal)	\
    (This)->lpVtbl -> get_Faces(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdge_get_IsSmooth_Proxy( 
    ISkpEdge * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpEdge_get_IsSmooth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdge_get_IsSoft_Proxy( 
    ISkpEdge * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpEdge_get_IsSoft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdge_get_Curve_Proxy( 
    ISkpEdge * This,
    /* [retval][out] */ ISkpCurve **pVal);


void __RPC_STUB ISkpEdge_get_Curve_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdge_get_StartVertex_Proxy( 
    ISkpEdge * This,
    /* [retval][out] */ ISkpVertex **pStartVertex);


void __RPC_STUB ISkpEdge_get_StartVertex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdge_get_EndVertex_Proxy( 
    ISkpEdge * This,
    /* [retval][out] */ ISkpVertex **pEndVertex);


void __RPC_STUB ISkpEdge_get_EndVertex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpEdge__GetStartPoint_Proxy( 
    ISkpEdge * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpEdge__GetStartPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpEdge__GetEndPoint_Proxy( 
    ISkpEdge * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpEdge__GetEndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdge_get_StartPoint_Proxy( 
    ISkpEdge * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpEdge_get_StartPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdge_get_EndPoint_Proxy( 
    ISkpEdge * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpEdge_get_EndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdge_get_Faces_Proxy( 
    ISkpEdge * This,
    /* [retval][out] */ ISkpFaces **pVal);


void __RPC_STUB ISkpEdge_get_Faces_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpEdge_INTERFACE_DEFINED__ */


#ifndef __ISkpEntity_INTERFACE_DEFINED__
#define __ISkpEntity_INTERFACE_DEFINED__

/* interface ISkpEntity */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpEntity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84AA31DA-5074-42b5-950A-F46E33EF5BB8")
    ISkpEntity : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsVirtual( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TypeName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpEntityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpEntity * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpEntity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpEntity * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVirtual )( 
            ISkpEntity * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            ISkpEntity * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeName )( 
            ISkpEntity * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ISkpEntityVtbl;

    interface ISkpEntity
    {
        CONST_VTBL struct ISkpEntityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpEntity_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpEntity_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpEntity_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpEntity_get_IsVirtual(This,pVal)	\
    (This)->lpVtbl -> get_IsVirtual(This,pVal)

#define ISkpEntity_get_Id(This,pVal)	\
    (This)->lpVtbl -> get_Id(This,pVal)

#define ISkpEntity_get_TypeName(This,pVal)	\
    (This)->lpVtbl -> get_TypeName(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntity_get_IsVirtual_Proxy( 
    ISkpEntity * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpEntity_get_IsVirtual_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntity_get_Id_Proxy( 
    ISkpEntity * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpEntity_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntity_get_TypeName_Proxy( 
    ISkpEntity * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpEntity_get_TypeName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpEntity_INTERFACE_DEFINED__ */


#ifndef __ISkpAttributeProvider_INTERFACE_DEFINED__
#define __ISkpAttributeProvider_INTERFACE_DEFINED__

/* interface ISkpAttributeProvider */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpAttributeProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4E8E2CD6-3A33-41ea-A725-6579E40F08D1")
    ISkpAttributeProvider : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ ISkpAttributes **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpAttributeProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpAttributeProvider * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpAttributeProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpAttributeProvider * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            ISkpAttributeProvider * This,
            /* [retval][out] */ ISkpAttributes **pVal);
        
        END_INTERFACE
    } ISkpAttributeProviderVtbl;

    interface ISkpAttributeProvider
    {
        CONST_VTBL struct ISkpAttributeProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpAttributeProvider_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpAttributeProvider_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpAttributeProvider_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpAttributeProvider_get_Attributes(This,pVal)	\
    (This)->lpVtbl -> get_Attributes(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpAttributeProvider_get_Attributes_Proxy( 
    ISkpAttributeProvider * This,
    /* [retval][out] */ ISkpAttributes **pVal);


void __RPC_STUB ISkpAttributeProvider_get_Attributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpAttributeProvider_INTERFACE_DEFINED__ */


#ifndef __ISkpDrawingElement_INTERFACE_DEFINED__
#define __ISkpDrawingElement_INTERFACE_DEFINED__

/* interface ISkpDrawingElement */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpDrawingElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85195406-7341-443c-AFCD-395EF30954F6")
    ISkpDrawingElement : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsVisible( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsHighlighted( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HasMaterial( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Material( 
            /* [retval][out] */ ISkpMaterial **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Layer( 
            /* [retval][out] */ ISkpLayer **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BoundingBox( 
            /* [retval][out] */ ISkpBoundingBox3d **ppBBox) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CastsShadows( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ReceivesShadows( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpDrawingElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpDrawingElement * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpDrawingElement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpDrawingElement * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVisible )( 
            ISkpDrawingElement * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsHighlighted )( 
            ISkpDrawingElement * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasMaterial )( 
            ISkpDrawingElement * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Material )( 
            ISkpDrawingElement * This,
            /* [retval][out] */ ISkpMaterial **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Layer )( 
            ISkpDrawingElement * This,
            /* [retval][out] */ ISkpLayer **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )( 
            ISkpDrawingElement * This,
            /* [retval][out] */ ISkpBoundingBox3d **ppBBox);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CastsShadows )( 
            ISkpDrawingElement * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReceivesShadows )( 
            ISkpDrawingElement * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } ISkpDrawingElementVtbl;

    interface ISkpDrawingElement
    {
        CONST_VTBL struct ISkpDrawingElementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpDrawingElement_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpDrawingElement_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpDrawingElement_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpDrawingElement_get_IsVisible(This,pVal)	\
    (This)->lpVtbl -> get_IsVisible(This,pVal)

#define ISkpDrawingElement_get_IsHighlighted(This,pVal)	\
    (This)->lpVtbl -> get_IsHighlighted(This,pVal)

#define ISkpDrawingElement_get_HasMaterial(This,pVal)	\
    (This)->lpVtbl -> get_HasMaterial(This,pVal)

#define ISkpDrawingElement_get_Material(This,pVal)	\
    (This)->lpVtbl -> get_Material(This,pVal)

#define ISkpDrawingElement_get_Layer(This,pVal)	\
    (This)->lpVtbl -> get_Layer(This,pVal)

#define ISkpDrawingElement_get_BoundingBox(This,ppBBox)	\
    (This)->lpVtbl -> get_BoundingBox(This,ppBBox)

#define ISkpDrawingElement_get_CastsShadows(This,pVal)	\
    (This)->lpVtbl -> get_CastsShadows(This,pVal)

#define ISkpDrawingElement_get_ReceivesShadows(This,pVal)	\
    (This)->lpVtbl -> get_ReceivesShadows(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDrawingElement_get_IsVisible_Proxy( 
    ISkpDrawingElement * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDrawingElement_get_IsVisible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDrawingElement_get_IsHighlighted_Proxy( 
    ISkpDrawingElement * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDrawingElement_get_IsHighlighted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDrawingElement_get_HasMaterial_Proxy( 
    ISkpDrawingElement * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDrawingElement_get_HasMaterial_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDrawingElement_get_Material_Proxy( 
    ISkpDrawingElement * This,
    /* [retval][out] */ ISkpMaterial **pVal);


void __RPC_STUB ISkpDrawingElement_get_Material_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDrawingElement_get_Layer_Proxy( 
    ISkpDrawingElement * This,
    /* [retval][out] */ ISkpLayer **pVal);


void __RPC_STUB ISkpDrawingElement_get_Layer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDrawingElement_get_BoundingBox_Proxy( 
    ISkpDrawingElement * This,
    /* [retval][out] */ ISkpBoundingBox3d **ppBBox);


void __RPC_STUB ISkpDrawingElement_get_BoundingBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDrawingElement_get_CastsShadows_Proxy( 
    ISkpDrawingElement * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDrawingElement_get_CastsShadows_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpDrawingElement_get_ReceivesShadows_Proxy( 
    ISkpDrawingElement * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpDrawingElement_get_ReceivesShadows_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpDrawingElement_INTERFACE_DEFINED__ */


#ifndef __ISkpPolygonMesh_INTERFACE_DEFINED__
#define __ISkpPolygonMesh_INTERFACE_DEFINED__

/* interface ISkpPolygonMesh */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpPolygonMesh;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54860340-05E1-4837-AEFC-BD265F7D9375")
    ISkpPolygonMesh : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumPolygons( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NumPoints( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetPoint( 
            /* [in] */ long nIndex,
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetPolygonPoint( 
            /* [in] */ long nPoly,
            /* [in] */ long nPoint,
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetFrontUVPoint( 
            /* [in] */ long nIndex,
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetBackUVPoint( 
            /* [in] */ long nIndex,
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetVertexNormal( 
            /* [in] */ long nIndex,
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Point( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CountPolygonPoints( 
            /* [in] */ long nPoly,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPolygonPointIndex( 
            /* [in] */ long nPoly,
            /* [in] */ long nPoint,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PolygonPoint( 
            /* [in] */ long nPoly,
            /* [in] */ long nPoint,
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FrontUVPoint( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BackUVPoint( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VertexNormal( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpPolygonMeshVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpPolygonMesh * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpPolygonMesh * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpPolygonMesh * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumPolygons )( 
            ISkpPolygonMesh * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumPoints )( 
            ISkpPolygonMesh * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetPoint )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nIndex,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetPolygonPoint )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nPoly,
            /* [in] */ long nPoint,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetFrontUVPoint )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nIndex,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetBackUVPoint )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nIndex,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetVertexNormal )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nIndex,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Point )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CountPolygonPoints )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nPoly,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPolygonPointIndex )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nPoly,
            /* [in] */ long nPoint,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolygonPoint )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nPoly,
            /* [in] */ long nPoint,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrontUVPoint )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackUVPoint )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VertexNormal )( 
            ISkpPolygonMesh * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        END_INTERFACE
    } ISkpPolygonMeshVtbl;

    interface ISkpPolygonMesh
    {
        CONST_VTBL struct ISkpPolygonMeshVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpPolygonMesh_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpPolygonMesh_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpPolygonMesh_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpPolygonMesh_get_NumPolygons(This,pVal)	\
    (This)->lpVtbl -> get_NumPolygons(This,pVal)

#define ISkpPolygonMesh_get_NumPoints(This,pVal)	\
    (This)->lpVtbl -> get_NumPoints(This,pVal)

#define ISkpPolygonMesh__GetPoint(This,nIndex,pPoint3d)	\
    (This)->lpVtbl -> _GetPoint(This,nIndex,pPoint3d)

#define ISkpPolygonMesh__GetPolygonPoint(This,nPoly,nPoint,pPoint3d)	\
    (This)->lpVtbl -> _GetPolygonPoint(This,nPoly,nPoint,pPoint3d)

#define ISkpPolygonMesh__GetFrontUVPoint(This,nIndex,pPoint3d)	\
    (This)->lpVtbl -> _GetFrontUVPoint(This,nIndex,pPoint3d)

#define ISkpPolygonMesh__GetBackUVPoint(This,nIndex,pPoint3d)	\
    (This)->lpVtbl -> _GetBackUVPoint(This,nIndex,pPoint3d)

#define ISkpPolygonMesh__GetVertexNormal(This,nIndex,pVector3d)	\
    (This)->lpVtbl -> _GetVertexNormal(This,nIndex,pVector3d)

#define ISkpPolygonMesh_get_Point(This,nIndex,pPoint3d)	\
    (This)->lpVtbl -> get_Point(This,nIndex,pPoint3d)

#define ISkpPolygonMesh_CountPolygonPoints(This,nPoly,pVal)	\
    (This)->lpVtbl -> CountPolygonPoints(This,nPoly,pVal)

#define ISkpPolygonMesh_GetPolygonPointIndex(This,nPoly,nPoint,pVal)	\
    (This)->lpVtbl -> GetPolygonPointIndex(This,nPoly,nPoint,pVal)

#define ISkpPolygonMesh_get_PolygonPoint(This,nPoly,nPoint,pPoint3d)	\
    (This)->lpVtbl -> get_PolygonPoint(This,nPoly,nPoint,pPoint3d)

#define ISkpPolygonMesh_get_FrontUVPoint(This,nIndex,pPoint3d)	\
    (This)->lpVtbl -> get_FrontUVPoint(This,nIndex,pPoint3d)

#define ISkpPolygonMesh_get_BackUVPoint(This,nIndex,pPoint3d)	\
    (This)->lpVtbl -> get_BackUVPoint(This,nIndex,pPoint3d)

#define ISkpPolygonMesh_get_VertexNormal(This,nIndex,pVector3d)	\
    (This)->lpVtbl -> get_VertexNormal(This,nIndex,pVector3d)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh_get_NumPolygons_Proxy( 
    ISkpPolygonMesh * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpPolygonMesh_get_NumPolygons_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh_get_NumPoints_Proxy( 
    ISkpPolygonMesh * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpPolygonMesh_get_NumPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh__GetPoint_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nIndex,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpPolygonMesh__GetPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh__GetPolygonPoint_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nPoly,
    /* [in] */ long nPoint,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpPolygonMesh__GetPolygonPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh__GetFrontUVPoint_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nIndex,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpPolygonMesh__GetFrontUVPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh__GetBackUVPoint_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nIndex,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpPolygonMesh__GetBackUVPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh__GetVertexNormal_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nIndex,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpPolygonMesh__GetVertexNormal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh_get_Point_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpPolygonMesh_get_Point_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh_CountPolygonPoints_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nPoly,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpPolygonMesh_CountPolygonPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh_GetPolygonPointIndex_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nPoly,
    /* [in] */ long nPoint,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpPolygonMesh_GetPolygonPointIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh_get_PolygonPoint_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nPoly,
    /* [in] */ long nPoint,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpPolygonMesh_get_PolygonPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh_get_FrontUVPoint_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpPolygonMesh_get_FrontUVPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh_get_BackUVPoint_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpPolygonMesh_get_BackUVPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolygonMesh_get_VertexNormal_Proxy( 
    ISkpPolygonMesh * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpPolygonMesh_get_VertexNormal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpPolygonMesh_INTERFACE_DEFINED__ */


#ifndef __ISkpFace_INTERFACE_DEFINED__
#define __ISkpFace_INTERFACE_DEFINED__

/* interface ISkpFace */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpFace;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("02228DDC-5252-499a-B8DA-EC7F1BBA1ED8")
    ISkpFace : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EdgeUses( 
            /* [retval][out] */ ISkpEdgeUses **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Loops( 
            /* [retval][out] */ ISkpLoops **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OuterLoop( 
            /* [retval][out] */ ISkpLoop **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Openings( 
            /* [retval][out] */ ISkpOpenings **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Edges( 
            /* [retval][out] */ ISkpEdges **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Vertices( 
            /* [retval][out] */ ISkpVertices **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Area( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Plane( 
            /* [retval][out] */ ISkpPlane **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateMesh( 
            /* [in] */ unsigned long type,
            /* [in] */ ISkpCorrectPerspective *pPerspective,
            /* [retval][out] */ ISkpPolygonMesh **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BackMaterial( 
            /* [retval][out] */ ISkpMaterial **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FrontMaterial( 
            /* [retval][out] */ ISkpMaterial **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAttachedComponentInstances( 
            /* [retval][out] */ ISkpComponentInstances **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUVHelper( 
            /* [in] */ BOOL front,
            /* [in] */ BOOL back,
            /* [in] */ ISkpCorrectPerspective *pPerspective,
            /* [retval][out] */ ISkpUVHelper **pHelper) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUVHelperWithTextureHandle( 
            /* [in] */ BOOL front,
            /* [in] */ BOOL back,
            /* [in] */ ISkpCorrectPerspective *pPerspective,
            /* [in] */ long textureHandle,
            /* [retval][out] */ ISkpUVHelper **pHelper) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateMeshWithUVHelper( 
            /* [in] */ unsigned long type,
            /* [in] */ ISkpUVHelper *pUVHelper,
            /* [retval][out] */ ISkpPolygonMesh **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFrontPushPins( 
            /* [out] */ unsigned short *length,
            /* [out] */ double pushpins[ 16 ],
            /* [out] */ double projection_vector[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBackPushPins( 
            /* [out] */ unsigned short *length,
            /* [out] */ double pushpins[ 16 ],
            /* [out] */ double projection_vector[ 3 ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpFaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpFace * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpFace * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpFace * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EdgeUses )( 
            ISkpFace * This,
            /* [retval][out] */ ISkpEdgeUses **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Loops )( 
            ISkpFace * This,
            /* [retval][out] */ ISkpLoops **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OuterLoop )( 
            ISkpFace * This,
            /* [retval][out] */ ISkpLoop **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Openings )( 
            ISkpFace * This,
            /* [retval][out] */ ISkpOpenings **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Edges )( 
            ISkpFace * This,
            /* [retval][out] */ ISkpEdges **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vertices )( 
            ISkpFace * This,
            /* [retval][out] */ ISkpVertices **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Area )( 
            ISkpFace * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Plane )( 
            ISkpFace * This,
            /* [retval][out] */ ISkpPlane **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateMesh )( 
            ISkpFace * This,
            /* [in] */ unsigned long type,
            /* [in] */ ISkpCorrectPerspective *pPerspective,
            /* [retval][out] */ ISkpPolygonMesh **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackMaterial )( 
            ISkpFace * This,
            /* [retval][out] */ ISkpMaterial **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrontMaterial )( 
            ISkpFace * This,
            /* [retval][out] */ ISkpMaterial **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttachedComponentInstances )( 
            ISkpFace * This,
            /* [retval][out] */ ISkpComponentInstances **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUVHelper )( 
            ISkpFace * This,
            /* [in] */ BOOL front,
            /* [in] */ BOOL back,
            /* [in] */ ISkpCorrectPerspective *pPerspective,
            /* [retval][out] */ ISkpUVHelper **pHelper);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUVHelperWithTextureHandle )( 
            ISkpFace * This,
            /* [in] */ BOOL front,
            /* [in] */ BOOL back,
            /* [in] */ ISkpCorrectPerspective *pPerspective,
            /* [in] */ long textureHandle,
            /* [retval][out] */ ISkpUVHelper **pHelper);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateMeshWithUVHelper )( 
            ISkpFace * This,
            /* [in] */ unsigned long type,
            /* [in] */ ISkpUVHelper *pUVHelper,
            /* [retval][out] */ ISkpPolygonMesh **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFrontPushPins )( 
            ISkpFace * This,
            /* [out] */ unsigned short *length,
            /* [out] */ double pushpins[ 16 ],
            /* [out] */ double projection_vector[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBackPushPins )( 
            ISkpFace * This,
            /* [out] */ unsigned short *length,
            /* [out] */ double pushpins[ 16 ],
            /* [out] */ double projection_vector[ 3 ]);
        
        END_INTERFACE
    } ISkpFaceVtbl;

    interface ISkpFace
    {
        CONST_VTBL struct ISkpFaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpFace_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpFace_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpFace_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpFace_get_EdgeUses(This,pVal)	\
    (This)->lpVtbl -> get_EdgeUses(This,pVal)

#define ISkpFace_get_Loops(This,pVal)	\
    (This)->lpVtbl -> get_Loops(This,pVal)

#define ISkpFace_get_OuterLoop(This,pVal)	\
    (This)->lpVtbl -> get_OuterLoop(This,pVal)

#define ISkpFace_get_Openings(This,pVal)	\
    (This)->lpVtbl -> get_Openings(This,pVal)

#define ISkpFace_get_Edges(This,pVal)	\
    (This)->lpVtbl -> get_Edges(This,pVal)

#define ISkpFace_get_Vertices(This,pVal)	\
    (This)->lpVtbl -> get_Vertices(This,pVal)

#define ISkpFace_get_Area(This,pVal)	\
    (This)->lpVtbl -> get_Area(This,pVal)

#define ISkpFace_get_Plane(This,pVal)	\
    (This)->lpVtbl -> get_Plane(This,pVal)

#define ISkpFace_CreateMesh(This,type,pPerspective,pVal)	\
    (This)->lpVtbl -> CreateMesh(This,type,pPerspective,pVal)

#define ISkpFace_get_BackMaterial(This,pVal)	\
    (This)->lpVtbl -> get_BackMaterial(This,pVal)

#define ISkpFace_get_FrontMaterial(This,pVal)	\
    (This)->lpVtbl -> get_FrontMaterial(This,pVal)

#define ISkpFace_GetAttachedComponentInstances(This,pVal)	\
    (This)->lpVtbl -> GetAttachedComponentInstances(This,pVal)

#define ISkpFace_GetUVHelper(This,front,back,pPerspective,pHelper)	\
    (This)->lpVtbl -> GetUVHelper(This,front,back,pPerspective,pHelper)

#define ISkpFace_GetUVHelperWithTextureHandle(This,front,back,pPerspective,textureHandle,pHelper)	\
    (This)->lpVtbl -> GetUVHelperWithTextureHandle(This,front,back,pPerspective,textureHandle,pHelper)

#define ISkpFace_CreateMeshWithUVHelper(This,type,pUVHelper,pVal)	\
    (This)->lpVtbl -> CreateMeshWithUVHelper(This,type,pUVHelper,pVal)

#define ISkpFace_GetFrontPushPins(This,length,pushpins,projection_vector)	\
    (This)->lpVtbl -> GetFrontPushPins(This,length,pushpins,projection_vector)

#define ISkpFace_GetBackPushPins(This,length,pushpins,projection_vector)	\
    (This)->lpVtbl -> GetBackPushPins(This,length,pushpins,projection_vector)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFace_get_EdgeUses_Proxy( 
    ISkpFace * This,
    /* [retval][out] */ ISkpEdgeUses **pVal);


void __RPC_STUB ISkpFace_get_EdgeUses_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFace_get_Loops_Proxy( 
    ISkpFace * This,
    /* [retval][out] */ ISkpLoops **pVal);


void __RPC_STUB ISkpFace_get_Loops_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFace_get_OuterLoop_Proxy( 
    ISkpFace * This,
    /* [retval][out] */ ISkpLoop **pVal);


void __RPC_STUB ISkpFace_get_OuterLoop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFace_get_Openings_Proxy( 
    ISkpFace * This,
    /* [retval][out] */ ISkpOpenings **pVal);


void __RPC_STUB ISkpFace_get_Openings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFace_get_Edges_Proxy( 
    ISkpFace * This,
    /* [retval][out] */ ISkpEdges **pVal);


void __RPC_STUB ISkpFace_get_Edges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFace_get_Vertices_Proxy( 
    ISkpFace * This,
    /* [retval][out] */ ISkpVertices **pVal);


void __RPC_STUB ISkpFace_get_Vertices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFace_get_Area_Proxy( 
    ISkpFace * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpFace_get_Area_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFace_get_Plane_Proxy( 
    ISkpFace * This,
    /* [retval][out] */ ISkpPlane **pVal);


void __RPC_STUB ISkpFace_get_Plane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFace_CreateMesh_Proxy( 
    ISkpFace * This,
    /* [in] */ unsigned long type,
    /* [in] */ ISkpCorrectPerspective *pPerspective,
    /* [retval][out] */ ISkpPolygonMesh **pVal);


void __RPC_STUB ISkpFace_CreateMesh_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFace_get_BackMaterial_Proxy( 
    ISkpFace * This,
    /* [retval][out] */ ISkpMaterial **pVal);


void __RPC_STUB ISkpFace_get_BackMaterial_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFace_get_FrontMaterial_Proxy( 
    ISkpFace * This,
    /* [retval][out] */ ISkpMaterial **pVal);


void __RPC_STUB ISkpFace_get_FrontMaterial_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFace_GetAttachedComponentInstances_Proxy( 
    ISkpFace * This,
    /* [retval][out] */ ISkpComponentInstances **pVal);


void __RPC_STUB ISkpFace_GetAttachedComponentInstances_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFace_GetUVHelper_Proxy( 
    ISkpFace * This,
    /* [in] */ BOOL front,
    /* [in] */ BOOL back,
    /* [in] */ ISkpCorrectPerspective *pPerspective,
    /* [retval][out] */ ISkpUVHelper **pHelper);


void __RPC_STUB ISkpFace_GetUVHelper_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFace_GetUVHelperWithTextureHandle_Proxy( 
    ISkpFace * This,
    /* [in] */ BOOL front,
    /* [in] */ BOOL back,
    /* [in] */ ISkpCorrectPerspective *pPerspective,
    /* [in] */ long textureHandle,
    /* [retval][out] */ ISkpUVHelper **pHelper);


void __RPC_STUB ISkpFace_GetUVHelperWithTextureHandle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFace_CreateMeshWithUVHelper_Proxy( 
    ISkpFace * This,
    /* [in] */ unsigned long type,
    /* [in] */ ISkpUVHelper *pUVHelper,
    /* [retval][out] */ ISkpPolygonMesh **pVal);


void __RPC_STUB ISkpFace_CreateMeshWithUVHelper_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFace_GetFrontPushPins_Proxy( 
    ISkpFace * This,
    /* [out] */ unsigned short *length,
    /* [out] */ double pushpins[ 16 ],
    /* [out] */ double projection_vector[ 3 ]);


void __RPC_STUB ISkpFace_GetFrontPushPins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpFace_GetBackPushPins_Proxy( 
    ISkpFace * This,
    /* [out] */ unsigned short *length,
    /* [out] */ double pushpins[ 16 ],
    /* [out] */ double projection_vector[ 3 ]);


void __RPC_STUB ISkpFace_GetBackPushPins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpFace_INTERFACE_DEFINED__ */


#ifndef __ISkpFaces_INTERFACE_DEFINED__
#define __ISkpFaces_INTERFACE_DEFINED__

/* interface ISkpFaces */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpFaces;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF7B67C6-151F-469e-B683-998B7B7D8FA2")
    ISkpFaces : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpFace **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpFacesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpFaces * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpFaces * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpFaces * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpFaces * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpFaces * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpFace **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpFaces * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpFacesVtbl;

    interface ISkpFaces
    {
        CONST_VTBL struct ISkpFacesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpFaces_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpFaces_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpFaces_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpFaces_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpFaces_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpFaces_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFaces_get_Count_Proxy( 
    ISkpFaces * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpFaces_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpFaces_get_Item_Proxy( 
    ISkpFaces * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpFace **pVal);


void __RPC_STUB ISkpFaces_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpFaces_get__NewEnum_Proxy( 
    ISkpFaces * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpFaces_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpFaces_INTERFACE_DEFINED__ */


#ifndef __ISkpCorrectPerspective_INTERFACE_DEFINED__
#define __ISkpCorrectPerspective_INTERFACE_DEFINED__

/* interface ISkpCorrectPerspective */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpCorrectPerspective;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B1808685-CEF0-42e2-AA0F-8F9570C6F09D")
    ISkpCorrectPerspective : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISkpCorrectPerspectiveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpCorrectPerspective * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpCorrectPerspective * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpCorrectPerspective * This);
        
        END_INTERFACE
    } ISkpCorrectPerspectiveVtbl;

    interface ISkpCorrectPerspective
    {
        CONST_VTBL struct ISkpCorrectPerspectiveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpCorrectPerspective_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpCorrectPerspective_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpCorrectPerspective_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISkpCorrectPerspective_INTERFACE_DEFINED__ */


#ifndef __ISkpUVHelper_INTERFACE_DEFINED__
#define __ISkpUVHelper_INTERFACE_DEFINED__

/* interface ISkpUVHelper */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpUVHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2EE945F0-DBAE-4ff3-8119-64AF9378C01D")
    ISkpUVHelper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFrontUVQ( 
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z,
            /* [out] */ double *u,
            /* [out] */ double *v,
            /* [out] */ double *q) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBackUVQ( 
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z,
            /* [out] */ double *u,
            /* [out] */ double *v,
            /* [out] */ double *q) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpUVHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpUVHelper * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpUVHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpUVHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrontUVQ )( 
            ISkpUVHelper * This,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z,
            /* [out] */ double *u,
            /* [out] */ double *v,
            /* [out] */ double *q);
        
        HRESULT ( STDMETHODCALLTYPE *GetBackUVQ )( 
            ISkpUVHelper * This,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z,
            /* [out] */ double *u,
            /* [out] */ double *v,
            /* [out] */ double *q);
        
        END_INTERFACE
    } ISkpUVHelperVtbl;

    interface ISkpUVHelper
    {
        CONST_VTBL struct ISkpUVHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpUVHelper_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpUVHelper_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpUVHelper_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpUVHelper_GetFrontUVQ(This,x,y,z,u,v,q)	\
    (This)->lpVtbl -> GetFrontUVQ(This,x,y,z,u,v,q)

#define ISkpUVHelper_GetBackUVQ(This,x,y,z,u,v,q)	\
    (This)->lpVtbl -> GetBackUVQ(This,x,y,z,u,v,q)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISkpUVHelper_GetFrontUVQ_Proxy( 
    ISkpUVHelper * This,
    /* [in] */ double x,
    /* [in] */ double y,
    /* [in] */ double z,
    /* [out] */ double *u,
    /* [out] */ double *v,
    /* [out] */ double *q);


void __RPC_STUB ISkpUVHelper_GetFrontUVQ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpUVHelper_GetBackUVQ_Proxy( 
    ISkpUVHelper * This,
    /* [in] */ double x,
    /* [in] */ double y,
    /* [in] */ double z,
    /* [out] */ double *u,
    /* [out] */ double *v,
    /* [out] */ double *q);


void __RPC_STUB ISkpUVHelper_GetBackUVQ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpUVHelper_INTERFACE_DEFINED__ */


#ifndef __ISkpTextureWriter_INTERFACE_DEFINED__
#define __ISkpTextureWriter_INTERFACE_DEFINED__

/* interface ISkpTextureWriter */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpTextureWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BBD2EED1-8DA6-4f4d-8E92-8A18083104B7")
    ISkpTextureWriter : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadFace( 
            /* [in] */ ISkpFace *pFace,
            /* [in] */ BOOL bFront,
            /* [retval][out] */ long *pHandle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadImage( 
            /* [in] */ ISkpImage *pImage,
            /* [retval][out] */ long *pHandle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadComponentInstance( 
            /* [in] */ ISkpComponentInstance *pComponentInstance,
            /* [retval][out] */ long *pHandle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTextureHandleFromFace( 
            /* [in] */ ISkpFace *pFace,
            /* [in] */ BOOL bFront,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTextureHandleFromComponentInstance( 
            /* [in] */ ISkpComponentInstance *pInst,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTextureHandleFromImage( 
            /* [in] */ ISkpImage *pInst,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTextureFile( 
            /* [in] */ long textureHandle,
            /* [retval][out] */ BSTR *pFileName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteAllTextures( 
            /* [in] */ BSTR directoryName,
            /* [in] */ BOOL use83) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteTextureFileFromFace( 
            /* [in] */ ISkpFace *pFace,
            /* [in] */ BOOL bFront,
            /* [in] */ BSTR fileName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteTextureFileFromComponentInstance( 
            /* [in] */ ISkpComponentInstance *pComponentInstance,
            /* [in] */ BSTR fileName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteTextureFileFromImage( 
            /* [in] */ ISkpImage *pImage,
            /* [in] */ BSTR fileName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteTextureFileFromHandle( 
            /* [in] */ long textureHandle,
            /* [in] */ BSTR fileName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteTextureFileFromHandleOptimize( 
            /* [in] */ long textureHandle,
            /* [in] */ BSTR fileName,
            /* [in] */ long optimize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpTextureWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpTextureWriter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpTextureWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpTextureWriter * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadFace )( 
            ISkpTextureWriter * This,
            /* [in] */ ISkpFace *pFace,
            /* [in] */ BOOL bFront,
            /* [retval][out] */ long *pHandle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadImage )( 
            ISkpTextureWriter * This,
            /* [in] */ ISkpImage *pImage,
            /* [retval][out] */ long *pHandle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadComponentInstance )( 
            ISkpTextureWriter * This,
            /* [in] */ ISkpComponentInstance *pComponentInstance,
            /* [retval][out] */ long *pHandle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpTextureWriter * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTextureHandleFromFace )( 
            ISkpTextureWriter * This,
            /* [in] */ ISkpFace *pFace,
            /* [in] */ BOOL bFront,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTextureHandleFromComponentInstance )( 
            ISkpTextureWriter * This,
            /* [in] */ ISkpComponentInstance *pInst,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTextureHandleFromImage )( 
            ISkpTextureWriter * This,
            /* [in] */ ISkpImage *pInst,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTextureFile )( 
            ISkpTextureWriter * This,
            /* [in] */ long textureHandle,
            /* [retval][out] */ BSTR *pFileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteAllTextures )( 
            ISkpTextureWriter * This,
            /* [in] */ BSTR directoryName,
            /* [in] */ BOOL use83);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromFace )( 
            ISkpTextureWriter * This,
            /* [in] */ ISkpFace *pFace,
            /* [in] */ BOOL bFront,
            /* [in] */ BSTR fileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromComponentInstance )( 
            ISkpTextureWriter * This,
            /* [in] */ ISkpComponentInstance *pComponentInstance,
            /* [in] */ BSTR fileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromImage )( 
            ISkpTextureWriter * This,
            /* [in] */ ISkpImage *pImage,
            /* [in] */ BSTR fileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromHandle )( 
            ISkpTextureWriter * This,
            /* [in] */ long textureHandle,
            /* [in] */ BSTR fileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromHandleOptimize )( 
            ISkpTextureWriter * This,
            /* [in] */ long textureHandle,
            /* [in] */ BSTR fileName,
            /* [in] */ long optimize);
        
        END_INTERFACE
    } ISkpTextureWriterVtbl;

    interface ISkpTextureWriter
    {
        CONST_VTBL struct ISkpTextureWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpTextureWriter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpTextureWriter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpTextureWriter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpTextureWriter_LoadFace(This,pFace,bFront,pHandle)	\
    (This)->lpVtbl -> LoadFace(This,pFace,bFront,pHandle)

#define ISkpTextureWriter_LoadImage(This,pImage,pHandle)	\
    (This)->lpVtbl -> LoadImage(This,pImage,pHandle)

#define ISkpTextureWriter_LoadComponentInstance(This,pComponentInstance,pHandle)	\
    (This)->lpVtbl -> LoadComponentInstance(This,pComponentInstance,pHandle)

#define ISkpTextureWriter_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpTextureWriter_GetTextureHandleFromFace(This,pFace,bFront,pVal)	\
    (This)->lpVtbl -> GetTextureHandleFromFace(This,pFace,bFront,pVal)

#define ISkpTextureWriter_GetTextureHandleFromComponentInstance(This,pInst,pVal)	\
    (This)->lpVtbl -> GetTextureHandleFromComponentInstance(This,pInst,pVal)

#define ISkpTextureWriter_GetTextureHandleFromImage(This,pInst,pVal)	\
    (This)->lpVtbl -> GetTextureHandleFromImage(This,pInst,pVal)

#define ISkpTextureWriter_GetTextureFile(This,textureHandle,pFileName)	\
    (This)->lpVtbl -> GetTextureFile(This,textureHandle,pFileName)

#define ISkpTextureWriter_WriteAllTextures(This,directoryName,use83)	\
    (This)->lpVtbl -> WriteAllTextures(This,directoryName,use83)

#define ISkpTextureWriter_WriteTextureFileFromFace(This,pFace,bFront,fileName)	\
    (This)->lpVtbl -> WriteTextureFileFromFace(This,pFace,bFront,fileName)

#define ISkpTextureWriter_WriteTextureFileFromComponentInstance(This,pComponentInstance,fileName)	\
    (This)->lpVtbl -> WriteTextureFileFromComponentInstance(This,pComponentInstance,fileName)

#define ISkpTextureWriter_WriteTextureFileFromImage(This,pImage,fileName)	\
    (This)->lpVtbl -> WriteTextureFileFromImage(This,pImage,fileName)

#define ISkpTextureWriter_WriteTextureFileFromHandle(This,textureHandle,fileName)	\
    (This)->lpVtbl -> WriteTextureFileFromHandle(This,textureHandle,fileName)

#define ISkpTextureWriter_WriteTextureFileFromHandleOptimize(This,textureHandle,fileName,optimize)	\
    (This)->lpVtbl -> WriteTextureFileFromHandleOptimize(This,textureHandle,fileName,optimize)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_LoadFace_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ ISkpFace *pFace,
    /* [in] */ BOOL bFront,
    /* [retval][out] */ long *pHandle);


void __RPC_STUB ISkpTextureWriter_LoadFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_LoadImage_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ ISkpImage *pImage,
    /* [retval][out] */ long *pHandle);


void __RPC_STUB ISkpTextureWriter_LoadImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_LoadComponentInstance_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ ISkpComponentInstance *pComponentInstance,
    /* [retval][out] */ long *pHandle);


void __RPC_STUB ISkpTextureWriter_LoadComponentInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_get_Count_Proxy( 
    ISkpTextureWriter * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpTextureWriter_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_GetTextureHandleFromFace_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ ISkpFace *pFace,
    /* [in] */ BOOL bFront,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpTextureWriter_GetTextureHandleFromFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_GetTextureHandleFromComponentInstance_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ ISkpComponentInstance *pInst,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpTextureWriter_GetTextureHandleFromComponentInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_GetTextureHandleFromImage_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ ISkpImage *pInst,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpTextureWriter_GetTextureHandleFromImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_GetTextureFile_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ long textureHandle,
    /* [retval][out] */ BSTR *pFileName);


void __RPC_STUB ISkpTextureWriter_GetTextureFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_WriteAllTextures_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ BSTR directoryName,
    /* [in] */ BOOL use83);


void __RPC_STUB ISkpTextureWriter_WriteAllTextures_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_WriteTextureFileFromFace_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ ISkpFace *pFace,
    /* [in] */ BOOL bFront,
    /* [in] */ BSTR fileName);


void __RPC_STUB ISkpTextureWriter_WriteTextureFileFromFace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_WriteTextureFileFromComponentInstance_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ ISkpComponentInstance *pComponentInstance,
    /* [in] */ BSTR fileName);


void __RPC_STUB ISkpTextureWriter_WriteTextureFileFromComponentInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_WriteTextureFileFromImage_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ ISkpImage *pImage,
    /* [in] */ BSTR fileName);


void __RPC_STUB ISkpTextureWriter_WriteTextureFileFromImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_WriteTextureFileFromHandle_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ long textureHandle,
    /* [in] */ BSTR fileName);


void __RPC_STUB ISkpTextureWriter_WriteTextureFileFromHandle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter_WriteTextureFileFromHandleOptimize_Proxy( 
    ISkpTextureWriter * This,
    /* [in] */ long textureHandle,
    /* [in] */ BSTR fileName,
    /* [in] */ long optimize);


void __RPC_STUB ISkpTextureWriter_WriteTextureFileFromHandleOptimize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpTextureWriter_INTERFACE_DEFINED__ */


#ifndef __ISkpTextureWriter2_INTERFACE_DEFINED__
#define __ISkpTextureWriter2_INTERFACE_DEFINED__

/* interface ISkpTextureWriter2 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpTextureWriter2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5470F0F3-7883-4ef2-881F-9CA1DA8DD0E8")
    ISkpTextureWriter2 : public ISkpTextureWriter
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadGroup( 
            /* [in] */ ISkpGroup *pGroup,
            /* [retval][out] */ long *pHandle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteTextureFileFromGroup( 
            /* [in] */ ISkpGroup *pGroup,
            /* [in] */ BSTR fileName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTextureHandleFromGroup( 
            /* [in] */ ISkpGroup *pGroup,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadLayer( 
            /* [in] */ ISkpLayer *pLayer,
            /* [retval][out] */ long *pHandle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteTextureFileFromLayer( 
            /* [in] */ ISkpLayer *pLayer,
            /* [in] */ BSTR fileName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTextureHandleFromLayer( 
            /* [in] */ ISkpLayer *pLayer,
            /* [retval][out] */ long *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpTextureWriter2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpTextureWriter2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpTextureWriter2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpTextureWriter2 * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadFace )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpFace *pFace,
            /* [in] */ BOOL bFront,
            /* [retval][out] */ long *pHandle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadImage )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpImage *pImage,
            /* [retval][out] */ long *pHandle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadComponentInstance )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpComponentInstance *pComponentInstance,
            /* [retval][out] */ long *pHandle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpTextureWriter2 * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTextureHandleFromFace )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpFace *pFace,
            /* [in] */ BOOL bFront,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTextureHandleFromComponentInstance )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpComponentInstance *pInst,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTextureHandleFromImage )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpImage *pInst,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTextureFile )( 
            ISkpTextureWriter2 * This,
            /* [in] */ long textureHandle,
            /* [retval][out] */ BSTR *pFileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteAllTextures )( 
            ISkpTextureWriter2 * This,
            /* [in] */ BSTR directoryName,
            /* [in] */ BOOL use83);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromFace )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpFace *pFace,
            /* [in] */ BOOL bFront,
            /* [in] */ BSTR fileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromComponentInstance )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpComponentInstance *pComponentInstance,
            /* [in] */ BSTR fileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromImage )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpImage *pImage,
            /* [in] */ BSTR fileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromHandle )( 
            ISkpTextureWriter2 * This,
            /* [in] */ long textureHandle,
            /* [in] */ BSTR fileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromHandleOptimize )( 
            ISkpTextureWriter2 * This,
            /* [in] */ long textureHandle,
            /* [in] */ BSTR fileName,
            /* [in] */ long optimize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadGroup )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpGroup *pGroup,
            /* [retval][out] */ long *pHandle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromGroup )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpGroup *pGroup,
            /* [in] */ BSTR fileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTextureHandleFromGroup )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpGroup *pGroup,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadLayer )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpLayer *pLayer,
            /* [retval][out] */ long *pHandle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteTextureFileFromLayer )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpLayer *pLayer,
            /* [in] */ BSTR fileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTextureHandleFromLayer )( 
            ISkpTextureWriter2 * This,
            /* [in] */ ISkpLayer *pLayer,
            /* [retval][out] */ long *pVal);
        
        END_INTERFACE
    } ISkpTextureWriter2Vtbl;

    interface ISkpTextureWriter2
    {
        CONST_VTBL struct ISkpTextureWriter2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpTextureWriter2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpTextureWriter2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpTextureWriter2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpTextureWriter2_LoadFace(This,pFace,bFront,pHandle)	\
    (This)->lpVtbl -> LoadFace(This,pFace,bFront,pHandle)

#define ISkpTextureWriter2_LoadImage(This,pImage,pHandle)	\
    (This)->lpVtbl -> LoadImage(This,pImage,pHandle)

#define ISkpTextureWriter2_LoadComponentInstance(This,pComponentInstance,pHandle)	\
    (This)->lpVtbl -> LoadComponentInstance(This,pComponentInstance,pHandle)

#define ISkpTextureWriter2_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpTextureWriter2_GetTextureHandleFromFace(This,pFace,bFront,pVal)	\
    (This)->lpVtbl -> GetTextureHandleFromFace(This,pFace,bFront,pVal)

#define ISkpTextureWriter2_GetTextureHandleFromComponentInstance(This,pInst,pVal)	\
    (This)->lpVtbl -> GetTextureHandleFromComponentInstance(This,pInst,pVal)

#define ISkpTextureWriter2_GetTextureHandleFromImage(This,pInst,pVal)	\
    (This)->lpVtbl -> GetTextureHandleFromImage(This,pInst,pVal)

#define ISkpTextureWriter2_GetTextureFile(This,textureHandle,pFileName)	\
    (This)->lpVtbl -> GetTextureFile(This,textureHandle,pFileName)

#define ISkpTextureWriter2_WriteAllTextures(This,directoryName,use83)	\
    (This)->lpVtbl -> WriteAllTextures(This,directoryName,use83)

#define ISkpTextureWriter2_WriteTextureFileFromFace(This,pFace,bFront,fileName)	\
    (This)->lpVtbl -> WriteTextureFileFromFace(This,pFace,bFront,fileName)

#define ISkpTextureWriter2_WriteTextureFileFromComponentInstance(This,pComponentInstance,fileName)	\
    (This)->lpVtbl -> WriteTextureFileFromComponentInstance(This,pComponentInstance,fileName)

#define ISkpTextureWriter2_WriteTextureFileFromImage(This,pImage,fileName)	\
    (This)->lpVtbl -> WriteTextureFileFromImage(This,pImage,fileName)

#define ISkpTextureWriter2_WriteTextureFileFromHandle(This,textureHandle,fileName)	\
    (This)->lpVtbl -> WriteTextureFileFromHandle(This,textureHandle,fileName)

#define ISkpTextureWriter2_WriteTextureFileFromHandleOptimize(This,textureHandle,fileName,optimize)	\
    (This)->lpVtbl -> WriteTextureFileFromHandleOptimize(This,textureHandle,fileName,optimize)


#define ISkpTextureWriter2_LoadGroup(This,pGroup,pHandle)	\
    (This)->lpVtbl -> LoadGroup(This,pGroup,pHandle)

#define ISkpTextureWriter2_WriteTextureFileFromGroup(This,pGroup,fileName)	\
    (This)->lpVtbl -> WriteTextureFileFromGroup(This,pGroup,fileName)

#define ISkpTextureWriter2_GetTextureHandleFromGroup(This,pGroup,pVal)	\
    (This)->lpVtbl -> GetTextureHandleFromGroup(This,pGroup,pVal)

#define ISkpTextureWriter2_LoadLayer(This,pLayer,pHandle)	\
    (This)->lpVtbl -> LoadLayer(This,pLayer,pHandle)

#define ISkpTextureWriter2_WriteTextureFileFromLayer(This,pLayer,fileName)	\
    (This)->lpVtbl -> WriteTextureFileFromLayer(This,pLayer,fileName)

#define ISkpTextureWriter2_GetTextureHandleFromLayer(This,pLayer,pVal)	\
    (This)->lpVtbl -> GetTextureHandleFromLayer(This,pLayer,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter2_LoadGroup_Proxy( 
    ISkpTextureWriter2 * This,
    /* [in] */ ISkpGroup *pGroup,
    /* [retval][out] */ long *pHandle);


void __RPC_STUB ISkpTextureWriter2_LoadGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter2_WriteTextureFileFromGroup_Proxy( 
    ISkpTextureWriter2 * This,
    /* [in] */ ISkpGroup *pGroup,
    /* [in] */ BSTR fileName);


void __RPC_STUB ISkpTextureWriter2_WriteTextureFileFromGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter2_GetTextureHandleFromGroup_Proxy( 
    ISkpTextureWriter2 * This,
    /* [in] */ ISkpGroup *pGroup,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpTextureWriter2_GetTextureHandleFromGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter2_LoadLayer_Proxy( 
    ISkpTextureWriter2 * This,
    /* [in] */ ISkpLayer *pLayer,
    /* [retval][out] */ long *pHandle);


void __RPC_STUB ISkpTextureWriter2_LoadLayer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter2_WriteTextureFileFromLayer_Proxy( 
    ISkpTextureWriter2 * This,
    /* [in] */ ISkpLayer *pLayer,
    /* [in] */ BSTR fileName);


void __RPC_STUB ISkpTextureWriter2_WriteTextureFileFromLayer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTextureWriter2_GetTextureHandleFromLayer_Proxy( 
    ISkpTextureWriter2 * This,
    /* [in] */ ISkpLayer *pLayer,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpTextureWriter2_GetTextureHandleFromLayer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpTextureWriter2_INTERFACE_DEFINED__ */


#ifndef __ISkpVertices_INTERFACE_DEFINED__
#define __ISkpVertices_INTERFACE_DEFINED__

/* interface ISkpVertices */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpVertices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43CAB51D-29DF-4ad0-8DF1-3D461D32885C")
    ISkpVertices : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpVertex **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpVerticesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpVertices * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpVertices * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpVertices * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpVertices * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpVertices * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpVertex **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpVertices * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpVerticesVtbl;

    interface ISkpVertices
    {
        CONST_VTBL struct ISkpVerticesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpVertices_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpVertices_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpVertices_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpVertices_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpVertices_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpVertices_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpVertices_get_Count_Proxy( 
    ISkpVertices * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpVertices_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpVertices_get_Item_Proxy( 
    ISkpVertices * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpVertex **pVal);


void __RPC_STUB ISkpVertices_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpVertices_get__NewEnum_Proxy( 
    ISkpVertices * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpVertices_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpVertices_INTERFACE_DEFINED__ */


#ifndef __ISkpLayer_INTERFACE_DEFINED__
#define __ISkpLayer_INTERFACE_DEFINED__

/* interface ISkpLayer */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpLayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB0A8A47-D3D3-486e-8F96-626E8F0A1670")
    ISkpLayer : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsVisible( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ OLE_COLOR *pVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Material( 
            /* [retval][out] */ ISkpMaterial **ppMat) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpLayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpLayer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpLayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpLayer * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpLayer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVisible )( 
            ISkpLayer * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            ISkpLayer * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Material )( 
            ISkpLayer * This,
            /* [retval][out] */ ISkpMaterial **ppMat);
        
        END_INTERFACE
    } ISkpLayerVtbl;

    interface ISkpLayer
    {
        CONST_VTBL struct ISkpLayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpLayer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpLayer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpLayer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpLayer_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISkpLayer_get_IsVisible(This,pVal)	\
    (This)->lpVtbl -> get_IsVisible(This,pVal)

#define ISkpLayer_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define ISkpLayer_get_Material(This,ppMat)	\
    (This)->lpVtbl -> get_Material(This,ppMat)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLayer_get_Name_Proxy( 
    ISkpLayer * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpLayer_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLayer_get_IsVisible_Proxy( 
    ISkpLayer * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpLayer_get_IsVisible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLayer_get_Color_Proxy( 
    ISkpLayer * This,
    /* [retval][out] */ OLE_COLOR *pVal);


void __RPC_STUB ISkpLayer_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpLayer_get_Material_Proxy( 
    ISkpLayer * This,
    /* [retval][out] */ ISkpMaterial **ppMat);


void __RPC_STUB ISkpLayer_get_Material_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpLayer_INTERFACE_DEFINED__ */


#ifndef __ISkpLayers_INTERFACE_DEFINED__
#define __ISkpLayers_INTERFACE_DEFINED__

/* interface ISkpLayers */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpLayers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D00F5B9C-77DD-4eaa-9885-AEB6EEB177CF")
    ISkpLayers : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpLayer **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpLayersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpLayers * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpLayers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpLayers * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpLayers * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpLayers * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpLayer **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpLayers * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpLayersVtbl;

    interface ISkpLayers
    {
        CONST_VTBL struct ISkpLayersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpLayers_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpLayers_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpLayers_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpLayers_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpLayers_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpLayers_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLayers_get_Count_Proxy( 
    ISkpLayers * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpLayers_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLayers_get_Item_Proxy( 
    ISkpLayers * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpLayer **pVal);


void __RPC_STUB ISkpLayers_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpLayers_get__NewEnum_Proxy( 
    ISkpLayers * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpLayers_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpLayers_INTERFACE_DEFINED__ */


#ifndef __ISkpMaterial_INTERFACE_DEFINED__
#define __ISkpMaterial_INTERFACE_DEFINED__

/* interface ISkpMaterial */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpMaterial;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E405969E-3C7C-4e74-B73C-5EA278E9EB71")
    ISkpMaterial : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsColor( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTexture( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ OLE_COLOR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Texture( 
            /* [retval][out] */ ISkpTexture **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Alpha( 
            /* [retval][out] */ double *pAlpha) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UsesAlpha( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDrawnTransparent( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HasTextureAlphaChannel( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpMaterialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpMaterial * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpMaterial * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpMaterial * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpMaterial * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsColor )( 
            ISkpMaterial * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTexture )( 
            ISkpMaterial * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            ISkpMaterial * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Texture )( 
            ISkpMaterial * This,
            /* [retval][out] */ ISkpTexture **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Alpha )( 
            ISkpMaterial * This,
            /* [retval][out] */ double *pAlpha);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsesAlpha )( 
            ISkpMaterial * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDrawnTransparent )( 
            ISkpMaterial * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasTextureAlphaChannel )( 
            ISkpMaterial * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } ISkpMaterialVtbl;

    interface ISkpMaterial
    {
        CONST_VTBL struct ISkpMaterialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpMaterial_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpMaterial_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpMaterial_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpMaterial_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISkpMaterial_get_IsColor(This,pVal)	\
    (This)->lpVtbl -> get_IsColor(This,pVal)

#define ISkpMaterial_get_IsTexture(This,pVal)	\
    (This)->lpVtbl -> get_IsTexture(This,pVal)

#define ISkpMaterial_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define ISkpMaterial_get_Texture(This,pVal)	\
    (This)->lpVtbl -> get_Texture(This,pVal)

#define ISkpMaterial_get_Alpha(This,pAlpha)	\
    (This)->lpVtbl -> get_Alpha(This,pAlpha)

#define ISkpMaterial_get_UsesAlpha(This,pVal)	\
    (This)->lpVtbl -> get_UsesAlpha(This,pVal)

#define ISkpMaterial_get_IsDrawnTransparent(This,pVal)	\
    (This)->lpVtbl -> get_IsDrawnTransparent(This,pVal)

#define ISkpMaterial_get_HasTextureAlphaChannel(This,pVal)	\
    (This)->lpVtbl -> get_HasTextureAlphaChannel(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterial_get_Name_Proxy( 
    ISkpMaterial * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpMaterial_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterial_get_IsColor_Proxy( 
    ISkpMaterial * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpMaterial_get_IsColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterial_get_IsTexture_Proxy( 
    ISkpMaterial * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpMaterial_get_IsTexture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterial_get_Color_Proxy( 
    ISkpMaterial * This,
    /* [retval][out] */ OLE_COLOR *pVal);


void __RPC_STUB ISkpMaterial_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterial_get_Texture_Proxy( 
    ISkpMaterial * This,
    /* [retval][out] */ ISkpTexture **pVal);


void __RPC_STUB ISkpMaterial_get_Texture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterial_get_Alpha_Proxy( 
    ISkpMaterial * This,
    /* [retval][out] */ double *pAlpha);


void __RPC_STUB ISkpMaterial_get_Alpha_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterial_get_UsesAlpha_Proxy( 
    ISkpMaterial * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpMaterial_get_UsesAlpha_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterial_get_IsDrawnTransparent_Proxy( 
    ISkpMaterial * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpMaterial_get_IsDrawnTransparent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterial_get_HasTextureAlphaChannel_Proxy( 
    ISkpMaterial * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpMaterial_get_HasTextureAlphaChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpMaterial_INTERFACE_DEFINED__ */


#ifndef __ISkpMaterials_INTERFACE_DEFINED__
#define __ISkpMaterials_INTERFACE_DEFINED__

/* interface ISkpMaterials */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpMaterials;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("57241BDB-31FA-4831-A00B-7B56733F07F8")
    ISkpMaterials : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpMaterial **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpMaterialsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpMaterials * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpMaterials * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpMaterials * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpMaterials * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpMaterials * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpMaterial **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpMaterials * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpMaterialsVtbl;

    interface ISkpMaterials
    {
        CONST_VTBL struct ISkpMaterialsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpMaterials_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpMaterials_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpMaterials_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpMaterials_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpMaterials_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpMaterials_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterials_get_Count_Proxy( 
    ISkpMaterials * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpMaterials_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterials_get_Item_Proxy( 
    ISkpMaterials * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpMaterial **pVal);


void __RPC_STUB ISkpMaterials_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpMaterials_get__NewEnum_Proxy( 
    ISkpMaterials * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpMaterials_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpMaterials_INTERFACE_DEFINED__ */


#ifndef __ISkpTexture_INTERFACE_DEFINED__
#define __ISkpTexture_INTERFACE_DEFINED__

/* interface ISkpTexture */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpTexture;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE2473EA-2BF1-460b-BC15-3F9560F78BA0")
    ISkpTexture : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ OLE_COLOR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Filename( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Fullname( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_XScale( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_YScale( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteToFile( 
            /* [in] */ BSTR filename) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpTextureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpTexture * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpTexture * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpTexture * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            ISkpTexture * This,
            /* [retval][out] */ OLE_COLOR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Filename )( 
            ISkpTexture * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fullname )( 
            ISkpTexture * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XScale )( 
            ISkpTexture * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YScale )( 
            ISkpTexture * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteToFile )( 
            ISkpTexture * This,
            /* [in] */ BSTR filename);
        
        END_INTERFACE
    } ISkpTextureVtbl;

    interface ISkpTexture
    {
        CONST_VTBL struct ISkpTextureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpTexture_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpTexture_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpTexture_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpTexture_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define ISkpTexture_get_Filename(This,pVal)	\
    (This)->lpVtbl -> get_Filename(This,pVal)

#define ISkpTexture_get_Fullname(This,pVal)	\
    (This)->lpVtbl -> get_Fullname(This,pVal)

#define ISkpTexture_get_XScale(This,pVal)	\
    (This)->lpVtbl -> get_XScale(This,pVal)

#define ISkpTexture_get_YScale(This,pVal)	\
    (This)->lpVtbl -> get_YScale(This,pVal)

#define ISkpTexture_WriteToFile(This,filename)	\
    (This)->lpVtbl -> WriteToFile(This,filename)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpTexture_get_Color_Proxy( 
    ISkpTexture * This,
    /* [retval][out] */ OLE_COLOR *pVal);


void __RPC_STUB ISkpTexture_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpTexture_get_Filename_Proxy( 
    ISkpTexture * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpTexture_get_Filename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpTexture_get_Fullname_Proxy( 
    ISkpTexture * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpTexture_get_Fullname_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpTexture_get_XScale_Proxy( 
    ISkpTexture * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpTexture_get_XScale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpTexture_get_YScale_Proxy( 
    ISkpTexture * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpTexture_get_YScale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTexture_WriteToFile_Proxy( 
    ISkpTexture * This,
    /* [in] */ BSTR filename);


void __RPC_STUB ISkpTexture_WriteToFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpTexture_INTERFACE_DEFINED__ */


#ifndef __ISkpTextures_INTERFACE_DEFINED__
#define __ISkpTextures_INTERFACE_DEFINED__

/* interface ISkpTextures */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpTextures;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("08FAA070-8E8D-49aa-B691-350E803A593B")
    ISkpTextures : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpTexture **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpTexturesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpTextures * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpTextures * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpTextures * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpTextures * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpTextures * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpTexture **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpTextures * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpTexturesVtbl;

    interface ISkpTextures
    {
        CONST_VTBL struct ISkpTexturesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpTextures_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpTextures_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpTextures_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpTextures_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpTextures_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpTextures_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpTextures_get_Count_Proxy( 
    ISkpTextures * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpTextures_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpTextures_get_Item_Proxy( 
    ISkpTextures * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpTexture **pVal);


void __RPC_STUB ISkpTextures_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpTextures_get__NewEnum_Proxy( 
    ISkpTextures * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpTextures_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpTextures_INTERFACE_DEFINED__ */


#ifndef __ISkpTransform_INTERFACE_DEFINED__
#define __ISkpTransform_INTERFACE_DEFINED__

/* interface ISkpTransform */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpTransform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0EBA7013-9266-4f35-9056-B3187000973B")
    ISkpTransform : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetData( 
            /* [out] */ double data[ 16 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsIdentity( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpTransformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpTransform * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpTransform * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpTransform * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetData )( 
            ISkpTransform * This,
            /* [out] */ double data[ 16 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsIdentity )( 
            ISkpTransform * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } ISkpTransformVtbl;

    interface ISkpTransform
    {
        CONST_VTBL struct ISkpTransformVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpTransform_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpTransform_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpTransform_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpTransform_GetData(This,data)	\
    (This)->lpVtbl -> GetData(This,data)

#define ISkpTransform_get_IsIdentity(This,pVal)	\
    (This)->lpVtbl -> get_IsIdentity(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpTransform_GetData_Proxy( 
    ISkpTransform * This,
    /* [out] */ double data[ 16 ]);


void __RPC_STUB ISkpTransform_GetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpTransform_get_IsIdentity_Proxy( 
    ISkpTransform * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpTransform_get_IsIdentity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpTransform_INTERFACE_DEFINED__ */


#ifndef __ISkpComponentDefinition_INTERFACE_DEFINED__
#define __ISkpComponentDefinition_INTERFACE_DEFINED__

/* interface ISkpComponentDefinition */
/* [unique][helpstring][uuid][object] */ 

typedef /* [public][public][v1_enum] */ 
enum __MIDL_ISkpComponentDefinition_0001
    {	Normal	= 1,
	Group	= 2,
	Image	= 3
    } 	ComponentDefinitionType;


EXTERN_C const IID IID_ISkpComponentDefinition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9E729685-B603-47d4-AF2C-049A89AF95B3")
    ISkpComponentDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Guid( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsInternal( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LoadTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Behaviors( 
            /* [retval][out] */ ISkpNamedValues **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Openings( 
            /* [retval][out] */ ISkpOpenings **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetInsertionPoint( 
            /* [retval][out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InsertionPoint( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ ComponentDefinitionType *pType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpComponentDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpComponentDefinition * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpComponentDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpComponentDefinition * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpComponentDefinition * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ISkpComponentDefinition * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Guid )( 
            ISkpComponentDefinition * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInternal )( 
            ISkpComponentDefinition * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            ISkpComponentDefinition * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadTime )( 
            ISkpComponentDefinition * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Behaviors )( 
            ISkpComponentDefinition * This,
            /* [retval][out] */ ISkpNamedValues **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Openings )( 
            ISkpComponentDefinition * This,
            /* [retval][out] */ ISkpOpenings **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetInsertionPoint )( 
            ISkpComponentDefinition * This,
            /* [retval][out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InsertionPoint )( 
            ISkpComponentDefinition * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISkpComponentDefinition * This,
            /* [retval][out] */ ComponentDefinitionType *pType);
        
        END_INTERFACE
    } ISkpComponentDefinitionVtbl;

    interface ISkpComponentDefinition
    {
        CONST_VTBL struct ISkpComponentDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpComponentDefinition_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpComponentDefinition_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpComponentDefinition_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpComponentDefinition_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISkpComponentDefinition_get_Description(This,pVal)	\
    (This)->lpVtbl -> get_Description(This,pVal)

#define ISkpComponentDefinition_get_Guid(This,pVal)	\
    (This)->lpVtbl -> get_Guid(This,pVal)

#define ISkpComponentDefinition_get_IsInternal(This,pVal)	\
    (This)->lpVtbl -> get_IsInternal(This,pVal)

#define ISkpComponentDefinition_get_Path(This,pVal)	\
    (This)->lpVtbl -> get_Path(This,pVal)

#define ISkpComponentDefinition_get_LoadTime(This,pVal)	\
    (This)->lpVtbl -> get_LoadTime(This,pVal)

#define ISkpComponentDefinition_get_Behaviors(This,pVal)	\
    (This)->lpVtbl -> get_Behaviors(This,pVal)

#define ISkpComponentDefinition_get_Openings(This,pVal)	\
    (This)->lpVtbl -> get_Openings(This,pVal)

#define ISkpComponentDefinition__GetInsertionPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetInsertionPoint(This,pPoint3d)

#define ISkpComponentDefinition_get_InsertionPoint(This,pPoint3d)	\
    (This)->lpVtbl -> get_InsertionPoint(This,pPoint3d)

#define ISkpComponentDefinition_get_Type(This,pType)	\
    (This)->lpVtbl -> get_Type(This,pType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinition_get_Name_Proxy( 
    ISkpComponentDefinition * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpComponentDefinition_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinition_get_Description_Proxy( 
    ISkpComponentDefinition * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpComponentDefinition_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinition_get_Guid_Proxy( 
    ISkpComponentDefinition * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpComponentDefinition_get_Guid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinition_get_IsInternal_Proxy( 
    ISkpComponentDefinition * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpComponentDefinition_get_IsInternal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinition_get_Path_Proxy( 
    ISkpComponentDefinition * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpComponentDefinition_get_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinition_get_LoadTime_Proxy( 
    ISkpComponentDefinition * This,
    /* [retval][out] */ DATE *pVal);


void __RPC_STUB ISkpComponentDefinition_get_LoadTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinition_get_Behaviors_Proxy( 
    ISkpComponentDefinition * This,
    /* [retval][out] */ ISkpNamedValues **pVal);


void __RPC_STUB ISkpComponentDefinition_get_Behaviors_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinition_get_Openings_Proxy( 
    ISkpComponentDefinition * This,
    /* [retval][out] */ ISkpOpenings **pVal);


void __RPC_STUB ISkpComponentDefinition_get_Openings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinition__GetInsertionPoint_Proxy( 
    ISkpComponentDefinition * This,
    /* [retval][out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpComponentDefinition__GetInsertionPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinition_get_InsertionPoint_Proxy( 
    ISkpComponentDefinition * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpComponentDefinition_get_InsertionPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinition_get_Type_Proxy( 
    ISkpComponentDefinition * This,
    /* [retval][out] */ ComponentDefinitionType *pType);


void __RPC_STUB ISkpComponentDefinition_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpComponentDefinition_INTERFACE_DEFINED__ */


#ifndef __ISkpComponentDefinitions_INTERFACE_DEFINED__
#define __ISkpComponentDefinitions_INTERFACE_DEFINED__

/* interface ISkpComponentDefinitions */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpComponentDefinitions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE7FB267-8EA2-4a5c-9121-28E45FC46AF3")
    ISkpComponentDefinitions : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpComponentDefinition **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpComponentDefinitionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpComponentDefinitions * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpComponentDefinitions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpComponentDefinitions * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpComponentDefinitions * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpComponentDefinitions * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpComponentDefinition **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpComponentDefinitions * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpComponentDefinitionsVtbl;

    interface ISkpComponentDefinitions
    {
        CONST_VTBL struct ISkpComponentDefinitionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpComponentDefinitions_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpComponentDefinitions_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpComponentDefinitions_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpComponentDefinitions_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpComponentDefinitions_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpComponentDefinitions_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinitions_get_Count_Proxy( 
    ISkpComponentDefinitions * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpComponentDefinitions_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinitions_get_Item_Proxy( 
    ISkpComponentDefinitions * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpComponentDefinition **pVal);


void __RPC_STUB ISkpComponentDefinitions_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentDefinitions_get__NewEnum_Proxy( 
    ISkpComponentDefinitions * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpComponentDefinitions_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpComponentDefinitions_INTERFACE_DEFINED__ */


#ifndef __ISkpComponentInstance_INTERFACE_DEFINED__
#define __ISkpComponentInstance_INTERFACE_DEFINED__

/* interface ISkpComponentInstance */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpComponentInstance;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CE351997-ABF3-434f-88D9-CDA079FA6873")
    ISkpComponentInstance : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ComponentDefinition( 
            /* [retval][out] */ ISkpComponentDefinition **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ ISkpTransform **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetObjectsAttachedTo( 
            /* [retval][out] */ ISkpEntities **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAttachedComponentInstances( 
            /* [retval][out] */ ISkpComponentInstances **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveAs( 
            /* [in] */ BSTR fileName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpComponentInstanceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpComponentInstance * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpComponentInstance * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpComponentInstance * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentDefinition )( 
            ISkpComponentInstance * This,
            /* [retval][out] */ ISkpComponentDefinition **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            ISkpComponentInstance * This,
            /* [retval][out] */ ISkpTransform **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectsAttachedTo )( 
            ISkpComponentInstance * This,
            /* [retval][out] */ ISkpEntities **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttachedComponentInstances )( 
            ISkpComponentInstance * This,
            /* [retval][out] */ ISkpComponentInstances **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            ISkpComponentInstance * This,
            /* [in] */ BSTR fileName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpComponentInstance * This,
            /* [retval][out] */ BSTR *pName);
        
        END_INTERFACE
    } ISkpComponentInstanceVtbl;

    interface ISkpComponentInstance
    {
        CONST_VTBL struct ISkpComponentInstanceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpComponentInstance_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpComponentInstance_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpComponentInstance_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpComponentInstance_get_ComponentDefinition(This,pVal)	\
    (This)->lpVtbl -> get_ComponentDefinition(This,pVal)

#define ISkpComponentInstance_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define ISkpComponentInstance_GetObjectsAttachedTo(This,pVal)	\
    (This)->lpVtbl -> GetObjectsAttachedTo(This,pVal)

#define ISkpComponentInstance_GetAttachedComponentInstances(This,pVal)	\
    (This)->lpVtbl -> GetAttachedComponentInstances(This,pVal)

#define ISkpComponentInstance_SaveAs(This,fileName)	\
    (This)->lpVtbl -> SaveAs(This,fileName)

#define ISkpComponentInstance_get_Name(This,pName)	\
    (This)->lpVtbl -> get_Name(This,pName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentInstance_get_ComponentDefinition_Proxy( 
    ISkpComponentInstance * This,
    /* [retval][out] */ ISkpComponentDefinition **pVal);


void __RPC_STUB ISkpComponentInstance_get_ComponentDefinition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentInstance_get_Transform_Proxy( 
    ISkpComponentInstance * This,
    /* [retval][out] */ ISkpTransform **pVal);


void __RPC_STUB ISkpComponentInstance_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpComponentInstance_GetObjectsAttachedTo_Proxy( 
    ISkpComponentInstance * This,
    /* [retval][out] */ ISkpEntities **pVal);


void __RPC_STUB ISkpComponentInstance_GetObjectsAttachedTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpComponentInstance_GetAttachedComponentInstances_Proxy( 
    ISkpComponentInstance * This,
    /* [retval][out] */ ISkpComponentInstances **pVal);


void __RPC_STUB ISkpComponentInstance_GetAttachedComponentInstances_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpComponentInstance_SaveAs_Proxy( 
    ISkpComponentInstance * This,
    /* [in] */ BSTR fileName);


void __RPC_STUB ISkpComponentInstance_SaveAs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentInstance_get_Name_Proxy( 
    ISkpComponentInstance * This,
    /* [retval][out] */ BSTR *pName);


void __RPC_STUB ISkpComponentInstance_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpComponentInstance_INTERFACE_DEFINED__ */


#ifndef __ISkpComponentInstances_INTERFACE_DEFINED__
#define __ISkpComponentInstances_INTERFACE_DEFINED__

/* interface ISkpComponentInstances */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpComponentInstances;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("152994E6-DD1D-4c50-AADD-BB7CDD25593E")
    ISkpComponentInstances : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpComponentInstance **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpComponentInstancesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpComponentInstances * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpComponentInstances * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpComponentInstances * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpComponentInstances * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpComponentInstances * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpComponentInstance **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpComponentInstances * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpComponentInstancesVtbl;

    interface ISkpComponentInstances
    {
        CONST_VTBL struct ISkpComponentInstancesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpComponentInstances_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpComponentInstances_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpComponentInstances_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpComponentInstances_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpComponentInstances_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpComponentInstances_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentInstances_get_Count_Proxy( 
    ISkpComponentInstances * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpComponentInstances_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentInstances_get_Item_Proxy( 
    ISkpComponentInstances * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpComponentInstance **pVal);


void __RPC_STUB ISkpComponentInstances_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpComponentInstances_get__NewEnum_Proxy( 
    ISkpComponentInstances * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpComponentInstances_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpComponentInstances_INTERFACE_DEFINED__ */


#ifndef __ISkpEdgeUse_INTERFACE_DEFINED__
#define __ISkpEdgeUse_INTERFACE_DEFINED__

/* interface ISkpEdgeUse */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpEdgeUse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("31B41CF2-8C8A-48ba-B8D8-837B7E86676F")
    ISkpEdgeUse : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Edge( 
            /* [retval][out] */ ISkpEdge **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Loop( 
            /* [retval][out] */ ISkpLoop **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Face( 
            /* [retval][out] */ ISkpFace **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Partners( 
            /* [retval][out] */ ISkpEdgeUses **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsReversed( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Previous( 
            /* [retval][out] */ ISkpEdgeUse **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Next( 
            /* [retval][out] */ ISkpEdgeUse **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartVertex( 
            /* [retval][out] */ ISkpVertex **pStartVertex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EndVertex( 
            /* [retval][out] */ ISkpVertex **pEndVertex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetStartPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetEndPoint( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
            /* [retval][out] */ ISkpPoint3d **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [retval][out] */ ISkpPoint3d **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartVertexNormal( 
            /* [retval][out] */ ISkpVector3d **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EndVertexNormal( 
            /* [retval][out] */ ISkpVector3d **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpEdgeUseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpEdgeUse * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpEdgeUse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpEdgeUse * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Edge )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpEdge **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Loop )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpLoop **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Face )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpFace **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Partners )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpEdgeUses **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsReversed )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Previous )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpEdgeUse **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Next )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpEdgeUse **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartVertex )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpVertex **pStartVertex);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndVertex )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpVertex **pEndVertex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetStartPoint )( 
            ISkpEdgeUse * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetEndPoint )( 
            ISkpEdgeUse * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpPoint3d **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpPoint3d **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartVertexNormal )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpVector3d **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndVertexNormal )( 
            ISkpEdgeUse * This,
            /* [retval][out] */ ISkpVector3d **pVal);
        
        END_INTERFACE
    } ISkpEdgeUseVtbl;

    interface ISkpEdgeUse
    {
        CONST_VTBL struct ISkpEdgeUseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpEdgeUse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpEdgeUse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpEdgeUse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpEdgeUse_get_Edge(This,pVal)	\
    (This)->lpVtbl -> get_Edge(This,pVal)

#define ISkpEdgeUse_get_Loop(This,pVal)	\
    (This)->lpVtbl -> get_Loop(This,pVal)

#define ISkpEdgeUse_get_Face(This,pVal)	\
    (This)->lpVtbl -> get_Face(This,pVal)

#define ISkpEdgeUse_get_Partners(This,pVal)	\
    (This)->lpVtbl -> get_Partners(This,pVal)

#define ISkpEdgeUse_get_IsReversed(This,pVal)	\
    (This)->lpVtbl -> get_IsReversed(This,pVal)

#define ISkpEdgeUse_get_Previous(This,pVal)	\
    (This)->lpVtbl -> get_Previous(This,pVal)

#define ISkpEdgeUse_get_Next(This,pVal)	\
    (This)->lpVtbl -> get_Next(This,pVal)

#define ISkpEdgeUse_get_StartVertex(This,pStartVertex)	\
    (This)->lpVtbl -> get_StartVertex(This,pStartVertex)

#define ISkpEdgeUse_get_EndVertex(This,pEndVertex)	\
    (This)->lpVtbl -> get_EndVertex(This,pEndVertex)

#define ISkpEdgeUse__GetStartPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetStartPoint(This,pPoint3d)

#define ISkpEdgeUse__GetEndPoint(This,pPoint3d)	\
    (This)->lpVtbl -> _GetEndPoint(This,pPoint3d)

#define ISkpEdgeUse_get_StartPoint(This,pVal)	\
    (This)->lpVtbl -> get_StartPoint(This,pVal)

#define ISkpEdgeUse_get_EndPoint(This,pVal)	\
    (This)->lpVtbl -> get_EndPoint(This,pVal)

#define ISkpEdgeUse_get_StartVertexNormal(This,pVal)	\
    (This)->lpVtbl -> get_StartVertexNormal(This,pVal)

#define ISkpEdgeUse_get_EndVertexNormal(This,pVal)	\
    (This)->lpVtbl -> get_EndVertexNormal(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_Edge_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpEdge **pVal);


void __RPC_STUB ISkpEdgeUse_get_Edge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_Loop_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpLoop **pVal);


void __RPC_STUB ISkpEdgeUse_get_Loop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_Face_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpFace **pVal);


void __RPC_STUB ISkpEdgeUse_get_Face_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_Partners_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpEdgeUses **pVal);


void __RPC_STUB ISkpEdgeUse_get_Partners_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_IsReversed_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpEdgeUse_get_IsReversed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_Previous_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpEdgeUse **pVal);


void __RPC_STUB ISkpEdgeUse_get_Previous_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_Next_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpEdgeUse **pVal);


void __RPC_STUB ISkpEdgeUse_get_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_StartVertex_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpVertex **pStartVertex);


void __RPC_STUB ISkpEdgeUse_get_StartVertex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_EndVertex_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpVertex **pEndVertex);


void __RPC_STUB ISkpEdgeUse_get_EndVertex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse__GetStartPoint_Proxy( 
    ISkpEdgeUse * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpEdgeUse__GetStartPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse__GetEndPoint_Proxy( 
    ISkpEdgeUse * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpEdgeUse__GetEndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_StartPoint_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpPoint3d **pVal);


void __RPC_STUB ISkpEdgeUse_get_StartPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_EndPoint_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpPoint3d **pVal);


void __RPC_STUB ISkpEdgeUse_get_EndPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_StartVertexNormal_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpVector3d **pVal);


void __RPC_STUB ISkpEdgeUse_get_StartVertexNormal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUse_get_EndVertexNormal_Proxy( 
    ISkpEdgeUse * This,
    /* [retval][out] */ ISkpVector3d **pVal);


void __RPC_STUB ISkpEdgeUse_get_EndVertexNormal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpEdgeUse_INTERFACE_DEFINED__ */


#ifndef __ISkpEdgeUses_INTERFACE_DEFINED__
#define __ISkpEdgeUses_INTERFACE_DEFINED__

/* interface ISkpEdgeUses */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpEdgeUses;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0E8633C5-2129-45e0-8628-15FE25D314DA")
    ISkpEdgeUses : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpEdgeUse **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpEdgeUsesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpEdgeUses * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpEdgeUses * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpEdgeUses * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpEdgeUses * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpEdgeUses * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpEdgeUse **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpEdgeUses * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpEdgeUsesVtbl;

    interface ISkpEdgeUses
    {
        CONST_VTBL struct ISkpEdgeUsesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpEdgeUses_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpEdgeUses_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpEdgeUses_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpEdgeUses_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpEdgeUses_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpEdgeUses_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUses_get_Count_Proxy( 
    ISkpEdgeUses * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpEdgeUses_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUses_get_Item_Proxy( 
    ISkpEdgeUses * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpEdgeUse **pVal);


void __RPC_STUB ISkpEdgeUses_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpEdgeUses_get__NewEnum_Proxy( 
    ISkpEdgeUses * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpEdgeUses_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpEdgeUses_INTERFACE_DEFINED__ */


#ifndef __ISkpLoop_INTERFACE_DEFINED__
#define __ISkpLoop_INTERFACE_DEFINED__

/* interface ISkpLoop */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpLoop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42798DB5-F496-4f69-9555-81FEB05573F0")
    ISkpLoop : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Edges( 
            /* [retval][out] */ ISkpEdges **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EdgeUses( 
            /* [retval][out] */ ISkpEdgeUses **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Vertices( 
            /* [retval][out] */ ISkpVertices **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Face( 
            /* [retval][out] */ ISkpFace **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsOuterLoop( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsConvex( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpLoopVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpLoop * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpLoop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpLoop * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Edges )( 
            ISkpLoop * This,
            /* [retval][out] */ ISkpEdges **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EdgeUses )( 
            ISkpLoop * This,
            /* [retval][out] */ ISkpEdgeUses **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vertices )( 
            ISkpLoop * This,
            /* [retval][out] */ ISkpVertices **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Face )( 
            ISkpLoop * This,
            /* [retval][out] */ ISkpFace **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsOuterLoop )( 
            ISkpLoop * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConvex )( 
            ISkpLoop * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } ISkpLoopVtbl;

    interface ISkpLoop
    {
        CONST_VTBL struct ISkpLoopVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpLoop_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpLoop_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpLoop_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpLoop_get_Edges(This,pVal)	\
    (This)->lpVtbl -> get_Edges(This,pVal)

#define ISkpLoop_get_EdgeUses(This,pVal)	\
    (This)->lpVtbl -> get_EdgeUses(This,pVal)

#define ISkpLoop_get_Vertices(This,pVal)	\
    (This)->lpVtbl -> get_Vertices(This,pVal)

#define ISkpLoop_get_Face(This,pVal)	\
    (This)->lpVtbl -> get_Face(This,pVal)

#define ISkpLoop_get_IsOuterLoop(This,pVal)	\
    (This)->lpVtbl -> get_IsOuterLoop(This,pVal)

#define ISkpLoop_get_IsConvex(This,pVal)	\
    (This)->lpVtbl -> get_IsConvex(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLoop_get_Edges_Proxy( 
    ISkpLoop * This,
    /* [retval][out] */ ISkpEdges **pVal);


void __RPC_STUB ISkpLoop_get_Edges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLoop_get_EdgeUses_Proxy( 
    ISkpLoop * This,
    /* [retval][out] */ ISkpEdgeUses **pVal);


void __RPC_STUB ISkpLoop_get_EdgeUses_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLoop_get_Vertices_Proxy( 
    ISkpLoop * This,
    /* [retval][out] */ ISkpVertices **pVal);


void __RPC_STUB ISkpLoop_get_Vertices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLoop_get_Face_Proxy( 
    ISkpLoop * This,
    /* [retval][out] */ ISkpFace **pVal);


void __RPC_STUB ISkpLoop_get_Face_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLoop_get_IsOuterLoop_Proxy( 
    ISkpLoop * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpLoop_get_IsOuterLoop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLoop_get_IsConvex_Proxy( 
    ISkpLoop * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpLoop_get_IsConvex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpLoop_INTERFACE_DEFINED__ */


#ifndef __ISkpLoops_INTERFACE_DEFINED__
#define __ISkpLoops_INTERFACE_DEFINED__

/* interface ISkpLoops */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpLoops;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CBCCFB83-CD00-45a1-A631-07DCBA4B842F")
    ISkpLoops : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpLoop **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpLoopsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpLoops * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpLoops * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpLoops * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpLoops * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpLoops * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpLoop **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpLoops * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpLoopsVtbl;

    interface ISkpLoops
    {
        CONST_VTBL struct ISkpLoopsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpLoops_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpLoops_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpLoops_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpLoops_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpLoops_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpLoops_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLoops_get_Count_Proxy( 
    ISkpLoops * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpLoops_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpLoops_get_Item_Proxy( 
    ISkpLoops * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpLoop **pVal);


void __RPC_STUB ISkpLoops_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpLoops_get__NewEnum_Proxy( 
    ISkpLoops * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpLoops_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpLoops_INTERFACE_DEFINED__ */


#ifndef __ISkpPolyline3d_INTERFACE_DEFINED__
#define __ISkpPolyline3d_INTERFACE_DEFINED__

/* interface ISkpPolyline3d */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpPolyline3d;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A17CE198-CFCF-4f39-80A2-6A6512CF1E4B")
    ISkpPolyline3d : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetPosition( 
            /* [in] */ long nIndex,
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpPolyline3dVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpPolyline3d * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpPolyline3d * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpPolyline3d * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpPolyline3d * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetPosition )( 
            ISkpPolyline3d * This,
            /* [in] */ long nIndex,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ISkpPolyline3d * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        END_INTERFACE
    } ISkpPolyline3dVtbl;

    interface ISkpPolyline3d
    {
        CONST_VTBL struct ISkpPolyline3dVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpPolyline3d_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpPolyline3d_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpPolyline3d_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpPolyline3d_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpPolyline3d__GetPosition(This,nIndex,pPoint3d)	\
    (This)->lpVtbl -> _GetPosition(This,nIndex,pPoint3d)

#define ISkpPolyline3d_get_Position(This,nIndex,pPoint3d)	\
    (This)->lpVtbl -> get_Position(This,nIndex,pPoint3d)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolyline3d_get_Count_Proxy( 
    ISkpPolyline3d * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpPolyline3d_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPolyline3d__GetPosition_Proxy( 
    ISkpPolyline3d * This,
    /* [in] */ long nIndex,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpPolyline3d__GetPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolyline3d_get_Position_Proxy( 
    ISkpPolyline3d * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpPolyline3d_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpPolyline3d_INTERFACE_DEFINED__ */


#ifndef __ISkpPolyline3ds_INTERFACE_DEFINED__
#define __ISkpPolyline3ds_INTERFACE_DEFINED__

/* interface ISkpPolyline3ds */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpPolyline3ds;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5BF6968B-7C46-4045-A6D8-5CF4CC600C7D")
    ISkpPolyline3ds : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpPolyline3d **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpPolyline3dsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpPolyline3ds * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpPolyline3ds * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpPolyline3ds * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpPolyline3ds * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpPolyline3ds * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpPolyline3d **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpPolyline3ds * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpPolyline3dsVtbl;

    interface ISkpPolyline3ds
    {
        CONST_VTBL struct ISkpPolyline3dsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpPolyline3ds_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpPolyline3ds_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpPolyline3ds_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpPolyline3ds_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpPolyline3ds_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpPolyline3ds_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolyline3ds_get_Count_Proxy( 
    ISkpPolyline3ds * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpPolyline3ds_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolyline3ds_get_Item_Proxy( 
    ISkpPolyline3ds * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpPolyline3d **pVal);


void __RPC_STUB ISkpPolyline3ds_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpPolyline3ds_get__NewEnum_Proxy( 
    ISkpPolyline3ds * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpPolyline3ds_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpPolyline3ds_INTERFACE_DEFINED__ */


#ifndef __ISkpConstructionLine_INTERFACE_DEFINED__
#define __ISkpConstructionLine_INTERFACE_DEFINED__

/* interface ISkpConstructionLine */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpConstructionLine;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BBD3AAA-C3A2-4c54-B8EC-FDD3A148BBFB")
    ISkpConstructionLine : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetPosition( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetDirection( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpConstructionLineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpConstructionLine * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpConstructionLine * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpConstructionLine * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetPosition )( 
            ISkpConstructionLine * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetDirection )( 
            ISkpConstructionLine * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ISkpConstructionLine * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Direction )( 
            ISkpConstructionLine * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        END_INTERFACE
    } ISkpConstructionLineVtbl;

    interface ISkpConstructionLine
    {
        CONST_VTBL struct ISkpConstructionLineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpConstructionLine_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpConstructionLine_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpConstructionLine_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpConstructionLine__GetPosition(This,pPoint3d)	\
    (This)->lpVtbl -> _GetPosition(This,pPoint3d)

#define ISkpConstructionLine__GetDirection(This,pVector3d)	\
    (This)->lpVtbl -> _GetDirection(This,pVector3d)

#define ISkpConstructionLine_get_Position(This,pPoint3d)	\
    (This)->lpVtbl -> get_Position(This,pPoint3d)

#define ISkpConstructionLine_get_Direction(This,pVector3d)	\
    (This)->lpVtbl -> get_Direction(This,pVector3d)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpConstructionLine__GetPosition_Proxy( 
    ISkpConstructionLine * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpConstructionLine__GetPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpConstructionLine__GetDirection_Proxy( 
    ISkpConstructionLine * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpConstructionLine__GetDirection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpConstructionLine_get_Position_Proxy( 
    ISkpConstructionLine * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpConstructionLine_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpConstructionLine_get_Direction_Proxy( 
    ISkpConstructionLine * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpConstructionLine_get_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpConstructionLine_INTERFACE_DEFINED__ */


#ifndef __ISkpConstructionLines_INTERFACE_DEFINED__
#define __ISkpConstructionLines_INTERFACE_DEFINED__

/* interface ISkpConstructionLines */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpConstructionLines;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EA8BDFA0-D3A0-4196-923B-65E39468EBC6")
    ISkpConstructionLines : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpConstructionLine **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpConstructionLinesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpConstructionLines * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpConstructionLines * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpConstructionLines * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpConstructionLines * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpConstructionLines * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpConstructionLine **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpConstructionLines * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpConstructionLinesVtbl;

    interface ISkpConstructionLines
    {
        CONST_VTBL struct ISkpConstructionLinesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpConstructionLines_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpConstructionLines_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpConstructionLines_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpConstructionLines_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpConstructionLines_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpConstructionLines_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpConstructionLines_get_Count_Proxy( 
    ISkpConstructionLines * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpConstructionLines_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpConstructionLines_get_Item_Proxy( 
    ISkpConstructionLines * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpConstructionLine **pVal);


void __RPC_STUB ISkpConstructionLines_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpConstructionLines_get__NewEnum_Proxy( 
    ISkpConstructionLines * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpConstructionLines_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpConstructionLines_INTERFACE_DEFINED__ */


#ifndef __ISkpConstructionPoint_INTERFACE_DEFINED__
#define __ISkpConstructionPoint_INTERFACE_DEFINED__

/* interface ISkpConstructionPoint */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpConstructionPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D14336D5-5378-4b8a-8BEE-A35D92CAEA86")
    ISkpConstructionPoint : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetPosition( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayAsLine( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetFromPosition( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FromPosition( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpConstructionPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpConstructionPoint * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpConstructionPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpConstructionPoint * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetPosition )( 
            ISkpConstructionPoint * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ISkpConstructionPoint * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayAsLine )( 
            ISkpConstructionPoint * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetFromPosition )( 
            ISkpConstructionPoint * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FromPosition )( 
            ISkpConstructionPoint * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        END_INTERFACE
    } ISkpConstructionPointVtbl;

    interface ISkpConstructionPoint
    {
        CONST_VTBL struct ISkpConstructionPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpConstructionPoint_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpConstructionPoint_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpConstructionPoint_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpConstructionPoint__GetPosition(This,pPoint3d)	\
    (This)->lpVtbl -> _GetPosition(This,pPoint3d)

#define ISkpConstructionPoint_get_Position(This,pPoint3d)	\
    (This)->lpVtbl -> get_Position(This,pPoint3d)

#define ISkpConstructionPoint_get_DisplayAsLine(This,pVal)	\
    (This)->lpVtbl -> get_DisplayAsLine(This,pVal)

#define ISkpConstructionPoint__GetFromPosition(This,pPoint3d)	\
    (This)->lpVtbl -> _GetFromPosition(This,pPoint3d)

#define ISkpConstructionPoint_get_FromPosition(This,pPoint3d)	\
    (This)->lpVtbl -> get_FromPosition(This,pPoint3d)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpConstructionPoint__GetPosition_Proxy( 
    ISkpConstructionPoint * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpConstructionPoint__GetPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpConstructionPoint_get_Position_Proxy( 
    ISkpConstructionPoint * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpConstructionPoint_get_Position_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpConstructionPoint_get_DisplayAsLine_Proxy( 
    ISkpConstructionPoint * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpConstructionPoint_get_DisplayAsLine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpConstructionPoint__GetFromPosition_Proxy( 
    ISkpConstructionPoint * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpConstructionPoint__GetFromPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpConstructionPoint_get_FromPosition_Proxy( 
    ISkpConstructionPoint * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpConstructionPoint_get_FromPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpConstructionPoint_INTERFACE_DEFINED__ */


#ifndef __ISkpConstructionPoints_INTERFACE_DEFINED__
#define __ISkpConstructionPoints_INTERFACE_DEFINED__

/* interface ISkpConstructionPoints */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpConstructionPoints;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B1409D01-70CB-4ac8-93C2-94A406C42BFB")
    ISkpConstructionPoints : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpConstructionPoint **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpConstructionPointsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpConstructionPoints * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpConstructionPoints * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpConstructionPoints * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpConstructionPoints * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpConstructionPoints * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpConstructionPoint **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpConstructionPoints * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpConstructionPointsVtbl;

    interface ISkpConstructionPoints
    {
        CONST_VTBL struct ISkpConstructionPointsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpConstructionPoints_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpConstructionPoints_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpConstructionPoints_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpConstructionPoints_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpConstructionPoints_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpConstructionPoints_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpConstructionPoints_get_Count_Proxy( 
    ISkpConstructionPoints * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpConstructionPoints_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpConstructionPoints_get_Item_Proxy( 
    ISkpConstructionPoints * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpConstructionPoint **pVal);


void __RPC_STUB ISkpConstructionPoints_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpConstructionPoints_get__NewEnum_Proxy( 
    ISkpConstructionPoints * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpConstructionPoints_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpConstructionPoints_INTERFACE_DEFINED__ */


#ifndef __ISkpGroup_INTERFACE_DEFINED__
#define __ISkpGroup_INTERFACE_DEFINED__

/* interface ISkpGroup */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92868017-548A-40aa-843E-19F20114D00A")
    ISkpGroup : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ ISkpTransform **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveAs( 
            /* [in] */ BSTR fileName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpGroup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpGroup * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpGroup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ISkpGroup * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            ISkpGroup * This,
            /* [retval][out] */ ISkpTransform **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            ISkpGroup * This,
            /* [in] */ BSTR fileName);
        
        END_INTERFACE
    } ISkpGroupVtbl;

    interface ISkpGroup
    {
        CONST_VTBL struct ISkpGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpGroup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpGroup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpGroup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpGroup_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISkpGroup_get_Description(This,pVal)	\
    (This)->lpVtbl -> get_Description(This,pVal)

#define ISkpGroup_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define ISkpGroup_SaveAs(This,fileName)	\
    (This)->lpVtbl -> SaveAs(This,fileName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpGroup_get_Name_Proxy( 
    ISkpGroup * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpGroup_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpGroup_get_Description_Proxy( 
    ISkpGroup * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpGroup_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpGroup_get_Transform_Proxy( 
    ISkpGroup * This,
    /* [retval][out] */ ISkpTransform **pVal);


void __RPC_STUB ISkpGroup_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpGroup_SaveAs_Proxy( 
    ISkpGroup * This,
    /* [in] */ BSTR fileName);


void __RPC_STUB ISkpGroup_SaveAs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpGroup_INTERFACE_DEFINED__ */


#ifndef __ISkpGroups_INTERFACE_DEFINED__
#define __ISkpGroups_INTERFACE_DEFINED__

/* interface ISkpGroups */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpGroups;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0D7263FC-4F37-46ec-B518-4FF92D40BC3D")
    ISkpGroups : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpGroup **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpGroupsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpGroups * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpGroups * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpGroups * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpGroups * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpGroups * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpGroup **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpGroups * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpGroupsVtbl;

    interface ISkpGroups
    {
        CONST_VTBL struct ISkpGroupsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpGroups_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpGroups_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpGroups_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpGroups_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpGroups_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpGroups_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpGroups_get_Count_Proxy( 
    ISkpGroups * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpGroups_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpGroups_get_Item_Proxy( 
    ISkpGroups * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpGroup **pVal);


void __RPC_STUB ISkpGroups_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpGroups_get__NewEnum_Proxy( 
    ISkpGroups * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpGroups_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpGroups_INTERFACE_DEFINED__ */


#ifndef __ISkpImage_INTERFACE_DEFINED__
#define __ISkpImage_INTERFACE_DEFINED__

/* interface ISkpImage */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("355842C5-1938-4120-93D9-A9126147400C")
    ISkpImage : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ ISkpTransform **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PixelWidth( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PixelHeight( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ZRotation( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Origin( 
            /* [retval][out] */ ISkpPoint3d **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Normal( 
            /* [retval][out] */ ISkpVector3d **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpImage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpImage * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            ISkpImage * This,
            /* [retval][out] */ ISkpTransform **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            ISkpImage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            ISkpImage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            ISkpImage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PixelWidth )( 
            ISkpImage * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PixelHeight )( 
            ISkpImage * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZRotation )( 
            ISkpImage * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Origin )( 
            ISkpImage * This,
            /* [retval][out] */ ISkpPoint3d **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Normal )( 
            ISkpImage * This,
            /* [retval][out] */ ISkpVector3d **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpImage * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ISkpImageVtbl;

    interface ISkpImage
    {
        CONST_VTBL struct ISkpImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpImage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpImage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpImage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpImage_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#define ISkpImage_get_Path(This,pVal)	\
    (This)->lpVtbl -> get_Path(This,pVal)

#define ISkpImage_get_Width(This,pVal)	\
    (This)->lpVtbl -> get_Width(This,pVal)

#define ISkpImage_get_Height(This,pVal)	\
    (This)->lpVtbl -> get_Height(This,pVal)

#define ISkpImage_get_PixelWidth(This,pVal)	\
    (This)->lpVtbl -> get_PixelWidth(This,pVal)

#define ISkpImage_get_PixelHeight(This,pVal)	\
    (This)->lpVtbl -> get_PixelHeight(This,pVal)

#define ISkpImage_get_ZRotation(This,pVal)	\
    (This)->lpVtbl -> get_ZRotation(This,pVal)

#define ISkpImage_get_Origin(This,pVal)	\
    (This)->lpVtbl -> get_Origin(This,pVal)

#define ISkpImage_get_Normal(This,pVal)	\
    (This)->lpVtbl -> get_Normal(This,pVal)

#define ISkpImage_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImage_get_Transform_Proxy( 
    ISkpImage * This,
    /* [retval][out] */ ISkpTransform **pVal);


void __RPC_STUB ISkpImage_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImage_get_Path_Proxy( 
    ISkpImage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpImage_get_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImage_get_Width_Proxy( 
    ISkpImage * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpImage_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImage_get_Height_Proxy( 
    ISkpImage * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpImage_get_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImage_get_PixelWidth_Proxy( 
    ISkpImage * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpImage_get_PixelWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImage_get_PixelHeight_Proxy( 
    ISkpImage * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpImage_get_PixelHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImage_get_ZRotation_Proxy( 
    ISkpImage * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpImage_get_ZRotation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImage_get_Origin_Proxy( 
    ISkpImage * This,
    /* [retval][out] */ ISkpPoint3d **pVal);


void __RPC_STUB ISkpImage_get_Origin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImage_get_Normal_Proxy( 
    ISkpImage * This,
    /* [retval][out] */ ISkpVector3d **pVal);


void __RPC_STUB ISkpImage_get_Normal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImage_get_Name_Proxy( 
    ISkpImage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpImage_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpImage_INTERFACE_DEFINED__ */


#ifndef __ISkpImages_INTERFACE_DEFINED__
#define __ISkpImages_INTERFACE_DEFINED__

/* interface ISkpImages */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpImages;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80EC0989-9FE2-4996-A93C-8DD0611FE3B7")
    ISkpImages : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpImage **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpImagesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpImages * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpImages * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpImages * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpImages * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpImages * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpImage **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpImages * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpImagesVtbl;

    interface ISkpImages
    {
        CONST_VTBL struct ISkpImagesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpImages_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpImages_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpImages_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpImages_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpImages_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpImages_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImages_get_Count_Proxy( 
    ISkpImages * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpImages_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpImages_get_Item_Proxy( 
    ISkpImages * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpImage **pVal);


void __RPC_STUB ISkpImages_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpImages_get__NewEnum_Proxy( 
    ISkpImages * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpImages_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpImages_INTERFACE_DEFINED__ */


#ifndef __ISkpCamera_INTERFACE_DEFINED__
#define __ISkpCamera_INTERFACE_DEFINED__

/* interface ISkpCamera */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpCamera;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62DFE658-E514-4797-ADBC-FA7A0A2A22AB")
    ISkpCamera : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetEye( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetDirection( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetUp( 
            /* [out] */ double pVector3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetCenter( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetTarget( 
            /* [out] */ double pPoint3d[ 3 ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Eye( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Up( 
            /* [retval][out] */ ISkpVector3d **pVector3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Center( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Target( 
            /* [retval][out] */ ISkpPoint3d **pPoint3d) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Projection( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NearClip( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FarClip( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FieldOfView( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AspectRatio( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FieldOfViewIsHeight( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ImageWidth( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Center2D( 
            /* [out] */ double *x,
            /* [out] */ double *y) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Scale2D( 
            /* [retval][out] */ double *scale) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Camera2D( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpCameraVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpCamera * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpCamera * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpCamera * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetEye )( 
            ISkpCamera * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetDirection )( 
            ISkpCamera * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetUp )( 
            ISkpCamera * This,
            /* [out] */ double pVector3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetCenter )( 
            ISkpCamera * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetTarget )( 
            ISkpCamera * This,
            /* [out] */ double pPoint3d[ 3 ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Eye )( 
            ISkpCamera * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Direction )( 
            ISkpCamera * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Up )( 
            ISkpCamera * This,
            /* [retval][out] */ ISkpVector3d **pVector3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Center )( 
            ISkpCamera * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            ISkpCamera * This,
            /* [retval][out] */ ISkpPoint3d **pPoint3d);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Projection )( 
            ISkpCamera * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NearClip )( 
            ISkpCamera * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FarClip )( 
            ISkpCamera * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldOfView )( 
            ISkpCamera * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            ISkpCamera * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AspectRatio )( 
            ISkpCamera * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ISkpCamera * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldOfViewIsHeight )( 
            ISkpCamera * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageWidth )( 
            ISkpCamera * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Center2D )( 
            ISkpCamera * This,
            /* [out] */ double *x,
            /* [out] */ double *y);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scale2D )( 
            ISkpCamera * This,
            /* [retval][out] */ double *scale);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Camera2D )( 
            ISkpCamera * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } ISkpCameraVtbl;

    interface ISkpCamera
    {
        CONST_VTBL struct ISkpCameraVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpCamera_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpCamera_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpCamera_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpCamera__GetEye(This,pPoint3d)	\
    (This)->lpVtbl -> _GetEye(This,pPoint3d)

#define ISkpCamera__GetDirection(This,pVector3d)	\
    (This)->lpVtbl -> _GetDirection(This,pVector3d)

#define ISkpCamera__GetUp(This,pVector3d)	\
    (This)->lpVtbl -> _GetUp(This,pVector3d)

#define ISkpCamera__GetCenter(This,pPoint3d)	\
    (This)->lpVtbl -> _GetCenter(This,pPoint3d)

#define ISkpCamera__GetTarget(This,pPoint3d)	\
    (This)->lpVtbl -> _GetTarget(This,pPoint3d)

#define ISkpCamera_get_Eye(This,pPoint3d)	\
    (This)->lpVtbl -> get_Eye(This,pPoint3d)

#define ISkpCamera_get_Direction(This,pVector3d)	\
    (This)->lpVtbl -> get_Direction(This,pVector3d)

#define ISkpCamera_get_Up(This,pVector3d)	\
    (This)->lpVtbl -> get_Up(This,pVector3d)

#define ISkpCamera_get_Center(This,pPoint3d)	\
    (This)->lpVtbl -> get_Center(This,pPoint3d)

#define ISkpCamera_get_Target(This,pPoint3d)	\
    (This)->lpVtbl -> get_Target(This,pPoint3d)

#define ISkpCamera_get_Projection(This,pVal)	\
    (This)->lpVtbl -> get_Projection(This,pVal)

#define ISkpCamera_get_NearClip(This,pVal)	\
    (This)->lpVtbl -> get_NearClip(This,pVal)

#define ISkpCamera_get_FarClip(This,pVal)	\
    (This)->lpVtbl -> get_FarClip(This,pVal)

#define ISkpCamera_get_FieldOfView(This,pVal)	\
    (This)->lpVtbl -> get_FieldOfView(This,pVal)

#define ISkpCamera_get_Height(This,pVal)	\
    (This)->lpVtbl -> get_Height(This,pVal)

#define ISkpCamera_get_AspectRatio(This,pVal)	\
    (This)->lpVtbl -> get_AspectRatio(This,pVal)

#define ISkpCamera_get_Description(This,pVal)	\
    (This)->lpVtbl -> get_Description(This,pVal)

#define ISkpCamera_get_FieldOfViewIsHeight(This,pVal)	\
    (This)->lpVtbl -> get_FieldOfViewIsHeight(This,pVal)

#define ISkpCamera_get_ImageWidth(This,pVal)	\
    (This)->lpVtbl -> get_ImageWidth(This,pVal)

#define ISkpCamera_get_Center2D(This,x,y)	\
    (This)->lpVtbl -> get_Center2D(This,x,y)

#define ISkpCamera_get_Scale2D(This,scale)	\
    (This)->lpVtbl -> get_Scale2D(This,scale)

#define ISkpCamera_get_Camera2D(This,pVal)	\
    (This)->lpVtbl -> get_Camera2D(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpCamera__GetEye_Proxy( 
    ISkpCamera * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpCamera__GetEye_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpCamera__GetDirection_Proxy( 
    ISkpCamera * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpCamera__GetDirection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpCamera__GetUp_Proxy( 
    ISkpCamera * This,
    /* [out] */ double pVector3d[ 3 ]);


void __RPC_STUB ISkpCamera__GetUp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpCamera__GetCenter_Proxy( 
    ISkpCamera * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpCamera__GetCenter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpCamera__GetTarget_Proxy( 
    ISkpCamera * This,
    /* [out] */ double pPoint3d[ 3 ]);


void __RPC_STUB ISkpCamera__GetTarget_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_Eye_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpCamera_get_Eye_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_Direction_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpCamera_get_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_Up_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ ISkpVector3d **pVector3d);


void __RPC_STUB ISkpCamera_get_Up_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_Center_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpCamera_get_Center_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_Target_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ ISkpPoint3d **pPoint3d);


void __RPC_STUB ISkpCamera_get_Target_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_Projection_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpCamera_get_Projection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_NearClip_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpCamera_get_NearClip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_FarClip_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpCamera_get_FarClip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_FieldOfView_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpCamera_get_FieldOfView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_Height_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpCamera_get_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_AspectRatio_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpCamera_get_AspectRatio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_Description_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpCamera_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_FieldOfViewIsHeight_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpCamera_get_FieldOfViewIsHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_ImageWidth_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB ISkpCamera_get_ImageWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_Center2D_Proxy( 
    ISkpCamera * This,
    /* [out] */ double *x,
    /* [out] */ double *y);


void __RPC_STUB ISkpCamera_get_Center2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_Scale2D_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ double *scale);


void __RPC_STUB ISkpCamera_get_Scale2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpCamera_get_Camera2D_Proxy( 
    ISkpCamera * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpCamera_get_Camera2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpCamera_INTERFACE_DEFINED__ */


#ifndef __ISkpCameraM_INTERFACE_DEFINED__
#define __ISkpCameraM_INTERFACE_DEFINED__

/* interface ISkpCameraM */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpCameraM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E390B61E-C271-4cb1-9793-2CA57EC19C7B")
    ISkpCameraM : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _SetOrientation( 
            /* [in] */ double eye[ 3 ],
            /* [in] */ double target[ 3 ],
            /* [in] */ double up[ 3 ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetOrientation( 
            /* [in] */ ISkpPoint3d *eye,
            /* [in] */ ISkpPoint3d *target,
            /* [in] */ ISkpVector3d *up) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetCenter( 
            /* [in] */ ISkpPoint3d *pCenter) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _SetCenter( 
            /* [in] */ double center[ 3 ]) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Projection( 
            /* [in] */ long val) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NearClip( 
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FarClip( 
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FieldOfView( 
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AspectRatio( 
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR val) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FieldOfViewIsHeight( 
            /* [in] */ BOOL val) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ImageWidth( 
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Center2D( 
            /* [in] */ double x,
            /* [in] */ double y) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Scale2D( 
            /* [in] */ double scale) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Camera2D( 
            /* [in] */ BOOL pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpCameraMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpCameraM * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpCameraM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpCameraM * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_SetOrientation )( 
            ISkpCameraM * This,
            /* [in] */ double eye[ 3 ],
            /* [in] */ double target[ 3 ],
            /* [in] */ double up[ 3 ]);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOrientation )( 
            ISkpCameraM * This,
            /* [in] */ ISkpPoint3d *eye,
            /* [in] */ ISkpPoint3d *target,
            /* [in] */ ISkpVector3d *up);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetCenter )( 
            ISkpCameraM * This,
            /* [in] */ ISkpPoint3d *pCenter);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_SetCenter )( 
            ISkpCameraM * This,
            /* [in] */ double center[ 3 ]);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Projection )( 
            ISkpCameraM * This,
            /* [in] */ long val);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NearClip )( 
            ISkpCameraM * This,
            /* [in] */ double val);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FarClip )( 
            ISkpCameraM * This,
            /* [in] */ double val);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FieldOfView )( 
            ISkpCameraM * This,
            /* [in] */ double val);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            ISkpCameraM * This,
            /* [in] */ double val);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AspectRatio )( 
            ISkpCameraM * This,
            /* [in] */ double val);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            ISkpCameraM * This,
            /* [in] */ BSTR val);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FieldOfViewIsHeight )( 
            ISkpCameraM * This,
            /* [in] */ BOOL val);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageWidth )( 
            ISkpCameraM * This,
            /* [in] */ double val);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Center2D )( 
            ISkpCameraM * This,
            /* [in] */ double x,
            /* [in] */ double y);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scale2D )( 
            ISkpCameraM * This,
            /* [in] */ double scale);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Camera2D )( 
            ISkpCameraM * This,
            /* [in] */ BOOL pVal);
        
        END_INTERFACE
    } ISkpCameraMVtbl;

    interface ISkpCameraM
    {
        CONST_VTBL struct ISkpCameraMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpCameraM_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpCameraM_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpCameraM_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpCameraM__SetOrientation(This,eye,target,up)	\
    (This)->lpVtbl -> _SetOrientation(This,eye,target,up)

#define ISkpCameraM_SetOrientation(This,eye,target,up)	\
    (This)->lpVtbl -> SetOrientation(This,eye,target,up)

#define ISkpCameraM_SetCenter(This,pCenter)	\
    (This)->lpVtbl -> SetCenter(This,pCenter)

#define ISkpCameraM__SetCenter(This,center)	\
    (This)->lpVtbl -> _SetCenter(This,center)

#define ISkpCameraM_put_Projection(This,val)	\
    (This)->lpVtbl -> put_Projection(This,val)

#define ISkpCameraM_put_NearClip(This,val)	\
    (This)->lpVtbl -> put_NearClip(This,val)

#define ISkpCameraM_put_FarClip(This,val)	\
    (This)->lpVtbl -> put_FarClip(This,val)

#define ISkpCameraM_put_FieldOfView(This,val)	\
    (This)->lpVtbl -> put_FieldOfView(This,val)

#define ISkpCameraM_put_Height(This,val)	\
    (This)->lpVtbl -> put_Height(This,val)

#define ISkpCameraM_put_AspectRatio(This,val)	\
    (This)->lpVtbl -> put_AspectRatio(This,val)

#define ISkpCameraM_put_Description(This,val)	\
    (This)->lpVtbl -> put_Description(This,val)

#define ISkpCameraM_put_FieldOfViewIsHeight(This,val)	\
    (This)->lpVtbl -> put_FieldOfViewIsHeight(This,val)

#define ISkpCameraM_put_ImageWidth(This,val)	\
    (This)->lpVtbl -> put_ImageWidth(This,val)

#define ISkpCameraM_put_Center2D(This,x,y)	\
    (This)->lpVtbl -> put_Center2D(This,x,y)

#define ISkpCameraM_put_Scale2D(This,scale)	\
    (This)->lpVtbl -> put_Scale2D(This,scale)

#define ISkpCameraM_put_Camera2D(This,pVal)	\
    (This)->lpVtbl -> put_Camera2D(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpCameraM__SetOrientation_Proxy( 
    ISkpCameraM * This,
    /* [in] */ double eye[ 3 ],
    /* [in] */ double target[ 3 ],
    /* [in] */ double up[ 3 ]);


void __RPC_STUB ISkpCameraM__SetOrientation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_SetOrientation_Proxy( 
    ISkpCameraM * This,
    /* [in] */ ISkpPoint3d *eye,
    /* [in] */ ISkpPoint3d *target,
    /* [in] */ ISkpVector3d *up);


void __RPC_STUB ISkpCameraM_SetOrientation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_SetCenter_Proxy( 
    ISkpCameraM * This,
    /* [in] */ ISkpPoint3d *pCenter);


void __RPC_STUB ISkpCameraM_SetCenter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpCameraM__SetCenter_Proxy( 
    ISkpCameraM * This,
    /* [in] */ double center[ 3 ]);


void __RPC_STUB ISkpCameraM__SetCenter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_Projection_Proxy( 
    ISkpCameraM * This,
    /* [in] */ long val);


void __RPC_STUB ISkpCameraM_put_Projection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_NearClip_Proxy( 
    ISkpCameraM * This,
    /* [in] */ double val);


void __RPC_STUB ISkpCameraM_put_NearClip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_FarClip_Proxy( 
    ISkpCameraM * This,
    /* [in] */ double val);


void __RPC_STUB ISkpCameraM_put_FarClip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_FieldOfView_Proxy( 
    ISkpCameraM * This,
    /* [in] */ double val);


void __RPC_STUB ISkpCameraM_put_FieldOfView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_Height_Proxy( 
    ISkpCameraM * This,
    /* [in] */ double val);


void __RPC_STUB ISkpCameraM_put_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_AspectRatio_Proxy( 
    ISkpCameraM * This,
    /* [in] */ double val);


void __RPC_STUB ISkpCameraM_put_AspectRatio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_Description_Proxy( 
    ISkpCameraM * This,
    /* [in] */ BSTR val);


void __RPC_STUB ISkpCameraM_put_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_FieldOfViewIsHeight_Proxy( 
    ISkpCameraM * This,
    /* [in] */ BOOL val);


void __RPC_STUB ISkpCameraM_put_FieldOfViewIsHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_ImageWidth_Proxy( 
    ISkpCameraM * This,
    /* [in] */ double val);


void __RPC_STUB ISkpCameraM_put_ImageWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_Center2D_Proxy( 
    ISkpCameraM * This,
    /* [in] */ double x,
    /* [in] */ double y);


void __RPC_STUB ISkpCameraM_put_Center2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_Scale2D_Proxy( 
    ISkpCameraM * This,
    /* [in] */ double scale);


void __RPC_STUB ISkpCameraM_put_Scale2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpCameraM_put_Camera2D_Proxy( 
    ISkpCameraM * This,
    /* [in] */ BOOL pVal);


void __RPC_STUB ISkpCameraM_put_Camera2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpCameraM_INTERFACE_DEFINED__ */


#ifndef __ISkpPage_INTERFACE_DEFINED__
#define __ISkpPage_INTERFACE_DEFINED__

/* interface ISkpPage */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpPage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E4A81C66-9699-44a5-9A10-6394B253E43C")
    ISkpPage : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Camera( 
            /* [retval][out] */ ISkpCamera **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseCamera( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseRenderingOptions( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseShadowInfo( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseSketchCS( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseHidden( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseHiddenLayers( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RenderingOptions( 
            /* [retval][out] */ ISkpOptionsProvider **ppRenderingOptions) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowOptions( 
            /* [retval][out] */ ISkpOptionsProvider **ppShadowOptions) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CoordinateSystem( 
            /* [retval][out] */ ISkpCoordinateSystem **ppCS) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Layers( 
            /* [retval][out] */ ISkpLayers **pLayers) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HiddenEntities( 
            /* [retval][out] */ ISkpEntities **pEntities) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ unsigned long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SketchAxesDisplayed( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Style( 
            /* [retval][out] */ ISkpStyle **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PhotoMatchImageDisplayed( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpPageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpPage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpPage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpPage * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpPage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Camera )( 
            ISkpPage * This,
            /* [retval][out] */ ISkpCamera **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseCamera )( 
            ISkpPage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseRenderingOptions )( 
            ISkpPage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseShadowInfo )( 
            ISkpPage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseSketchCS )( 
            ISkpPage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseHidden )( 
            ISkpPage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseHiddenLayers )( 
            ISkpPage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenderingOptions )( 
            ISkpPage * This,
            /* [retval][out] */ ISkpOptionsProvider **ppRenderingOptions);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowOptions )( 
            ISkpPage * This,
            /* [retval][out] */ ISkpOptionsProvider **ppShadowOptions);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )( 
            ISkpPage * This,
            /* [retval][out] */ ISkpCoordinateSystem **ppCS);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Layers )( 
            ISkpPage * This,
            /* [retval][out] */ ISkpLayers **pLayers);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HiddenEntities )( 
            ISkpPage * This,
            /* [retval][out] */ ISkpEntities **pEntities);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ISkpPage * This,
            /* [retval][out] */ unsigned long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SketchAxesDisplayed )( 
            ISkpPage * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Style )( 
            ISkpPage * This,
            /* [retval][out] */ ISkpStyle **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PhotoMatchImageDisplayed )( 
            ISkpPage * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } ISkpPageVtbl;

    interface ISkpPage
    {
        CONST_VTBL struct ISkpPageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpPage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpPage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpPage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpPage_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISkpPage_get_Camera(This,pVal)	\
    (This)->lpVtbl -> get_Camera(This,pVal)

#define ISkpPage_get_UseCamera(This,pVal)	\
    (This)->lpVtbl -> get_UseCamera(This,pVal)

#define ISkpPage_get_UseRenderingOptions(This,pVal)	\
    (This)->lpVtbl -> get_UseRenderingOptions(This,pVal)

#define ISkpPage_get_UseShadowInfo(This,pVal)	\
    (This)->lpVtbl -> get_UseShadowInfo(This,pVal)

#define ISkpPage_get_UseSketchCS(This,pVal)	\
    (This)->lpVtbl -> get_UseSketchCS(This,pVal)

#define ISkpPage_get_UseHidden(This,pVal)	\
    (This)->lpVtbl -> get_UseHidden(This,pVal)

#define ISkpPage_get_UseHiddenLayers(This,pVal)	\
    (This)->lpVtbl -> get_UseHiddenLayers(This,pVal)

#define ISkpPage_get_RenderingOptions(This,ppRenderingOptions)	\
    (This)->lpVtbl -> get_RenderingOptions(This,ppRenderingOptions)

#define ISkpPage_get_ShadowOptions(This,ppShadowOptions)	\
    (This)->lpVtbl -> get_ShadowOptions(This,ppShadowOptions)

#define ISkpPage_get_CoordinateSystem(This,ppCS)	\
    (This)->lpVtbl -> get_CoordinateSystem(This,ppCS)

#define ISkpPage_get_Layers(This,pLayers)	\
    (This)->lpVtbl -> get_Layers(This,pLayers)

#define ISkpPage_get_HiddenEntities(This,pEntities)	\
    (This)->lpVtbl -> get_HiddenEntities(This,pEntities)

#define ISkpPage_get_Flags(This,pVal)	\
    (This)->lpVtbl -> get_Flags(This,pVal)

#define ISkpPage_get_SketchAxesDisplayed(This,pVal)	\
    (This)->lpVtbl -> get_SketchAxesDisplayed(This,pVal)

#define ISkpPage_get_Style(This,pVal)	\
    (This)->lpVtbl -> get_Style(This,pVal)

#define ISkpPage_get_PhotoMatchImageDisplayed(This,pVal)	\
    (This)->lpVtbl -> get_PhotoMatchImageDisplayed(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_Name_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpPage_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_Camera_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ ISkpCamera **pVal);


void __RPC_STUB ISkpPage_get_Camera_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_UseCamera_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpPage_get_UseCamera_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_UseRenderingOptions_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpPage_get_UseRenderingOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_UseShadowInfo_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpPage_get_UseShadowInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_UseSketchCS_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpPage_get_UseSketchCS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_UseHidden_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpPage_get_UseHidden_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_UseHiddenLayers_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpPage_get_UseHiddenLayers_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_RenderingOptions_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ ISkpOptionsProvider **ppRenderingOptions);


void __RPC_STUB ISkpPage_get_RenderingOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_ShadowOptions_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ ISkpOptionsProvider **ppShadowOptions);


void __RPC_STUB ISkpPage_get_ShadowOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_CoordinateSystem_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ ISkpCoordinateSystem **ppCS);


void __RPC_STUB ISkpPage_get_CoordinateSystem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_Layers_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ ISkpLayers **pLayers);


void __RPC_STUB ISkpPage_get_Layers_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_HiddenEntities_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ ISkpEntities **pEntities);


void __RPC_STUB ISkpPage_get_HiddenEntities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_Flags_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ unsigned long *pVal);


void __RPC_STUB ISkpPage_get_Flags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_SketchAxesDisplayed_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpPage_get_SketchAxesDisplayed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_Style_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ ISkpStyle **pVal);


void __RPC_STUB ISkpPage_get_Style_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPage_get_PhotoMatchImageDisplayed_Proxy( 
    ISkpPage * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpPage_get_PhotoMatchImageDisplayed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpPage_INTERFACE_DEFINED__ */


#ifndef __ISkpPageM_INTERFACE_DEFINED__
#define __ISkpPageM_INTERFACE_DEFINED__

/* interface ISkpPageM */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpPageM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8DF1B3FA-5A0B-4fad-A173-F2E311673AEF")
    ISkpPageM : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AssignFrom( 
            /* [in] */ ISkpPage *page) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Flags( 
            /* [in] */ unsigned long val) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SketchAxesDisplayed( 
            /* [in] */ BOOL val) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearLayers( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddLayer( 
            /* [in] */ ISkpLayer *pLayer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearPhotoMatchImage( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpPageMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpPageM * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpPageM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpPageM * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AssignFrom )( 
            ISkpPageM * This,
            /* [in] */ ISkpPage *page);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ISkpPageM * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Flags )( 
            ISkpPageM * This,
            /* [in] */ unsigned long val);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SketchAxesDisplayed )( 
            ISkpPageM * This,
            /* [in] */ BOOL val);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearLayers )( 
            ISkpPageM * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddLayer )( 
            ISkpPageM * This,
            /* [in] */ ISkpLayer *pLayer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearPhotoMatchImage )( 
            ISkpPageM * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISkpPageM * This);
        
        END_INTERFACE
    } ISkpPageMVtbl;

    interface ISkpPageM
    {
        CONST_VTBL struct ISkpPageMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpPageM_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpPageM_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpPageM_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpPageM_AssignFrom(This,page)	\
    (This)->lpVtbl -> AssignFrom(This,page)

#define ISkpPageM_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define ISkpPageM_put_Flags(This,val)	\
    (This)->lpVtbl -> put_Flags(This,val)

#define ISkpPageM_put_SketchAxesDisplayed(This,val)	\
    (This)->lpVtbl -> put_SketchAxesDisplayed(This,val)

#define ISkpPageM_ClearLayers(This)	\
    (This)->lpVtbl -> ClearLayers(This)

#define ISkpPageM_AddLayer(This,pLayer)	\
    (This)->lpVtbl -> AddLayer(This,pLayer)

#define ISkpPageM_ClearPhotoMatchImage(This)	\
    (This)->lpVtbl -> ClearPhotoMatchImage(This)

#define ISkpPageM_Activate(This)	\
    (This)->lpVtbl -> Activate(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPageM_AssignFrom_Proxy( 
    ISkpPageM * This,
    /* [in] */ ISkpPage *page);


void __RPC_STUB ISkpPageM_AssignFrom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpPageM_put_Name_Proxy( 
    ISkpPageM * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISkpPageM_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpPageM_put_Flags_Proxy( 
    ISkpPageM * This,
    /* [in] */ unsigned long val);


void __RPC_STUB ISkpPageM_put_Flags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpPageM_put_SketchAxesDisplayed_Proxy( 
    ISkpPageM * This,
    /* [in] */ BOOL val);


void __RPC_STUB ISkpPageM_put_SketchAxesDisplayed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPageM_ClearLayers_Proxy( 
    ISkpPageM * This);


void __RPC_STUB ISkpPageM_ClearLayers_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPageM_AddLayer_Proxy( 
    ISkpPageM * This,
    /* [in] */ ISkpLayer *pLayer);


void __RPC_STUB ISkpPageM_AddLayer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPageM_ClearPhotoMatchImage_Proxy( 
    ISkpPageM * This);


void __RPC_STUB ISkpPageM_ClearPhotoMatchImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPageM_Activate_Proxy( 
    ISkpPageM * This);


void __RPC_STUB ISkpPageM_Activate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpPageM_INTERFACE_DEFINED__ */


#ifndef __ISkpPages_INTERFACE_DEFINED__
#define __ISkpPages_INTERFACE_DEFINED__

/* interface ISkpPages */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpPages;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6EDF2146-2D2C-4045-BE56-FB9999D979D5")
    ISkpPages : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpPage **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPageWithName( 
            /* [in] */ BSTR name,
            /* [out] */ ISkpPage **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedPage( 
            /* [retval][out] */ ISkpPage **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpPagesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpPages * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpPages * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpPages * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpPages * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpPages * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpPage **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpPages * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPageWithName )( 
            ISkpPages * This,
            /* [in] */ BSTR name,
            /* [out] */ ISkpPage **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedPage )( 
            ISkpPages * This,
            /* [retval][out] */ ISkpPage **pVal);
        
        END_INTERFACE
    } ISkpPagesVtbl;

    interface ISkpPages
    {
        CONST_VTBL struct ISkpPagesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpPages_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpPages_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpPages_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpPages_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpPages_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpPages_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#define ISkpPages_GetPageWithName(This,name,pVal)	\
    (This)->lpVtbl -> GetPageWithName(This,name,pVal)

#define ISkpPages_get_SelectedPage(This,pVal)	\
    (This)->lpVtbl -> get_SelectedPage(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPages_get_Count_Proxy( 
    ISkpPages * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpPages_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPages_get_Item_Proxy( 
    ISkpPages * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpPage **pVal);


void __RPC_STUB ISkpPages_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpPages_get__NewEnum_Proxy( 
    ISkpPages * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpPages_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPages_GetPageWithName_Proxy( 
    ISkpPages * This,
    /* [in] */ BSTR name,
    /* [out] */ ISkpPage **pVal);


void __RPC_STUB ISkpPages_GetPageWithName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpPages_get_SelectedPage_Proxy( 
    ISkpPages * This,
    /* [retval][out] */ ISkpPage **pVal);


void __RPC_STUB ISkpPages_get_SelectedPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpPages_INTERFACE_DEFINED__ */


#ifndef __ISkpPagesM_INTERFACE_DEFINED__
#define __ISkpPagesM_INTERFACE_DEFINED__

/* interface ISkpPagesM */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpPagesM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1FEF380D-BB08-480b-BC9F-166215629843")
    ISkpPagesM : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddPage( 
            /* [in] */ BSTR newPageName,
            /* [in] */ unsigned long flags,
            /* [in] */ long index) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpPagesMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpPagesM * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpPagesM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpPagesM * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddPage )( 
            ISkpPagesM * This,
            /* [in] */ BSTR newPageName,
            /* [in] */ unsigned long flags,
            /* [in] */ long index);
        
        END_INTERFACE
    } ISkpPagesMVtbl;

    interface ISkpPagesM
    {
        CONST_VTBL struct ISkpPagesMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpPagesM_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpPagesM_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpPagesM_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpPagesM_AddPage(This,newPageName,flags,index)	\
    (This)->lpVtbl -> AddPage(This,newPageName,flags,index)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpPagesM_AddPage_Proxy( 
    ISkpPagesM * This,
    /* [in] */ BSTR newPageName,
    /* [in] */ unsigned long flags,
    /* [in] */ long index);


void __RPC_STUB ISkpPagesM_AddPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpPagesM_INTERFACE_DEFINED__ */


#ifndef __ISkpEntityTransformPair_INTERFACE_DEFINED__
#define __ISkpEntityTransformPair_INTERFACE_DEFINED__

/* interface ISkpEntityTransformPair */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpEntityTransformPair;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44ACF88B-DE77-4c84-BA20-90D05C684416")
    ISkpEntityTransformPair : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Entity( 
            /* [retval][out] */ ISkpEntity **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Transform( 
            /* [retval][out] */ ISkpTransform **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpEntityTransformPairVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpEntityTransformPair * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpEntityTransformPair * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpEntityTransformPair * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Entity )( 
            ISkpEntityTransformPair * This,
            /* [retval][out] */ ISkpEntity **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transform )( 
            ISkpEntityTransformPair * This,
            /* [retval][out] */ ISkpTransform **pVal);
        
        END_INTERFACE
    } ISkpEntityTransformPairVtbl;

    interface ISkpEntityTransformPair
    {
        CONST_VTBL struct ISkpEntityTransformPairVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpEntityTransformPair_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpEntityTransformPair_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpEntityTransformPair_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpEntityTransformPair_get_Entity(This,pVal)	\
    (This)->lpVtbl -> get_Entity(This,pVal)

#define ISkpEntityTransformPair_get_Transform(This,pVal)	\
    (This)->lpVtbl -> get_Transform(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityTransformPair_get_Entity_Proxy( 
    ISkpEntityTransformPair * This,
    /* [retval][out] */ ISkpEntity **pVal);


void __RPC_STUB ISkpEntityTransformPair_get_Entity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityTransformPair_get_Transform_Proxy( 
    ISkpEntityTransformPair * This,
    /* [retval][out] */ ISkpTransform **pVal);


void __RPC_STUB ISkpEntityTransformPair_get_Transform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpEntityTransformPair_INTERFACE_DEFINED__ */


#ifndef __ISkpEntityTransformPairs_INTERFACE_DEFINED__
#define __ISkpEntityTransformPairs_INTERFACE_DEFINED__

/* interface ISkpEntityTransformPairs */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpEntityTransformPairs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4648DE5B-1584-4748-8F82-FAEDDAF0158F")
    ISkpEntityTransformPairs : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpEntityTransformPair **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpEntityTransformPairsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpEntityTransformPairs * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpEntityTransformPairs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpEntityTransformPairs * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpEntityTransformPairs * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpEntityTransformPairs * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpEntityTransformPair **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpEntityTransformPairs * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpEntityTransformPairsVtbl;

    interface ISkpEntityTransformPairs
    {
        CONST_VTBL struct ISkpEntityTransformPairsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpEntityTransformPairs_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpEntityTransformPairs_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpEntityTransformPairs_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpEntityTransformPairs_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpEntityTransformPairs_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpEntityTransformPairs_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityTransformPairs_get_Count_Proxy( 
    ISkpEntityTransformPairs * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpEntityTransformPairs_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityTransformPairs_get_Item_Proxy( 
    ISkpEntityTransformPairs * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpEntityTransformPair **pVal);


void __RPC_STUB ISkpEntityTransformPairs_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityTransformPairs_get__NewEnum_Proxy( 
    ISkpEntityTransformPairs * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpEntityTransformPairs_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpEntityTransformPairs_INTERFACE_DEFINED__ */


#ifndef __ISkpOpening_INTERFACE_DEFINED__
#define __ISkpOpening_INTERFACE_DEFINED__

/* interface ISkpOpening */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpOpening;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("90EAE5C7-BC47-4b38-9301-11CC2F389F6C")
    ISkpOpening : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PointCount( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE _GetPoints( 
            /* [in] */ long pointCount,
            /* [size_is][out] */ double pPoints[  ]) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Point( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpPoint3d **pPoint) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VertexNormal( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpVector3d **pNormal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ComponentInstance( 
            /* [retval][out] */ ISkpComponentInstance **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpOpeningVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpOpening * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpOpening * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpOpening * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PointCount )( 
            ISkpOpening * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *_GetPoints )( 
            ISkpOpening * This,
            /* [in] */ long pointCount,
            /* [size_is][out] */ double pPoints[  ]);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Point )( 
            ISkpOpening * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpPoint3d **pPoint);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VertexNormal )( 
            ISkpOpening * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpVector3d **pNormal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentInstance )( 
            ISkpOpening * This,
            /* [retval][out] */ ISkpComponentInstance **pVal);
        
        END_INTERFACE
    } ISkpOpeningVtbl;

    interface ISkpOpening
    {
        CONST_VTBL struct ISkpOpeningVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpOpening_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpOpening_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpOpening_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpOpening_get_PointCount(This,pVal)	\
    (This)->lpVtbl -> get_PointCount(This,pVal)

#define ISkpOpening__GetPoints(This,pointCount,pPoints)	\
    (This)->lpVtbl -> _GetPoints(This,pointCount,pPoints)

#define ISkpOpening_get_Point(This,nIndex,pPoint)	\
    (This)->lpVtbl -> get_Point(This,nIndex,pPoint)

#define ISkpOpening_get_VertexNormal(This,nIndex,pNormal)	\
    (This)->lpVtbl -> get_VertexNormal(This,nIndex,pNormal)

#define ISkpOpening_get_ComponentInstance(This,pVal)	\
    (This)->lpVtbl -> get_ComponentInstance(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpOpening_get_PointCount_Proxy( 
    ISkpOpening * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpOpening_get_PointCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpOpening__GetPoints_Proxy( 
    ISkpOpening * This,
    /* [in] */ long pointCount,
    /* [size_is][out] */ double pPoints[  ]);


void __RPC_STUB ISkpOpening__GetPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpOpening_get_Point_Proxy( 
    ISkpOpening * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ISkpPoint3d **pPoint);


void __RPC_STUB ISkpOpening_get_Point_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpOpening_get_VertexNormal_Proxy( 
    ISkpOpening * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ISkpVector3d **pNormal);


void __RPC_STUB ISkpOpening_get_VertexNormal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpOpening_get_ComponentInstance_Proxy( 
    ISkpOpening * This,
    /* [retval][out] */ ISkpComponentInstance **pVal);


void __RPC_STUB ISkpOpening_get_ComponentInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpOpening_INTERFACE_DEFINED__ */


#ifndef __ISkpOpenings_INTERFACE_DEFINED__
#define __ISkpOpenings_INTERFACE_DEFINED__

/* interface ISkpOpenings */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpOpenings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C8FB2F03-FE52-4716-B260-C372C4B5C002")
    ISkpOpenings : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpOpening **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpOpeningsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpOpenings * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpOpenings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpOpenings * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpOpenings * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpOpenings * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpOpening **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpOpenings * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpOpeningsVtbl;

    interface ISkpOpenings
    {
        CONST_VTBL struct ISkpOpeningsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpOpenings_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpOpenings_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpOpenings_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpOpenings_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpOpenings_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpOpenings_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpOpenings_get_Count_Proxy( 
    ISkpOpenings * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpOpenings_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpOpenings_get_Item_Proxy( 
    ISkpOpenings * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpOpening **pVal);


void __RPC_STUB ISkpOpenings_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpOpenings_get__NewEnum_Proxy( 
    ISkpOpenings * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpOpenings_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpOpenings_INTERFACE_DEFINED__ */


#ifndef __ISkpSelectionSet_INTERFACE_DEFINED__
#define __ISkpSelectionSet_INTERFACE_DEFINED__

/* interface ISkpSelectionSet */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpSelectionSet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6ABECF30-A0D8-4369-BB1F-94ABD0FD20C4")
    ISkpSelectionSet : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpEntity **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Contains( 
            /* [in] */ ISkpEntity *pEntity,
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpSelectionSetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpSelectionSet * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpSelectionSet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpSelectionSet * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpSelectionSet * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ISkpEntity **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpSelectionSet * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Contains )( 
            ISkpSelectionSet * This,
            /* [in] */ ISkpEntity *pEntity,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpSelectionSet * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpSelectionSetVtbl;

    interface ISkpSelectionSet
    {
        CONST_VTBL struct ISkpSelectionSetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpSelectionSet_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpSelectionSet_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpSelectionSet_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpSelectionSet_get_Item(This,nIndex,pVal)	\
    (This)->lpVtbl -> get_Item(This,nIndex,pVal)

#define ISkpSelectionSet_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpSelectionSet_Contains(This,pEntity,pVal)	\
    (This)->lpVtbl -> Contains(This,pEntity,pVal)

#define ISkpSelectionSet_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpSelectionSet_get_Item_Proxy( 
    ISkpSelectionSet * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ISkpEntity **pVal);


void __RPC_STUB ISkpSelectionSet_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpSelectionSet_get_Count_Proxy( 
    ISkpSelectionSet * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpSelectionSet_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpSelectionSet_Contains_Proxy( 
    ISkpSelectionSet * This,
    /* [in] */ ISkpEntity *pEntity,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpSelectionSet_Contains_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpSelectionSet_get__NewEnum_Proxy( 
    ISkpSelectionSet * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpSelectionSet_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpSelectionSet_INTERFACE_DEFINED__ */


#ifndef __ISkpSectionPlane_INTERFACE_DEFINED__
#define __ISkpSectionPlane_INTERFACE_DEFINED__

/* interface ISkpSectionPlane */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpSectionPlane;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22B29B28-69BB-49be-92BA-8D2509EA8C3A")
    ISkpSectionPlane : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Plane( 
            /* [retval][out] */ ISkpPlane **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpSectionPlaneVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpSectionPlane * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpSectionPlane * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpSectionPlane * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Plane )( 
            ISkpSectionPlane * This,
            /* [retval][out] */ ISkpPlane **pVal);
        
        END_INTERFACE
    } ISkpSectionPlaneVtbl;

    interface ISkpSectionPlane
    {
        CONST_VTBL struct ISkpSectionPlaneVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpSectionPlane_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpSectionPlane_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpSectionPlane_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpSectionPlane_get_Plane(This,pVal)	\
    (This)->lpVtbl -> get_Plane(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpSectionPlane_get_Plane_Proxy( 
    ISkpSectionPlane * This,
    /* [retval][out] */ ISkpPlane **pVal);


void __RPC_STUB ISkpSectionPlane_get_Plane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpSectionPlane_INTERFACE_DEFINED__ */


#ifndef __ISkpSectionPlanes_INTERFACE_DEFINED__
#define __ISkpSectionPlanes_INTERFACE_DEFINED__

/* interface ISkpSectionPlanes */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpSectionPlanes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B27CB66-EE1B-4ed8-9898-F0DA064FAB30")
    ISkpSectionPlanes : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpSectionPlane **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpSectionPlanesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpSectionPlanes * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpSectionPlanes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpSectionPlanes * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpSectionPlanes * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpSectionPlane **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpSectionPlanes * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpSectionPlanes * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpSectionPlanesVtbl;

    interface ISkpSectionPlanes
    {
        CONST_VTBL struct ISkpSectionPlanesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpSectionPlanes_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpSectionPlanes_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpSectionPlanes_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpSectionPlanes_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpSectionPlanes_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpSectionPlanes_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpSectionPlanes_get_Item_Proxy( 
    ISkpSectionPlanes * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpSectionPlane **pVal);


void __RPC_STUB ISkpSectionPlanes_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpSectionPlanes_get_Count_Proxy( 
    ISkpSectionPlanes * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpSectionPlanes_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpSectionPlanes_get__NewEnum_Proxy( 
    ISkpSectionPlanes * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpSectionPlanes_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpSectionPlanes_INTERFACE_DEFINED__ */


#ifndef __ISkpEntityProviderStatistics_INTERFACE_DEFINED__
#define __ISkpEntityProviderStatistics_INTERFACE_DEFINED__

/* interface ISkpEntityProviderStatistics */
/* [unique][helpstring][uuid][object] */ 

typedef /* [public][public][public][v1_enum] */ 
enum __MIDL_ISkpEntityProviderStatistics_0001
    {	statEdge	= 0,
	statFace	= 1,
	statComponentInstance	= 2,
	statConstructionLine	= 3,
	statConstructionPoint	= 4,
	statGroup	= 5,
	statImage	= 6,
	statCurve	= 7,
	statSection	= 8,
	statDimension	= 9,
	statText	= 10,
	statComponentDefinition	= 11
    } 	StatisticsType;


EXTERN_C const IID IID_ISkpEntityProviderStatistics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b294b3ba-7043-4714-bc7f-3f1f4fca6947")
    ISkpEntityProviderStatistics : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfTypes( 
            /* [retval][out] */ long *pNumTypes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeName( 
            /* [in] */ StatisticsType typeIndex,
            /* [retval][out] */ BSTR *pTypeName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [in] */ StatisticsType typeIndex,
            /* [in] */ BOOL bIncludeInstances,
            /* [retval][out] */ long *pCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpEntityProviderStatisticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpEntityProviderStatistics * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpEntityProviderStatistics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpEntityProviderStatistics * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfTypes )( 
            ISkpEntityProviderStatistics * This,
            /* [retval][out] */ long *pNumTypes);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            ISkpEntityProviderStatistics * This,
            /* [in] */ StatisticsType typeIndex,
            /* [retval][out] */ BSTR *pTypeName);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            ISkpEntityProviderStatistics * This,
            /* [in] */ StatisticsType typeIndex,
            /* [in] */ BOOL bIncludeInstances,
            /* [retval][out] */ long *pCount);
        
        END_INTERFACE
    } ISkpEntityProviderStatisticsVtbl;

    interface ISkpEntityProviderStatistics
    {
        CONST_VTBL struct ISkpEntityProviderStatisticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpEntityProviderStatistics_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpEntityProviderStatistics_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpEntityProviderStatistics_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpEntityProviderStatistics_get_NumberOfTypes(This,pNumTypes)	\
    (This)->lpVtbl -> get_NumberOfTypes(This,pNumTypes)

#define ISkpEntityProviderStatistics_GetTypeName(This,typeIndex,pTypeName)	\
    (This)->lpVtbl -> GetTypeName(This,typeIndex,pTypeName)

#define ISkpEntityProviderStatistics_GetCount(This,typeIndex,bIncludeInstances,pCount)	\
    (This)->lpVtbl -> GetCount(This,typeIndex,bIncludeInstances,pCount)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISkpEntityProviderStatistics_get_NumberOfTypes_Proxy( 
    ISkpEntityProviderStatistics * This,
    /* [retval][out] */ long *pNumTypes);


void __RPC_STUB ISkpEntityProviderStatistics_get_NumberOfTypes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpEntityProviderStatistics_GetTypeName_Proxy( 
    ISkpEntityProviderStatistics * This,
    /* [in] */ StatisticsType typeIndex,
    /* [retval][out] */ BSTR *pTypeName);


void __RPC_STUB ISkpEntityProviderStatistics_GetTypeName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISkpEntityProviderStatistics_GetCount_Proxy( 
    ISkpEntityProviderStatistics * This,
    /* [in] */ StatisticsType typeIndex,
    /* [in] */ BOOL bIncludeInstances,
    /* [retval][out] */ long *pCount);


void __RPC_STUB ISkpEntityProviderStatistics_GetCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpEntityProviderStatistics_INTERFACE_DEFINED__ */


#ifndef __ISkpStyleManager_INTERFACE_DEFINED__
#define __ISkpStyleManager_INTERFACE_DEFINED__

/* interface ISkpStyleManager */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpStyleManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("351E3A4E-E919-43eb-A17C-C01376DB2EC9")
    ISkpStyleManager : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Styles( 
            /* [retval][out] */ ISkpStyles **ppStyles) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveStyle( 
            /* [retval][out] */ ISkpStyle **ppStyle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedStyle( 
            /* [retval][out] */ ISkpStyle **ppStyle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StyleByGuid( 
            /* [in] */ BSTR guid,
            /* [retval][out] */ ISkpStyle **ppStyle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StyleByPath( 
            /* [in] */ BSTR path,
            /* [retval][out] */ ISkpStyle **ppStyle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveStyle( 
            /* [in] */ BSTR path,
            /* [in] */ ISkpStyle *pStyle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveStyleChanged( 
            /* [retval][out] */ BOOL *pChanged) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpStyleManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpStyleManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpStyleManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpStyleManager * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Styles )( 
            ISkpStyleManager * This,
            /* [retval][out] */ ISkpStyles **ppStyles);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveStyle )( 
            ISkpStyleManager * This,
            /* [retval][out] */ ISkpStyle **ppStyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedStyle )( 
            ISkpStyleManager * This,
            /* [retval][out] */ ISkpStyle **ppStyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StyleByGuid )( 
            ISkpStyleManager * This,
            /* [in] */ BSTR guid,
            /* [retval][out] */ ISkpStyle **ppStyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StyleByPath )( 
            ISkpStyleManager * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ ISkpStyle **ppStyle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveStyle )( 
            ISkpStyleManager * This,
            /* [in] */ BSTR path,
            /* [in] */ ISkpStyle *pStyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveStyleChanged )( 
            ISkpStyleManager * This,
            /* [retval][out] */ BOOL *pChanged);
        
        END_INTERFACE
    } ISkpStyleManagerVtbl;

    interface ISkpStyleManager
    {
        CONST_VTBL struct ISkpStyleManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpStyleManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpStyleManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpStyleManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpStyleManager_get_Styles(This,ppStyles)	\
    (This)->lpVtbl -> get_Styles(This,ppStyles)

#define ISkpStyleManager_get_ActiveStyle(This,ppStyle)	\
    (This)->lpVtbl -> get_ActiveStyle(This,ppStyle)

#define ISkpStyleManager_get_SelectedStyle(This,ppStyle)	\
    (This)->lpVtbl -> get_SelectedStyle(This,ppStyle)

#define ISkpStyleManager_get_StyleByGuid(This,guid,ppStyle)	\
    (This)->lpVtbl -> get_StyleByGuid(This,guid,ppStyle)

#define ISkpStyleManager_get_StyleByPath(This,path,ppStyle)	\
    (This)->lpVtbl -> get_StyleByPath(This,path,ppStyle)

#define ISkpStyleManager_SaveStyle(This,path,pStyle)	\
    (This)->lpVtbl -> SaveStyle(This,path,pStyle)

#define ISkpStyleManager_get_ActiveStyleChanged(This,pChanged)	\
    (This)->lpVtbl -> get_ActiveStyleChanged(This,pChanged)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyleManager_get_Styles_Proxy( 
    ISkpStyleManager * This,
    /* [retval][out] */ ISkpStyles **ppStyles);


void __RPC_STUB ISkpStyleManager_get_Styles_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyleManager_get_ActiveStyle_Proxy( 
    ISkpStyleManager * This,
    /* [retval][out] */ ISkpStyle **ppStyle);


void __RPC_STUB ISkpStyleManager_get_ActiveStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyleManager_get_SelectedStyle_Proxy( 
    ISkpStyleManager * This,
    /* [retval][out] */ ISkpStyle **ppStyle);


void __RPC_STUB ISkpStyleManager_get_SelectedStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyleManager_get_StyleByGuid_Proxy( 
    ISkpStyleManager * This,
    /* [in] */ BSTR guid,
    /* [retval][out] */ ISkpStyle **ppStyle);


void __RPC_STUB ISkpStyleManager_get_StyleByGuid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyleManager_get_StyleByPath_Proxy( 
    ISkpStyleManager * This,
    /* [in] */ BSTR path,
    /* [retval][out] */ ISkpStyle **ppStyle);


void __RPC_STUB ISkpStyleManager_get_StyleByPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpStyleManager_SaveStyle_Proxy( 
    ISkpStyleManager * This,
    /* [in] */ BSTR path,
    /* [in] */ ISkpStyle *pStyle);


void __RPC_STUB ISkpStyleManager_SaveStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyleManager_get_ActiveStyleChanged_Proxy( 
    ISkpStyleManager * This,
    /* [retval][out] */ BOOL *pChanged);


void __RPC_STUB ISkpStyleManager_get_ActiveStyleChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpStyleManager_INTERFACE_DEFINED__ */


#ifndef __ISkpStyleManagerM_INTERFACE_DEFINED__
#define __ISkpStyleManagerM_INTERFACE_DEFINED__

/* interface ISkpStyleManagerM */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpStyleManagerM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91CC81C5-3060-4e42-B119-FBF6485C5E2B")
    ISkpStyleManagerM : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddStyle( 
            /* [in] */ ISkpStyle *pStyle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ApplyStyleToPage( 
            /* [in] */ ISkpStyle *pStyle,
            /* [in] */ ISkpPage *pSkpPage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpStyleManagerMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpStyleManagerM * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpStyleManagerM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpStyleManagerM * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddStyle )( 
            ISkpStyleManagerM * This,
            /* [in] */ ISkpStyle *pStyle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ApplyStyleToPage )( 
            ISkpStyleManagerM * This,
            /* [in] */ ISkpStyle *pStyle,
            /* [in] */ ISkpPage *pSkpPage);
        
        END_INTERFACE
    } ISkpStyleManagerMVtbl;

    interface ISkpStyleManagerM
    {
        CONST_VTBL struct ISkpStyleManagerMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpStyleManagerM_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpStyleManagerM_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpStyleManagerM_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpStyleManagerM_AddStyle(This,pStyle)	\
    (This)->lpVtbl -> AddStyle(This,pStyle)

#define ISkpStyleManagerM_ApplyStyleToPage(This,pStyle,pSkpPage)	\
    (This)->lpVtbl -> ApplyStyleToPage(This,pStyle,pSkpPage)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpStyleManagerM_AddStyle_Proxy( 
    ISkpStyleManagerM * This,
    /* [in] */ ISkpStyle *pStyle);


void __RPC_STUB ISkpStyleManagerM_AddStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISkpStyleManagerM_ApplyStyleToPage_Proxy( 
    ISkpStyleManagerM * This,
    /* [in] */ ISkpStyle *pStyle,
    /* [in] */ ISkpPage *pSkpPage);


void __RPC_STUB ISkpStyleManagerM_ApplyStyleToPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpStyleManagerM_INTERFACE_DEFINED__ */


#ifndef __ISkpStyle_INTERFACE_DEFINED__
#define __ISkpStyle_INTERFACE_DEFINED__

/* interface ISkpStyle */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpStyle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cedef8d7-a41b-4964-8b3d-d6c010bdff9e")
    ISkpStyle : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pDesc) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *pPath) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Guid( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DisplaysWatermark( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpStyleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpStyle * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpStyle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpStyle * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISkpStyle * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            ISkpStyle * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ISkpStyle * This,
            /* [retval][out] */ BSTR *pDesc);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            ISkpStyle * This,
            /* [retval][out] */ BSTR *pPath);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Guid )( 
            ISkpStyle * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplaysWatermark )( 
            ISkpStyle * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } ISkpStyleVtbl;

    interface ISkpStyle
    {
        CONST_VTBL struct ISkpStyleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpStyle_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpStyle_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpStyle_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpStyle_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define ISkpStyle_get_DisplayName(This,pVal)	\
    (This)->lpVtbl -> get_DisplayName(This,pVal)

#define ISkpStyle_get_Description(This,pDesc)	\
    (This)->lpVtbl -> get_Description(This,pDesc)

#define ISkpStyle_get_Path(This,pPath)	\
    (This)->lpVtbl -> get_Path(This,pPath)

#define ISkpStyle_get_Guid(This,pVal)	\
    (This)->lpVtbl -> get_Guid(This,pVal)

#define ISkpStyle_get_DisplaysWatermark(This,pVal)	\
    (This)->lpVtbl -> get_DisplaysWatermark(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyle_get_Name_Proxy( 
    ISkpStyle * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpStyle_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyle_get_DisplayName_Proxy( 
    ISkpStyle * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpStyle_get_DisplayName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyle_get_Description_Proxy( 
    ISkpStyle * This,
    /* [retval][out] */ BSTR *pDesc);


void __RPC_STUB ISkpStyle_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyle_get_Path_Proxy( 
    ISkpStyle * This,
    /* [retval][out] */ BSTR *pPath);


void __RPC_STUB ISkpStyle_get_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyle_get_Guid_Proxy( 
    ISkpStyle * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISkpStyle_get_Guid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyle_get_DisplaysWatermark_Proxy( 
    ISkpStyle * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB ISkpStyle_get_DisplaysWatermark_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpStyle_INTERFACE_DEFINED__ */


#ifndef __ISkpStyleM_INTERFACE_DEFINED__
#define __ISkpStyleM_INTERFACE_DEFINED__

/* interface ISkpStyleM */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpStyleM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D8B976E3-7D3B-4938-A9AB-7154666261C0")
    ISkpStyleM : public IUnknown
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR str) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Guid( 
            /* [in] */ BSTR str) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpStyleMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpStyleM * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpStyleM * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpStyleM * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ISkpStyleM * This,
            /* [in] */ BSTR str);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Guid )( 
            ISkpStyleM * This,
            /* [in] */ BSTR str);
        
        END_INTERFACE
    } ISkpStyleMVtbl;

    interface ISkpStyleM
    {
        CONST_VTBL struct ISkpStyleMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpStyleM_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpStyleM_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpStyleM_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpStyleM_put_Name(This,str)	\
    (This)->lpVtbl -> put_Name(This,str)

#define ISkpStyleM_put_Guid(This,str)	\
    (This)->lpVtbl -> put_Guid(This,str)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpStyleM_put_Name_Proxy( 
    ISkpStyleM * This,
    /* [in] */ BSTR str);


void __RPC_STUB ISkpStyleM_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE ISkpStyleM_put_Guid_Proxy( 
    ISkpStyleM * This,
    /* [in] */ BSTR str);


void __RPC_STUB ISkpStyleM_put_Guid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpStyleM_INTERFACE_DEFINED__ */


#ifndef __ISkpStyles_INTERFACE_DEFINED__
#define __ISkpStyles_INTERFACE_DEFINED__

/* interface ISkpStyles */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISkpStyles;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36C97FB6-D9CC-4faf-BBE2-D579B699DFAB")
    ISkpStyles : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ ISkpStyle **pVal) = 0;
        
        virtual /* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **enumeration) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISkpStylesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISkpStyles * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISkpStyles * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISkpStyles * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISkpStyles * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISkpStyles * This,
            /* [in] */ long Index,
            /* [retval][out] */ ISkpStyle **pVal);
        
        /* [helpstring][id][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISkpStyles * This,
            /* [retval][out] */ IUnknown **enumeration);
        
        END_INTERFACE
    } ISkpStylesVtbl;

    interface ISkpStyles
    {
        CONST_VTBL struct ISkpStylesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISkpStyles_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISkpStyles_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISkpStyles_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISkpStyles_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define ISkpStyles_get_Item(This,Index,pVal)	\
    (This)->lpVtbl -> get_Item(This,Index,pVal)

#define ISkpStyles_get__NewEnum(This,enumeration)	\
    (This)->lpVtbl -> get__NewEnum(This,enumeration)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyles_get_Count_Proxy( 
    ISkpStyles * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISkpStyles_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyles_get_Item_Proxy( 
    ISkpStyles * This,
    /* [in] */ long Index,
    /* [retval][out] */ ISkpStyle **pVal);


void __RPC_STUB ISkpStyles_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][restricted][propget] */ HRESULT STDMETHODCALLTYPE ISkpStyles_get__NewEnum_Proxy( 
    ISkpStyles * This,
    /* [retval][out] */ IUnknown **enumeration);


void __RPC_STUB ISkpStyles_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISkpStyles_INTERFACE_DEFINED__ */



#ifndef __SketchUp_LIBRARY_DEFINED__
#define __SketchUp_LIBRARY_DEFINED__

/* library SketchUp */
/* [helpstring][version][uuid] */ 




























































































EXTERN_C const IID LIBID_SketchUp;

EXTERN_C const CLSID CLSID_SkpCurve;

#ifdef __cplusplus

class DECLSPEC_UUID("F14F48BC-A565-4c4a-B89D-B937A7C3F92F")
SkpCurve;
#endif

EXTERN_C const CLSID CLSID_SkpArcCurve;

#ifdef __cplusplus

class DECLSPEC_UUID("B3DB0982-7499-4da9-A2E2-5C8CDF83A03E")
SkpArcCurve;
#endif

EXTERN_C const CLSID CLSID_SkpLineCurve;

#ifdef __cplusplus

class DECLSPEC_UUID("4A1AB8BE-7F80-4cd5-B45A-B647C01BCBD5")
SkpLineCurve;
#endif

EXTERN_C const CLSID CLSID_SkpBoundingBox3d;

#ifdef __cplusplus

class DECLSPEC_UUID("49AD9805-4DE2-46b7-B10B-543D37E8E34C")
SkpBoundingBox3d;
#endif

EXTERN_C const CLSID CLSID_SkpDimensions;

#ifdef __cplusplus

class DECLSPEC_UUID("7860E6D1-C06A-409c-ACBC-7A028C89BEE8")
SkpDimensions;
#endif

EXTERN_C const CLSID CLSID_SkpDimensionStyle;

#ifdef __cplusplus

class DECLSPEC_UUID("14BB888F-6B45-4c84-885C-6D9C81C0431C")
SkpDimensionStyle;
#endif

EXTERN_C const CLSID CLSID_SkpDimensionRadial;

#ifdef __cplusplus

class DECLSPEC_UUID("68A7A031-0A69-434d-9D76-2A9EF6DD2E95")
SkpDimensionRadial;
#endif

EXTERN_C const CLSID CLSID_SkpDimensionLinear;

#ifdef __cplusplus

class DECLSPEC_UUID("2A964D77-D81E-4d1b-84A8-8F4703237A8B")
SkpDimensionLinear;
#endif

EXTERN_C const CLSID CLSID_SkpFont;

#ifdef __cplusplus

class DECLSPEC_UUID("654DE6F5-EF09-4ab1-8B13-58EA07E91AE2")
SkpFont;
#endif

EXTERN_C const CLSID CLSID_SkpFonts;

#ifdef __cplusplus

class DECLSPEC_UUID("8DBA2A17-8693-41b4-950F-35AA18BC9E6E")
SkpFonts;
#endif

EXTERN_C const CLSID CLSID_SkpView;

#ifdef __cplusplus

class DECLSPEC_UUID("AFD3FC6D-518B-4783-AA70-4F71A1B20DC5")
SkpView;
#endif

EXTERN_C const CLSID CLSID_SkpText;

#ifdef __cplusplus

class DECLSPEC_UUID("2F890771-B9CB-4428-9C66-8C8A3557A217")
SkpText;
#endif

EXTERN_C const CLSID CLSID_SkpTexts;

#ifdef __cplusplus

class DECLSPEC_UUID("BF6E4AE8-A322-4602-833F-C39D25630538")
SkpTexts;
#endif

EXTERN_C const CLSID CLSID_SkpOptionsManager;

#ifdef __cplusplus

class DECLSPEC_UUID("27BB57D5-F11E-4eb5-B39A-C9DB40023B48")
SkpOptionsManager;
#endif

EXTERN_C const CLSID CLSID_SkpOptionsProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("9D16F3A7-3A4F-4036-A422-E70DC31D5A38")
SkpOptionsProvider;
#endif

EXTERN_C const CLSID CLSID_SkpFaceTextureCoordsAttribute;

#ifdef __cplusplus

class DECLSPEC_UUID("DD8A0680-D541-4557-A265-6FAA2EC51A87")
SkpFaceTextureCoordsAttribute;
#endif

EXTERN_C const CLSID CLSID_SkpAttributeDictionary;

#ifdef __cplusplus

class DECLSPEC_UUID("E60D14BB-2B0A-4d00-A82A-5584273629F9")
SkpAttributeDictionary;
#endif

EXTERN_C const CLSID CLSID_SkpAttribute;

#ifdef __cplusplus

class DECLSPEC_UUID("CACB1EA7-619B-4209-B308-BDFCF086DAF7")
SkpAttribute;
#endif

EXTERN_C const CLSID CLSID_SkpAttributes;

#ifdef __cplusplus

class DECLSPEC_UUID("0ADF95E1-BA0D-4588-B0F4-9FD3EF8DB5F4")
SkpAttributes;
#endif

EXTERN_C const CLSID CLSID_SkpPlane;

#ifdef __cplusplus

class DECLSPEC_UUID("41F635F4-FFAC-4f67-9E3E-3223816767F1")
SkpPlane;
#endif

EXTERN_C const CLSID CLSID_SkpNamedValue;

#ifdef __cplusplus

class DECLSPEC_UUID("A6202410-06BB-4dcd-B575-14B2C4476E1C")
SkpNamedValue;
#endif

EXTERN_C const CLSID CLSID_SkpEntities;

#ifdef __cplusplus

class DECLSPEC_UUID("AD6339AA-D127-47e4-A0A6-8AFB2B8D79E9")
SkpEntities;
#endif

EXTERN_C const CLSID CLSID_SkpPolygonMesh;

#ifdef __cplusplus

class DECLSPEC_UUID("051594E4-D5C2-4988-BBE2-01E23DA53E50")
SkpPolygonMesh;
#endif

EXTERN_C const CLSID CLSID_SkpFace;

#ifdef __cplusplus

class DECLSPEC_UUID("3AC00E24-2B2F-4368-95C0-9FFA0F305AFD")
SkpFace;
#endif

EXTERN_C const CLSID CLSID_SkpFaces;

#ifdef __cplusplus

class DECLSPEC_UUID("2CCE567F-25AD-4523-9F79-6A42A76F7403")
SkpFaces;
#endif

EXTERN_C const CLSID CLSID_SkpTextureWriter;

#ifdef __cplusplus

class DECLSPEC_UUID("7915DD58-5887-4cf5-A802-6A517665E535")
SkpTextureWriter;
#endif

EXTERN_C const CLSID CLSID_SkpApplication;

#ifdef __cplusplus

class DECLSPEC_UUID("FCD8BDD9-F12C-4646-9829-5387D844C5E1")
SkpApplication;
#endif

EXTERN_C const CLSID CLSID_SkpDocument;

#ifdef __cplusplus

class DECLSPEC_UUID("27E7D638-4E08-4c2c-8BD0-2DE34BC896EA")
SkpDocument;
#endif

EXTERN_C const CLSID CLSID_SkpEdge;

#ifdef __cplusplus

class DECLSPEC_UUID("D434F6F4-D7F8-42d7-9F63-B2AA4D609E50")
SkpEdge;
#endif

EXTERN_C const CLSID CLSID_SkpEdges;

#ifdef __cplusplus

class DECLSPEC_UUID("13F82ADC-269F-4d7e-89C4-508786C3B8CB")
SkpEdges;
#endif

EXTERN_C const CLSID CLSID_SkpNamedValues;

#ifdef __cplusplus

class DECLSPEC_UUID("CD2F8CCA-8B04-4567-B152-48C3B12D2768")
SkpNamedValues;
#endif

EXTERN_C const CLSID CLSID_SkpVertex;

#ifdef __cplusplus

class DECLSPEC_UUID("48A28EA9-844F-4260-8BC1-EEFA394E9DB4")
SkpVertex;
#endif

EXTERN_C const CLSID CLSID_SkpVertices;

#ifdef __cplusplus

class DECLSPEC_UUID("2B9FB964-B154-4969-B356-F5E3CF81EFDC")
SkpVertices;
#endif

EXTERN_C const CLSID CLSID_SkpLayer;

#ifdef __cplusplus

class DECLSPEC_UUID("3A62EB90-9625-4f3e-AFC6-A4DFC3D11A5E")
SkpLayer;
#endif

EXTERN_C const CLSID CLSID_SkpLayers;

#ifdef __cplusplus

class DECLSPEC_UUID("35E1EF8A-CD0D-490a-B493-A78841D79290")
SkpLayers;
#endif

EXTERN_C const CLSID CLSID_SkpMaterial;

#ifdef __cplusplus

class DECLSPEC_UUID("2510264C-96DC-4fc4-88B9-E2503F49A8DD")
SkpMaterial;
#endif

EXTERN_C const CLSID CLSID_SkpMaterials;

#ifdef __cplusplus

class DECLSPEC_UUID("3307BAAB-4624-4423-B076-37AB33F3EE6A")
SkpMaterials;
#endif

EXTERN_C const CLSID CLSID_SkpTexture;

#ifdef __cplusplus

class DECLSPEC_UUID("19356807-23AB-4a7b-AC98-C77381141A5D")
SkpTexture;
#endif

EXTERN_C const CLSID CLSID_SkpTextures;

#ifdef __cplusplus

class DECLSPEC_UUID("F4728C8E-AA35-4092-AD8E-B8090A6A9EDE")
SkpTextures;
#endif

EXTERN_C const CLSID CLSID_SkpTransform;

#ifdef __cplusplus

class DECLSPEC_UUID("25D39F1B-0A6F-4a8a-ABAC-9FE56BE4D45E")
SkpTransform;
#endif

EXTERN_C const CLSID CLSID_SkpComponentDefinition;

#ifdef __cplusplus

class DECLSPEC_UUID("2C39F89C-458F-4435-BA79-8ED3CEAE9068")
SkpComponentDefinition;
#endif

EXTERN_C const CLSID CLSID_SkpComponentDefinitions;

#ifdef __cplusplus

class DECLSPEC_UUID("09A855B9-440D-4ec0-BCCF-DBD1E2C6AAF5")
SkpComponentDefinitions;
#endif

EXTERN_C const CLSID CLSID_SkpComponentInstance;

#ifdef __cplusplus

class DECLSPEC_UUID("1ABECA09-D994-4eb4-8421-747F7C12E2D8")
SkpComponentInstance;
#endif

EXTERN_C const CLSID CLSID_SkpComponentInstances;

#ifdef __cplusplus

class DECLSPEC_UUID("23623210-E18A-43b5-AF25-F259DF138024")
SkpComponentInstances;
#endif

EXTERN_C const CLSID CLSID_SkpEdgeUse;

#ifdef __cplusplus

class DECLSPEC_UUID("682A0B04-C07B-4ed1-963A-8E776CF83085")
SkpEdgeUse;
#endif

EXTERN_C const CLSID CLSID_SkpEdgeUses;

#ifdef __cplusplus

class DECLSPEC_UUID("3FDE8661-D7D6-4c34-ABEB-FA55A60A6771")
SkpEdgeUses;
#endif

EXTERN_C const CLSID CLSID_SkpLoop;

#ifdef __cplusplus

class DECLSPEC_UUID("0D6DB7C0-3DDB-49cb-BB65-B93597609104")
SkpLoop;
#endif

EXTERN_C const CLSID CLSID_SkpLoops;

#ifdef __cplusplus

class DECLSPEC_UUID("1A39AA92-1B88-4512-AE26-2F86CBBC2D84")
SkpLoops;
#endif

EXTERN_C const CLSID CLSID_SkpPolyline3d;

#ifdef __cplusplus

class DECLSPEC_UUID("3BB792D4-B6B8-417a-8C5B-ED3CA179140E")
SkpPolyline3d;
#endif

EXTERN_C const CLSID CLSID_SkpPolyline3ds;

#ifdef __cplusplus

class DECLSPEC_UUID("7A5B60ED-E4E5-4229-96E9-DFB339861AFA")
SkpPolyline3ds;
#endif

EXTERN_C const CLSID CLSID_SkpConstructionLine;

#ifdef __cplusplus

class DECLSPEC_UUID("5812305B-4102-4b5f-AF49-A1D781ED8241")
SkpConstructionLine;
#endif

EXTERN_C const CLSID CLSID_SkpConstructionLines;

#ifdef __cplusplus

class DECLSPEC_UUID("F8F0804E-5DB3-4396-A9B1-1778A1E3A1CF")
SkpConstructionLines;
#endif

EXTERN_C const CLSID CLSID_SkpConstructionPoint;

#ifdef __cplusplus

class DECLSPEC_UUID("4031A3A9-5D14-4ba4-9119-7B89D4605AC4")
SkpConstructionPoint;
#endif

EXTERN_C const CLSID CLSID_SkpConstructionPoints;

#ifdef __cplusplus

class DECLSPEC_UUID("C53AFEFC-2D79-45b2-A538-9C38956471D6")
SkpConstructionPoints;
#endif

EXTERN_C const CLSID CLSID_SkpGroup;

#ifdef __cplusplus

class DECLSPEC_UUID("1594CED1-F405-40c4-9776-E8D1422EDA12")
SkpGroup;
#endif

EXTERN_C const CLSID CLSID_SkpGroups;

#ifdef __cplusplus

class DECLSPEC_UUID("E9D42944-0F9B-405c-B31F-41FD03EEF9D5")
SkpGroups;
#endif

EXTERN_C const CLSID CLSID_SkpImage;

#ifdef __cplusplus

class DECLSPEC_UUID("CE5F0306-2A7C-4c75-8D52-16A5115C2747")
SkpImage;
#endif

EXTERN_C const CLSID CLSID_SkpImages;

#ifdef __cplusplus

class DECLSPEC_UUID("A00A8FB0-1EB4-4530-8C60-318FA96F5CC0")
SkpImages;
#endif

EXTERN_C const CLSID CLSID_SkpCamera;

#ifdef __cplusplus

class DECLSPEC_UUID("A4FCD122-86D6-4b7a-B151-FE3EE14A978B")
SkpCamera;
#endif

EXTERN_C const CLSID CLSID_SkpPage;

#ifdef __cplusplus

class DECLSPEC_UUID("6BAC97E8-48D7-4d4c-A079-F1018C0844A3")
SkpPage;
#endif

EXTERN_C const CLSID CLSID_SkpPages;

#ifdef __cplusplus

class DECLSPEC_UUID("52E11A33-1143-49ee-A82F-5191060FAC05")
SkpPages;
#endif

EXTERN_C const CLSID CLSID_SkpEntityTransformPair;

#ifdef __cplusplus

class DECLSPEC_UUID("5A875310-D0D3-4ba5-BC95-D8C1BC7DFFBC")
SkpEntityTransformPair;
#endif

EXTERN_C const CLSID CLSID_SkpEntityTransformPairs;

#ifdef __cplusplus

class DECLSPEC_UUID("68DCA68F-5D93-4e90-9245-11159BC6C1FD")
SkpEntityTransformPairs;
#endif

EXTERN_C const CLSID CLSID_SkpOpening;

#ifdef __cplusplus

class DECLSPEC_UUID("0B357E1E-6BCD-4056-BF1A-55B7B6E2BCFB")
SkpOpening;
#endif

EXTERN_C const CLSID CLSID_SkpOpenings;

#ifdef __cplusplus

class DECLSPEC_UUID("05D8F76C-74B9-4cb6-94BB-B38C2FCB7991")
SkpOpenings;
#endif

EXTERN_C const CLSID CLSID_SkpPoint3d;

#ifdef __cplusplus

class DECLSPEC_UUID("55EE31FA-25CB-4293-AEB2-31884694688B")
SkpPoint3d;
#endif

EXTERN_C const CLSID CLSID_SkpVector3d;

#ifdef __cplusplus

class DECLSPEC_UUID("05EB8168-4E72-4024-9F17-5E9D3BED4B72")
SkpVector3d;
#endif

EXTERN_C const CLSID CLSID_SkpSelectionSet;

#ifdef __cplusplus

class DECLSPEC_UUID("D051308C-6EBA-48f0-B8A2-7438FFBF06F4")
SkpSelectionSet;
#endif

EXTERN_C const CLSID CLSID_SkpSectionPlane;

#ifdef __cplusplus

class DECLSPEC_UUID("80600D2D-009F-4904-975B-752D9B8BAAA0")
SkpSectionPlane;
#endif

EXTERN_C const CLSID CLSID_SkpSectionPlanes;

#ifdef __cplusplus

class DECLSPEC_UUID("9CE03B4D-6833-43c4-BED8-6A37D78C2085")
SkpSectionPlanes;
#endif

EXTERN_C const CLSID CLSID_SkpUVHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("47E17463-97A6-4026-83FC-E0CFF4928B6E")
SkpUVHelper;
#endif

EXTERN_C const CLSID CLSID_SkpCoordinateSystem;

#ifdef __cplusplus

class DECLSPEC_UUID("17496FE0-F9D0-4297-8F77-5CC879D8381E")
SkpCoordinateSystem;
#endif

EXTERN_C const CLSID CLSID_SkpEntityProviderStatistics;

#ifdef __cplusplus

class DECLSPEC_UUID("56c28985-cf66-43dc-abf6-edf774ebdb12")
SkpEntityProviderStatistics;
#endif

EXTERN_C const CLSID CLSID_SkpRenderer;

#ifdef __cplusplus

class DECLSPEC_UUID("56c28985-cf66-43dc-abf6-edf774ebdb13")
SkpRenderer;
#endif

EXTERN_C const CLSID CLSID_SkpStyleManager;

#ifdef __cplusplus

class DECLSPEC_UUID("B9AAEAC5-0EC8-4e7c-908F-6F6CE0A5EE19")
SkpStyleManager;
#endif

EXTERN_C const CLSID CLSID_SkpStyle;

#ifdef __cplusplus

class DECLSPEC_UUID("C8BC9942-B8F1-439d-AF85-8AFDC873190E")
SkpStyle;
#endif

EXTERN_C const CLSID CLSID_SkpStyles;

#ifdef __cplusplus

class DECLSPEC_UUID("5B8D9FBF-260C-409c-AD2C-2F908C6656D5")
SkpStyles;
#endif

EXTERN_C const CLSID CLSID_SkpCameraM;

#ifdef __cplusplus

class DECLSPEC_UUID("2231CC58-63BA-4BAF-B800-ABD9CC8B401D")
SkpCameraM;
#endif

EXTERN_C const CLSID CLSID_SkpNamedValuesM;

#ifdef __cplusplus

class DECLSPEC_UUID("D43DB17A-D44D-4CCC-B556-AB8C3E178149")
SkpNamedValuesM;
#endif
#endif /* __SketchUp_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


