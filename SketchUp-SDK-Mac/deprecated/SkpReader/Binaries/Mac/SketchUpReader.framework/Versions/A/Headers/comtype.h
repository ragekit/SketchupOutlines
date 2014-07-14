// Copyright 2010 Google Inc. All Rights Reserved.

#ifndef SKETCHUP_SOURCE_SKETCHUP_MACWIN_COMTYPE_H_
#define SKETCHUP_SOURCE_SKETCHUP_MACWIN_COMTYPE_H_

#ifdef __APPLE__
#include <CoreFoundation/CFPlugInCOM.h>
#elif __LINUX__
#include "sketchup/source/sketchup/macwin/unix_com.h"
#endif
#include <time.h>

#ifndef UNICHAR_DEFINED
#if defined(__APPLE__) || defined(__LINUX__)
typedef unsigned short unichar;
#else
typedef wchar_t unichar;
#define UNICHAR_DEFINED
#endif
typedef unichar UNICHAR;
#endif


extern const REFIID IID_IUnknown;
extern const REFIID IID_IDispatch;
extern const REFIID IID_IEnumVARIANT;
extern const REFIID IID_ISupportErrorInfo;
extern const REFIID IID_ISequentialStream;
extern const REFIID IID_IStream;
extern const REFIID GUID_NULL;

inline bool operator==(const REFIID& iid1, const REFIID& iid2)
{
    if( ((ULONG*)&iid1)[0] != ((ULONG*)&iid2)[0] ) return false;
    if( ((ULONG*)&iid1)[1] != ((ULONG*)&iid2)[1] ) return false;
    if( ((ULONG*)&iid1)[2] != ((ULONG*)&iid2)[2] ) return false;
    if( ((ULONG*)&iid1)[3] != ((ULONG*)&iid2)[3] ) return false;
    return true;
}

// On Windows, a BSTR ultimately translates into the same thing as our
// UNICHAR* so we use the same thing cross platform.
typedef UNICHAR* BSTR;

typedef REFIID IID;
typedef REFIID CLSID;

#define CLSID_NULL GUID_NULL
#define IID_NULL GUID_NULL

typedef unsigned long OLE_COLOR;
typedef time_t DATE;
typedef struct tagVARIANT VARIANT;

// We do not support IDispatch on the Mac, so make it the same as IUnknown
struct IDispatch : public IUnknown
{
    // We don't add any new methods, so just make the destructor virtual
    virtual ~IDispatch() {}
};

typedef struct IDispatch* LPDISPATCH;
typedef class IUnknown* LPUNKNOWN;

struct IEnumVARIANT : public IUnknown
{
 public:
    virtual HRESULT Next(/* [in] */ ULONG celt,
                         /* [length_is][size_is][out] */ VARIANT *rgVar,
                         /* [out] */ ULONG *pCeltFetched) = 0;
    virtual HRESULT Skip(/* [in] */ ULONG celt) = 0;
    virtual HRESULT Reset( void) = 0;
    virtual HRESULT Clone(/* [out] */ IEnumVARIANT **ppEnum) = 0;

    virtual ~IEnumVARIANT() {}
};

inline HRESULT OleTranslateColor(OLE_COLOR c1, void* dummy, unsigned long *c2)
{
    *c2 = c1;
    return S_OK;
}

//=============================================================================
// This implementation of IStream is a little different than that on Windows.
// In particular I don't define LARGE_INTEGER the same and don't bother with
// STATSTG.

struct ISequentialStream : public IUnknown
{
 public:
    virtual HRESULT Read(/* [out] */ void *pv,
                         /* [in] */ ULONG cb,
                         /* [out] */ ULONG *pcbRead) = 0;

    virtual HRESULT Write(/* [in] */ const void *pv,
                          /* [in] */ ULONG cb,
                          /* [out] */ ULONG *pcbWritten) = 0;

    virtual ~ISequentialStream() {}
};

typedef union _LARGE_INTEGER {
    struct {
        unsigned long LowPart;
        unsigned long HighPart;
    };
    struct {
        unsigned long LowPart;
        unsigned long HighPart;
    } u;
    long long QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;

typedef union _ULARGE_INTEGER {
    struct {
        unsigned long LowPart;
        unsigned long HighPart;
    };
    struct {
        unsigned long LowPart;
        unsigned long HighPart;
    } u;
    unsigned long long QuadPart;
} ULARGE_INTEGER, *PULARGE_INTEGER;

// STATSTG is really supposed to be a struct.  I don't intend to ever use
// it.  You shouldn't either!
typedef long STATSTG;

enum STREAM_SEEK
{
    STREAM_SEEK_SET = 0,
    STREAM_SEEK_CUR = 1,
    STREAM_SEEK_END = 2
};

struct IStream : public ISequentialStream
{
 public:
    virtual HRESULT Seek( /* [in] */ LARGE_INTEGER dlibMove,
                          /* [in] */ unsigned long dwOrigin,
                          /* [out] */ ULARGE_INTEGER *plibNewPosition) = 0;

    virtual HRESULT SetSize(/* [in] */ ULARGE_INTEGER libNewSize) = 0;

    virtual HRESULT CopyTo(/* [unique][in] */ IStream *pstm,
                           /* [in] */ ULARGE_INTEGER cb,
                           /* [out] */ ULARGE_INTEGER *pcbRead,
                           /* [out] */ ULARGE_INTEGER *pcbWritten) = 0;

    virtual HRESULT Commit(/* [in] */ unsigned long grfCommitFlags) = 0;

    virtual HRESULT Revert(void) = 0;

    virtual HRESULT LockRegion(/* [in] */ ULARGE_INTEGER libOffset,
                               /* [in] */ ULARGE_INTEGER cb,
                               /* [in] */ unsigned long dwLockType) = 0;

    virtual HRESULT UnlockRegion(/* [in] */ ULARGE_INTEGER libOffset,
                                 /* [in] */ ULARGE_INTEGER cb,
                                 /* [in] */ unsigned long dwLockType) = 0;

    virtual HRESULT Stat(/* [out] */ STATSTG *pstatstg,
                         /* [in] */ unsigned long grfStatFlag) = 0;

    virtual HRESULT Clone(/* [out] */ IStream **ppstm) = 0;

};


//=============================================================================

#define STDMETHOD(method) virtual HRESULT STDMETHODCALLTYPE method
#define STDMETHOD_(rettype, method) virtual rettype STDMETHODCALLTYPE method
#define STDMETHODIMP HRESULT STDMETHODCALLTYPE

//=============================================================================

class _com_error
{
 public:
    _com_error(HRESULT hr) { m_hresult = hr; }
    HRESULT Error() const { return m_hresult; }
 private:
    HRESULT m_hresult;
};

inline void _com_issue_error(HRESULT hr)
{
    _com_error theComError(hr);
    throw(theComError);
}

#define CHECK_ERROR(hr) if( FAILED(hr) ) _com_issue_error(hr)

#if defined(SU_SDK)
#include <Sketchup/comptr.h>
#else
#include "sketchup/source/sketchup/macwin/comptr.h"
#endif // SU_SDK

//=============================================================================
#endif  // SKETCHUP_SOURCE_SKETCHUP_MACWIN_COMTYPE_H_
