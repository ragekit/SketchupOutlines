// Copyright 2010 Google Inc. All Rights Reserved.

#ifndef SKETCHUP_SOURCE_SKETCHUP_MACWIN_VARIANT_H_
#define SKETCHUP_SOURCE_SKETCHUP_MACWIN_VARIANT_H_

#include <string.h>

#if defined(SU_SDK)
  #include <SketchUp/comtype.h>
  #include <SketchUp/BSTR.h>
#else
  #include "sketchup/source/sketchup/macwin/comtype.h"
  #include "sketchup/source/sketchup/macwin/BSTR.h"
#endif // SU_SDK

typedef unsigned short VARTYPE;
typedef long SCODE;
typedef short VARIANT_BOOL;

#define VARIANT_TRUE ((VARIANT_BOOL)0xffff)
#define VARIANT_FALSE ((VARIANT_BOOL)0)

/*
 * VARENUM usage key,
 *
 * * [V] - may appear in a VARIANT
 * * [T] - may appear in a TYPEDESC
 * * [P] - may appear in an OLE property set
 * * [S] - may appear in a Safe Array
 *
 *
 *  VT_EMPTY            [V]   [P]     nothing
 *  VT_NULL             [V]   [P]     SQL style Null
 *  VT_I2               [V][T][P][S]  2 byte signed int
 *  VT_I4               [V][T][P][S]  4 byte signed int
 *  VT_R4               [V][T][P][S]  4 byte real
 *  VT_R8               [V][T][P][S]  8 byte real
 *  VT_CY               [V][T][P][S]  currency
 *  VT_DATE             [V][T][P][S]  date
 *  VT_BSTR             [V][T][P][S]  OLE Automation string
 *  VT_DISPATCH         [V][T][P][S]  IDispatch *
 *  VT_ERROR            [V][T][P][S]  SCODE
 *  VT_BOOL             [V][T][P][S]  True=-1, False=0
 *  VT_VARIANT          [V][T][P][S]  VARIANT *
 *  VT_UNKNOWN          [V][T]   [S]  IUnknown *
 *  VT_RECORD           [V]   [P][S]  user defined type
 *  VT_I1               [V][T][P][s]  signed char
 *  VT_UI1              [V][T][P][S]  unsigned char
 *  VT_UI2              [V][T][P][S]  unsigned short
 *  VT_UI4              [V][T][P][S]  unsigned short
 *  VT_I8                  [T][P]     signed 64-bit int
 *  VT_UI8                 [T][P]     unsigned 64-bit int
 *  VT_INT              [V][T][P][S]  signed machine int
 *  VT_UINT             [V][T]   [S]  unsigned machine int
 *  VT_VOID                [T]        C style void
 *  VT_HRESULT             [T]        Standard return type
 *  VT_PTR                 [T]        pointer type
 *  VT_SAFEARRAY           [T]        (use VT_ARRAY in VARIANT)
 *  VT_CARRAY              [T]        C style array
 *  VT_USERDEFINED         [T]        user defined type
 *  VT_LPSTR               [T][P]     null terminated string
 *  VT_LPWSTR              [T][P]     wide null terminated string
 *  VT_FILETIME               [P]     FILETIME
 *  VT_BLOB                   [P]     Length prefixed bytes
 *  VT_STREAM                 [P]     Name of the stream follows
 *  VT_STORAGE                [P]     Name of the storage follows
 *  VT_STREAMED_OBJECT        [P]     Stream contains an object
 *  VT_STORED_OBJECT          [P]     Storage contains an object
 *  VT_BLOB_OBJECT            [P]     Blob contains an object
 *  VT_CF                     [P]     Clipboard format
 *  VT_CLSID                  [P]     A Class ID
 *  VT_VECTOR                 [P]     simple counted array
 *  VT_ARRAY            [V]           SAFEARRAY*
 *  VT_BYREF            [V]           void* for local use
 *  VT_BSTR_BLOB                      Reserved for system use
 */

enum VARENUM {
  VT_EMPTY = 0, VT_NULL = 1, VT_I2 = 2, VT_I4 = 3, VT_R4 = 4, VT_R8 = 5,
  //VT_CY  = 6,
  VT_DATE = 7, VT_BSTR = 8, VT_DISPATCH = 9, VT_ERROR = 10, VT_BOOL = 11,
    VT_VARIANT = 12, VT_UNKNOWN = 13, VT_I1 = 16, VT_UI1 = 17, VT_UI2 = 18,
    VT_UI4 = 19, VT_I8 = 20, VT_UI8 = 21, VT_INT = 22, VT_UINT = 23, VT_VOID =
    24, VT_HRESULT = 25, VT_PTR = 26,
  //    VT_SAFEARRAY  = 27,
  VT_CARRAY = 28, VT_USERDEFINED = 29, VT_LPSTR = 30, VT_LPWSTR = 31, VT_RECORD
    = 36, VT_FILETIME = 64, VT_BLOB = 65, VT_STREAM = 66, VT_STORAGE = 67,
    VT_STREAMED_OBJECT = 68, VT_STORED_OBJECT = 69, VT_BLOB_OBJECT = 70, VT_CF
    = 71, VT_CLSID = 72, VT_BSTR_BLOB = 0xfff, VT_VECTOR = 0x1000, VT_ARRAY =
    0x2000, VT_BYREF = 0x4000, VT_RESERVED = 0x8000, VT_ILLEGAL = 0xffff,
    VT_ILLEGALMASKED = 0xfff, VT_TYPEMASK = 0xfff
};

struct tagVARIANT {
  VARTYPE vt;
  unsigned short wReserved1;
  unsigned short wReserved2;
  unsigned short wReserved3;
  union {
    long lVal;
    unsigned char bVal;
    short iVal;
    float fltVal;
    double dblVal;
    VARIANT_BOOL boolVal;
    long scode;
    //CY cyVal;
    DATE date;
    BSTR bstrVal;
    IUnknown *punkVal;
    IDispatch *pdispVal;
    //        SAFEARRAY *parray;
    unsigned char *pbVal;
    short *piVal;
    long *plVal;
    float *pfltVal;
    double *pdblVal;
    VARIANT_BOOL *pboolVal;
    SCODE *pscode;
    //        CY *pcyVal;
    DATE *pdate;
    BSTR *pbstrVal;
    IUnknown **ppunkVal;
    IDispatch **ppdispVal;
    //        SAFEARRAY **pparray;
    VARIANT *pvarVal;
    void *byref;
    char cVal;
    unsigned short uiVal;
    unsigned long ulVal;
    int intVal;
    unsigned int uintVal;
    char *pcVal;
    unsigned short *puiVal;
    unsigned long *pulVal;
    int *pintVal;
    unsigned int *puintVal;
  };
};

  #define V_VT(v) (v)->vt
  #define V_BOOL(v) (v)->boolVal
  #define V_UI1(v) (v)->bVal
  #define V_I2(v) (v)->iVal
  #define V_I4(v) (v)->lVal
  #define V_R4(v) (v)->fltVal
  #define V_R8(v) (v)->dblVal
  #define V_BSTR(v) (v)->bstrVal
  #define V_UNKNOWN(v) (v)->punkVal
  #define V_DISPATCH(v) (v)->pdispVal
  #define V_ERROR(v) (v)->scode
  #define V_DATE(v) (v)->date

//=============================================================================

inline HRESULT VariantInit(VARIANT *pv) {
  pv->vt = VT_EMPTY;
  pv->punkVal = NULL;
  return S_OK;
}

extern HRESULT VariantClear(VARIANT *pv);
extern HRESULT VariantCopy(VARIANT *pvDest, VARIANT *pvSrc);
extern HRESULT VariantChangeType(VARIANT *pvDest, VARIANT *pvSrc, short dummy,
                                 VARTYPE vt);

//=============================================================================

class _variant_t:public::tagVARIANT {
 public:
  // Constructors
  //
  _variant_t()throw();

  _variant_t(const VARIANT &varSrc)throw(_com_error);
  _variant_t(const VARIANT *pSrc)throw(_com_error);
  _variant_t(const _variant_t &varSrc)throw(_com_error);

  _variant_t(VARIANT &varSrc, bool fCopy)throw(_com_error);
  // Attach VARIANT if !fCopy

  _variant_t(short sSrc, VARTYPE vtSrc = VT_I2)throw(_com_error);
  // Creates a VT_I2, or a VT_BOOL
  _variant_t(long lSrc, VARTYPE vtSrc = VT_I4)throw(_com_error);
  // Creates a VT_I4, a VT_ERROR, or a VT_BOOL
  _variant_t(int iSrc);
  _variant_t(float fltSrc)throw(); // Creates a VT_R4
  _variant_t(double dblSrc); // Creates a VT_R8
  //    _variant_t(const _bstr_t& bstrSrc) throw(_com_error);        // Creates a VT_BSTR
  _variant_t(const WCHAR *pSrc)throw(_com_error); // Creates a VT_BSTR
  _variant_t(const char *pSrc)throw(_com_error); // Creates a VT_BSTR
  _variant_t(IDispatch *pSrc, bool fAddRef = true)throw();
  // Creates a VT_DISPATCH
  _variant_t(bool bSrc)throw(); // Creates a VT_BOOL
  _variant_t(IUnknown *pSrc, bool fAddRef = true)throw();
  // Creates a VT_UNKNOWN
  _variant_t(BYTE bSrc)throw(); // Creates a VT_UI1

  //_variant_t(unsigned char value);
  _variant_t(unsigned short value);
  _variant_t(unsigned long value);
  _variant_t(unsigned int value);

  // Destructor
  //
  ~_variant_t()throw(_com_error);

  // Extractors
  //
  operator char()const throw(_com_error);
  //operator unsigned char() const throw(_com_error);
  operator short()const throw(_com_error); // Extracts a short from a VT_I2
  operator unsigned short()const throw(_com_error);
  // Extracts a short from a VT_I2
  operator long()const throw(_com_error); // Extracts a long from a VT_I4
  operator unsigned long()const throw(_com_error);
  // Extracts a long from a VT_I4
  operator int()const throw(_com_error); // Extracts a long from a VT_I4
  operator unsigned int()const throw(_com_error);
  // Extracts a long from a VT_I4
  operator float()const throw(_com_error); // Extracts a float from a VT_R4
  operator double()const throw(_com_error); // Extracts a double from a VT_R8
  //    operator _bstr_t() const throw(_com_error);      // Extracts a _bstr_t from a VT_BSTR
  operator IDispatch *()const throw(_com_error);
  // Extracts a IDispatch* from a VT_DISPATCH
  operator bool()const throw(_com_error); // Extracts a bool from a VT_BOOL
  operator IUnknown *()const throw(_com_error);
  // Extracts a IUnknown* from a VT_UNKNOWN
  operator BYTE()const throw(_com_error);
  // Extracts a BTYE (unsigned char) from a VT_UI1

  // Assignment operations
  //
  _variant_t &operator = (const VARIANT &varSrc)throw(_com_error);
  _variant_t &operator = (const VARIANT *pSrc)throw(_com_error);
  _variant_t &operator = (const _variant_t &varSrc)throw(_com_error);

  _variant_t &operator = (short sSrc)throw(_com_error);
  // Assign a VT_I2, or a VT_BOOL
  _variant_t &operator = (long lSrc)throw(_com_error);
  // Assign a VT_I4, a VT_ERROR or a VT_BOOL
  _variant_t &operator = (float fltSrc)throw(_com_error); // Assign a VT_R4
  _variant_t &operator = (double dblSrc)throw(_com_error); // Assign a VT_R8
  //    _variant_t& operator=(const _bstr_t& bstrSrc) throw(_com_error);  // Assign a VT_BSTR
  _variant_t &operator = (const WCHAR *pSrc)throw(_com_error);
  // Assign a VT_BSTR
  _variant_t &operator = (const char *pSrc)throw(_com_error);
  // Assign a VT_BSTR
  _variant_t &operator = (IDispatch *pSrc)throw(_com_error);
  // Assign a VT_DISPATCH
  _variant_t &operator = (bool bSrc)throw(_com_error); // Assign a VT_BOOL
  _variant_t &operator = (IUnknown *pSrc)throw(_com_error);
  // Assign a VT_UNKNOWN
  _variant_t &operator = (BYTE bSrc)throw(_com_error); // Assign a VT_UI1

  // Comparison operations
  //
  bool operator == (const VARIANT &varSrc)const throw(_com_error);
  bool operator == (const VARIANT *pSrc)const throw(_com_error);

  bool operator != (const VARIANT &varSrc)const throw(_com_error);
  bool operator != (const VARIANT *pSrc)const throw(_com_error);

  // Low-level operations
  //
  void Clear()throw(_com_error);

  void Attach(VARIANT &varSrc)throw(_com_error);
  VARIANT Detach()throw(_com_error);

  void ChangeType(VARTYPE vartype, const _variant_t *pSrc = NULL)throw
                  (_com_error);

  void SetString(const char *pSrc)throw(_com_error); // used to set ANSI string
};

//////////////////////////////////////////////////////////////////////////////////////////
//
// Constructors
//
//////////////////////////////////////////////////////////////////////////////////////////

// Default constructor
//
inline _variant_t::_variant_t()throw() {
  ::VariantInit(this);
}

// Construct a _variant_t from a const VARIANT&
//
inline _variant_t::_variant_t(const VARIANT &varSrc)throw(_com_error) {
  ::VariantInit(this);
  CHECK_ERROR(::VariantCopy(this, const_cast < VARIANT * > (&varSrc)));
}

// Construct a _variant_t from a const VARIANT*
//
inline _variant_t::_variant_t(const VARIANT *pSrc)throw(_com_error) {
  ::VariantInit(this);
  CHECK_ERROR(::VariantCopy(this, const_cast < VARIANT * > (pSrc)));
}

// Construct a _variant_t from a const _variant_t&
//
inline _variant_t::_variant_t(const _variant_t &varSrc)throw(_com_error) {
  ::VariantInit(this);
  CHECK_ERROR(::VariantCopy(this, const_cast < VARIANT * > (static_cast < const
              VARIANT * > (&varSrc))));
}

// Construct a _variant_t from a VARIANT&.  If fCopy is FALSE, give control of
// data to the _variant_t without doing a VariantCopy.
//
inline _variant_t::_variant_t(VARIANT &varSrc, bool fCopy)throw(_com_error) {
  if (fCopy) {
    ::VariantInit(this);
    CHECK_ERROR(::VariantCopy(this, &varSrc));
  } else {
    memcpy(this, &varSrc, sizeof(varSrc));
    V_VT(&varSrc) = VT_EMPTY;
  }
}

// Construct either a VT_I2 VARIANT or a VT_BOOL VARIANT from
// a short (the default is VT_I2)
//
inline _variant_t::_variant_t(short sSrc, VARTYPE vtSrc)throw(_com_error) {
  if ((vtSrc != VT_I2) && (vtSrc != VT_BOOL)) {
    _com_issue_error(E_INVALIDARG);
  }

  if (vtSrc == VT_BOOL) {
    V_VT(this) = VT_BOOL;
    V_BOOL(this) = (sSrc ? VARIANT_TRUE : VARIANT_FALSE);
  } else {
    V_VT(this) = VT_I2;
    V_I2(this) = sSrc;
  }
}

// Construct either a VT_I4 VARIANT, a VT_BOOL VARIANT, or a
// VT_ERROR VARIANT from a long (the default is VT_I4)
//
inline _variant_t::_variant_t(long lSrc, VARTYPE vtSrc)throw(_com_error) {
  if ((vtSrc != VT_I4) && (vtSrc != VT_ERROR) && (vtSrc != VT_BOOL)) {
    _com_issue_error(E_INVALIDARG);
  }

  if (vtSrc == VT_ERROR) {
    V_VT(this) = VT_ERROR;
    V_ERROR(this) = lSrc;
  } else if (vtSrc == VT_BOOL) {
    V_VT(this) = VT_BOOL;
    V_BOOL(this) = (lSrc ? VARIANT_TRUE : VARIANT_FALSE);
  } else {
    V_VT(this) = VT_I4;
    V_I4(this) = lSrc;
  }
}

inline _variant_t::_variant_t(int value) {
  vt = VT_INT;
  intVal = value;
}

/*
inline _variant_t::_variant_t(unsigned char value)
{
vt = VT_UI1;
bVal = value
}
 */

inline _variant_t::_variant_t(unsigned short value) {
  vt = VT_UI2;
  uiVal = value;
}

inline _variant_t::_variant_t(unsigned long value) {
  vt = VT_UI4;
  ulVal = value;
}

inline _variant_t::_variant_t(unsigned int value) {
  vt = VT_UINT;
  uintVal = value;
}

// Construct a VT_R4 VARIANT from a float
//
inline _variant_t::_variant_t(float fltSrc)throw() {
  V_VT(this) = VT_R4;
  V_R4(this) = fltSrc;
}

// Construct either a VT_R8 VARIANT
//
inline _variant_t::_variant_t(double dblSrc) {
  V_VT(this) = VT_R8;
  V_R8(this) = dblSrc;
}

// Construct a VT_BSTR VARIANT from a const _bstr_t&
//
/*
inline _variant_t::_variant_t(const _bstr_t& bstrSrc) throw(_com_error)
{
V_VT(this) = VT_BSTR;

BSTR bstr = static_cast<WCHAR*>(bstrSrc);
V_BSTR(this) = ::SysAllocStringByteLen(reinterpret_cast<char*>(bstr),
::SysStringByteLen(bstr));

if (V_BSTR(this) == NULL) {
_com_issue_error(E_OUTOFMEMORY);
}
}
 */

// Construct a VT_BSTR VARIANT from a const WCHAR*
//
inline _variant_t::_variant_t(const WCHAR *pSrc)throw(_com_error) {
  V_VT(this) = VT_BSTR;
  V_BSTR(this) = BSTRCreate(pSrc);

  if (V_BSTR(this) == NULL && pSrc != NULL) {
    _com_issue_error(E_OUTOFMEMORY);
  }
}

// Construct a VT_BSTR VARIANT from a const char*
//
inline _variant_t::_variant_t(const char *pSrc)throw(_com_error) {
  V_VT(this) = VT_BSTR;
  V_BSTR(this) = BSTRCreate(pSrc);

  if (V_BSTR(this) == NULL && pSrc != NULL) {
    _com_issue_error(E_OUTOFMEMORY);
  }
}

// Construct a VT_DISPATCH VARIANT from an IDispatch*
//
inline _variant_t::_variant_t(IDispatch *pSrc, bool fAddRef)throw() {
  V_VT(this) = VT_DISPATCH;
  V_DISPATCH(this) = pSrc;

  // Need the AddRef() as VariantClear() calls Release(), unless fAddRef
  // false indicates we're taking ownership
  //
  if (fAddRef) {
    V_DISPATCH(this)->AddRef();
  }
}

// Construct a VT_BOOL VARIANT from a bool
//
inline _variant_t::_variant_t(bool bSrc)throw() {
  V_VT(this) = VT_BOOL;
  V_BOOL(this) = (bSrc ? VARIANT_TRUE : VARIANT_FALSE);
}

// Construct a VT_UNKNOWN VARIANT from an IUnknown*
//
inline _variant_t::_variant_t(IUnknown *pSrc, bool fAddRef)throw() {
  V_VT(this) = VT_UNKNOWN;
  V_UNKNOWN(this) = pSrc;

  // Need the AddRef() as VariantClear() calls Release(), unless fAddRef
  // false indicates we're taking ownership
  //
  if (fAddRef) {
    V_UNKNOWN(this)->AddRef();
  }
}

// Construct a VT_UI1 VARIANT from a BYTE (unsigned char)
//
inline _variant_t::_variant_t(BYTE bSrc)throw() {
  V_VT(this) = VT_UI1;
  V_UI1(this) = bSrc;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Extractors
//
//////////////////////////////////////////////////////////////////////////////////////////

inline _variant_t::operator char()const throw(_com_error) {
  if (V_VT(this) == VT_I1) {
    return cVal;
  }

  _variant_t varDest;

  varDest.ChangeType(VT_I1, this);

  return varDest.cVal;
}

// Extracts a VT_I2 into a short
//
inline _variant_t::operator short()const throw(_com_error) {
  if (V_VT(this) == VT_I2) {
    return V_I2(this);
  }

  _variant_t varDest;

  varDest.ChangeType(VT_I2, this);

  return V_I2(&varDest);
}

inline _variant_t::operator unsigned short()const throw(_com_error) {
  if (V_VT(this) == VT_UI2) {
    return uiVal;
  }

  _variant_t varDest;

  varDest.ChangeType(VT_UI2, this);

  return V_I2(&varDest);
}

// Extracts a VT_I4 into a long
//
inline _variant_t::operator long()const throw(_com_error) {
  if (V_VT(this) == VT_I4) {
    return V_I4(this);
  }

  _variant_t varDest;

  varDest.ChangeType(VT_I4, this);

  return V_I4(&varDest);
}

inline _variant_t::operator unsigned long()const throw(_com_error) {
  if (V_VT(this) == VT_UI4) {
    return ulVal;
  }

  _variant_t varDest;
  varDest.ChangeType(VT_UI4, this);
  return varDest.ulVal;
}

inline _variant_t::operator int()const throw(_com_error) {
  if (V_VT(this) == VT_INT) {
    return this->intVal;
  }

  _variant_t varDest;

  varDest.ChangeType(VT_INT, this);

  return varDest.intVal;
}

inline _variant_t::operator unsigned int()const throw(_com_error) {
  if (V_VT(this) == VT_UINT) {
    return this->uintVal;
  }

  _variant_t varDest;

  varDest.ChangeType(VT_UINT, this);

  return varDest.uintVal;
}

// Extracts a VT_R4 into a float
//
inline _variant_t::operator float()const throw(_com_error) {
  if (V_VT(this) == VT_R4) {
    return V_R4(this);
  }

  _variant_t varDest;

  varDest.ChangeType(VT_R4, this);

  return V_R4(&varDest);
}

// Extracts a VT_R8 into a double
//
inline _variant_t::operator double()const throw(_com_error) {
  if (V_VT(this) == VT_R8) {
    return V_R8(this);
  }

  _variant_t varDest;

  varDest.ChangeType(VT_R8, this);

  return V_R8(&varDest);
}

// Extracts a VT_BSTR into a _bstr_t
//
/*
inline _variant_t::operator _bstr_t() const throw(_com_error)
{
if (V_VT(this) == VT_BSTR) {
return V_BSTR(this);
}

_variant_t varDest;

varDest.ChangeType(VT_BSTR, this);

return V_BSTR(&varDest);
}
 */

// Extracts a VT_DISPATCH into an IDispatch*
//
inline _variant_t::operator IDispatch *()const throw(_com_error) {
  if (V_VT(this) == VT_DISPATCH) {
    V_DISPATCH(this)->AddRef();
    return V_DISPATCH(this);
  }

  _variant_t varDest;

  varDest.ChangeType(VT_DISPATCH, this);

  V_DISPATCH(&varDest)->AddRef();
  return V_DISPATCH(&varDest);
}

// Extract a VT_BOOL into a bool
//
inline _variant_t::operator bool()const throw(_com_error) {
  if (V_VT(this) == VT_BOOL) {
    return V_BOOL(this) ? true : false;
  }

  _variant_t varDest;

  varDest.ChangeType(VT_BOOL, this);

  return V_BOOL(&varDest) ? true : false;
}

// Extracts a VT_UNKNOWN into an IUnknown*
//
inline _variant_t::operator IUnknown *()const throw(_com_error) {
  if (V_VT(this) == VT_UNKNOWN) {
    V_UNKNOWN(this)->AddRef();
    return V_UNKNOWN(this);
  }

  _variant_t varDest;

  varDest.ChangeType(VT_UNKNOWN, this);

  V_UNKNOWN(&varDest)->AddRef();
  return V_UNKNOWN(&varDest);
}

// Extracts a VT_UI1 into a BYTE (unsigned char)
//
inline _variant_t::operator BYTE()const throw(_com_error) {
  if (V_VT(this) == VT_UI1) {
    return V_UI1(this);
  }

  _variant_t varDest;

  varDest.ChangeType(VT_UI1, this);

  return V_UI1(&varDest);
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Assignment operations
//
//////////////////////////////////////////////////////////////////////////////////////////

// Assign a const VARIANT& (::VariantCopy handles everything)
//
inline _variant_t &_variant_t::operator = (const VARIANT &varSrc)throw
  (_com_error) {
  CHECK_ERROR(::VariantCopy(this, const_cast < VARIANT * > (&varSrc)));
  return  *this;
}

// Assign a const VARIANT* (::VariantCopy handles everything)
//
inline _variant_t &_variant_t::operator = (const VARIANT *pSrc)throw(_com_error)
  {
  CHECK_ERROR(::VariantCopy(this, const_cast < VARIANT * > (pSrc)));
  return  *this;
}

// Assign a const _variant_t& (::VariantCopy handles everything)
//
inline _variant_t &_variant_t::operator = (const _variant_t &varSrc)throw
  (_com_error) {
  CHECK_ERROR(::VariantCopy(this, const_cast < VARIANT * > (static_cast < const
              VARIANT * > (&varSrc))));
  return  *this;
}

// Assign a short creating either VT_I2 VARIANT or a
// VT_BOOL VARIANT (VT_I2 is the default)
//
inline _variant_t &_variant_t::operator = (short sSrc)throw(_com_error) {
  if (V_VT(this) == VT_I2) {
    V_I2(this) = sSrc;
  } else if (V_VT(this) == VT_BOOL) {
    V_BOOL(this) = (sSrc ? VARIANT_TRUE : VARIANT_FALSE);
  } else {
    // Clear the VARIANT and create a VT_I2
    //
    Clear();

    V_VT(this) = VT_I2;
    V_I2(this) = sSrc;
  }

  return  *this;
}

// Assign a long creating either VT_I4 VARIANT, a VT_ERROR VARIANT
// or a VT_BOOL VARIANT (VT_I4 is the default)
//
inline _variant_t &_variant_t::operator = (long lSrc)throw(_com_error) {
  if (V_VT(this) == VT_I4) {
    V_I4(this) = lSrc;
  } else if (V_VT(this) == VT_ERROR) {
    V_ERROR(this) = lSrc;
  } else if (V_VT(this) == VT_BOOL) {
    V_BOOL(this) = (lSrc ? VARIANT_TRUE : VARIANT_FALSE);
  } else {
    // Clear the VARIANT and create a VT_I4
    //
    Clear();

    V_VT(this) = VT_I4;
    V_I4(this) = lSrc;
  }

  return  *this;
}

// Assign a float creating a VT_R4 VARIANT
//
inline _variant_t &_variant_t::operator = (float fltSrc)throw(_com_error) {
  if (V_VT(this) != VT_R4) {
    // Clear the VARIANT and create a VT_R4
    //
    Clear();

    V_VT(this) = VT_R4;
  }

  V_R4(this) = fltSrc;

  return  *this;
}

// Assign a double creating a VT_R8 VARIANT
//
inline _variant_t &_variant_t::operator = (double dblSrc)throw(_com_error) {
  // Clear the VARIANT and create a VT_R8
  //
  Clear();

  V_VT(this) = VT_R8;
  V_R8(this) = dblSrc;

  return  *this;
}

// Assign a const _bstr_t& creating a VT_BSTR VARIANT
/*
inline _variant_t& _variant_t::operator=(const _bstr_t& bstrSrc) throw(_com_error)
{
// Clear the VARIANT (This will SysFreeString() any previous occupant)
//
Clear();

V_VT(this) = VT_BSTR;

if (!bstrSrc) {
V_BSTR(this) = NULL;
}
else {
BSTR bstr = static_cast<WCHAR*>(bstrSrc);
V_BSTR(this) = ::SysAllocStringByteLen(reinterpret_cast<char*>(bstr),
::SysStringByteLen(bstr));

if (V_BSTR(this) == NULL) {
_com_issue_error(E_OUTOFMEMORY);
}
}

return *this;
}
 */

// Assign a const WCHAR* creating a VT_BSTR VARIANT
//
inline _variant_t &_variant_t::operator = (const WCHAR *pSrc)throw(_com_error) {
  // Clear the VARIANT (This will SysFreeString() any previous occupant)
  //
  Clear();

  V_VT(this) = VT_BSTR;

  if (pSrc == NULL) {
    V_BSTR(this) = NULL;
  } else {
    V_BSTR(this) = BSTRCreate(pSrc);

    if (V_BSTR(this) == NULL) {
      _com_issue_error(E_OUTOFMEMORY);
    }
  }

  return  *this;
}

// Assign a const char* creating a VT_BSTR VARIANT
//
inline _variant_t &_variant_t::operator = (const char *pSrc)throw(_com_error) {
  // Clear the VARIANT (This will SysFreeString() any previous occupant)
  //
  Clear();

  V_VT(this) = VT_BSTR;
  V_BSTR(this) = BSTRCreate(pSrc);

  if (V_BSTR(this) == NULL && pSrc != NULL) {
    _com_issue_error(E_OUTOFMEMORY);
  }

  return  *this;
}

// Assign an IDispatch* creating a VT_DISPATCH VARIANT
//
inline _variant_t &_variant_t::operator = (IDispatch *pSrc)throw(_com_error) {
  // Clear the VARIANT (This will Release() any previous occupant)
  //
  Clear();

  V_VT(this) = VT_DISPATCH;
  V_DISPATCH(this) = pSrc;

  // Need the AddRef() as VariantClear() calls Release()
  //
  V_DISPATCH(this)->AddRef();

  return  *this;
}

// Assign a bool creating a VT_BOOL VARIANT
//
inline _variant_t &_variant_t::operator = (bool bSrc)throw(_com_error) {
  if (V_VT(this) != VT_BOOL) {
    // Clear the VARIANT and create a VT_BOOL
    //
    Clear();

    V_VT(this) = VT_BOOL;
  }

  V_BOOL(this) = (bSrc ? VARIANT_TRUE : VARIANT_FALSE);

  return  *this;
}

// Assign an IUnknown* creating a VT_UNKNOWN VARIANT
//
inline _variant_t &_variant_t::operator = (IUnknown *pSrc)throw(_com_error) {
  // Clear VARIANT (This will Release() any previous occupant)
  //
  Clear();

  V_VT(this) = VT_UNKNOWN;
  V_UNKNOWN(this) = pSrc;

  // Need the AddRef() as VariantClear() calls Release()
  //
  V_UNKNOWN(this)->AddRef();

  return  *this;
}

// Assign a BTYE (unsigned char) creating a VT_UI1 VARIANT
//
inline _variant_t &_variant_t::operator = (BYTE bSrc)throw(_com_error) {
  if (V_VT(this) != VT_UI1) {
    // Clear the VARIANT and create a VT_UI1
    //
    Clear();

    V_VT(this) = VT_UI1;
  }

  V_UI1(this) = bSrc;

  return  *this;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Comparison operations
//
//////////////////////////////////////////////////////////////////////////////////////////

// Compare a _variant_t against a const VARIANT& for equality
//
inline bool _variant_t::operator == (const VARIANT &varSrc)const throw
                                     (_com_error) {
  return  *this ==  &varSrc;
}

// Compare a _variant_t against a const VARIANT* for equality
//
inline bool _variant_t::operator == (const VARIANT *pSrc)const throw(_com_error)
                                     {
  if (this == pSrc) {
    return true;
  }

  //
  // Variants not equal if types don't match
  //
  if (V_VT(this) != V_VT(pSrc)) {
    return false;
  }

  //
  // Check type specific values
  //
  switch (V_VT(this)) {
    case VT_EMPTY:
    case VT_NULL:
      return true;

    case VT_I2:
      return V_I2(this) == V_I2(pSrc);

    case VT_I4:
      return V_I4(this) == V_I4(pSrc);

    case VT_R4:
      return V_R4(this) == V_R4(pSrc);

    case VT_R8:
      return V_R8(this) == V_R8(pSrc);

    case VT_DATE:
      return V_DATE(this) == V_DATE(pSrc);

    case VT_BSTR:
      return BSTREqual(V_BSTR(this), V_BSTR(pSrc));

    case VT_DISPATCH:
      return V_DISPATCH(this) == V_DISPATCH(pSrc);

    case VT_ERROR:
      return V_ERROR(this) == V_ERROR(pSrc);

    case VT_BOOL:
      return V_BOOL(this) == V_BOOL(pSrc);

    case VT_UNKNOWN:
      return V_UNKNOWN(this) == V_UNKNOWN(pSrc);

    case VT_UI1:
      return V_UI1(this) == V_UI1(pSrc);

    default:
      _com_issue_error(E_INVALIDARG);
      // fall through
  }

  return false;
}

// Compare a _variant_t against a const VARIANT& for in-equality
//
inline bool _variant_t::operator != (const VARIANT &varSrc)const throw
                                     (_com_error) {
  return !(*this ==  &varSrc);
}

// Compare a _variant_t against a const VARIANT* for in-equality
//
inline bool _variant_t::operator != (const VARIANT *pSrc)const throw(_com_error)
                                     {
  return !(*this == pSrc);
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Low-level operations
//
//////////////////////////////////////////////////////////////////////////////////////////

// Clear the _variant_t
//
inline void _variant_t::Clear()throw(_com_error) {
  CHECK_ERROR(::VariantClear(this));
}

inline void _variant_t::Attach(VARIANT &varSrc)throw(_com_error) {
  //
  // Free up previous VARIANT
  //
  Clear();

  //
  // Give control of data to _variant_t
  //
  memcpy(this, &varSrc, sizeof(varSrc));
  V_VT(&varSrc) = VT_EMPTY;
}

inline VARIANT _variant_t::Detach()throw(_com_error) {
  VARIANT varResult =  *this;
  V_VT(this) = VT_EMPTY;

  return varResult;
}

// Change the type and contents of this _variant_t to the type vartype and
// contents of pSrc
//
inline void _variant_t::ChangeType(VARTYPE vartype, const _variant_t *pSrc)
                                   throw(_com_error) {
  //
  // If pDest is NULL, convert type in place
  //
  if (pSrc == NULL) {
    pSrc = this;
  }

  if ((this != pSrc) || (vartype != V_VT(this))) {
    CHECK_ERROR(::VariantChangeType(static_cast < VARIANT * > (this),
                const_cast < VARIANT * > (static_cast < const VARIANT * > (pSrc)
                ), 0, vartype));
  }
}

inline void _variant_t::SetString(const char *pSrc)throw(_com_error) {
  //
  // Free up previous VARIANT
  //
  Clear();

  V_VT(this) = VT_BSTR;
  V_BSTR(this) = BSTRCreate(pSrc);

  if (V_BSTR(this) == NULL && pSrc != NULL) {
    _com_issue_error(E_OUTOFMEMORY);
  }
}

//////////////////////////////////////////////////////////////////////////////////////////
//
// Destructor
//
//////////////////////////////////////////////////////////////////////////////////////////

inline _variant_t::~_variant_t()throw(_com_error) {
  CHECK_ERROR(::VariantClear(this));
}


//=============================================================================
#endif  // SKETCHUP_SOURCE_SKETCHUP_MACWIN_VARIANT_H_
