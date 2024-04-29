/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 06:14:07 2038
 */
 /* Compiler settings for .\COMCalculator.IDL:
     Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628
     protocol : dce , ms_ext, c_ext, robust
     error checks: allocation ref bounds_check enum stub_data
     VC __declspec() decoration level:
          __declspec(uuid()), __declspec(selectany), __declspec(novtable)
          DECLSPEC_UUID(), MIDL_INTERFACE()
 */
 /* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __COMCalculator_h__
#define __COMCalculator_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */

#ifndef __ICalculator_FWD_DEFINED__
#define __ICalculator_FWD_DEFINED__
typedef interface ICalculator ICalculator;

#endif 	/* __ICalculator_FWD_DEFINED__ */


#ifndef __Caclulator_FWD_DEFINED__
#define __Caclulator_FWD_DEFINED__

#ifdef __cplusplus
typedef class Caclulator Caclulator;
#else
typedef struct Caclulator Caclulator;
#endif /* __cplusplus */

#endif 	/* __Caclulator_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C" {
#endif 



#ifndef __COMCalculator_LIBRARY_DEFINED__
#define __COMCalculator_LIBRARY_DEFINED__

    /* library COMCalculator */
    /* [custom][version][uuid] */



    EXTERN_C const IID LIBID_COMCalculator;

#ifndef __ICalculator_INTERFACE_DEFINED__
#define __ICalculator_INTERFACE_DEFINED__

    /* interface ICalculator */
    /* [object][custom][oleautomation][version][uuid] */


    EXTERN_C const IID IID_ICalculator;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("34BC4842-8C2B-49C0-816C-859F7A6DED5B")
        ICalculator : public IUnknown
    {
    public:
        virtual HRESULT __stdcall Add(
            /* [in] */ long x,
            /* [in] */ long y,
            /* [retval][out] */ long* pRetVal) = 0;

        virtual HRESULT __stdcall Subtract(
            /* [in] */ long x,
            /* [in] */ long y,
            /* [retval][out] */ long* pRetVal) = 0;

    };


#else 	/* C style interface */

    typedef struct ICalculatorVtbl
    {
        BEGIN_INTERFACE

            DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ICalculator* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                _COM_Outptr_  void** ppvObject);

        DECLSPEC_XFGVIRT(IUnknown, AddRef)
            ULONG(STDMETHODCALLTYPE* AddRef)(
                ICalculator* This);

        DECLSPEC_XFGVIRT(IUnknown, Release)
            ULONG(STDMETHODCALLTYPE* Release)(
                ICalculator* This);

        DECLSPEC_XFGVIRT(ICalculator, Add)
            HRESULT(__stdcall* Add)(
                ICalculator* This,
                /* [in] */ long x,
                /* [in] */ long y,
                /* [retval][out] */ long* pRetVal);

        DECLSPEC_XFGVIRT(ICalculator, Subtract)
            HRESULT(__stdcall* Subtract)(
                ICalculator* This,
                /* [in] */ long x,
                /* [in] */ long y,
                /* [retval][out] */ long* pRetVal);

        END_INTERFACE
    } ICalculatorVtbl;

    interface ICalculator
    {
        CONST_VTBL struct ICalculatorVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ICalculator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICalculator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICalculator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICalculator_Add(This,x,y,pRetVal)	\
    ( (This)->lpVtbl -> Add(This,x,y,pRetVal) ) 

#define ICalculator_Subtract(This,x,y,pRetVal)	\
    ( (This)->lpVtbl -> Subtract(This,x,y,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICalculator_INTERFACE_DEFINED__ */


    EXTERN_C const CLSID CLSID_Caclulator;

#ifdef __cplusplus

    class DECLSPEC_UUID("20372AAC-E4BB-42FA-82B0-FEA0732375BE")
        Calculator;
#endif
#endif /* __COMCalculator_LIBRARY_DEFINED__ */

    /* Additional Prototypes for ALL interfaces */

    /* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


