/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>
typedef struct tnode173659 tnode173659;
typedef struct tpasscontext224003 tpasscontext224003;
typedef struct tgen417007 tgen417007;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tdocumentor309005 tdocumentor309005;
typedef struct tsym173689 tsym173689;
typedef struct tidobj141011 tidobj141011;
typedef struct ttypeseq173691 ttypeseq173691;
typedef struct ttype173693 ttype173693;
typedef struct TGenericSeq TGenericSeq;
typedef struct tscope173683 tscope173683;
typedef struct TY173786 TY173786;
typedef struct tinstantiation173679 tinstantiation173679;
typedef struct tstrtable173663 tstrtable173663;
typedef struct tsymseq173661 tsymseq173661;
typedef struct tident141017 tident141017;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tloc173673 tloc173673;
typedef struct trope122007 trope122007;
typedef struct tlib173677 tlib173677;
typedef struct NimStringDesc NimStringDesc;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct tcell38646 tcell38646;
typedef struct tcellseq38662 tcellseq38662;
typedef struct tgcheap40616 tgcheap40616;
typedef struct tcellset38658 tcellset38658;
typedef struct tpagedesc38654 tpagedesc38654;
typedef struct tmemregion22010 tmemregion22010;
typedef struct tsmallchunk21238 tsmallchunk21238;
typedef struct tllchunk22004 tllchunk22004;
typedef struct tbigchunk21240 tbigchunk21240;
typedef struct tintset21215 tintset21215;
typedef struct ttrunk21211 ttrunk21211;
typedef struct tavlnode22008 tavlnode22008;
typedef struct tgcstat40614 tgcstat40614;
typedef struct tstringtable113610 tstringtable113610;
typedef struct trstgenerator290012 trstgenerator290012;
typedef struct TY290028 TY290028;
typedef struct ttocentry290008 ttocentry290008;
typedef struct trstnode280018 trstnode280018;
typedef struct tpass224015 tpass224015;
typedef struct trodreader213023 trodreader213023;
typedef struct tnodeseq173653 tnodeseq173653;
typedef struct TY173775 TY173775;
typedef struct tlistentry110014 tlistentry110014;
typedef struct tbasechunk21236 tbasechunk21236;
typedef struct tfreecell21228 tfreecell21228;
typedef struct tkeyvaluepairseq113608 tkeyvaluepairseq113608;
typedef struct TY92504 TY92504;
typedef struct TY280093 TY280093;
typedef struct tindex213021 tindex213021;
typedef struct tiitable180211 tiitable180211;
typedef struct tiipairseq180209 tiipairseq180209;
typedef struct tiipair180207 tiipair180207;
typedef struct tidtable173705 tidtable173705;
typedef struct tidpairseq173703 tidpairseq173703;
typedef struct tidpair173701 tidpair173701;
typedef struct tmemfile211204 tmemfile211204;
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TNimObject {
TNimType* m_type;
};
struct tpasscontext224003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct tgen417007 {
  tpasscontext224003 Sup;
tdocumentor309005* Doc;
tsym173689* Module;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct tstrtable173663 {
NI Counter;
tsymseq173661* Data;
};
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tloc173673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype173693* T;
trope122007* R;
trope122007* Heaproot;
NI A;
};
struct tsym173689 {
  tidobj141011 Sup;
NU8 Kind;
union {
struct {ttypeseq173691* Typeinstcache;
tscope173683* Typscope;
} S1;
struct {TY173786* Procinstcache;
tscope173683* Scope;
} S2;
struct {TY173786* Usedgenerics;
tstrtable173663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype173693* Typ;
tident141017* Name;
tlineinfo137509 Info;
tsym173689* Owner;
NU32 Flags;
tnode173659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc173673 Loc;
tlib173677* Annex;
tnode173659* Constraint;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (E_Base* e, void* ClEnv);
void* ClEnv;
} TY10620;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY10620 raiseAction;
};
struct tcell38646 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38662 {
NI Len;
NI Cap;
tcell38646** D;
};
struct tcellset38658 {
NI Counter;
NI Max;
tpagedesc38654* Head;
tpagedesc38654** Data;
};
typedef tsmallchunk21238* TY22022[512];
typedef ttrunk21211* ttrunkbuckets21213[256];
struct tintset21215 {
ttrunkbuckets21213 Data;
};
struct tmemregion22010 {
NI Minlargeobj;
NI Maxlargeobj;
TY22022 Freesmallchunks;
tllchunk22004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21240* Freechunkslist;
tintset21215 Chunkstarts;
tavlnode22008* Root;
tavlnode22008* Deleted;
tavlnode22008* Last;
tavlnode22008* Freeavlnodes;
};
struct tgcstat40614 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40616 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38662 Zct;
tcellseq38662 Decstack;
tcellset38658 Cycleroots;
tcellseq38662 Tempstack;
NI Recgclock;
tmemregion22010 Region;
tgcstat40614 Stat;
};
struct ttocentry290008 {
trstnode280018* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler281017) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler281015) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY290036[5];
struct trstgenerator290012 {
  TNimObject Sup;
NU8 Target;
tstringtable113610* Config;
NI Splitafter;
TY290028* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler281017 Findfile;
tmsghandler281015 Msghandler;
NimStringDesc* Filename;
TY290036 Meta;
};
typedef trope122007* tsections309003[23];
struct tdocumentor309005 {
  trstgenerator290012 Sup;
trope122007* Moddesc;
NI Id;
tsections309003 Toc;
tsections309003 Section;
NimStringDesc* Indexvalfilename;
};
typedef N_NIMCALL_PTR(tpasscontext224003*, tpassopen224007) (tsym173689* module);
typedef N_NIMCALL_PTR(tpasscontext224003*, tpassopencached224009) (tsym173689* module, trodreader213023* rd);
typedef N_NIMCALL_PTR(tnode173659*, tpassprocess224013) (tpasscontext224003* p, tnode173659* toplevelstmt);
typedef N_NIMCALL_PTR(tnode173659*, tpassclose224011) (tpasscontext224003* p, tnode173659* n);
struct tpass224015 {
tpassopen224007 Field0;
tpassopencached224009 Field1;
tpassprocess224013 Field2;
tpassclose224011 Field3;
};
struct tnode173659 {
ttype173693* Typ;
tlineinfo137509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym173689* Sym;
} S4;
struct {tident141017* Ident;
} S5;
struct {tnodeseq173653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct ttype173693 {
  tidobj141011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq173691* Sons;
tnode173659* N;
tsym173689* Destructor;
tsym173689* Owner;
tsym173689* Sym;
NI64 Size;
NI Align;
tloc173673 Loc;
};
struct tscope173683 {
NI Depthlevel;
tstrtable173663 Symbols;
tnodeseq173653* Usingsyms;
tscope173683* Parent;
};
struct tinstantiation173679 {
tsym173689* Sym;
ttypeseq173691* Concretetypes;
TY173775* Usedby;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct trope122007 {
  TNimObject Sup;
trope122007* Left;
trope122007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry110014 {
  TNimObject Sup;
tlistentry110014* Prev;
tlistentry110014* Next;
};
struct tlib173677 {
  tlistentry110014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope122007* Name;
tnode173659* Path;
};
typedef NI TY21218[16];
struct tpagedesc38654 {
tpagedesc38654* Next;
NI Key;
TY21218 Bits;
};
struct tbasechunk21236 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21238 {
  tbasechunk21236 Sup;
tsmallchunk21238* Next;
tsmallchunk21238* Prev;
tfreecell21228* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22004 {
NI Size;
NI Acc;
tllchunk22004* Next;
};
struct tbigchunk21240 {
  tbasechunk21236 Sup;
tbigchunk21240* Next;
tbigchunk21240* Prev;
NI Align;
NF Data;
};
struct ttrunk21211 {
ttrunk21211* Next;
NI Key;
TY21218 Bits;
};
typedef tavlnode22008* TY22014[2];
struct tavlnode22008 {
TY22014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct TY92504 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tstringtable113610 {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq113608* Data;
NU8 Mode;
};
struct trstnode280018 {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY280093* Sons;
};
struct tiipair180207 {
NI Key;
NI Val;
};
struct tiitable180211 {
NI Counter;
tiipairseq180209* Data;
};
struct tindex213021 {
NI Lastidxkey;
NI Lastidxval;
tiitable180211 Tab;
NimStringDesc* R;
NI Offset;
};
struct tidpair173701 {
tidobj141011* Key;
TNimObject* Val;
};
struct tidtable173705 {
NI Counter;
tidpairseq173703* Data;
};
struct tmemfile211204 {
void* Mem;
NI Size;
NI Fhandle;
NI Maphandle;
};
struct trodreader213023 {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY173775* Moddeps;
TY173775* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex213021 Index;
tindex213021 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable173705 Syms;
tmemfile211204 Memfile;
tsymseq173661* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct tfreecell21228 {
tfreecell21228* Next;
NI Zerofield;
};
struct ttypeseq173691 {
  TGenericSeq Sup;
  ttype173693* data[SEQ_DECL_SIZE];
};
struct TY173786 {
  TGenericSeq Sup;
  tinstantiation173679* data[SEQ_DECL_SIZE];
};
struct tsymseq173661 {
  TGenericSeq Sup;
  tsym173689* data[SEQ_DECL_SIZE];
};
struct TY290028 {
  TGenericSeq Sup;
  ttocentry290008 data[SEQ_DECL_SIZE];
};
struct tnodeseq173653 {
  TGenericSeq Sup;
  tnode173659* data[SEQ_DECL_SIZE];
};
struct TY173775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq113608 {
  TGenericSeq Sup;
  TY92504 data[SEQ_DECL_SIZE];
};
struct TY280093 {
  TGenericSeq Sup;
  trstnode280018* data[SEQ_DECL_SIZE];
};
struct tiipairseq180209 {
  TGenericSeq Sup;
  tiipair180207 data[SEQ_DECL_SIZE];
};
struct tidpairseq173703 {
  TGenericSeq Sup;
  tidpair173701 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode173659*, close_417013)(tpasscontext224003* p, tnode173659* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, writeoutput_312043)(tdocumentor309005* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
N_NIMCALL(NimStringDesc*, tofilename_138700)(NI32 fileidx);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_312027)(tdocumentor309005* d);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr);
static N_INLINE(void, rtladdzct_43602)(tcell38646* c);
N_NOINLINE(void, addzct_42015)(tcellseq38662* s, tcell38646* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(tnode173659*, processnode_417043)(tpasscontext224003* c, tnode173659* n);
N_NIMCALL(void, generatedoc_309956)(tdocumentor309005* d, tnode173659* n);
N_NIMCALL(tpasscontext224003*, myopen_417051)(tsym173689* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP7019)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(tdocumentor309005*, newdocumentor_309038)(NimStringDesc* filename, tstringtable113610* config);
N_NIMCALL(void, finishdoc2pass_417076)(NimStringDesc* project);
STRING_LITERAL(TMP7017, "html", 4);
NIM_CONST tpass224015 docgen2pass_417073 = {myopen_417051,
NIM_NIL,
processnode_417043,
close_417013}
;
extern TNimType NTI224003; /* TPassContext */
TNimType NTI417007; /* TGen */
extern TNimType NTI309007; /* PDoc */
extern TNimType NTI173657; /* PSym */
extern NIM_BOOL gwholeproject_115119;
extern TSafePoint* exchandler_12038;
extern TFrame* frameptr_12037;
extern TNimType NTI1033; /* EIO */
extern E_Base* currexception_12040;
extern tgcheap40616 gch_40644;
TNimType NTI417009; /* PGen */
extern tstringtable113610* gconfigvars_115194;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_12038;
	exchandler_12038 = s;
}
static N_INLINE(void, popSafePoint)(void) {
	exchandler_12038 = (*exchandler_12038).prev;
}
static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_12037 = s;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2246, "system.nim");
	result = currexception_12040;
	popFrame();
	return result;
}
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr) {
	tcell38646* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38646*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38646))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43602)(tcell38646* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42015(&gch_40644.Zct, c);	popFrame();
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38646* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(250, "gc.nim");
		c = usrtocell_42039(src);
		nimln(167, "gc.nim");
		(*c).Refcount += 8;
	}	LA3: ;
	nimln(252, "gc.nim");
	{
		tcell38646* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(253, "gc.nim");
		c = usrtocell_42039((*dest));
		nimln(254, "gc.nim");
		{
			nimln(165, "gc.nim");
			(*c).Refcount -= 8;
			nimln(166, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43602(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
static N_INLINE(void, popCurrentException)(void) {
	asgnRefNoCycle((void**) &currexception_12040, (*currexception_12040).parent);
}
N_NIMCALL(tnode173659*, close_417013)(tpasscontext224003* p, tnode173659* n) {
	tnode173659* result;
	tgen417007* g;
	NIM_BOOL usewarning;
	nimfr("close", "docgen2.nim")
	result = 0;
	nimln(23, "docgen2.nim");
	if (p) chckObj((*p).Sup.m_type, (&NTI417007));
	g = ((tgen417007*) (p));
	nimln(24, "docgen2.nim");
	nimln(731, "system.nim");
	nimln(731, "system.nim");
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	nimln(25, "docgen2.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP7018;
		nimln(25, "docgen2.nim");
		LOC3 = 0;
		LOC3 = gwholeproject_115119;
		if (LOC3) goto LA4;
		nimln(730, "system.nim");
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(26, "docgen2.nim");
		nimln(913, "ast.nim");
		LOC7 = 0;
		LOC7 = tofilename_138700(((NI32) ((*(*g).Module).Position)));
		writeoutput_312043((*g).Doc, LOC7, ((NimStringDesc*) &TMP7017), usewarning);		nimln(27, "docgen2.nim");
		pushSafePoint(&TMP7018);
		TMP7018.status = setjmp(TMP7018.context);
		if (TMP7018.status == 0) {
			nimln(28, "docgen2.nim");
			generateindex_312027((*g).Doc);			popSafePoint();
		}		else {
			popSafePoint();
			setFrame((TFrame*)&F);
			if (isObj(getCurrentException()->Sup.m_type, (&NTI1033))) {
				TMP7018.status = 0;
				popCurrentException();
			}		}		if (TMP7018.status != 0) reraiseException();
	}	LA5: ;
	popFrame();
	return result;
}
N_NIMCALL(tnode173659*, processnode_417043)(tpasscontext224003* c, tnode173659* n) {
	tnode173659* result;
	tgen417007* g;
	nimfr("processNode", "docgen2.nim")
	result = 0;
	nimln(33, "docgen2.nim");
	result = n;
	nimln(34, "docgen2.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI417007));
	g = ((tgen417007*) (c));
	nimln(35, "docgen2.nim");
	generatedoc_309956((*g).Doc, n);	popFrame();
	return result;
}N_NIMCALL(void, TMP7019)(void* p, NI op) {
	tgen417007* a;
	a = (tgen417007*)p;
	nimGCvisit((void*)(*a).Doc, op);
	nimGCvisit((void*)(*a).Module, op);
}

N_NIMCALL(tpasscontext224003*, myopen_417051)(tsym173689* module) {
	tpasscontext224003* result;
	tgen417007* g;
	tdocumentor309005* d;
	NimStringDesc* LOC1;
	nimfr("myOpen", "docgen2.nim")
	result = 0;
	g = 0;
	nimln(39, "docgen2.nim");
	g = (tgen417007*) newObj((&NTI417009), sizeof(tgen417007));
	(*g).Sup.Sup.m_type = (&NTI417007);
	nimln(40, "docgen2.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(41, "docgen2.nim");
	nimln(913, "ast.nim");
	LOC1 = 0;
	LOC1 = tofilename_138700(((NI32) ((*module).Position)));
	d = newdocumentor_309038(LOC1, gconfigvars_115194);
	nimln(42, "docgen2.nim");
	(*d).Sup.Hastoc = NIM_TRUE;
	nimln(43, "docgen2.nim");
	asgnRefNoCycle((void**) &(*g).Doc, d);
	nimln(44, "docgen2.nim");
	result = &g->Sup;
	popFrame();
	return result;
}
N_NIMCALL(void, finishdoc2pass_417076)(NimStringDesc* project) {
	nimfr("finishDoc2Pass", "docgen2.nim")
	popFrame();
}N_NOINLINE(void, compilerdocgen2Init)(void) {
	nimfr("docgen2", "docgen2.nim")
	popFrame();
}

N_NOINLINE(void, compilerdocgen2DatInit)(void) {
static TNimNode* TMP7016[2];
static TNimNode TMP7014[3];
NTI417007.size = sizeof(tgen417007);
NTI417007.kind = 17;
NTI417007.base = (&NTI224003);
NTI417007.flags = 2;
TMP7016[0] = &TMP7014[1];
TMP7014[1].kind = 1;
TMP7014[1].offset = offsetof(tgen417007, Doc);
TMP7014[1].typ = (&NTI309007);
TMP7014[1].name = "doc";
TMP7016[1] = &TMP7014[2];
TMP7014[2].kind = 1;
TMP7014[2].offset = offsetof(tgen417007, Module);
TMP7014[2].typ = (&NTI173657);
TMP7014[2].name = "module";
TMP7014[0].len = 2; TMP7014[0].kind = 2; TMP7014[0].sons = &TMP7016[0];
NTI417007.node = &TMP7014[0];
NTI417009.size = sizeof(tgen417007*);
NTI417009.kind = 22;
NTI417009.base = (&NTI417007);
NTI417009.flags = 2;
NTI417009.marker = TMP7019;
}

