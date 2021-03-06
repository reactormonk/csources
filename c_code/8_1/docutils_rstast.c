/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct trstnode294009 trstnode294009;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY294084 TY294084;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell41290 tcell41290;
typedef struct tcellseq41306 tcellseq41306;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellset41302 tcellset41302;
typedef struct tpagedesc41298 tpagedesc41298;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct trendercontext294211 trendercontext294211;
typedef struct TY289134 TY289134;
typedef struct tjsonnode289114 tjsonnode289114;
typedef struct TY289130 TY289130;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
typedef struct TY289129 TY289129;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  trstnode294009  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY294084* Sons;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell41290  {
NI Refcount;
TNimType* Typ;
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
typedef NIM_CHAR TY294258[9];
struct  trendercontext294211  {
NI Indent;
NI Verbatim;
};
struct TY289130 {
NimStringDesc* Field0;
tjsonnode289114* Field1;
};
typedef TY289130 TY294586[2];
typedef NI TY22818[16];
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
struct  tjsonnode289114  {
NU8 Kind;
union {
struct {NimStringDesc* Str;
} S1;
struct {NI64 Num;
} S2;
struct {NF Fnum;
} S3;
struct {NIM_BOOL Bval;
} S4;
struct {TY289129* Fields;
} S6;
struct {TY289134* Elems;
} S7;
} kindU;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
struct TY294084 {
  TGenericSeq Sup;
  trstnode294009* data[SEQ_DECL_SIZE];
};
struct TY289134 {
  TGenericSeq Sup;
  tjsonnode289114* data[SEQ_DECL_SIZE];
};
struct TY289129 {
  TGenericSeq Sup;
  TY289130 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, len_294080)(trstnode294009* n);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(trstnode294009*, newrstnode_294097)(NU8 kind);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP3778)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(trstnode294009*, newrstnode_294139)(NU8 kind, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(trstnode294009*, lastson_294146)(trstnode294009* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_294163)(trstnode294009* father, trstnode294009* son);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, addifnotnil_294187)(trstnode294009* father, trstnode294009* son);
N_NIMCALL(void, renderrstsons_294223)(trendercontext294211* d, trstnode294009* n, NimStringDesc** result);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, renderrsttorst_294215)(trendercontext294211* d, trstnode294009* n, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_76080, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, renderrsttorst_294557)(trstnode294009* n, NimStringDesc** result);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_294591)(TY294084* x_294597, TY294084* y_294602);
static N_INLINE(void*, seqtoptr_294607)(TY294084* x_294613);
N_NIMCALL(TY289134*, newseq_294745)(NI len_294749);
N_NIMCALL(tjsonnode289114*, renderrsttojsonnode_294567)(trstnode294009* node);
N_NIMCALL(tjsonnode289114*, HEX25_289619)(TY289130* keyvals, NI keyvalsLen0);
N_NIMCALL(tjsonnode289114*, HEX25_289475)(NimStringDesc* s);
N_NIMCALL(tjsonnode289114*, HEX25_289511)(NI64 n);
N_NIMCALL(void, add_290844)(tjsonnode289114* obj, NimStringDesc* key, tjsonnode289114* val);
N_NIMCALL(tjsonnode289114*, HEX25_289745)(tjsonnode289114** elements, NI elementsLen0);
N_NIMCALL(NimStringDesc*, renderrsttojson_294847)(trstnode294009* node);
N_NIMCALL(NimStringDesc*, pretty_292151)(tjsonnode289114* node, NI indent);
NIM_CONST TY294258 lvltochar_294257 = {33,
61,
45,
126,
96,
60,
42,
124,
43}
;
STRING_LITERAL(TMP3781, "\012", 1);
STRING_LITERAL(TMP3783, "", 0);
STRING_LITERAL(TMP3785, "\012\012", 2);
STRING_LITERAL(TMP3787, "* ", 2);
STRING_LITERAL(TMP3788, "(#) ", 4);
STRING_LITERAL(TMP3789, "  ", 2);
STRING_LITERAL(TMP3793, "| ", 2);
STRING_LITERAL(TMP3794, "`", 1);
STRING_LITERAL(TMP3795, "`_", 2);
STRING_LITERAL(TMP3796, " <", 2);
STRING_LITERAL(TMP3797, ">`_", 3);
STRING_LITERAL(TMP3798, "`:", 2);
STRING_LITERAL(TMP3799, "`:sub:", 6);
STRING_LITERAL(TMP3800, "`:sup:", 6);
STRING_LITERAL(TMP3801, "`:idx:", 6);
STRING_LITERAL(TMP3802, "*", 1);
STRING_LITERAL(TMP3803, "**", 2);
STRING_LITERAL(TMP3804, "***", 3);
STRING_LITERAL(TMP3805, "``", 2);
STRING_LITERAL(TMP3806, "\\", 1);
STRING_LITERAL(TMP3807, "\\\\", 2);
STRING_LITERAL(TMP3808, ".. index::\012", 11);
STRING_LITERAL(TMP3809, ".. contents::", 13);
STRING_LITERAL(TMP3810, "Error: cannot render: ", 22);
STRING_LITERAL(TMP3812, "kind", 4);
STRING_LITERAL(TMP3813, "level", 5);
STRING_LITERAL(TMP3814, "text", 4);
STRING_LITERAL(TMP3815, "sons", 4);
extern TFrame* frameptr_13038;
TNimType NTI294009; /* TRstNode */
TNimType NTI294003; /* TRstNodeKind */
extern TNimType NTI143; /* string */
extern TNimType NTI106; /* int */
extern TNimType NTI294084; /* seq[PRstNode] */
TNimType NTI294005; /* PRstNode */
extern tgcheap43216 gch_43244;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(NI, len_294080)(trstnode294009* n) {
	NI result;
	nimfr("len", "rstast.nim")
	result = 0;
	nimln(75, "rstast.nim");
	nimln(75, "rstast.nim");
	result = (*n).Sons->Sup.len;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP3778)(void* p, NI op) {
	trstnode294009* a;
	a = (trstnode294009*)p;
	nimGCvisit((void*)(*a).Text, op);
	nimGCvisit((void*)(*a).Sons, op);
}

static N_INLINE(tcell41290*, usrtocell_44643)(void* usr) {
	tcell41290* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41290*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41290))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41290* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41290* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44643(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46202(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(trstnode294009*, newrstnode_294097)(NU8 kind) {
	trstnode294009* result;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(78, "rstast.nim");
	result = (trstnode294009*) newObj((&NTI294005), sizeof(trstnode294009));
	nimln(79, "rstast.nim");
	if ((*result).Sons) nimGCunrefNoCycle((*result).Sons);
	(*result).Sons = (TY294084*) newSeqRC1((&NTI294084), 0);
	nimln(80, "rstast.nim");
	(*result).Kind = kind;
	popFrame();
	return result;
}

N_NIMCALL(trstnode294009*, newrstnode_294139)(NU8 kind, NimStringDesc* s) {
	trstnode294009* result;
	NimStringDesc* LOC1;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(83, "rstast.nim");
	result = newrstnode_294097(kind);
	nimln(84, "rstast.nim");
	LOC1 = 0;
	LOC1 = (*result).Text; (*result).Text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
	return result;
}

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

N_NIMCALL(trstnode294009*, lastson_294146)(trstnode294009* n) {
	trstnode294009* result;
	NI TMP3779;
	nimfr("lastSon", "rstast.nim")
	result = 0;
	nimln(87, "rstast.nim");
	nimln(87, "rstast.nim");
	nimln(87, "rstast.nim");
	TMP3779 = subInt((*n).Sons->Sup.len, 1);
	if ((NU)((NI32)(TMP3779)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI32)(TMP3779)];
	popFrame();
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41290* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_44643(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41290* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_44643((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46202(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, add_294163)(trstnode294009* father, trstnode294009* son) {
	nimfr("add", "rstast.nim")
	nimln(90, "rstast.nim");
	(*father).Sons = (TY294084*) incrSeq(&((*father).Sons)->Sup, sizeof(trstnode294009*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], son);
	popFrame();
}

N_NIMCALL(void, addifnotnil_294187)(trstnode294009* father, trstnode294009* son) {
	nimfr("addIfNotNil", "rstast.nim")
	nimln(93, "rstast.nim");
	{
		nimln(93, "rstast.nim");
		nimln(93, "rstast.nim");
		if (!!((son == NIM_NIL))) goto LA3;
		nimln(93, "rstast.nim");
		add_294163(father, son);
	}
	LA3: ;
	popFrame();
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

N_NIMCALL(void, renderrstsons_294223)(trendercontext294211* d, trstnode294009* n, NimStringDesc** result) {
	NI i_294242;
	NI HEX3Atmp_294243;
	NI LOC1;
	NI TMP3780;
	NI res_294245;
	nimfr("renderRstSons", "rstast.nim")
	i_294242 = 0;
	HEX3Atmp_294243 = 0;
	nimln(104, "rstast.nim");
	nimln(104, "rstast.nim");
	nimln(104, "rstast.nim");
	LOC1 = 0;
	LOC1 = len_294080(n);
	TMP3780 = subInt(LOC1, 1);
	HEX3Atmp_294243 = (NI32)(TMP3780);
	nimln(1450, "system.nim");
	res_294245 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_294245 <= HEX3Atmp_294243)) goto LA2;
		nimln(1450, "system.nim");
		i_294242 = res_294245;
		nimln(105, "rstast.nim");
		if ((NU)(i_294242) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_294215(d, (*n).Sons->data[i_294242], result);
		nimln(1453, "system.nim");
		res_294245 = addInt(res_294245, 1);
	} LA2: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, renderrsttorst_294215)(trendercontext294211* d, trstnode294009* n, NimStringDesc** result) {
	NimStringDesc* ind;
	nimfr("renderRstToRst", "rstast.nim")
	nimln(112, "rstast.nim");
	{
		nimln(112, "rstast.nim");
		if (!(n == NIM_NIL)) goto LA3;
		nimln(112, "rstast.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(113, "rstast.nim");
	ind = nsuRepeatChar((*d).Indent, 32);
	nimln(114, "rstast.nim");
	switch ((*n).Kind) {
	case ((NU8) 0):
	{
		nimln(116, "rstast.nim");
		renderrstsons_294223(d, n, result);
	}
	break;
	case ((NU8) 1):
	{
		NI oldlen;
		NI headlinelen;
		NI TMP3782;
		NimStringDesc* LOC7;
		nimln(118, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3781));
		nimln(119, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(121, "rstast.nim");
		nimln(121, "rstast.nim");
		oldlen = (*result)->Sup.len;
		nimln(122, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(123, "rstast.nim");
		nimln(123, "rstast.nim");
		nimln(123, "rstast.nim");
		TMP3782 = subInt((*result)->Sup.len, oldlen);
		headlinelen = (NI32)(TMP3782);
		nimln(125, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3781));
		nimln(126, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(127, "rstast.nim");
		nimln(127, "rstast.nim");
		if ((NU)((*n).Level) > (NU)(8)) raiseIndexError();
		LOC7 = 0;
		LOC7 = nsuRepeatChar(headlinelen, lvltochar_294257[((*n).Level)- 0]);
		(*result) = resizeString((*result), LOC7->Sup.len + 0);
appendString((*result), LOC7);
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* headline;
		NimStringDesc* lvl;
		NI TMP3784;
		nimln(129, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3781));
		nimln(130, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(132, "rstast.nim");
		headline = copyString(((NimStringDesc*) &TMP3783));
		nimln(133, "rstast.nim");
		renderrstsons_294223(d, n, &headline);
		nimln(135, "rstast.nim");
		nimln(135, "rstast.nim");
		nimln(135, "rstast.nim");
		TMP3784 = subInt(headline->Sup.len, (*d).Indent);
		if ((NU)((*n).Level) > (NU)(8)) raiseIndexError();
		lvl = nsuRepeatChar((NI32)(TMP3784), lvltochar_294257[((*n).Level)- 0]);
		nimln(136, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
		nimln(137, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3781));
		nimln(138, "rstast.nim");
		(*result) = resizeString((*result), headline->Sup.len + 0);
appendString((*result), headline);
		nimln(140, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3781));
		nimln(141, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(142, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
	}
	break;
	case ((NU8) 3):
	{
		NI TMP3786;
		NimStringDesc* LOC10;
		nimln(144, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3785));
		nimln(145, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(146, "rstast.nim");
		nimln(146, "rstast.nim");
		nimln(146, "rstast.nim");
		TMP3786 = subInt(78, (*d).Indent);
		LOC10 = 0;
		LOC10 = nsuRepeatChar((NI32)(TMP3786), 45);
		(*result) = resizeString((*result), LOC10->Sup.len + 0);
appendString((*result), LOC10);
		nimln(147, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3785));
	}
	break;
	case ((NU8) 4):
	{
		nimln(149, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3785));
		nimln(150, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(151, "rstast.nim");
		renderrstsons_294223(d, n, result);
	}
	break;
	case ((NU8) 6):
	{
		NimStringDesc* tmp;
		nimln(153, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(154, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3783));
		nimln(155, "rstast.nim");
		renderrstsons_294223(d, n, &tmp);
		nimln(156, "rstast.nim");
		{
			nimln(156, "rstast.nim");
			nimln(156, "rstast.nim");
			if (!(0 < tmp->Sup.len)) goto LA15;
			nimln(157, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3781));
			nimln(158, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(159, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3787));
			nimln(160, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}
		LA15: ;
		nimln(161, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}
	break;
	case ((NU8) 8):
	{
		NimStringDesc* tmp;
		nimln(163, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 4);
		nimln(164, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3783));
		nimln(165, "rstast.nim");
		renderrstsons_294223(d, n, &tmp);
		nimln(166, "rstast.nim");
		{
			nimln(166, "rstast.nim");
			nimln(166, "rstast.nim");
			if (!(0 < tmp->Sup.len)) goto LA20;
			nimln(167, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3781));
			nimln(168, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(169, "rstast.nim");
			(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP3788));
			nimln(170, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}
		LA20: ;
		nimln(171, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 4);
	}
	break;
	case ((NU8) 17):
	case ((NU8) 13):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 26):
	case ((NU8) 15):
	case ((NU8) 16):
	case ((NU8) 37):
	case ((NU8) 5):
	case ((NU8) 7):
	{
		nimln(174, "rstast.nim");
		renderrstsons_294223(d, n, result);
	}
	break;
	case ((NU8) 11):
	{
		nimln(176, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3785));
		nimln(177, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(178, "rstast.nim");
		renderrstsons_294223(d, n, result);
	}
	break;
	case ((NU8) 12):
	{
		nimln(180, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(181, "rstast.nim");
		{
			nimln(181, "rstast.nim");
			nimln(181, "rstast.nim");
			if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).Sons->data[0]).Kind == ((NU8) 5)))) goto LA27;
			nimln(182, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3781));
			nimln(183, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(184, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3789));
		}
		LA27: ;
		nimln(185, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(186, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}
	break;
	case ((NU8) 14):
	{
		NimStringDesc* tmp;
		NI l;
		NI TMP3790;
		NI TMP3791;
		NI TMP3792;
		NimStringDesc* LOC30;
		nimln(188, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3783));
		nimln(189, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_294215(d, (*n).Sons->data[0], &tmp);
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		TMP3790 = addInt(tmp->Sup.len, 3);
		l = (((NI32)(TMP3790) >= 30) ? (NI32)(TMP3790) : 30);
		nimln(192, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, l);
		nimln(194, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3781));
		nimln(195, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(196, "rstast.nim");
		(*result) = addChar((*result), 58);
		nimln(197, "rstast.nim");
		(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		nimln(198, "rstast.nim");
		(*result) = addChar((*result), 58);
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		TMP3791 = subInt(l, tmp->Sup.len);
		TMP3792 = subInt((NI32)(TMP3791), 2);
		LOC30 = 0;
		LOC30 = nsuRepeatChar((NI32)(TMP3792), 32);
		(*result) = resizeString((*result), LOC30->Sup.len + 0);
appendString((*result), LOC30);
		nimln(200, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_294215(d, (*n).Sons->data[1], result);
		nimln(202, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, l);
	}
	break;
	case ((NU8) 27):
	{
		nimln(204, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3781));
		nimln(205, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(206, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3793));
		nimln(207, "rstast.nim");
		renderrstsons_294223(d, n, result);
	}
	break;
	case ((NU8) 28):
	{
		nimln(209, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(210, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(211, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}
	break;
	case ((NU8) 39):
	{
		nimln(213, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3794));
		nimln(214, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(215, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3795));
	}
	break;
	case ((NU8) 38):
	{
		nimln(217, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(218, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_294215(d, (*n).Sons->data[0], result);
		nimln(219, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3796));
		nimln(220, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_294215(d, (*n).Sons->data[1], result);
		nimln(221, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3797));
	}
	break;
	case ((NU8) 53):
	{
		nimln(223, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(224, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_294215(d, (*n).Sons->data[0], result);
		nimln(225, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3798));
		nimln(226, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_294215(d, (*n).Sons->data[1], result);
		nimln(227, "rstast.nim");
		(*result) = addChar((*result), 58);
	}
	break;
	case ((NU8) 54):
	{
		nimln(229, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(230, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(231, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3799));
	}
	break;
	case ((NU8) 55):
	{
		nimln(233, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(234, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(235, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3800));
	}
	break;
	case ((NU8) 56):
	{
		nimln(237, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(238, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(239, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3801));
	}
	break;
	case ((NU8) 57):
	{
		nimln(241, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3802));
		nimln(242, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(243, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3802));
	}
	break;
	case ((NU8) 58):
	{
		nimln(245, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3803));
		nimln(246, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(247, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3803));
	}
	break;
	case ((NU8) 59):
	{
		nimln(249, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3804));
		nimln(250, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(251, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3804));
	}
	break;
	case ((NU8) 60):
	{
		nimln(253, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(254, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(255, "rstast.nim");
		(*result) = addChar((*result), 96);
	}
	break;
	case ((NU8) 61):
	{
		nimln(257, "rstast.nim");
		(*d).Verbatim = addInt((*d).Verbatim, 1);
		nimln(258, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3805));
		nimln(259, "rstast.nim");
		renderrstsons_294223(d, n, result);
		nimln(260, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3805));
		nimln(261, "rstast.nim");
		(*d).Verbatim = subInt((*d).Verbatim, 1);
	}
	break;
	case ((NU8) 63):
	{
		nimln(263, "rstast.nim");
		(*result) = resizeString((*result), (*n).Text->Sup.len + 0);
appendString((*result), (*n).Text);
	}
	break;
	case ((NU8) 64):
	{
		nimln(265, "rstast.nim");
		{
			NIM_BOOL LOC48;
			nimln(265, "rstast.nim");
			LOC48 = 0;
			nimln(265, "rstast.nim");
			LOC48 = ((*d).Verbatim == 0);
			if (!(LOC48)) goto LA49;
			nimln(265, "rstast.nim");
			LOC48 = eqStrings((*n).Text, ((NimStringDesc*) &TMP3806));
			LA49: ;
			if (!LOC48) goto LA50;
			nimln(266, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3807));
		}
		goto LA46;
		LA50: ;
		{
			nimln(268, "rstast.nim");
			(*result) = resizeString((*result), (*n).Text->Sup.len + 0);
appendString((*result), (*n).Text);
		}
		LA46: ;
	}
	break;
	case ((NU8) 51):
	{
		nimln(270, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3785));
		nimln(271, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(272, "rstast.nim");
		(*result) = resizeString((*result), 11);
appendString((*result), ((NimStringDesc*) &TMP3808));
		nimln(274, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 3);
		nimln(275, "rstast.nim");
		{
			nimln(275, "rstast.nim");
			nimln(275, "rstast.nim");
			if ((NU)(2) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			if (!!(((*n).Sons->data[2] == NIM_NIL))) goto LA56;
			nimln(275, "rstast.nim");
			if ((NU)(2) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			renderrstsons_294223(d, (*n).Sons->data[2], result);
		}
		LA56: ;
		nimln(276, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 3);
	}
	break;
	case ((NU8) 44):
	{
		nimln(278, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3785));
		nimln(279, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(280, "rstast.nim");
		(*result) = resizeString((*result), 13);
appendString((*result), ((NimStringDesc*) &TMP3809));
	}
	break;
	default:
	{
		NimStringDesc* LOC60;
		nimln(282, "rstast.nim");
		nimln(282, "rstast.nim");
		LOC60 = 0;
		nimln(282, "rstast.nim");
		LOC60 = rawNewString(reprEnum((*n).Kind, (&NTI294003))->Sup.len + 22);
appendString(LOC60, ((NimStringDesc*) &TMP3810));
appendString(LOC60, reprEnum((*n).Kind, (&NTI294003)));
		(*result) = resizeString((*result), LOC60->Sup.len + 0);
appendString((*result), LOC60);
	}
	break;
	}
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, renderrsttorst_294557)(trstnode294009* n, NimStringDesc** result) {
	trendercontext294211 d;
	nimfr("renderRstToRst", "rstast.nim")
	memset((void*)&d, 0, sizeof(d));
	nimln(287, "rstast.nim");
	renderrsttorst_294215(&d, n, result);
	popFrame();
}

static N_INLINE(void*, seqtoptr_294607)(TY294084* x_294613) {
	void* result;
	nimfr("seqToPtr", "system.nim")
	result = 0;
	nimln(1658, "system.nim");
	result = ((void*) (x_294613));
	popFrame();
	return result;
}

N_NIMCALL(tjsonnode289114*, renderrsttojsonnode_294567)(trstnode294009* node) {
	tjsonnode289114* result;
	TY294586 LOC1;
	nimfr("renderRstToJsonNode", "rstast.nim")
	result = 0;
	nimln(290, "rstast.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0].Field0 = copyString(((NimStringDesc*) &TMP3812));
	nimln(292, "rstast.nim");
	nimln(292, "rstast.nim");
	LOC1[0].Field1 = HEX25_289475(reprEnum((*node).Kind, (&NTI294003)));
	LOC1[1].Field0 = copyString(((NimStringDesc*) &TMP3813));
	nimln(293, "rstast.nim");
	LOC1[1].Field1 = HEX25_289511(((NI64) ((*node).Level)));
	result = HEX25_289619(LOC1, 2);
	nimln(295, "rstast.nim");
	{
		tjsonnode289114* LOC6;
		nimln(295, "rstast.nim");
		nimln(295, "rstast.nim");
		if (!!(((*node).Text == NIM_NIL))) goto LA4;
		nimln(296, "rstast.nim");
		nimln(296, "rstast.nim");
		LOC6 = 0;
		LOC6 = HEX25_289475((*node).Text);
		add_290844(result, ((NimStringDesc*) &TMP3814), LOC6);
	}
	LA4: ;
	nimln(297, "rstast.nim");
	{
		NIM_BOOL LOC9;
		NIM_BOOL LOC10;
		TY289134* accm;
		NI i_294838;
		trstnode294009* son_294839;
		TY294084* HEX3Atmp_294841;
		NI i_294843;
		tjsonnode289114* LOC15;
		nimln(297, "rstast.nim");
		LOC9 = 0;
		nimln(297, "rstast.nim");
		nimln(297, "rstast.nim");
		LOC10 = 0;
		LOC10 = HEX3DHEX3D_294591((*node).Sons, NIM_NIL);
		LOC9 = !(LOC10);
		if (!(LOC9)) goto LA11;
		nimln(297, "rstast.nim");
		nimln(297, "rstast.nim");
		LOC9 = (0 < (*node).Sons->Sup.len);
		LA11: ;
		if (!LOC9) goto LA12;
		nimln(298, "rstast.nim");
		nimln(298, "rstast.nim");
		accm = newseq_294745((*node).Sons->Sup.len);
		i_294838 = 0;
		son_294839 = 0;
		HEX3Atmp_294841 = 0;
		nimln(299, "rstast.nim");
		HEX3Atmp_294841 = (*node).Sons;
		nimln(1585, "system.nim");
		i_294843 = 0;
		nimln(1586, "system.nim");
		while (1) {
			nimln(1586, "system.nim");
			nimln(1586, "system.nim");
			if (!(i_294843 < HEX3Atmp_294841->Sup.len)) goto LA14;
			nimln(1585, "system.nim");
			i_294838 = i_294843;
			nimln(1587, "system.nim");
			if ((NU)(i_294843) >= (NU)(HEX3Atmp_294841->Sup.len)) raiseIndexError();
			son_294839 = HEX3Atmp_294841->data[i_294843];
			nimln(300, "rstast.nim");
			if ((NU)(i_294838) >= (NU)(accm->Sup.len)) raiseIndexError();
			asgnRefNoCycle((void**) &accm->data[i_294838], renderrsttojsonnode_294567(son_294839));
			nimln(1588, "system.nim");
			i_294843 = addInt(i_294843, 1);
		} LA14: ;
		nimln(301, "rstast.nim");
		nimln(301, "rstast.nim");
		LOC15 = 0;
		LOC15 = HEX25_289745(accm->data, accm->Sup.len);
		add_290844(result, ((NimStringDesc*) &TMP3815), LOC15);
	}
	LA12: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, renderrsttojson_294847)(trstnode294009* node) {
	NimStringDesc* result;
	tjsonnode289114* LOC1;
	nimfr("renderRstToJson", "rstast.nim")
	result = 0;
	nimln(304, "rstast.nim");
	nimln(312, "rstast.nim");
	nimln(312, "rstast.nim");
	LOC1 = 0;
	LOC1 = renderrsttojsonnode_294567(node);
	result = pretty_292151(LOC1, 2);
	popFrame();
	return result;
}
N_NOINLINE(void, docutilsrstastInit)(void) {
	nimfr("rstast", "rstast.nim")
	popFrame();
}

N_NOINLINE(void, docutilsrstastDatInit)(void) {
static TNimNode* TMP3773[4];
static TNimNode* TMP3774[65];
NI TMP3776;
static char* NIM_CONST TMP3775[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP3614[71];
NTI294009.size = sizeof(trstnode294009);
NTI294009.kind = 18;
NTI294009.base = 0;
NTI294009.flags = 2;
TMP3773[0] = &TMP3614[1];
NTI294003.size = sizeof(NU8);
NTI294003.kind = 14;
NTI294003.base = 0;
NTI294003.flags = 3;
for (TMP3776 = 0; TMP3776 < 65; TMP3776++) {
TMP3614[TMP3776+2].kind = 1;
TMP3614[TMP3776+2].offset = TMP3776;
TMP3614[TMP3776+2].name = TMP3775[TMP3776];
TMP3774[TMP3776] = &TMP3614[TMP3776+2];
}
TMP3614[67].len = 65; TMP3614[67].kind = 2; TMP3614[67].sons = &TMP3774[0];
NTI294003.node = &TMP3614[67];
TMP3614[1].kind = 1;
TMP3614[1].offset = offsetof(trstnode294009, Kind);
TMP3614[1].typ = (&NTI294003);
TMP3614[1].name = "kind";
TMP3773[1] = &TMP3614[68];
TMP3614[68].kind = 1;
TMP3614[68].offset = offsetof(trstnode294009, Text);
TMP3614[68].typ = (&NTI143);
TMP3614[68].name = "text";
TMP3773[2] = &TMP3614[69];
TMP3614[69].kind = 1;
TMP3614[69].offset = offsetof(trstnode294009, Level);
TMP3614[69].typ = (&NTI106);
TMP3614[69].name = "level";
TMP3773[3] = &TMP3614[70];
TMP3614[70].kind = 1;
TMP3614[70].offset = offsetof(trstnode294009, Sons);
TMP3614[70].typ = (&NTI294084);
TMP3614[70].name = "sons";
TMP3614[0].len = 4; TMP3614[0].kind = 2; TMP3614[0].sons = &TMP3773[0];
NTI294009.node = &TMP3614[0];
NTI294005.size = sizeof(trstnode294009*);
NTI294005.kind = 22;
NTI294005.base = (&NTI294009);
NTI294005.flags = 2;
NTI294005.marker = TMP3778;
}

