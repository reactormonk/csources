/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct trope145007 trope145007;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode187813 tnode187813;
typedef struct tpasscontext246003 tpasscontext246003;
typedef struct tgen521012 tgen521012;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tsym187843 tsym187843;
typedef struct ttype187847 ttype187847;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct tident167019 tident167019;
typedef struct tnodeseq187807 tnodeseq187807;
typedef struct tidobj167013 tidobj167013;
typedef struct ttypeseq187845 ttypeseq187845;
typedef struct tscope187837 tscope187837;
typedef struct TY187943 TY187943;
typedef struct tinstantiation187833 tinstantiation187833;
typedef struct tstrtable187817 tstrtable187817;
typedef struct tsymseq187815 tsymseq187815;
typedef struct tloc187827 tloc187827;
typedef struct tlib187831 tlib187831;
typedef struct tcell41288 tcell41288;
typedef struct tcellseq41304 tcellseq41304;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellset41300 tcellset41300;
typedef struct tpagedesc41296 tpagedesc41296;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct tpass246015 tpass246015;
typedef struct trodreader236024 trodreader236024;
typedef struct TY187932 TY187932;
typedef struct tlistentry118017 tlistentry118017;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
typedef struct tindex236022 tindex236022;
typedef struct tiitable196207 tiitable196207;
typedef struct tiipairseq196205 tiipairseq196205;
typedef struct tiipair196203 tiipair196203;
typedef struct tidtable187859 tidtable187859;
typedef struct tidpairseq187857 tidpairseq187857;
typedef struct tidpair187855 tidpair187855;
typedef struct tmemfile234204 tmemfile234204;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef trope145007* TY197350[2];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext246003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen521012  {
  tpasscontext246003 Sup;
tsym187843* Module;
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
struct  tidobj167013  {
  TNimObject Sup;
NI Id;
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
struct  tident167019  {
  tidobj167013 Sup;
NimStringDesc* S;
tident167019* Next;
NI H;
};
struct  tcell41288  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41304  {
NI Len;
NI Cap;
tcell41288** D;
};
struct  tcellset41300  {
NI Counter;
NI Max;
tpagedesc41296* Head;
tpagedesc41296** Data;
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
tcellseq41304 Zct;
tcellseq41304 Decstack;
tcellset41300 Cycleroots;
tcellseq41304 Tempstack;
NI Recgclock;
tmemregion23610 Region;
tgcstat43214 Stat;
};
typedef N_NIMCALL_PTR(tpasscontext246003*, tpassopen246007) (tsym187843* module);
typedef N_NIMCALL_PTR(tpasscontext246003*, tpassopencached246009) (tsym187843* module, trodreader236024* rd);
typedef N_NIMCALL_PTR(tnode187813*, tpassprocess246013) (tpasscontext246003* p, tnode187813* toplevelstmt);
typedef N_NIMCALL_PTR(tnode187813*, tpassclose246011) (tpasscontext246003* p, tnode187813* n);
struct tpass246015 {
tpassopen246007 Field0;
tpassopencached246009 Field1;
tpassprocess246013 Field2;
tpassclose246011 Field3;
};
struct  trope145007  {
  TNimObject Sup;
trope145007* Left;
trope145007* Right;
NI Length;
NimStringDesc* Data;
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
struct  tlistentry118017  {
  TNimObject Sup;
tlistentry118017* Prev;
tlistentry118017* Next;
};
struct  tlib187831  {
  tlistentry118017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope145007* Name;
tnode187813* Path;
};
typedef NI TY22818[16];
struct  tpagedesc41296  {
tpagedesc41296* Next;
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
struct  tiipair196203  {
NI Key;
NI Val;
};
struct  tiitable196207  {
NI Counter;
tiipairseq196205* Data;
};
struct  tindex236022  {
NI Lastidxkey;
NI Lastidxval;
tiitable196207 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair187855  {
tidobj167013* Key;
TNimObject* Val;
};
struct  tidtable187859  {
NI Counter;
tidpairseq187857* Data;
};
struct  tmemfile234204  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader236024  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY187932* Moddeps;
TY187932* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex236022 Index;
tindex236022 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable187859 Syms;
tmemfile234204 Memfile;
tsymseq187815* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tfreecell22828  {
tfreecell22828* Next;
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
struct TY187932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq196205 {
  TGenericSeq Sup;
  tiipair196203 data[SEQ_DECL_SIZE];
};
struct tidpairseq187857 {
  TGenericSeq Sup;
  tidpair187855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, adddependencyaux_521020)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, appf_145085)(trope145007** c, NimStringDesc* frmt, trope145007** args, NI argsLen0);
N_NIMCALL(trope145007*, torope_145058)(NimStringDesc* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode187813*, adddotdependency_521031)(tpasscontext246003* c, tnode187813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NI, sonslen_188191)(tnode187813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, getmodulename_255012)(tnode187813* n);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, generatedot_521007)(NimStringDesc* project);
N_NIMCALL(void, writerope_146407)(trope145007* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(trope145007*, ropef_145079)(NimStringDesc* frmt, trope145007** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(tpasscontext246003*, myopen_521128)(tsym187843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP7620)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41288*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41288* c);
N_NOINLINE(void, addzct_44618)(tcellseq41304* s, tcell41288* c);
STRING_LITERAL(TMP7612, "$1 -> $2;$n", 11);
static NIM_CONST TY188025 TMP7613 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7614, "sons", 4);
STRING_LITERAL(TMP7617, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP7618, "", 0);
STRING_LITERAL(TMP7619, "dot", 3);
NIM_CONST tpass246015 gendependpass_521152 = {myopen_521128,
NIM_NIL,
adddotdependency_521031,
NIM_NIL}
;
trope145007* gdotgraph_521017;
extern TFrame* frameptr_13038;
extern TNimType NTI246003; /* TPassContext */
TNimType NTI521012; /* TGen */
extern TNimType NTI187811; /* PSym */
TNimType NTI521014; /* PGen */
extern tgcheap43216 gch_43244;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(void, adddependencyaux_521020)(NimStringDesc* importing, NimStringDesc* imported) {
	TY197350 LOC1;
	nimfr("addDependencyAux", "depends.nim")
	nimln(25, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(25, "depends.nim");
	LOC1[0] = torope_145058(importing);
	nimln(25, "depends.nim");
	LOC1[1] = torope_145058(imported);
	appf_145085(&gdotgraph_521017, ((NimStringDesc*) &TMP7612), LOC1, 2);
	popFrame();
}

static N_INLINE(NI, sonslen_188191)(tnode187813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP7613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP7613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
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

N_NIMCALL(tnode187813*, adddotdependency_521031)(tpasscontext246003* c, tnode187813* n) {
	tnode187813* result;
	tgen521012* g;
	nimfr("addDotDependency", "depends.nim")
	result = 0;
	nimln(29, "depends.nim");
	result = n;
	nimln(30, "depends.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI521012));
	g = ((tgen521012*) (c));
	nimln(31, "depends.nim");
	switch ((*n).Kind) {
	case ((NU8) 115):
	{
		NI i_521049;
		NI HEX3Atmp_521107;
		NI LOC2;
		NI TMP7615;
		NI res_521109;
		i_521049 = 0;
		HEX3Atmp_521107 = 0;
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		nimln(33, "depends.nim");
		LOC2 = 0;
		LOC2 = sonslen_188191(n);
		TMP7615 = subInt(LOC2, 1);
		HEX3Atmp_521107 = (NI32)(TMP7615);
		nimln(1450, "system.nim");
		res_521109 = 0;
		nimln(1451, "system.nim");
		while (1) {
			NimStringDesc* imported;
			nimln(1451, "system.nim");
			if (!(res_521109 <= HEX3Atmp_521107)) goto LA3;
			nimln(1450, "system.nim");
			i_521049 = res_521109;
			nimln(34, "depends.nim");
			if (((TMP7613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
			if ((NU)(i_521049) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			imported = getmodulename_255012((*n).kindU.S6.Sons->data[i_521049]);
			nimln(35, "depends.nim");
			adddependencyaux_521020((*(*(*g).Module).Name).S, imported);
			nimln(1453, "system.nim");
			res_521109 = addInt(res_521109, 1);
		} LA3: ;
	}
	break;
	case ((NU8) 119):
	case ((NU8) 116):
	{
		NimStringDesc* imported;
		nimln(37, "depends.nim");
		if (((TMP7613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		imported = getmodulename_255012((*n).kindU.S6.Sons->data[0]);
		nimln(38, "depends.nim");
		adddependencyaux_521020((*(*(*g).Module).Name).S, imported);
	}
	break;
	case ((NU8) 114):
	case ((NU8) 111):
	case ((NU8) 125):
	case ((NU8) 126):
	{
		NI i_521092;
		NI HEX3Atmp_521111;
		NI LOC6;
		NI TMP7616;
		NI res_521113;
		i_521092 = 0;
		HEX3Atmp_521111 = 0;
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		nimln(40, "depends.nim");
		LOC6 = 0;
		LOC6 = sonslen_188191(n);
		TMP7616 = subInt(LOC6, 1);
		HEX3Atmp_521111 = (NI32)(TMP7616);
		nimln(1450, "system.nim");
		res_521113 = 0;
		nimln(1451, "system.nim");
		while (1) {
			tnode187813* LOC8;
			nimln(1451, "system.nim");
			if (!(res_521113 <= HEX3Atmp_521111)) goto LA7;
			nimln(1450, "system.nim");
			i_521092 = res_521113;
			nimln(40, "depends.nim");
			nimln(40, "depends.nim");
			if (((TMP7613[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP7614));
			if ((NU)(i_521092) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC8 = 0;
			LOC8 = adddotdependency_521031(c, (*n).kindU.S6.Sons->data[i_521092]);
			nimln(1453, "system.nim");
			res_521113 = addInt(res_521113, 1);
		} LA7: ;
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(void, generatedot_521007)(NimStringDesc* project) {
	TY197350 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	trope145007* LOC4;
	NimStringDesc* LOC5;
	nimfr("generateDot", "depends.nim")
	nimln(45, "depends.nim");
	nimln(45, "depends.nim");
	memset((void*)LOC1, 0, sizeof(LOC1));
	nimln(46, "depends.nim");
	nimln(46, "depends.nim");
	nimln(46, "depends.nim");
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP7618));
	LOC1[0] = torope_145058(LOC3);
	LOC1[1] = gdotgraph_521017;
	LOC4 = 0;
	LOC4 = ropef_145079(((NimStringDesc*) &TMP7617), LOC1, 2);
	nimln(47, "depends.nim");
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP7619));
	writerope_146407(LOC4, LOC5, NIM_FALSE);
	popFrame();
}
N_NIMCALL(void, TMP7620)(void* p, NI op) {
	tgen521012* a;
	a = (tgen521012*)p;
	nimGCvisit((void*)(*a).Module, op);
}

static N_INLINE(tcell41288*, usrtocell_44643)(void* usr) {
	tcell41288* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41288*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41288))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41288* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41288* c;
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
		tcell41288* c;
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

N_NIMCALL(tpasscontext246003*, myopen_521128)(tsym187843* module) {
	tpasscontext246003* result;
	tgen521012* g;
	nimfr("myOpen", "depends.nim")
	result = 0;
	g = 0;
	nimln(51, "depends.nim");
	g = (tgen521012*) newObj((&NTI521014), sizeof(tgen521012));
	(*g).Sup.Sup.m_type = (&NTI521012);
	nimln(52, "depends.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(53, "depends.nim");
	result = &g->Sup;
	popFrame();
	return result;
}
N_NOINLINE(void, dependsInit)(void) {
	nimfr("depends", "depends.nim")
	popFrame();
}

N_NOINLINE(void, dependsDatInit)(void) {
static TNimNode TMP7610[1];
NTI521012.size = sizeof(tgen521012);
NTI521012.kind = 17;
NTI521012.base = (&NTI246003);
TMP7610[0].kind = 1;
TMP7610[0].offset = offsetof(tgen521012, Module);
TMP7610[0].typ = (&NTI187811);
TMP7610[0].name = "module";
NTI521012.node = &TMP7610[0];
NTI521014.size = sizeof(tgen521012*);
NTI521014.kind = 22;
NTI521014.base = (&NTI521012);
NTI521014.marker = TMP7620;
}

