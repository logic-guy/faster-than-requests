/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg;
typedef struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(int, tyProc__pduP3uOMtjDyYKG6z4GVFg) (NU64 opts, NU8 settings);
typedef N_CDECL_PTR(int, tyProc__cez8YhJI0vaCUcjGg6z4zA) (void);
typedef N_CDECL_PTR(void, tyProc__ln4kdL5W9bbX4a1xl8nnVXQ) (void);
struct tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw {
char dummy;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef N_CDECL_PTR(int, tyProc__Vff1ipOwDPDGknaRJAdXjA) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ssl);
typedef N_CDECL_PTR(int, tyProc__kxUw9cdxJbPtv0iPyoSbDBQ) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* s, int ret_code);
typedef N_CDECL_PTR(unsigned long, tyProc__wCuLyuC5VitcgJKGCqJQRw) (void);
typedef N_CDECL_PTR(NCSTRING, tyProc__5zMKCPIiPHTYY9cjyzsHlmQ) (unsigned long e, NCSTRING buf);
typedef N_CDECL_PTR(void, tyProc__e47RoMUolEGMiUlfiZt9abQ) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ssl);
typedef N_CDECL_PTR(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw*, tyProc__Rqjya8uauy9aPcyfGamaSrg) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* context);
typedef N_CDECL_PTR(NI, tyProc__xGcw2zK9bzuUE9c8WzKW5hzw) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ssl, int cmd, NI larg, void* parg);
typedef N_CDECL_PTR(int, tyProc__sG7rgqmtlgBaumPwwN3BfQ) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ssl, NCSTRING buf, NI num);
typedef N_CDECL_PTR(int, tyProc__09aW01hZ1tSPafLaWVpBcXA) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ssl, void* buf, NI num);
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
NI32 errorCode;
};
struct tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg {
  tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA Sup;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CDECL_PTR(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw*, tyProc__HXibadfWHwHwyhCwpIRD2A) (void);
typedef N_CDECL_PTR(int, tyProc__2PA7CxitARKs0jpUW1gQ0g) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* s, NCSTRING ciphers);
typedef N_CDECL_PTR(void, tyProc__IX9aeaSWx4arDCJq04EsJjQ) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ctx, NCSTRING str);
typedef N_CDECL_PTR(long, tyProc__JfY9aCDiBh9bgOEieo8Vltxg) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ctx, int cmd, long larg, void* parg);
typedef N_CDECL_PTR(NI, tyProc__aF4y9aPKIi8D4VGrVvX011Q) (NI a, void* b);
typedef N_CDECL_PTR(void, tyProc__H5wL7jexPlRA7WCw9cqLm0A) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* s, NI mode, tyProc__aF4y9aPKIi8D4VGrVvX011Q cb);
typedef N_STDCALL_PTR(int, tyProc__tYatIIo0oRSB9bjHLep7yhQ) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ctx, NCSTRING filename);
typedef N_CDECL_PTR(int, tyProc__xjxKRHVZXDqdWXw9bunoZ3w) (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ctx, NCSTRING filename, int typ);
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void*, sslSymNullable__dsinlRPqANpoUTK9bUXQLCQ)(NimStringDesc* name, NimStringDesc* alternativeName);
N_LIB_PRIVATE N_NIMCALL(void*, symNullable__9aiIoMzcw0HdtipKAsiD9a0g)(void* dll, NimStringDesc* name, NimStringDesc* alternativeName);
N_LIB_PRIVATE N_NIMCALL(void*, symAddr__ALH9bdNwXEzg7MPq4PA9csvw)(void* lib, NCSTRING name);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
static N_INLINE(void*, thisModule__E9agIDZT2VyIwfkoJys1E0Aopenssl)(void);
N_LIB_PRIVATE N_NIMCALL(void*, loadLib__3W0xEugBG13TxVu4hk9b9b5g)(void);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void*, sslModule__E9agIDZT2VyIwfkoJys1E0A_2openssl)(void);
N_LIB_PRIVATE N_NIMCALL(void*, loadLibPattern__b9aH5C9aWbfFKSp3nIx1lqTA)(NimStringDesc* pattern, NIM_BOOL globalSymbols);
N_LIB_PRIVATE N_NIMCALL(void*, sslSymThrows__dsinlRPqANpoUTK9bUXQLCQ_2)(NimStringDesc* name, NimStringDesc* alternativeName);
N_LIB_PRIVATE N_NOINLINE(void, raiseInvalidLibrary__TnaNIb4lz2PqhpvzfjxuWw)(NCSTRING name);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
N_LIB_PRIVATE N_NIMCALL(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw*, loadPSSLMethod__Ly1cbhDPrPcypgHb7sj70w)(NimStringDesc* method1, NimStringDesc* method2);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void*, utilSymNullable__dsinlRPqANpoUTK9bUXQLCQ_3)(NimStringDesc* name, NimStringDesc* alternativeName);
static N_INLINE(void*, utilModule__E9agIDZT2VyIwfkoJys1E0A_3openssl)(void);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_2, "libssl(.1.1|.38|.39|.41|.43|.44|.45|.46|.47|.10|.1.0.2|.1.0.1|."
"1.0.0|.0.9.9|.0.9.8|).dylib", 90);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_3, "OPENSSL_init_ssl", 16);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_4, "SSL_library_init", 16);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_5, "SSL_load_error_strings", 22);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_8, "libcrypto.1.1.dylib", 19);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_10, "libcrypto.38.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_12, "libcrypto.39.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_14, "libcrypto.41.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_16, "libcrypto.43.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_18, "libcrypto.44.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_20, "libcrypto.45.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_22, "libcrypto.46.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_24, "libcrypto.47.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_26, "libcrypto.10.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_28, "libcrypto.1.0.2.dylib", 21);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_30, "libcrypto.1.0.1.dylib", 21);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_32, "libcrypto.1.0.0.dylib", 21);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_34, "libcrypto.0.9.9.dylib", 21);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_36, "libcrypto.0.9.8.dylib", 21);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_38, "libcrypto.dylib", 15);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_39, "libcrypto(.1.1|.38|.39|.41|.43|.44|.45|.46|.47|.10|.1.0.2|.1.0."
"1|.1.0.0|.0.9.9|.0.9.8|).dylib", 93);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_42, "OPENSSL_add_all_algorithms_conf", 31);
N_LIB_PRIVATE TNimType NTI__hZKic6WnTBMq6Usbg49bnhw_;
N_LIB_PRIVATE TNimType NTI__QQ33RYEe889cv60wm9bVkd8A_;
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_43, "SSL_in_init", 11);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_44, "SSL_state", 9);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_49, "libssl.1.1.dylib", 16);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_51, "libssl.38.dylib", 15);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_53, "libssl.39.dylib", 15);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_55, "libssl.41.dylib", 15);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_57, "libssl.43.dylib", 15);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_59, "libssl.44.dylib", 15);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_61, "libssl.45.dylib", 15);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_63, "libssl.46.dylib", 15);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_65, "libssl.47.dylib", 15);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_67, "libssl.10.dylib", 15);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_69, "libssl.1.0.2.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_71, "libssl.1.0.1.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_73, "libssl.1.0.0.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_75, "libssl.0.9.9.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_77, "libssl.0.9.8.dylib", 18);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_79, "libssl.dylib", 12);
extern TNimType NTI__HV2B9a6TW6WPpQna2mQFeQQ_;
extern TNimType NTI__x1muge9crz9aAVqWWUrEL9aXg_;
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_108, "Could not load ", 15);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_109, " nor ", 5);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_110, "SSLv23_method", 13);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_111, "TLS_method", 10);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_116, "OpenSSL_version_num", 19);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_117, "SSLeay", 6);
STRING_LITERAL(TM__SLGpYVEqpFQ7VaPsJH6HIA_118, "SSL_CTX_set_ciphersuites", 24);

/* section: NIM_merge_VARS */
N_LIB_PRIVATE void* thisMod__BVflfs5GGPI4d1Lan5mHzA;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
N_LIB_PRIVATE void* sslMod__jjPr6K4VwnmIfXONVVYefQ;
static void* TM__SLGpYVEqpFQ7VaPsJH6HIA_6;
tyProc__ln4kdL5W9bbX4a1xl8nnVXQ Dl_15665614_;
N_LIB_PRIVATE tyProc__Vff1ipOwDPDGknaRJAdXjA theProc__4YwZzkNFGan9bZ7C2TUrksA;
N_LIB_PRIVATE tyProc__Vff1ipOwDPDGknaRJAdXjA sslState__2r5WssYjNageZ69aoDZzpEA;
tyProc__ln4kdL5W9bbX4a1xl8nnVXQ Dl_15675632_;
static void* TM__SLGpYVEqpFQ7VaPsJH6HIA_47;
tyProc__Vff1ipOwDPDGknaRJAdXjA Dl_15665696_;
tyProc__kxUw9cdxJbPtv0iPyoSbDBQ Dl_15665719_;
tyProc__wCuLyuC5VitcgJKGCqJQRw Dl_15666026_;
tyProc__5zMKCPIiPHTYY9cjyzsHlmQ Dl_15666020_;
tyProc__e47RoMUolEGMiUlfiZt9abQ Dl_15665619_;
tyProc__Rqjya8uauy9aPcyfGamaSrg Dl_15665616_;
tyProc__kxUw9cdxJbPtv0iPyoSbDBQ Dl_15665692_;
tyProc__xGcw2zK9bzuUE9c8WzKW5hzw Dl_15675443_;
tyProc__Vff1ipOwDPDGknaRJAdXjA Dl_15665706_;
tyProc__Vff1ipOwDPDGknaRJAdXjA Dl_15665723_;
tyProc__sG7rgqmtlgBaumPwwN3BfQ Dl_15665714_;
tyProc__Vff1ipOwDPDGknaRJAdXjA Dl_15665726_;
tyProc__09aW01hZ1tSPafLaWVpBcXA Dl_15665709_;
tyProc__Rqjya8uauy9aPcyfGamaSrg Dl_15665632_;
tyProc__HXibadfWHwHwyhCwpIRD2A Dl_15651252_;
tyProc__2PA7CxitARKs0jpUW1gQ0g Dl_15665655_;
N_LIB_PRIVATE void* utilMod__O6RsqpN8QPVNBORLfbU7jg;
N_LIB_PRIVATE tyProc__IX9aeaSWx4arDCJq04EsJjQ theProc__YtQw1arkP19c4aYYCkkluDQ;
tyProc__JfY9aCDiBh9bgOEieo8Vltxg Dl_15675414_;
tyProc__H5wL7jexPlRA7WCw9cqLm0A Dl_15665643_;
tyProc__tYatIIo0oRSB9bjHLep7yhQ Dl_15665664_;
tyProc__xjxKRHVZXDqdWXw9bunoZ3w Dl_15665668_;
tyProc__Vff1ipOwDPDGknaRJAdXjA Dl_15665673_;

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(void, CRYPTO_malloc_init__G2BDIxFj2W9ajANxAoi8oZA)(void) {
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
static N_INLINE(void*, thisModule__E9agIDZT2VyIwfkoJys1E0Aopenssl)(void) {
	void* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (void*)0;
	{
		void* T5_;
		if (!(thisMod__BVflfs5GGPI4d1Lan5mHzA == 0)) goto LA3_;
		T5_ = (void*)0;
		T5_ = loadLib__3W0xEugBG13TxVu4hk9b9b5g();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		thisMod__BVflfs5GGPI4d1Lan5mHzA = T5_;
	}
	LA3_: ;
	result = thisMod__BVflfs5GGPI4d1Lan5mHzA;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void*, symNullable__9aiIoMzcw0HdtipKAsiD9a0g)(void* dll, NimStringDesc* name, NimStringDesc* alternativeName) {
	void* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (void*)0;
	{
		if (!!((dll == 0))) goto LA3_;
		result = symAddr__ALH9bdNwXEzg7MPq4PA9csvw(dll, nimToCStringConv(name));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		{
			NIM_BOOL T7_;
			T7_ = (NIM_BOOL)0;
			T7_ = (result == 0);
			if (!(T7_)) goto LA8_;
			T7_ = (((NI) 0) < (alternativeName ? alternativeName->Sup.len : 0));
			LA8_: ;
			if (!T7_) goto LA9_;
			result = symAddr__ALH9bdNwXEzg7MPq4PA9csvw(dll, nimToCStringConv(alternativeName));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA9_: ;
	}
	LA3_: ;
	{
		void* thisDynlib;
		if (!(result == 0)) goto LA13_;
		thisDynlib = thisModule__E9agIDZT2VyIwfkoJys1E0Aopenssl();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		{
			if (!(thisDynlib == 0)) goto LA17_;
			result = NIM_NIL;
			goto BeforeRet_;
		}
		LA17_: ;
		result = symAddr__ALH9bdNwXEzg7MPq4PA9csvw(thisDynlib, nimToCStringConv(name));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		{
			NIM_BOOL T21_;
			T21_ = (NIM_BOOL)0;
			T21_ = (result == 0);
			if (!(T21_)) goto LA22_;
			T21_ = (((NI) 0) < (alternativeName ? alternativeName->Sup.len : 0));
			LA22_: ;
			if (!T21_) goto LA23_;
			result = symAddr__ALH9bdNwXEzg7MPq4PA9csvw(thisDynlib, nimToCStringConv(alternativeName));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA23_: ;
	}
	LA13_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void*, sslModule__E9agIDZT2VyIwfkoJys1E0A_2openssl)(void) {
	void* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (void*)0;
	{
		void* T5_;
		if (!(sslMod__jjPr6K4VwnmIfXONVVYefQ == 0)) goto LA3_;
		T5_ = (void*)0;
		T5_ = loadLibPattern__b9aH5C9aWbfFKSp3nIx1lqTA(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_2), NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		sslMod__jjPr6K4VwnmIfXONVVYefQ = T5_;
	}
	LA3_: ;
	result = sslMod__jjPr6K4VwnmIfXONVVYefQ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void*, sslSymNullable__dsinlRPqANpoUTK9bUXQLCQ)(NimStringDesc* name, NimStringDesc* alternativeName) {
	void* result;
	void* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (void*)0;
	T1_ = (void*)0;
	T1_ = sslModule__E9agIDZT2VyIwfkoJys1E0A_2openssl();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = symNullable__9aiIoMzcw0HdtipKAsiD9a0g(T1_, name, alternativeName);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void*, sslSymThrows__dsinlRPqANpoUTK9bUXQLCQ_2)(NimStringDesc* name, NimStringDesc* alternativeName) {
	void* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (void*)0;
	result = sslSymNullable__dsinlRPqANpoUTK9bUXQLCQ(name, alternativeName);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!(result == 0)) goto LA3_;
		raiseInvalidLibrary__TnaNIb4lz2PqhpvzfjxuWw(nimToCStringConv(name));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, SSL_library_init__6SfBfS64wp6JZihQGGrnKg)(void) {
	int result;
	void* newInitSym;
	tyProc__cez8YhJI0vaCUcjGg6z4zA olderProc;
	void* T5_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (int)0;
	newInitSym = sslSymNullable__dsinlRPqANpoUTK9bUXQLCQ(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_3), ((NimStringDesc*) NIM_NIL));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		tyProc__pduP3uOMtjDyYKG6z4GVFg newInitProc;
		if (!!((newInitSym == 0))) goto LA3_;
		newInitProc = ((tyProc__pduP3uOMtjDyYKG6z4GVFg) (newInitSym));
		result = newInitProc(0ULL, ((NU8) 0));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA3_: ;
	T5_ = (void*)0;
	T5_ = sslSymThrows__dsinlRPqANpoUTK9bUXQLCQ_2(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_4), ((NimStringDesc*) NIM_NIL));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	olderProc = ((tyProc__cez8YhJI0vaCUcjGg6z4zA) (T5_));
	{
		if (!!((olderProc == 0))) goto LA8_;
		result = olderProc();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA8_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, SSL_load_error_strings__G2BDIxFj2W9ajANxAoi8oZA_2)(void) {
	tyProc__ln4kdL5W9bbX4a1xl8nnVXQ theProc;
	void* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (void*)0;
	T1_ = sslSymNullable__dsinlRPqANpoUTK9bUXQLCQ(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_5), ((NimStringDesc*) NIM_NIL));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	theProc = ((tyProc__ln4kdL5W9bbX4a1xl8nnVXQ) (T1_));
	{
		if (!!((theProc == 0))) goto LA4_;
		theProc();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, OpenSSL_add_all_algorithms__G2BDIxFj2W9ajANxAoi8oZA_3)(void) {
	tyProc__ln4kdL5W9bbX4a1xl8nnVXQ theProc;
	void* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (void*)0;
	T1_ = sslSymNullable__dsinlRPqANpoUTK9bUXQLCQ(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_42), ((NimStringDesc*) NIM_NIL));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	theProc = ((tyProc__ln4kdL5W9bbX4a1xl8nnVXQ) (T1_));
	{
		if (!!((theProc == 0))) goto LA4_;
		theProc();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(int, SSL_in_init__loUCLHAKQg9cZwis5tAb2ig)(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ssl) {
	int result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (int)0;
	{
		if (!!((theProc__4YwZzkNFGan9bZ7C2TUrksA == 0))) goto LA3_;
		result = theProc__4YwZzkNFGan9bZ7C2TUrksA(ssl);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		int T8_;
		if (!!((sslState__2r5WssYjNageZ69aoDZzpEA == 0))) goto LA6_;
		T8_ = (int)0;
		T8_ = sslState__2r5WssYjNageZ69aoDZzpEA(ssl);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = (NI32)(T8_ & ((NI32) 12288));
	}
	goto LA1_;
	LA6_: ;
	{
		raiseInvalidLibrary__TnaNIb4lz2PqhpvzfjxuWw("SSL_in_init");
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, SSL_set_tlsext_host_name__jGR2GiKRQZ9cgDkYFu4P9aNg)(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ssl, NCSTRING name) {
	NI result;
	result = (NI)0;
	result = Dl_15675443_(ssl, ((int) 55), ((NI) 0), ((void*) (name)));
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw*, loadPSSLMethod__Ly1cbhDPrPcypgHb7sj70w)(NimStringDesc* method1, NimStringDesc* method2) {
	tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* result;
	void* methodSym;
	tyProc__HXibadfWHwHwyhCwpIRD2A method2Proc;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw*)0;
	methodSym = sslSymNullable__dsinlRPqANpoUTK9bUXQLCQ(method1, method2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg* T5_;
		NimStringDesc* T6_;
		if (!(methodSym == 0)) goto LA3_;
		T5_ = (tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg*)0;
		T5_ = (tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg*) newObj((&NTI__HV2B9a6TW6WPpQna2mQFeQQ_), sizeof(tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg));
		(*T5_).Sup.Sup.Sup.Sup.m_type = (&NTI__x1muge9crz9aAVqWWUrEL9aXg_);
		(*T5_).Sup.Sup.Sup.name = "LibraryError";
		T6_ = (NimStringDesc*)0;
		T6_ = rawNewString((method1 ? method1->Sup.len : 0) + (method2 ? method2->Sup.len : 0) + 20);
appendString(T6_, ((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_108));
appendString(T6_, method1);
appendString(T6_, ((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_109));
appendString(T6_, method2);
		(*T5_).Sup.Sup.Sup.message = T6_;
		(*T5_).Sup.Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T5_, "LibraryError", "loadPSSLMethod", "openssl.nim", 358);
		goto BeforeRet_;
	}
	LA3_: ;
	method2Proc = ((tyProc__HXibadfWHwHwyhCwpIRD2A) (methodSym));
	result = method2Proc();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw*, SSLv23_method__LTfNTmKR6aBlZTkY8nHSxg)(void) {
	tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw*)0;
	result = loadPSSLMethod__Ly1cbhDPrPcypgHb7sj70w(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_110), ((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_111));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void*, utilModule__E9agIDZT2VyIwfkoJys1E0A_3openssl)(void) {
	void* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (void*)0;
	{
		void* T5_;
		if (!(utilMod__O6RsqpN8QPVNBORLfbU7jg == 0)) goto LA3_;
		T5_ = (void*)0;
		T5_ = loadLibPattern__b9aH5C9aWbfFKSp3nIx1lqTA(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_39), NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		utilMod__O6RsqpN8QPVNBORLfbU7jg = T5_;
	}
	LA3_: ;
	result = utilMod__O6RsqpN8QPVNBORLfbU7jg;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void*, utilSymNullable__dsinlRPqANpoUTK9bUXQLCQ_3)(NimStringDesc* name, NimStringDesc* alternativeName) {
	void* result;
	void* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (void*)0;
	T1_ = (void*)0;
	T1_ = utilModule__E9agIDZT2VyIwfkoJys1E0A_3openssl();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = symNullable__9aiIoMzcw0HdtipKAsiD9a0g(T1_, name, alternativeName);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(unsigned long, getOpenSSLVersion__dJsO04BYfgh1GDCx4NNEgA)(void) {
	unsigned long result;
	tyProc__wCuLyuC5VitcgJKGCqJQRw theProc;
	void* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (unsigned long)0;
	T1_ = (void*)0;
	T1_ = utilSymNullable__dsinlRPqANpoUTK9bUXQLCQ_3(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_116), ((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_117));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	theProc = ((tyProc__wCuLyuC5VitcgJKGCqJQRw) (T1_));
	{
		if (!(theProc == 0)) goto LA4_;
		result = ((unsigned long) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		result = theProc();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA2_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, SSL_CTX_set_ciphersuites__WApCSzGH2uqCDm9bYkShtQw)(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ctx, NCSTRING str) {
	int result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (int)0;
	{
		void* T5_;
		if (!(theProc__YtQw1arkP19c4aYYCkkluDQ == 0)) goto LA3_;
		T5_ = (void*)0;
		T5_ = sslSymThrows__dsinlRPqANpoUTK9bUXQLCQ_2(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_118), ((NimStringDesc*) NIM_NIL));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		theProc__YtQw1arkP19c4aYYCkkluDQ = ((tyProc__IX9aeaSWx4arDCJq04EsJjQ) (T5_));
	}
	LA3_: ;
	theProc__YtQw1arkP19c4aYYCkkluDQ(ctx, str);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, SSLCTXSetMode__u4DGuCXu9asDo9aQgd9cu5QNQ)(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw* ctx, NI mode) {
	NI result;
	result = (NI)0;
	result = Dl_15675414_(ctx, ((int) 33), mode, NIM_NIL);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_opensslInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
	void* T100001_;
	void* T100002_;
	T100001_ = (void*)0;
	T100001_ = sslSymNullable__dsinlRPqANpoUTK9bUXQLCQ(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_43), ((NimStringDesc*) NIM_NIL));
	theProc__4YwZzkNFGan9bZ7C2TUrksA = ((tyProc__Vff1ipOwDPDGknaRJAdXjA) (T100001_));
	T100002_ = (void*)0;
	T100002_ = sslSymNullable__dsinlRPqANpoUTK9bUXQLCQ(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_44), ((NimStringDesc*) NIM_NIL));
	sslState__2r5WssYjNageZ69aoDZzpEA = ((tyProc__Vff1ipOwDPDGknaRJAdXjA) (T100002_));
}
{
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_opensslDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode TM__SLGpYVEqpFQ7VaPsJH6HIA_0[1];

/* section: NIM_merge_TYPE_INIT3 */
NTI__hZKic6WnTBMq6Usbg49bnhw_.size = sizeof(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw);
NTI__hZKic6WnTBMq6Usbg49bnhw_.align = NIM_ALIGNOF(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw);
NTI__hZKic6WnTBMq6Usbg49bnhw_.kind = 18;
NTI__hZKic6WnTBMq6Usbg49bnhw_.base = 0;
NTI__hZKic6WnTBMq6Usbg49bnhw_.flags = 3;
TM__SLGpYVEqpFQ7VaPsJH6HIA_0[0].len = 0; TM__SLGpYVEqpFQ7VaPsJH6HIA_0[0].kind = 2;
NTI__hZKic6WnTBMq6Usbg49bnhw_.node = &TM__SLGpYVEqpFQ7VaPsJH6HIA_0[0];
NTI__QQ33RYEe889cv60wm9bVkd8A_.size = sizeof(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw*);
NTI__QQ33RYEe889cv60wm9bVkd8A_.align = NIM_ALIGNOF(tyObject_SslStruct__hZKic6WnTBMq6Usbg49bnhw*);
NTI__QQ33RYEe889cv60wm9bVkd8A_.kind = 21;
NTI__QQ33RYEe889cv60wm9bVkd8A_.base = (&NTI__hZKic6WnTBMq6Usbg49bnhw_);
NTI__QQ33RYEe889cv60wm9bVkd8A_.flags = 3;

/* section: NIM_merge_DYNLIB_INIT */
if (!((TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_8)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_10)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_12)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_14)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_16)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_18)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_20)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_22)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_24)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_26)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_28)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_30)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_32)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_34)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_36)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_6 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_38)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_39));
	Dl_15665614_ = (tyProc__ln4kdL5W9bbX4a1xl8nnVXQ) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_6, "ERR_load_BIO_strings");
	Dl_15675632_ = (tyProc__ln4kdL5W9bbX4a1xl8nnVXQ) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_6, "ERR_clear_error");
if (!((TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_49)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_51)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_53)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_55)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_57)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_59)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_61)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_63)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_65)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_67)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_69)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_71)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_73)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_75)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_77)))
||(TM__SLGpYVEqpFQ7VaPsJH6HIA_47 = nimLoadLibrary(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_79)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__SLGpYVEqpFQ7VaPsJH6HIA_2));
	Dl_15665696_ = (tyProc__Vff1ipOwDPDGknaRJAdXjA) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_shutdown");
	Dl_15665719_ = (tyProc__kxUw9cdxJbPtv0iPyoSbDBQ) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_get_error");
	Dl_15666026_ = (tyProc__wCuLyuC5VitcgJKGCqJQRw) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_6, "ERR_peek_last_error");
	Dl_15666020_ = (tyProc__5zMKCPIiPHTYY9cjyzsHlmQ) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_6, "ERR_error_string");
	Dl_15665619_ = (tyProc__e47RoMUolEGMiUlfiZt9abQ) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_free");
	Dl_15665616_ = (tyProc__Rqjya8uauy9aPcyfGamaSrg) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_new");
	Dl_15665692_ = (tyProc__kxUw9cdxJbPtv0iPyoSbDBQ) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_set_fd");
	Dl_15675443_ = (tyProc__xGcw2zK9bzuUE9c8WzKW5hzw) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_ctrl");
	Dl_15665706_ = (tyProc__Vff1ipOwDPDGknaRJAdXjA) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_connect");
	Dl_15665723_ = (tyProc__Vff1ipOwDPDGknaRJAdXjA) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_accept");
	Dl_15665714_ = (tyProc__sG7rgqmtlgBaumPwwN3BfQ) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_write");
	Dl_15665726_ = (tyProc__Vff1ipOwDPDGknaRJAdXjA) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_pending");
	Dl_15665709_ = (tyProc__09aW01hZ1tSPafLaWVpBcXA) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_read");
	Dl_15665632_ = (tyProc__Rqjya8uauy9aPcyfGamaSrg) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_CTX_new");
	Dl_15651252_ = (tyProc__HXibadfWHwHwyhCwpIRD2A) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "TLSv1_method");
	Dl_15665655_ = (tyProc__2PA7CxitARKs0jpUW1gQ0g) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_CTX_set_cipher_list");
	Dl_15675414_ = (tyProc__JfY9aCDiBh9bgOEieo8Vltxg) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_CTX_ctrl");
	Dl_15665643_ = (tyProc__H5wL7jexPlRA7WCw9cqLm0A) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_CTX_set_verify");
	Dl_15665664_ = (tyProc__tYatIIo0oRSB9bjHLep7yhQ) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_CTX_use_certificate_chain_file");
	Dl_15665668_ = (tyProc__xjxKRHVZXDqdWXw9bunoZ3w) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_CTX_use_PrivateKey_file");
	Dl_15665673_ = (tyProc__Vff1ipOwDPDGknaRJAdXjA) nimGetProcAddr(TM__SLGpYVEqpFQ7VaPsJH6HIA_47, "SSL_CTX_check_private_key");
}

