// Copyright 2011 Google Inc. All Rights Reserved.

// We have used DWORD and LONG from common/utils/mac/wintype.h.  However these
// conflict with defines in FreeImage.h.  It makes sense to now have our own
// types for SketchUp instead of using Windows types.

#ifndef SKETCHUP_SOURCE_COMMON_UTILS_TYPES_H_
#define SKETCHUP_SOURCE_COMMON_UTILS_TYPES_H_

typedef unsigned long SU_DWORD;
typedef long SU_LONG;

#ifdef _WINDOWS
// TODO(julmer): WTypes.h (which defines BYTE, BOOL, etc) includes windows.h
// which by default will include winsock.h.  That conflicts with
// google3/base/port.h which explicitly includes winsock2.h.  This macro
// prevents the inclusion and conflicts.  A better solution may be to just take
// control of our own types (i.e. SU_BOOL, etc) and abandon the tangled windows
// include files entirely.  That would also eliminate the need for such
// nonsense as CBOOL to avoid objc conflicts.
// TODO(julmer): Move this macro to a config file.
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <WTypes.h>
// Mac uses CBOOL instead of BOOL due to conflicts with objc.  So some of our
// win code winds up with CBOOL too.
typedef int CBOOL;
#else
#if defined(SU_SDK)
#include <SketchUp/wintype.h>
#else
#include "sketchup/source/common/utils/mac/wintype.h"
#endif
#endif

#endif  // SKETCHUP_SOURCE_COMMON_UTILS_TYPES_H_

