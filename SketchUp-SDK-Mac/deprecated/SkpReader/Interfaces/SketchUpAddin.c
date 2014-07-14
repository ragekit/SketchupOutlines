

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri May 11 14:48:23 2012
 */
/* Compiler settings for .\..\addins\sketchupaddin.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IProgressCB,0xF84E9A80,0x2DED,0x11d5,0x94,0x76,0x00,0x50,0xDA,0x73,0xEE,0xF2);


MIDL_DEFINE_GUID(IID, IID_ISketchUpExporter,0x6B3D624E,0x5D17,0x4cf9,0x88,0x6A,0x15,0xA5,0x5B,0x50,0xFD,0x2A);


MIDL_DEFINE_GUID(IID, IID_ISketchUpPlugin,0x9E12C1D9,0x6F9B,0x4c20,0x87,0x6C,0xA7,0x39,0x52,0xEE,0x2E,0xCC);


MIDL_DEFINE_GUID(IID, IID_ISketchUpExporterPlugin,0x02075616,0x955D,0x49bb,0x81,0xE1,0x5C,0xA9,0x8F,0xD1,0xB7,0xC0);


MIDL_DEFINE_GUID(IID, IID_ISupportExporterOptions,0x228CE3CD,0xEC65,0x4f13,0x93,0xD1,0xE6,0xAD,0xA2,0xD7,0xF1,0x7C);


MIDL_DEFINE_GUID(IID, IID_ISupportExporterValidation,0x20D2AF4B,0xB2F1,0x4a19,0xA5,0x15,0x66,0xC4,0xB2,0x59,0xAB,0x2D);


MIDL_DEFINE_GUID(IID, IID_ISupportExporterVersion,0x34FB2E87,0x5DC4,0x419c,0x82,0x4D,0x3D,0x2E,0x4D,0x8E,0xF1,0x1C);


MIDL_DEFINE_GUID(IID, IID_ISupportExporterAbout,0x180AB209,0x6663,0x40b0,0x85,0xD1,0x38,0x0E,0x6D,0xEA,0xC8,0x08);


MIDL_DEFINE_GUID(IID, IID_IEnumSketchUpExporter,0x88088873,0x90F6,0x48aa,0x83,0x80,0xF8,0xB5,0x9A,0xC1,0xCA,0x7C);


MIDL_DEFINE_GUID(IID, IID_ISupportExporterSummary,0x533C3825,0xAF7D,0x496f,0x88,0x4C,0x70,0xBE,0x72,0x5F,0x7D,0x65);


MIDL_DEFINE_GUID(IID, IID_ISupportExporterProgress,0x8E072B58,0x1EB1,0x48c4,0xAD,0x8E,0xE7,0xDE,0x93,0x05,0xF7,0xBD);


MIDL_DEFINE_GUID(IID, IID_ISupportExporterFileSpecificOptions,0xB11DE212,0x9342,0x4b91,0x82,0x31,0x3A,0x28,0x89,0xDD,0x71,0xAE);


MIDL_DEFINE_GUID(IID, LIBID_SketchUpAddin,0x9F105B40,0x3358,0x11d5,0x94,0x82,0x00,0x50,0xDA,0x73,0xEE,0xF2);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



