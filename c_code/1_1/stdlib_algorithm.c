/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tsym187843 tsym187843;
typedef struct tsymseq187815 tsymseq187815;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct tentry361566 tentry361566;
typedef struct TY361573 TY361573;
typedef struct tidobj167013 tidobj167013;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq187845 ttypeseq187845;
typedef struct ttype187847 ttype187847;
typedef struct tscope187837 tscope187837;
typedef struct TY187943 TY187943;
typedef struct tinstantiation187833 tinstantiation187833;
typedef struct tstrtable187817 tstrtable187817;
typedef struct tident167019 tident167019;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct tnode187813 tnode187813;
typedef struct tloc187827 tloc187827;
typedef struct trope145007 trope145007;
typedef struct tlib187831 tlib187831;
typedef struct tnodeseq187807 tnodeseq187807;
typedef struct TY187932 TY187932;
typedef struct tlistentry120017 tlistentry120017;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tsym187843* x_358795, tsym187843* y_358797, void* ClEnv);
void* ClEnv;
} TY358801;
struct  TGenericSeq  {
NI len;
NI reserved;
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
typedef N_CLOSURE_PTR(NI, TMP5096) (tsym187843* x_358870, tsym187843* y_358872);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CLOSURE_PTR(NI, TMP5098) (tsym187843* x_358870, tsym187843* y_358872);
struct  tentry361566  {
NI Pos;
tsym187843* Sym;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tentry361566 x_362179, tentry361566 y_362181, void* ClEnv);
void* ClEnv;
} TY362185;
typedef N_CLOSURE_PTR(NI, TMP5115) (tentry361566 x_362254, tentry361566 y_362256);
typedef N_CLOSURE_PTR(NI, TMP5116) (tentry361566 x_362254, tentry361566 y_362256);
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj167013  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable187817  {
NI Counter;
tsymseq187815* Data;
};
struct  tlineinfo163527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tident167019  {
  tidobj167013 Sup;
NimStringDesc* S;
tident167019* Next;
NI H;
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
struct tsymseq187815 {
  TGenericSeq Sup;
  tsym187843* data[SEQ_DECL_SIZE];
};
struct TY361573 {
  TGenericSeq Sup;
  tentry361566 data[SEQ_DECL_SIZE];
};
struct ttypeseq187845 {
  TGenericSeq Sup;
  ttype187847* data[SEQ_DECL_SIZE];
};
struct TY187943 {
  TGenericSeq Sup;
  tinstantiation187833* data[SEQ_DECL_SIZE];
};
struct tnodeseq187807 {
  TGenericSeq Sup;
  tnode187813* data[SEQ_DECL_SIZE];
};
struct TY187932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, HEX2A_353919)(NI x, NU8 order);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_358843)(tsym187843** a_358851, NI a_358851Len0, tsym187843** b_358859, NI b_358859Len0, NI lo_358863, NI m_358865, NI hi_358867, TY358801 cmp_358875, NU8 order_358878);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, failedassertimpl_81021)(NimStringDesc* msg);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(void, merge_362227)(tentry361566* a_362235, NI a_362235Len0, tentry361566* b_362243, NI b_362243Len0, NI lo_362247, NI m_362249, NI hi_362251, TY362185 cmp_362259, NU8 order_362262);
STRING_LITERAL(TMP5097, "j (<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=|<=)\015\012    m ", 56);
extern TFrame* frameptr_13038;
extern TNimType NTI187815; /* TSymSeq */
extern TNimType NTI361573; /* seq[TEntry] */
extern TNimType NTI106; /* int */
TNimType NTI353932; /* range -1..0(int) */

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

static N_INLINE(NI, HEX2A_353919)(NI x, NU8 order) {
	NI result;
	NI y;
	NI TMP5014;
	NI TMP5015;
	nimfr("*", "algorithm.nim")
	result = 0;
	nimln(21, "algorithm.nim");
	nimln(21, "algorithm.nim");
	nimln(21, "algorithm.nim");
	TMP5014 = subInt(((NI) (order)), 1);
	y = (NI32)(TMP5014);
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	TMP5015 = subInt((NI)(x ^ ((NI) (y))), ((NI) (y)));
	result = (NI32)(TMP5015);
	popFrame();
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
	BeforeRet: ;
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

N_NIMCALL(void, merge_358843)(tsym187843** a_358851, NI a_358851Len0, tsym187843** b_358859, NI b_358859Len0, NI lo_358863, NI m_358865, NI hi_358867, TY358801 cmp_358875, NU8 order_358878) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
	nimln(101, "algorithm.nim");
	{
		NI TMP5095;
		NI LOC3;
		NI LOC4;
		nimln(101, "algorithm.nim");
		nimln(101, "algorithm.nim");
		nimln(101, "algorithm.nim");
		if ((NU)(m_358865) >= (NU)(a_358851Len0)) raiseIndexError();
		nimln(101, "algorithm.nim");
		TMP5095 = addInt(m_358865, 1);
		if ((NU)((NI32)(TMP5095)) >= (NU)(a_358851Len0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp_358875.ClEnv? cmp_358875.ClPrc(a_358851[m_358865], a_358851[(NI32)(TMP5095)], cmp_358875.ClEnv):((TMP5096)(cmp_358875.ClPrc))(a_358851[m_358865], a_358851[(NI32)(TMP5095)]);
		LOC4 = 0;
		LOC4 = HEX2A_353919(LOC3, order_358878);
		if (!(LOC4 <= 0)) goto LA5;
		nimln(101, "algorithm.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(102, "algorithm.nim");
	j = lo_358863;
	nimln(104, "algorithm.nim");
	{
		nimln(104, "algorithm.nim");
		nimln(104, "algorithm.nim");
		if (!!((j <= m_358865))) goto LA9;
		nimln(104, "algorithm.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP5097));
	}
	LA9: ;
	nimln(106, "algorithm.nim");
	bb = 0;
	nimln(107, "algorithm.nim");
	while (1) {
		nimln(107, "algorithm.nim");
		if (!(j <= m_358865)) goto LA11;
		nimln(94, "algorithm.nim");
		if ((NU)(bb) >= (NU)(b_358859Len0)) raiseIndexError();
		if ((NU)(j) >= (NU)(a_358851Len0)) raiseIndexError();
		unsureAsgnRef((void**) &b_358859[bb], a_358851[j]);
		nimln(109, "algorithm.nim");
		bb = addInt(bb, 1);
		nimln(110, "algorithm.nim");
		j = addInt(j, 1);
	} LA11: ;
	nimln(114, "algorithm.nim");
	i = 0;
	nimln(115, "algorithm.nim");
	k = lo_358863;
	nimln(117, "algorithm.nim");
	while (1) {
		NIM_BOOL LOC13;
		nimln(117, "algorithm.nim");
		LOC13 = 0;
		nimln(117, "algorithm.nim");
		LOC13 = (k < j);
		if (!(LOC13)) goto LA14;
		nimln(117, "algorithm.nim");
		LOC13 = (j <= hi_358867);
		LA14: ;
		if (!LOC13) goto LA12;
		nimln(118, "algorithm.nim");
		{
			NI LOC17;
			NI LOC18;
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			if ((NU)(i) >= (NU)(b_358859Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_358851Len0)) raiseIndexError();
			LOC17 = 0;
			LOC17 = cmp_358875.ClEnv? cmp_358875.ClPrc(b_358859[i], a_358851[j], cmp_358875.ClEnv):((TMP5098)(cmp_358875.ClPrc))(b_358859[i], a_358851[j]);
			LOC18 = 0;
			LOC18 = HEX2A_353919(LOC17, order_358878);
			if (!(LOC18 <= 0)) goto LA19;
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_358851Len0)) raiseIndexError();
			if ((NU)(i) >= (NU)(b_358859Len0)) raiseIndexError();
			unsureAsgnRef((void**) &a_358851[k], b_358859[i]);
			nimln(120, "algorithm.nim");
			i = addInt(i, 1);
		}
		goto LA15;
		LA19: ;
		{
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_358851Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_358851Len0)) raiseIndexError();
			unsureAsgnRef((void**) &a_358851[k], a_358851[j]);
			nimln(123, "algorithm.nim");
			j = addInt(j, 1);
		}
		LA15: ;
		nimln(124, "algorithm.nim");
		k = addInt(k, 1);
	} LA12: ;
	nimln(127, "algorithm.nim");
	while (1) {
		nimln(127, "algorithm.nim");
		if (!(k < j)) goto LA22;
		nimln(94, "algorithm.nim");
		if ((NU)(k) >= (NU)(a_358851Len0)) raiseIndexError();
		if ((NU)(i) >= (NU)(b_358859Len0)) raiseIndexError();
		unsureAsgnRef((void**) &a_358851[k], b_358859[i]);
		nimln(129, "algorithm.nim");
		k = addInt(k, 1);
		nimln(130, "algorithm.nim");
		i = addInt(i, 1);
	} LA22: ;
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_358782)(tsym187843** a_358790, NI a_358790Len0, TY358801 cmp_358800, NU8 order_358803) {
	NI n;
	tsymseq187815* b;
	NI TMP5092;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(153, "algorithm.nim");
	nimln(153, "algorithm.nim");
	n = a_358790Len0;
	b = 0;
	nimln(155, "algorithm.nim");
	nimln(155, "algorithm.nim");
	TMP5092 = divInt(n, 2);
	b = (tsymseq187815*) newSeq((&NTI187815), (NI32)(TMP5092));
	nimln(156, "algorithm.nim");
	s = 1;
	nimln(157, "algorithm.nim");
	while (1) {
		NI m;
		NI TMP5093;
		NI TMP5094;
		NI TMP5103;
		nimln(157, "algorithm.nim");
		if (!(s < n)) goto LA1;
		nimln(158, "algorithm.nim");
		nimln(158, "algorithm.nim");
		nimln(158, "algorithm.nim");
		TMP5093 = subInt(n, 1);
		TMP5094 = subInt((NI32)(TMP5093), s);
		m = (NI32)(TMP5094);
		nimln(159, "algorithm.nim");
		while (1) {
			NI TMP5099;
			NI TMP5100;
			NI TMP5101;
			NI TMP5102;
			nimln(159, "algorithm.nim");
			if (!(0 <= m)) goto LA2;
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			TMP5099 = subInt(m, s);
			TMP5100 = addInt((NI32)(TMP5099), 1);
			nimln(160, "algorithm.nim");
			TMP5101 = addInt(m, s);
			merge_358843(a_358790, a_358790Len0, b->data, b->Sup.len, (((NI32)(TMP5100) >= 0) ? (NI32)(TMP5100) : 0), m, (NI32)(TMP5101), cmp_358800, order_358803);
			nimln(161, "algorithm.nim");
			nimln(161, "algorithm.nim");
			TMP5102 = mulInt(s, 2);
			m = subInt(m, (NI32)(TMP5102));
		} LA2: ;
		nimln(162, "algorithm.nim");
		nimln(162, "algorithm.nim");
		TMP5103 = mulInt(s, 2);
		s = (NI32)(TMP5103);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, merge_362227)(tentry361566* a_362235, NI a_362235Len0, tentry361566* b_362243, NI b_362243Len0, NI lo_362247, NI m_362249, NI hi_362251, TY362185 cmp_362259, NU8 order_362262) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
	nimln(101, "algorithm.nim");
	{
		NI TMP5114;
		NI LOC3;
		NI LOC4;
		nimln(101, "algorithm.nim");
		nimln(101, "algorithm.nim");
		nimln(101, "algorithm.nim");
		if ((NU)(m_362249) >= (NU)(a_362235Len0)) raiseIndexError();
		nimln(101, "algorithm.nim");
		TMP5114 = addInt(m_362249, 1);
		if ((NU)((NI32)(TMP5114)) >= (NU)(a_362235Len0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp_362259.ClEnv? cmp_362259.ClPrc(a_362235[m_362249], a_362235[(NI32)(TMP5114)], cmp_362259.ClEnv):((TMP5115)(cmp_362259.ClPrc))(a_362235[m_362249], a_362235[(NI32)(TMP5114)]);
		LOC4 = 0;
		LOC4 = HEX2A_353919(LOC3, order_362262);
		if (!(LOC4 <= 0)) goto LA5;
		nimln(101, "algorithm.nim");
		goto BeforeRet;
	}
	LA5: ;
	nimln(102, "algorithm.nim");
	j = lo_362247;
	nimln(104, "algorithm.nim");
	{
		nimln(104, "algorithm.nim");
		nimln(104, "algorithm.nim");
		if (!!((j <= m_362249))) goto LA9;
		nimln(104, "algorithm.nim");
		failedassertimpl_81021(((NimStringDesc*) &TMP5097));
	}
	LA9: ;
	nimln(106, "algorithm.nim");
	bb = 0;
	nimln(107, "algorithm.nim");
	while (1) {
		nimln(107, "algorithm.nim");
		if (!(j <= m_362249)) goto LA11;
		nimln(94, "algorithm.nim");
		if ((NU)(bb) >= (NU)(b_362243Len0)) raiseIndexError();
		if ((NU)(j) >= (NU)(a_362235Len0)) raiseIndexError();
		b_362243[bb].Pos = a_362235[j].Pos;
		unsureAsgnRef((void**) &b_362243[bb].Sym, a_362235[j].Sym);
		nimln(109, "algorithm.nim");
		bb = addInt(bb, 1);
		nimln(110, "algorithm.nim");
		j = addInt(j, 1);
	} LA11: ;
	nimln(114, "algorithm.nim");
	i = 0;
	nimln(115, "algorithm.nim");
	k = lo_362247;
	nimln(117, "algorithm.nim");
	while (1) {
		NIM_BOOL LOC13;
		nimln(117, "algorithm.nim");
		LOC13 = 0;
		nimln(117, "algorithm.nim");
		LOC13 = (k < j);
		if (!(LOC13)) goto LA14;
		nimln(117, "algorithm.nim");
		LOC13 = (j <= hi_362251);
		LA14: ;
		if (!LOC13) goto LA12;
		nimln(118, "algorithm.nim");
		{
			NI LOC17;
			NI LOC18;
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			nimln(118, "algorithm.nim");
			if ((NU)(i) >= (NU)(b_362243Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_362235Len0)) raiseIndexError();
			LOC17 = 0;
			LOC17 = cmp_362259.ClEnv? cmp_362259.ClPrc(b_362243[i], a_362235[j], cmp_362259.ClEnv):((TMP5116)(cmp_362259.ClPrc))(b_362243[i], a_362235[j]);
			LOC18 = 0;
			LOC18 = HEX2A_353919(LOC17, order_362262);
			if (!(LOC18 <= 0)) goto LA19;
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_362235Len0)) raiseIndexError();
			if ((NU)(i) >= (NU)(b_362243Len0)) raiseIndexError();
			a_362235[k].Pos = b_362243[i].Pos;
			unsureAsgnRef((void**) &a_362235[k].Sym, b_362243[i].Sym);
			nimln(120, "algorithm.nim");
			i = addInt(i, 1);
		}
		goto LA15;
		LA19: ;
		{
			nimln(94, "algorithm.nim");
			if ((NU)(k) >= (NU)(a_362235Len0)) raiseIndexError();
			if ((NU)(j) >= (NU)(a_362235Len0)) raiseIndexError();
			a_362235[k].Pos = a_362235[j].Pos;
			unsureAsgnRef((void**) &a_362235[k].Sym, a_362235[j].Sym);
			nimln(123, "algorithm.nim");
			j = addInt(j, 1);
		}
		LA15: ;
		nimln(124, "algorithm.nim");
		k = addInt(k, 1);
	} LA12: ;
	nimln(127, "algorithm.nim");
	while (1) {
		nimln(127, "algorithm.nim");
		if (!(k < j)) goto LA22;
		nimln(94, "algorithm.nim");
		if ((NU)(k) >= (NU)(a_362235Len0)) raiseIndexError();
		if ((NU)(i) >= (NU)(b_362243Len0)) raiseIndexError();
		a_362235[k].Pos = b_362243[i].Pos;
		unsureAsgnRef((void**) &a_362235[k].Sym, b_362243[i].Sym);
		nimln(129, "algorithm.nim");
		k = addInt(k, 1);
		nimln(130, "algorithm.nim");
		i = addInt(i, 1);
	} LA22: ;
	BeforeRet: ;
	popFrame();
}

N_NIMCALL(void, sort_362166)(tentry361566* a_362174, NI a_362174Len0, TY362185 cmp_362184, NU8 order_362187) {
	NI n;
	TY361573* b;
	NI TMP5111;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(153, "algorithm.nim");
	nimln(153, "algorithm.nim");
	n = a_362174Len0;
	b = 0;
	nimln(155, "algorithm.nim");
	nimln(155, "algorithm.nim");
	TMP5111 = divInt(n, 2);
	b = (TY361573*) newSeq((&NTI361573), (NI32)(TMP5111));
	nimln(156, "algorithm.nim");
	s = 1;
	nimln(157, "algorithm.nim");
	while (1) {
		NI m;
		NI TMP5112;
		NI TMP5113;
		NI TMP5121;
		nimln(157, "algorithm.nim");
		if (!(s < n)) goto LA1;
		nimln(158, "algorithm.nim");
		nimln(158, "algorithm.nim");
		nimln(158, "algorithm.nim");
		TMP5112 = subInt(n, 1);
		TMP5113 = subInt((NI32)(TMP5112), s);
		m = (NI32)(TMP5113);
		nimln(159, "algorithm.nim");
		while (1) {
			NI TMP5117;
			NI TMP5118;
			NI TMP5119;
			NI TMP5120;
			nimln(159, "algorithm.nim");
			if (!(0 <= m)) goto LA2;
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			nimln(160, "algorithm.nim");
			TMP5117 = subInt(m, s);
			TMP5118 = addInt((NI32)(TMP5117), 1);
			nimln(160, "algorithm.nim");
			TMP5119 = addInt(m, s);
			merge_362227(a_362174, a_362174Len0, b->data, b->Sup.len, (((NI32)(TMP5118) >= 0) ? (NI32)(TMP5118) : 0), m, (NI32)(TMP5119), cmp_362184, order_362187);
			nimln(161, "algorithm.nim");
			nimln(161, "algorithm.nim");
			TMP5120 = mulInt(s, 2);
			m = subInt(m, (NI32)(TMP5120));
		} LA2: ;
		nimln(162, "algorithm.nim");
		nimln(162, "algorithm.nim");
		TMP5121 = mulInt(s, 2);
		s = (NI32)(TMP5121);
	} LA1: ;
	popFrame();
}
N_NOINLINE(void, stdlibalgorithmInit)(void) {
	nimfr("algorithm", "algorithm.nim")
	popFrame();
}

N_NOINLINE(void, stdlibalgorithmDatInit)(void) {
NTI353932.size = sizeof(NI);
NTI353932.kind = 20;
NTI353932.base = (&NTI106);
NTI353932.flags = 3;
}

