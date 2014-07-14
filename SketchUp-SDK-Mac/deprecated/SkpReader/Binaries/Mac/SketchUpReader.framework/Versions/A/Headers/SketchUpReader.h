// Copyright 2010 Google Inc. All Rights Reserved.

#ifndef SKETCHUP_SOURCE_SKETCHUP_SDK_SKETCHUPREADER_H_
#define SKETCHUP_SOURCE_SKETCHUP_SDK_SKETCHUPREADER_H_

#ifndef SU_SDK
#define SU_SDK
#endif

#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#endif

#include <SketchUpReader/wintype.h>
#include <SketchUpReader/BSTR.h>
#include <SketchUpReader/Variant.h>
#include <SketchUpReader/comptr.h>

#include <SketchUpReader/SketchUpInterfaces.h>
#include <SketchUpReader/IProgressCB.h>

//=============================================================================

extern HRESULT GetModelFromPasteboard(ISkpDocument** ppDoc);
extern HRESULT GetSketchUpSkpApplication(ISkpApplication** ppApp);

//-----------------------------------------------------------------------------
#ifdef __OBJC__
//#include "SketchUpView.h"
#endif

//=============================================================================
#endif  // SKETCHUP_SOURCE_SKETCHUP_SDK_SKETCHUPREADER_H_
