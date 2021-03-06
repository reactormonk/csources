/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_135316)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_81021)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_135406)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
STRING_LITERAL(TMP403, "length > counter ", 17);
extern TFrame* frameptr_13038;

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NIM_BOOL, mustrehash_135316)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP404;
	NI TMP405;
	NI TMP406;
	nimfr("mustRehash", "sets.nim")
	result = 0;
	nimln(47, "sets.nim");
	{
		nimln(47, "sets.nim");
		nimln(47, "sets.nim");
		if (!!((counter < length))) goto LA3;
		nimln(47, "sets.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP403));
	}
	LA3: ;
	nimln(48, "sets.nim");
	nimln(48, "sets.nim");
	LOC5 = 0;
	nimln(48, "sets.nim");
	nimln(48, "sets.nim");
	TMP404 = mulInt(length, 2);
	nimln(48, "sets.nim");
	TMP405 = mulInt(counter, 3);
	LOC5 = ((NI32)(TMP404) < (NI32)(TMP405));
	if (LOC5) goto LA6;
	nimln(48, "sets.nim");
	nimln(48, "sets.nim");
	TMP406 = subInt(length, counter);
	LOC5 = ((NI32)(TMP406) < 4);
	LA6: ;
	result = LOC5;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, nexttry_135406)(NI h, NI maxhash) {
	NI result;
	NI TMP407;
	NI TMP408;
	nimfr("nextTry", "sets.nim")
	result = 0;
	nimln(51, "sets.nim");
	nimln(51, "sets.nim");
	nimln(51, "sets.nim");
	nimln(51, "sets.nim");
	TMP407 = mulInt(5, h);
	TMP408 = addInt((NI32)(TMP407), 1);
	result = (NI)((NI32)(TMP408) & maxhash);
	popFrame();
	return result;
}
N_NOINLINE(void, stdlibsetsInit)(void) {
	nimfr("sets", "sets.nim")
	popFrame();
}

N_NOINLINE(void, stdlibsetsDatInit)(void) {
}

