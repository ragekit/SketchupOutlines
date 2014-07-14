

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#ifndef __SketchUpAddin_h__
#define __SketchUpAddin_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IProgressCB_FWD_DEFINED__
#define __IProgressCB_FWD_DEFINED__
typedef interface IProgressCB IProgressCB;
#endif 	/* __IProgressCB_FWD_DEFINED__ */


#ifndef __ISketchUpExporter_FWD_DEFINED__
#define __ISketchUpExporter_FWD_DEFINED__
typedef interface ISketchUpExporter ISketchUpExporter;
#endif 	/* __ISketchUpExporter_FWD_DEFINED__ */


#ifndef __ISketchUpPlugin_FWD_DEFINED__
#define __ISketchUpPlugin_FWD_DEFINED__
typedef interface ISketchUpPlugin ISketchUpPlugin;
#endif 	/* __ISketchUpPlugin_FWD_DEFINED__ */


#ifndef __ISketchUpExporterPlugin_FWD_DEFINED__
#define __ISketchUpExporterPlugin_FWD_DEFINED__
typedef interface ISketchUpExporterPlugin ISketchUpExporterPlugin;
#endif 	/* __ISketchUpExporterPlugin_FWD_DEFINED__ */


#ifndef __ISupportExporterOptions_FWD_DEFINED__
#define __ISupportExporterOptions_FWD_DEFINED__
typedef interface ISupportExporterOptions ISupportExporterOptions;
#endif 	/* __ISupportExporterOptions_FWD_DEFINED__ */


#ifndef __ISupportExporterValidation_FWD_DEFINED__
#define __ISupportExporterValidation_FWD_DEFINED__
typedef interface ISupportExporterValidation ISupportExporterValidation;
#endif 	/* __ISupportExporterValidation_FWD_DEFINED__ */


#ifndef __ISupportExporterVersion_FWD_DEFINED__
#define __ISupportExporterVersion_FWD_DEFINED__
typedef interface ISupportExporterVersion ISupportExporterVersion;
#endif 	/* __ISupportExporterVersion_FWD_DEFINED__ */


#ifndef __ISupportExporterAbout_FWD_DEFINED__
#define __ISupportExporterAbout_FWD_DEFINED__
typedef interface ISupportExporterAbout ISupportExporterAbout;
#endif 	/* __ISupportExporterAbout_FWD_DEFINED__ */


#ifndef __IEnumSketchUpExporter_FWD_DEFINED__
#define __IEnumSketchUpExporter_FWD_DEFINED__
typedef interface IEnumSketchUpExporter IEnumSketchUpExporter;
#endif 	/* __IEnumSketchUpExporter_FWD_DEFINED__ */


#ifndef __ISupportExporterSummary_FWD_DEFINED__
#define __ISupportExporterSummary_FWD_DEFINED__
typedef interface ISupportExporterSummary ISupportExporterSummary;
#endif 	/* __ISupportExporterSummary_FWD_DEFINED__ */


#ifndef __ISupportExporterProgress_FWD_DEFINED__
#define __ISupportExporterProgress_FWD_DEFINED__
typedef interface ISupportExporterProgress ISupportExporterProgress;
#endif 	/* __ISupportExporterProgress_FWD_DEFINED__ */


#ifndef __ISupportExporterFileSpecificOptions_FWD_DEFINED__
#define __ISupportExporterFileSpecificOptions_FWD_DEFINED__
typedef interface ISupportExporterFileSpecificOptions ISupportExporterFileSpecificOptions;
#endif 	/* __ISupportExporterFileSpecificOptions_FWD_DEFINED__ */


#ifndef __IEnumSketchUpExporter_FWD_DEFINED__
#define __IEnumSketchUpExporter_FWD_DEFINED__
typedef interface IEnumSketchUpExporter IEnumSketchUpExporter;
#endif 	/* __IEnumSketchUpExporter_FWD_DEFINED__ */


#ifndef __ISupportExporterAbout_FWD_DEFINED__
#define __ISupportExporterAbout_FWD_DEFINED__
typedef interface ISupportExporterAbout ISupportExporterAbout;
#endif 	/* __ISupportExporterAbout_FWD_DEFINED__ */


#ifndef __IProgressCB_FWD_DEFINED__
#define __IProgressCB_FWD_DEFINED__
typedef interface IProgressCB IProgressCB;
#endif 	/* __IProgressCB_FWD_DEFINED__ */


#ifndef __ISketchUpExporter_FWD_DEFINED__
#define __ISketchUpExporter_FWD_DEFINED__
typedef interface ISketchUpExporter ISketchUpExporter;
#endif 	/* __ISketchUpExporter_FWD_DEFINED__ */


#ifndef __ISupportExporterOptions_FWD_DEFINED__
#define __ISupportExporterOptions_FWD_DEFINED__
typedef interface ISupportExporterOptions ISupportExporterOptions;
#endif 	/* __ISupportExporterOptions_FWD_DEFINED__ */


#ifndef __ISupportExporterValidation_FWD_DEFINED__
#define __ISupportExporterValidation_FWD_DEFINED__
typedef interface ISupportExporterValidation ISupportExporterValidation;
#endif 	/* __ISupportExporterValidation_FWD_DEFINED__ */


#ifndef __ISupportExporterVersion_FWD_DEFINED__
#define __ISupportExporterVersion_FWD_DEFINED__
typedef interface ISupportExporterVersion ISupportExporterVersion;
#endif 	/* __ISupportExporterVersion_FWD_DEFINED__ */


#ifndef __ISupportExporterSummary_FWD_DEFINED__
#define __ISupportExporterSummary_FWD_DEFINED__
typedef interface ISupportExporterSummary ISupportExporterSummary;
#endif 	/* __ISupportExporterSummary_FWD_DEFINED__ */


#ifndef __ISupportExporterProgress_FWD_DEFINED__
#define __ISupportExporterProgress_FWD_DEFINED__
typedef interface ISupportExporterProgress ISupportExporterProgress;
#endif 	/* __ISupportExporterProgress_FWD_DEFINED__ */


#ifndef __ISupportExporterFileSpecificOptions_FWD_DEFINED__
#define __ISupportExporterFileSpecificOptions_FWD_DEFINED__
typedef interface ISupportExporterFileSpecificOptions ISupportExporterFileSpecificOptions;
#endif 	/* __ISupportExporterFileSpecificOptions_FWD_DEFINED__ */


#ifndef __ISketchUpPlugin_FWD_DEFINED__
#define __ISketchUpPlugin_FWD_DEFINED__
typedef interface ISketchUpPlugin ISketchUpPlugin;
#endif 	/* __ISketchUpPlugin_FWD_DEFINED__ */


#ifndef __ISketchUpExporterPlugin_FWD_DEFINED__
#define __ISketchUpExporterPlugin_FWD_DEFINED__
typedef interface ISketchUpExporterPlugin ISketchUpExporterPlugin;
#endif 	/* __ISketchUpExporterPlugin_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IProgressCB_INTERFACE_DEFINED__
#define __IProgressCB_INTERFACE_DEFINED__

/* interface IProgressCB */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IProgressCB;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F84E9A80-2DED-11d5-9476-0050DA73EEF2")
    IProgressCB : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HasBeenCancelled( 
            /* [out] */ BOOL *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPercentDone( 
            /* [in] */ double percent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStepSize( 
            /* [in] */ double percent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Step( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgressMessage( 
            /* [in] */ BSTR msg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProgressCBVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IProgressCB * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IProgressCB * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IProgressCB * This);
        
        HRESULT ( STDMETHODCALLTYPE *HasBeenCancelled )( 
            IProgressCB * This,
            /* [out] */ BOOL *pVal);
        
        HRESULT ( STDMETHODCALLTYPE *SetPercentDone )( 
            IProgressCB * This,
            /* [in] */ double percent);
        
        HRESULT ( STDMETHODCALLTYPE *SetStepSize )( 
            IProgressCB * This,
            /* [in] */ double percent);
        
        HRESULT ( STDMETHODCALLTYPE *Step )( 
            IProgressCB * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgressMessage )( 
            IProgressCB * This,
            /* [in] */ BSTR msg);
        
        END_INTERFACE
    } IProgressCBVtbl;

    interface IProgressCB
    {
        CONST_VTBL struct IProgressCBVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProgressCB_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IProgressCB_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IProgressCB_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IProgressCB_HasBeenCancelled(This,pVal)	\
    (This)->lpVtbl -> HasBeenCancelled(This,pVal)

#define IProgressCB_SetPercentDone(This,percent)	\
    (This)->lpVtbl -> SetPercentDone(This,percent)

#define IProgressCB_SetStepSize(This,percent)	\
    (This)->lpVtbl -> SetStepSize(This,percent)

#define IProgressCB_Step(This)	\
    (This)->lpVtbl -> Step(This)

#define IProgressCB_SetProgressMessage(This,msg)	\
    (This)->lpVtbl -> SetProgressMessage(This,msg)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IProgressCB_HasBeenCancelled_Proxy( 
    IProgressCB * This,
    /* [out] */ BOOL *pVal);


void __RPC_STUB IProgressCB_HasBeenCancelled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IProgressCB_SetPercentDone_Proxy( 
    IProgressCB * This,
    /* [in] */ double percent);


void __RPC_STUB IProgressCB_SetPercentDone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IProgressCB_SetStepSize_Proxy( 
    IProgressCB * This,
    /* [in] */ double percent);


void __RPC_STUB IProgressCB_SetStepSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IProgressCB_Step_Proxy( 
    IProgressCB * This);


void __RPC_STUB IProgressCB_Step_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IProgressCB_SetProgressMessage_Proxy( 
    IProgressCB * This,
    /* [in] */ BSTR msg);


void __RPC_STUB IProgressCB_SetProgressMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IProgressCB_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sketchupaddin_0262 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum tagSkpExporterType
    {	ExporterTypeModel3d	= 0,
	ExporterTypeModel2d	= 1,
	ExporterTypeHLR	= 2,
	ExporterTypeSection	= 3,
	ExporterTypeImage	= 4
    } 	SkpExporterType;



extern RPC_IF_HANDLE __MIDL_itf_sketchupaddin_0262_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sketchupaddin_0262_v0_0_s_ifspec;

#ifndef __ISketchUpExporter_INTERFACE_DEFINED__
#define __ISketchUpExporter_INTERFACE_DEFINED__

/* interface ISketchUpExporter */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISketchUpExporter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B3D624E-5D17-4cf9-886A-15A55B50FD2A")
    ISketchUpExporter : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ BSTR *pID) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pDescription) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FileExtension( 
            /* [retval][out] */ BSTR *pExtension) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExporterType( 
            /* [retval][out] */ SkpExporterType *pType) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AllowsExistingFiles( 
            /* [retval][out] */ BOOL *pAllows) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoExport( 
            /* [in] */ BSTR fileName,
            /* [in] */ IUnknown *activeDocument,
            /* [in] */ IProgressCB *pCB) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISketchUpExporterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISketchUpExporter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISketchUpExporter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISketchUpExporter * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            ISketchUpExporter * This,
            /* [retval][out] */ BSTR *pID);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ISketchUpExporter * This,
            /* [retval][out] */ BSTR *pDescription);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileExtension )( 
            ISketchUpExporter * This,
            /* [retval][out] */ BSTR *pExtension);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExporterType )( 
            ISketchUpExporter * This,
            /* [retval][out] */ SkpExporterType *pType);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowsExistingFiles )( 
            ISketchUpExporter * This,
            /* [retval][out] */ BOOL *pAllows);
        
        HRESULT ( STDMETHODCALLTYPE *DoExport )( 
            ISketchUpExporter * This,
            /* [in] */ BSTR fileName,
            /* [in] */ IUnknown *activeDocument,
            /* [in] */ IProgressCB *pCB);
        
        END_INTERFACE
    } ISketchUpExporterVtbl;

    interface ISketchUpExporter
    {
        CONST_VTBL struct ISketchUpExporterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISketchUpExporter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISketchUpExporter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISketchUpExporter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISketchUpExporter_get_Id(This,pID)	\
    (This)->lpVtbl -> get_Id(This,pID)

#define ISketchUpExporter_get_Description(This,pDescription)	\
    (This)->lpVtbl -> get_Description(This,pDescription)

#define ISketchUpExporter_get_FileExtension(This,pExtension)	\
    (This)->lpVtbl -> get_FileExtension(This,pExtension)

#define ISketchUpExporter_get_ExporterType(This,pType)	\
    (This)->lpVtbl -> get_ExporterType(This,pType)

#define ISketchUpExporter_get_AllowsExistingFiles(This,pAllows)	\
    (This)->lpVtbl -> get_AllowsExistingFiles(This,pAllows)

#define ISketchUpExporter_DoExport(This,fileName,activeDocument,pCB)	\
    (This)->lpVtbl -> DoExport(This,fileName,activeDocument,pCB)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISketchUpExporter_get_Id_Proxy( 
    ISketchUpExporter * This,
    /* [retval][out] */ BSTR *pID);


void __RPC_STUB ISketchUpExporter_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISketchUpExporter_get_Description_Proxy( 
    ISketchUpExporter * This,
    /* [retval][out] */ BSTR *pDescription);


void __RPC_STUB ISketchUpExporter_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISketchUpExporter_get_FileExtension_Proxy( 
    ISketchUpExporter * This,
    /* [retval][out] */ BSTR *pExtension);


void __RPC_STUB ISketchUpExporter_get_FileExtension_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISketchUpExporter_get_ExporterType_Proxy( 
    ISketchUpExporter * This,
    /* [retval][out] */ SkpExporterType *pType);


void __RPC_STUB ISketchUpExporter_get_ExporterType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISketchUpExporter_get_AllowsExistingFiles_Proxy( 
    ISketchUpExporter * This,
    /* [retval][out] */ BOOL *pAllows);


void __RPC_STUB ISketchUpExporter_get_AllowsExistingFiles_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISketchUpExporter_DoExport_Proxy( 
    ISketchUpExporter * This,
    /* [in] */ BSTR fileName,
    /* [in] */ IUnknown *activeDocument,
    /* [in] */ IProgressCB *pCB);


void __RPC_STUB ISketchUpExporter_DoExport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISketchUpExporter_INTERFACE_DEFINED__ */


#ifndef __ISketchUpPlugin_INTERFACE_DEFINED__
#define __ISketchUpPlugin_INTERFACE_DEFINED__

/* interface ISketchUpPlugin */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISketchUpPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9E12C1D9-6F9B-4c20-876C-A73952EE2ECC")
    ISketchUpPlugin : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PerformAction( 
            /* [in] */ IUnknown *activeDocument) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsAvailable( 
            /* [retval][out] */ BOOL *pIsAvailable) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISketchUpPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISketchUpPlugin * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISketchUpPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISketchUpPlugin * This);
        
        HRESULT ( STDMETHODCALLTYPE *PerformAction )( 
            ISketchUpPlugin * This,
            /* [in] */ IUnknown *activeDocument);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAvailable )( 
            ISketchUpPlugin * This,
            /* [retval][out] */ BOOL *pIsAvailable);
        
        END_INTERFACE
    } ISketchUpPluginVtbl;

    interface ISketchUpPlugin
    {
        CONST_VTBL struct ISketchUpPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISketchUpPlugin_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISketchUpPlugin_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISketchUpPlugin_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISketchUpPlugin_PerformAction(This,activeDocument)	\
    (This)->lpVtbl -> PerformAction(This,activeDocument)

#define ISketchUpPlugin_get_IsAvailable(This,pIsAvailable)	\
    (This)->lpVtbl -> get_IsAvailable(This,pIsAvailable)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISketchUpPlugin_PerformAction_Proxy( 
    ISketchUpPlugin * This,
    /* [in] */ IUnknown *activeDocument);


void __RPC_STUB ISketchUpPlugin_PerformAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISketchUpPlugin_get_IsAvailable_Proxy( 
    ISketchUpPlugin * This,
    /* [retval][out] */ BOOL *pIsAvailable);


void __RPC_STUB ISketchUpPlugin_get_IsAvailable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISketchUpPlugin_INTERFACE_DEFINED__ */


#ifndef __ISketchUpExporterPlugin_INTERFACE_DEFINED__
#define __ISketchUpExporterPlugin_INTERFACE_DEFINED__

/* interface ISketchUpExporterPlugin */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISketchUpExporterPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("02075616-955D-49bb-81E1-5CA98FD1B7C0")
    ISketchUpExporterPlugin : public ISketchUpPlugin
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Category( 
            /* [retval][out] */ BSTR *pText) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MenuText( 
            /* [retval][out] */ BSTR *pText) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISketchUpExporterPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISketchUpExporterPlugin * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISketchUpExporterPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISketchUpExporterPlugin * This);
        
        HRESULT ( STDMETHODCALLTYPE *PerformAction )( 
            ISketchUpExporterPlugin * This,
            /* [in] */ IUnknown *activeDocument);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAvailable )( 
            ISketchUpExporterPlugin * This,
            /* [retval][out] */ BOOL *pIsAvailable);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Category )( 
            ISketchUpExporterPlugin * This,
            /* [retval][out] */ BSTR *pText);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MenuText )( 
            ISketchUpExporterPlugin * This,
            /* [retval][out] */ BSTR *pText);
        
        END_INTERFACE
    } ISketchUpExporterPluginVtbl;

    interface ISketchUpExporterPlugin
    {
        CONST_VTBL struct ISketchUpExporterPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISketchUpExporterPlugin_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISketchUpExporterPlugin_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISketchUpExporterPlugin_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISketchUpExporterPlugin_PerformAction(This,activeDocument)	\
    (This)->lpVtbl -> PerformAction(This,activeDocument)

#define ISketchUpExporterPlugin_get_IsAvailable(This,pIsAvailable)	\
    (This)->lpVtbl -> get_IsAvailable(This,pIsAvailable)


#define ISketchUpExporterPlugin_get_Category(This,pText)	\
    (This)->lpVtbl -> get_Category(This,pText)

#define ISketchUpExporterPlugin_get_MenuText(This,pText)	\
    (This)->lpVtbl -> get_MenuText(This,pText)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISketchUpExporterPlugin_get_Category_Proxy( 
    ISketchUpExporterPlugin * This,
    /* [retval][out] */ BSTR *pText);


void __RPC_STUB ISketchUpExporterPlugin_get_Category_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISketchUpExporterPlugin_get_MenuText_Proxy( 
    ISketchUpExporterPlugin * This,
    /* [retval][out] */ BSTR *pText);


void __RPC_STUB ISketchUpExporterPlugin_get_MenuText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISketchUpExporterPlugin_INTERFACE_DEFINED__ */


#ifndef __ISupportExporterOptions_INTERFACE_DEFINED__
#define __ISupportExporterOptions_INTERFACE_DEFINED__

/* interface ISupportExporterOptions */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISupportExporterOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("228CE3CD-EC65-4f13-93D1-E6ADA2D7F17C")
    ISupportExporterOptions : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetOptions( 
            /* [in] */ IUnknown *activeDocument) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISupportExporterOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISupportExporterOptions * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISupportExporterOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISupportExporterOptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            ISupportExporterOptions * This,
            /* [in] */ IUnknown *activeDocument);
        
        END_INTERFACE
    } ISupportExporterOptionsVtbl;

    interface ISupportExporterOptions
    {
        CONST_VTBL struct ISupportExporterOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISupportExporterOptions_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISupportExporterOptions_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISupportExporterOptions_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISupportExporterOptions_GetOptions(This,activeDocument)	\
    (This)->lpVtbl -> GetOptions(This,activeDocument)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISupportExporterOptions_GetOptions_Proxy( 
    ISupportExporterOptions * This,
    /* [in] */ IUnknown *activeDocument);


void __RPC_STUB ISupportExporterOptions_GetOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISupportExporterOptions_INTERFACE_DEFINED__ */


#ifndef __ISupportExporterValidation_INTERFACE_DEFINED__
#define __ISupportExporterValidation_INTERFACE_DEFINED__

/* interface ISupportExporterValidation */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISupportExporterValidation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20D2AF4B-B2F1-4a19-A515-66C4B259AB2D")
    ISupportExporterValidation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsValid( 
            /* [in] */ IUnknown *activeDocument,
            /* [retval][out] */ BOOL *pIsValid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISupportExporterValidationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISupportExporterValidation * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISupportExporterValidation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISupportExporterValidation * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            ISupportExporterValidation * This,
            /* [in] */ IUnknown *activeDocument,
            /* [retval][out] */ BOOL *pIsValid);
        
        END_INTERFACE
    } ISupportExporterValidationVtbl;

    interface ISupportExporterValidation
    {
        CONST_VTBL struct ISupportExporterValidationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISupportExporterValidation_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISupportExporterValidation_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISupportExporterValidation_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISupportExporterValidation_IsValid(This,activeDocument,pIsValid)	\
    (This)->lpVtbl -> IsValid(This,activeDocument,pIsValid)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISupportExporterValidation_IsValid_Proxy( 
    ISupportExporterValidation * This,
    /* [in] */ IUnknown *activeDocument,
    /* [retval][out] */ BOOL *pIsValid);


void __RPC_STUB ISupportExporterValidation_IsValid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISupportExporterValidation_INTERFACE_DEFINED__ */


#ifndef __ISupportExporterVersion_INTERFACE_DEFINED__
#define __ISupportExporterVersion_INTERFACE_DEFINED__

/* interface ISupportExporterVersion */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISupportExporterVersion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("34FB2E87-5DC4-419c-824D-3D2E4D8EF11C")
    ISupportExporterVersion : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVersion) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISupportExporterVersionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISupportExporterVersion * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISupportExporterVersion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISupportExporterVersion * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISupportExporterVersion * This,
            /* [retval][out] */ BSTR *pVersion);
        
        END_INTERFACE
    } ISupportExporterVersionVtbl;

    interface ISupportExporterVersion
    {
        CONST_VTBL struct ISupportExporterVersionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISupportExporterVersion_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISupportExporterVersion_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISupportExporterVersion_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISupportExporterVersion_get_Version(This,pVersion)	\
    (This)->lpVtbl -> get_Version(This,pVersion)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE ISupportExporterVersion_get_Version_Proxy( 
    ISupportExporterVersion * This,
    /* [retval][out] */ BSTR *pVersion);


void __RPC_STUB ISupportExporterVersion_get_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISupportExporterVersion_INTERFACE_DEFINED__ */


#ifndef __ISupportExporterAbout_INTERFACE_DEFINED__
#define __ISupportExporterAbout_INTERFACE_DEFINED__

/* interface ISupportExporterAbout */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISupportExporterAbout;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("180AB209-6663-40b0-85D1-380E6DEAC808")
    ISupportExporterAbout : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SupportsAboutBox( 
            /* [retval][out] */ BOOL *pSupports) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoAbout( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AboutString( 
            /* [retval][out] */ BSTR *pAboutString) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISupportExporterAboutVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISupportExporterAbout * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISupportExporterAbout * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISupportExporterAbout * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportsAboutBox )( 
            ISupportExporterAbout * This,
            /* [retval][out] */ BOOL *pSupports);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoAbout )( 
            ISupportExporterAbout * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AboutString )( 
            ISupportExporterAbout * This,
            /* [retval][out] */ BSTR *pAboutString);
        
        END_INTERFACE
    } ISupportExporterAboutVtbl;

    interface ISupportExporterAbout
    {
        CONST_VTBL struct ISupportExporterAboutVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISupportExporterAbout_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISupportExporterAbout_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISupportExporterAbout_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISupportExporterAbout_get_SupportsAboutBox(This,pSupports)	\
    (This)->lpVtbl -> get_SupportsAboutBox(This,pSupports)

#define ISupportExporterAbout_DoAbout(This)	\
    (This)->lpVtbl -> DoAbout(This)

#define ISupportExporterAbout_get_AboutString(This,pAboutString)	\
    (This)->lpVtbl -> get_AboutString(This,pAboutString)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE ISupportExporterAbout_get_SupportsAboutBox_Proxy( 
    ISupportExporterAbout * This,
    /* [retval][out] */ BOOL *pSupports);


void __RPC_STUB ISupportExporterAbout_get_SupportsAboutBox_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISupportExporterAbout_DoAbout_Proxy( 
    ISupportExporterAbout * This);


void __RPC_STUB ISupportExporterAbout_DoAbout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE ISupportExporterAbout_get_AboutString_Proxy( 
    ISupportExporterAbout * This,
    /* [retval][out] */ BSTR *pAboutString);


void __RPC_STUB ISupportExporterAbout_get_AboutString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISupportExporterAbout_INTERFACE_DEFINED__ */


#ifndef __IEnumSketchUpExporter_INTERFACE_DEFINED__
#define __IEnumSketchUpExporter_INTERFACE_DEFINED__

/* interface IEnumSketchUpExporter */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSketchUpExporter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88088873-90F6-48aa-8380-F8B59AC1CA7C")
    IEnumSketchUpExporter : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pCount) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long nIndex,
            /* [retval][out] */ ISketchUpExporter **pExporter) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumSketchUpExporterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSketchUpExporter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSketchUpExporter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSketchUpExporter * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IEnumSketchUpExporter * This,
            /* [retval][out] */ long *pCount);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IEnumSketchUpExporter * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ ISketchUpExporter **pExporter);
        
        END_INTERFACE
    } IEnumSketchUpExporterVtbl;

    interface IEnumSketchUpExporter
    {
        CONST_VTBL struct IEnumSketchUpExporterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSketchUpExporter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumSketchUpExporter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumSketchUpExporter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumSketchUpExporter_get_Count(This,pCount)	\
    (This)->lpVtbl -> get_Count(This,pCount)

#define IEnumSketchUpExporter_get_Item(This,nIndex,pExporter)	\
    (This)->lpVtbl -> get_Item(This,nIndex,pExporter)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget] */ HRESULT STDMETHODCALLTYPE IEnumSketchUpExporter_get_Count_Proxy( 
    IEnumSketchUpExporter * This,
    /* [retval][out] */ long *pCount);


void __RPC_STUB IEnumSketchUpExporter_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget] */ HRESULT STDMETHODCALLTYPE IEnumSketchUpExporter_get_Item_Proxy( 
    IEnumSketchUpExporter * This,
    /* [in] */ long nIndex,
    /* [retval][out] */ ISketchUpExporter **pExporter);


void __RPC_STUB IEnumSketchUpExporter_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumSketchUpExporter_INTERFACE_DEFINED__ */


#ifndef __ISupportExporterSummary_INTERFACE_DEFINED__
#define __ISupportExporterSummary_INTERFACE_DEFINED__

/* interface ISupportExporterSummary */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISupportExporterSummary;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("533C3825-AF7D-496f-884C-70BE725F7D65")
    ISupportExporterSummary : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowSummary( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISupportExporterSummaryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISupportExporterSummary * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISupportExporterSummary * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISupportExporterSummary * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShowSummary )( 
            ISupportExporterSummary * This);
        
        END_INTERFACE
    } ISupportExporterSummaryVtbl;

    interface ISupportExporterSummary
    {
        CONST_VTBL struct ISupportExporterSummaryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISupportExporterSummary_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISupportExporterSummary_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISupportExporterSummary_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISupportExporterSummary_ShowSummary(This)	\
    (This)->lpVtbl -> ShowSummary(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISupportExporterSummary_ShowSummary_Proxy( 
    ISupportExporterSummary * This);


void __RPC_STUB ISupportExporterSummary_ShowSummary_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISupportExporterSummary_INTERFACE_DEFINED__ */


#ifndef __ISupportExporterProgress_INTERFACE_DEFINED__
#define __ISupportExporterProgress_INTERFACE_DEFINED__

/* interface ISupportExporterProgress */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISupportExporterProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E072B58-1EB1-48c4-AD8E-E7DE9305F7BD")
    ISupportExporterProgress : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISupportExporterProgressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISupportExporterProgress * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISupportExporterProgress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISupportExporterProgress * This);
        
        END_INTERFACE
    } ISupportExporterProgressVtbl;

    interface ISupportExporterProgress
    {
        CONST_VTBL struct ISupportExporterProgressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISupportExporterProgress_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISupportExporterProgress_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISupportExporterProgress_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISupportExporterProgress_INTERFACE_DEFINED__ */


#ifndef __ISupportExporterFileSpecificOptions_INTERFACE_DEFINED__
#define __ISupportExporterFileSpecificOptions_INTERFACE_DEFINED__

/* interface ISupportExporterFileSpecificOptions */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISupportExporterFileSpecificOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B11DE212-9342-4b91-8231-3A2889DD71AE")
    ISupportExporterFileSpecificOptions : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DoFileSpecificOptions( 
            /* [in] */ BSTR filename,
            /* [in] */ IUnknown *pActiveDocument) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISupportExporterFileSpecificOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISupportExporterFileSpecificOptions * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISupportExporterFileSpecificOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISupportExporterFileSpecificOptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoFileSpecificOptions )( 
            ISupportExporterFileSpecificOptions * This,
            /* [in] */ BSTR filename,
            /* [in] */ IUnknown *pActiveDocument);
        
        END_INTERFACE
    } ISupportExporterFileSpecificOptionsVtbl;

    interface ISupportExporterFileSpecificOptions
    {
        CONST_VTBL struct ISupportExporterFileSpecificOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISupportExporterFileSpecificOptions_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISupportExporterFileSpecificOptions_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISupportExporterFileSpecificOptions_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISupportExporterFileSpecificOptions_DoFileSpecificOptions(This,filename,pActiveDocument)	\
    (This)->lpVtbl -> DoFileSpecificOptions(This,filename,pActiveDocument)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISupportExporterFileSpecificOptions_DoFileSpecificOptions_Proxy( 
    ISupportExporterFileSpecificOptions * This,
    /* [in] */ BSTR filename,
    /* [in] */ IUnknown *pActiveDocument);


void __RPC_STUB ISupportExporterFileSpecificOptions_DoFileSpecificOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISupportExporterFileSpecificOptions_INTERFACE_DEFINED__ */



#ifndef __SketchUpAddin_LIBRARY_DEFINED__
#define __SketchUpAddin_LIBRARY_DEFINED__

/* library SketchUpAddin */
/* [helpstring][version][uuid] */ 















EXTERN_C const IID LIBID_SketchUpAddin;
#endif /* __SketchUpAddin_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


