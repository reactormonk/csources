/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode187813 tnode187813;
typedef struct ttype187847 ttype187847;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct tsym187843 tsym187843;
typedef struct tident167019 tident167019;
typedef struct tnodeseq187807 tnodeseq187807;
typedef struct tidobj167013 tidobj167013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq187845 ttypeseq187845;
typedef struct tscope187837 tscope187837;
typedef struct TY187943 TY187943;
typedef struct tinstantiation187833 tinstantiation187833;
typedef struct tstrtable187817 tstrtable187817;
typedef struct tsymseq187815 tsymseq187815;
typedef struct tloc187827 tloc187827;
typedef struct trope145007 trope145007;
typedef struct tlib187831 tlib187831;
typedef struct TY10665 TY10665;
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
typedef struct TY187932 TY187932;
typedef struct tlistentry120017 tlistentry120017;
typedef struct tbasechunk22636 tbasechunk22636;
typedef struct tfreecell22628 tfreecell22628;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo163527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tnode187813  {
ttype187847* Typ;
tlineinfo163527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym187843* Sym;
} S4;
struct {tident167019* Ident;
} S5;
struct {tnodeseq187807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY188025[20];
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
struct  tidobj167013  {
  TNimObject Sup;
NI Id;
};
struct  tident167019  {
  tidobj167013 Sup;
NimStringDesc* S;
tident167019* Next;
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
struct  tstrtable187817  {
NI Counter;
tsymseq187815* Data;
};
struct  tloc187827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype187847* T;
trope145007* R;
trope145007* Heaproot;
NI A;
};
struct  tsym187843  {
  tidobj167013 Sup;
NU8 Kind;
union {
struct {ttypeseq187845* Typeinstcache;
tscope187837* Typscope;
} S1;
struct {TY187943* Procinstcache;
tscope187837* Scope;
} S2;
struct {TY187943* Usedgenerics;
tstrtable187817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype187847* Typ;
tident167019* Name;
tlineinfo163527 Info;
tsym187843* Owner;
NU32 Flags;
tnode187813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc187827 Loc;
tlib187831* Annex;
tnode187813* Constraint;
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
struct  ttype187847  {
  tidobj167013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq187845* Sons;
tnode187813* N;
tsym187843* Destructor;
tsym187843* Owner;
tsym187843* Sym;
NI64 Size;
NI Align;
tloc187827 Loc;
};
struct  tscope187837  {
NI Depthlevel;
tstrtable187817 Symbols;
tnodeseq187807* Usingsyms;
tscope187837* Parent;
};
struct  tinstantiation187833  {
tsym187843* Sym;
ttypeseq187845* Concretetypes;
TY187932* Usedby;
};
struct  trope145007  {
  TNimObject Sup;
trope145007* Left;
trope145007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry120017  {
  TNimObject Sup;
tlistentry120017* Prev;
tlistentry120017* Next;
};
struct  tlib187831  {
  tlistentry120017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope145007* Name;
tnode187813* Path;
};
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
struct  tfreecell22628  {
tfreecell22628* Next;
NI Zerofield;
};
struct tnodeseq187807 {
  TGenericSeq Sup;
  tnode187813* data[SEQ_DECL_SIZE];
};
struct ttypeseq187845 {
  TGenericSeq Sup;
  ttype187847* data[SEQ_DECL_SIZE];
};
struct TY187943 {
  TGenericSeq Sup;
  tinstantiation187833* data[SEQ_DECL_SIZE];
};
struct tsymseq187815 {
  TGenericSeq Sup;
  tsym187843* data[SEQ_DECL_SIZE];
};
struct TY10665 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY187932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, renderplainsymbolname_338007)(tnode187813* n);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, len_188274)(tnode187813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(tnode187813*, HEX5BHEX5D_188711)(tnode187813* n, NI i);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, renderdefinitionname_211118)(tsym187843* s, NIM_BOOL noquotes);
N_NIMCALL(void, internalerror_165591)(tlineinfo163527 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_77280, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, failedassertimpl_81021)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, rendertype_338208)(tnode187813* n);
N_NIMCALL(NimStringDesc*, typetostring_223020)(ttype187847* typ, NU8 prefer);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, renderparamtypes_340423)(TY10665** found, tnode187813* n);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41088*, usrtocell_44443)(void* usr);
static N_INLINE(void, rtladdzct_46002)(tcell41088* c);
N_NOINLINE(void, addzct_44418)(tcellseq41104* s, tcell41088* c);
N_NIMCALL(NimStringDesc*, renderparamtypes_340847)(tnode187813* n, NimStringDesc* sep);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
STRING_LITERAL(TMP4760, "", 0);
static NIM_CONST TY188025 TMP4761 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4762, "sons", 4);
static NIM_CONST TY188025 TMP4763 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4764, "ident", 5);
STRING_LITERAL(TMP4765, "*", 1);
static NIM_CONST TY188025 TMP4766 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4767, "sym", 3);
STRING_LITERAL(TMP4768, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP4769, "not result.isNil ", 17);
STRING_LITERAL(TMP4770, "len(n) == 1 ", 12);
STRING_LITERAL(TMP4771, "ref.", 4);
STRING_LITERAL(TMP4772, "ptr.", 4);
STRING_LITERAL(TMP4773, "len(n) > 1 ", 11);
STRING_LITERAL(TMP4774, "params.kind == nkFormalParams ", 30);
STRING_LITERAL(TMP4775, "len(params) > 0 ", 16);
STRING_LITERAL(TMP4776, "proc(", 5);
STRING_LITERAL(TMP4777, "len(n) >= 3 ", 12);
STRING_LITERAL(TMP4779, "n[i].kind == nkIdent ", 21);
STRING_LITERAL(TMP4780, "len(n) > 0 ", 11);
STRING_LITERAL(TMP4781, "tuple[", 6);
STRING_LITERAL(TMP4782, "len(n) >= 2 ", 12);
STRING_LITERAL(TMP4784, "typePos > 0 ", 12);
STRING_LITERAL(TMP4787, "renderParamTypes(found,n) with ", 31);
extern TFrame* frameptr_13038;
extern TNimType NTI187023; /* TNodeKind */
extern tgcheap43016 gch_43044;
extern TNimType NTI10665; /* seq[string] */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NI, len_188274)(tnode187813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(958, "ast.nim");
	{
		nimln(958, "ast.nim");
		if (((TMP4761[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4762));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(958, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(959, "ast.nim");
		nimln(959, "ast.nim");
		if (((TMP4761[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4762));
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

static N_INLINE(tnode187813*, HEX5BHEX5D_188711)(tnode187813* n, NI i) {
	tnode187813* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(972, "ast.nim");
	if (((TMP4761[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP4762));
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

N_NIMCALL(NimStringDesc*, renderplainsymbolname_338007)(tnode187813* n) {
	NimStringDesc* result;
	nimfr("renderPlainSymbolName", "typesrenderer.nim")
	result = 0;
	nimln(11, "typesrenderer.nim");
	result = copyString(((NimStringDesc*) &TMP4760));
	nimln(12, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 31):
	{
		NI i_338032;
		NI HEX3Atmp_338201;
		NI LOC2;
		NI res_338203;
		i_338032 = 0;
		HEX3Atmp_338201 = 0;
		nimln(14, "typesrenderer.nim");
		nimln(14, "typesrenderer.nim");
		nimln(14, "typesrenderer.nim");
		LOC2 = 0;
		LOC2 = len_188274(n);
		HEX3Atmp_338201 = subInt(LOC2, 1);
		nimln(1457, "system.nim");
		res_338203 = 0;
		nimln(1458, "system.nim");
		while (1) {
			NI LOC4;
			tnode187813* LOC5;
			nimln(1458, "system.nim");
			if (!(res_338203 <= HEX3Atmp_338201)) goto LA3;
			nimln(1457, "system.nim");
			i_338032 = res_338203;
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			nimln(15, "typesrenderer.nim");
			LOC4 = 0;
			LOC4 = len_188274(n);
			LOC5 = 0;
			LOC5 = HEX5BHEX5D_188711(n, subInt(LOC4, 1));
			result = renderplainsymbolname_338007(LOC5);
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
			res_338203 = addInt(res_338203, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 2):
	{
		nimln(19, "typesrenderer.nim");
		{
			nimln(19, "typesrenderer.nim");
			nimln(19, "typesrenderer.nim");
			if (!(((TMP4763[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4764));
			if (!!(eqStrings((*(*n).kindU.S5.Ident).S, ((NimStringDesc*) &TMP4765)))) goto LA13;
			nimln(20, "typesrenderer.nim");
			if (!(((TMP4763[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4764));
			result = copyString((*(*n).kindU.S5.Ident).S);
		}
		LA13: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(22, "typesrenderer.nim");
		if (!(((TMP4766[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4767));
		result = renderdefinitionname_211118((*n).kindU.S4.Sym, NIM_TRUE);
	}
	break;
	case ((NU8) 43):
	{
		tnode187813* LOC17;
		nimln(24, "typesrenderer.nim");
		nimln(24, "typesrenderer.nim");
		LOC17 = 0;
		LOC17 = HEX5BHEX5D_188711(n, 0);
		result = renderplainsymbolname_338007(LOC17);
	}
	break;
	case ((NU8) 53):
	{
		NI LOC19;
		tnode187813* LOC20;
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		nimln(26, "typesrenderer.nim");
		LOC19 = 0;
		LOC19 = len_188274(n);
		LOC20 = 0;
		LOC20 = HEX5BHEX5D_188711(n, subInt(LOC19, 1));
		result = renderplainsymbolname_338007(LOC20);
	}
	break;
	default:
	{
		NimStringDesc* LOC22;
		nimln(28, "typesrenderer.nim");
		nimln(28, "typesrenderer.nim");
		LOC22 = 0;
		nimln(28, "typesrenderer.nim");
		LOC22 = rawNewString(reprEnum((*n).Kind, (&NTI187023))->Sup.len + 29);
appendString(LOC22, ((NimStringDesc*) &TMP4768));
appendString(LOC22, reprEnum((*n).Kind, (&NTI187023)));
		internalerror_165591((*n).Info, LOC22);
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
		failedassertimpl_81021(((NimStringDesc*) &TMP4769));
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

N_NIMCALL(NimStringDesc*, rendertype_338208)(tnode187813* n) {
	NimStringDesc* result;
	nimfr("renderType", "typesrenderer.nim")
	result = 0;
	nimln(33, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 2):
	{
		nimln(34, "typesrenderer.nim");
		if (!(((TMP4763[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4764));
		result = copyString((*(*n).kindU.S5.Ident).S);
	}
	break;
	case ((NU8) 3):
	{
		nimln(35, "typesrenderer.nim");
		if (!(((TMP4766[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP4767));
		result = typetostring_223020((*(*n).kindU.S4.Sym).Typ, ((NU8) 0));
	}
	break;
	case ((NU8) 141):
	{
		tnode187813* LOC9;
		nimln(37, "typesrenderer.nim");
		{
			NI LOC6;
			nimln(37, "typesrenderer.nim");
			nimln(37, "typesrenderer.nim");
			nimln(37, "typesrenderer.nim");
			LOC6 = 0;
			LOC6 = len_188274(n);
			if (!!((LOC6 == 1))) goto LA7;
			nimln(37, "typesrenderer.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP4770));
		}
		LA7: ;
		nimln(38, "typesrenderer.nim");
		nimln(38, "typesrenderer.nim");
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_188711(n, 0);
		result = rendertype_338208(LOC9);
	}
	break;
	case ((NU8) 139):
	{
		NimStringDesc* LOC16;
		tnode187813* LOC17;
		NimStringDesc* LOC18;
		nimln(40, "typesrenderer.nim");
		{
			NI LOC13;
			nimln(40, "typesrenderer.nim");
			nimln(40, "typesrenderer.nim");
			nimln(40, "typesrenderer.nim");
			LOC13 = 0;
			LOC13 = len_188274(n);
			if (!!((LOC13 == 1))) goto LA14;
			nimln(40, "typesrenderer.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP4770));
		}
		LA14: ;
		nimln(41, "typesrenderer.nim");
		nimln(41, "typesrenderer.nim");
		LOC16 = 0;
		nimln(41, "typesrenderer.nim");
		nimln(41, "typesrenderer.nim");
		LOC17 = 0;
		LOC17 = HEX5BHEX5D_188711(n, 0);
		LOC18 = 0;
		LOC18 = rendertype_338208(LOC17);
		LOC16 = rawNewString(LOC18->Sup.len + 4);
appendString(LOC16, ((NimStringDesc*) &TMP4771));
appendString(LOC16, LOC18);
		result = LOC16;
	}
	break;
	case ((NU8) 140):
	{
		NimStringDesc* LOC25;
		tnode187813* LOC26;
		NimStringDesc* LOC27;
		nimln(43, "typesrenderer.nim");
		{
			NI LOC22;
			nimln(43, "typesrenderer.nim");
			nimln(43, "typesrenderer.nim");
			nimln(43, "typesrenderer.nim");
			LOC22 = 0;
			LOC22 = len_188274(n);
			if (!!((LOC22 == 1))) goto LA23;
			nimln(43, "typesrenderer.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP4770));
		}
		LA23: ;
		nimln(44, "typesrenderer.nim");
		nimln(44, "typesrenderer.nim");
		LOC25 = 0;
		nimln(44, "typesrenderer.nim");
		nimln(44, "typesrenderer.nim");
		LOC26 = 0;
		LOC26 = HEX5BHEX5D_188711(n, 0);
		LOC27 = 0;
		LOC27 = rendertype_338208(LOC26);
		LOC25 = rawNewString(LOC27->Sup.len + 4);
appendString(LOC25, ((NimStringDesc*) &TMP4772));
appendString(LOC25, LOC27);
		result = LOC25;
	}
	break;
	case ((NU8) 145):
	{
		tnode187813* params;
		NI i_339423;
		NI HEX3Atmp_340401;
		NI LOC43;
		NI res_340403;
		nimln(46, "typesrenderer.nim");
		{
			NI LOC31;
			nimln(46, "typesrenderer.nim");
			nimln(46, "typesrenderer.nim");
			nimln(46, "typesrenderer.nim");
			LOC31 = 0;
			LOC31 = len_188274(n);
			if (!!((1 < LOC31))) goto LA32;
			nimln(46, "typesrenderer.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP4773));
		}
		LA32: ;
		nimln(47, "typesrenderer.nim");
		params = HEX5BHEX5D_188711(n, 0);
		nimln(48, "typesrenderer.nim");
		{
			nimln(48, "typesrenderer.nim");
			nimln(48, "typesrenderer.nim");
			if (!!(((*params).Kind == ((NU8) 76)))) goto LA36;
			nimln(48, "typesrenderer.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP4774));
		}
		LA36: ;
		nimln(49, "typesrenderer.nim");
		{
			NI LOC40;
			nimln(49, "typesrenderer.nim");
			nimln(49, "typesrenderer.nim");
			nimln(49, "typesrenderer.nim");
			LOC40 = 0;
			LOC40 = len_188274(params);
			if (!!((0 < LOC40))) goto LA41;
			nimln(49, "typesrenderer.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP4775));
		}
		LA41: ;
		nimln(50, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP4776));
		i_339423 = 0;
		HEX3Atmp_340401 = 0;
		nimln(51, "typesrenderer.nim");
		nimln(51, "typesrenderer.nim");
		nimln(51, "typesrenderer.nim");
		LOC43 = 0;
		LOC43 = len_188274(params);
		HEX3Atmp_340401 = subInt(LOC43, 1);
		nimln(1457, "system.nim");
		res_340403 = 1;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC45;
			tnode187813* LOC46;
			NimStringDesc* LOC47;
			nimln(1458, "system.nim");
			if (!(res_340403 <= HEX3Atmp_340401)) goto LA44;
			nimln(1457, "system.nim");
			i_339423 = res_340403;
			nimln(51, "typesrenderer.nim");
			nimln(51, "typesrenderer.nim");
			LOC45 = 0;
			nimln(51, "typesrenderer.nim");
			nimln(51, "typesrenderer.nim");
			LOC46 = 0;
			LOC46 = HEX5BHEX5D_188711(params, i_339423);
			LOC47 = 0;
			LOC47 = rendertype_338208(LOC46);
			LOC45 = rawNewString(LOC47->Sup.len + 1);
appendString(LOC45, LOC47);
appendChar(LOC45, 44);
			result = resizeString(result, LOC45->Sup.len + 0);
appendString(result, LOC45);
			nimln(1460, "system.nim");
			res_340403 = addInt(res_340403, 1);
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
		NI TMP4778;
		NimStringDesc* typestr;
		tnode187813* LOC55;
		NI i_339624;
		NI HEX3Atmp_340405;
		NI res_340407;
		nimln(54, "typesrenderer.nim");
		{
			NI LOC51;
			nimln(54, "typesrenderer.nim");
			nimln(54, "typesrenderer.nim");
			nimln(54, "typesrenderer.nim");
			LOC51 = 0;
			LOC51 = len_188274(n);
			if (!!((3 <= LOC51))) goto LA52;
			nimln(54, "typesrenderer.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP4777));
		}
		LA52: ;
		nimln(55, "typesrenderer.nim");
		nimln(55, "typesrenderer.nim");
		nimln(55, "typesrenderer.nim");
		LOC54 = 0;
		LOC54 = len_188274(n);
		TMP4778 = subInt(LOC54, 2);
		typepos = (NI64)(TMP4778);
		nimln(56, "typesrenderer.nim");
		nimln(56, "typesrenderer.nim");
		LOC55 = 0;
		LOC55 = HEX5BHEX5D_188711(n, typepos);
		typestr = rendertype_338208(LOC55);
		nimln(57, "typesrenderer.nim");
		result = copyString(typestr);
		i_339624 = 0;
		HEX3Atmp_340405 = 0;
		nimln(58, "typesrenderer.nim");
		nimln(58, "typesrenderer.nim");
		HEX3Atmp_340405 = subInt(typepos, 1);
		nimln(1457, "system.nim");
		res_340407 = 1;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC62;
			nimln(1458, "system.nim");
			if (!(res_340407 <= HEX3Atmp_340405)) goto LA56;
			nimln(1457, "system.nim");
			i_339624 = res_340407;
			nimln(59, "typesrenderer.nim");
			{
				tnode187813* LOC59;
				nimln(59, "typesrenderer.nim");
				nimln(59, "typesrenderer.nim");
				nimln(59, "typesrenderer.nim");
				LOC59 = 0;
				LOC59 = HEX5BHEX5D_188711(n, i_339624);
				if (!!(((*LOC59).Kind == ((NU8) 2)))) goto LA60;
				nimln(59, "typesrenderer.nim");
				failedassertimpl_81021(((NimStringDesc*) &TMP4779));
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
			res_340407 = addInt(res_340407, 1);
		} LA56: ;
	}
	break;
	case ((NU8) 133):
	{
		NI i_340023;
		NI HEX3Atmp_340409;
		NI LOC69;
		NI res_340411;
		nimln(62, "typesrenderer.nim");
		{
			NI LOC66;
			nimln(62, "typesrenderer.nim");
			nimln(62, "typesrenderer.nim");
			nimln(62, "typesrenderer.nim");
			LOC66 = 0;
			LOC66 = len_188274(n);
			if (!!((0 < LOC66))) goto LA67;
			nimln(62, "typesrenderer.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP4780));
		}
		LA67: ;
		nimln(63, "typesrenderer.nim");
		result = copyString(((NimStringDesc*) &TMP4781));
		i_340023 = 0;
		HEX3Atmp_340409 = 0;
		nimln(64, "typesrenderer.nim");
		nimln(64, "typesrenderer.nim");
		nimln(64, "typesrenderer.nim");
		LOC69 = 0;
		LOC69 = len_188274(n);
		HEX3Atmp_340409 = subInt(LOC69, 1);
		nimln(1457, "system.nim");
		res_340411 = 0;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC71;
			tnode187813* LOC72;
			NimStringDesc* LOC73;
			nimln(1458, "system.nim");
			if (!(res_340411 <= HEX3Atmp_340409)) goto LA70;
			nimln(1457, "system.nim");
			i_340023 = res_340411;
			nimln(64, "typesrenderer.nim");
			nimln(64, "typesrenderer.nim");
			LOC71 = 0;
			nimln(64, "typesrenderer.nim");
			nimln(64, "typesrenderer.nim");
			LOC72 = 0;
			LOC72 = HEX5BHEX5D_188711(n, i_340023);
			LOC73 = 0;
			LOC73 = rendertype_338208(LOC72);
			LOC71 = rawNewString(LOC73->Sup.len + 1);
appendString(LOC71, LOC73);
appendChar(LOC71, 44);
			result = resizeString(result, LOC71->Sup.len + 0);
appendString(result, LOC71);
			nimln(1460, "system.nim");
			res_340411 = addInt(res_340411, 1);
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
		tnode187813* LOC81;
		NimStringDesc* LOC82;
		NI i_340222;
		NI HEX3Atmp_340413;
		NI LOC83;
		NI res_340415;
		nimln(67, "typesrenderer.nim");
		{
			NI LOC77;
			nimln(67, "typesrenderer.nim");
			nimln(67, "typesrenderer.nim");
			nimln(67, "typesrenderer.nim");
			LOC77 = 0;
			LOC77 = len_188274(n);
			if (!!((2 <= LOC77))) goto LA78;
			nimln(67, "typesrenderer.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP4782));
		}
		LA78: ;
		nimln(68, "typesrenderer.nim");
		nimln(68, "typesrenderer.nim");
		LOC80 = 0;
		nimln(68, "typesrenderer.nim");
		nimln(68, "typesrenderer.nim");
		LOC81 = 0;
		LOC81 = HEX5BHEX5D_188711(n, 0);
		LOC82 = 0;
		LOC82 = rendertype_338208(LOC81);
		LOC80 = rawNewString(LOC82->Sup.len + 1);
appendString(LOC80, LOC82);
appendChar(LOC80, 91);
		result = LOC80;
		i_340222 = 0;
		HEX3Atmp_340413 = 0;
		nimln(69, "typesrenderer.nim");
		nimln(69, "typesrenderer.nim");
		nimln(69, "typesrenderer.nim");
		LOC83 = 0;
		LOC83 = len_188274(n);
		HEX3Atmp_340413 = subInt(LOC83, 1);
		nimln(1457, "system.nim");
		res_340415 = 1;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC85;
			tnode187813* LOC86;
			NimStringDesc* LOC87;
			nimln(1458, "system.nim");
			if (!(res_340415 <= HEX3Atmp_340413)) goto LA84;
			nimln(1457, "system.nim");
			i_340222 = res_340415;
			nimln(69, "typesrenderer.nim");
			nimln(69, "typesrenderer.nim");
			LOC85 = 0;
			nimln(69, "typesrenderer.nim");
			nimln(69, "typesrenderer.nim");
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_188711(n, i_340222);
			LOC87 = 0;
			LOC87 = rendertype_338208(LOC86);
			LOC85 = rawNewString(LOC87->Sup.len + 1);
appendString(LOC85, LOC87);
appendChar(LOC85, 44);
			result = resizeString(result, LOC85->Sup.len + 0);
appendString(result, LOC85);
			nimln(1460, "system.nim");
			res_340415 = addInt(res_340415, 1);
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
		result = copyString(((NimStringDesc*) &TMP4760));
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
		failedassertimpl_81021(((NimStringDesc*) &TMP4769));
	}
	LA91: ;
	popFrame();
	return result;
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

N_NIMCALL(void, renderparamtypes_340423)(TY10665** found, tnode187813* n) {
	nimfr("renderParamTypes", "typesrenderer.nim")
	nimln(81, "typesrenderer.nim");
	switch ((*n).Kind) {
	case ((NU8) 76):
	{
		NI i_340450;
		NI HEX3Atmp_340835;
		NI LOC2;
		NI res_340837;
		i_340450 = 0;
		HEX3Atmp_340835 = 0;
		nimln(83, "typesrenderer.nim");
		nimln(83, "typesrenderer.nim");
		nimln(83, "typesrenderer.nim");
		LOC2 = 0;
		LOC2 = len_188274(n);
		HEX3Atmp_340835 = subInt(LOC2, 1);
		nimln(1457, "system.nim");
		res_340837 = 1;
		nimln(1458, "system.nim");
		while (1) {
			tnode187813* LOC4;
			nimln(1458, "system.nim");
			if (!(res_340837 <= HEX3Atmp_340835)) goto LA3;
			nimln(1457, "system.nim");
			i_340450 = res_340837;
			nimln(83, "typesrenderer.nim");
			nimln(83, "typesrenderer.nim");
			LOC4 = 0;
			LOC4 = HEX5BHEX5D_188711(n, i_340450);
			renderparamtypes_340423(found, LOC4);
			nimln(1460, "system.nim");
			res_340837 = addInt(res_340837, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC6;
		NI TMP4783;
		NimStringDesc* typestr;
		tnode187813* LOC11;
		NI i_340647;
		NI HEX3Atmp_340839;
		NI res_340841;
		nimln(86, "typesrenderer.nim");
		nimln(86, "typesrenderer.nim");
		nimln(86, "typesrenderer.nim");
		LOC6 = 0;
		LOC6 = len_188274(n);
		TMP4783 = subInt(LOC6, 2);
		typepos = (NI64)(TMP4783);
		nimln(87, "typesrenderer.nim");
		{
			nimln(87, "typesrenderer.nim");
			nimln(87, "typesrenderer.nim");
			if (!!((0 < typepos))) goto LA9;
			nimln(87, "typesrenderer.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP4784));
		}
		LA9: ;
		nimln(88, "typesrenderer.nim");
		nimln(88, "typesrenderer.nim");
		LOC11 = 0;
		LOC11 = HEX5BHEX5D_188711(n, typepos);
		typestr = rendertype_338208(LOC11);
		nimln(89, "typesrenderer.nim");
		{
			NIM_BOOL LOC14;
			NI TMP4785;
			tnode187813* LOC16;
			ttype187847* typ;
			NI TMP4786;
			tnode187813* LOC19;
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
			TMP4785 = addInt(typepos, 1);
			LOC16 = 0;
			LOC16 = HEX5BHEX5D_188711(n, (NI64)(TMP4785));
			LOC14 = !(((*LOC16).Kind == ((NU8) 1)));
			LA15: ;
			if (!LOC14) goto LA17;
			nimln(91, "typesrenderer.nim");
			nimln(91, "typesrenderer.nim");
			nimln(91, "typesrenderer.nim");
			TMP4786 = addInt(typepos, 1);
			LOC19 = 0;
			LOC19 = HEX5BHEX5D_188711(n, (NI64)(TMP4786));
			typ = (*LOC19).Typ;
			nimln(92, "typesrenderer.nim");
			{
				nimln(92, "typesrenderer.nim");
				nimln(92, "typesrenderer.nim");
				if (!!(typ == 0)) goto LA22;
				nimln(92, "typesrenderer.nim");
				typestr = typetostring_223020(typ, ((NU8) 2));
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
		i_340647 = 0;
		HEX3Atmp_340839 = 0;
		nimln(94, "typesrenderer.nim");
		nimln(94, "typesrenderer.nim");
		HEX3Atmp_340839 = subInt(typepos, 1);
		nimln(1457, "system.nim");
		res_340841 = 0;
		nimln(1458, "system.nim");
		while (1) {
			NimStringDesc* LOC34;
			nimln(1458, "system.nim");
			if (!(res_340841 <= HEX3Atmp_340839)) goto LA28;
			nimln(1457, "system.nim");
			i_340647 = res_340841;
			nimln(95, "typesrenderer.nim");
			{
				tnode187813* LOC31;
				nimln(95, "typesrenderer.nim");
				nimln(95, "typesrenderer.nim");
				nimln(95, "typesrenderer.nim");
				LOC31 = 0;
				LOC31 = HEX5BHEX5D_188711(n, i_340647);
				if (!!(((*LOC31).Kind == ((NU8) 2)))) goto LA32;
				nimln(95, "typesrenderer.nim");
				failedassertimpl_81021(((NimStringDesc*) &TMP4779));
			}
			LA32: ;
			nimln(96, "typesrenderer.nim");
			(*found) = (TY10665*) incrSeq(&((*found))->Sup, sizeof(NimStringDesc*));
			LOC34 = 0;
			LOC34 = (*found)->data[(*found)->Sup.len-1]; (*found)->data[(*found)->Sup.len-1] = copyStringRC1(typestr);
			if (LOC34) nimGCunrefNoCycle(LOC34);
			nimln(1460, "system.nim");
			res_340841 = addInt(res_340841, 1);
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
		LOC36 = rawNewString(reprEnum((*n).Kind, (&NTI187023))->Sup.len + 31);
appendString(LOC36, ((NimStringDesc*) &TMP4787));
appendString(LOC36, reprEnum((*n).Kind, (&NTI187023)));
		internalerror_165591((*n).Info, LOC36);
	}
	break;
	}
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(NimStringDesc*, renderparamtypes_340847)(tnode187813* n, NimStringDesc* sep) {
	NimStringDesc* result;
	TY10665* found;
	nimfr("renderParamTypes", "typesrenderer.nim")
	result = 0;
	nimln(107, "typesrenderer.nim");
	result = copyString(((NimStringDesc*) &TMP4760));
	nimln(108, "typesrenderer.nim");
	found = (TY10665*) newSeq((&NTI10665), 0);
	nimln(109, "typesrenderer.nim");
	renderparamtypes_340423(&found, n);
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

