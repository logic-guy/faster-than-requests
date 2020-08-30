/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
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
typedef struct tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ;
typedef struct tySequence__5L9b5Ztm9adPEys1vE9cEPQJA tySequence__5L9b5Ztm9adPEys1vE9cEPQJA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_SelectorKey__561GPxg10TdJiEAAWoraPw tyObject_SelectorKey__561GPxg10TdJiEAAWoraPw;
typedef struct tyObject_AsyncData__hOYUN4IOpj9adMwn6W7S2VA tyObject_AsyncData__hOYUN4IOpj9adMwn6W7S2VA;
typedef struct tySequence__mqHCvcswroDetkzsL3ixtg tySequence__mqHCvcswroDetkzsL3ixtg;
typedef struct TGenericSeq TGenericSeq;

/* section: NIM_merge_TYPES */
struct tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ {
int epollFD;
NI maxFD;
NI numFD;
tySequence__5L9b5Ztm9adPEys1vE9cEPQJA* fds;
NI count;
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU32 tySet_tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg;
struct tyObject_AsyncData__hOYUN4IOpj9adMwn6W7S2VA {
tySequence__mqHCvcswroDetkzsL3ixtg* readList;
tySequence__mqHCvcswroDetkzsL3ixtg* writeList;
};
struct tyObject_SelectorKey__561GPxg10TdJiEAAWoraPw {
NI ident;
tySet_tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg events;
NI param;
tyObject_AsyncData__hOYUN4IOpj9adMwn6W7S2VA data;
};
typedef NU8 tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (int fd, void* ClE_0);
void* ClE_0;
} tyProc__kbFLS7lxxUPzrFcbZuGUzQ;

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__5L9b5Ztm9adPEys1vE9cEPQJA {
  TGenericSeq Sup;
  tyObject_SelectorKey__561GPxg10TdJiEAAWoraPw data[SEQ_DECL_SIZE];
};
struct tySequence__mqHCvcswroDetkzsL3ixtg {
  TGenericSeq Sup;
  tyProc__kbFLS7lxxUPzrFcbZuGUzQ data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__5L9b5Ztm9adPEys1vE9cEPQJA)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__Y5hK0M9cL3lXwccEV9cgR9cQw)(void* p, NI op);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__jkoZicTBtYdKkYck5SFJEQ_;
extern TNimType NTI__nlCscttRCss70IBTyuBqnA_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
N_LIB_PRIVATE TNimType NTI__561GPxg10TdJiEAAWoraPw_;
N_LIB_PRIVATE TNimType NTI__nI40bZzTyYVrl763dZ9aHDg_;
N_LIB_PRIVATE TNimType NTI__YIRsZrDT89buh37M5yeUgng_;
extern TNimType NTI__hOYUN4IOpj9adMwn6W7S2VA_;
N_LIB_PRIVATE TNimType NTI__5L9b5Ztm9adPEys1vE9cEPQJA_;
N_LIB_PRIVATE TNimType NTI__Y5hK0M9cL3lXwccEV9cgR9cQw_;

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tySequence__5L9b5Ztm9adPEys1vE9cEPQJA)(void* p, NI op) {
	tySequence__5L9b5Ztm9adPEys1vE9cEPQJA* a;
	NI T1_;
	a = (tySequence__5L9b5Ztm9adPEys1vE9cEPQJA*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].data.readList, op);
	nimGCvisit((void*)a->data[T1_].data.writeList, op);
	}
}
static N_NIMCALL(void, Marker_tyRef__Y5hK0M9cL3lXwccEV9cgR9cQw)(void* p, NI op) {
	tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ* a;
	a = (tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ*)p;
	nimGCvisit((void*)(*a).fds, op);
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_selectorsDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__ln5vuDpFyDrAqQbYD2g52Q_2_5[5];
static TNimNode* TM__ln5vuDpFyDrAqQbYD2g52Q_3_4[4];
static TNimNode* TM__ln5vuDpFyDrAqQbYD2g52Q_4_17[17];
NI TM__ln5vuDpFyDrAqQbYD2g52Q_6;
static char* NIM_CONST TM__ln5vuDpFyDrAqQbYD2g52Q_5[17] = {
"Read", 
"Write", 
"Timer", 
"Signal", 
"Process", 
"Vnode", 
"User", 
"Error", 
"Oneshot", 
"Finished", 
"VnodeWrite", 
"VnodeDelete", 
"VnodeExtend", 
"VnodeAttrib", 
"VnodeLink", 
"VnodeRename", 
"VnodeRevoke"};
static TNimNode TM__ln5vuDpFyDrAqQbYD2g52Q_0[30];

/* section: NIM_merge_TYPE_INIT3 */
NTI__jkoZicTBtYdKkYck5SFJEQ_.size = sizeof(tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ);
NTI__jkoZicTBtYdKkYck5SFJEQ_.align = NIM_ALIGNOF(tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ);
NTI__jkoZicTBtYdKkYck5SFJEQ_.kind = 18;
NTI__jkoZicTBtYdKkYck5SFJEQ_.base = 0;
TM__ln5vuDpFyDrAqQbYD2g52Q_2_5[0] = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[1];
TM__ln5vuDpFyDrAqQbYD2g52Q_0[1].kind = 1;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[1].offset = offsetof(tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ, epollFD);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[1].typ = (&NTI__nlCscttRCss70IBTyuBqnA_);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[1].name = "epollFD";
TM__ln5vuDpFyDrAqQbYD2g52Q_2_5[1] = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[2];
TM__ln5vuDpFyDrAqQbYD2g52Q_0[2].kind = 1;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[2].offset = offsetof(tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ, maxFD);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[2].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[2].name = "maxFD";
TM__ln5vuDpFyDrAqQbYD2g52Q_2_5[2] = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[3];
TM__ln5vuDpFyDrAqQbYD2g52Q_0[3].kind = 1;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[3].offset = offsetof(tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ, numFD);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[3].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[3].name = "numFD";
TM__ln5vuDpFyDrAqQbYD2g52Q_2_5[3] = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[4];
NTI__561GPxg10TdJiEAAWoraPw_.size = sizeof(tyObject_SelectorKey__561GPxg10TdJiEAAWoraPw);
NTI__561GPxg10TdJiEAAWoraPw_.align = NIM_ALIGNOF(tyObject_SelectorKey__561GPxg10TdJiEAAWoraPw);
NTI__561GPxg10TdJiEAAWoraPw_.kind = 18;
NTI__561GPxg10TdJiEAAWoraPw_.base = 0;
TM__ln5vuDpFyDrAqQbYD2g52Q_3_4[0] = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[6];
TM__ln5vuDpFyDrAqQbYD2g52Q_0[6].kind = 1;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[6].offset = offsetof(tyObject_SelectorKey__561GPxg10TdJiEAAWoraPw, ident);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[6].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[6].name = "ident";
TM__ln5vuDpFyDrAqQbYD2g52Q_3_4[1] = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[7];
NTI__nI40bZzTyYVrl763dZ9aHDg_.size = sizeof(tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg);
NTI__nI40bZzTyYVrl763dZ9aHDg_.align = NIM_ALIGNOF(tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg);
NTI__nI40bZzTyYVrl763dZ9aHDg_.kind = 14;
NTI__nI40bZzTyYVrl763dZ9aHDg_.base = 0;
NTI__nI40bZzTyYVrl763dZ9aHDg_.flags = 3;
for (TM__ln5vuDpFyDrAqQbYD2g52Q_6 = 0; TM__ln5vuDpFyDrAqQbYD2g52Q_6 < 17; TM__ln5vuDpFyDrAqQbYD2g52Q_6++) {
TM__ln5vuDpFyDrAqQbYD2g52Q_0[TM__ln5vuDpFyDrAqQbYD2g52Q_6+8].kind = 1;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[TM__ln5vuDpFyDrAqQbYD2g52Q_6+8].offset = TM__ln5vuDpFyDrAqQbYD2g52Q_6;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[TM__ln5vuDpFyDrAqQbYD2g52Q_6+8].name = TM__ln5vuDpFyDrAqQbYD2g52Q_5[TM__ln5vuDpFyDrAqQbYD2g52Q_6];
TM__ln5vuDpFyDrAqQbYD2g52Q_4_17[TM__ln5vuDpFyDrAqQbYD2g52Q_6] = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[TM__ln5vuDpFyDrAqQbYD2g52Q_6+8];
}
TM__ln5vuDpFyDrAqQbYD2g52Q_0[25].len = 17; TM__ln5vuDpFyDrAqQbYD2g52Q_0[25].kind = 2; TM__ln5vuDpFyDrAqQbYD2g52Q_0[25].sons = &TM__ln5vuDpFyDrAqQbYD2g52Q_4_17[0];
NTI__nI40bZzTyYVrl763dZ9aHDg_.node = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[25];
NTI__YIRsZrDT89buh37M5yeUgng_.size = sizeof(tySet_tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg);
NTI__YIRsZrDT89buh37M5yeUgng_.align = NIM_ALIGNOF(tySet_tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg);
NTI__YIRsZrDT89buh37M5yeUgng_.kind = 19;
NTI__YIRsZrDT89buh37M5yeUgng_.base = (&NTI__nI40bZzTyYVrl763dZ9aHDg_);
NTI__YIRsZrDT89buh37M5yeUgng_.flags = 3;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[26].len = 0; TM__ln5vuDpFyDrAqQbYD2g52Q_0[26].kind = 0;
NTI__YIRsZrDT89buh37M5yeUgng_.node = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[26];
TM__ln5vuDpFyDrAqQbYD2g52Q_0[7].kind = 1;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[7].offset = offsetof(tyObject_SelectorKey__561GPxg10TdJiEAAWoraPw, events);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[7].typ = (&NTI__YIRsZrDT89buh37M5yeUgng_);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[7].name = "events";
TM__ln5vuDpFyDrAqQbYD2g52Q_3_4[2] = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[27];
TM__ln5vuDpFyDrAqQbYD2g52Q_0[27].kind = 1;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[27].offset = offsetof(tyObject_SelectorKey__561GPxg10TdJiEAAWoraPw, param);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[27].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[27].name = "param";
TM__ln5vuDpFyDrAqQbYD2g52Q_3_4[3] = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[28];
TM__ln5vuDpFyDrAqQbYD2g52Q_0[28].kind = 1;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[28].offset = offsetof(tyObject_SelectorKey__561GPxg10TdJiEAAWoraPw, data);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[28].typ = (&NTI__hOYUN4IOpj9adMwn6W7S2VA_);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[28].name = "data";
TM__ln5vuDpFyDrAqQbYD2g52Q_0[5].len = 4; TM__ln5vuDpFyDrAqQbYD2g52Q_0[5].kind = 2; TM__ln5vuDpFyDrAqQbYD2g52Q_0[5].sons = &TM__ln5vuDpFyDrAqQbYD2g52Q_3_4[0];
NTI__561GPxg10TdJiEAAWoraPw_.node = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[5];
NTI__5L9b5Ztm9adPEys1vE9cEPQJA_.size = sizeof(tySequence__5L9b5Ztm9adPEys1vE9cEPQJA*);
NTI__5L9b5Ztm9adPEys1vE9cEPQJA_.align = NIM_ALIGNOF(tySequence__5L9b5Ztm9adPEys1vE9cEPQJA*);
NTI__5L9b5Ztm9adPEys1vE9cEPQJA_.kind = 24;
NTI__5L9b5Ztm9adPEys1vE9cEPQJA_.base = (&NTI__561GPxg10TdJiEAAWoraPw_);
NTI__5L9b5Ztm9adPEys1vE9cEPQJA_.marker = Marker_tySequence__5L9b5Ztm9adPEys1vE9cEPQJA;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[4].kind = 1;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[4].offset = offsetof(tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ, fds);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[4].typ = (&NTI__5L9b5Ztm9adPEys1vE9cEPQJA_);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[4].name = "fds";
TM__ln5vuDpFyDrAqQbYD2g52Q_2_5[4] = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[29];
TM__ln5vuDpFyDrAqQbYD2g52Q_0[29].kind = 1;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[29].offset = offsetof(tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ, count);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[29].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ln5vuDpFyDrAqQbYD2g52Q_0[29].name = "count";
TM__ln5vuDpFyDrAqQbYD2g52Q_0[0].len = 5; TM__ln5vuDpFyDrAqQbYD2g52Q_0[0].kind = 2; TM__ln5vuDpFyDrAqQbYD2g52Q_0[0].sons = &TM__ln5vuDpFyDrAqQbYD2g52Q_2_5[0];
NTI__jkoZicTBtYdKkYck5SFJEQ_.node = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[0];
NTI__Y5hK0M9cL3lXwccEV9cgR9cQw_.size = sizeof(tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ*);
NTI__Y5hK0M9cL3lXwccEV9cgR9cQw_.align = NIM_ALIGNOF(tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ*);
NTI__Y5hK0M9cL3lXwccEV9cgR9cQw_.kind = 22;
NTI__Y5hK0M9cL3lXwccEV9cgR9cQw_.base = (&NTI__jkoZicTBtYdKkYck5SFJEQ_);
NTI__Y5hK0M9cL3lXwccEV9cgR9cQw_.marker = Marker_tyRef__Y5hK0M9cL3lXwccEV9cgR9cQw;
}

