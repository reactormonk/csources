/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tsym169677 tsym169677;
typedef struct ttype169681 ttype169681;
typedef struct tstrtable169651 tstrtable169651;
typedef struct tsymseq169649 tsymseq169649;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj131009 tidobj131009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq169679 ttypeseq169679;
typedef struct tnode169647 tnode169647;
typedef struct tloc169661 tloc169661;
typedef struct trope126007 trope126007;
typedef struct tcell38846 tcell38846;
typedef struct tcellseq38862 tcellseq38862;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38858 tcellset38858;
typedef struct tpagedesc38854 tpagedesc38854;
typedef struct tmemregion22410 tmemregion22410;
typedef struct tsmallchunk21643 tsmallchunk21643;
typedef struct tllchunk22404 tllchunk22404;
typedef struct tbigchunk21645 tbigchunk21645;
typedef struct tintset21618 tintset21618;
typedef struct ttrunk21614 ttrunk21614;
typedef struct tavlnode22408 tavlnode22408;
typedef struct tgcstat40814 tgcstat40814;
typedef struct NimStringDesc NimStringDesc;
typedef struct tident131015 tident131015;
typedef struct TY169771 TY169771;
typedef struct tinstantiation169667 tinstantiation169667;
typedef struct tscope169671 tscope169671;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct tlib169665 tlib169665;
typedef struct tidentiter176106 tidentiter176106;
typedef struct tnodeseq169641 tnodeseq169641;
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
typedef struct TY169763 TY169763;
typedef struct tlistentry100011 tlistentry100011;
typedef ttype169681* TY212039[52];
struct TGenericSeq {
NI len;
NI reserved;
};
struct tstrtable169651 {
NI Counter;
tsymseq169649* Data;
};
typedef N_NIMCALL_PTR(void, TY891) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY891 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj131009 {
  TNimObject Sup;
NI Id;
};
struct tloc169661 {
NU8 K;
NU8 S;
NU8 Flags;
ttype169681* T;
trope126007* R;
trope126007* Heaproot;
NI A;
};
struct ttype169681 {
  tidobj131009 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq169679* Sons;
tnode169647* N;
tsym169677* Destructor;
tsym169677* Owner;
tsym169677* Sym;
NI64 Size;
NI Align;
tloc169661 Loc;
};
struct tcell38846 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38862 {
NI Len;
NI Cap;
tcell38846** D;
};
struct tcellset38858 {
NI Counter;
NI Max;
tpagedesc38854* Head;
tpagedesc38854** Data;
};
typedef tsmallchunk21643* TY22422[512];
typedef ttrunk21614* ttrunkbuckets21616[256];
struct tintset21618 {
ttrunkbuckets21616 Data;
};
struct tmemregion22410 {
NI Minlargeobj;
NI Maxlargeobj;
TY22422 Freesmallchunks;
tllchunk22404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21645* Freechunkslist;
tintset21618 Chunkstarts;
tavlnode22408* Root;
tavlnode22408* Deleted;
tavlnode22408* Last;
tavlnode22408* Freeavlnodes;
};
struct tgcstat40814 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40816 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38862 Zct;
tcellseq38862 Decstack;
tcellset38858 Cycleroots;
tcellseq38862 Tempstack;
NI Recgclock;
tmemregion22410 Region;
tgcstat40814 Stat;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tlineinfo128308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tsym169677 {
  tidobj131009 Sup;
NU8 Kind;
union {
struct {ttypeseq169679* Typeinstcache;
} S1;
struct {TY169771* Procinstcache;
tscope169671* Scope;
} S2;
struct {TY169771* Usedgenerics;
tstrtable169651 Tab;
} S3;
} kindU;
NU16 Magic;
ttype169681* Typ;
tident131015* Name;
tlineinfo128308 Info;
tsym169677* Owner;
NU32 Flags;
tnode169647* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc169661 Loc;
tlib169665* Annex;
tnode169647* Constraint;
};
struct tidentiter176106 {
NI H;
tident131015* Name;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef ttype169681* TY212218[70];
struct tnode169647 {
ttype169681* Typ;
tlineinfo128308 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym169677* Sym;
} S4;
struct {tident131015* Ident;
} S5;
struct {tnodeseq169641* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY169850[19];
struct trope126007 {
  TNimObject Sup;
trope126007* Left;
trope126007* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY21621[8];
struct tpagedesc38854 {
tpagedesc38854* Next;
NI Key;
TY21621 Bits;
};
struct tbasechunk21641 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21643 {
  tbasechunk21641 Sup;
tsmallchunk21643* Next;
tsmallchunk21643* Prev;
tfreecell21633* Freelist;
NI Free;
NI Acc;
NF64 Data;
};
struct tllchunk22404 {
NI Size;
NI Acc;
tllchunk22404* Next;
};
struct tbigchunk21645 {
  tbasechunk21641 Sup;
tbigchunk21645* Next;
tbigchunk21645* Prev;
NI Align;
NF64 Data;
};
struct ttrunk21614 {
ttrunk21614* Next;
NI Key;
TY21621 Bits;
};
typedef tavlnode22408* TY22414[2];
struct tavlnode22408 {
TY22414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tident131015 {
  tidobj131009 Sup;
NimStringDesc* S;
tident131015* Next;
NI H;
};
struct tinstantiation169667 {
tsym169677* Sym;
ttypeseq169679* Concretetypes;
TY169763* Usedby;
};
struct tscope169671 {
NI Depthlevel;
tstrtable169651 Symbols;
tscope169671* Parent;
};
struct tlistentry100011 {
  TNimObject Sup;
tlistentry100011* Prev;
tlistentry100011* Next;
};
struct tlib169665 {
  tlistentry100011 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope126007* Name;
tnode169647* Path;
};
struct tfreecell21633 {
tfreecell21633* Next;
NI Zerofield;
};
struct tsymseq169649 {
  TGenericSeq Sup;
  tsym169677* data[SEQ_DECL_SIZE];
};
struct ttypeseq169679 {
  TGenericSeq Sup;
  ttype169681* data[SEQ_DECL_SIZE];
};
struct TY169771 {
  TGenericSeq Sup;
  tinstantiation169667* data[SEQ_DECL_SIZE];
};
struct tnodeseq169641 {
  TGenericSeq Sup;
  tnode169647* data[SEQ_DECL_SIZE];
};
struct TY169763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registersystype_212014)(ttype169681* t);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(ttype169681*, newsystype_212062)(NU8 kind, NI size);
N_NIMCALL(ttype169681*, newtype_169882)(NU8 kind, tsym169677* owner);
N_NIMCALL(tsym169677*, getsyssym_212034)(NimStringDesc* name);
N_NIMCALL(tsym169677*, strtableget_176084)(tstrtable169651 t, tident131015* name);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(tident131015*, getident_131448)(NimStringDesc* identifier);
N_NIMCALL(void, rawmessage_129518)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym169677*, newsym_169875)(NU8 symkind, tident131015* name, tsym169677* owner, tlineinfo128308 info);
N_NIMCALL(void, loadstub_209571)(tsym169677* s);
N_NIMCALL(tsym169677*, getsysmagic_212102)(NimStringDesc* name, NU16 m);
N_NIMCALL(tsym169677*, initidentiter_176110)(tidentiter176106* ti, tstrtable169651 tab, tident131015* s);
N_NIMCALL(tsym169677*, nextidentiter_176117)(tidentiter176106* ti, tstrtable169651 tab);
N_NIMCALL(ttype169681*, systypefromname_212158)(NimStringDesc* name);
N_NIMCALL(ttype169681*, getsystype_212018)(NU8 kind);
N_NIMCALL(void, internalerror_129699)(NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_68675, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, resetsystypes_212223)(void);
N_NIMCALL(void, initstrtable_169932)(tstrtable169651* x);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(ttype169681*, getintlittype_212292)(tnode169647* literal);
N_NIMCALL(ttype169681*, copytype_169963)(ttype169681* t, tsym169677* owner, NIM_BOOL keepid);
static N_INLINE(ttype169681*, skipintlit_212324)(ttype169681* t);
N_NIMCALL(void, addsonskipintlit_212347)(ttype169681* father, ttype169681* son);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, propagatetoowner_172709)(ttype169681* owner, ttype169681* elem);
N_NIMCALL(void, setintlittype_212397)(tnode169647* result);
N_NIMCALL(void, internalerror_129687)(tlineinfo128308 info, NimStringDesc* errmsg);
N_NIMCALL(tsym169677*, getcompilerproc_212022)(NimStringDesc* name);
N_NIMCALL(tident131015*, getident_131454)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_101852)(NimStringDesc* x);
N_NIMCALL(void, strtableadd_176078)(tstrtable169651* t, tsym169677* n);
N_NIMCALL(void, registercompilerproc_212026)(tsym169677* s);
N_NIMCALL(void, finishsystem_212030)(tstrtable169651 tab);
STRING_LITERAL(TMP2944, "tab", 3);
STRING_LITERAL(TMP2945, "int", 3);
STRING_LITERAL(TMP2946, "int8", 4);
STRING_LITERAL(TMP2947, "int16", 5);
STRING_LITERAL(TMP2948, "int32", 5);
STRING_LITERAL(TMP2949, "int64", 5);
STRING_LITERAL(TMP2950, "uint", 4);
STRING_LITERAL(TMP2951, "uint8", 5);
STRING_LITERAL(TMP2952, "uint16", 6);
STRING_LITERAL(TMP2953, "uint32", 6);
STRING_LITERAL(TMP2954, "uint64", 6);
STRING_LITERAL(TMP2955, "float", 5);
STRING_LITERAL(TMP2956, "float32", 7);
STRING_LITERAL(TMP2957, "float64", 7);
STRING_LITERAL(TMP2958, "float128", 8);
STRING_LITERAL(TMP2959, "bool", 4);
STRING_LITERAL(TMP2960, "char", 4);
STRING_LITERAL(TMP2961, "string", 6);
STRING_LITERAL(TMP2962, "cstring", 7);
STRING_LITERAL(TMP2963, "pointer", 7);
STRING_LITERAL(TMP2964, "request for typekind: ", 22);
STRING_LITERAL(TMP2965, "wanted: ", 8);
STRING_LITERAL(TMP2966, " got: ", 6);
STRING_LITERAL(TMP2967, "type not found: ", 16);
static NIM_CONST TY169850 TMP2968 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2969, "intVal", 6);
STRING_LITERAL(TMP2970, "invalid int size", 16);
tsym169677* systemmodule_212011;
TY212039 gsystypes_212041;
tstrtable169651 compilerprocs_212042;
extern TFrame* frameptr_12027;
extern tgcheap40816 gch_40842;
extern NI ptrsize_123579;
extern TNimType NTI169234; /* TTypeKind */
TY212218 inttypecache_212220;
extern TNimType NTI169679; /* TTypeSeq */
extern NI intsize_123577;
extern tstrtable169651 rodcompilerprocs_207056;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(tcell38846*, usrtocell_42243)(void* usr) {
	tcell38846* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	result = ((tcell38846*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38846))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_43402)(tcell38846* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(184, "gc.nim");
	addzct_42215(&gch_40842.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(236, "gc.nim");
	{
		tcell38846* c;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(237, "gc.nim");
		c = usrtocell_42243(src);
		nimln(157, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(239, "gc.nim");
	{
		tcell38846* c;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(240, "gc.nim");
		c = usrtocell_42243((*dest));
		nimln(241, "gc.nim");
		{
			nimln(155, "gc.nim");
			(*c).Refcount -= 8;
			nimln(156, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(242, "gc.nim");
			rtladdzct_43402(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(243, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, registersystype_212014)(ttype169681* t) {
	nimfr("registerSysType", "magicsys.nim")
	nimln(31, "magicsys.nim");
	{
		nimln(31, "magicsys.nim");
		if (!(gsystypes_212041[((*t).Kind)- 0] == NIM_NIL)) goto LA3;
		nimln(31, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_212041[((*t).Kind)- 0], t);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(ttype169681*, newsystype_212062)(NU8 kind, NI size) {
	ttype169681* result;
	nimfr("newSysType", "magicsys.nim")
	result = 0;
	nimln(34, "magicsys.nim");
	result = newtype_169882(kind, systemmodule_212011);
	nimln(35, "magicsys.nim");
	(*result).Size = ((NI64) (size));
	nimln(36, "magicsys.nim");
	(*result).Align = size;
	popFrame();
	return result;
}

N_NIMCALL(tsym169677*, getsyssym_212034)(NimStringDesc* name) {
	tsym169677* result;
	tident131015* LOC1;
	nimfr("getSysSym", "magicsys.nim")
	result = 0;
	nimln(39, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_212011).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2944));
	nimln(39, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getident_131448(name);
	result = strtableget_176084((*systemmodule_212011).kindU.S3.Tab, LOC1);
	nimln(40, "magicsys.nim");
	{
		tident131015* LOC6;
		nimln(40, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA4;
		nimln(41, "magicsys.nim");
		rawmessage_129518(((NU16) 64), name);
		nimln(42, "magicsys.nim");
		nimln(42, "magicsys.nim");
		LOC6 = 0;
		LOC6 = getident_131448(name);
		result = newsym_169875(((NU8) 0), LOC6, systemmodule_212011, (*systemmodule_212011).Info);
		nimln(43, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).Typ, newtype_169882(((NU8) 50), systemmodule_212011));
	}
	LA4: ;
	nimln(44, "magicsys.nim");
	{
		nimln(44, "magicsys.nim");
		if (!((*result).Kind == ((NU8) 22))) goto LA9;
		nimln(44, "magicsys.nim");
		loadstub_209571(result);
	}
	LA9: ;
	popFrame();
	return result;
}

N_NIMCALL(tsym169677*, getsysmagic_212102)(NimStringDesc* name, NU16 m) {
	tsym169677* result;
	tidentiter176106 ti;
	tident131015* id;
	nimfr("getSysMagic", "magicsys.nim")
	result = 0;
	memset((void*)&ti, 0, sizeof(ti));
	nimln(48, "magicsys.nim");
	id = getident_131448(name);
	nimln(49, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_212011).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2944));
	result = initidentiter_176110(&ti, (*systemmodule_212011).kindU.S3.Tab, id);
	nimln(50, "magicsys.nim");
	while (1) {
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(51, "magicsys.nim");
		{
			nimln(51, "magicsys.nim");
			if (!((*result).Kind == ((NU8) 22))) goto LA4;
			nimln(51, "magicsys.nim");
			loadstub_209571(result);
		}
		LA4: ;
		nimln(52, "magicsys.nim");
		{
			nimln(52, "magicsys.nim");
			if (!((*result).Magic == m)) goto LA8;
			nimln(52, "magicsys.nim");
			goto BeforeRet;
		}
		LA8: ;
		nimln(53, "magicsys.nim");
		if (!(((64 &(1<<(((*systemmodule_212011).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2944));
		result = nextidentiter_176117(&ti, (*systemmodule_212011).kindU.S3.Tab);
	} LA1: ;
	nimln(54, "magicsys.nim");
	rawmessage_129518(((NU16) 64), name);
	nimln(55, "magicsys.nim");
	result = newsym_169875(((NU8) 0), id, systemmodule_212011, (*systemmodule_212011).Info);
	nimln(56, "magicsys.nim");
	asgnRefNoCycle((void**) &(*result).Typ, newtype_169882(((NU8) 50), systemmodule_212011));
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(ttype169681*, systypefromname_212158)(NimStringDesc* name) {
	ttype169681* result;
	tsym169677* LOC1;
	nimfr("sysTypeFromName", "magicsys.nim")
	result = 0;
	nimln(59, "magicsys.nim");
	nimln(59, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getsyssym_212034(name);
	result = (*LOC1).Typ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(ttype169681*, getsystype_212018)(NU8 kind) {
	ttype169681* result;
	nimfr("getSysType", "magicsys.nim")
	result = 0;
	nimln(62, "magicsys.nim");
	result = gsystypes_212041[(kind)- 0];
	nimln(63, "magicsys.nim");
	{
		nimln(63, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA3;
		nimln(64, "magicsys.nim");
		switch (kind) {
		case ((NU8) 31):
		{
			nimln(65, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2945));
		}
		break;
		case ((NU8) 32):
		{
			nimln(66, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2946));
		}
		break;
		case ((NU8) 33):
		{
			nimln(67, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2947));
		}
		break;
		case ((NU8) 34):
		{
			nimln(68, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2948));
		}
		break;
		case ((NU8) 35):
		{
			nimln(69, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2949));
		}
		break;
		case ((NU8) 40):
		{
			nimln(70, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2950));
		}
		break;
		case ((NU8) 41):
		{
			nimln(71, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2951));
		}
		break;
		case ((NU8) 42):
		{
			nimln(72, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2952));
		}
		break;
		case ((NU8) 43):
		{
			nimln(73, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2953));
		}
		break;
		case ((NU8) 44):
		{
			nimln(74, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2954));
		}
		break;
		case ((NU8) 36):
		{
			nimln(75, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2955));
		}
		break;
		case ((NU8) 37):
		{
			nimln(76, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2956));
		}
		break;
		case ((NU8) 38):
		{
			nimln(77, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2957));
		}
		break;
		case ((NU8) 39):
		{
			nimln(78, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2958));
		}
		break;
		case ((NU8) 1):
		{
			nimln(79, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2959));
		}
		break;
		case ((NU8) 2):
		{
			nimln(80, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2960));
		}
		break;
		case ((NU8) 28):
		{
			nimln(81, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2961));
		}
		break;
		case ((NU8) 29):
		{
			nimln(82, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2962));
		}
		break;
		case ((NU8) 26):
		{
			nimln(83, "magicsys.nim");
			result = systypefromname_212158(((NimStringDesc*) &TMP2963));
		}
		break;
		case ((NU8) 5):
		{
			nimln(84, "magicsys.nim");
			result = newsystype_212062(((NU8) 5), ptrsize_123579);
		}
		break;
		default:
		{
			NimStringDesc* LOC26;
			nimln(85, "magicsys.nim");
			nimln(85, "magicsys.nim");
			LOC26 = 0;
			nimln(85, "magicsys.nim");
			LOC26 = rawNewString(reprEnum(kind, (&NTI169234))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP2964));
appendString(LOC26, reprEnum(kind, (&NTI169234)));
			internalerror_129699(LOC26);
		}
		break;
		}
		nimln(86, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_212041[(kind)- 0], result);
	}
	LA3: ;
	nimln(87, "magicsys.nim");
	{
		NimStringDesc* LOC31;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*result).Kind == kind))) goto LA29;
		nimln(88, "magicsys.nim");
		nimln(88, "magicsys.nim");
		LOC31 = 0;
		nimln(88, "magicsys.nim");
		nimln(88, "magicsys.nim");
		LOC31 = rawNewString(reprEnum(kind, (&NTI169234))->Sup.len + reprEnum((*result).Kind, (&NTI169234))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP2965));
appendString(LOC31, reprEnum(kind, (&NTI169234)));
appendString(LOC31, ((NimStringDesc*) &TMP2966));
appendString(LOC31, reprEnum((*result).Kind, (&NTI169234)));
		internalerror_129699(LOC31);
	}
	LA29: ;
	nimln(89, "magicsys.nim");
	{
		NimStringDesc* LOC36;
		nimln(89, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA34;
		nimln(89, "magicsys.nim");
		nimln(89, "magicsys.nim");
		LOC36 = 0;
		nimln(89, "magicsys.nim");
		LOC36 = rawNewString(reprEnum(kind, (&NTI169234))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP2967));
appendString(LOC36, reprEnum(kind, (&NTI169234)));
		internalerror_129699(LOC36);
	}
	LA34: ;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
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

N_NIMCALL(void, resetsystypes_212223)(void) {
	NU8 i_212256;
	NU8 res_212283;
	NI i_212281;
	NI res_212286;
	nimfr("resetSysTypes", "magicsys.nim")
	nimln(95, "magicsys.nim");
	asgnRefNoCycle((void**) &systemmodule_212011, NIM_NIL);
	nimln(96, "magicsys.nim");
	initstrtable_169932(&compilerprocs_212042);
	i_212256 = 0;
	nimln(1281, "system.nim");
	res_212283 = ((NU8) 0);
	nimln(1282, "system.nim");
	while (1) {
		nimln(1282, "system.nim");
		if (!(res_212283 <= ((NU8) 51))) goto LA1;
		nimln(1281, "system.nim");
		i_212256 = res_212283;
		nimln(98, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_212041[(i_212256)- 0], NIM_NIL);
		nimln(1284, "system.nim");
		res_212283 = addInt(res_212283, 1);
	} LA1: ;
	i_212281 = 0;
	nimln(1281, "system.nim");
	res_212286 = -5;
	nimln(1282, "system.nim");
	while (1) {
		nimln(1282, "system.nim");
		if (!(((NI) (res_212286)) <= 64)) goto LA2;
		nimln(1281, "system.nim");
		i_212281 = res_212286;
		nimln(101, "magicsys.nim");
		if (i_212281 < -5 || i_212281 > 64) raiseIndexError();
		asgnRefNoCycle((void**) &inttypecache_212220[(i_212281)- -5], NIM_NIL);
		nimln(1284, "system.nim");
		res_212286 = addInt(res_212286, 1);
	} LA2: ;
	popFrame();
}

N_NIMCALL(ttype169681*, getintlittype_212292)(tnode169647* literal) {
	ttype169681* result;
	NI64 value;
	nimfr("getIntLitType", "magicsys.nim")
	result = 0;
	nimln(105, "magicsys.nim");
	if (!(((TMP2968[(*literal).Kind/8] &(1<<((*literal).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2969));
	value = (*literal).kindU.S1.Intval;
	nimln(106, "magicsys.nim");
	{
		NIM_BOOL LOC3;
		nimln(106, "magicsys.nim");
		nimln(688, "system.nim");
		LOC3 = (-5 <= value);
		if (!(LOC3)) goto LA4;
		nimln(106, "magicsys.nim");
		LOC3 = (value <= 64);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(107, "magicsys.nim");
		if (((NI) (value)) < -5 || ((NI) (value)) > 64) raiseIndexError();
		result = inttypecache_212220[(((NI) (value)))- -5];
		nimln(108, "magicsys.nim");
		{
			ttype169681* ti;
			nimln(108, "magicsys.nim");
			if (!(result == NIM_NIL)) goto LA9;
			nimln(109, "magicsys.nim");
			ti = getsystype_212018(((NU8) 31));
			nimln(110, "magicsys.nim");
			result = copytype_169963(ti, (*ti).Owner, NIM_FALSE);
			nimln(111, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).N, literal);
			nimln(112, "magicsys.nim");
			if (((NI) (value)) < -5 || ((NI) (value)) > 64) raiseIndexError();
			asgnRefNoCycle((void**) &inttypecache_212220[(((NI) (value)))- -5], result);
		}
		LA9: ;
	}
	goto LA1;
	LA5: ;
	{
		ttype169681* ti;
		nimln(114, "magicsys.nim");
		ti = getsystype_212018(((NU8) 31));
		nimln(115, "magicsys.nim");
		result = copytype_169963(ti, (*ti).Owner, NIM_FALSE);
		nimln(116, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).N, literal);
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(ttype169681*, skipintlit_212324)(ttype169681* t) {
	ttype169681* result;
	nimfr("skipIntLit", "magicsys.nim")
	result = 0;
	nimln(119, "magicsys.nim");
	{
		NIM_BOOL LOC3;
		nimln(119, "magicsys.nim");
		nimln(119, "magicsys.nim");
		LOC3 = ((*t).Kind == ((NU8) 31));
		if (!(LOC3)) goto LA4;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		LOC3 = !(((*t).N == NIM_NIL));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(120, "magicsys.nim");
		result = getsystype_212018(((NU8) 31));
	}
	goto LA1;
	LA5: ;
	{
		nimln(122, "magicsys.nim");
		result = t;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38846* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(218, "gc.nim");
	c = usrtocell_42243(p);
	nimln(220, "gc.nim");
	{
		nimln(155, "gc.nim");
		(*c).Refcount -= 8;
		nimln(156, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(221, "gc.nim");
		rtladdzct_43402(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, addsonskipintlit_212347)(ttype169681* father, ttype169681* son) {
	ttype169681* s;
	nimfr("AddSonSkipIntLit", "magicsys.nim")
	nimln(125, "magicsys.nim");
	{
		nimln(125, "magicsys.nim");
		if (!(*father).Sons == 0) goto LA3;
		nimln(125, "magicsys.nim");
		if ((*father).Sons) nimGCunrefNoCycle((*father).Sons);
		(*father).Sons = (ttypeseq169679*) newSeqRC1((&NTI169679), 0);
	}
	LA3: ;
	nimln(126, "magicsys.nim");
	s = skipintlit_212324(son);
	nimln(127, "magicsys.nim");
	(*father).Sons = (ttypeseq169679*) incrSeq(&((*father).Sons)->Sup, sizeof(ttype169681*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], s);
	nimln(128, "magicsys.nim");
	propagatetoowner_172709(father, s);
	popFrame();
}

N_NIMCALL(void, setintlittype_212397)(tnode169647* result) {
	NI64 i;
	nimfr("setIntLitType", "magicsys.nim")
	nimln(131, "magicsys.nim");
	if (!(((TMP2968[(*result).Kind/8] &(1<<((*result).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2969));
	i = (*result).kindU.S1.Intval;
	nimln(132, "magicsys.nim");
	switch (intsize_123577) {
	case 8:
	{
		nimln(133, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).Typ, getintlittype_212292(result));
	}
	break;
	case 4:
	{
		nimln(135, "magicsys.nim");
		{
			NIM_BOOL LOC5;
			nimln(135, "magicsys.nim");
			nimln(688, "system.nim");
			LOC5 = ((-2147483647 -1) <= i);
			if (!(LOC5)) goto LA6;
			nimln(135, "magicsys.nim");
			LOC5 = (i <= 2147483647);
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(136, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_212292(result));
		}
		goto LA3;
		LA7: ;
		{
			nimln(138, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_212018(((NU8) 35)));
		}
		LA3: ;
	}
	break;
	case 2:
	{
		nimln(140, "magicsys.nim");
		{
			NIM_BOOL LOC13;
			nimln(140, "magicsys.nim");
			nimln(688, "system.nim");
			LOC13 = (-32768 <= i);
			if (!(LOC13)) goto LA14;
			nimln(140, "magicsys.nim");
			LOC13 = (i <= 32767);
			LA14: ;
			if (!LOC13) goto LA15;
			nimln(141, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_212292(result));
		}
		goto LA11;
		LA15: ;
		{
			NIM_BOOL LOC18;
			nimln(142, "magicsys.nim");
			nimln(688, "system.nim");
			LOC18 = ((-2147483647 -1) <= i);
			if (!(LOC18)) goto LA19;
			nimln(142, "magicsys.nim");
			LOC18 = (i <= 2147483647);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(143, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_212018(((NU8) 34)));
		}
		goto LA11;
		LA20: ;
		{
			nimln(145, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_212018(((NU8) 35)));
		}
		LA11: ;
	}
	break;
	case 1:
	{
		nimln(148, "magicsys.nim");
		{
			NIM_BOOL LOC26;
			nimln(148, "magicsys.nim");
			nimln(688, "system.nim");
			LOC26 = (-128 <= i);
			if (!(LOC26)) goto LA27;
			nimln(148, "magicsys.nim");
			LOC26 = (i <= 127);
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(149, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_212292(result));
		}
		goto LA24;
		LA28: ;
		{
			NIM_BOOL LOC31;
			nimln(150, "magicsys.nim");
			nimln(688, "system.nim");
			LOC31 = (-32768 <= i);
			if (!(LOC31)) goto LA32;
			nimln(150, "magicsys.nim");
			LOC31 = (i <= 32767);
			LA32: ;
			if (!LOC31) goto LA33;
			nimln(151, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_212018(((NU8) 33)));
		}
		goto LA24;
		LA33: ;
		{
			NIM_BOOL LOC36;
			nimln(152, "magicsys.nim");
			nimln(688, "system.nim");
			LOC36 = ((-2147483647 -1) <= i);
			if (!(LOC36)) goto LA37;
			nimln(152, "magicsys.nim");
			LOC36 = (i <= 2147483647);
			LA37: ;
			if (!LOC36) goto LA38;
			nimln(153, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_212018(((NU8) 34)));
		}
		goto LA24;
		LA38: ;
		{
			nimln(155, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_212018(((NU8) 35)));
		}
		LA24: ;
	}
	break;
	default:
	{
		nimln(156, "magicsys.nim");
		internalerror_129687((*result).Info, ((NimStringDesc*) &TMP2970));
	}
	break;
	}
	popFrame();
}

N_NIMCALL(tsym169677*, getcompilerproc_212022)(NimStringDesc* name) {
	tsym169677* result;
	tident131015* ident;
	NI LOC1;
	nimfr("getCompilerProc", "magicsys.nim")
	result = 0;
	nimln(159, "magicsys.nim");
	nimln(159, "magicsys.nim");
	LOC1 = hashignorestyle_101852(name);
	ident = getident_131454(name, LOC1);
	nimln(160, "magicsys.nim");
	result = strtableget_176084(compilerprocs_212042, ident);
	nimln(161, "magicsys.nim");
	{
		nimln(161, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA4;
		nimln(162, "magicsys.nim");
		result = strtableget_176084(rodcompilerprocs_207056, ident);
		nimln(163, "magicsys.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((result == NIM_NIL))) goto LA8;
			nimln(164, "magicsys.nim");
			strtableadd_176078(&compilerprocs_212042, result);
			nimln(165, "magicsys.nim");
			{
				nimln(165, "magicsys.nim");
				if (!((*result).Kind == ((NU8) 22))) goto LA12;
				nimln(165, "magicsys.nim");
				loadstub_209571(result);
			}
			LA12: ;
		}
		LA8: ;
	}
	LA4: ;
	popFrame();
	return result;
}

N_NIMCALL(void, registercompilerproc_212026)(tsym169677* s) {
	nimfr("registerCompilerProc", "magicsys.nim")
	nimln(168, "magicsys.nim");
	strtableadd_176078(&compilerprocs_212042, s);
	popFrame();
}

N_NIMCALL(void, finishsystem_212030)(tstrtable169651 tab) {
	nimfr("FinishSystem", "magicsys.nim")
	popFrame();
}
N_NOINLINE(void, magicsysInit)(void) {
	nimfr("magicsys", "magicsys.nim")
	nimln(172, "magicsys.nim");
	initstrtable_169932(&compilerprocs_212042);
	popFrame();
}

N_NOINLINE(void, magicsysDatInit)(void) {
}
