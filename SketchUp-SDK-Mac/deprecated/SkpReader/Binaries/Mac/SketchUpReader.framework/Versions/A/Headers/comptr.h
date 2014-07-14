// Copyright 2010 Google Inc. All Rights Reserved.

// Define a "smart" COM pointer.  This mostly just takes care of automatically
// doing the AddRef and Release for you

#ifndef SKETCHUP_SOURCE_SKETCHUP_MACWIN_COMPTR_H_
#define SKETCHUP_SOURCE_SKETCHUP_MACWIN_COMPTR_H_

#if (defined __APPLE__) || (defined __LINUX__)

// The purpose of this class is so that you cannot call AddRef or Release
// through operator-> on a CComPtr because that could mess up the reference
// counting.

template <class T>
class _NoAddRefReleaseOnCComPtr : public T {
 private:
  virtual ~_NoAddRefReleaseOnCComPtr() {}
  STDMETHOD_(ULONG, AddRef)()=0;
  STDMETHOD_(ULONG, Release)()=0;
};

// Assign a COM pointer from another one taking care off ref counting.
inline IUnknown* AssignComPtr(IUnknown** pp, IUnknown* lp) {
  if (lp != NULL)
    lp->AddRef();
  if (*pp)
    (*pp)->Release();
  *pp = lp;
  return lp;
}

inline IUnknown* AssignComPtrQI(IUnknown** pp, IUnknown* lp, REFIID riid) {
  if( pp == NULL ) return NULL;

  IUnknown* pTemp = *pp;
  *pp = NULL;
  if (lp != NULL)  lp->QueryInterface(riid, (void**)pp);
  if (pTemp) pTemp->Release();
  return *pp;
}

// The smart COM pointer class
template <class T>
class CComPtr {
 public:
  typedef T _PtrClass;
  CComPtr() : p(NULL) {};

  CComPtr(T* lp) : p(lp) {
    if (p != NULL)
      p->AddRef();
  }
  
  CComPtr(const CComPtr<T>& lp) : p(lp.p) {
    if (p != NULL)
      p->AddRef();
  }
  
  ~CComPtr() {
    if (p)
      p->Release();
  }
  void Release() {
    IUnknown* pTemp = p;
    if (pTemp) {
      p = NULL;
      pTemp->Release();
    }
  }
  
  operator T*() const {
    return (T*)p;
  }

  T& operator*() const {
    //ASSERT(p!=NULL);
    return *p;
  }
  
  //The assert on operator& usually indicates a bug.  If this is really
  //what is needed, however, take the address of the p member explicitly.
  T** operator&() {
    //ASSERT(p==NULL);
    return &p;
  }

  _NoAddRefReleaseOnCComPtr<T>* operator->() const {
    //ASSERT(p!=NULL);
    return (_NoAddRefReleaseOnCComPtr<T>*)p;
  }

  T* operator=(T* lp) {
    return (T*)AssignComPtr((IUnknown**)&p, lp);
  }
  
  T* operator=(const CComPtr<T>& lp) {
    return (T*)AssignComPtr((IUnknown**)&p, lp.p);
  }

  bool operator!() const {
    return (p == NULL);
  }

  bool operator<(T* pT) const {
    return p < pT;
  }

  bool operator==(T* pT) const {
    return p == pT;
  }

  // Compare two objects for equivalence
  bool IsEqualObject(IUnknown* pOther) {
    if (p == NULL && pOther == NULL)
      return true; // They are both NULL objects

    if (p == NULL || pOther == NULL)
      return false; // One is NULL the other is not

    CComPtr<IUnknown> punk1;
    CComPtr<IUnknown> punk2;
    p->QueryInterface(IID_IUnknown, (void**)&punk1);
    pOther->QueryInterface(IID_IUnknown, (void**)&punk2);
    return punk1 == punk2;
  }

  void Attach(T* p2) {
    if (p)
      p->Release();
    p = p2;
  }

  T* Detach() {
    T* pt = p;
    p = NULL;
    return pt;
  }
  
  HRESULT CopyTo(T** ppT) {
    ASSERT(ppT != NULL);
    if (ppT == NULL)
      return E_POINTER;
    *ppT = p;
    if (p)
      p->AddRef();
    return S_OK;
  }

 protected:
   T* p;
};

//-----------------------------------------------------------------------------
// This is a smart COM pointer that also will automatically do a QueryInterface
// if needed to get the right type.

template <class T, const IID* piid>
class CComQIPtr : public CComPtr<T>
{
 public:
  CComQIPtr() throw() {
  }

  CComQIPtr(T* lp) throw() :
    CComPtr<T>(lp) {
  }

  CComQIPtr(const CComQIPtr<T,piid>& lp) throw() :
    CComPtr<T>(lp.p) {
  }

  CComQIPtr(IUnknown* lp) throw() {
    T* ptr = NULL;
    if( lp ) lp->QueryInterface(*piid, (void **)&ptr);
    this->Attach(ptr);
  }

  template <class T2, const IID* piid2>
  CComQIPtr(const CComQIPtr<T2, piid2>& p2) {
    T* ptr = NULL;
    if( p2 ) p2->QueryInterface(*piid, (void**)&ptr);
    this->Attach(ptr);
  }

  T* operator=(const CComQIPtr<T,piid>& lp) throw() {
    return operator=((T*)lp);
  }

  T* operator=(IUnknown* lp) throw() {
    T* ptr = NULL;
    if( lp ) lp->QueryInterface(*piid, (void**)&ptr);
    return CComPtr<T>::operator=(ptr);
  }
};

//Specialization to make it work
template<>
class CComQIPtr<IUnknown, &IID_IUnknown> : public CComPtr<IUnknown>
{
 public:
  CComQIPtr() throw() {
  }
  
  CComQIPtr(IUnknown* lp) throw() {
    //Actually do a QI to get identity
    if (lp != NULL)
      lp->QueryInterface(IID_IUnknown, (void **)&p);
  }
  
  CComQIPtr(const CComQIPtr<IUnknown,&IID_IUnknown>& lp) throw() :
      CComPtr<IUnknown>(lp.p) {
  }

  IUnknown* operator=(IUnknown* lp) throw() {
    //Actually do a QI to get identity
    return AssignComPtrQI((IUnknown**)&p, lp, IID_IUnknown);
  }
  
  IUnknown* operator=(const CComQIPtr<IUnknown,&IID_IUnknown>& lp) throw() {
    return AssignComPtr((IUnknown**)&p, lp.p);
  }
};

#endif // __APPLE__

#endif  // SKETCHUP_SOURCE_SKETCHUP_MACWIN_COMPTR_H_
