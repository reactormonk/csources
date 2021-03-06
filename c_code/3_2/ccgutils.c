/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode186813 tnode186813;
typedef struct ttype186847 ttype186847;
typedef struct tlineinfo162527 tlineinfo162527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym186843 tsym186843;
typedef struct tident166019 tident166019;
typedef struct tnodeseq186807 tnodeseq186807;
typedef struct tinfocpu141453 tinfocpu141453;
typedef struct tidtable186859 tidtable186859;
typedef struct tidpairseq186857 tidpairseq186857;
typedef struct tidpair186855 tidpair186855;
typedef struct tidobj166013 tidobj166013;
typedef struct TNimObject TNimObject;
typedef struct tcell41490 tcell41490;
typedef struct TNimType TNimType;
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
typedef struct TNimNode TNimNode;
typedef struct ttypeseq186845 ttypeseq186845;
typedef struct tloc186827 tloc186827;
typedef struct trope144007 trope144007;
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
struct tinfocpu141453 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu141453 TY141469[14];
struct  tidpair186855  {
tidobj166013* Key;
TNimObject* Val;
};
struct  tidtable186859  {
NI Counter;
tidpairseq186857* Data;
};
typedef tidtable186859 TY464221[62];
typedef ttype186847* TY241045[62];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  trope144007  {
  TNimObject Sup;
trope144007* Left;
trope144007* Right;
NI Length;
NimStringDesc* Data;
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
struct tidpairseq186857 {
  TGenericSeq Sup;
  tidpair186855 data[SEQ_DECL_SIZE];
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
N_NIMCALL(tnode186813*, getpragmastmt_464012)(tnode186813* n, NU8 w);
static N_INLINE(NI, len_187274)(tnode186813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(tnode186813*, HEX5BHEX5D_187711)(tnode186813* n, NI i);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, whichpragma_221161)(tnode186813* n);
N_NIMCALL(NIM_BOOL, stmtscontainpragma_464099)(tnode186813* n, NU8 w);
N_NIMCALL(NI64, hashstring_464123)(NimStringDesc* s);
N_NIMCALL(void, inittypetables_464232)(void);
N_NIMCALL(void, initidtable_187130)(tidtable186859* x);
N_NIMCALL(void, resetcaches_464288)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41490*, usrtocell_44843)(void* usr);
static N_INLINE(void, rtladdzct_46402)(tcell41490* c);
N_NOINLINE(void, addzct_44818)(tcellseq41506* s, tcell41490* c);
N_NIMCALL(ttype186847*, getuniquetype_464401)(ttype186847* key);
N_NIMCALL(void, internalerror_164606)(NimStringDesc* errmsg);
static N_INLINE(ttype186847*, lastson_187203)(ttype186847* n);
static N_INLINE(NI, sonslen_187195)(ttype186847* n);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_195154)(tidtable186859 t, tidobj166013* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NIM_BOOL, samebackendtype_229539)(ttype186847* x, ttype186847* y);
N_NIMCALL(void, idtableput_195147)(tidtable186859* t, tidobj166013* key, TNimObject* val);
N_NIMCALL(TNimObject*, idtableget_195137)(tidtable186859 t, tidobj166013* key);
N_NIMCALL(NIM_BOOL, sametype_227139)(ttype186847* a, ttype186847* b, NU8 flags);
N_NIMCALL(TNimObject*, tablegettype_464611)(tidtable186859 tab, ttype186847* key);
N_NIMCALL(NimStringDesc*, makesinglelinecstring_464672)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, tocchar_162645)(NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, failedassertimpl_80021)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(trope144007*, makellvmstring_464684)(NimStringDesc* s);
static N_INLINE(NI, modInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(void, app_144040)(trope144007** a, trope144007* b);
N_NIMCALL(trope144007*, torope_144058)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static NIM_CONST TY187025 TMP6185 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6186, "sons", 4);
extern NIM_CONST TY141469 cpu_141468;
STRING_LITERAL(TMP6189, "GetUniqueType", 13);
STRING_LITERAL(TMP6191, "\"", 1);
STRING_LITERAL(TMP6192, "len(a) == L string modified while iterating over it", 51);
STRING_LITERAL(TMP6193, "c\"", 2);
STRING_LITERAL(TMP6197, "\\00\"", 4);
extern TFrame* frameptr_13238;
extern NU8 targetcpu_141573;
TY464221 gtypetable_464224;
TY241045 gcanonicaltypes_464228;
extern tgcheap43416 gch_43444;
extern TNimType NTI186847; /* TType */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

static N_INLINE(NI, len_187274)(tnode186813* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(958, "ast.nim");
	{
		nimln(958, "ast.nim");
		if (((TMP6185[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6186));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(958, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(959, "ast.nim");
		nimln(959, "ast.nim");
		if (((TMP6185[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6186));
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

static N_INLINE(tnode186813*, HEX5BHEX5D_187711)(tnode186813* n, NI i) {
	tnode186813* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(972, "ast.nim");
	if (((TMP6185[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6186));
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

N_NIMCALL(tnode186813*, getpragmastmt_464012)(tnode186813* n, NU8 w) {
	tnode186813* result;
	nimfr("getPragmaStmt", "ccgutils.nim")
	result = 0;
	nimln(17, "ccgutils.nim");
	switch ((*n).Kind) {
	case ((NU8) 114):
	{
		NI i_464038;
		NI HEX3Atmp_464087;
		NI LOC2;
		NI res_464089;
		i_464038 = 0;
		HEX3Atmp_464087 = 0;
		nimln(19, "ccgutils.nim");
		nimln(19, "ccgutils.nim");
		nimln(19, "ccgutils.nim");
		LOC2 = 0;
		LOC2 = len_187274(n);
		HEX3Atmp_464087 = subInt(LOC2, 1);
		nimln(1457, "system.nim");
		res_464089 = 0;
		nimln(1458, "system.nim");
		while (1) {
			tnode186813* LOC4;
			nimln(1458, "system.nim");
			if (!(res_464089 <= HEX3Atmp_464087)) goto LA3;
			nimln(1457, "system.nim");
			i_464038 = res_464089;
			nimln(20, "ccgutils.nim");
			nimln(20, "ccgutils.nim");
			LOC4 = 0;
			LOC4 = HEX5BHEX5D_187711(n, i_464038);
			result = getpragmastmt_464012(LOC4, w);
			nimln(21, "ccgutils.nim");
			{
				nimln(21, "ccgutils.nim");
				nimln(21, "ccgutils.nim");
				if (!!((result == NIM_NIL))) goto LA7;
				nimln(21, "ccgutils.nim");
				goto LA3;
			}
			LA7: ;
			nimln(1460, "system.nim");
			res_464089 = addInt(res_464089, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 90):
	{
		NI i_464077;
		NI HEX3Atmp_464091;
		NI LOC10;
		NI res_464093;
		i_464077 = 0;
		HEX3Atmp_464091 = 0;
		nimln(23, "ccgutils.nim");
		nimln(23, "ccgutils.nim");
		nimln(23, "ccgutils.nim");
		LOC10 = 0;
		LOC10 = len_187274(n);
		HEX3Atmp_464091 = subInt(LOC10, 1);
		nimln(1457, "system.nim");
		res_464093 = 0;
		nimln(1458, "system.nim");
		while (1) {
			nimln(1458, "system.nim");
			if (!(res_464093 <= HEX3Atmp_464091)) goto LA11;
			nimln(1457, "system.nim");
			i_464077 = res_464093;
			nimln(24, "ccgutils.nim");
			{
				tnode186813* LOC14;
				NU8 LOC15;
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				LOC14 = 0;
				LOC14 = HEX5BHEX5D_187711(n, i_464077);
				LOC15 = 0;
				LOC15 = whichpragma_221161(LOC14);
				if (!(LOC15 == w)) goto LA16;
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				result = HEX5BHEX5D_187711(n, i_464077);
				goto BeforeRet;
			}
			LA16: ;
			nimln(1460, "system.nim");
			res_464093 = addInt(res_464093, 1);
		} LA11: ;
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

N_NIMCALL(NIM_BOOL, stmtscontainpragma_464099)(tnode186813* n, NU8 w) {
	NIM_BOOL result;
	tnode186813* LOC1;
	nimfr("stmtsContainPragma", "ccgutils.nim")
	result = 0;
	nimln(28, "ccgutils.nim");
	nimln(28, "ccgutils.nim");
	nimln(28, "ccgutils.nim");
	nimln(28, "ccgutils.nim");
	LOC1 = 0;
	LOC1 = getpragmastmt_464012(n, w);
	result = !((LOC1 == NIM_NIL));
	popFrame();
	return result;
}

N_NIMCALL(NI64, hashstring_464123)(NimStringDesc* s) {
	NI64 result;
	nimfr("hashString", "ccgutils.nim")
	result = 0;
	nimln(32, "ccgutils.nim");
	{
		NI64 b;
		NI i_464140;
		NI HEX3Atmp_464208;
		NI TMP6187;
		NI res_464210;
		nimln(32, "ccgutils.nim");
		if (targetcpu_141573 < 1 || targetcpu_141573 > 14) raiseIndexError();
		if (!(cpu_141468[(targetcpu_141573)- 1].Field4 == 64)) goto LA3;
		nimln(35, "ccgutils.nim");
		b = 0;
		i_464140 = 0;
		HEX3Atmp_464208 = 0;
		nimln(36, "ccgutils.nim");
		nimln(36, "ccgutils.nim");
		nimln(36, "ccgutils.nim");
		TMP6187 = subInt(s->Sup.len, 1);
		HEX3Atmp_464208 = (NI64)(TMP6187);
		nimln(1450, "system.nim");
		res_464210 = 0;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_464210 <= HEX3Atmp_464208)) goto LA5;
			nimln(1450, "system.nim");
			i_464140 = res_464210;
			nimln(37, "ccgutils.nim");
			nimln(37, "ccgutils.nim");
			nimln(37, "ccgutils.nim");
			if ((NU)(i_464140) > (NU)(s->Sup.len)) raiseIndexError();
			b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i_464140]))))));
			nimln(38, "ccgutils.nim");
			nimln(38, "ccgutils.nim");
			nimln(38, "ccgutils.nim");
			b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(10))));
			nimln(39, "ccgutils.nim");
			nimln(39, "ccgutils.nim");
			nimln(39, "ccgutils.nim");
			b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(6)));
			nimln(1453, "system.nim");
			res_464210 = addInt(res_464210, 1);
		} LA5: ;
		nimln(40, "ccgutils.nim");
		nimln(40, "ccgutils.nim");
		nimln(40, "ccgutils.nim");
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(3))));
		nimln(41, "ccgutils.nim");
		nimln(41, "ccgutils.nim");
		nimln(41, "ccgutils.nim");
		b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(11)));
		nimln(42, "ccgutils.nim");
		nimln(42, "ccgutils.nim");
		nimln(42, "ccgutils.nim");
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(15))));
		nimln(43, "ccgutils.nim");
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		NI32 a;
		NI i_464162;
		NI HEX3Atmp_464213;
		NI TMP6188;
		NI res_464215;
		nimln(45, "ccgutils.nim");
		a = ((NI32) 0);
		i_464162 = 0;
		HEX3Atmp_464213 = 0;
		nimln(46, "ccgutils.nim");
		nimln(46, "ccgutils.nim");
		nimln(46, "ccgutils.nim");
		TMP6188 = subInt(s->Sup.len, 1);
		HEX3Atmp_464213 = (NI64)(TMP6188);
		nimln(1450, "system.nim");
		res_464215 = 0;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_464215 <= HEX3Atmp_464213)) goto LA7;
			nimln(1450, "system.nim");
			i_464162 = res_464215;
			nimln(47, "ccgutils.nim");
			nimln(47, "ccgutils.nim");
			nimln(47, "ccgutils.nim");
			if ((NU)(i_464162) > (NU)(s->Sup.len)) raiseIndexError();
			a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_464162]))))));
			nimln(48, "ccgutils.nim");
			nimln(48, "ccgutils.nim");
			nimln(48, "ccgutils.nim");
			a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
			nimln(49, "ccgutils.nim");
			nimln(49, "ccgutils.nim");
			nimln(49, "ccgutils.nim");
			a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
			nimln(1453, "system.nim");
			res_464215 = addInt(res_464215, 1);
		} LA7: ;
		nimln(50, "ccgutils.nim");
		nimln(50, "ccgutils.nim");
		nimln(50, "ccgutils.nim");
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 3)))));
		nimln(51, "ccgutils.nim");
		nimln(51, "ccgutils.nim");
		nimln(51, "ccgutils.nim");
		a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 11))));
		nimln(52, "ccgutils.nim");
		nimln(52, "ccgutils.nim");
		nimln(52, "ccgutils.nim");
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 15)))));
		nimln(53, "ccgutils.nim");
		result = ((NI64) (a));
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, inittypetables_464232)(void) {
	NU8 i_464278;
	NU8 res_464283;
	nimfr("initTypeTables", "ccgutils.nim")
	i_464278 = 0;
	nimln(1450, "system.nim");
	res_464283 = ((NU8) 0);
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_464283 <= ((NU8) 61))) goto LA1;
		nimln(1450, "system.nim");
		i_464278 = res_464283;
		nimln(60, "ccgutils.nim");
		initidtable_187130(&gtypetable_464224[(i_464278)- 0]);
		nimln(1453, "system.nim");
		res_464283 = addInt(res_464283, 1);
	} LA1: ;
	popFrame();
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

N_NIMCALL(void, resetcaches_464288)(void) {
	NU8 i_464300;
	NU8 res_464302;
	nimfr("resetCaches", "ccgutils.nim")
	nimln(64, "ccgutils.nim");
	inittypetables_464232();
	i_464300 = 0;
	nimln(1457, "system.nim");
	res_464302 = ((NU8) 0);
	nimln(1458, "system.nim");
	while (1) {
		nimln(1458, "system.nim");
		if (!(res_464302 <= ((NU8) 61))) goto LA1;
		nimln(1457, "system.nim");
		i_464300 = res_464302;
		nimln(66, "ccgutils.nim");
		asgnRefNoCycle((void**) &gcanonicaltypes_464228[(i_464300)- 0], NIM_NIL);
		nimln(1460, "system.nim");
		res_464302 = addInt(res_464302, 1);
	} LA1: ;
	popFrame();
}

static N_INLINE(NI, sonslen_187195)(ttype186847* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1287, "ast.nim");
	{
		nimln(1287, "ast.nim");
		if (!(*n).Sons == 0) goto LA3;
		nimln(1287, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1288, "ast.nim");
		nimln(1288, "ast.nim");
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(ttype186847*, lastson_187203)(ttype186847* n) {
	ttype186847* result;
	NI LOC1;
	NI TMP6190;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1424, "ast.nim");
	nimln(1424, "ast.nim");
	nimln(1424, "ast.nim");
	LOC1 = 0;
	LOC1 = sonslen_187195(n);
	TMP6190 = subInt(LOC1, 1);
	if ((NU)((NI64)(TMP6190)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI64)(TMP6190)];
	popFrame();
	return result;
}

N_NIMCALL(ttype186847*, getuniquetype_464401)(ttype186847* key) {
	ttype186847* result;
	NU8 k;
	nimfr("getUniqueType", "ccgutils.nim")
	result = 0;
	nimln(75, "ccgutils.nim");
	{
		nimln(75, "ccgutils.nim");
		if (!(key == NIM_NIL)) goto LA3;
		nimln(75, "ccgutils.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(76, "ccgutils.nim");
	k = (*key).Kind;
	nimln(77, "ccgutils.nim");
	switch (k) {
	case ((NU8) 1):
	case ((NU8) 2):
	case ((NU8) 31) ... ((NU8) 44):
	{
		nimln(82, "ccgutils.nim");
		result = key;
	}
	break;
	case ((NU8) 3):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 7):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 29):
	case ((NU8) 0):
	case ((NU8) 45):
	{
		nimln(85, "ccgutils.nim");
		result = gcanonicaltypes_464228[(k)- 0];
		nimln(86, "ccgutils.nim");
		{
			nimln(86, "ccgutils.nim");
			if (!(result == NIM_NIL)) goto LA9;
			nimln(87, "ccgutils.nim");
			asgnRefNoCycle((void**) &gcanonicaltypes_464228[(k)- 0], key);
			nimln(88, "ccgutils.nim");
			result = key;
		}
		LA9: ;
	}
	break;
	case ((NU8) 8):
	case ((NU8) 51):
	case ((NU8) 12):
	case ((NU8) 60):
	case ((NU8) 61):
	case ((NU8) 54):
	case ((NU8) 52):
	case ((NU8) 53):
	case ((NU8) 55):
	case ((NU8) 56):
	case ((NU8) 57):
	case ((NU8) 58):
	{
		nimln(91, "ccgutils.nim");
		internalerror_164606(((NimStringDesc*) &TMP6189));
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	case ((NU8) 15):
	case ((NU8) 47):
	case ((NU8) 46):
	case ((NU8) 49):
	case ((NU8) 59):
	{
		ttype186847* LOC13;
		nimln(94, "ccgutils.nim");
		nimln(94, "ccgutils.nim");
		LOC13 = 0;
		LOC13 = lastson_187203(key);
		result = getuniquetype_464401(LOC13);
	}
	break;
	case ((NU8) 4):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 27):
	case ((NU8) 16):
	case ((NU8) 19):
	case ((NU8) 20):
	case ((NU8) 18):
	case ((NU8) 21):
	case ((NU8) 22):
	case ((NU8) 24):
	case ((NU8) 30):
	case ((NU8) 48):
	case ((NU8) 50):
	case ((NU8) 23):
	{
		NI h_464452;
		NI HEX3Atmp_464594;
		NI res_464596;
		nimln(105, "ccgutils.nim");
		{
			NIM_BOOL LOC17;
			nimln(105, "ccgutils.nim");
			LOC17 = 0;
			LOC17 = idtablehasobjectaskey_195154(gtypetable_464224[(k)- 0], &key->Sup);
			if (!LOC17) goto LA18;
			nimln(105, "ccgutils.nim");
			nimln(105, "ccgutils.nim");
			result = key;
			goto BeforeRet;
		}
		LA18: ;
		h_464452 = 0;
		HEX3Atmp_464594 = 0;
		nimln(106, "ccgutils.nim");
		nimln(106, "ccgutils.nim");
		HEX3Atmp_464594 = (gtypetable_464224[(k)- 0].Data->Sup.len-1);
		nimln(1450, "system.nim");
		res_464596 = 0;
		nimln(1451, "system.nim");
		while (1) {
			ttype186847* t;
			nimln(1451, "system.nim");
			if (!(res_464596 <= HEX3Atmp_464594)) goto LA20;
			nimln(1450, "system.nim");
			h_464452 = res_464596;
			nimln(107, "ccgutils.nim");
			if ((NU)(h_464452) >= (NU)(gtypetable_464224[(k)- 0].Data->Sup.len)) raiseIndexError();
			if (gtypetable_464224[(k)- 0].Data->data[h_464452].Key) chckObj((*gtypetable_464224[(k)- 0].Data->data[h_464452].Key).Sup.m_type, (&NTI186847));
			t = ((ttype186847*) (gtypetable_464224[(k)- 0].Data->data[h_464452].Key));
			nimln(108, "ccgutils.nim");
			{
				NIM_BOOL LOC23;
				nimln(108, "ccgutils.nim");
				LOC23 = 0;
				nimln(108, "ccgutils.nim");
				nimln(108, "ccgutils.nim");
				LOC23 = !((t == NIM_NIL));
				if (!(LOC23)) goto LA24;
				nimln(108, "ccgutils.nim");
				LOC23 = samebackendtype_229539(t, key);
				LA24: ;
				if (!LOC23) goto LA25;
				nimln(109, "ccgutils.nim");
				nimln(109, "ccgutils.nim");
				result = t;
				goto BeforeRet;
			}
			LA25: ;
			nimln(1453, "system.nim");
			res_464596 = addInt(res_464596, 1);
		} LA20: ;
		nimln(110, "ccgutils.nim");
		idtableput_195147(&gtypetable_464224[(k)- 0], &key->Sup, &key->Sup.Sup);
		nimln(111, "ccgutils.nim");
		result = key;
	}
	break;
	case ((NU8) 17):
	{
		nimln(113, "ccgutils.nim");
		{
			TNimObject* LOC32;
			nimln(113, "ccgutils.nim");
			nimln(113, "ccgutils.nim");
			if (!!((((*key).Flags &(1<<((((NU8) 8))&31)))!=0))) goto LA30;
			nimln(115, "ccgutils.nim");
			nimln(115, "ccgutils.nim");
			LOC32 = 0;
			LOC32 = idtableget_195137(gtypetable_464224[(k)- 0], &key->Sup);
			if (LOC32) chckObj((*LOC32).m_type, (&NTI186847));
			result = ((ttype186847*) (LOC32));
			nimln(116, "ccgutils.nim");
			{
				nimln(116, "ccgutils.nim");
				if (!(result == NIM_NIL)) goto LA35;
				nimln(117, "ccgutils.nim");
				idtableput_195147(&gtypetable_464224[(k)- 0], &key->Sup, &key->Sup.Sup);
				nimln(118, "ccgutils.nim");
				result = key;
			}
			LA35: ;
		}
		goto LA28;
		LA30: ;
		{
			NI h_464515;
			NI HEX3Atmp_464598;
			NI res_464600;
			nimln(121, "ccgutils.nim");
			{
				NIM_BOOL LOC40;
				nimln(121, "ccgutils.nim");
				LOC40 = 0;
				LOC40 = idtablehasobjectaskey_195154(gtypetable_464224[(k)- 0], &key->Sup);
				if (!LOC40) goto LA41;
				nimln(121, "ccgutils.nim");
				nimln(121, "ccgutils.nim");
				result = key;
				goto BeforeRet;
			}
			LA41: ;
			h_464515 = 0;
			HEX3Atmp_464598 = 0;
			nimln(122, "ccgutils.nim");
			nimln(122, "ccgutils.nim");
			HEX3Atmp_464598 = (gtypetable_464224[(k)- 0].Data->Sup.len-1);
			nimln(1450, "system.nim");
			res_464600 = 0;
			nimln(1451, "system.nim");
			while (1) {
				ttype186847* t;
				nimln(1451, "system.nim");
				if (!(res_464600 <= HEX3Atmp_464598)) goto LA43;
				nimln(1450, "system.nim");
				h_464515 = res_464600;
				nimln(123, "ccgutils.nim");
				if ((NU)(h_464515) >= (NU)(gtypetable_464224[(k)- 0].Data->Sup.len)) raiseIndexError();
				if (gtypetable_464224[(k)- 0].Data->data[h_464515].Key) chckObj((*gtypetable_464224[(k)- 0].Data->data[h_464515].Key).Sup.m_type, (&NTI186847));
				t = ((ttype186847*) (gtypetable_464224[(k)- 0].Data->data[h_464515].Key));
				nimln(124, "ccgutils.nim");
				{
					NIM_BOOL LOC46;
					nimln(124, "ccgutils.nim");
					LOC46 = 0;
					nimln(124, "ccgutils.nim");
					nimln(124, "ccgutils.nim");
					LOC46 = !((t == NIM_NIL));
					if (!(LOC46)) goto LA47;
					nimln(124, "ccgutils.nim");
					LOC46 = sametype_227139(t, key, 0);
					LA47: ;
					if (!LOC46) goto LA48;
					nimln(125, "ccgutils.nim");
					nimln(125, "ccgutils.nim");
					result = t;
					goto BeforeRet;
				}
				LA48: ;
				nimln(1453, "system.nim");
				res_464600 = addInt(res_464600, 1);
			} LA43: ;
			nimln(126, "ccgutils.nim");
			idtableput_195147(&gtypetable_464224[(k)- 0], &key->Sup, &key->Sup.Sup);
			nimln(127, "ccgutils.nim");
			result = key;
		}
		LA28: ;
	}
	break;
	case ((NU8) 14):
	{
		TNimObject* LOC51;
		nimln(129, "ccgutils.nim");
		nimln(129, "ccgutils.nim");
		LOC51 = 0;
		LOC51 = idtableget_195137(gtypetable_464224[(k)- 0], &key->Sup);
		if (LOC51) chckObj((*LOC51).m_type, (&NTI186847));
		result = ((ttype186847*) (LOC51));
		nimln(130, "ccgutils.nim");
		{
			nimln(130, "ccgutils.nim");
			if (!(result == NIM_NIL)) goto LA54;
			nimln(131, "ccgutils.nim");
			idtableput_195147(&gtypetable_464224[(k)- 0], &key->Sup, &key->Sup.Sup);
			nimln(132, "ccgutils.nim");
			result = key;
		}
		LA54: ;
	}
	break;
	case ((NU8) 25):
	{
		nimln(134, "ccgutils.nim");
		{
			nimln(134, "ccgutils.nim");
			nimln(134, "ccgutils.nim");
			if (!!(((*key).Callconv == ((NU8) 8)))) goto LA59;
			nimln(135, "ccgutils.nim");
			result = key;
		}
		goto LA57;
		LA59: ;
		{
			NI h_464574;
			NI HEX3Atmp_464602;
			NI res_464604;
			nimln(138, "ccgutils.nim");
			{
				NIM_BOOL LOC64;
				nimln(138, "ccgutils.nim");
				LOC64 = 0;
				LOC64 = idtablehasobjectaskey_195154(gtypetable_464224[(k)- 0], &key->Sup);
				if (!LOC64) goto LA65;
				nimln(138, "ccgutils.nim");
				nimln(138, "ccgutils.nim");
				result = key;
				goto BeforeRet;
			}
			LA65: ;
			h_464574 = 0;
			HEX3Atmp_464602 = 0;
			nimln(139, "ccgutils.nim");
			nimln(139, "ccgutils.nim");
			HEX3Atmp_464602 = (gtypetable_464224[(k)- 0].Data->Sup.len-1);
			nimln(1450, "system.nim");
			res_464604 = 0;
			nimln(1451, "system.nim");
			while (1) {
				ttype186847* t;
				nimln(1451, "system.nim");
				if (!(res_464604 <= HEX3Atmp_464602)) goto LA67;
				nimln(1450, "system.nim");
				h_464574 = res_464604;
				nimln(140, "ccgutils.nim");
				if ((NU)(h_464574) >= (NU)(gtypetable_464224[(k)- 0].Data->Sup.len)) raiseIndexError();
				if (gtypetable_464224[(k)- 0].Data->data[h_464574].Key) chckObj((*gtypetable_464224[(k)- 0].Data->data[h_464574].Key).Sup.m_type, (&NTI186847));
				t = ((ttype186847*) (gtypetable_464224[(k)- 0].Data->data[h_464574].Key));
				nimln(141, "ccgutils.nim");
				{
					NIM_BOOL LOC70;
					nimln(141, "ccgutils.nim");
					LOC70 = 0;
					nimln(141, "ccgutils.nim");
					nimln(141, "ccgutils.nim");
					LOC70 = !((t == NIM_NIL));
					if (!(LOC70)) goto LA71;
					nimln(141, "ccgutils.nim");
					LOC70 = samebackendtype_229539(t, key);
					LA71: ;
					if (!LOC70) goto LA72;
					nimln(142, "ccgutils.nim");
					nimln(142, "ccgutils.nim");
					result = t;
					goto BeforeRet;
				}
				LA72: ;
				nimln(1453, "system.nim");
				res_464604 = addInt(res_464604, 1);
			} LA67: ;
			nimln(143, "ccgutils.nim");
			idtableput_195147(&gtypetable_464224[(k)- 0], &key->Sup, &key->Sup.Sup);
			nimln(144, "ccgutils.nim");
			result = key;
		}
		LA57: ;
	}
	break;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(TNimObject*, tablegettype_464611)(tidtable186859 tab, ttype186847* key) {
	TNimObject* result;
	nimfr("tableGetType", "ccgutils.nim")
	result = 0;
	nimln(148, "ccgutils.nim");
	result = idtableget_195137(tab, &key->Sup);
	nimln(149, "ccgutils.nim");
	{
		NIM_BOOL LOC3;
		NI h_464646;
		NI HEX3Atmp_464665;
		NI res_464667;
		nimln(149, "ccgutils.nim");
		LOC3 = 0;
		nimln(149, "ccgutils.nim");
		LOC3 = (result == NIM_NIL);
		if (!(LOC3)) goto LA4;
		nimln(149, "ccgutils.nim");
		LOC3 = (0 < tab.Counter);
		LA4: ;
		if (!LOC3) goto LA5;
		h_464646 = 0;
		HEX3Atmp_464665 = 0;
		nimln(152, "ccgutils.nim");
		nimln(152, "ccgutils.nim");
		HEX3Atmp_464665 = (tab.Data->Sup.len-1);
		nimln(1450, "system.nim");
		res_464667 = 0;
		nimln(1451, "system.nim");
		while (1) {
			ttype186847* t;
			nimln(1451, "system.nim");
			if (!(res_464667 <= HEX3Atmp_464665)) goto LA7;
			nimln(1450, "system.nim");
			h_464646 = res_464667;
			nimln(153, "ccgutils.nim");
			if ((NU)(h_464646) >= (NU)(tab.Data->Sup.len)) raiseIndexError();
			if (tab.Data->data[h_464646].Key) chckObj((*tab.Data->data[h_464646].Key).Sup.m_type, (&NTI186847));
			t = ((ttype186847*) (tab.Data->data[h_464646].Key));
			nimln(154, "ccgutils.nim");
			{
				nimln(154, "ccgutils.nim");
				nimln(154, "ccgutils.nim");
				if (!!((t == NIM_NIL))) goto LA10;
				nimln(155, "ccgutils.nim");
				{
					NIM_BOOL LOC14;
					nimln(155, "ccgutils.nim");
					LOC14 = 0;
					LOC14 = sametype_227139(t, key, 0);
					if (!LOC14) goto LA15;
					nimln(156, "ccgutils.nim");
					nimln(156, "ccgutils.nim");
					if ((NU)(h_464646) >= (NU)(tab.Data->Sup.len)) raiseIndexError();
					result = tab.Data->data[h_464646].Val;
					goto BeforeRet;
				}
				LA15: ;
			}
			LA10: ;
			nimln(1453, "system.nim");
			res_464667 = addInt(res_464667, 1);
		} LA7: ;
	}
	LA5: ;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_464672)(NimStringDesc* s) {
	NimStringDesc* result;
	NIM_CHAR c_464676;
	NI i_464678;
	NI l_464680;
	nimfr("makeSingleLineCString", "ccgutils.nim")
	result = 0;
	nimln(159, "ccgutils.nim");
	result = copyString(((NimStringDesc*) &TMP6191));
	c_464676 = 0;
	nimln(2804, "system.nim");
	i_464678 = 0;
	nimln(2805, "system.nim");
	nimln(2805, "system.nim");
	l_464680 = s->Sup.len;
	nimln(2806, "system.nim");
	while (1) {
		NimStringDesc* LOC2;
		nimln(2806, "system.nim");
		if (!(i_464678 < l_464680)) goto LA1;
		nimln(2807, "system.nim");
		if ((NU)(i_464678) > (NU)(s->Sup.len)) raiseIndexError();
		c_464676 = s->data[i_464678];
		nimln(161, "ccgutils.nim");
		nimln(161, "ccgutils.nim");
		LOC2 = 0;
		LOC2 = tocchar_162645(c_464676);
		result = resizeString(result, LOC2->Sup.len + 0);
appendString(result, LOC2);
		nimln(2808, "system.nim");
		i_464678 = addInt(i_464678, 1);
		nimln(2809, "system.nim");
		{
			nimln(2809, "system.nim");
			nimln(2809, "system.nim");
			nimln(2809, "system.nim");
			if (!!((s->Sup.len == l_464680))) goto LA5;
			nimln(2809, "system.nim");
			failedassertimpl_80021(((NimStringDesc*) &TMP6192));
		}
		LA5: ;
	} LA1: ;
	nimln(162, "ccgutils.nim");
	result = addChar(result, 34);
	popFrame();
	return result;
}

static N_INLINE(NI, modInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	result = (NI64)(a % b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(trope144007*, makellvmstring_464684)(NimStringDesc* s) {
	trope144007* result;
	NimStringDesc* res;
	NI i_464702;
	NI HEX3Atmp_464714;
	NI TMP6194;
	NI res_464716;
	trope144007* LOC10;
	nimfr("makeLLVMString", "ccgutils.nim")
	result = 0;
	nimln(166, "ccgutils.nim");
	result = NIM_NIL;
	nimln(167, "ccgutils.nim");
	res = copyString(((NimStringDesc*) &TMP6193));
	i_464702 = 0;
	HEX3Atmp_464714 = 0;
	nimln(168, "ccgutils.nim");
	nimln(168, "ccgutils.nim");
	nimln(168, "ccgutils.nim");
	TMP6194 = subInt(s->Sup.len, 1);
	HEX3Atmp_464714 = (NI64)(TMP6194);
	nimln(1450, "system.nim");
	res_464716 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_464716 <= HEX3Atmp_464714)) goto LA1;
		nimln(1450, "system.nim");
		i_464702 = res_464716;
		nimln(169, "ccgutils.nim");
		{
			NI TMP6195;
			NI TMP6196;
			trope144007* LOC6;
			nimln(169, "ccgutils.nim");
			nimln(169, "ccgutils.nim");
			nimln(169, "ccgutils.nim");
			TMP6195 = addInt(i_464702, 1);
			TMP6196 = modInt((NI64)(TMP6195), 64);
			if (!(((NI) ((NI64)(TMP6196))) == 0)) goto LA4;
			nimln(170, "ccgutils.nim");
			nimln(170, "ccgutils.nim");
			LOC6 = 0;
			LOC6 = torope_144058(res);
			app_144040(&result, LOC6);
			nimln(171, "ccgutils.nim");
			res = setLengthStr(res, 0);
		}
		LA4: ;
		nimln(172, "ccgutils.nim");
		if ((NU)(i_464702) > (NU)(s->Sup.len)) raiseIndexError();
		switch (((NU8)(s->data[i_464702]))) {
		case 0 ... 31:
		case 128 ... 255:
		case 34:
		case 92:
		{
			NimStringDesc* LOC8;
			nimln(174, "ccgutils.nim");
			res = addChar(res, 92);
			nimln(175, "ccgutils.nim");
			nimln(175, "ccgutils.nim");
			nimln(175, "ccgutils.nim");
			if ((NU)(i_464702) > (NU)(s->Sup.len)) raiseIndexError();
			LOC8 = 0;
			LOC8 = nsuToHex(((NI64) (((NU8)(s->data[i_464702])))), 2);
			res = resizeString(res, LOC8->Sup.len + 0);
appendString(res, LOC8);
		}
		break;
		default:
		{
			nimln(176, "ccgutils.nim");
			if ((NU)(i_464702) > (NU)(s->Sup.len)) raiseIndexError();
			res = addChar(res, s->data[i_464702]);
		}
		break;
		}
		nimln(1453, "system.nim");
		res_464716 = addInt(res_464716, 1);
	} LA1: ;
	nimln(177, "ccgutils.nim");
	res = resizeString(res, 4);
appendString(res, ((NimStringDesc*) &TMP6197));
	nimln(178, "ccgutils.nim");
	nimln(178, "ccgutils.nim");
	LOC10 = 0;
	LOC10 = torope_144058(res);
	app_144040(&result, LOC10);
	popFrame();
	return result;
}
N_NOINLINE(void, ccgutilsInit)(void) {
	nimfr("ccgutils", "ccgutils.nim")
	nimln(180, "ccgutils.nim");
	inittypetables_464232();
	popFrame();
}

N_NOINLINE(void, ccgutilsDatInit)(void) {
}

