/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <windows.h>
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
typedef struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw;
typedef struct tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg;
typedef struct tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg;
typedef struct Exception Exception;
typedef struct tySequence__aNpJjaoUowCQc7fBn3wtDQ tySequence__aNpJjaoUowCQc7fBn3wtDQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct TSafePoint TSafePoint;
typedef struct GcFrameHeader GcFrameHeader;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg;
typedef struct tyObject_SslContextcolonObjectType___nNdejAl9bbVbX7sP6RJ4h0w tyObject_SslContextcolonObjectType___nNdejAl9bbVbX7sP6RJ4h0w;

/* section: NIM_merge_TYPES */
struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw {
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* head;
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* tail;
CRITICAL_SECTION lock;
};
typedef void* tyArray__Rrw59cMvNu8cDA9cQDh4v2oA[100];
struct tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg {
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* next;
NI dataLen;
tyArray__Rrw59cMvNu8cDA9cQDh4v2oA d;
};
typedef NF tyArray__iV2wVpdhi9coq9cstlcqapXg[2001];
struct tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg {
tyArray__iV2wVpdhi9coq9cstlcqapXg tls;
};
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__9axCnCRMUx32AHzFgBrzSMg) (Exception* e);
struct TGenericSeq {
NI len;
NI reserved;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SPr7N6UKfuF549bNPiUvSRw[256];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SPr7N6UKfuF549bNPiUvSRw freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI collections;
NI maxThreshold;
NI maxStackSize;
NI freedObjects;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw toDispose;
NI gcThreadId;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyProc__HzVCwACFYM9cx9aV62PdjtuA cbproc, void* ClE_0);
void* ClE_0;
} tyProc__VHS3NdmbwcdcZKmKV1JWhw;

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__aNpJjaoUowCQc7fBn3wtDQ {
  TGenericSeq Sup;
  tyProc__HzVCwACFYM9cx9aV62PdjtuA data[SEQ_DECL_SIZE];
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
typedef struct {tyProc__9axCnCRMUx32AHzFgBrzSMg localRaiseHook__EIvMhANBvB9cp2Ezvt29cADg;
NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
tySequence__aNpJjaoUowCQc7fBn3wtDQ* threadDestructionHandlers__8OmU3x0fNdA0DLtOmU3kWw;
NI threadId__wzrdPYhtL9czkCWS4o9an9cRw;
TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
Exception* currException__9bVPeDJlYTi9bQApZpfH8wjg;
GcFrameHeader* gcFramePtr__ot48iojqko9aFxGhyjjjVaA;
tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* utcInstance__oeKVHn4dFpBJO35HhEkelw;
tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* localInstance__cLtN9cK9bCe6IPhJ3UFNLNKA;
NIM_BOOL envComputed__LLyFo9bsdu1ZXMDvAe8DhrQ;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* environment__mlhK49b6YMgc9cgrcYkKq9a3g;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* ownArgv__WVJ54JSHy7VxacV39bwBPFA;
NIM_BOOL ownParsedArgv__9btHydaUC5pNXxitEZsyzIg;
tyProc__VHS3NdmbwcdcZKmKV1JWhw callSoonProc__9b9b4iUSd60RO2UqC52ifJ6A;
tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg* gDisp__yIbBArLUsg2pBJkilx4yvg;
tyObject_SslContextcolonObjectType___nNdejAl9bbVbX7sP6RJ4h0w* defaultSslContext__3GZQajZtKdLpqTTN2RjTzw;
NIM_BOOL isSlave__t9a8wsVVRYqGEKhg1vb49b3g;
NIM_BOOL pyThreadFrameInited__0LBR4zzVR5uWvgtv8SrMjg;
NIM_BOOL gcInited__uuy3PWTwb5gov9ao9bXJYBPg;
} NimThreadVars;

/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(void, initLock__fSZuw88O4GKTNx4Mza9bPbglocks)(CRITICAL_SECTION* lock);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void*, GetThreadLocalVars)(void);
N_LIB_PRIVATE N_NIMCALL(void*, threadVarGetValue__O8VJSmwa3WY6y9bP6Ht9b7hw)(NI32 dwTlsIndex);

/* section: NIM_merge_VARS */
extern NI32 globalsSlot__ciXDZu9c27pHpCRMoz4RIgw;

/* section: NIM_merge_PROCS */
static N_INLINE(void, initLock__fSZuw88O4GKTNx4Mza9bPbglocks)(CRITICAL_SECTION* lock) {
	InitializeCriticalSection(lock);
}
static N_INLINE(void*, GetThreadLocalVars)(void) {
	void* result;
	void* T1_;
	result = (void*)0;
	T1_ = (void*)0;
	T1_ = threadVarGetValue__O8VJSmwa3WY6y9bP6Ht9b7hw(globalsSlot__ciXDZu9c27pHpCRMoz4RIgw);
	result = ((void*) ((*((tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg*) (T1_))).tls));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	result = (NIM_BOOL*)0;
	result = (&NimTV_->nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, init__rlyb6Y54ONML4HcId0P2OA)(tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw* t) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	initLock__fSZuw88O4GKTNx4Mza9bPbglocks((&(*t).lock));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*t).head = NIM_NIL;
	(*t).tail = NIM_NIL;
	}BeforeRet_: ;
}
