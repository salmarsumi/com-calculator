

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

#ifndef __ICalculatorEvents_FWD_DEFINED__
#define __ICalculatorEvents_FWD_DEFINED__
typedef interface ICalculatorEvents ICalculatorEvents;

#endif 	/* __ICalculatorEvents_FWD_DEFINED__ */


#ifndef __ICalculator_FWD_DEFINED__
#define __ICalculator_FWD_DEFINED__
typedef interface ICalculator ICalculator;

#endif 	/* __ICalculator_FWD_DEFINED__ */


#ifndef ___LoggerFactory_FWD_DEFINED__
#define ___LoggerFactory_FWD_DEFINED__
typedef interface _LoggerFactory _LoggerFactory;

#endif 	/* ___LoggerFactory_FWD_DEFINED__ */


#ifndef ___MultiplyCompletedHandler_FWD_DEFINED__
#define ___MultiplyCompletedHandler_FWD_DEFINED__
typedef interface _MultiplyCompletedHandler _MultiplyCompletedHandler;

#endif 	/* ___MultiplyCompletedHandler_FWD_DEFINED__ */


#ifndef __LoggerFactory_FWD_DEFINED__
#define __LoggerFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class LoggerFactory LoggerFactory;
#else
typedef struct LoggerFactory LoggerFactory;
#endif /* __cplusplus */

#endif 	/* __LoggerFactory_FWD_DEFINED__ */


#ifndef __Calculator_FWD_DEFINED__
#define __Calculator_FWD_DEFINED__

#ifdef __cplusplus
typedef class Calculator Calculator;
#else
typedef struct Calculator Calculator;
#endif /* __cplusplus */

#endif 	/* __Calculator_FWD_DEFINED__ */


#ifndef __MultiplyCompletedHandler_FWD_DEFINED__
#define __MultiplyCompletedHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class MultiplyCompletedHandler MultiplyCompletedHandler;
#else
typedef struct MultiplyCompletedHandler MultiplyCompletedHandler;
#endif /* __cplusplus */

#endif 	/* __MultiplyCompletedHandler_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __COMCalculator_LIBRARY_DEFINED__
#define __COMCalculator_LIBRARY_DEFINED__

/* library COMCalculator */
/* [custom][version][uuid] */ 






EXTERN_C const IID LIBID_COMCalculator;

#ifndef __ICalculatorEvents_DISPINTERFACE_DEFINED__
#define __ICalculatorEvents_DISPINTERFACE_DEFINED__

/* dispinterface ICalculatorEvents */
/* [custom][version][uuid] */ 


EXTERN_C const IID DIID_ICalculatorEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1AEABA48-3826-4C79-BEDE-53204338C5CB")
    ICalculatorEvents : public IDispatch
    {
    public:
        virtual HRESULT __stdcall OnMultiplyCompleted(
            /* [in] */ long result
        ) = 0;
    };
    
#else 	/* C style interface */

    typedef struct ICalculatorEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICalculatorEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICalculatorEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICalculatorEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICalculatorEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICalculatorEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICalculatorEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICalculatorEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } ICalculatorEventsVtbl;

    interface ICalculatorEvents
    {
        CONST_VTBL struct ICalculatorEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICalculatorEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICalculatorEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICalculatorEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICalculatorEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICalculatorEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICalculatorEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICalculatorEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ICalculatorEvents_DISPINTERFACE_DEFINED__ */


#ifndef __ICalculator_DISPINTERFACE_DEFINED__
#define __ICalculator_DISPINTERFACE_DEFINED__

/* dispinterface ICalculator */
/* [custom][version][uuid] */ 


EXTERN_C const IID DIID_ICalculator;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("34BC4842-8C2B-49C0-816C-859F7A6DED5B")
    ICalculator : public IDispatch
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

        virtual HRESULT __stdcall Multiply(
            /* [in] */ long x,
            /* [in] */ long y
        ) = 0;
    };
    
#else 	/* C style interface */

    typedef struct ICalculatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICalculator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICalculator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICalculator * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICalculator * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICalculator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICalculator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICalculator * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } ICalculatorVtbl;

    interface ICalculator
    {
        CONST_VTBL struct ICalculatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICalculator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICalculator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICalculator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICalculator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICalculator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICalculator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICalculator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ICalculator_DISPINTERFACE_DEFINED__ */


#ifndef ___LoggerFactory_INTERFACE_DEFINED__
#define ___LoggerFactory_INTERFACE_DEFINED__

/* interface _LoggerFactory */
/* [object][custom][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID__LoggerFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD5F2220-A9D5-B1F7-98E0-713028EA9501")
    _LoggerFactory : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct _LoggerFactoryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _LoggerFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _LoggerFactory * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _LoggerFactory * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _LoggerFactory * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _LoggerFactory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _LoggerFactory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _LoggerFactory * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _LoggerFactoryVtbl;

    interface _LoggerFactory
    {
        CONST_VTBL struct _LoggerFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _LoggerFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _LoggerFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _LoggerFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _LoggerFactory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _LoggerFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _LoggerFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _LoggerFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___LoggerFactory_INTERFACE_DEFINED__ */


#ifndef ___MultiplyCompletedHandler_INTERFACE_DEFINED__
#define ___MultiplyCompletedHandler_INTERFACE_DEFINED__

/* interface _MultiplyCompletedHandler */
/* [object][custom][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID__MultiplyCompletedHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0E12A1EA-292C-2491-BFFB-079A3C89388F")
    _MultiplyCompletedHandler : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct _MultiplyCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _MultiplyCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _MultiplyCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _MultiplyCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _MultiplyCompletedHandler * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _MultiplyCompletedHandler * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _MultiplyCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _MultiplyCompletedHandler * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _MultiplyCompletedHandlerVtbl;

    interface _MultiplyCompletedHandler
    {
        CONST_VTBL struct _MultiplyCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _MultiplyCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _MultiplyCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _MultiplyCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _MultiplyCompletedHandler_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _MultiplyCompletedHandler_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _MultiplyCompletedHandler_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _MultiplyCompletedHandler_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___MultiplyCompletedHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_LoggerFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("9C16B151-BC22-35A0-BF1D-3E5866AB8449")
LoggerFactory;
#endif

EXTERN_C const CLSID CLSID_Calculator;

#ifdef __cplusplus

class DECLSPEC_UUID("20372AAC-E4BB-42FA-82B0-FEA0732375BE")
Calculator;
#endif

EXTERN_C const CLSID CLSID_MultiplyCompletedHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("7D9BDDD7-48ED-3327-9063-E35FAF13C23E")
MultiplyCompletedHandler;
#endif
#endif /* __COMCalculator_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


