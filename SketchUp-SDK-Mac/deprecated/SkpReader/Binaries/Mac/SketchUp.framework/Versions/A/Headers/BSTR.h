// Copyright 2010 Google Inc. All Rights Reserved.

#ifndef SKETCHUP_SOURCE_SKETCHUP_MACWIN_BSTR_H_
#define SKETCHUP_SOURCE_SKETCHUP_MACWIN_BSTR_H_

#if defined(__APPLE__) || defined(__LINUX__)

#if defined(SU_SDK)
  #include <SketchUp/wintype.h>
  #include <SketchUp/comtype.h>
#else
  #include "sketchup/source/common/utils/mac/wintype.h"
  #include "sketchup/source/sketchup/macwin/comtype.h"
#endif // SU_SDK

#ifdef __OBJC__
  #include <Foundation/NSString.h>
#endif

class _variant_t;

// Wrapper class for BSTR
class _bstr_t {
 public:
  // Constructors
  //
  _bstr_t() throw();
  _bstr_t(const _bstr_t& s) throw();
  _bstr_t(const char* s);
  _bstr_t(const UNICHAR* s);

  // _bstr_t(const _variant_t& var);
  // If fCopy is false, we take ownership of the BSTR and will release on dtor.
  _bstr_t(BSTR bstr, bool fCopy);

  // Destructor
  ~_bstr_t() throw();

  // Assignment operators
  _bstr_t& operator=(const _bstr_t& s) throw();
  _bstr_t& operator=(const char* s);
  _bstr_t& operator=(const UNICHAR* s);
  // _bstr_t& operator=(const _variant_t& var);

  // Operators
  _bstr_t& operator+=(const _bstr_t& s);
  _bstr_t operator+(const _bstr_t& s) const;

  // Friend operators
  friend _bstr_t operator+(const char* s1, const _bstr_t& s2);
  friend _bstr_t operator+(const UNICHAR* s1, const _bstr_t& s2);

  // Extractors
  operator const UNICHAR*() const throw();
  operator UNICHAR*() const throw();
  operator const char*() const;
  operator char*() const;

  // Comparison operators
  bool operator!() const throw();
  bool operator==(const _bstr_t& str) const throw();
  bool operator!=(const _bstr_t& str) const throw();
  bool operator<(const _bstr_t& str) const throw();
  bool operator>(const _bstr_t& str) const throw();
  bool operator<=(const _bstr_t& str) const throw();
  bool operator>=(const _bstr_t& str) const throw();

  // Low-level helper functions
  BSTR copy(bool fCopy = true) const;
  unsigned int length() const throw();

  // Binary string assign
  void Assign(BSTR s);

  // Get the physical BSTR
  BSTR& GetBSTR();
  BSTR* GetAddress();

  // Attach to the internal BSTR w/o copying
  void Attach(BSTR s);

  // Detach the internal BSTR
  BSTR Detach() throw();

 private:
  // Referenced counted wrapper
  class Data_t {
   public:
    // Constructors
    Data_t(const char* s);
    Data_t(const UNICHAR* s);
    Data_t(BSTR bstr, bool fCopy);
    Data_t(const _bstr_t& s1, const _bstr_t& s2);

    // Reference counting routines
    unsigned long AddRef() throw();
    unsigned long Release() throw();
    unsigned long RefCount() const throw();

    // Extractors
    operator const UNICHAR*() const throw();
    operator const char*() const ;

    // Low-level helper functions
    const UNICHAR* GetWString() const throw();
    UNICHAR*& GetWString() throw();
    const char* GetString() const ;

    BSTR Copy() const;
    void Assign(BSTR s);
    void Attach(BSTR s) throw();
    unsigned int Length() const throw();
    int Compare(const Data_t& str) const throw();

    // Exception agnostic wrapper for new
    void* operator new(size_t sz);

   private:
    BSTR            m_wstr;
    mutable char*   m_str;
    unsigned long   m_RefCount;

    // Never allow default construction
    Data_t() throw();

    // Never allow copy
    Data_t(const Data_t& s) throw();

    // Prevent deletes from outside. Release() must be used.
    ~Data_t() throw();

    void _Free() throw();
  };

 private:
  // Reference counted representation
  Data_t* m_Data;

 private:
  // Low-level utilities
  void _AddRef() throw();
  void _Free() throw();
  int _Compare(const _bstr_t& str) const throw();
};

const char *BSTRToUTF8(BSTR s);
const char *BSTRToPath(BSTR s);

BSTR BSTRCreate(const char *s);
BSTR BSTRCreate(const WCHAR *s);
bool BSTREqual(BSTR s1, BSTR s2);

BSTR SysAllocString(const char *s);
BSTR SysAllocString(const WCHAR *s);

void SysFreeString(BSTR s);

#endif // __APPLE__

#endif  // SKETCHUP_SOURCE_SKETCHUP_MACWIN_BSTR_H_
