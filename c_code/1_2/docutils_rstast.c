/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct trstnode297009 trstnode297009;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY297084 TY297084;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell41088 tcell41088;
typedef struct tcellseq41104 tcellseq41104;
typedef struct tgcheap43016 tgcheap43016;
typedef struct tcellset41100 tcellset41100;
typedef struct tpagedesc41096 tpagedesc41096;
typedef struct tmemregion23410 tmemregion23410;
typedef struct tsmallchunk22638 tsmallchunk22638;
typedef struct tllchunk23404 tllchunk23404;
typedef struct tbigchunk22640 tbigchunk22640;
typedef struct tintset22615 tintset22615;
typedef struct ttrunk22611 ttrunk22611;
typedef struct tavlnode23408 tavlnode23408;
typedef struct tgcstat43014 tgcstat43014;
typedef struct trendercontext297211 trendercontext297211;
typedef struct TY292134 TY292134;
typedef struct tjsonnode292114 tjsonnode292114;
typedef struct TY292130 TY292130;
typedef struct tbasechunk22636 tbasechunk22636;
typedef struct tfreecell22628 tfreecell22628;
typedef struct TY292129 TY292129;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  trstnode297009  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY297084* Sons;
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
struct  tcell41088  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41104  {
NI Len;
NI Cap;
tcell41088** D;
};
struct  tcellset41100  {
NI Counter;
NI Max;
tpagedesc41096* Head;
tpagedesc41096** Data;
};
typedef tsmallchunk22638* TY23422[512];
typedef ttrunk22611* ttrunkbuckets22613[256];
struct  tintset22615  {
ttrunkbuckets22613 Data;
};
struct  tmemregion23410  {
NI Minlargeobj;
NI Maxlargeobj;
TY23422 Freesmallchunks;
tllchunk23404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk22640* Freechunkslist;
tintset22615 Chunkstarts;
tavlnode23408* Root;
tavlnode23408* Deleted;
tavlnode23408* Last;
tavlnode23408* Freeavlnodes;
};
struct  tgcstat43014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41104 Zct;
tcellseq41104 Decstack;
tcellset41100 Cycleroots;
tcellseq41104 Tempstack;
NI Recgclock;
tmemregion23410 Region;
tgcstat43014 Stat;
};
typedef NIM_CHAR TY297258[9];
struct  trendercontext297211  {
NI Indent;
NI Verbatim;
};
struct TY292130 {
NimStringDesc* Field0;
tjsonnode292114* Field1;
};
typedef TY292130 TY297586[2];
typedef NI TY22618[8];
struct  tpagedesc41096  {
tpagedesc41096* Next;
NI Key;
TY22618 Bits;
};
struct  tbasechunk22636  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk22638  {
  tbasechunk22636 Sup;
tsmallchunk22638* Next;
tsmallchunk22638* Prev;
tfreecell22628* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23404  {
NI Size;
NI Acc;
tllchunk23404* Next;
};
struct  tbigchunk22640  {
  tbasechunk22636 Sup;
tbigchunk22640* Next;
tbigchunk22640* Prev;
NI Align;
NF Data;
};
struct  ttrunk22611  {
ttrunk22611* Next;
NI Key;
TY22618 Bits;
};
typedef tavlnode23408* TY23414[2];
struct  tavlnode23408  {
TY23414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tjsonnode292114  {
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
struct {TY292129* Fields;
} S6;
struct {TY292134* Elems;
} S7;
} kindU;
};
struct  tfreecell22628  {
tfreecell22628* Next;
NI Zerofield;
};
struct TY297084 {
  TGenericSeq Sup;
  trstnode297009* data[SEQ_DECL_SIZE];
};
struct TY292134 {
  TGenericSeq Sup;
  tjsonnode292114* data[SEQ_DECL_SIZE];
};
struct TY292129 {
  TGenericSeq Sup;
  TY292130 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, len_297080)(trstnode297009* n);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(trstnode297009*, newrstnode_297097)(NU8 kind);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP3771)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41088*, usrtocell_44443)(void* usr);
static N_INLINE(void, rtladdzct_46002)(tcell41088* c);
N_NOINLINE(void, addzct_44418)(tcellseq41104* s, tcell41088* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(trstnode297009*, newrstnode_297139)(NU8 kind, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(trstnode297009*, lastson_297146)(trstnode297009* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_297163)(trstnode297009* father, trstnode297009* son);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, addifnotnil_297187)(trstnode297009* father, trstnode297009* son);
N_NIMCALL(void, renderrstsons_297223)(trendercontext297211* d, trstnode297009* n, NimStringDesc** result);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, renderrsttorst_297215)(trendercontext297211* d, trstnode297009* n, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_77280, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, renderrsttorst_297557)(trstnode297009* n, NimStringDesc** result);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_297591)(TY297084* x_297597, TY297084* y_297602);
static N_INLINE(void*, seqtoptr_297607)(TY297084* x_297613);
N_NIMCALL(TY292134*, newseq_297745)(NI len_297749);
N_NIMCALL(tjsonnode292114*, renderrsttojsonnode_297567)(trstnode297009* node);
N_NIMCALL(tjsonnode292114*, HEX25_292619)(TY292130* keyvals, NI keyvalsLen0);
N_NIMCALL(tjsonnode292114*, HEX25_292475)(NimStringDesc* s);
N_NIMCALL(tjsonnode292114*, HEX25_292511)(NI64 n);
N_NIMCALL(void, add_293844)(tjsonnode292114* obj, NimStringDesc* key, tjsonnode292114* val);
N_NIMCALL(tjsonnode292114*, HEX25_292745)(tjsonnode292114** elements, NI elementsLen0);
N_NIMCALL(NimStringDesc*, renderrsttojson_297847)(trstnode297009* node);
N_NIMCALL(NimStringDesc*, pretty_295151)(tjsonnode292114* node, NI indent);
NIM_CONST TY297258 lvltochar_297257 = {33,
61,
45,
126,
96,
60,
42,
124,
43}
;
STRING_LITERAL(TMP3774, "\015\012", 2);
STRING_LITERAL(TMP3776, "", 0);
STRING_LITERAL(TMP3778, "\015\012\015\012", 4);
STRING_LITERAL(TMP3780, "* ", 2);
STRING_LITERAL(TMP3781, "(#) ", 4);
STRING_LITERAL(TMP3782, "  ", 2);
STRING_LITERAL(TMP3786, "| ", 2);
STRING_LITERAL(TMP3787, "`", 1);
STRING_LITERAL(TMP3788, "`_", 2);
STRING_LITERAL(TMP3789, " <", 2);
STRING_LITERAL(TMP3790, ">`_", 3);
STRING_LITERAL(TMP3791, "`:", 2);
STRING_LITERAL(TMP3792, "`:sub:", 6);
STRING_LITERAL(TMP3793, "`:sup:", 6);
STRING_LITERAL(TMP3794, "`:idx:", 6);
STRING_LITERAL(TMP3795, "*", 1);
STRING_LITERAL(TMP3796, "**", 2);
STRING_LITERAL(TMP3797, "***", 3);
STRING_LITERAL(TMP3798, "``", 2);
STRING_LITERAL(TMP3799, "\\", 1);
STRING_LITERAL(TMP3800, "\\\\", 2);
STRING_LITERAL(TMP3801, ".. index::\015\012", 12);
STRING_LITERAL(TMP3802, ".. contents::", 13);
STRING_LITERAL(TMP3803, "Error: cannot render: ", 22);
STRING_LITERAL(TMP3805, "kind", 4);
STRING_LITERAL(TMP3806, "level", 5);
STRING_LITERAL(TMP3807, "text", 4);
STRING_LITERAL(TMP3808, "sons", 4);
extern TFrame* frameptr_13038;
TNimType NTI297009; /* TRstNode */
TNimType NTI297003; /* TRstNodeKind */
extern TNimType NTI143; /* string */
extern TNimType NTI106; /* int */
extern TNimType NTI297084; /* seq[PRstNode] */
TNimType NTI297005; /* PRstNode */
extern tgcheap43016 gch_43044;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(NI, len_297080)(trstnode297009* n) {
	NI result;
	nimfr("len", "rstast.nim")
	result = 0;
	nimln(75, "rstast.nim");
	nimln(75, "rstast.nim");
	result = (*n).Sons->Sup.len;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP3771)(void* p, NI op) {
	trstnode297009* a;
	a = (trstnode297009*)p;
	nimGCvisit((void*)(*a).Text, op);
	nimGCvisit((void*)(*a).Sons, op);
}

static N_INLINE(tcell41088*, usrtocell_44443)(void* usr) {
	tcell41088* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41088*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41088))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46002)(tcell41088* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44418(&gch_43044.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41088* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44443(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46002(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(trstnode297009*, newrstnode_297097)(NU8 kind) {
	trstnode297009* result;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(78, "rstast.nim");
	result = (trstnode297009*) newObj((&NTI297005), sizeof(trstnode297009));
	nimln(79, "rstast.nim");
	if ((*result).Sons) nimGCunrefNoCycle((*result).Sons);
	(*result).Sons = (TY297084*) newSeqRC1((&NTI297084), 0);
	nimln(80, "rstast.nim");
	(*result).Kind = kind;
	popFrame();
	return result;
}

N_NIMCALL(trstnode297009*, newrstnode_297139)(NU8 kind, NimStringDesc* s) {
	trstnode297009* result;
	NimStringDesc* LOC1;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(83, "rstast.nim");
	result = newrstnode_297097(kind);
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

N_NIMCALL(trstnode297009*, lastson_297146)(trstnode297009* n) {
	trstnode297009* result;
	NI TMP3772;
	nimfr("lastSon", "rstast.nim")
	result = 0;
	nimln(87, "rstast.nim");
	nimln(87, "rstast.nim");
	nimln(87, "rstast.nim");
	TMP3772 = subInt((*n).Sons->Sup.len, 1);
	if ((NU)((NI64)(TMP3772)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI64)(TMP3772)];
	popFrame();
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41088* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_44443(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41088* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_44443((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46002(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, add_297163)(trstnode297009* father, trstnode297009* son) {
	nimfr("add", "rstast.nim")
	nimln(90, "rstast.nim");
	(*father).Sons = (TY297084*) incrSeq(&((*father).Sons)->Sup, sizeof(trstnode297009*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], son);
	popFrame();
}

N_NIMCALL(void, addifnotnil_297187)(trstnode297009* father, trstnode297009* son) {
	nimfr("addIfNotNil", "rstast.nim")
	nimln(93, "rstast.nim");
	{
		nimln(93, "rstast.nim");
		nimln(93, "rstast.nim");
		if (!!((son == NIM_NIL))) goto LA3;
		nimln(93, "rstast.nim");
		add_297163(father, son);
	}
	LA3: ;
	popFrame();
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

N_NIMCALL(void, renderrstsons_297223)(trendercontext297211* d, trstnode297009* n, NimStringDesc** result) {
	NI i_297242;
	NI HEX3Atmp_297243;
	NI LOC1;
	NI TMP3773;
	NI res_297245;
	nimfr("renderRstSons", "rstast.nim")
	i_297242 = 0;
	HEX3Atmp_297243 = 0;
	nimln(104, "rstast.nim");
	nimln(104, "rstast.nim");
	nimln(104, "rstast.nim");
	LOC1 = 0;
	LOC1 = len_297080(n);
	TMP3773 = subInt(LOC1, 1);
	HEX3Atmp_297243 = (NI64)(TMP3773);
	nimln(1450, "system.nim");
	res_297245 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_297245 <= HEX3Atmp_297243)) goto LA2;
		nimln(1450, "system.nim");
		i_297242 = res_297245;
		nimln(105, "rstast.nim");
		if ((NU)(i_297242) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_297215(d, (*n).Sons->data[i_297242], result);
		nimln(1453, "system.nim");
		res_297245 = addInt(res_297245, 1);
	} LA2: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, renderrsttorst_297215)(trendercontext297211* d, trstnode297009* n, NimStringDesc** result) {
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
		renderrstsons_297223(d, n, result);
	}
	break;
	case ((NU8) 1):
	{
		NI oldlen;
		NI headlinelen;
		NI TMP3775;
		NimStringDesc* LOC7;
		nimln(118, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3774));
		nimln(119, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(121, "rstast.nim");
		nimln(121, "rstast.nim");
		oldlen = (*result)->Sup.len;
		nimln(122, "rstast.nim");
		renderrstsons_297223(d, n, result);
		nimln(123, "rstast.nim");
		nimln(123, "rstast.nim");
		nimln(123, "rstast.nim");
		TMP3775 = subInt((*result)->Sup.len, oldlen);
		headlinelen = (NI64)(TMP3775);
		nimln(125, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3774));
		nimln(126, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(127, "rstast.nim");
		nimln(127, "rstast.nim");
		if ((NU)((*n).Level) > (NU)(8)) raiseIndexError();
		LOC7 = 0;
		LOC7 = nsuRepeatChar(headlinelen, lvltochar_297257[((*n).Level)- 0]);
		(*result) = resizeString((*result), LOC7->Sup.len + 0);
appendString((*result), LOC7);
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* headline;
		NimStringDesc* lvl;
		NI TMP3777;
		nimln(129, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3774));
		nimln(130, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(132, "rstast.nim");
		headline = copyString(((NimStringDesc*) &TMP3776));
		nimln(133, "rstast.nim");
		renderrstsons_297223(d, n, &headline);
		nimln(135, "rstast.nim");
		nimln(135, "rstast.nim");
		nimln(135, "rstast.nim");
		TMP3777 = subInt(headline->Sup.len, (*d).Indent);
		if ((NU)((*n).Level) > (NU)(8)) raiseIndexError();
		lvl = nsuRepeatChar((NI64)(TMP3777), lvltochar_297257[((*n).Level)- 0]);
		nimln(136, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
		nimln(137, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3774));
		nimln(138, "rstast.nim");
		(*result) = resizeString((*result), headline->Sup.len + 0);
appendString((*result), headline);
		nimln(140, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3774));
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
		NI TMP3779;
		NimStringDesc* LOC10;
		nimln(144, "rstast.nim");
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP3778));
		nimln(145, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(146, "rstast.nim");
		nimln(146, "rstast.nim");
		nimln(146, "rstast.nim");
		TMP3779 = subInt(78, (*d).Indent);
		LOC10 = 0;
		LOC10 = nsuRepeatChar((NI64)(TMP3779), 45);
		(*result) = resizeString((*result), LOC10->Sup.len + 0);
appendString((*result), LOC10);
		nimln(147, "rstast.nim");
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP3778));
	}
	break;
	case ((NU8) 4):
	{
		nimln(149, "rstast.nim");
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP3778));
		nimln(150, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(151, "rstast.nim");
		renderrstsons_297223(d, n, result);
	}
	break;
	case ((NU8) 6):
	{
		NimStringDesc* tmp;
		nimln(153, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(154, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3776));
		nimln(155, "rstast.nim");
		renderrstsons_297223(d, n, &tmp);
		nimln(156, "rstast.nim");
		{
			nimln(156, "rstast.nim");
			nimln(156, "rstast.nim");
			if (!(0 < tmp->Sup.len)) goto LA15;
			nimln(157, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3774));
			nimln(158, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(159, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3780));
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
		tmp = copyString(((NimStringDesc*) &TMP3776));
		nimln(165, "rstast.nim");
		renderrstsons_297223(d, n, &tmp);
		nimln(166, "rstast.nim");
		{
			nimln(166, "rstast.nim");
			nimln(166, "rstast.nim");
			if (!(0 < tmp->Sup.len)) goto LA20;
			nimln(167, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3774));
			nimln(168, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(169, "rstast.nim");
			(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP3781));
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
		renderrstsons_297223(d, n, result);
	}
	break;
	case ((NU8) 11):
	{
		nimln(176, "rstast.nim");
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP3778));
		nimln(177, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(178, "rstast.nim");
		renderrstsons_297223(d, n, result);
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
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3774));
			nimln(183, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(184, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3782));
		}
		LA27: ;
		nimln(185, "rstast.nim");
		renderrstsons_297223(d, n, result);
		nimln(186, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}
	break;
	case ((NU8) 14):
	{
		NimStringDesc* tmp;
		NI l;
		NI TMP3783;
		NI TMP3784;
		NI TMP3785;
		NimStringDesc* LOC30;
		nimln(188, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3776));
		nimln(189, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_297215(d, (*n).Sons->data[0], &tmp);
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		TMP3783 = addInt(tmp->Sup.len, 3);
		l = (((NI64)(TMP3783) >= 30) ? (NI64)(TMP3783) : 30);
		nimln(192, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, l);
		nimln(194, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3774));
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
		TMP3784 = subInt(l, tmp->Sup.len);
		TMP3785 = subInt((NI64)(TMP3784), 2);
		LOC30 = 0;
		LOC30 = nsuRepeatChar((NI64)(TMP3785), 32);
		(*result) = resizeString((*result), LOC30->Sup.len + 0);
appendString((*result), LOC30);
		nimln(200, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_297215(d, (*n).Sons->data[1], result);
		nimln(202, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, l);
	}
	break;
	case ((NU8) 27):
	{
		nimln(204, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3774));
		nimln(205, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(206, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3786));
		nimln(207, "rstast.nim");
		renderrstsons_297223(d, n, result);
	}
	break;
	case ((NU8) 28):
	{
		nimln(209, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(210, "rstast.nim");
		renderrstsons_297223(d, n, result);
		nimln(211, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}
	break;
	case ((NU8) 39):
	{
		nimln(213, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3787));
		nimln(214, "rstast.nim");
		renderrstsons_297223(d, n, result);
		nimln(215, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3788));
	}
	break;
	case ((NU8) 38):
	{
		nimln(217, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(218, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_297215(d, (*n).Sons->data[0], result);
		nimln(219, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3789));
		nimln(220, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_297215(d, (*n).Sons->data[1], result);
		nimln(221, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3790));
	}
	break;
	case ((NU8) 53):
	{
		nimln(223, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(224, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_297215(d, (*n).Sons->data[0], result);
		nimln(225, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3791));
		nimln(226, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_297215(d, (*n).Sons->data[1], result);
		nimln(227, "rstast.nim");
		(*result) = addChar((*result), 58);
	}
	break;
	case ((NU8) 54):
	{
		nimln(229, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(230, "rstast.nim");
		renderrstsons_297223(d, n, result);
		nimln(231, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3792));
	}
	break;
	case ((NU8) 55):
	{
		nimln(233, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(234, "rstast.nim");
		renderrstsons_297223(d, n, result);
		nimln(235, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3793));
	}
	break;
	case ((NU8) 56):
	{
		nimln(237, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(238, "rstast.nim");
		renderrstsons_297223(d, n, result);
		nimln(239, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3794));
	}
	break;
	case ((NU8) 57):
	{
		nimln(241, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3795));
		nimln(242, "rstast.nim");
		renderrstsons_297223(d, n, result);
		nimln(243, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3795));
	}
	break;
	case ((NU8) 58):
	{
		nimln(245, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3796));
		nimln(246, "rstast.nim");
		renderrstsons_297223(d, n, result);
		nimln(247, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3796));
	}
	break;
	case ((NU8) 59):
	{
		nimln(249, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3797));
		nimln(250, "rstast.nim");
		renderrstsons_297223(d, n, result);
		nimln(251, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3797));
	}
	break;
	case ((NU8) 60):
	{
		nimln(253, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(254, "rstast.nim");
		renderrstsons_297223(d, n, result);
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
appendString((*result), ((NimStringDesc*) &TMP3798));
		nimln(259, "rstast.nim");
		renderrstsons_297223(d, n, result);
		nimln(260, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3798));
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
			LOC48 = eqStrings((*n).Text, ((NimStringDesc*) &TMP3799));
			LA49: ;
			if (!LOC48) goto LA50;
			nimln(266, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3800));
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
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP3778));
		nimln(271, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(272, "rstast.nim");
		(*result) = resizeString((*result), 12);
appendString((*result), ((NimStringDesc*) &TMP3801));
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
			renderrstsons_297223(d, (*n).Sons->data[2], result);
		}
		LA56: ;
		nimln(276, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 3);
	}
	break;
	case ((NU8) 44):
	{
		nimln(278, "rstast.nim");
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP3778));
		nimln(279, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(280, "rstast.nim");
		(*result) = resizeString((*result), 13);
appendString((*result), ((NimStringDesc*) &TMP3802));
	}
	break;
	default:
	{
		NimStringDesc* LOC60;
		nimln(282, "rstast.nim");
		nimln(282, "rstast.nim");
		LOC60 = 0;
		nimln(282, "rstast.nim");
		LOC60 = rawNewString(reprEnum((*n).Kind, (&NTI297003))->Sup.len + 22);
appendString(LOC60, ((NimStringDesc*) &TMP3803));
appendString(LOC60, reprEnum((*n).Kind, (&NTI297003)));
		(*result) = resizeString((*result), LOC60->Sup.len + 0);
appendString((*result), LOC60);
	}
	break;
	}
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, renderrsttorst_297557)(trstnode297009* n, NimStringDesc** result) {
	trendercontext297211 d;
	nimfr("renderRstToRst", "rstast.nim")
	memset((void*)&d, 0, sizeof(d));
	nimln(287, "rstast.nim");
	renderrsttorst_297215(&d, n, result);
	popFrame();
}

static N_INLINE(void*, seqtoptr_297607)(TY297084* x_297613) {
	void* result;
	nimfr("seqToPtr", "system.nim")
	result = 0;
	nimln(1658, "system.nim");
	result = ((void*) (x_297613));
	popFrame();
	return result;
}

N_NIMCALL(tjsonnode292114*, renderrsttojsonnode_297567)(trstnode297009* node) {
	tjsonnode292114* result;
	TY297586 LOC1;
	nimfr("renderRstToJsonNode", "rstast.nim")
	result = 0;
	nimln(290, "rstast.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0].Field0 = copyString(((NimStringDesc*) &TMP3805));
	nimln(292, "rstast.nim");
	nimln(292, "rstast.nim");
	LOC1[0].Field1 = HEX25_292475(reprEnum((*node).Kind, (&NTI297003)));
	LOC1[1].Field0 = copyString(((NimStringDesc*) &TMP3806));
	nimln(293, "rstast.nim");
	LOC1[1].Field1 = HEX25_292511(((NI64) ((*node).Level)));
	result = HEX25_292619(LOC1, 2);
	nimln(295, "rstast.nim");
	{
		tjsonnode292114* LOC6;
		nimln(295, "rstast.nim");
		nimln(295, "rstast.nim");
		if (!!(((*node).Text == NIM_NIL))) goto LA4;
		nimln(296, "rstast.nim");
		nimln(296, "rstast.nim");
		LOC6 = 0;
		LOC6 = HEX25_292475((*node).Text);
		add_293844(result, ((NimStringDesc*) &TMP3807), LOC6);
	}
	LA4: ;
	nimln(297, "rstast.nim");
	{
		NIM_BOOL LOC9;
		NIM_BOOL LOC10;
		TY292134* accm;
		NI i_297838;
		trstnode297009* son_297839;
		TY297084* HEX3Atmp_297841;
		NI i_297843;
		tjsonnode292114* LOC15;
		nimln(297, "rstast.nim");
		LOC9 = 0;
		nimln(297, "rstast.nim");
		nimln(297, "rstast.nim");
		LOC10 = 0;
		LOC10 = HEX3DHEX3D_297591((*node).Sons, NIM_NIL);
		LOC9 = !(LOC10);
		if (!(LOC9)) goto LA11;
		nimln(297, "rstast.nim");
		nimln(297, "rstast.nim");
		LOC9 = (0 < (*node).Sons->Sup.len);
		LA11: ;
		if (!LOC9) goto LA12;
		nimln(298, "rstast.nim");
		nimln(298, "rstast.nim");
		accm = newseq_297745((*node).Sons->Sup.len);
		i_297838 = 0;
		son_297839 = 0;
		HEX3Atmp_297841 = 0;
		nimln(299, "rstast.nim");
		HEX3Atmp_297841 = (*node).Sons;
		nimln(1585, "system.nim");
		i_297843 = 0;
		nimln(1586, "system.nim");
		while (1) {
			nimln(1586, "system.nim");
			nimln(1586, "system.nim");
			if (!(i_297843 < HEX3Atmp_297841->Sup.len)) goto LA14;
			nimln(1585, "system.nim");
			i_297838 = i_297843;
			nimln(1587, "system.nim");
			if ((NU)(i_297843) >= (NU)(HEX3Atmp_297841->Sup.len)) raiseIndexError();
			son_297839 = HEX3Atmp_297841->data[i_297843];
			nimln(300, "rstast.nim");
			if ((NU)(i_297838) >= (NU)(accm->Sup.len)) raiseIndexError();
			asgnRefNoCycle((void**) &accm->data[i_297838], renderrsttojsonnode_297567(son_297839));
			nimln(1588, "system.nim");
			i_297843 = addInt(i_297843, 1);
		} LA14: ;
		nimln(301, "rstast.nim");
		nimln(301, "rstast.nim");
		LOC15 = 0;
		LOC15 = HEX25_292745(accm->data, accm->Sup.len);
		add_293844(result, ((NimStringDesc*) &TMP3808), LOC15);
	}
	LA12: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, renderrsttojson_297847)(trstnode297009* node) {
	NimStringDesc* result;
	tjsonnode292114* LOC1;
	nimfr("renderRstToJson", "rstast.nim")
	result = 0;
	nimln(304, "rstast.nim");
	nimln(312, "rstast.nim");
	nimln(312, "rstast.nim");
	LOC1 = 0;
	LOC1 = renderrsttojsonnode_297567(node);
	result = pretty_295151(LOC1, 2);
	popFrame();
	return result;
}
N_NOINLINE(void, docutilsrstastInit)(void) {
	nimfr("rstast", "rstast.nim")
	popFrame();
}

N_NOINLINE(void, docutilsrstastDatInit)(void) {
static TNimNode* TMP3766[4];
static TNimNode* TMP3767[65];
NI TMP3769;
static char* NIM_CONST TMP3768[65] = {
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
static TNimNode TMP3606[71];
NTI297009.size = sizeof(trstnode297009);
NTI297009.kind = 18;
NTI297009.base = 0;
NTI297009.flags = 2;
TMP3766[0] = &TMP3606[1];
NTI297003.size = sizeof(NU8);
NTI297003.kind = 14;
NTI297003.base = 0;
NTI297003.flags = 3;
for (TMP3769 = 0; TMP3769 < 65; TMP3769++) {
TMP3606[TMP3769+2].kind = 1;
TMP3606[TMP3769+2].offset = TMP3769;
TMP3606[TMP3769+2].name = TMP3768[TMP3769];
TMP3767[TMP3769] = &TMP3606[TMP3769+2];
}
TMP3606[67].len = 65; TMP3606[67].kind = 2; TMP3606[67].sons = &TMP3767[0];
NTI297003.node = &TMP3606[67];
TMP3606[1].kind = 1;
TMP3606[1].offset = offsetof(trstnode297009, Kind);
TMP3606[1].typ = (&NTI297003);
TMP3606[1].name = "kind";
TMP3766[1] = &TMP3606[68];
TMP3606[68].kind = 1;
TMP3606[68].offset = offsetof(trstnode297009, Text);
TMP3606[68].typ = (&NTI143);
TMP3606[68].name = "text";
TMP3766[2] = &TMP3606[69];
TMP3606[69].kind = 1;
TMP3606[69].offset = offsetof(trstnode297009, Level);
TMP3606[69].typ = (&NTI106);
TMP3606[69].name = "level";
TMP3766[3] = &TMP3606[70];
TMP3606[70].kind = 1;
TMP3606[70].offset = offsetof(trstnode297009, Sons);
TMP3606[70].typ = (&NTI297084);
TMP3606[70].name = "sons";
TMP3606[0].len = 4; TMP3606[0].kind = 2; TMP3606[0].sons = &TMP3766[0];
NTI297009.node = &TMP3606[0];
NTI297005.size = sizeof(trstnode297009*);
NTI297005.kind = 22;
NTI297005.base = (&NTI297009);
NTI297005.flags = 2;
NTI297005.marker = TMP3771;
}

