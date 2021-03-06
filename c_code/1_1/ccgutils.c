/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode187813 tnode187813;
typedef struct ttype187847 ttype187847;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym187843 tsym187843;
typedef struct tident167019 tident167019;
typedef struct tnodeseq187807 tnodeseq187807;
typedef struct tinfocpu142453 tinfocpu142453;
typedef struct tidtable187859 tidtable187859;
typedef struct tidpairseq187857 tidpairseq187857;
typedef struct tidpair187855 tidpair187855;
typedef struct tidobj167013 tidobj167013;
typedef struct TNimObject TNimObject;
typedef struct tcell41088 tcell41088;
typedef struct TNimType TNimType;
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
typedef struct TNimNode TNimNode;
typedef struct ttypeseq187845 ttypeseq187845;
typedef struct tloc187827 tloc187827;
typedef struct trope145007 trope145007;
typedef struct tscope187837 tscope187837;
typedef struct TY187943 TY187943;
typedef struct tinstantiation187833 tinstantiation187833;
typedef struct tstrtable187817 tstrtable187817;
typedef struct tsymseq187815 tsymseq187815;
typedef struct tlib187831 tlib187831;
typedef struct tbasechunk22636 tbasechunk22636;
typedef struct tfreecell22628 tfreecell22628;
typedef struct TY187932 TY187932;
typedef struct tlistentry120017 tlistentry120017;
struct  tlineinfo163527  {
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
struct tinfocpu142453 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu142453 TY142469[14];
struct  tidpair187855  {
tidobj167013* Key;
TNimObject* Val;
};
struct  tidtable187859  {
NI Counter;
tidpairseq187857* Data;
};
typedef tidtable187859 TY465221[62];
typedef ttype187847* TY242045[62];
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
struct  tloc187827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype187847* T;
trope145007* R;
trope145007* Heaproot;
NI A;
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
struct  tident167019  {
  tidobj167013 Sup;
NimStringDesc* S;
tident167019* Next;
NI H;
};
typedef NI TY22618[16];
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
struct  trope145007  {
  TNimObject Sup;
trope145007* Left;
trope145007* Right;
NI Length;
NimStringDesc* Data;
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
struct  tfreecell22628  {
tfreecell22628* Next;
NI Zerofield;
};
struct tnodeseq187807 {
  TGenericSeq Sup;
  tnode187813* data[SEQ_DECL_SIZE];
};
struct tidpairseq187857 {
  TGenericSeq Sup;
  tidpair187855 data[SEQ_DECL_SIZE];
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
struct TY187932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode187813*, getpragmastmt_465012)(tnode187813* n, NU8 w);
static N_INLINE(NI, len_188274)(tnode187813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(tnode187813*, HEX5BHEX5D_188711)(tnode187813* n, NI i);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, whichpragma_222161)(tnode187813* n);
N_NIMCALL(NIM_BOOL, stmtscontainpragma_465099)(tnode187813* n, NU8 w);
N_NIMCALL(NI64, hashstring_465123)(NimStringDesc* s);
N_NIMCALL(void, inittypetables_465232)(void);
N_NIMCALL(void, initidtable_188130)(tidtable187859* x);
N_NIMCALL(void, resetcaches_465288)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41088*, usrtocell_44443)(void* usr);
static N_INLINE(void, rtladdzct_46002)(tcell41088* c);
N_NOINLINE(void, addzct_44418)(tcellseq41104* s, tcell41088* c);
N_NIMCALL(ttype187847*, getuniquetype_465401)(ttype187847* key);
N_NIMCALL(void, internalerror_165606)(NimStringDesc* errmsg);
static N_INLINE(ttype187847*, lastson_188203)(ttype187847* n);
static N_INLINE(NI, sonslen_188195)(ttype187847* n);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_196154)(tidtable187859 t, tidobj167013* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(NIM_BOOL, samebackendtype_230539)(ttype187847* x, ttype187847* y);
N_NIMCALL(void, idtableput_196147)(tidtable187859* t, tidobj167013* key, TNimObject* val);
N_NIMCALL(TNimObject*, idtableget_196137)(tidtable187859 t, tidobj167013* key);
N_NIMCALL(NIM_BOOL, sametype_228139)(ttype187847* a, ttype187847* b, NU8 flags);
N_NIMCALL(TNimObject*, tablegettype_465611)(tidtable187859 tab, ttype187847* key);
N_NIMCALL(NimStringDesc*, makesinglelinecstring_465672)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, tocchar_163645)(NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, failedassertimpl_81021)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(trope145007*, makellvmstring_465684)(NimStringDesc* s);
static N_INLINE(NI, modInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(void, app_145040)(trope145007** a, trope145007* b);
N_NIMCALL(trope145007*, torope_145058)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static NIM_CONST TY188025 TMP6187 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6188, "sons", 4);
extern NIM_CONST TY142469 cpu_142468;
STRING_LITERAL(TMP6191, "GetUniqueType", 13);
STRING_LITERAL(TMP6193, "\"", 1);
STRING_LITERAL(TMP6194, "len(a) == L string modified while iterating over it", 51);
STRING_LITERAL(TMP6195, "c\"", 2);
STRING_LITERAL(TMP6199, "\\00\"", 4);
extern TFrame* frameptr_13038;
extern NU8 targetcpu_142573;
TY465221 gtypetable_465224;
TY242045 gcanonicaltypes_465228;
extern tgcheap43016 gch_43044;
extern TNimType NTI187847; /* TType */

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
		if (((TMP6187[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6188));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(958, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(959, "ast.nim");
		nimln(959, "ast.nim");
		if (((TMP6187[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6188));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
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

static N_INLINE(tnode187813*, HEX5BHEX5D_188711)(tnode187813* n, NI i) {
	tnode187813* result;
	nimfr("[]", "ast.nim")
	result = 0;
	nimln(972, "ast.nim");
	if (((TMP6187[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6188));
	if ((NU)(i) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
	result = (*n).kindU.S6.Sons->data[i];
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

N_NIMCALL(tnode187813*, getpragmastmt_465012)(tnode187813* n, NU8 w) {
	tnode187813* result;
	nimfr("getPragmaStmt", "ccgutils.nim")
	result = 0;
	nimln(17, "ccgutils.nim");
	switch ((*n).Kind) {
	case ((NU8) 114):
	{
		NI i_465038;
		NI HEX3Atmp_465087;
		NI LOC2;
		NI res_465089;
		i_465038 = 0;
		HEX3Atmp_465087 = 0;
		nimln(19, "ccgutils.nim");
		nimln(19, "ccgutils.nim");
		nimln(19, "ccgutils.nim");
		LOC2 = 0;
		LOC2 = len_188274(n);
		HEX3Atmp_465087 = subInt(LOC2, 1);
		nimln(1457, "system.nim");
		res_465089 = 0;
		nimln(1458, "system.nim");
		while (1) {
			tnode187813* LOC4;
			nimln(1458, "system.nim");
			if (!(res_465089 <= HEX3Atmp_465087)) goto LA3;
			nimln(1457, "system.nim");
			i_465038 = res_465089;
			nimln(20, "ccgutils.nim");
			nimln(20, "ccgutils.nim");
			LOC4 = 0;
			LOC4 = HEX5BHEX5D_188711(n, i_465038);
			result = getpragmastmt_465012(LOC4, w);
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
			res_465089 = addInt(res_465089, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 90):
	{
		NI i_465077;
		NI HEX3Atmp_465091;
		NI LOC10;
		NI res_465093;
		i_465077 = 0;
		HEX3Atmp_465091 = 0;
		nimln(23, "ccgutils.nim");
		nimln(23, "ccgutils.nim");
		nimln(23, "ccgutils.nim");
		LOC10 = 0;
		LOC10 = len_188274(n);
		HEX3Atmp_465091 = subInt(LOC10, 1);
		nimln(1457, "system.nim");
		res_465093 = 0;
		nimln(1458, "system.nim");
		while (1) {
			nimln(1458, "system.nim");
			if (!(res_465093 <= HEX3Atmp_465091)) goto LA11;
			nimln(1457, "system.nim");
			i_465077 = res_465093;
			nimln(24, "ccgutils.nim");
			{
				tnode187813* LOC14;
				NU8 LOC15;
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				LOC14 = 0;
				LOC14 = HEX5BHEX5D_188711(n, i_465077);
				LOC15 = 0;
				LOC15 = whichpragma_222161(LOC14);
				if (!(LOC15 == w)) goto LA16;
				nimln(24, "ccgutils.nim");
				nimln(24, "ccgutils.nim");
				result = HEX5BHEX5D_188711(n, i_465077);
				goto BeforeRet;
			}
			LA16: ;
			nimln(1460, "system.nim");
			res_465093 = addInt(res_465093, 1);
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

N_NIMCALL(NIM_BOOL, stmtscontainpragma_465099)(tnode187813* n, NU8 w) {
	NIM_BOOL result;
	tnode187813* LOC1;
	nimfr("stmtsContainPragma", "ccgutils.nim")
	result = 0;
	nimln(28, "ccgutils.nim");
	nimln(28, "ccgutils.nim");
	nimln(28, "ccgutils.nim");
	nimln(28, "ccgutils.nim");
	LOC1 = 0;
	LOC1 = getpragmastmt_465012(n, w);
	result = !((LOC1 == NIM_NIL));
	popFrame();
	return result;
}

N_NIMCALL(NI64, hashstring_465123)(NimStringDesc* s) {
	NI64 result;
	nimfr("hashString", "ccgutils.nim")
	result = 0;
	nimln(32, "ccgutils.nim");
	{
		NI64 b;
		NI i_465140;
		NI HEX3Atmp_465208;
		NI TMP6189;
		NI res_465210;
		nimln(32, "ccgutils.nim");
		if (targetcpu_142573 < 1 || targetcpu_142573 > 14) raiseIndexError();
		if (!(cpu_142468[(targetcpu_142573)- 1].Field4 == 64)) goto LA3;
		nimln(35, "ccgutils.nim");
		b = 0;
		i_465140 = 0;
		HEX3Atmp_465208 = 0;
		nimln(36, "ccgutils.nim");
		nimln(36, "ccgutils.nim");
		nimln(36, "ccgutils.nim");
		TMP6189 = subInt(s->Sup.len, 1);
		HEX3Atmp_465208 = (NI32)(TMP6189);
		nimln(1450, "system.nim");
		res_465210 = 0;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_465210 <= HEX3Atmp_465208)) goto LA5;
			nimln(1450, "system.nim");
			i_465140 = res_465210;
			nimln(37, "ccgutils.nim");
			nimln(37, "ccgutils.nim");
			nimln(37, "ccgutils.nim");
			if ((NU)(i_465140) > (NU)(s->Sup.len)) raiseIndexError();
			b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i_465140]))))));
			nimln(38, "ccgutils.nim");
			nimln(38, "ccgutils.nim");
			nimln(38, "ccgutils.nim");
			b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(10))));
			nimln(39, "ccgutils.nim");
			nimln(39, "ccgutils.nim");
			nimln(39, "ccgutils.nim");
			b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(6)));
			nimln(1453, "system.nim");
			res_465210 = addInt(res_465210, 1);
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
		NI i_465162;
		NI HEX3Atmp_465213;
		NI TMP6190;
		NI res_465215;
		nimln(45, "ccgutils.nim");
		a = ((NI32) 0);
		i_465162 = 0;
		HEX3Atmp_465213 = 0;
		nimln(46, "ccgutils.nim");
		nimln(46, "ccgutils.nim");
		nimln(46, "ccgutils.nim");
		TMP6190 = subInt(s->Sup.len, 1);
		HEX3Atmp_465213 = (NI32)(TMP6190);
		nimln(1450, "system.nim");
		res_465215 = 0;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_465215 <= HEX3Atmp_465213)) goto LA7;
			nimln(1450, "system.nim");
			i_465162 = res_465215;
			nimln(47, "ccgutils.nim");
			nimln(47, "ccgutils.nim");
			nimln(47, "ccgutils.nim");
			if ((NU)(i_465162) > (NU)(s->Sup.len)) raiseIndexError();
			a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_465162]))))));
			nimln(48, "ccgutils.nim");
			nimln(48, "ccgutils.nim");
			nimln(48, "ccgutils.nim");
			a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
			nimln(49, "ccgutils.nim");
			nimln(49, "ccgutils.nim");
			nimln(49, "ccgutils.nim");
			a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
			nimln(1453, "system.nim");
			res_465215 = addInt(res_465215, 1);
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

N_NIMCALL(void, inittypetables_465232)(void) {
	NU8 i_465278;
	NU8 res_465283;
	nimfr("initTypeTables", "ccgutils.nim")
	i_465278 = 0;
	nimln(1450, "system.nim");
	res_465283 = ((NU8) 0);
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_465283 <= ((NU8) 61))) goto LA1;
		nimln(1450, "system.nim");
		i_465278 = res_465283;
		nimln(60, "ccgutils.nim");
		initidtable_188130(&gtypetable_465224[(i_465278)- 0]);
		nimln(1453, "system.nim");
		res_465283 = addInt(res_465283, 1);
	} LA1: ;
	popFrame();
}

static N_INLINE(tcell41088*, usrtocell_44443)(void* usr) {
	tcell41088* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41088*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41088))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46002)(tcell41088* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44418(&gch_43044.Zct, c);
	popFrame();
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
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
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

N_NIMCALL(void, resetcaches_465288)(void) {
	NU8 i_465300;
	NU8 res_465302;
	nimfr("resetCaches", "ccgutils.nim")
	nimln(64, "ccgutils.nim");
	inittypetables_465232();
	i_465300 = 0;
	nimln(1457, "system.nim");
	res_465302 = ((NU8) 0);
	nimln(1458, "system.nim");
	while (1) {
		nimln(1458, "system.nim");
		if (!(res_465302 <= ((NU8) 61))) goto LA1;
		nimln(1457, "system.nim");
		i_465300 = res_465302;
		nimln(66, "ccgutils.nim");
		asgnRefNoCycle((void**) &gcanonicaltypes_465228[(i_465300)- 0], NIM_NIL);
		nimln(1460, "system.nim");
		res_465302 = addInt(res_465302, 1);
	} LA1: ;
	popFrame();
}

static N_INLINE(NI, sonslen_188195)(ttype187847* n) {
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

static N_INLINE(ttype187847*, lastson_188203)(ttype187847* n) {
	ttype187847* result;
	NI LOC1;
	NI TMP6192;
	nimfr("lastSon", "ast.nim")
	result = 0;
	nimln(1424, "ast.nim");
	nimln(1424, "ast.nim");
	nimln(1424, "ast.nim");
	LOC1 = 0;
	LOC1 = sonslen_188195(n);
	TMP6192 = subInt(LOC1, 1);
	if ((NU)((NI32)(TMP6192)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI32)(TMP6192)];
	popFrame();
	return result;
}

N_NIMCALL(ttype187847*, getuniquetype_465401)(ttype187847* key) {
	ttype187847* result;
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
		result = gcanonicaltypes_465228[(k)- 0];
		nimln(86, "ccgutils.nim");
		{
			nimln(86, "ccgutils.nim");
			if (!(result == NIM_NIL)) goto LA9;
			nimln(87, "ccgutils.nim");
			asgnRefNoCycle((void**) &gcanonicaltypes_465228[(k)- 0], key);
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
		internalerror_165606(((NimStringDesc*) &TMP6191));
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
		ttype187847* LOC13;
		nimln(94, "ccgutils.nim");
		nimln(94, "ccgutils.nim");
		LOC13 = 0;
		LOC13 = lastson_188203(key);
		result = getuniquetype_465401(LOC13);
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
		NI h_465452;
		NI HEX3Atmp_465594;
		NI res_465596;
		nimln(105, "ccgutils.nim");
		{
			NIM_BOOL LOC17;
			nimln(105, "ccgutils.nim");
			LOC17 = 0;
			LOC17 = idtablehasobjectaskey_196154(gtypetable_465224[(k)- 0], &key->Sup);
			if (!LOC17) goto LA18;
			nimln(105, "ccgutils.nim");
			nimln(105, "ccgutils.nim");
			result = key;
			goto BeforeRet;
		}
		LA18: ;
		h_465452 = 0;
		HEX3Atmp_465594 = 0;
		nimln(106, "ccgutils.nim");
		nimln(106, "ccgutils.nim");
		HEX3Atmp_465594 = (gtypetable_465224[(k)- 0].Data->Sup.len-1);
		nimln(1450, "system.nim");
		res_465596 = 0;
		nimln(1451, "system.nim");
		while (1) {
			ttype187847* t;
			nimln(1451, "system.nim");
			if (!(res_465596 <= HEX3Atmp_465594)) goto LA20;
			nimln(1450, "system.nim");
			h_465452 = res_465596;
			nimln(107, "ccgutils.nim");
			if ((NU)(h_465452) >= (NU)(gtypetable_465224[(k)- 0].Data->Sup.len)) raiseIndexError();
			if (gtypetable_465224[(k)- 0].Data->data[h_465452].Key) chckObj((*gtypetable_465224[(k)- 0].Data->data[h_465452].Key).Sup.m_type, (&NTI187847));
			t = ((ttype187847*) (gtypetable_465224[(k)- 0].Data->data[h_465452].Key));
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
				LOC23 = samebackendtype_230539(t, key);
				LA24: ;
				if (!LOC23) goto LA25;
				nimln(109, "ccgutils.nim");
				nimln(109, "ccgutils.nim");
				result = t;
				goto BeforeRet;
			}
			LA25: ;
			nimln(1453, "system.nim");
			res_465596 = addInt(res_465596, 1);
		} LA20: ;
		nimln(110, "ccgutils.nim");
		idtableput_196147(&gtypetable_465224[(k)- 0], &key->Sup, &key->Sup.Sup);
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
			LOC32 = idtableget_196137(gtypetable_465224[(k)- 0], &key->Sup);
			if (LOC32) chckObj((*LOC32).m_type, (&NTI187847));
			result = ((ttype187847*) (LOC32));
			nimln(116, "ccgutils.nim");
			{
				nimln(116, "ccgutils.nim");
				if (!(result == NIM_NIL)) goto LA35;
				nimln(117, "ccgutils.nim");
				idtableput_196147(&gtypetable_465224[(k)- 0], &key->Sup, &key->Sup.Sup);
				nimln(118, "ccgutils.nim");
				result = key;
			}
			LA35: ;
		}
		goto LA28;
		LA30: ;
		{
			NI h_465515;
			NI HEX3Atmp_465598;
			NI res_465600;
			nimln(121, "ccgutils.nim");
			{
				NIM_BOOL LOC40;
				nimln(121, "ccgutils.nim");
				LOC40 = 0;
				LOC40 = idtablehasobjectaskey_196154(gtypetable_465224[(k)- 0], &key->Sup);
				if (!LOC40) goto LA41;
				nimln(121, "ccgutils.nim");
				nimln(121, "ccgutils.nim");
				result = key;
				goto BeforeRet;
			}
			LA41: ;
			h_465515 = 0;
			HEX3Atmp_465598 = 0;
			nimln(122, "ccgutils.nim");
			nimln(122, "ccgutils.nim");
			HEX3Atmp_465598 = (gtypetable_465224[(k)- 0].Data->Sup.len-1);
			nimln(1450, "system.nim");
			res_465600 = 0;
			nimln(1451, "system.nim");
			while (1) {
				ttype187847* t;
				nimln(1451, "system.nim");
				if (!(res_465600 <= HEX3Atmp_465598)) goto LA43;
				nimln(1450, "system.nim");
				h_465515 = res_465600;
				nimln(123, "ccgutils.nim");
				if ((NU)(h_465515) >= (NU)(gtypetable_465224[(k)- 0].Data->Sup.len)) raiseIndexError();
				if (gtypetable_465224[(k)- 0].Data->data[h_465515].Key) chckObj((*gtypetable_465224[(k)- 0].Data->data[h_465515].Key).Sup.m_type, (&NTI187847));
				t = ((ttype187847*) (gtypetable_465224[(k)- 0].Data->data[h_465515].Key));
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
					LOC46 = sametype_228139(t, key, 0);
					LA47: ;
					if (!LOC46) goto LA48;
					nimln(125, "ccgutils.nim");
					nimln(125, "ccgutils.nim");
					result = t;
					goto BeforeRet;
				}
				LA48: ;
				nimln(1453, "system.nim");
				res_465600 = addInt(res_465600, 1);
			} LA43: ;
			nimln(126, "ccgutils.nim");
			idtableput_196147(&gtypetable_465224[(k)- 0], &key->Sup, &key->Sup.Sup);
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
		LOC51 = idtableget_196137(gtypetable_465224[(k)- 0], &key->Sup);
		if (LOC51) chckObj((*LOC51).m_type, (&NTI187847));
		result = ((ttype187847*) (LOC51));
		nimln(130, "ccgutils.nim");
		{
			nimln(130, "ccgutils.nim");
			if (!(result == NIM_NIL)) goto LA54;
			nimln(131, "ccgutils.nim");
			idtableput_196147(&gtypetable_465224[(k)- 0], &key->Sup, &key->Sup.Sup);
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
			NI h_465574;
			NI HEX3Atmp_465602;
			NI res_465604;
			nimln(138, "ccgutils.nim");
			{
				NIM_BOOL LOC64;
				nimln(138, "ccgutils.nim");
				LOC64 = 0;
				LOC64 = idtablehasobjectaskey_196154(gtypetable_465224[(k)- 0], &key->Sup);
				if (!LOC64) goto LA65;
				nimln(138, "ccgutils.nim");
				nimln(138, "ccgutils.nim");
				result = key;
				goto BeforeRet;
			}
			LA65: ;
			h_465574 = 0;
			HEX3Atmp_465602 = 0;
			nimln(139, "ccgutils.nim");
			nimln(139, "ccgutils.nim");
			HEX3Atmp_465602 = (gtypetable_465224[(k)- 0].Data->Sup.len-1);
			nimln(1450, "system.nim");
			res_465604 = 0;
			nimln(1451, "system.nim");
			while (1) {
				ttype187847* t;
				nimln(1451, "system.nim");
				if (!(res_465604 <= HEX3Atmp_465602)) goto LA67;
				nimln(1450, "system.nim");
				h_465574 = res_465604;
				nimln(140, "ccgutils.nim");
				if ((NU)(h_465574) >= (NU)(gtypetable_465224[(k)- 0].Data->Sup.len)) raiseIndexError();
				if (gtypetable_465224[(k)- 0].Data->data[h_465574].Key) chckObj((*gtypetable_465224[(k)- 0].Data->data[h_465574].Key).Sup.m_type, (&NTI187847));
				t = ((ttype187847*) (gtypetable_465224[(k)- 0].Data->data[h_465574].Key));
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
					LOC70 = samebackendtype_230539(t, key);
					LA71: ;
					if (!LOC70) goto LA72;
					nimln(142, "ccgutils.nim");
					nimln(142, "ccgutils.nim");
					result = t;
					goto BeforeRet;
				}
				LA72: ;
				nimln(1453, "system.nim");
				res_465604 = addInt(res_465604, 1);
			} LA67: ;
			nimln(143, "ccgutils.nim");
			idtableput_196147(&gtypetable_465224[(k)- 0], &key->Sup, &key->Sup.Sup);
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

N_NIMCALL(TNimObject*, tablegettype_465611)(tidtable187859 tab, ttype187847* key) {
	TNimObject* result;
	nimfr("tableGetType", "ccgutils.nim")
	result = 0;
	nimln(148, "ccgutils.nim");
	result = idtableget_196137(tab, &key->Sup);
	nimln(149, "ccgutils.nim");
	{
		NIM_BOOL LOC3;
		NI h_465646;
		NI HEX3Atmp_465665;
		NI res_465667;
		nimln(149, "ccgutils.nim");
		LOC3 = 0;
		nimln(149, "ccgutils.nim");
		LOC3 = (result == NIM_NIL);
		if (!(LOC3)) goto LA4;
		nimln(149, "ccgutils.nim");
		LOC3 = (0 < tab.Counter);
		LA4: ;
		if (!LOC3) goto LA5;
		h_465646 = 0;
		HEX3Atmp_465665 = 0;
		nimln(152, "ccgutils.nim");
		nimln(152, "ccgutils.nim");
		HEX3Atmp_465665 = (tab.Data->Sup.len-1);
		nimln(1450, "system.nim");
		res_465667 = 0;
		nimln(1451, "system.nim");
		while (1) {
			ttype187847* t;
			nimln(1451, "system.nim");
			if (!(res_465667 <= HEX3Atmp_465665)) goto LA7;
			nimln(1450, "system.nim");
			h_465646 = res_465667;
			nimln(153, "ccgutils.nim");
			if ((NU)(h_465646) >= (NU)(tab.Data->Sup.len)) raiseIndexError();
			if (tab.Data->data[h_465646].Key) chckObj((*tab.Data->data[h_465646].Key).Sup.m_type, (&NTI187847));
			t = ((ttype187847*) (tab.Data->data[h_465646].Key));
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
					LOC14 = sametype_228139(t, key, 0);
					if (!LOC14) goto LA15;
					nimln(156, "ccgutils.nim");
					nimln(156, "ccgutils.nim");
					if ((NU)(h_465646) >= (NU)(tab.Data->Sup.len)) raiseIndexError();
					result = tab.Data->data[h_465646].Val;
					goto BeforeRet;
				}
				LA15: ;
			}
			LA10: ;
			nimln(1453, "system.nim");
			res_465667 = addInt(res_465667, 1);
		} LA7: ;
	}
	LA5: ;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_465672)(NimStringDesc* s) {
	NimStringDesc* result;
	NIM_CHAR c_465676;
	NI i_465678;
	NI l_465680;
	nimfr("makeSingleLineCString", "ccgutils.nim")
	result = 0;
	nimln(159, "ccgutils.nim");
	result = copyString(((NimStringDesc*) &TMP6193));
	c_465676 = 0;
	nimln(2804, "system.nim");
	i_465678 = 0;
	nimln(2805, "system.nim");
	nimln(2805, "system.nim");
	l_465680 = s->Sup.len;
	nimln(2806, "system.nim");
	while (1) {
		NimStringDesc* LOC2;
		nimln(2806, "system.nim");
		if (!(i_465678 < l_465680)) goto LA1;
		nimln(2807, "system.nim");
		if ((NU)(i_465678) > (NU)(s->Sup.len)) raiseIndexError();
		c_465676 = s->data[i_465678];
		nimln(161, "ccgutils.nim");
		nimln(161, "ccgutils.nim");
		LOC2 = 0;
		LOC2 = tocchar_163645(c_465676);
		result = resizeString(result, LOC2->Sup.len + 0);
appendString(result, LOC2);
		nimln(2808, "system.nim");
		i_465678 = addInt(i_465678, 1);
		nimln(2809, "system.nim");
		{
			nimln(2809, "system.nim");
			nimln(2809, "system.nim");
			nimln(2809, "system.nim");
			if (!!((s->Sup.len == l_465680))) goto LA5;
			nimln(2809, "system.nim");
			failedassertimpl_81021(((NimStringDesc*) &TMP6194));
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
	result = (NI32)(a % b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(trope145007*, makellvmstring_465684)(NimStringDesc* s) {
	trope145007* result;
	NimStringDesc* res;
	NI i_465702;
	NI HEX3Atmp_465714;
	NI TMP6196;
	NI res_465716;
	trope145007* LOC10;
	nimfr("makeLLVMString", "ccgutils.nim")
	result = 0;
	nimln(166, "ccgutils.nim");
	result = NIM_NIL;
	nimln(167, "ccgutils.nim");
	res = copyString(((NimStringDesc*) &TMP6195));
	i_465702 = 0;
	HEX3Atmp_465714 = 0;
	nimln(168, "ccgutils.nim");
	nimln(168, "ccgutils.nim");
	nimln(168, "ccgutils.nim");
	TMP6196 = subInt(s->Sup.len, 1);
	HEX3Atmp_465714 = (NI32)(TMP6196);
	nimln(1450, "system.nim");
	res_465716 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_465716 <= HEX3Atmp_465714)) goto LA1;
		nimln(1450, "system.nim");
		i_465702 = res_465716;
		nimln(169, "ccgutils.nim");
		{
			NI TMP6197;
			NI TMP6198;
			trope145007* LOC6;
			nimln(169, "ccgutils.nim");
			nimln(169, "ccgutils.nim");
			nimln(169, "ccgutils.nim");
			TMP6197 = addInt(i_465702, 1);
			TMP6198 = modInt((NI32)(TMP6197), 64);
			if (!(((NI) ((NI32)(TMP6198))) == 0)) goto LA4;
			nimln(170, "ccgutils.nim");
			nimln(170, "ccgutils.nim");
			LOC6 = 0;
			LOC6 = torope_145058(res);
			app_145040(&result, LOC6);
			nimln(171, "ccgutils.nim");
			res = setLengthStr(res, 0);
		}
		LA4: ;
		nimln(172, "ccgutils.nim");
		if ((NU)(i_465702) > (NU)(s->Sup.len)) raiseIndexError();
		switch (((NU8)(s->data[i_465702]))) {
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
			if ((NU)(i_465702) > (NU)(s->Sup.len)) raiseIndexError();
			LOC8 = 0;
			LOC8 = nsuToHex(((NI64) (((NU8)(s->data[i_465702])))), 2);
			res = resizeString(res, LOC8->Sup.len + 0);
appendString(res, LOC8);
		}
		break;
		default:
		{
			nimln(176, "ccgutils.nim");
			if ((NU)(i_465702) > (NU)(s->Sup.len)) raiseIndexError();
			res = addChar(res, s->data[i_465702]);
		}
		break;
		}
		nimln(1453, "system.nim");
		res_465716 = addInt(res_465716, 1);
	} LA1: ;
	nimln(177, "ccgutils.nim");
	res = resizeString(res, 4);
appendString(res, ((NimStringDesc*) &TMP6199));
	nimln(178, "ccgutils.nim");
	nimln(178, "ccgutils.nim");
	LOC10 = 0;
	LOC10 = torope_145058(res);
	app_145040(&result, LOC10);
	popFrame();
	return result;
}
N_NOINLINE(void, ccgutilsInit)(void) {
	nimfr("ccgutils", "ccgutils.nim")
	nimln(180, "ccgutils.nim");
	inittypetables_465232();
	popFrame();
}

N_NOINLINE(void, ccgutilsDatInit)(void) {
}

