/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

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
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Pcre__bGVj3RgRlNY6kwJpiYI9b3A tyObject_Pcre__bGVj3RgRlNY6kwJpiYI9b3A;
typedef struct tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(int, tyProc__y4Iy0gL1MDnSGVt43uUAgQ) (tyObject_Pcre__bGVj3RgRlNY6kwJpiYI9b3A* code, tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ* extra, NCSTRING subject, int length, int startoffset, int options, int* ovector, int ovecsize);
typedef N_CDECL_PTR(void, tyProc__5cp59bim9aJ4WupX5aVaD1Sg) (NCSTRING stringptr);
typedef N_CDECL_PTR(void, tyProc__hMR3nXvmHGbyZzcDul78bg) (tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ* extra);
struct tyObject_Pcre__bGVj3RgRlNY6kwJpiYI9b3A {
char dummy;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ {
long flags;
void* study_data;
long match_limit;
void* callout_data;
void* tables;
long match_limit_recursion;
void* mark;
void* executable_jit;
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
typedef N_CDECL_PTR(tyObject_Pcre__bGVj3RgRlNY6kwJpiYI9b3A*, tyProc__OMNNRjh8IIE9bAc9btZcg0NA) (NCSTRING pattern, int options, NCSTRING* errptr, int* erroffset, void* tableptr);
typedef N_CDECL_PTR(int, tyProc__KqPl2ltkjnSoyb04zAVCAQ) (int what, void* where);
typedef N_CDECL_PTR(tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ*, tyProc__qU2uMIyWirSwn1Nd4hJjDw) (tyObject_Pcre__bGVj3RgRlNY6kwJpiYI9b3A* code, int options, NCSTRING* errptr);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
STRING_LITERAL(TM__9c4KgWyI7MBUp1bOanYigOw_4, "libpcre.so.3", 12);
STRING_LITERAL(TM__9c4KgWyI7MBUp1bOanYigOw_6, "libpcre.so.1", 12);
STRING_LITERAL(TM__9c4KgWyI7MBUp1bOanYigOw_8, "libpcre.so", 10);
STRING_LITERAL(TM__9c4KgWyI7MBUp1bOanYigOw_9, "libpcre.so(.3|.1|)", 18);
N_LIB_PRIVATE TNimType NTI__bGVj3RgRlNY6kwJpiYI9b3A_;
N_LIB_PRIVATE TNimType NTI__WH9aVfHDhtZbU6Y5QgauqZQ_;
N_LIB_PRIVATE TNimType NTI__aRbi7557vgG4KV47nk1CWQ_;
extern TNimType NTI__3VcGJ5ZzkB2b0MMruetfFg_;
extern TNimType NTI__vr5DoT1jILTGdRlYv1OYpw_;
N_LIB_PRIVATE TNimType NTI__z1uZWlkSdiDfd9ahW9a6Ibug_;
static void* TM__9c4KgWyI7MBUp1bOanYigOw_2;
tyProc__y4Iy0gL1MDnSGVt43uUAgQ Dl_23507276_;
tyProc__5cp59bim9aJ4WupX5aVaD1Sg Dl_23507304_;
tyProc__hMR3nXvmHGbyZzcDul78bg Dl_23507371_;
tyProc__OMNNRjh8IIE9bAc9btZcg0NA Dl_23507214_;
tyProc__KqPl2ltkjnSoyb04zAVCAQ Dl_23507236_;
tyProc__qU2uMIyWirSwn1Nd4hJjDw Dl_23507363_;
N_LIB_PRIVATE N_NIMCALL(void, stdlib_pcreDatInit000)(void) {
static TNimNode* TM__9c4KgWyI7MBUp1bOanYigOw_16_8[8];
static TNimNode TM__9c4KgWyI7MBUp1bOanYigOw_0[10];
NTI__bGVj3RgRlNY6kwJpiYI9b3A_.size = sizeof(tyObject_Pcre__bGVj3RgRlNY6kwJpiYI9b3A);
NTI__bGVj3RgRlNY6kwJpiYI9b3A_.kind = 18;
NTI__bGVj3RgRlNY6kwJpiYI9b3A_.base = 0;
NTI__bGVj3RgRlNY6kwJpiYI9b3A_.flags = 3;
TM__9c4KgWyI7MBUp1bOanYigOw_0[0].len = 0; TM__9c4KgWyI7MBUp1bOanYigOw_0[0].kind = 2;
NTI__bGVj3RgRlNY6kwJpiYI9b3A_.node = &TM__9c4KgWyI7MBUp1bOanYigOw_0[0];
NTI__WH9aVfHDhtZbU6Y5QgauqZQ_.size = sizeof(tyObject_Pcre__bGVj3RgRlNY6kwJpiYI9b3A*);
NTI__WH9aVfHDhtZbU6Y5QgauqZQ_.kind = 21;
NTI__WH9aVfHDhtZbU6Y5QgauqZQ_.base = (&NTI__bGVj3RgRlNY6kwJpiYI9b3A_);
NTI__WH9aVfHDhtZbU6Y5QgauqZQ_.flags = 3;
NTI__aRbi7557vgG4KV47nk1CWQ_.size = sizeof(tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ);
NTI__aRbi7557vgG4KV47nk1CWQ_.kind = 18;
NTI__aRbi7557vgG4KV47nk1CWQ_.base = 0;
NTI__aRbi7557vgG4KV47nk1CWQ_.flags = 3;
TM__9c4KgWyI7MBUp1bOanYigOw_16_8[0] = &TM__9c4KgWyI7MBUp1bOanYigOw_0[2];
TM__9c4KgWyI7MBUp1bOanYigOw_0[2].kind = 1;
TM__9c4KgWyI7MBUp1bOanYigOw_0[2].offset = offsetof(tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ, flags);
TM__9c4KgWyI7MBUp1bOanYigOw_0[2].typ = (&NTI__3VcGJ5ZzkB2b0MMruetfFg_);
TM__9c4KgWyI7MBUp1bOanYigOw_0[2].name = "flags";
TM__9c4KgWyI7MBUp1bOanYigOw_16_8[1] = &TM__9c4KgWyI7MBUp1bOanYigOw_0[3];
TM__9c4KgWyI7MBUp1bOanYigOw_0[3].kind = 1;
TM__9c4KgWyI7MBUp1bOanYigOw_0[3].offset = offsetof(tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ, study_data);
TM__9c4KgWyI7MBUp1bOanYigOw_0[3].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__9c4KgWyI7MBUp1bOanYigOw_0[3].name = "study_data";
TM__9c4KgWyI7MBUp1bOanYigOw_16_8[2] = &TM__9c4KgWyI7MBUp1bOanYigOw_0[4];
TM__9c4KgWyI7MBUp1bOanYigOw_0[4].kind = 1;
TM__9c4KgWyI7MBUp1bOanYigOw_0[4].offset = offsetof(tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ, match_limit);
TM__9c4KgWyI7MBUp1bOanYigOw_0[4].typ = (&NTI__3VcGJ5ZzkB2b0MMruetfFg_);
TM__9c4KgWyI7MBUp1bOanYigOw_0[4].name = "match_limit";
TM__9c4KgWyI7MBUp1bOanYigOw_16_8[3] = &TM__9c4KgWyI7MBUp1bOanYigOw_0[5];
TM__9c4KgWyI7MBUp1bOanYigOw_0[5].kind = 1;
TM__9c4KgWyI7MBUp1bOanYigOw_0[5].offset = offsetof(tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ, callout_data);
TM__9c4KgWyI7MBUp1bOanYigOw_0[5].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__9c4KgWyI7MBUp1bOanYigOw_0[5].name = "callout_data";
TM__9c4KgWyI7MBUp1bOanYigOw_16_8[4] = &TM__9c4KgWyI7MBUp1bOanYigOw_0[6];
TM__9c4KgWyI7MBUp1bOanYigOw_0[6].kind = 1;
TM__9c4KgWyI7MBUp1bOanYigOw_0[6].offset = offsetof(tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ, tables);
TM__9c4KgWyI7MBUp1bOanYigOw_0[6].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__9c4KgWyI7MBUp1bOanYigOw_0[6].name = "tables";
TM__9c4KgWyI7MBUp1bOanYigOw_16_8[5] = &TM__9c4KgWyI7MBUp1bOanYigOw_0[7];
TM__9c4KgWyI7MBUp1bOanYigOw_0[7].kind = 1;
TM__9c4KgWyI7MBUp1bOanYigOw_0[7].offset = offsetof(tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ, match_limit_recursion);
TM__9c4KgWyI7MBUp1bOanYigOw_0[7].typ = (&NTI__3VcGJ5ZzkB2b0MMruetfFg_);
TM__9c4KgWyI7MBUp1bOanYigOw_0[7].name = "match_limit_recursion";
TM__9c4KgWyI7MBUp1bOanYigOw_16_8[6] = &TM__9c4KgWyI7MBUp1bOanYigOw_0[8];
TM__9c4KgWyI7MBUp1bOanYigOw_0[8].kind = 1;
TM__9c4KgWyI7MBUp1bOanYigOw_0[8].offset = offsetof(tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ, mark);
TM__9c4KgWyI7MBUp1bOanYigOw_0[8].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__9c4KgWyI7MBUp1bOanYigOw_0[8].name = "mark";
TM__9c4KgWyI7MBUp1bOanYigOw_16_8[7] = &TM__9c4KgWyI7MBUp1bOanYigOw_0[9];
TM__9c4KgWyI7MBUp1bOanYigOw_0[9].kind = 1;
TM__9c4KgWyI7MBUp1bOanYigOw_0[9].offset = offsetof(tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ, executable_jit);
TM__9c4KgWyI7MBUp1bOanYigOw_0[9].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__9c4KgWyI7MBUp1bOanYigOw_0[9].name = "executable_jit";
TM__9c4KgWyI7MBUp1bOanYigOw_0[1].len = 8; TM__9c4KgWyI7MBUp1bOanYigOw_0[1].kind = 2; TM__9c4KgWyI7MBUp1bOanYigOw_0[1].sons = &TM__9c4KgWyI7MBUp1bOanYigOw_16_8[0];
NTI__aRbi7557vgG4KV47nk1CWQ_.node = &TM__9c4KgWyI7MBUp1bOanYigOw_0[1];
NTI__z1uZWlkSdiDfd9ahW9a6Ibug_.size = sizeof(tyObject_ExtraData__aRbi7557vgG4KV47nk1CWQ*);
NTI__z1uZWlkSdiDfd9ahW9a6Ibug_.kind = 21;
NTI__z1uZWlkSdiDfd9ahW9a6Ibug_.base = (&NTI__aRbi7557vgG4KV47nk1CWQ_);
NTI__z1uZWlkSdiDfd9ahW9a6Ibug_.flags = 3;
if (!((TM__9c4KgWyI7MBUp1bOanYigOw_2 = nimLoadLibrary(((NimStringDesc*) &TM__9c4KgWyI7MBUp1bOanYigOw_4)))
||(TM__9c4KgWyI7MBUp1bOanYigOw_2 = nimLoadLibrary(((NimStringDesc*) &TM__9c4KgWyI7MBUp1bOanYigOw_6)))
||(TM__9c4KgWyI7MBUp1bOanYigOw_2 = nimLoadLibrary(((NimStringDesc*) &TM__9c4KgWyI7MBUp1bOanYigOw_8)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__9c4KgWyI7MBUp1bOanYigOw_9));
	Dl_23507276_ = (tyProc__y4Iy0gL1MDnSGVt43uUAgQ) nimGetProcAddr(TM__9c4KgWyI7MBUp1bOanYigOw_2, "pcre_exec");
	Dl_23507304_ = (tyProc__5cp59bim9aJ4WupX5aVaD1Sg) nimGetProcAddr(TM__9c4KgWyI7MBUp1bOanYigOw_2, "pcre_free_substring");
	Dl_23507371_ = (tyProc__hMR3nXvmHGbyZzcDul78bg) nimGetProcAddr(TM__9c4KgWyI7MBUp1bOanYigOw_2, "pcre_free_study");
	Dl_23507214_ = (tyProc__OMNNRjh8IIE9bAc9btZcg0NA) nimGetProcAddr(TM__9c4KgWyI7MBUp1bOanYigOw_2, "pcre_compile");
	Dl_23507236_ = (tyProc__KqPl2ltkjnSoyb04zAVCAQ) nimGetProcAddr(TM__9c4KgWyI7MBUp1bOanYigOw_2, "pcre_config");
	Dl_23507363_ = (tyProc__qU2uMIyWirSwn1Nd4hJjDw) nimGetProcAddr(TM__9c4KgWyI7MBUp1bOanYigOw_2, "pcre_study");
}

