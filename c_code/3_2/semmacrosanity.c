/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tsym186843 tsym186843;
typedef struct tnode186813 tnode186813;
typedef struct ttype186847 ttype186847;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident166019 tident166019;
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct tidobj166013 tidobj166013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq186845 ttypeseq186845;
typedef struct tloc186827 tloc186827;
typedef struct trope144007 trope144007;
typedef struct tcell41490 tcell41490;
typedef struct tcellseq41506 tcellseq41506;
typedef struct tgcheap43416 tgcheap43416;
typedef struct tcellset41502 tcellset41502;
typedef struct tpagedesc41498 tpagedesc41498;
typedef struct tmemregion23810 tmemregion23810;
typedef struct tsmallchunk23038 tsmallchunk23038;
typedef struct tllchunk23804 tllchunk23804;
typedef struct tbigchunk23040 tbigchunk23040;
typedef struct tintset23015 tintset23015;
typedef struct ttrunk23011 ttrunk23011;
typedef struct tavlnode23808 tavlnode23808;
typedef struct tgcstat43414 tgcstat43414;
typedef struct tscope186837 tscope186837;
typedef struct TY186943 TY186943;
typedef struct tinstantiation186833 tinstantiation186833;
typedef struct tstrtable186817 tstrtable186817;
typedef struct tsymseq186815 tsymseq186815;
typedef struct tlib186831 tlib186831;
typedef struct tbasechunk23036 tbasechunk23036;
typedef struct tfreecell23028 tfreecell23028;
typedef struct TY186932 TY186932;
typedef struct tlistentry118017 tlistentry118017;
struct  tlineinfo162527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode186813  {
ttype186847* Typ;
tlineinfo162527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym186843* Sym;
} S4;
struct {tident166019* Ident;
} S5;
struct {tnodeseq186807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY187025[20];
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
struct  tidobj166013  {
  TNimObject Sup;
NI Id;
};
struct  tloc186827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype186847* T;
trope144007* R;
trope144007* Heaproot;
NI A;
};
struct  ttype186847  {
  tidobj166013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq186845* Sons;
tnode186813* N;
tsym186843* Destructor;
tsym186843* Owner;
tsym186843* Sym;
NI64 Size;
NI Align;
tloc186827 Loc;
};
struct  tcell41490  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41506  {
NI Len;
NI Cap;
tcell41490** D;
};
struct  tcellset41502  {
NI Counter;
NI Max;
tpagedesc41498* Head;
tpagedesc41498** Data;
};
typedef tsmallchunk23038* TY23822[512];
typedef ttrunk23011* ttrunkbuckets23013[256];
struct  tintset23015  {
ttrunkbuckets23013 Data;
};
struct  tmemregion23810  {
NI Minlargeobj;
NI Maxlargeobj;
TY23822 Freesmallchunks;
tllchunk23804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk23040* Freechunkslist;
tintset23015 Chunkstarts;
tavlnode23808* Root;
tavlnode23808* Deleted;
tavlnode23808* Last;
tavlnode23808* Freeavlnodes;
};
struct  tgcstat43414  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43416  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41506 Zct;
tcellseq41506 Decstack;
tcellset41502 Cycleroots;
tcellseq41506 Tempstack;
NI Recgclock;
tmemregion23810 Region;
tgcstat43414 Stat;
};
struct  tstrtable186817  {
NI Counter;
tsymseq186815* Data;
};
struct  tsym186843  {
  tidobj166013 Sup;
NU8 Kind;
union {
struct {ttypeseq186845* Typeinstcache;
tscope186837* Typscope;
} S1;
struct {TY186943* Procinstcache;
tscope186837* Scope;
} S2;
struct {TY186943* Usedgenerics;
tstrtable186817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype186847* Typ;
tident166019* Name;
tlineinfo162527 Info;
tsym186843* Owner;
NU32 Flags;
tnode186813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc186827 Loc;
tlib186831* Annex;
tnode186813* Constraint;
};
struct  tident166019  {
  tidobj166013 Sup;
NimStringDesc* S;
tident166019* Next;
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
struct  trope144007  {
  TNimObject Sup;
trope144007* Left;
trope144007* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY23018[8];
struct  tpagedesc41498  {
tpagedesc41498* Next;
NI Key;
TY23018 Bits;
};
struct  tbasechunk23036  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk23038  {
  tbasechunk23036 Sup;
tsmallchunk23038* Next;
tsmallchunk23038* Prev;
tfreecell23028* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23804  {
NI Size;
NI Acc;
tllchunk23804* Next;
};
struct  tbigchunk23040  {
  tbasechunk23036 Sup;
tbigchunk23040* Next;
tbigchunk23040* Prev;
NI Align;
NF Data;
};
struct  ttrunk23011  {
ttrunk23011* Next;
NI Key;
TY23018 Bits;
};
typedef tavlnode23808* TY23814[2];
struct  tavlnode23808  {
TY23814 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tscope186837  {
NI Depthlevel;
tstrtable186817 Symbols;
tnodeseq186807* Usingsyms;
tscope186837* Parent;
};
struct  tinstantiation186833  {
tsym186843* Sym;
ttypeseq186845* Concretetypes;
TY186932* Usedby;
};
struct  tlistentry118017  {
  TNimObject Sup;
tlistentry118017* Prev;
tlistentry118017* Next;
};
struct  tlib186831  {
  tlistentry118017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope144007* Name;
tnode186813* Path;
};
struct  tfreecell23028  {
tfreecell23028* Next;
NI Zerofield;
};
struct tnodeseq186807 {
  TGenericSeq Sup;
  tnode186813* data[SEQ_DECL_SIZE];
};
struct ttypeseq186845 {
  TGenericSeq Sup;
  ttype186847* data[SEQ_DECL_SIZE];
};
struct TY186943 {
  TGenericSeq Sup;
  tinstantiation186833* data[SEQ_DECL_SIZE];
};
struct tsymseq186815 {
  TGenericSeq Sup;
  tsym186843* data[SEQ_DECL_SIZE];
};
struct TY186932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tsym186843*, ithfield_415007)(tnode186813* n, NI field);
static N_INLINE(NI, sonslen_187191)(tnode186813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, internalerror_164591)(tlineinfo162527 info, NimStringDesc* errmsg);
static N_INLINE(tnode186813*, lastson_187199)(tnode186813* n);
N_NIMCALL(void, annotatetype_415194)(tnode186813* n, ttype186847* t);
N_NIMCALL(ttype186847*, skiptypes_190793)(ttype186847* t, NU64 kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41490*, usrtocell_44843)(void* usr);
static N_INLINE(void, rtladdzct_46402)(tcell41490* c);
N_NOINLINE(void, addzct_44818)(tcellseq41506* s, tcell41490* c);
static N_INLINE(NI, len_187274)(tnode186813* n);
N_NIMCALL(void, globalerror_164565)(tlineinfo162527 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NI, len_190569)(ttype186847* n);
N_NIMCALL(ttype186847*, elemtype_222559)(ttype186847* t);
static NIM_CONST TY187025 TMP5668 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5669, "sons", 4);
STRING_LITERAL(TMP5672, "ithField", 8);
STRING_LITERAL(TMP5677, "ithField(record case branch)", 28);
static NIM_CONST TY187025 TMP5678 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP5679, "sym", 3);
STRING_LITERAL(TMP5680, "invalid field at index ", 23);
STRING_LITERAL(TMP5681, "() must have an object or tuple type", 36);
STRING_LITERAL(TMP5682, "[] must have some form of array type", 36);
STRING_LITERAL(TMP5683, "{} must have the set type", 25);
STRING_LITERAL(TMP5684, "float literal must have some float type", 39);
STRING_LITERAL(TMP5685, "integer literal must have some int type", 39);
STRING_LITERAL(TMP5686, "string literal must be of some string type", 42);
STRING_LITERAL(TMP5687, "nil literal must be of some pointer type", 40);
extern TFrame* frameptr_13238;
extern tgcheap43416 gch_43444;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(NI, sonslen_187191)(tnode186813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
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

static N_INLINE(tnode186813*, lastson_187199)(tnode186813* n) {
	tnode186813* result;
	NI LOC1;
	NI TMP5675;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1421, "ast.nim");
	if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
	nimln(1421, "ast.nim");
	nimln(1421, "ast.nim");
	LOC1 = 0;
	LOC1 = sonslen_187191(n);
	TMP5675 = subInt(LOC1, 1);
	if ((NU)((NI64)(TMP5675)) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[(NI64)(TMP5675)];
	popFrame();
	return result;
}

N_NIMCALL(tsym186843*, ithfield_415007)(tnode186813* n, NI field) {
	tsym186843* result;
	nimfr("ithField", "semmacrosanity.nim")
	result = 0;
	nimln(16, "semmacrosanity.nim");
	result = NIM_NIL;
	nimln(17, "semmacrosanity.nim");
	switch ((*n).Kind) {
	case ((NU8) 136):
	{
		NI i_415024;
		NI HEX3Atmp_415182;
		NI LOC2;
		NI TMP5670;
		NI res_415184;
		i_415024 = 0;
		HEX3Atmp_415182 = 0;
		nimln(19, "semmacrosanity.nim");
		nimln(19, "semmacrosanity.nim");
		nimln(19, "semmacrosanity.nim");
		LOC2 = 0;
		LOC2 = sonslen_187191(n);
		TMP5670 = subInt(LOC2, 1);
		HEX3Atmp_415182 = (NI64)(TMP5670);
		nimln(1450, "system.nim");
		res_415184 = 0;
		nimln(1451, "system.nim");
		while (1) {
			NI TMP5671;
			nimln(1451, "system.nim");
			if (!(res_415184 <= HEX3Atmp_415182)) goto LA3;
			nimln(1450, "system.nim");
			i_415024 = res_415184;
			nimln(20, "semmacrosanity.nim");
			if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
			if ((NU)(i_415024) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			nimln(20, "semmacrosanity.nim");
			TMP5671 = subInt(field, i_415024);
			result = ithfield_415007((*n).kindU.S6.Sons->data[i_415024], (NI64)(TMP5671));
			nimln(21, "semmacrosanity.nim");
			{
				nimln(21, "semmacrosanity.nim");
				nimln(21, "semmacrosanity.nim");
				if (!!((result == NIM_NIL))) goto LA6;
				nimln(21, "semmacrosanity.nim");
				goto BeforeRet;
			}
			LA6: ;
			nimln(1453, "system.nim");
			res_415184 = addInt(res_415184, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 137):
	{
		NI TMP5673;
		NI i_415122;
		NI HEX3Atmp_415186;
		NI LOC17;
		NI TMP5674;
		NI res_415188;
		nimln(23, "semmacrosanity.nim");
		{
			nimln(23, "semmacrosanity.nim");
			nimln(23, "semmacrosanity.nim");
			if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA11;
			nimln(23, "semmacrosanity.nim");
			internalerror_164591((*n).Info, ((NimStringDesc*) &TMP5672));
		}
		LA11: ;
		nimln(24, "semmacrosanity.nim");
		if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		nimln(24, "semmacrosanity.nim");
		TMP5673 = subInt(field, 1);
		result = ithfield_415007((*n).kindU.S6.Sons->data[0], (NI64)(TMP5673));
		nimln(25, "semmacrosanity.nim");
		{
			nimln(25, "semmacrosanity.nim");
			nimln(25, "semmacrosanity.nim");
			if (!!((result == NIM_NIL))) goto LA15;
			nimln(25, "semmacrosanity.nim");
			goto BeforeRet;
		}
		LA15: ;
		i_415122 = 0;
		HEX3Atmp_415186 = 0;
		nimln(26, "semmacrosanity.nim");
		nimln(26, "semmacrosanity.nim");
		nimln(26, "semmacrosanity.nim");
		LOC17 = 0;
		LOC17 = sonslen_187191(n);
		TMP5674 = subInt(LOC17, 1);
		HEX3Atmp_415186 = (NI64)(TMP5674);
		nimln(1450, "system.nim");
		res_415188 = 1;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_415188 <= HEX3Atmp_415186)) goto LA18;
			nimln(1450, "system.nim");
			i_415122 = res_415188;
			nimln(27, "semmacrosanity.nim");
			if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
			if ((NU)(i_415122) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			switch ((*(*n).kindU.S6.Sons->data[i_415122]).Kind) {
			case ((NU8) 85):
			case ((NU8) 88):
			{
				tnode186813* LOC20;
				NI TMP5676;
				nimln(29, "semmacrosanity.nim");
				nimln(29, "semmacrosanity.nim");
				if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
				if ((NU)(i_415122) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				LOC20 = 0;
				LOC20 = lastson_187199((*n).kindU.S6.Sons->data[i_415122]);
				nimln(29, "semmacrosanity.nim");
				TMP5676 = subInt(field, 1);
				result = ithfield_415007(LOC20, (NI64)(TMP5676));
				nimln(30, "semmacrosanity.nim");
				{
					nimln(30, "semmacrosanity.nim");
					nimln(30, "semmacrosanity.nim");
					if (!!((result == NIM_NIL))) goto LA23;
					nimln(30, "semmacrosanity.nim");
					goto BeforeRet;
				}
				LA23: ;
			}
			break;
			default:
			{
				nimln(31, "semmacrosanity.nim");
				internalerror_164591((*n).Info, ((NimStringDesc*) &TMP5677));
			}
			break;
			}
			nimln(1453, "system.nim");
			res_415188 = addInt(res_415188, 1);
		} LA18: ;
	}
	break;
	case ((NU8) 3):
	{
		nimln(33, "semmacrosanity.nim");
		{
			nimln(33, "semmacrosanity.nim");
			if (!(field == 0)) goto LA29;
			nimln(33, "semmacrosanity.nim");
			if (!(((TMP5678[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP5679));
			result = (*n).kindU.S4.Sym;
		}
		LA29: ;
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(tcell41490*, usrtocell_44843)(void* usr) {
	tcell41490* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41490*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41490))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46402)(tcell41490* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44818(&gch_43444.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41490* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_44843(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41490* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_44843((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46402(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(NI, len_187274)(tnode186813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(958, "ast.nim");
	{
		nimln(958, "ast.nim");
		if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(958, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(959, "ast.nim");
		nimln(959, "ast.nim");
		if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, annotatetype_415194)(tnode186813* n, ttype186847* t) {
	ttype186847* x;
	nimfr("annotateType", "semmacrosanity.nim")
	nimln(37, "semmacrosanity.nim");
	x = skiptypes_190793(t, IL64(211106232576256));
	nimln(40, "semmacrosanity.nim");
	switch ((*n).Kind) {
	case ((NU8) 37):
	{
		nimln(42, "semmacrosanity.nim");
		{
			NI i_415229;
			NI HEX3Atmp_415404;
			NI LOC6;
			NI res_415406;
			nimln(42, "semmacrosanity.nim");
			if (!((*x).Kind == ((NU8) 17))) goto LA4;
			nimln(43, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			i_415229 = 0;
			HEX3Atmp_415404 = 0;
			nimln(44, "semmacrosanity.nim");
			nimln(44, "semmacrosanity.nim");
			nimln(44, "semmacrosanity.nim");
			LOC6 = 0;
			LOC6 = len_187274(n);
			HEX3Atmp_415404 = subInt(LOC6, 1);
			nimln(1457, "system.nim");
			res_415406 = 0;
			nimln(1458, "system.nim");
			while (1) {
				tsym186843* field;
				nimln(1458, "system.nim");
				if (!(res_415406 <= HEX3Atmp_415404)) goto LA7;
				nimln(1457, "system.nim");
				i_415229 = res_415406;
				nimln(45, "semmacrosanity.nim");
				field = ithfield_415007((*x).N, i_415229);
				nimln(46, "semmacrosanity.nim");
				{
					NimStringDesc* LOC12;
					NimStringDesc* LOC13;
					nimln(46, "semmacrosanity.nim");
					if (!field == 0) goto LA10;
					nimln(46, "semmacrosanity.nim");
					nimln(46, "semmacrosanity.nim");
					LOC12 = 0;
					nimln(46, "semmacrosanity.nim");
					LOC13 = 0;
					LOC13 = nimIntToStr(i_415229);
					LOC12 = rawNewString(LOC13->Sup.len + 23);
appendString(LOC12, ((NimStringDesc*) &TMP5680));
appendString(LOC12, LOC13);
					globalerror_164565((*n).Info, LOC12);
				}
				goto LA8;
				LA10: ;
				{
					nimln(47, "semmacrosanity.nim");
					if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
					if ((NU)(i_415229) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
					annotatetype_415194((*n).kindU.S6.Sons->data[i_415229], (*field).Typ);
				}
				LA8: ;
				nimln(1460, "system.nim");
				res_415406 = addInt(res_415406, 1);
			} LA7: ;
		}
		goto LA2;
		LA4: ;
		{
			NI i_415286;
			NI HEX3Atmp_415408;
			NI LOC18;
			NI res_415410;
			nimln(48, "semmacrosanity.nim");
			if (!((*x).Kind == ((NU8) 18))) goto LA16;
			nimln(49, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			i_415286 = 0;
			HEX3Atmp_415408 = 0;
			nimln(50, "semmacrosanity.nim");
			nimln(50, "semmacrosanity.nim");
			nimln(50, "semmacrosanity.nim");
			LOC18 = 0;
			LOC18 = len_187274(n);
			HEX3Atmp_415408 = subInt(LOC18, 1);
			nimln(1457, "system.nim");
			res_415410 = 0;
			nimln(1458, "system.nim");
			while (1) {
				nimln(1458, "system.nim");
				if (!(res_415410 <= HEX3Atmp_415408)) goto LA19;
				nimln(1457, "system.nim");
				i_415286 = res_415410;
				nimln(51, "semmacrosanity.nim");
				{
					NI LOC22;
					NimStringDesc* LOC25;
					NimStringDesc* LOC26;
					nimln(51, "semmacrosanity.nim");
					nimln(51, "semmacrosanity.nim");
					LOC22 = 0;
					LOC22 = len_190569(x);
					if (!(LOC22 <= i_415286)) goto LA23;
					nimln(51, "semmacrosanity.nim");
					nimln(51, "semmacrosanity.nim");
					LOC25 = 0;
					nimln(51, "semmacrosanity.nim");
					LOC26 = 0;
					LOC26 = nimIntToStr(i_415286);
					LOC25 = rawNewString(LOC26->Sup.len + 23);
appendString(LOC25, ((NimStringDesc*) &TMP5680));
appendString(LOC25, LOC26);
					globalerror_164565((*n).Info, LOC25);
				}
				goto LA20;
				LA23: ;
				{
					nimln(52, "semmacrosanity.nim");
					if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
					if ((NU)(i_415286) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
					if ((NU)(i_415286) >= (NU)((*x).Sons->Sup.len)) raiseIndexError();
					annotatetype_415194((*n).kindU.S6.Sons->data[i_415286], (*x).Sons->data[i_415286]);
				}
				LA20: ;
				nimln(1460, "system.nim");
				res_415410 = addInt(res_415410, 1);
			} LA19: ;
		}
		goto LA2;
		LA16: ;
		{
			NIM_BOOL LOC29;
			nimln(53, "semmacrosanity.nim");
			LOC29 = 0;
			nimln(53, "semmacrosanity.nim");
			LOC29 = ((*x).Kind == ((NU8) 25));
			if (!(LOC29)) goto LA30;
			nimln(53, "semmacrosanity.nim");
			LOC29 = ((*x).Callconv == ((NU8) 8));
			LA30: ;
			if (!LOC29) goto LA31;
			nimln(54, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA2;
		LA31: ;
		{
			nimln(56, "semmacrosanity.nim");
			globalerror_164565((*n).Info, ((NimStringDesc*) &TMP5681));
		}
		LA2: ;
	}
	break;
	case ((NU8) 41):
	{
		nimln(58, "semmacrosanity.nim");
		{
			tnode186813* m_415333;
			NI i_415413;
			NI HEX3Atmp_415415;
			NI LOC39;
			NI res_415417;
			nimln(58, "semmacrosanity.nim");
			if (!((151060496 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA37;
			nimln(59, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			m_415333 = 0;
			i_415413 = 0;
			HEX3Atmp_415415 = 0;
			nimln(1522, "ast.nim");
			nimln(1522, "ast.nim");
			nimln(1522, "ast.nim");
			LOC39 = 0;
			LOC39 = len_187274(n);
			HEX3Atmp_415415 = subInt(LOC39, 1);
			nimln(1457, "system.nim");
			res_415417 = 0;
			nimln(1458, "system.nim");
			while (1) {
				ttype186847* LOC41;
				nimln(1458, "system.nim");
				if (!(res_415417 <= HEX3Atmp_415415)) goto LA40;
				nimln(1457, "system.nim");
				i_415413 = res_415417;
				nimln(1522, "ast.nim");
				if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
				if ((NU)(i_415413) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				m_415333 = (*n).kindU.S6.Sons->data[i_415413];
				nimln(60, "semmacrosanity.nim");
				nimln(60, "semmacrosanity.nim");
				LOC41 = 0;
				LOC41 = elemtype_222559(x);
				annotatetype_415194(m_415333, LOC41);
				nimln(1460, "system.nim");
				res_415417 = addInt(res_415417, 1);
			} LA40: ;
		}
		goto LA35;
		LA37: ;
		{
			nimln(62, "semmacrosanity.nim");
			globalerror_164565((*n).Info, ((NimStringDesc*) &TMP5682));
		}
		LA35: ;
	}
	break;
	case ((NU8) 39):
	{
		nimln(64, "semmacrosanity.nim");
		{
			tnode186813* m_415348;
			NI i_415419;
			NI HEX3Atmp_415421;
			NI LOC48;
			NI res_415423;
			nimln(64, "semmacrosanity.nim");
			if (!((524288 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA46;
			nimln(65, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
			m_415348 = 0;
			i_415419 = 0;
			HEX3Atmp_415421 = 0;
			nimln(1522, "ast.nim");
			nimln(1522, "ast.nim");
			nimln(1522, "ast.nim");
			LOC48 = 0;
			LOC48 = len_187274(n);
			HEX3Atmp_415421 = subInt(LOC48, 1);
			nimln(1457, "system.nim");
			res_415423 = 0;
			nimln(1458, "system.nim");
			while (1) {
				ttype186847* LOC50;
				nimln(1458, "system.nim");
				if (!(res_415423 <= HEX3Atmp_415421)) goto LA49;
				nimln(1457, "system.nim");
				i_415419 = res_415423;
				nimln(1522, "ast.nim");
				if (((TMP5668[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP5669));
				if ((NU)(i_415419) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				m_415348 = (*n).kindU.S6.Sons->data[i_415419];
				nimln(66, "semmacrosanity.nim");
				nimln(66, "semmacrosanity.nim");
				LOC50 = 0;
				LOC50 = elemtype_222559(x);
				annotatetype_415194(m_415348, LOC50);
				nimln(1460, "system.nim");
				res_415423 = addInt(res_415423, 1);
			} LA49: ;
		}
		goto LA44;
		LA46: ;
		{
			nimln(68, "semmacrosanity.nim");
			globalerror_164565((*n).Info, ((NimStringDesc*) &TMP5683));
		}
		LA44: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 19):
	{
		nimln(70, "semmacrosanity.nim");
		{
			nimln(70, "semmacrosanity.nim");
			if (!((IL64(1030792151040) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA55;
			nimln(71, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA53;
		LA55: ;
		{
			nimln(73, "semmacrosanity.nim");
			globalerror_164565((*n).Info, ((NimStringDesc*) &TMP5684));
		}
		LA53: ;
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		nimln(75, "semmacrosanity.nim");
		{
			nimln(75, "semmacrosanity.nim");
			if (!((IL64(35182224621574) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA61;
			nimln(76, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA59;
		LA61: ;
		{
			nimln(78, "semmacrosanity.nim");
			globalerror_164565((*n).Info, ((NimStringDesc*) &TMP5685));
		}
		LA59: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		nimln(80, "semmacrosanity.nim");
		{
			nimln(80, "semmacrosanity.nim");
			if (!((805306368 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA67;
			nimln(81, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA65;
		LA67: ;
		{
			nimln(83, "semmacrosanity.nim");
			globalerror_164565((*n).Info, ((NimStringDesc*) &TMP5686));
		}
		LA65: ;
	}
	break;
	case ((NU8) 23):
	{
		nimln(85, "semmacrosanity.nim");
		{
			nimln(85, "semmacrosanity.nim");
			if (!((IL64(1125900835880960) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA73;
			nimln(86, "semmacrosanity.nim");
			asgnRefNoCycle((void**) &(*n).Typ, t);
		}
		goto LA71;
		LA73: ;
		{
			nimln(88, "semmacrosanity.nim");
			globalerror_164565((*n).Info, ((NimStringDesc*) &TMP5687));
		}
		LA71: ;
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
}
N_NOINLINE(void, semmacrosanityInit)(void) {
	nimfr("semmacrosanity", "semmacrosanity.nim")
	popFrame();
}

N_NOINLINE(void, semmacrosanityDatInit)(void) {
}

