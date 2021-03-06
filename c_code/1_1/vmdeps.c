/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tprocess128402 tprocess128402;
typedef struct tstream126629 tstream126629;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct tsym187843 tsym187843;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct tnode187813 tnode187813;
typedef struct tnodeseq187807 tnodeseq187807;
typedef struct ttype187847 ttype187847;
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
typedef struct tidobj167013 tidobj167013;
typedef struct ttypeseq187845 ttypeseq187845;
typedef struct tscope187837 tscope187837;
typedef struct TY187943 TY187943;
typedef struct tinstantiation187833 tinstantiation187833;
typedef struct tstrtable187817 tstrtable187817;
typedef struct tsymseq187815 tsymseq187815;
typedef struct tident167019 tident167019;
typedef struct tloc187827 tloc187827;
typedef struct trope145007 trope145007;
typedef struct tlib187831 tlib187831;
typedef struct tbasechunk22636 tbasechunk22636;
typedef struct tfreecell22628 tfreecell22628;
typedef struct TY187932 TY187932;
typedef struct tlistentry120017 tlistentry120017;
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
typedef tnode187813* TY188883[1];
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
struct  tprocess128402  {
  TNimObject Sup;
NI Fprocesshandle;
int Inhandle;
int Outhandle;
int Errhandle;
NI Id;
int Exitcode;
};
typedef N_NIMCALL_PTR(void, TY126630) (tstream126629* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY126634) (tstream126629* s);
typedef N_NIMCALL_PTR(void, TY126638) (tstream126629* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY126643) (tstream126629* s);
typedef N_NIMCALL_PTR(NI, TY126647) (tstream126629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY126653) (tstream126629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY126659) (tstream126629* s);
struct  tstream126629  {
  TNimObject Sup;
TY126630 Closeimpl;
TY126634 Atendimpl;
TY126638 Setpositionimpl;
TY126643 Getpositionimpl;
TY126647 Readdataimpl;
TY126653 Writedataimpl;
TY126659 Flushimpl;
};
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
struct TY187932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, readoutput_390006)(tprocess128402* p);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(tstream126629*, nospoutputStream)(tprocess128402* p);
N_NIMCALL(NI, nospwaitForExit)(tprocess128402* p, NI timeout);
N_NIMCALL(NIM_BOOL, atend_126694)(tstream126629* s);
N_NIMCALL(NimStringDesc*, readline_127017)(tstream126629* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, opgorge_390014)(NimStringDesc* cmd, NimStringDesc* input);
N_NIMCALL(tprocess128402*, startcmd_128634)(NimStringDesc* command, NU8 options);
N_NIMCALL(void, write_126774)(tstream126629* s, NimStringDesc* x);
N_NIMCALL(tstream126629*, nospinputStream)(tprocess128402* p);
N_NIMCALL(void, close_126676)(tstream126629* s);
N_NIMCALL(NimStringDesc*, opslurp_390022)(NimStringDesc* file, tlineinfo163527 info, tsym187843* module);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, findfile_138306)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_10440)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_188832)(tsym187843* m, tnode187813* n);
N_NIMCALL(tnode187813*, newnode_190003)(NU8 kind, tlineinfo163527 info, tnodeseq187807* sons, ttype187847* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(tnode187813*, newstrnode_188095)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41088*, usrtocell_44443)(void* usr);
static N_INLINE(void, rtladdzct_46002)(tcell41088* c);
N_NOINLINE(void, addzct_44418)(tcellseq41104* s, tcell41088* c);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
N_NIMCALL(void, localerror_165571)(tlineinfo163527 info, NU16 msg, NimStringDesc* arg);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_46827)(tcell41088* c);
static N_INLINE(NIM_BOOL, canbecycleroot_44462)(tcell41088* c);
static N_INLINE(void, rtladdcycleroot_45235)(tcell41088* c);
N_NOINLINE(void, incl_41855)(tcellset41100* s, tcell41088* cell);
static N_INLINE(void, decref_46402)(tcell41088* c);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP5455, "", 0);
extern TFrame* frameptr_13038;
extern TSafePoint* exchandler_13039;
extern TNimType NTI187807; /* TNodeSeq */
extern tgcheap43016 gch_43044;
extern TNimType NTI2433; /* EIO */
extern E_Base* currexception_13041;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(NimStringDesc*, readoutput_390006)(tprocess128402* p) {
	NimStringDesc* result;
	tstream126629* output;
	NI LOC1;
	nimfr("readOutput", "vmdeps.nim")
	result = 0;
	nimln(13, "vmdeps.nim");
	result = copyString(((NimStringDesc*) &TMP5455));
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
		LOC3 = atend_126694(output);
		if (!!(LOC3)) goto LA2;
		nimln(17, "vmdeps.nim");
		nimln(17, "vmdeps.nim");
		LOC4 = 0;
		LOC4 = readline_127017(output);
		result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
	} LA2: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, opgorge_390014)(NimStringDesc* cmd, NimStringDesc* input) {
	NimStringDesc* result;
	tprocess128402* p;
	nimfr("opGorge", "vmdeps.nim")
	result = 0;
	nimln(20, "vmdeps.nim");
	p = startcmd_128634(cmd, 10);
	nimln(21, "vmdeps.nim");
	{
		tstream126629* LOC5;
		tstream126629* LOC6;
		nimln(21, "vmdeps.nim");
		nimln(21, "vmdeps.nim");
		nimln(21, "vmdeps.nim");
		if (!!((input->Sup.len == 0))) goto LA3;
		nimln(22, "vmdeps.nim");
		nimln(22, "vmdeps.nim");
		LOC5 = 0;
		LOC5 = nospinputStream(p);
		write_126774(LOC5, input);
		nimln(23, "vmdeps.nim");
		nimln(23, "vmdeps.nim");
		LOC6 = 0;
		LOC6 = nospinputStream(p);
		close_126676(LOC6);
	}
	LA3: ;
	nimln(24, "vmdeps.nim");
	result = readoutput_390006(p);
	popFrame();
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_13039;
	exchandler_13039 = s;
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

static N_INLINE(NIM_BOOL, canbecycleroot_44462)(tcell41088* c) {
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

static N_INLINE(void, rtladdcycleroot_45235)(tcell41088* c) {
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
		incl_41855(&gch_43044.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_46827)(tcell41088* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_44462(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_45235(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(void, decref_46402)(tcell41088* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_46002(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_44462(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_45235(c);
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
		tcell41088* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_44443(src);
		incref_46827(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell41088* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_44443((*dest));
		decref_46402(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_13041, (*currexception_13041).parent);
}

N_NIMCALL(NimStringDesc*, opslurp_390022)(NimStringDesc* file, tlineinfo163527 info, tsym187843* module) {
	NimStringDesc* result;
	TSafePoint TMP5456;
	nimfr("opSlurp", "vmdeps.nim")
	result = 0;
	nimln(27, "vmdeps.nim");
	pushSafePoint(&TMP5456);
	TMP5456.status = setjmp(TMP5456.context);
	if (TMP5456.status == 0) {
		NimStringDesc* volatile filename;
		tnodeseq187807* LOC2;
		TY188883 LOC3;
		tnode187813* LOC4;
		nimln(28, "vmdeps.nim");
		filename = findfile_138306(file);
		nimln(29, "vmdeps.nim");
		result = readfile_10440(filename);
		nimln(32, "vmdeps.nim");
		nimln(32, "vmdeps.nim");
		nimln(32, "vmdeps.nim");
		LOC2 = 0;
		LOC2 = (tnodeseq187807*) newSeq((&NTI187807), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		nimln(33, "vmdeps.nim");
		LOC3[0] = newstrnode_188095(((NU8) 20), filename);
		asgnRefNoCycle((void**) &LOC2->data[0], LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_190003(((NU8) 120), info, LOC2, NIM_NIL);
		appendtomodule_188832(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame((TFrame*)&F);
		if (isObj(getCurrentException()->Sup.m_type, (&NTI2433))) {
			TMP5456.status = 0;
			nimln(35, "vmdeps.nim");
			localerror_165571(info, ((NU16) 3), file);
			nimln(36, "vmdeps.nim");
			result = copyString(((NimStringDesc*) &TMP5455));
			popCurrentException();
		}
	}
	if (TMP5456.status != 0) reraiseException();
	popFrame();
	return result;
}
N_NOINLINE(void, vmdepsInit)(void) {
	nimfr("vmdeps", "vmdeps.nim")
	popFrame();
}

N_NOINLINE(void, vmdepsDatInit)(void) {
}

