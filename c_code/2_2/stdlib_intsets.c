/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttrunk183043 ttrunk183043;
typedef struct tintset183047 tintset183047;
typedef struct ttrunkseq183045 ttrunkseq183045;
typedef struct tcell41290 tcell41290;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcellset41302 tcellset41302;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellseq41306 tcellseq41306;
typedef struct tpagedesc41298 tpagedesc41298;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tintset183047  {
NI Counter;
NI Max;
ttrunk183043* Head;
ttrunkseq183045* Data;
};
typedef NI TY22818[8];
struct  ttrunk183043  {
ttrunk183043* Next;
NI Key;
TY22818 Bits;
};
struct  tcell41290  {
NI Refcount;
TNimType* Typ;
};
typedef N_NIMCALL_PTR(void, TY2289) (void* p, NI op);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2289 marker;
};
struct  tcellseq41306  {
NI Len;
NI Cap;
tcell41290** D;
};
struct  tcellset41302  {
NI Counter;
NI Max;
tpagedesc41298* Head;
tpagedesc41298** Data;
};
typedef tsmallchunk22838* TY23622[512];
typedef ttrunk22811* ttrunkbuckets22813[256];
struct  tintset22815  {
ttrunkbuckets22813 Data;
};
struct  tmemregion23610  {
NI Minlargeobj;
NI Maxlargeobj;
TY23622 Freesmallchunks;
tllchunk23604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk22840* Freechunkslist;
tintset22815 Chunkstarts;
tavlnode23608* Root;
tavlnode23608* Deleted;
tavlnode23608* Last;
tavlnode23608* Freeavlnodes;
};
struct  tgcstat43214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41306 Zct;
tcellseq41306 Decstack;
tcellset41302 Cycleroots;
tcellseq41306 Tempstack;
NI Recgclock;
tmemregion23610 Region;
tgcstat43214 Stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tpagedesc41298  {
tpagedesc41298* Next;
NI Key;
TY22818 Bits;
};
struct  tbasechunk22836  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk22838  {
  tbasechunk22836 Sup;
tsmallchunk22838* Next;
tsmallchunk22838* Prev;
tfreecell22828* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23604  {
NI Size;
NI Acc;
tllchunk23604* Next;
};
struct  tbigchunk22840  {
  tbasechunk22836 Sup;
tbigchunk22840* Next;
tbigchunk22840* Prev;
NI Align;
NF Data;
};
struct  ttrunk22811  {
ttrunk22811* Next;
NI Key;
TY22818 Bits;
};
typedef tavlnode23608* TY23614[2];
struct  tavlnode23608  {
TY23614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
struct ttrunkseq183045 {
  TGenericSeq Sup;
  ttrunk183043* data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_183058)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_183206)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(ttrunk183043*, intsetget_183213)(tintset183047* t, NI key);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, intsetrawinsert_183239)(tintset183047* t, ttrunkseq183045** data, ttrunk183043* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47027)(tcell41290* c);
static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41290* c);
static N_INLINE(void, rtladdcycleroot_45435)(tcell41290* c);
N_NOINLINE(void, incl_42055)(tcellset41302* s, tcell41290* cell);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, decref_46602)(tcell41290* c);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(void, intsetenlarge_183621)(tintset183047* t);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1951)(void* p, NI op);
N_NIMCALL(void, TMP1952)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(ttrunk183043*, intsetput_183696)(tintset183047* t, NI key);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, contains_183838)(tintset183047* s, NI key);
N_NIMCALL(void, incl_183866)(tintset183047* s, NI key);
N_NIMCALL(void, excl_183877)(tintset183047* s, NI key);
N_NIMCALL(NIM_BOOL, containsorincl_183905)(tintset183047* s, NI key);
N_NIMCALL(void, initintset_183935)(tintset183047* Result);
N_NIMCALL(void, assign_183956)(tintset183047* dest, tintset183047* src);
N_NIMCALL(NimStringDesc*, HEX24_184322)(tintset183047* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NIM_BOOL, empty_184342)(tintset183047* s);
STRING_LITERAL(TMP1938, "length > counter ", 17);
STRING_LITERAL(TMP1944, "data[h] != desc ", 16);
STRING_LITERAL(TMP1945, "data[h] == nil ", 15);
STRING_LITERAL(TMP1954, "t.data[h] == nil ", 17);
STRING_LITERAL(TMP1955, "dest.data[h] == nil ", 20);
STRING_LITERAL(TMP1956, "{", 1);
STRING_LITERAL(TMP1957, ", ", 2);
STRING_LITERAL(TMP1958, "}", 1);
extern TFrame* frameptr_13038;
extern tgcheap43216 gch_43244;
TNimType NTI183043; /* TTrunk */
extern TNimType NTI106; /* int */
extern TNimType NTI22818; /* array[0..7, int] */
TNimType NTI183041; /* PTrunk */
TNimType NTI183045; /* TTrunkSeq */
TNimType NTI183047; /* TIntSet */

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
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

static N_INLINE(NIM_BOOL, mustrehash_183058)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP1939;
	NI TMP1940;
	NI TMP1941;
	nimfr("mustRehash", "intsets.nim")
	result = 0;
	nimln(47, "intsets.nim");
	{
		nimln(47, "intsets.nim");
		nimln(47, "intsets.nim");
		if (!!((counter < length))) goto LA3;
		nimln(47, "intsets.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP1938));
	}
	LA3: ;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	LOC5 = 0;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1939 = mulInt(length, 2);
	nimln(48, "intsets.nim");
	TMP1940 = mulInt(counter, 3);
	LOC5 = ((NI64)(TMP1939) < (NI64)(TMP1940));
	if (LOC5) goto LA6;
	nimln(48, "intsets.nim");
	nimln(48, "intsets.nim");
	TMP1941 = subInt(length, counter);
	LOC5 = ((NI64)(TMP1941) < 4);
	LA6: ;
	result = LOC5;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
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

static N_INLINE(NI, nexttry_183206)(NI h, NI maxhash) {
	NI result;
	NI TMP1942;
	NI TMP1943;
	nimfr("nextTry", "intsets.nim")
	result = 0;
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	nimln(51, "intsets.nim");
	TMP1942 = mulInt(5, h);
	TMP1943 = addInt((NI64)(TMP1942), 1);
	result = (NI)((NI64)(TMP1943) & maxhash);
	popFrame();
	return result;
}

N_NIMCALL(ttrunk183043*, intsetget_183213)(tintset183047* t, NI key) {
	ttrunk183043* result;
	NI h;
	nimfr("intSetGet", "intsets.nim")
	result = 0;
	nimln(54, "intsets.nim");
	nimln(54, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(55, "intsets.nim");
	while (1) {
		nimln(55, "intsets.nim");
		nimln(55, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA1;
		nimln(56, "intsets.nim");
		{
			nimln(56, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*(*t).Data->data[h]).Key == key)) goto LA4;
			nimln(57, "intsets.nim");
			nimln(57, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			result = (*t).Data->data[h];
			goto BeforeRet;
		}
		LA4: ;
		nimln(58, "intsets.nim");
		h = nexttry_183206(h, (*t).Max);
	} LA1: ;
	nimln(59, "intsets.nim");
	result = NIM_NIL;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41290* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_45435)(tcell41290* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(191, "gc.nim");
		incl_42055(&gch_43244.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_47027)(tcell41290* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_44662(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_45435(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(tcell41290*, usrtocell_44643)(void* usr) {
	tcell41290* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41290*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41290))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41290* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, decref_46602)(tcell41290* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_46202(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_44662(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_45435(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		tcell41290* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_44643(src);
		incref_47027(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell41290* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_44643((*dest));
		decref_46602(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, intsetrawinsert_183239)(tintset183047* t, ttrunkseq183045** data, ttrunk183043* desc) {
	NI h;
	nimfr("intSetRawInsert", "intsets.nim")
	nimln(62, "intsets.nim");
	nimln(62, "intsets.nim");
	h = (NI)((*desc).Key & (*t).Max);
	nimln(63, "intsets.nim");
	while (1) {
		nimln(63, "intsets.nim");
		nimln(63, "intsets.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA1;
		nimln(64, "intsets.nim");
		{
			nimln(64, "intsets.nim");
			nimln(64, "intsets.nim");
			nimln(64, "intsets.nim");
			if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
			if (!!(!(((*data)->data[h] == desc)))) goto LA4;
			nimln(64, "intsets.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP1944));
		}
		LA4: ;
		nimln(65, "intsets.nim");
		h = nexttry_183206(h, (*t).Max);
	} LA1: ;
	nimln(66, "intsets.nim");
	{
		nimln(66, "intsets.nim");
		nimln(66, "intsets.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA8;
		nimln(66, "intsets.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP1945));
	}
	LA8: ;
	nimln(67, "intsets.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRef((void**) &(*data)->data[h], desc);
	popFrame();
}
N_NIMCALL(void, TMP1951)(void* p, NI op) {
	ttrunk183043* a;
	NI LOC1;
	a = (ttrunk183043*)p;
	nimGCvisit((void*)(*a).Next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, TMP1952)(void* p, NI op) {
	ttrunkseq183045* a;
	NI LOC1;
	a = (ttrunkseq183045*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, intsetenlarge_183621)(tintset183047* t) {
	ttrunkseq183045* n;
	NI oldmax;
	NI TMP1946;
	NI TMP1947;
	NI TMP1948;
	NI TMP1949;
	NI i_183655;
	NI res_183691;
	ttrunkseq183045* LOC6;
	nimfr("intSetEnlarge", "intsets.nim")
	n = 0;
	nimln(71, "intsets.nim");
	oldmax = (*t).Max;
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	nimln(72, "intsets.nim");
	TMP1946 = addInt((*t).Max, 1);
	TMP1947 = mulInt((NI64)(TMP1946), 2);
	TMP1948 = subInt((NI64)(TMP1947), 1);
	(*t).Max = (NI64)(TMP1948);
	nimln(73, "intsets.nim");
	nimln(73, "intsets.nim");
	TMP1949 = addInt((*t).Max, 1);
	n = (ttrunkseq183045*) newSeq((&NTI183045), (NI64)(TMP1949));
	i_183655 = 0;
	nimln(1450, "system.nim");
	res_183691 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_183691 <= oldmax)) goto LA1;
		nimln(1450, "system.nim");
		i_183655 = res_183691;
		nimln(75, "intsets.nim");
		{
			nimln(75, "intsets.nim");
			nimln(75, "intsets.nim");
			if ((NU)(i_183655) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(((*t).Data->data[i_183655] == NIM_NIL))) goto LA4;
			nimln(75, "intsets.nim");
			if ((NU)(i_183655) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			intsetrawinsert_183239(&(*t), &n, (*t).Data->data[i_183655]);
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_183691 = addInt(res_183691, 1);
	} LA1: ;
	nimln(76, "intsets.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}

N_NIMCALL(ttrunk183043*, intsetput_183696)(tintset183047* t, NI key) {
	ttrunk183043* result;
	NI h;
	nimfr("intSetPut", "intsets.nim")
	result = 0;
	nimln(79, "intsets.nim");
	nimln(79, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(80, "intsets.nim");
	while (1) {
		nimln(80, "intsets.nim");
		nimln(80, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA1;
		nimln(81, "intsets.nim");
		{
			nimln(81, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*(*t).Data->data[h]).Key == key)) goto LA4;
			nimln(82, "intsets.nim");
			nimln(82, "intsets.nim");
			if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			result = (*t).Data->data[h];
			goto BeforeRet;
		}
		LA4: ;
		nimln(83, "intsets.nim");
		h = nexttry_183206(h, (*t).Max);
	} LA1: ;
	nimln(84, "intsets.nim");
	{
		NI TMP1953;
		NIM_BOOL LOC8;
		nimln(84, "intsets.nim");
		nimln(84, "intsets.nim");
		TMP1953 = addInt((*t).Max, 1);
		LOC8 = 0;
		LOC8 = mustrehash_183058((NI64)(TMP1953), (*t).Counter);
		if (!LOC8) goto LA9;
		nimln(84, "intsets.nim");
		intsetenlarge_183621(t);
	}
	LA9: ;
	nimln(85, "intsets.nim");
	(*t).Counter = addInt((*t).Counter, 1);
	nimln(86, "intsets.nim");
	nimln(86, "intsets.nim");
	h = (NI)(key & (*t).Max);
	nimln(87, "intsets.nim");
	while (1) {
		nimln(87, "intsets.nim");
		nimln(87, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA11;
		nimln(87, "intsets.nim");
		h = nexttry_183206(h, (*t).Max);
	} LA11: ;
	nimln(88, "intsets.nim");
	{
		nimln(88, "intsets.nim");
		nimln(88, "intsets.nim");
		if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA14;
		nimln(88, "intsets.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP1954));
	}
	LA14: ;
	nimln(89, "intsets.nim");
	result = (ttrunk183043*) newObj((&NTI183041), sizeof(ttrunk183043));
	nimln(90, "intsets.nim");
	asgnRef((void**) &(*result).Next, (*t).Head);
	nimln(91, "intsets.nim");
	(*result).Key = key;
	nimln(92, "intsets.nim");
	unsureAsgnRef((void**) &(*t).Head, result);
	nimln(93, "intsets.nim");
	if ((NU)(h) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
	asgnRef((void**) &(*t).Data->data[h], result);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, contains_183838)(tintset183047* s, NI key) {
	NIM_BOOL result;
	ttrunk183043* t;
	nimfr("contains", "intsets.nim")
	result = 0;
	nimln(97, "intsets.nim");
	nimln(97, "intsets.nim");
	t = intsetget_183213(s, (NI)((NU64)(key) >> (NU64)(9)));
	nimln(98, "intsets.nim");
	{
		NI u;
		nimln(98, "intsets.nim");
		nimln(98, "intsets.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(99, "intsets.nim");
		nimln(99, "intsets.nim");
		u = (NI)(key & 511);
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(100, "intsets.nim");
		nimln(100, "intsets.nim");
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63)))))) == 0));
	}
	goto LA1;
	LA3: ;
	{
		nimln(102, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, incl_183866)(tintset183047* s, NI key) {
	ttrunk183043* t;
	NI u;
	nimfr("incl", "intsets.nim")
	nimln(106, "intsets.nim");
	nimln(106, "intsets.nim");
	t = intsetput_183696(s, (NI)((NU64)(key) >> (NU64)(9)));
	nimln(107, "intsets.nim");
	nimln(107, "intsets.nim");
	u = (NI)(key & 511);
	nimln(108, "intsets.nim");
	nimln(108, "intsets.nim");
	if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
	nimln(108, "intsets.nim");
	nimln(108, "intsets.nim");
	if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
	nimln(109, "intsets.nim");
	nimln(109, "intsets.nim");
	(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] | (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))));
	popFrame();
}

N_NIMCALL(void, excl_183877)(tintset183047* s, NI key) {
	ttrunk183043* t;
	nimfr("excl", "intsets.nim")
	nimln(113, "intsets.nim");
	nimln(113, "intsets.nim");
	t = intsetget_183213(&(*s), (NI)((NU64)(key) >> (NU64)(9)));
	nimln(114, "intsets.nim");
	{
		NI u;
		nimln(114, "intsets.nim");
		nimln(114, "intsets.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(115, "intsets.nim");
		nimln(115, "intsets.nim");
		u = (NI)(key & 511);
		nimln(116, "intsets.nim");
		nimln(116, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(116, "intsets.nim");
		nimln(116, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(117, "intsets.nim");
		nimln(117, "intsets.nim");
		nimln(117, "intsets.nim");
		(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64) ~((NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))))));
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, containsorincl_183905)(tintset183047* s, NI key) {
	NIM_BOOL result;
	ttrunk183043* t;
	nimfr("containsOrIncl", "intsets.nim")
	result = 0;
	nimln(122, "intsets.nim");
	nimln(122, "intsets.nim");
	t = intsetget_183213(&(*s), (NI)((NU64)(key) >> (NU64)(9)));
	nimln(123, "intsets.nim");
	{
		NI u;
		nimln(123, "intsets.nim");
		nimln(123, "intsets.nim");
		if (!!((t == NIM_NIL))) goto LA3;
		nimln(124, "intsets.nim");
		nimln(124, "intsets.nim");
		u = (NI)(key & 511);
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
		nimln(125, "intsets.nim");
		nimln(125, "intsets.nim");
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] & (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63)))))) == 0));
		nimln(126, "intsets.nim");
		{
			nimln(126, "intsets.nim");
			if (!!(result)) goto LA7;
			nimln(127, "intsets.nim");
			nimln(127, "intsets.nim");
			if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
			nimln(127, "intsets.nim");
			nimln(127, "intsets.nim");
			if ((NU)((NI)((NU64)(((NI) (u))) >> (NU64)(6))) > (NU)(7)) raiseIndexError();
			nimln(128, "intsets.nim");
			nimln(128, "intsets.nim");
			(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(6)))- 0] | (NI)((NU64)(1) << (NU64)(((NI) ((NI)(((NI) (u)) & 63))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(130, "intsets.nim");
		incl_183866(s, key);
		nimln(131, "intsets.nim");
		result = NIM_FALSE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, initintset_183935)(tintset183047* Result) {
	nimfr("initIntSet", "intsets.nim")
	nimln(135, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Data, (ttrunkseq183045*) newSeq((&NTI183045), 8));
	nimln(136, "intsets.nim");
	(*Result).Max = 7;
	nimln(137, "intsets.nim");
	(*Result).Counter = 0;
	nimln(138, "intsets.nim");
	unsureAsgnRef((void**) &(*Result).Head, NIM_NIL);
	popFrame();
}

N_NIMCALL(void, assign_183956)(tintset183047* dest, tintset183047* src) {
	ttrunk183043* it;
	nimfr("assign", "intsets.nim")
	nimln(143, "intsets.nim");
	(*dest).Counter = (*src).Counter;
	nimln(144, "intsets.nim");
	(*dest).Max = (*src).Max;
	nimln(145, "intsets.nim");
	nimln(145, "intsets.nim");
	unsureAsgnRef((void**) &(*dest).Data, (ttrunkseq183045*) newSeq((&NTI183045), (*src).Data->Sup.len));
	nimln(147, "intsets.nim");
	it = (*src).Head;
	nimln(148, "intsets.nim");
	while (1) {
		NI h;
		ttrunk183043* n;
		nimln(148, "intsets.nim");
		nimln(148, "intsets.nim");
		if (!!((it == NIM_NIL))) goto LA1;
		nimln(150, "intsets.nim");
		nimln(150, "intsets.nim");
		h = (NI)((*it).Key & (*dest).Max);
		nimln(151, "intsets.nim");
		while (1) {
			nimln(151, "intsets.nim");
			nimln(151, "intsets.nim");
			if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
			if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA2;
			nimln(151, "intsets.nim");
			h = nexttry_183206(h, (*dest).Max);
		} LA2: ;
		nimln(152, "intsets.nim");
		{
			nimln(152, "intsets.nim");
			nimln(152, "intsets.nim");
			if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
			if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA5;
			nimln(152, "intsets.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP1955));
		}
		LA5: ;
		n = 0;
		nimln(155, "intsets.nim");
		n = (ttrunk183043*) newObj((&NTI183041), sizeof(ttrunk183043));
		nimln(156, "intsets.nim");
		asgnRef((void**) &(*n).Next, (*dest).Head);
		nimln(157, "intsets.nim");
		(*n).Key = (*it).Key;
		nimln(158, "intsets.nim");
		memcpy((void*)(*n).Bits, (NIM_CONST void*)(*it).Bits, sizeof((*n).Bits));
		nimln(159, "intsets.nim");
		unsureAsgnRef((void**) &(*dest).Head, n);
		nimln(160, "intsets.nim");
		if ((NU)(h) >= (NU)((*dest).Data->Sup.len)) raiseIndexError();
		asgnRef((void**) &(*dest).Data->data[h], n);
		nimln(162, "intsets.nim");
		it = (*it).Next;
	} LA1: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_184322)(tintset183047* s) {
	NimStringDesc* result;
	NI key_184327;
	ttrunk183043* r_184330;
	nimfr("$", "intsets.nim")
	result = 0;
	nimln(183, "intsets.nim");
	result = copyString(((NimStringDesc*) &TMP1956));
	key_184327 = 0;
	nimln(166, "intsets.nim");
	r_184330 = (*s).Head;
	nimln(167, "intsets.nim");
	while (1) {
		NI i_184332;
		nimln(167, "intsets.nim");
		nimln(167, "intsets.nim");
		if (!!((r_184330 == NIM_NIL))) goto LA1;
		nimln(168, "intsets.nim");
		i_184332 = 0;
		nimln(169, "intsets.nim");
		while (1) {
			NI w_184334;
			NI j_184336;
			nimln(169, "intsets.nim");
			if (!(i_184332 <= 7)) goto LA2;
			nimln(170, "intsets.nim");
			if ((NU)(i_184332) > (NU)(7)) raiseIndexError();
			w_184334 = (*r_184330).Bits[(i_184332)- 0];
			nimln(173, "intsets.nim");
			j_184336 = 0;
			nimln(174, "intsets.nim");
			while (1) {
				nimln(174, "intsets.nim");
				nimln(174, "intsets.nim");
				if (!!((w_184334 == 0))) goto LA3;
				nimln(175, "intsets.nim");
				{
					NimStringDesc* LOC12;
					nimln(175, "intsets.nim");
					nimln(175, "intsets.nim");
					nimln(175, "intsets.nim");
					if (!!((((NI) ((NI)(w_184334 & 1))) == 0))) goto LA6;
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					nimln(176, "intsets.nim");
					key_184327 = (NI)((NI)((NU64)((*r_184330).Key) << (NU64)(9)) | (NI)((NU64)((NI)((NU64)(i_184332) << (NU64)(6))) + (NU64)(j_184336)));
					nimln(185, "intsets.nim");
					{
						nimln(185, "intsets.nim");
						nimln(185, "intsets.nim");
						if (!(1 < result->Sup.len)) goto LA10;
						nimln(185, "intsets.nim");
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP1957));
					}
					LA10: ;
					nimln(186, "intsets.nim");
					nimln(186, "intsets.nim");
					LOC12 = 0;
					LOC12 = nimIntToStr(key_184327);
					result = resizeString(result, LOC12->Sup.len + 0);
appendString(result, LOC12);
				}
				LA6: ;
				nimln(177, "intsets.nim");
				j_184336 = addInt(j_184336, 1);
				nimln(178, "intsets.nim");
				nimln(178, "intsets.nim");
				w_184334 = (NI)((NU64)(w_184334) >> (NU64)(1));
			} LA3: ;
			nimln(179, "intsets.nim");
			i_184332 = addInt(i_184332, 1);
		} LA2: ;
		nimln(180, "intsets.nim");
		r_184330 = (*r_184330).Next;
	} LA1: ;
	nimln(187, "intsets.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP1958));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, empty_184342)(tintset183047* s) {
	NIM_BOOL result;
	nimfr("empty", "intsets.nim")
	result = 0;
	nimln(196, "intsets.nim");
	nimln(196, "intsets.nim");
	result = ((*s).Counter == 0);
	popFrame();
	return result;
}
N_NOINLINE(void, stdlibintsetsInit)(void) {
	nimfr("intsets", "intsets.nim")
	popFrame();
}

N_NOINLINE(void, stdlibintsetsDatInit)(void) {
static TNimNode* TMP1950[3];
static TNimNode* TMP3244[4];
static TNimNode TMP1936[9];
NTI183043.size = sizeof(ttrunk183043);
NTI183043.kind = 18;
NTI183043.base = 0;
TMP1950[0] = &TMP1936[1];
TMP1936[1].kind = 1;
TMP1936[1].offset = offsetof(ttrunk183043, Next);
TMP1936[1].typ = (&NTI183041);
TMP1936[1].name = "next";
TMP1950[1] = &TMP1936[2];
TMP1936[2].kind = 1;
TMP1936[2].offset = offsetof(ttrunk183043, Key);
TMP1936[2].typ = (&NTI106);
TMP1936[2].name = "key";
TMP1950[2] = &TMP1936[3];
TMP1936[3].kind = 1;
TMP1936[3].offset = offsetof(ttrunk183043, Bits);
TMP1936[3].typ = (&NTI22818);
TMP1936[3].name = "bits";
TMP1936[0].len = 3; TMP1936[0].kind = 2; TMP1936[0].sons = &TMP1950[0];
NTI183043.node = &TMP1936[0];
NTI183041.size = sizeof(ttrunk183043*);
NTI183041.kind = 22;
NTI183041.base = (&NTI183043);
NTI183041.marker = TMP1951;
NTI183045.size = sizeof(ttrunkseq183045*);
NTI183045.kind = 24;
NTI183045.base = (&NTI183041);
NTI183045.flags = 2;
NTI183045.marker = TMP1952;
NTI183047.size = sizeof(tintset183047);
NTI183047.kind = 18;
NTI183047.base = 0;
NTI183047.flags = 2;
TMP3244[0] = &TMP1936[5];
TMP1936[5].kind = 1;
TMP1936[5].offset = offsetof(tintset183047, Counter);
TMP1936[5].typ = (&NTI106);
TMP1936[5].name = "counter";
TMP3244[1] = &TMP1936[6];
TMP1936[6].kind = 1;
TMP1936[6].offset = offsetof(tintset183047, Max);
TMP1936[6].typ = (&NTI106);
TMP1936[6].name = "max";
TMP3244[2] = &TMP1936[7];
TMP1936[7].kind = 1;
TMP1936[7].offset = offsetof(tintset183047, Head);
TMP1936[7].typ = (&NTI183041);
TMP1936[7].name = "head";
TMP3244[3] = &TMP1936[8];
TMP1936[8].kind = 1;
TMP1936[8].offset = offsetof(tintset183047, Data);
TMP1936[8].typ = (&NTI183045);
TMP1936[8].name = "data";
TMP1936[4].len = 4; TMP1936[4].kind = 2; TMP1936[4].sons = &TMP3244[0];
NTI183047.node = &TMP1936[4];
}

