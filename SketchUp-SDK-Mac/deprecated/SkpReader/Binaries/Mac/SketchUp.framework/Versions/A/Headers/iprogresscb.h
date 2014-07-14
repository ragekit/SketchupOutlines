// Copyright 2010 Google Inc. All Rights Reserved.

#ifndef SKETCHUP_SOURCE_SKETCHUP_OBJMODEL_IPROGRESSCB_H_
#define SKETCHUP_SOURCE_SKETCHUP_OBJMODEL_IPROGRESSCB_H_


#ifdef _WINDOWS
struct __declspec(uuid("{F84E9A80-2DED-11d5-9476-0050DA73EEF2}")) IProgressCB;
DEFINE_GUID(IID_IProgressCB, 0xF84E9A80, 0x2DED, 0x11d5, 0x94, 0x76, 0x00, 0x50, 0xDA, 0x73, 0xEE, 0xF2);
#else

#if defined(SU_SDK)
  #include <SketchUp/comtype.h>
#else
  #include "sketchup/source/sketchup/macwin/comtype.h"
#endif  // SU_SDK

typedef struct IProgressCB IProgressCB;
extern const IID IID_IProgressCB;
#endif

#ifndef __IProgressCB_FWD_DEFINED__
#define __IProgressCB_FWD_DEFINED__

struct IProgressCB : IUnknown {
    STDMETHOD(HasBeenCancelled)(/*[out]*/ BOOL* pVal) = 0;
    STDMETHOD(SetPercentDone)(/*[in]*/ double percent) = 0;
    STDMETHOD(SetStepSize)(/*[in]*/ double percent) = 0;
    STDMETHOD(Step)() = 0;
    STDMETHOD(SetProgressMessage)(/*[in]*/ BSTR msg) = 0;

    virtual ~IProgressCB() {}
};

#endif  // __IProgressCB_FWD_DEFINED__
#endif  // SKETCHUP_SOURCE_SKETCHUP_OBJMODEL_IPROGRESSCB_H_
