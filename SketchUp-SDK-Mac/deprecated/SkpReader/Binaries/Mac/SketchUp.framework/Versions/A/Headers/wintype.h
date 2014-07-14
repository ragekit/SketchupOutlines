// Copyright 2010 Google Inc. All Rights Reserved.

// Define things that are used on Windows all the time that are not defined on Mac

#ifndef SKETCHUP_SOURCE_COMMON_UTILS_MAC_WINTYPE_H_
#define SKETCHUP_SOURCE_COMMON_UTILS_MAC_WINTYPE_H_

#if defined(__APPLE__) || defined(__LINUX__)

#ifndef _MAC
#ifdef __APPLE__
#define _MAC
#endif
#endif

#include <limits.h>

// TODO(julmer): Minimize the number of typedefs we use and take control
// over all of them.
#if defined(SU_SDK)
#include <SketchUp/types.h>
#else
#include "sketchup/source/common/utils/types.h"
#endif

// On the Mac, ctype.h defines _T.  This is used all over in SketchUp
// for doing generic text handling, so we need to undefine it
#undef _T

//===================================================================

// Standard constants
#undef FALSE
#undef TRUE
#undef NULL

#define FALSE   0
#define TRUE    1
#define NULL    0

// This used to be hard coded to 255 but that's too short for most blaze
// tmp file paths on Linux.  PATH_MAX is equally unreliable as it's possible
// to make paths which exceed that length, but this is at least much longer.
#define _MAX_PATH PATH_MAX
#define MAX_PATH _MAX_PATH

//===================================================================

// NOTE: On Windows, BOOL is defined as 'int'. In Objective-C however,
// there is a BOOL type that is a 'char'.  We use the Windows definition
// so that things of type BOOL are serialized correcly.  We cannot redefine
// it in files that include objective-C headers though.
#ifndef __OBJC__
typedef int             BOOL;
#endif
typedef int             CBOOL;

typedef unsigned char   BYTE;
typedef unsigned short  WORD;
typedef float           FLOAT;
typedef BYTE            *LPBYTE;
typedef long            *LPLONG;
typedef SU_DWORD        *LPDWORD;
typedef void            *LPVOID;
#define CONST const

typedef int             INT;
typedef unsigned int    UINT;
typedef unsigned int    *PUINT;

#define VOID void
typedef char CHAR;
typedef unsigned long ULONG;

#define UNALIGNED

//
// ANSI (Multi-byte Character) types
//
typedef CHAR *LPSTR, *PSTR;
typedef CONST CHAR *LPCSTR, *PCSTR;

#ifndef WCHAR_DEFINED
typedef unsigned short unichar;
typedef unichar WCHAR;
#define WCHAR_DEFINED
#endif

//-------------------------------------------------------------------
// Calling conventions

#define CALLBACK    PASCAL
#define WINAPI

// APIENTRY is defined elsewhere (in GL/gl.h) so we wrap this to avoid a warning
#ifndef APIENTRY
  #define APIENTRY    WINAPI
#endif

#define PASCAL
#define AFXAPI

#define AFX_DATA
#define AFX_DATADEF
#define AFX_API
#define AFX_CDECL

//===================================================================

inline long InterlockedIncrement(long* val)
{
    (*val)++;
    return *val;
}

inline long InterlockedDecrement(long* val)
{
    (*val)--;
    return *val;
}

//-------------------------------------------------------------------

#ifndef GUID_DEFINED
#define GUID_DEFINED
typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;
#endif /* GUID_DEFINED */

//===================================================================

typedef SU_LONG LPARAM;
typedef UINT WPARAM;
typedef SU_LONG LRESULT;

typedef void* HCURSOR;
typedef void* HICON;
typedef void* HWND;
typedef void* CWnd;
typedef long HINSTANCE;

//===================================================================
#endif  // __APPLE__
#endif  // SKETCHUP_SOURCE_COMMON_UTILS_MAC_WINTYPE_H_


