/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <sys/types.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tprocess125402 tprocess125402;
typedef struct tstream123629 tstream123629;
typedef struct tlineinfo161527 tlineinfo161527;
typedef struct tsym185843 tsym185843;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct tnode185813 tnode185813;
typedef struct tnodeseq185807 tnodeseq185807;
typedef struct ttype185847 ttype185847;
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
typedef struct tidobj165013 tidobj165013;
typedef struct ttypeseq185845 ttypeseq185845;
typedef struct tscope185837 tscope185837;
typedef struct TY185943 TY185943;
typedef struct tinstantiation185833 tinstantiation185833;
typedef struct tstrtable185817 tstrtable185817;
typedef struct tsymseq185815 tsymseq185815;
typedef struct tident165019 tident165019;
typedef struct tloc185827 tloc185827;
typedef struct trope143007 trope143007;
typedef struct tlib185831 tlib185831;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
typedef struct TY185932 TY185932;
typedef struct tlistentry117017 tlistentry117017;
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
struct  E_Base  {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (E_Base* e, void* ClEnv);
void* ClEnv;
} TY11626;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY11626 raiseAction;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef tnode185813* TY186883[1];
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
struct  tprocess125402  {
  TNimObject Sup;
int Inhandle;
int Outhandle;
int Errhandle;
tstream123629* Instream;
tstream123629* Outstream;
tstream123629* Errstream;
pid_t Id;
int Exitcode;
};
typedef N_NIMCALL_PTR(void, TY123630) (tstream123629* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY123634) (tstream123629* s);
typedef N_NIMCALL_PTR(void, TY123638) (tstream123629* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY123643) (tstream123629* s);
typedef N_NIMCALL_PTR(NI, TY123647) (tstream123629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY123653) (tstream123629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY123659) (tstream123629* s);
struct  tstream123629  {
  TNimObject Sup;
TY123630 Closeimpl;
TY123634 Atendimpl;
TY123638 Setpositionimpl;
TY123643 Getpositionimpl;
TY123647 Readdataimpl;
TY123653 Writedataimpl;
TY123659 Flushimpl;
};
struct  tidobj165013  {
  TNimObject Sup;
NI Id;
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
struct  tident165019  {
  tidobj165013 Sup;
NimStringDesc* S;
tident165019* Next;
NI H;
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
struct TY185932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, readoutput_388006)(tprocess125402* p);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(tstream123629*, nospoutputStream)(tprocess125402* p);
N_NIMCALL(NI, nospwaitForExit)(tprocess125402* p, NI timeout);
N_NIMCALL(NIM_BOOL, atend_123694)(tstream123629* s);
N_NIMCALL(NimStringDesc*, readline_124017)(tstream123629* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, opgorge_388014)(NimStringDesc* cmd, NimStringDesc* input);
N_NIMCALL(tprocess125402*, startcmd_125634)(NimStringDesc* command, NU8 options);
N_NIMCALL(void, write_123774)(tstream123629* s, NimStringDesc* x);
N_NIMCALL(tstream123629*, nospinputStream)(tprocess125402* p);
N_NIMCALL(void, close_123676)(tstream123629* s);
N_NIMCALL(NimStringDesc*, opslurp_388022)(NimStringDesc* file, tlineinfo161527 info, tsym185843* module);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, findfile_136306)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_10440)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_186832)(tsym185843* m, tnode185813* n);
N_NIMCALL(tnode185813*, newnode_188003)(NU8 kind, tlineinfo161527 info, tnodeseq185807* sons, ttype185847* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(tnode185813*, newstrnode_186095)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
N_NIMCALL(void, localerror_163571)(tlineinfo161527 info, NU16 msg, NimStringDesc* arg);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47027)(tcell41290* c);
static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41290* c);
static N_INLINE(void, rtladdcycleroot_45435)(tcell41290* c);
N_NOINLINE(void, incl_42055)(tcellset41302* s, tcell41290* cell);
static N_INLINE(void, decref_46602)(tcell41290* c);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP5458, "", 0);
extern TFrame* frameptr_13038;
extern TSafePoint* exchandler_13039;
extern TNimType NTI185807; /* TNodeSeq */
extern tgcheap43216 gch_43244;
extern TNimType NTI2433; /* EIO */
extern E_Base* currexception_13041;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(NimStringDesc*, readoutput_388006)(tprocess125402* p) {
	NimStringDesc* result;
	tstream123629* output;
	NI LOC1;
	nimfr("readOutput", "vmdeps.nim")
	result = 0;
	nimln(13, "vmdeps.nim");
	result = copyString(((NimStringDesc*) &TMP5458));
	nimln(14, "vmdeps.nim");
	output = nospoutputStream(p);
	nimln(15, "vmdeps.nim");
	nimln(15, "vmdeps.nim");
	LOC1 = 0;
	LOC1 = nospwaitForExit(p, -1);
	nimln(16, "vmdeps.nim");
	while (1) {
		NIM_BOOL LOC3;
		NimStringDesc* LOC4;
		nimln(16, "vmdeps.nim");
		nimln(16, "vmdeps.nim");
		LOC3 = 0;
		LOC3 = atend_123694(output);
		if (!!(LOC3)) goto LA2;
		nimln(17, "vmdeps.nim");
		nimln(17, "vmdeps.nim");
		LOC4 = 0;
		LOC4 = readline_124017(output);
		result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
	} LA2: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, opgorge_388014)(NimStringDesc* cmd, NimStringDesc* input) {
	NimStringDesc* result;
	tprocess125402* p;
	nimfr("opGorge", "vmdeps.nim")
	result = 0;
	nimln(20, "vmdeps.nim");
	p = startcmd_125634(cmd, 10);
	nimln(21, "vmdeps.nim");
	{
		tstream123629* LOC5;
		tstream123629* LOC6;
		nimln(21, "vmdeps.nim");
		nimln(21, "vmdeps.nim");
		nimln(21, "vmdeps.nim");
		if (!!((input->Sup.len == 0))) goto LA3;
		nimln(22, "vmdeps.nim");
		nimln(22, "vmdeps.nim");
		LOC5 = 0;
		LOC5 = nospinputStream(p);
		write_123774(LOC5, input);
		nimln(23, "vmdeps.nim");
		nimln(23, "vmdeps.nim");
		LOC6 = 0;
		LOC6 = nospinputStream(p);
		close_123676(LOC6);
	}
	LA3: ;
	nimln(24, "vmdeps.nim");
	result = readoutput_388006(p);
	popFrame();
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_13039;
	exchandler_13039 = s;
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
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

static N_INLINE(void, popSafePoint)(void) {
	exchandler_13039 = (*exchandler_13039).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_13038 = s;
}

static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2442, "system.nim");
	result = currexception_13041;
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_13041, (*currexception_13041).parent);
}

N_NIMCALL(NimStringDesc*, opslurp_388022)(NimStringDesc* file, tlineinfo161527 info, tsym185843* module) {
	NimStringDesc* result;
	TSafePoint TMP5459;
	nimfr("opSlurp", "vmdeps.nim")
	result = 0;
	nimln(27, "vmdeps.nim");
	pushSafePoint(&TMP5459);
	TMP5459.status = setjmp(TMP5459.context);
	if (TMP5459.status == 0) {
		NimStringDesc* volatile filename;
		tnodeseq185807* LOC2;
		TY186883 LOC3;
		tnode185813* LOC4;
		nimln(28, "vmdeps.nim");
		filename = findfile_136306(file);
		nimln(29, "vmdeps.nim");
		result = readfile_10440(filename);
		nimln(32, "vmdeps.nim");
		nimln(32, "vmdeps.nim");
		nimln(32, "vmdeps.nim");
		LOC2 = 0;
		LOC2 = (tnodeseq185807*) newSeq((&NTI185807), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		nimln(33, "vmdeps.nim");
		LOC3[0] = newstrnode_186095(((NU8) 20), filename);
		asgnRefNoCycle((void**) &LOC2->data[0], LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_188003(((NU8) 120), info, LOC2, NIM_NIL);
		appendtomodule_186832(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame((TFrame*)&F);
		if (isObj(getCurrentException()->Sup.m_type, (&NTI2433))) {
			TMP5459.status = 0;
			nimln(35, "vmdeps.nim");
			localerror_163571(info, ((NU16) 3), file);
			nimln(36, "vmdeps.nim");
			result = copyString(((NimStringDesc*) &TMP5458));
			popCurrentException();
		}
	}
	if (TMP5459.status != 0) reraiseException();
	popFrame();
	return result;
}
N_NOINLINE(void, vmdepsInit)(void) {
	nimfr("vmdeps", "vmdeps.nim")
	popFrame();
}

N_NOINLINE(void, vmdepsDatInit)(void) {
}

