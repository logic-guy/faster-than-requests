/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <string.h>
#include <sys/select.h>
#include <time.h>
#include <sys/types.h>
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
typedef struct tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__9apztJSmgERYU8fZOjI4pOg tySequence__9apztJSmgERYU8fZOjI4pOg;
typedef NU8 tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw;
typedef NU8 tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg;
struct tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ {
tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val;
NIM_BOOL has;
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
typedef long tyArray__RpaqwQ7H8ofV6NGQYsCBHQ[16];
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR tyArray__NSMq3FMCIrS8gSbyinBZ8w[14];
struct tySequence__9apztJSmgERYU8fZOjI4pOg {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(int, toInt__na0alpTcWAzTnn2v04w1CQ)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain);
N_LIB_PRIVATE N_NIMCALL(int, toInt__AuveeRAdmuTXERHtCv4MPg)(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw typ);
N_LIB_PRIVATE N_NIMCALL(int, toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg p);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___RkX9btpg5sQIaP8yYXB6tbA)(NU64 x);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, some__gDZZCqU2e9asjnz7Ee0TNwwoptions)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val);
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, none__lifxITt9cocI1piX9abkoJ6woptions)(void);
N_LIB_PRIVATE N_NIMCALL(struct timeval, timeValFromMilliseconds__OtKozLj4h73UWNus5W4NYA)(NI timeout);
N_LIB_PRIVATE N_NIMCALL(void, createFdSet__qeAKZQwZIp32QbFZfozb3w)(fd_set* fd, tySequence__9apztJSmgERYU8fZOjI4pOg* s, NI* m);
N_LIB_PRIVATE N_NIMCALL(void, pruneSocketSet__DzCd1luyXumO9c9aKDjkCMAQ)(tySequence__9apztJSmgERYU8fZOjI4pOg** s, fd_set* fd);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, setLengthSeqV2)(TGenericSeq* s, TNimType* typ, NI newLen);
N_LIB_PRIVATE TNimType NTI__Q79bEtFARvq0ekDNtvj3Vqg_;
N_LIB_PRIVATE TNimType NTI__NQT1bItGG2X9byGdrWX7ujw_;
N_LIB_PRIVATE TNimType NTI__dqJ1OqRGclxIMMdSLRzzXg_;
extern TNimType NTI__9apztJSmgERYU8fZOjI4pOg_;
N_LIB_PRIVATE NIM_CONST int osInvalidSocket__voz9aUXu8jtRbvGZZJHNE8w = ((int) -1);
N_LIB_PRIVATE NIM_CONST int nativeAfInet__rQwsjQjVqXvdaL9aZofzWwg = ((int) 2);
N_LIB_PRIVATE NIM_CONST int nativeAfInet6__Da6PongZL9aJxBrf7qeBmfA = ((int) 10);
N_LIB_PRIVATE NIM_CONST int nativeAfUnix__F0RRmJ8JjfNr6yLSNEn9abA = ((int) 1);
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
N_LIB_PRIVATE N_NIMCALL(void, close__8c1w8B7fpSuB4Dgr5LHVJA)(int socket) {
	int T1_;
	T1_ = (int)0;
	T1_ = close(socket);
	(void)(T1_);
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw, toSockType__6alUTTXG6jHTyH82e9a1JDw)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol) {
	tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw result;
	result = (tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw)0;
	switch (protocol) {
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 6):
	{
		result = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 1);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 17):
	{
		result = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 2);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 18):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 19):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 20):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 21):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 22):
	{
		result = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 3);
	}
	break;
	}
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(int, toInt__na0alpTcWAzTnn2v04w1CQ)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain) {
	int result;
	result = (int)0;
	switch (domain) {
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 0):
	{
		result = ((int) 0);
	}
	break;
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 1):
	{
		result = ((int) 1);
	}
	break;
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 2):
	{
		result = ((int) 2);
	}
	break;
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 23):
	{
		result = ((int) 10);
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, toInt__AuveeRAdmuTXERHtCv4MPg)(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw typ) {
	int result;
	result = (int)0;
	switch (typ) {
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 1):
	{
		result = ((int) 1);
	}
	break;
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 2):
	{
		result = ((int) 2);
	}
	break;
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 5):
	{
		result = ((int) 5);
	}
	break;
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 3):
	{
		result = ((int) 3);
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg p) {
	int result;
	result = (int)0;
	switch (p) {
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 6):
	{
		result = ((int) 6);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 17):
	{
		result = ((int) 17);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 18):
	{
		result = ((int) 0);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 19):
	{
		result = ((int) 41);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 20):
	{
		result = ((int) 255);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 21):
	{
		result = ((int) 1);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 22):
	{
		result = ((int) 58);
	}
	break;
	}
	return result;
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
N_LIB_PRIVATE N_NIMCALL(struct addrinfo*, getAddrInfo__ANf7QnbfE8nyIlFuWroDcQ)(NimStringDesc* address, NU16 port, tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol) {
	struct addrinfo* result;
	struct addrinfo hints;
	NimStringDesc* socketPort;
	int gaiResult;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (struct addrinfo*)0;
	nimZeroMem((void*)(&hints), sizeof(struct addrinfo));
	result = NIM_NIL;
	hints.ai_family = toInt__na0alpTcWAzTnn2v04w1CQ(domain);
	hints.ai_socktype = toInt__AuveeRAdmuTXERHtCv4MPg(sockType);
	hints.ai_protocol = toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ(protocol);
	{
		if (!(domain == ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 23))) goto LA3_;
		hints.ai_flags = ((int) 8);
	}
	LA3_: ;
	{
		if (!(sockType == ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 3))) goto LA7_;
		socketPort = ((NimStringDesc*) NIM_NIL);
	}
	goto LA5_;
	LA7_: ;
	{
		socketPort = dollar___RkX9btpg5sQIaP8yYXB6tbA(port);
	}
	LA5_: ;
	gaiResult = getaddrinfo(nimToCStringConv(address), nimToCStringConv(socketPort), (&hints), &result);
	{
		NI32 T14_;
		NCSTRING T15_;
		NimStringDesc* T16_;
		if (!!((gaiResult == ((NI32) 0)))) goto LA12_;
		T14_ = (NI32)0;
		T14_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
		T15_ = (NCSTRING)0;
		T15_ = (char *)gai_strerror(gaiResult);
		T16_ = (NimStringDesc*)0;
		T16_ = cstrToNimstr(T15_);
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T14_, T16_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA12_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, some__gDZZCqU2e9asjnz7Ee0TNwwoptions)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	result.has = NIM_TRUE;
	result.val = val;
	return result;
}
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, none__lifxITt9cocI1piX9abkoJ6woptions)(void) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, toKnownDomain__RQ9bFvLg4dpjf7aRPA8ID9bg)(int family) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	{
		if (!(family == ((int) 0))) goto LA3_;
		result = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 0));
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(family == ((int) 1))) goto LA6_;
		result = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 1));
	}
	goto LA1_;
	LA6_: ;
	{
		if (!(family == ((int) 2))) goto LA9_;
		result = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 2));
	}
	goto LA1_;
	LA9_: ;
	{
		if (!(family == ((int) 10))) goto LA12_;
		result = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 23));
	}
	goto LA1_;
	LA12_: ;
	{
		result = none__lifxITt9cocI1piX9abkoJ6woptions();
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, createNativeSocket__JC9abIjAA731bWpDMsti9a5Q)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol) {
	int result;
	int T1_;
	int T2_;
	int T3_;
	result = (int)0;
	T1_ = (int)0;
	T1_ = toInt__na0alpTcWAzTnn2v04w1CQ(domain);
	T2_ = (int)0;
	T2_ = toInt__AuveeRAdmuTXERHtCv4MPg(sockType);
	T3_ = (int)0;
	T3_ = toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ(protocol);
	result = socket(T1_, T2_, T3_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(struct timeval, timeValFromMilliseconds__OtKozLj4h73UWNus5W4NYA)(NI timeout) {
	struct timeval result;
	nimZeroMem((void*)(&result), sizeof(struct timeval));
	{
		NI seconds;
		if (!!((timeout == ((NI) -1)))) goto LA3_;
		seconds = (NI)(timeout / ((NI) 1000));
		result.tv_sec = seconds;
		result.tv_usec = (NI)((NI)(timeout - (NI)(seconds * ((NI) 1000))) * ((NI) 1000));
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, createFdSet__qeAKZQwZIp32QbFZfozb3w)(fd_set* fd, tySequence__9apztJSmgERYU8fZOjI4pOg* s, NI* m) {
	FD_ZERO(fd);
	{
		int i;
		NI i_2;
		NI L;
		NI T2_;
		i = (int)0;
		i_2 = ((NI) 0);
		T2_ = (s ? s->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i_2 < L)) goto LA4;
				i = s->data[i_2];
				(*m) = (((*m) >= ((NI) (i))) ? (*m) : ((NI) (i)));
				FD_SET(i, fd);
				i_2 += ((NI) 1);
			} LA4: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, pruneSocketSet__DzCd1luyXumO9c9aKDjkCMAQ)(tySequence__9apztJSmgERYU8fZOjI4pOg** s, fd_set* fd) {
	NI i;
	NI L;
	NI T1_;
	i = ((NI) 0);
	T1_ = ((*s) ? (*s)->Sup.len : 0);
	L = T1_;
	{
		while (1) {
			if (!(i < L)) goto LA3;
			{
				int T6_;
				T6_ = (int)0;
				T6_ = FD_ISSET((*s)->data[i], fd);
				if (!(T6_ == ((NI32) 0))) goto LA7_;
				(*s)->data[i] = (*s)->data[(NI)(L - ((NI) 1))];
				L -= ((NI) 1);
			}
			goto LA4_;
			LA7_: ;
			{
				i += ((NI) 1);
			}
			LA4_: ;
		} LA3: ;
	}
	(*s) = (tySequence__9apztJSmgERYU8fZOjI4pOg*) setLengthSeqV2(&((*s))->Sup, (&NTI__9apztJSmgERYU8fZOjI4pOg_), ((NI) (L)));
}
N_LIB_PRIVATE N_NIMCALL(NI, selectRead__hYdMbc9crqOqsDFcxhERoLA)(tySequence__9apztJSmgERYU8fZOjI4pOg** readfds, NI timeout) {
	NI result;
	struct timeval tv;
	fd_set rd;
	NI m;
	result = (NI)0;
	tv = timeValFromMilliseconds__OtKozLj4h73UWNus5W4NYA(timeout);
	nimZeroMem((void*)(&rd), sizeof(fd_set));
	m = ((NI) 0);
	createFdSet__qeAKZQwZIp32QbFZfozb3w((&rd), (*readfds), (&m));
	{
		int T5_;
		if (!!((timeout == ((NI) -1)))) goto LA3_;
		T5_ = (int)0;
		T5_ = select(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, (&tv));
		result = ((NI) (T5_));
	}
	goto LA1_;
	LA3_: ;
	{
		int T7_;
		T7_ = (int)0;
		T7_ = select(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, NIM_NIL);
		result = ((NI) (T7_));
	}
	LA1_: ;
	pruneSocketSet__DzCd1luyXumO9c9aKDjkCMAQ(readfds, (&rd));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_nativesocketsDatInit000)(void) {
static TNimNode* TM__f9bP3LqjpgpB9cXL8Nnak7tQ_2_4[4];
NI TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4;
static char* NIM_CONST TM__f9bP3LqjpgpB9cXL8Nnak7tQ_3[4] = {
"AF_UNSPEC", 
"AF_UNIX", 
"AF_INET", 
"AF_INET6"};
static TNimNode* TM__f9bP3LqjpgpB9cXL8Nnak7tQ_5_4[4];
NI TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7;
static char* NIM_CONST TM__f9bP3LqjpgpB9cXL8Nnak7tQ_6[4] = {
"SOCK_STREAM", 
"SOCK_DGRAM", 
"SOCK_RAW", 
"SOCK_SEQPACKET"};
static TNimNode* TM__f9bP3LqjpgpB9cXL8Nnak7tQ_8_7[7];
NI TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10;
static char* NIM_CONST TM__f9bP3LqjpgpB9cXL8Nnak7tQ_9[7] = {
"IPPROTO_TCP", 
"IPPROTO_UDP", 
"IPPROTO_IP", 
"IPPROTO_IPV6", 
"IPPROTO_RAW", 
"IPPROTO_ICMP", 
"IPPROTO_ICMPV6"};
static TNimNode TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[18];
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.size = sizeof(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg);
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.kind = 14;
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.base = 0;
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.flags = 3;
for (TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4 = 0; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4 < 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4++) {
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0].kind = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0].offset = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0].name = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_3[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4];
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_2_4[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4] = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0];
}
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[0].offset = 0;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[1].offset = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[2].offset = 2;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[3].offset = 23;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4].len = 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4].kind = 2; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4].sons = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_2_4[0];
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.node = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4];
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.flags = 1<<2;
NTI__NQT1bItGG2X9byGdrWX7ujw_.size = sizeof(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw);
NTI__NQT1bItGG2X9byGdrWX7ujw_.kind = 14;
NTI__NQT1bItGG2X9byGdrWX7ujw_.base = 0;
NTI__NQT1bItGG2X9byGdrWX7ujw_.flags = 3;
for (TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7 = 0; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7 < 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7++) {
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5].kind = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5].offset = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5].name = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_6[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7];
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_5_4[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7] = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5];
}
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[5].offset = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[6].offset = 2;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[7].offset = 3;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[8].offset = 5;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9].len = 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9].kind = 2; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9].sons = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_5_4[0];
NTI__NQT1bItGG2X9byGdrWX7ujw_.node = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9];
NTI__NQT1bItGG2X9byGdrWX7ujw_.flags = 1<<2;
NTI__dqJ1OqRGclxIMMdSLRzzXg_.size = sizeof(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg);
NTI__dqJ1OqRGclxIMMdSLRzzXg_.kind = 14;
NTI__dqJ1OqRGclxIMMdSLRzzXg_.base = 0;
NTI__dqJ1OqRGclxIMMdSLRzzXg_.flags = 3;
for (TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10 = 0; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10 < 7; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10++) {
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10].kind = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10].offset = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10].name = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_9[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10];
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_8_7[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10] = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10];
}
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[10].offset = 6;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[11].offset = 17;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[12].offset = 18;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[13].offset = 19;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[14].offset = 20;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[15].offset = 21;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[16].offset = 22;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17].len = 7; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17].kind = 2; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17].sons = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_8_7[0];
NTI__dqJ1OqRGclxIMMdSLRzzXg_.node = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17];
NTI__dqJ1OqRGclxIMMdSLRzzXg_.flags = 1<<2;
}

