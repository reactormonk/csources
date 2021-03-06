/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode185813 tnode185813;
typedef struct ttype185847 ttype185847;
typedef struct tlineinfo161527 tlineinfo161527;
typedef struct tsym185843 tsym185843;
typedef struct tident165019 tident165019;
typedef struct tnodeseq185807 tnodeseq185807;
typedef struct tidobj165013 tidobj165013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq185845 ttypeseq185845;
typedef struct tscope185837 tscope185837;
typedef struct TY185943 TY185943;
typedef struct tinstantiation185833 tinstantiation185833;
typedef struct tstrtable185817 tstrtable185817;
typedef struct tsymseq185815 tsymseq185815;
typedef struct tloc185827 tloc185827;
typedef struct trope143007 trope143007;
typedef struct tlib185831 tlib185831;
typedef struct TY10665 TY10665;
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
typedef struct TY185932 TY185932;
typedef struct tlistentry117017 tlistentry117017;
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
struct  tlineinfo161527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tnode185813  {
ttype185847* Typ;
tlineinfo161527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym185843* Sym;
} S4;
struct {tident165019* Ident;
} S5;
struct {tnodeseq185807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY186025[20];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj165013  {
  TNimObject Sup;
NI Id;
};
struct  tident165019  {
  tidobj165013 Sup;
NimStringDesc* S;
tident165019* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tstrtable185817  {
NI Counter;
tsymseq185815* Data;
};
struct  tloc185827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype185847* T;
trope143007* R;
trope143007* Heaproot;
NI A;
};
struct  tsym185843  {
  tidobj165013 Sup;
NU8 Kind;
union {
struct {ttypeseq185845* Typeinstcache;
tscope185837* Typscope;
} S1;
struct {TY185943* Procinstcache;
tscope185837* Scope;
} S2;
struct {TY185943* Usedgenerics;
tstrtable185817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype185847* Typ;
tident165019* Name;
tlineinfo161527 Info;
tsym185843* Owner;
NU32 Flags;
tnode185813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc185827 Loc;
tlib185831* Annex;
tnode185813* Constraint;
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
struct  ttype185847  {
  tidobj165013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq185845* Sons;
tnode185813* N;
tsym185843* Destructor;
tsym185843* Owner;
tsym185843* Sym;
NI64 Size;
NI Align;
tloc185827 Loc;
};
struct  tscope185837  {
NI Depthlevel;
tstrtable185817 Symbols;
tnodeseq185807* Usingsyms;
tscope185837* Parent;
};
struct  tinstantiation185833  {
tsym185843* Sym;
ttypeseq185845* Concretetypes;
TY185932* Usedby;
};
struct  trope143007  {
  TNimObject Sup;
trope143007* Left;
trope143007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry117017  {
  TNimObject Sup;
tlistentry117017* Prev;
tlistentry117017* Next;
};
struct  tlib185831  {
  tlistentry117017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope143007* Name;
tnode185813* Path;
};
typedef NI TY22818[8];
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
struct tnodeseq185807 {
  TGenericSeq Sup;
  tnode185813* data[SEQ_DECL_SIZE];
};
struct ttypeseq185845 {
  TGenericSeq Sup;
  ttype185847* data[SEQ_DECL_SIZE];
};
struct TY185943 {
  TGenericSeq Sup;
  tinstantiation185833* data[SEQ_DECL_SIZE];
};
struct tsymseq185815 {
  TGenericSeq Sup;
  tsym185843* data[SEQ_DECL_SIZE];
};
struct TY10665 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY185932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, renderplainsymbolname_336007)(tnode185813* n);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, len_186274)(tnode185813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(tnode185813*, HEX5BHEX5D_186711)(tnode185813* n, NI i);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, renderdefinitionname_209118)(tsym185843* s, NIM_BOOL noquotes);
N_NIMCALL(void, internalerror_163591)(tlineinfo161527 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_76080, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, rendertype_336208)(tnode185813* n);
N_NIMCALL(NimStringDesc*, typetostring_221020)(ttype185847* typ, NU8 prefer);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, renderparamtypes_338423)(TY10665** found, tnode185813* n);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(NimStringDesc*, renderparamtypes_338847)(tnode185813* n, NimStringDesc* sep);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
STRING_LITERAL(TMP4765, "", 0);
static NIM_CONST TY186025 TMP4766 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4767, "sons", 4);
static NIM_CONST TY186025 TMP4768 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4769, "ident", 5);
STRING_LITERAL(TMP4770, "*", 1);
static NIM_CONST TY186025 TMP4771 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4772, "sym", 3);
STRING_LITERAL(TMP4773, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP4774, "not result.isNil ", 17);
STRING_LITERAL(TMP4775, "len(n) == 1 ", 12);
STRING_LITERAL(TMP4776, "ref.", 4);
STRING_LITERAL(TMP4777, "ptr.", 4);
STRING_LITERAL(TMP4778, "len(n) > 1 ", 11);
STRING_LITERAL(TMP4779, "params.kind == nkFormalParams ", 30);
STRING_LITERAL(TMP4780, "len(params) > 0 ", 16);
STRING_LITERAL(TMP4781, "proc(", 5);
STRING_LITERAL(TMP4782, "len(n) >= 3 ", 12);
STRING_LITERAL(TMP4784, "n[i].kind == nkIdent ", 21);
STRING_LITERAL(TMP4785, "len(n) > 0 ", 11);
STRING_LITERAL(TMP4786, "tuple[", 6);
STRING_LITERAL(TMP4787, "len(n) >= 2 ", 12);
STRING_LITERAL(TMP4789, "typePos > 0 ", 12);
STRING_LITERAL(TMP4792, "renderParamTypes(found,n) with ", 31);
extern TFrame* frameptr_13038;
extern TNimType NTI185023; /* TNodeKind */
extern tgcheap43216 gch_43244;
extern TNimType NTI10665; /* seq[string] */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NI, len_186274)(tnode185813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(958, "ast.nim");
	{
		nimln(958, "ast.nim");
		if (((TMP4766[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4767));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(958, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(959, "ast.nim");
		nimln(959, "ast.nim");
		if (((TMP4766[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4767));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
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

static N_INLINE(tnode185813*, HEX5BHEX5D_186711)(tnode185813* n, NI i) {
	tnode185813* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(972, "ast.nim");
	if (((TMP4766[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4767));
	if ((NU)(i) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[i];
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, renderplainsymbolname_336007)(tnode185813* n) {
	NimStringDesc* result;
	nimfr("renderPlainSymbolName", "typesrenderer.nim")
	result = 0;
	nimln(11, "typesrenderer.nim");
	result = copyString(((NimStringDesc*) &TMP4765));
	nimln(12, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 31):
	{
		NI i_336032;
		NI HEX3Atmp_336201;
		NI LOC2;
		NI res_336203;
		i_336032 = 0;
		HEX3Atmp_336201 = 0;
		nimln(14, "typesrenderer.nim");
		nimln(14, "typesrenderer.nim");
		nimln(14, "typesrenderer.nim");
		LOC2 = 0;
		LOC2 = len_186274(n);
		HEX3Atmp_336201 = subInt(LOC2, 1);
		nimln(1457, "system.nim");
		res_336203 = 0;
		nimln(1458, "system.nim");
		while (1) {
			NI LOC4;
			tnode185813* LOC5;
			nimln(1458, "system.nim");
			if (!(res_336203 <= HEX3Atmp_336201)) goto LA3;
			nimln(1457, "system.nim");
			i_336032 = res_336203;
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			LOC4 = 0;
			LOC4 = len_186274(n);
			LOC5 = 0;
			LOC5 = HEX5BHEX5D_186711(n, subInt(LOC4, 1));
			result = renderplainsymbolname_336007(LOC5);
			nimln(16, "typesrenderer.nim");
			{
				nimln(16, "typesrenderer.nim");
				nimln(16, "typesrenderer.nim");
				if (!(0 < result->Sup.len)) goto LA8;
				nimln(17, "typesrenderer.nim");
				goto BeforeRet;
			}
			LA8: ;
			nimln(1460, "system.nim");
			res_336203 = addInt(res_336203, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 2):
	{
		nimln(19, "typesrenderer.nim");
		{
			nimln(19, "typesrenderer.nim");
			nimln(19, "typesrenderer.nim");
			if (!(((TMP4768[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4769));
			if (!!(eqStrings((*(*n).kindU.S5.Ident).S, ((NimStringDesc*) &TMP4770)))) goto LA13;
			nimln(20, "typesrenderer.nim");
			if (!(((TMP4768[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4769));
			result = copyString((*(*n).kindU.S5.Ident).S);
		}
		LA13: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(22, "typesrenderer.nim");
		if (!(((TMP4771[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4772));
		result = renderdefinitionname_209118((*n).kindU.S4.Sym, NIM_TRUE);
	}
	break;
	case ((NU8) 43):
	{
		tnode185813* LOC17;
		nimln(24, "typesrenderer.nim");
		nimln(24, "typesrenderer.nim");
		LOC17 = 0;
		LOC17 = HEX5BHEX5D_186711(n, 0);
		result = renderplainsymbolname_336007(LOC17);
	}
	break;
	case ((NU8) 53):
	{
		NI LOC19;
		tnode185813* LOC20;
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		LOC19 = 0;
		LOC19 = len_186274(n);
		LOC20 = 0;
		LOC20 = HEX5BHEX5D_186711(n, subInt(LOC19, 1));
		result = renderplainsymbolname_336007(LOC20);
	}
	break;
	default:
	{
		NimStringDesc* LOC22;
		nimln(28, "typesrenderer.nim");
		nimln(28, "typesrenderer.nim");
		LOC22 = 0;
		nimln(28, "typesrenderer.nim");
		LOC22 = rawNewString(reprEnum((*n).Kind, (&NTI185023))->Sup.len + 29);
appendString(LOC22, ((NimStringDesc*) &TMP4773));
appendString(LOC22, reprEnum((*n).Kind, (&NTI185023)));
		internalerror_163591((*n).Info, LOC22);
	}
	break;
	}
	nimln(29, "typesrenderer.nim");
	{
		nimln(29, "typesrenderer.nim");
		nimln(29, "typesrenderer.nim");
		nimln(29, "typesrenderer.nim");
		if (!!(!(result == 0))) goto LA25;
		nimln(29, "typesrenderer.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP4774));
	}
	LA25: ;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, rendertype_336208)(tnode185813* n) {
	NimStringDesc* result;
	nimfr("renderType", "typesrenderer.nim")
	result = 0;
	nimln(33, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 2):
	{
		nimln(34, "typesrenderer.nim");
		if (!(((TMP4768[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4769));
		result = copyString((*(*n).kindU.S5.Ident).S);
	}
	break;
	case ((NU8) 3):
	{
		nimln(35, "typesrenderer.nim");
		if (!(((TMP4771[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4772));
		result = typetostring_221020((*(*n).kindU.S4.Sym).Typ, ((NU8) 0));
	}
	break;
	case ((NU8) 141):
	{
		tnode185813* LOC9;
		nimln(37, "typesrenderer.nim");
		{
			NI LOC6;
			nimln(37, "typesrenderer.nim");
			nimln(37, "typesrenderer.nim");
			nimln(37, "typesrenderer.nim");
			LOC6 = 0;
			LOC6 = len_186274(n);
			if (!!((LOC6 == 1))) goto LA7;
			nimln(37, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4775));
		}
		LA7: ;
		nimln(38, "typesrenderer.nim");
		nimln(38, "typesrenderer.nim");
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_186711(n, 0);
		result = rendertype_336208(LOC9);
	}
	break;
	case ((NU8) 139):
	{
		NimStringDesc* LOC16;
		tnode185813* LOC17;
		NimStringDesc* LOC18;
		nimln(40, "typesrenderer.nim");
		{
			NI LOC13;
			nimln(40, "typesrenderer.nim");
			nimln(40, "typesrenderer.nim");
			nimln(40, "typesrenderer.nim");
			LOC13 = 0;
			LOC13 = len_186274(n);
			if (!!((LOC13 == 1))) goto LA14;
			nimln(40, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4775));
		}
		LA14: ;
		nimln(41, "typesrenderer.nim");
		nimln(41, "typesrenderer.nim");
		LOC16 = 0;
		nimln(41, "typesrenderer.nim");
		nimln(41, "typesrenderer.nim");
		LOC17 = 0;
		LOC17 = HEX5BHEX5D_186711(n, 0);
		LOC18 = 0;
		LOC18 = rendertype_336208(LOC17);
		LOC16 = rawNewString(LOC18->Sup.len + 4);
appendString(LOC16, ((NimStringDesc*) &TMP4776));
appendString(LOC16, LOC18);
		result = LOC16;
	}
	break;
	case ((NU8) 140):
	{
		NimStringDesc* LOC25;
		tnode185813* LOC26;
		NimStringDesc* LOC27;
		nimln(43, "typesrenderer.nim");
		{
			NI LOC22;
			nimln(43, "typesrenderer.nim");
			nimln(43, "typesrenderer.nim");
			nimln(43, "typesrenderer.nim");
			LOC22 = 0;
			LOC22 = len_186274(n);
			if (!!((LOC22 == 1))) goto LA23;
			nimln(43, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4775));
		}
		LA23: ;
		nimln(44, "typesrenderer.nim");
		nimln(44, "typesrenderer.nim");
		LOC25 = 0;
		nimln(44, "typesrenderer.nim");
		nimln(44, "typesrenderer.nim");
		LOC26 = 0;
		LOC26 = HEX5BHEX5D_186711(n, 0);
		LOC27 = 0;
		LOC27 = rendertype_336208(LOC26);
		LOC25 = rawNewString(LOC27->Sup.len + 4);
appendString(LOC25, ((NimStringDesc*) &TMP4777));
appendString(LOC25, LOC27);
		result = LOC25;
	}
	break;
	case ((NU8) 145):
	{
		tnode185813* params;
		NI i_337423;
		NI HEX3Atmp_338401;
		NI LOC43;
		NI res_338403;
		nimln(46, "typesrenderer.nim");
		{
			NI LOC31;
			nimln(46, "typesrenderer.nim");
			nimln(46, "typesrenderer.nim");
			nimln(46, "typesrenderer.nim");
			LOC31 = 0;
			LOC31 = len_186274(n);
			if (!!((1 < LOC31))) goto LA32;
			nimln(46, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4778));
		}
		LA32: ;
		nimln(47, "typesrenderer.nim");
		params = HEX5BHEX5D_186711(n, 0);
		nimln(48, "typesrenderer.nim");
		{
			nimln(48, "typesrenderer.nim");
			nimln(48, "typesrenderer.nim");
			if (!!(((*params).Kind == ((NU8) 76)))) goto LA36;
			nimln(48, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4779));
		}
		LA36: ;
		nimln(49, "typesrenderer.nim");
		{
			NI LOC40;
			nimln(49, "typesrenderer.nim");
			nimln(49, "typesrenderer.nim");
			nimln(49, "typesrenderer.nim");
			LOC40 = 0;
			LOC40 = len_186274(params);
			if (!!((0 < LOC40))) goto LA41;
			nimln(49, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4780));
		}
		LA41: ;
		nimln(50, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP4781));
		i_337423 = 0;
		HEX3Atmp_338401 = 0;
		nimln(51, "typesrenderer.nim");
		nimln(51, "typesrenderer.nim");
		nimln(51, "typesrenderer.nim");
		LOC43 = 0;
		LOC43 = len_186274(params);
		HEX3Atmp_338401 = subInt(LOC43, 1);
		nimln(1457, "system.nim");
		res_338403 = 1;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC45;
			tnode185813* LOC46;
			NimStringDesc* LOC47;
			nimln(1458, "system.nim");
			if (!(res_338403 <= HEX3Atmp_338401)) goto LA44;
			nimln(1457, "system.nim");
			i_337423 = res_338403;
			nimln(51, "typesrenderer.nim");
			nimln(51, "typesrenderer.nim");
			LOC45 = 0;
			nimln(51, "typesrenderer.nim");
			nimln(51, "typesrenderer.nim");
			LOC46 = 0;
			LOC46 = HEX5BHEX5D_186711(params, i_337423);
			LOC47 = 0;
			LOC47 = rendertype_336208(LOC46);
			LOC45 = rawNewString(LOC47->Sup.len + 1);
appendString(LOC45, LOC47);
appendChar(LOC45, 44);
			result = resizeString(result, LOC45->Sup.len + 0);
appendString(result, LOC45);
			nimln(1460, "system.nim");
			res_338403 = addInt(res_338403, 1);
		} LA44: ;
		nimln(52, "typesrenderer.nim");
		nimln(52, "typesrenderer.nim");
		nimln(52, "typesrenderer.nim");
		if ((NU)(subInt(result->Sup.len, 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt(result->Sup.len, 1)] = 41;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC54;
		NI TMP4783;
		NimStringDesc* typestr;
		tnode185813* LOC55;
		NI i_337624;
		NI HEX3Atmp_338405;
		NI res_338407;
		nimln(54, "typesrenderer.nim");
		{
			NI LOC51;
			nimln(54, "typesrenderer.nim");
			nimln(54, "typesrenderer.nim");
			nimln(54, "typesrenderer.nim");
			LOC51 = 0;
			LOC51 = len_186274(n);
			if (!!((3 <= LOC51))) goto LA52;
			nimln(54, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4782));
		}
		LA52: ;
		nimln(55, "typesrenderer.nim");
		nimln(55, "typesrenderer.nim");
		nimln(55, "typesrenderer.nim");
		LOC54 = 0;
		LOC54 = len_186274(n);
		TMP4783 = subInt(LOC54, 2);
		typepos = (NI64)(TMP4783);
		nimln(56, "typesrenderer.nim");
		nimln(56, "typesrenderer.nim");
		LOC55 = 0;
		LOC55 = HEX5BHEX5D_186711(n, typepos);
		typestr = rendertype_336208(LOC55);
		nimln(57, "typesrenderer.nim");
		result = copyString(typestr);
		i_337624 = 0;
		HEX3Atmp_338405 = 0;
		nimln(58, "typesrenderer.nim");
		nimln(58, "typesrenderer.nim");
		HEX3Atmp_338405 = subInt(typepos, 1);
		nimln(1457, "system.nim");
		res_338407 = 1;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC62;
			nimln(1458, "system.nim");
			if (!(res_338407 <= HEX3Atmp_338405)) goto LA56;
			nimln(1457, "system.nim");
			i_337624 = res_338407;
			nimln(59, "typesrenderer.nim");
			{
				tnode185813* LOC59;
				nimln(59, "typesrenderer.nim");
				nimln(59, "typesrenderer.nim");
				nimln(59, "typesrenderer.nim");
				LOC59 = 0;
				LOC59 = HEX5BHEX5D_186711(n, i_337624);
				if (!!(((*LOC59).Kind == ((NU8) 2)))) goto LA60;
				nimln(59, "typesrenderer.nim");
				failedassertimpl_79821(((NimStringDesc*) &TMP4784));
			}
			LA60: ;
			nimln(60, "typesrenderer.nim");
			nimln(60, "typesrenderer.nim");
			LOC62 = 0;
			LOC62 = rawNewString(typestr->Sup.len + 1);
appendChar(LOC62, 44);
appendString(LOC62, typestr);
			result = resizeString(result, LOC62->Sup.len + 0);
appendString(result, LOC62);
			nimln(1460, "system.nim");
			res_338407 = addInt(res_338407, 1);
		} LA56: ;
	}
	break;
	case ((NU8) 133):
	{
		NI i_338023;
		NI HEX3Atmp_338409;
		NI LOC69;
		NI res_338411;
		nimln(62, "typesrenderer.nim");
		{
			NI LOC66;
			nimln(62, "typesrenderer.nim");
			nimln(62, "typesrenderer.nim");
			nimln(62, "typesrenderer.nim");
			LOC66 = 0;
			LOC66 = len_186274(n);
			if (!!((0 < LOC66))) goto LA67;
			nimln(62, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4785));
		}
		LA67: ;
		nimln(63, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP4786));
		i_338023 = 0;
		HEX3Atmp_338409 = 0;
		nimln(64, "typesrenderer.nim");
		nimln(64, "typesrenderer.nim");
		nimln(64, "typesrenderer.nim");
		LOC69 = 0;
		LOC69 = len_186274(n);
		HEX3Atmp_338409 = subInt(LOC69, 1);
		nimln(1457, "system.nim");
		res_338411 = 0;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC71;
			tnode185813* LOC72;
			NimStringDesc* LOC73;
			nimln(1458, "system.nim");
			if (!(res_338411 <= HEX3Atmp_338409)) goto LA70;
			nimln(1457, "system.nim");
			i_338023 = res_338411;
			nimln(64, "typesrenderer.nim");
			nimln(64, "typesrenderer.nim");
			LOC71 = 0;
			nimln(64, "typesrenderer.nim");
			nimln(64, "typesrenderer.nim");
			LOC72 = 0;
			LOC72 = HEX5BHEX5D_186711(n, i_338023);
			LOC73 = 0;
			LOC73 = rendertype_336208(LOC72);
			LOC71 = rawNewString(LOC73->Sup.len + 1);
appendString(LOC71, LOC73);
appendChar(LOC71, 44);
			result = resizeString(result, LOC71->Sup.len + 0);
appendString(result, LOC71);
			nimln(1460, "system.nim");
			res_338411 = addInt(res_338411, 1);
		} LA70: ;
		nimln(65, "typesrenderer.nim");
		nimln(65, "typesrenderer.nim");
		nimln(65, "typesrenderer.nim");
		if ((NU)(subInt(result->Sup.len, 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt(result->Sup.len, 1)] = 93;
	}
	break;
	case ((NU8) 42):
	{
		NimStringDesc* LOC80;
		tnode185813* LOC81;
		NimStringDesc* LOC82;
		NI i_338222;
		NI HEX3Atmp_338413;
		NI LOC83;
		NI res_338415;
		nimln(67, "typesrenderer.nim");
		{
			NI LOC77;
			nimln(67, "typesrenderer.nim");
			nimln(67, "typesrenderer.nim");
			nimln(67, "typesrenderer.nim");
			LOC77 = 0;
			LOC77 = len_186274(n);
			if (!!((2 <= LOC77))) goto LA78;
			nimln(67, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4787));
		}
		LA78: ;
		nimln(68, "typesrenderer.nim");
		nimln(68, "typesrenderer.nim");
		LOC80 = 0;
		nimln(68, "typesrenderer.nim");
		nimln(68, "typesrenderer.nim");
		LOC81 = 0;
		LOC81 = HEX5BHEX5D_186711(n, 0);
		LOC82 = 0;
		LOC82 = rendertype_336208(LOC81);
		LOC80 = rawNewString(LOC82->Sup.len + 1);
appendString(LOC80, LOC82);
appendChar(LOC80, 91);
		result = LOC80;
		i_338222 = 0;
		HEX3Atmp_338413 = 0;
		nimln(69, "typesrenderer.nim");
		nimln(69, "typesrenderer.nim");
		nimln(69, "typesrenderer.nim");
		LOC83 = 0;
		LOC83 = len_186274(n);
		HEX3Atmp_338413 = subInt(LOC83, 1);
		nimln(1457, "system.nim");
		res_338415 = 1;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC85;
			tnode185813* LOC86;
			NimStringDesc* LOC87;
			nimln(1458, "system.nim");
			if (!(res_338415 <= HEX3Atmp_338413)) goto LA84;
			nimln(1457, "system.nim");
			i_338222 = res_338415;
			nimln(69, "typesrenderer.nim");
			nimln(69, "typesrenderer.nim");
			LOC85 = 0;
			nimln(69, "typesrenderer.nim");
			nimln(69, "typesrenderer.nim");
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_186711(n, i_338222);
			LOC87 = 0;
			LOC87 = rendertype_336208(LOC86);
			LOC85 = rawNewString(LOC87->Sup.len + 1);
appendString(LOC85, LOC87);
appendChar(LOC85, 44);
			result = resizeString(result, LOC85->Sup.len + 0);
appendString(result, LOC85);
			nimln(1460, "system.nim");
			res_338415 = addInt(res_338415, 1);
		} LA84: ;
		nimln(70, "typesrenderer.nim");
		nimln(70, "typesrenderer.nim");
		nimln(70, "typesrenderer.nim");
		if ((NU)(subInt(result->Sup.len, 1)) > (NU)(result->Sup.len)) raiseIndexError();
		result->data[subInt(result->Sup.len, 1)] = 93;
	}
	break;
	default:
	{
		nimln(71, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP4765));
	}
	break;
	}
	nimln(72, "typesrenderer.nim");
	{
		nimln(72, "typesrenderer.nim");
		nimln(72, "typesrenderer.nim");
		nimln(72, "typesrenderer.nim");
		if (!!(!(result == 0))) goto LA91;
		nimln(72, "typesrenderer.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP4774));
	}
	LA91: ;
	popFrame();
	return result;
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
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46202(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, renderparamtypes_338423)(TY10665** found, tnode185813* n) {
	nimfr("renderParamTypes", "typesrenderer.nim")
	nimln(81, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 76):
	{
		NI i_338450;
		NI HEX3Atmp_338835;
		NI LOC2;
		NI res_338837;
		i_338450 = 0;
		HEX3Atmp_338835 = 0;
		nimln(83, "typesrenderer.nim");
		nimln(83, "typesrenderer.nim");
		nimln(83, "typesrenderer.nim");
		LOC2 = 0;
		LOC2 = len_186274(n);
		HEX3Atmp_338835 = subInt(LOC2, 1);
		nimln(1457, "system.nim");
		res_338837 = 1;
		nimln(1458, "system.nim");
		while (1) {
			tnode185813* LOC4;
			nimln(1458, "system.nim");
			if (!(res_338837 <= HEX3Atmp_338835)) goto LA3;
			nimln(1457, "system.nim");
			i_338450 = res_338837;
			nimln(83, "typesrenderer.nim");
			nimln(83, "typesrenderer.nim");
			LOC4 = 0;
			LOC4 = HEX5BHEX5D_186711(n, i_338450);
			renderparamtypes_338423(found, LOC4);
			nimln(1460, "system.nim");
			res_338837 = addInt(res_338837, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC6;
		NI TMP4788;
		NimStringDesc* typestr;
		tnode185813* LOC11;
		NI i_338647;
		NI HEX3Atmp_338839;
		NI res_338841;
		nimln(86, "typesrenderer.nim");
		nimln(86, "typesrenderer.nim");
		nimln(86, "typesrenderer.nim");
		LOC6 = 0;
		LOC6 = len_186274(n);
		TMP4788 = subInt(LOC6, 2);
		typepos = (NI64)(TMP4788);
		nimln(87, "typesrenderer.nim");
		{
			nimln(87, "typesrenderer.nim");
			nimln(87, "typesrenderer.nim");
			if (!!((0 < typepos))) goto LA9;
			nimln(87, "typesrenderer.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP4789));
		}
		LA9: ;
		nimln(88, "typesrenderer.nim");
		nimln(88, "typesrenderer.nim");
		LOC11 = 0;
		LOC11 = HEX5BHEX5D_186711(n, typepos);
		typestr = rendertype_336208(LOC11);
		nimln(89, "typesrenderer.nim");
		{
			NIM_BOOL LOC14;
			NI TMP4790;
			tnode185813* LOC16;
			ttype185847* typ;
			NI TMP4791;
			tnode185813* LOC19;
			nimln(89, "typesrenderer.nim");
			LOC14 = 0;
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			LOC14 = (typestr->Sup.len < 1);
			if (!(LOC14)) goto LA15;
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			nimln(89, "typesrenderer.nim");
			TMP4790 = addInt(typepos, 1);
			LOC16 = 0;
			LOC16 = HEX5BHEX5D_186711(n, (NI64)(TMP4790));
			LOC14 = !(((*LOC16).Kind == ((NU8) 1)));
			LA15: ;
			if (!LOC14) goto LA17;
			nimln(91, "typesrenderer.nim");
			nimln(91, "typesrenderer.nim");
			nimln(91, "typesrenderer.nim");
			TMP4791 = addInt(typepos, 1);
			LOC19 = 0;
			LOC19 = HEX5BHEX5D_186711(n, (NI64)(TMP4791));
			typ = (*LOC19).Typ;
			nimln(92, "typesrenderer.nim");
			{
				nimln(92, "typesrenderer.nim");
				nimln(92, "typesrenderer.nim");
				if (!!(typ == 0)) goto LA22;
				nimln(92, "typesrenderer.nim");
				typestr = typetostring_221020(typ, ((NU8) 2));
			}
			LA22: ;
			nimln(93, "typesrenderer.nim");
			{
				nimln(93, "typesrenderer.nim");
				nimln(93, "typesrenderer.nim");
				if (!(typestr->Sup.len < 1)) goto LA26;
				nimln(93, "typesrenderer.nim");
				goto BeforeRet;
			}
			LA26: ;
		}
		LA17: ;
		i_338647 = 0;
		HEX3Atmp_338839 = 0;
		nimln(94, "typesrenderer.nim");
		nimln(94, "typesrenderer.nim");
		HEX3Atmp_338839 = subInt(typepos, 1);
		nimln(1457, "system.nim");
		res_338841 = 0;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC34;
			nimln(1458, "system.nim");
			if (!(res_338841 <= HEX3Atmp_338839)) goto LA28;
			nimln(1457, "system.nim");
			i_338647 = res_338841;
			nimln(95, "typesrenderer.nim");
			{
				tnode185813* LOC31;
				nimln(95, "typesrenderer.nim");
				nimln(95, "typesrenderer.nim");
				nimln(95, "typesrenderer.nim");
				LOC31 = 0;
				LOC31 = HEX5BHEX5D_186711(n, i_338647);
				if (!!(((*LOC31).Kind == ((NU8) 2)))) goto LA32;
				nimln(95, "typesrenderer.nim");
				failedassertimpl_79821(((NimStringDesc*) &TMP4784));
			}
			LA32: ;
			nimln(96, "typesrenderer.nim");
			(*found) = (TY10665*) incrSeq(&((*found))->Sup, sizeof(NimStringDesc*));
			LOC34 = 0;
			LOC34 = (*found)->data[(*found)->Sup.len-1]; (*found)->data[(*found)->Sup.len-1] = copyStringRC1(typestr);
			if (LOC34) nimGCunrefNoCycle(LOC34);
			nimln(1460, "system.nim");
			res_338841 = addInt(res_338841, 1);
		} LA28: ;
	}
	break;
	default:
	{
		NimStringDesc* LOC36;
		nimln(98, "typesrenderer.nim");
		nimln(98, "typesrenderer.nim");
		LOC36 = 0;
		nimln(98, "typesrenderer.nim");
		LOC36 = rawNewString(reprEnum((*n).Kind, (&NTI185023))->Sup.len + 31);
appendString(LOC36, ((NimStringDesc*) &TMP4792));
appendString(LOC36, reprEnum((*n).Kind, (&NTI185023)));
		internalerror_163591((*n).Info, LOC36);
	}
	break;
	}
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(NimStringDesc*, renderparamtypes_338847)(tnode185813* n, NimStringDesc* sep) {
	NimStringDesc* result;
	TY10665* found;
	nimfr("renderParamTypes", "typesrenderer.nim")
	result = 0;
	nimln(107, "typesrenderer.nim");
	result = copyString(((NimStringDesc*) &TMP4765));
	nimln(108, "typesrenderer.nim");
	found = (TY10665*) newSeq((&NTI10665), 0);
	nimln(109, "typesrenderer.nim");
	renderparamtypes_338423(&found, n);
	nimln(110, "typesrenderer.nim");
	{
		nimln(110, "typesrenderer.nim");
		nimln(110, "typesrenderer.nim");
		if (!(0 < found->Sup.len)) goto LA3;
		nimln(111, "typesrenderer.nim");
		result = nsuJoinSep(found->data, found->Sup.len, sep);
	}
	LA3: ;
	popFrame();
	return result;
}
N_NOINLINE(void, typesrendererInit)(void) {
	nimfr("typesrenderer", "typesrenderer.nim")
	popFrame();
}

N_NOINLINE(void, typesrendererDatInit)(void) {
}

