//-----------------------------------------------------------------------------
// A utility class that helps with HRESULTS and error checking.
// To Use:
//
//   HResult hr = comObj->func();
//
// If the result fails, an exception will be thrown with the
// offending HRESULT.
// Typically, one uses this as:
//
// HRESULT someFunction() 
// {
//   HResult hr;
//   try 
//   {
//      hr = comObj->func();
//   }
//   catch(HRESULT hResult) 
//   {
//      throw hResult;
//   }
//   return S_OK;
// }

#ifndef _HRESULT_H__
#define _HRESULT_H__
#ifdef __APPLE__
#include <CoreFoundation/CFPluginCOM.h>
#endif
class HResult 
{
public:
    HResult(HRESULT hr)
    {
        m_hr = hr;
        if(FAILED(hr))
        {
            throw hr;
        }
    }
    HResult()
    {
    }

    HResult& operator=(HRESULT hr)
    {
        m_hr = hr;
        if(FAILED(hr))
        {
            throw hr;
        }
        return *this;
    }

    bool operator==(HRESULT hr)
    {
        if (m_hr==hr)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

private:

    HRESULT m_hr;

};
#endif // _HRESULT_H__