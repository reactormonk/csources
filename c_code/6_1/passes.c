/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tpass244015 tpass244015;
typedef struct tpasscontext244003 tpasscontext244003;
typedef struct tsym185843 tsym185843;
typedef struct trodreader234024 trodreader234024;
typedef struct tnode185813 tnode185813;
typedef struct tidobj165013 tidobj165013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq185845 ttypeseq185845;
typedef struct ttype185847 ttype185847;
typedef struct TGenericSeq TGenericSeq;
typedef struct tscope185837 tscope185837;
typedef struct TY185943 TY185943;
typedef struct tinstantiation185833 tinstantiation185833;
typedef struct tstrtable185817 tstrtable185817;
typedef struct tsymseq185815 tsymseq185815;
typedef struct tident165019 tident165019;
typedef struct tlineinfo161527 tlineinfo161527;
typedef struct tloc185827 tloc185827;
typedef struct trope143007 trope143007;
typedef struct tlib185831 tlib185831;
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq185807 tnodeseq185807;
typedef struct tpassdata244017 tpassdata244017;
typedef struct TY10665 TY10665;
typedef struct tllstream173204 tllstream173204;
typedef struct tparsers218029 tparsers218029;
typedef struct tparser203203 tparser203203;
typedef struct tlexer177176 tlexer177176;
typedef struct tbaselexer175018 tbaselexer175018;
typedef struct ttoken177174 ttoken177174;
typedef struct TY185932 TY185932;
typedef struct tindex234022 tindex234022;
typedef struct tiitable194207 tiitable194207;
typedef struct tiipairseq194205 tiipairseq194205;
typedef struct tiipair194203 tiipair194203;
typedef struct tidtable185859 tidtable185859;
typedef struct tidpairseq185857 tidpairseq185857;
typedef struct tidpair185855 tidpair185855;
typedef struct tmemfile232204 tmemfile232204;
typedef struct tlistentry117017 tlistentry117017;
typedef N_NIMCALL_PTR(tpasscontext244003*, tpassopen244007) (tsym185843* module);
typedef N_NIMCALL_PTR(tpasscontext244003*, tpassopencached244009) (tsym185843* module, trodreader234024* rd);
typedef N_NIMCALL_PTR(tnode185813*, tpassprocess244013) (tpasscontext244003* p, tnode185813* toplevelstmt);
typedef N_NIMCALL_PTR(tnode185813*, tpassclose244011) (tpasscontext244003* p, tnode185813* n);
struct tpass244015 {
tpassopen244007 Field0;
tpassopencached244009 Field1;
tpassprocess244013 Field2;
tpassclose244011 Field3;
};
typedef N_NIMCALL_PTR(tsym185843*, TY244056) (tsym185843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode185813*, TY244061) (tsym185843* m, NI32 fileidx);
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
struct  tidobj165013  {
  TNimObject Sup;
NI Id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable185817  {
NI Counter;
tsymseq185815* Data;
};
struct  tlineinfo161527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef NU8 TY186025[20];
typedef tpass244015 TY244176[10];
struct tpassdata244017 {
tnode185813* Field0;
tnode185813* Field1;
};
struct  tpasscontext244003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tbaselexer175018  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream173204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlexer177176  {
  tbaselexer175018 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
};
struct  ttoken177174  {
NU8 Toktype;
NI Indent;
tident165019* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser203203  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer177176 Lex;
ttoken177174 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers218029  {
NU8 Skin;
tparser203203 Parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef tpasscontext244003* tpasscontextarray244173[10];
struct  tllstream173204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tiipair194203  {
NI Key;
NI Val;
};
struct  tiitable194207  {
NI Counter;
tiipairseq194205* Data;
};
struct  tindex234022  {
NI Lastidxkey;
NI Lastidxval;
tiitable194207 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair185855  {
tidobj165013* Key;
TNimObject* Val;
};
struct  tidtable185859  {
NI Counter;
tidpairseq185857* Data;
};
struct  tmemfile232204  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader234024  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY185932* Moddeps;
TY185932* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex234022 Index;
tindex234022 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable185859 Syms;
tmemfile232204 Memfile;
tsymseq185815* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
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
struct tnodeseq185807 {
  TGenericSeq Sup;
  tnode185813* data[SEQ_DECL_SIZE];
};
struct TY10665 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY185932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq194205 {
  TGenericSeq Sup;
  tiipair194203 data[SEQ_DECL_SIZE];
};
struct tidpairseq185857 {
  TGenericSeq Sup;
  tidpair185855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tpass244015, makepass_244040)(tpassopen244007 open, tpassopencached244009 opencached, tpassprocess244013 process, tpassclose244011 close);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, skipcodegen_244074)(tnode185813* n);
N_NIMCALL(NIM_BOOL, astneeded_244081)(tsym185843* s);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, clearpasses_244183)(void);
N_NIMCALL(void, registerpass_244187)(tpass244015 p);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, carrypass_244208)(tpass244015 p, tsym185843* module, tpassdata244017 m, tpassdata244017* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, carrypasses_244226)(tnode185813* nodes, tsym185843* module, tpass244015* passes, NI passesLen0);
N_NIMCALL(void, openpasses_244277)(tpasscontext244003** a, tsym185843* module);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, openpassescached_244309)(tpasscontext244003** a, tsym185843* module, trodreader234024* rd);
N_NIMCALL(void, closepasses_244359)(tpasscontext244003** a);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_244392)(tnode185813* n, tpasscontext244003** a);
N_NIMCALL(void, processtoplevelstmtcached_244437)(tnode185813* n, tpasscontext244003** a);
N_NIMCALL(void, closepassescached_244470)(tpasscontext244003** a);
N_NIMCALL(void, processimplicits_244510)(TY10665* implicits, NU8 nodekind, tpasscontext244003** a);
N_NIMCALL(tnode185813*, newnodei_186109)(NU8 kind, tlineinfo161527 info);
N_NIMCALL(tnode185813*, newstrnode_186095)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_186217)(tnode185813* father, tnode185813* son);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
N_NIMCALL(void, processmodule_244049)(tsym185843* module, tllstream173204* stream, trodreader234024* rd);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_162788)(NI32 fileidx);
N_NIMCALL(tllstream173204*, llstreamopen_173227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_163386)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_218037)(tparsers218029* p, NI32 fileidx, tllstream173204* inputstream);
N_NIMCALL(tnode185813*, parsetoplevelstmt_218054)(tparsers218029* p);
N_NIMCALL(void, closeparsers_218044)(tparsers218029* p);
N_NIMCALL(void, idsynchronizationpoint_184452)(NI idrange);
N_NIMCALL(tnode185813*, loadinitsection_234066)(trodreader234024* r);
static N_INLINE(NI, sonslen_186191)(tnode185813* n);
static NIM_CONST TY186025 TMP3177 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3178, "sons", 4);
STRING_LITERAL(TMP3185, "(len|len|len|len|len)(a) (==|==|==|==|==|==|==|==|==|==|==|==|="
"=|==|==|==|==|==|==|==)\015\012    L seq modified while iterating over"
" it", 130);
extern TFrame* frameptr_13038;
TY244056 gimportmodule_244060;
TY244061 gincludefile_244065;
extern NI gerrorcounter_162182;
TY244176 gpasses_244178;
NI gpasseslen_244179;
extern tlineinfo161527 gcmdlineinfo_162104;
extern TNimType NTI218029; /* TParsers */
extern TY10665* implicitimports_135257;
extern TY10665* implicitincludes_135279;
extern TNimType NTI2409; /* TObject */
TNimType NTI244003; /* TPassContext */
extern TNimType NTI134; /* bool */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(tpass244015, makepass_244040)(tpassopen244007 open, tpassopencached244009 opencached, tpassprocess244013 process, tpassclose244011 close) {
	tpass244015 result;
	nimfr("makePass", "passes.nim")
	memset((void*)&result, 0, sizeof(result));
	nimln(44, "passes.nim");
	result.Field0 = open;
	nimln(45, "passes.nim");
	result.Field1 = opencached;
	nimln(46, "passes.nim");
	result.Field3 = close;
	nimln(47, "passes.nim");
	result.Field2 = process;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, skipcodegen_244074)(tnode185813* n) {
	NIM_BOOL result;
	nimfr("skipCodegen", "passes.nim")
	result = 0;
	nimln(66, "passes.nim");
	nimln(66, "passes.nim");
	result = (0 < gerrorcounter_162182);
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, astneeded_244081)(tsym185843* s) {
	NIM_BOOL result;
	nimfr("astNeeded", "passes.nim")
	result = 0;
	nimln(73, "passes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		nimln(75, "passes.nim");
		LOC3 = 0;
		nimln(74, "passes.nim");
		LOC4 = 0;
		nimln(73, "passes.nim");
		LOC5 = 0;
		nimln(73, "passes.nim");
		LOC5 = ((12288 &(1<<(((*s).Kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		nimln(74, "passes.nim");
		nimln(74, "passes.nim");
		LOC5 = ((8454144 & (*s).Flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		nimln(75, "passes.nim");
		nimln(75, "passes.nim");
		LOC4 = !(((*(*s).Typ).Callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		nimln(76, "passes.nim");
		if (((TMP3177[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3178));
		if ((NU)(2) >= (NU)((*(*s).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*(*s).Ast).kindU.S6.Sons->data[2]).Kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		nimln(77, "passes.nim");
		result = NIM_FALSE;
	}
	goto LA1;
	LA9: ;
	{
		nimln(80, "passes.nim");
		result = NIM_TRUE;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, clearpasses_244183)(void) {
	nimfr("clearPasses", "passes.nim")
	nimln(93, "passes.nim");
	gpasseslen_244179 = 0;
	popFrame();
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

N_NIMCALL(void, registerpass_244187)(tpass244015 p) {
	nimfr("registerPass", "passes.nim")
	nimln(96, "passes.nim");
	if ((NU)(gpasseslen_244179) > (NU)(9)) raiseIndexError();
	gpasses_244178[(gpasseslen_244179)- 0] = p;
	nimln(97, "passes.nim");
	gpasseslen_244179 = addInt(gpasseslen_244179, 1);
	popFrame();
}

N_NIMCALL(void, carrypass_244208)(tpass244015 p, tsym185843* module, tpassdata244017 m, tpassdata244017* Result) {
	tpasscontext244003* c;
	nimfr("carryPass", "passes.nim")
	nimln(100, "passes.nim");
	c = p.Field0(module);
	nimln(101, "passes.nim");
	unsureAsgnRef((void**) &(*Result).Field0, p.Field2(c, m.Field0));
	nimln(102, "passes.nim");
	nimln(102, "passes.nim");
	{
		nimln(102, "passes.nim");
		nimln(102, "passes.nim");
		if (!!((p.Field3 == NIM_NIL))) goto LA3;
		nimln(102, "passes.nim");
		unsureAsgnRef((void**) &(*Result).Field1, p.Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) &(*Result).Field1, m.Field1);
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, carrypasses_244226)(tnode185813* nodes, tsym185843* module, tpass244015* passes, NI passesLen0) {
	tpassdata244017 passdata;
	tpass244015 pass_244270;
	NI i_244273;
	nimfr("carryPasses", "passes.nim")
	memset((void*)&passdata, 0, sizeof(passdata));
	nimln(107, "passes.nim");
	passdata.Field0 = nodes;
	memset((void*)&pass_244270, 0, sizeof(pass_244270));
	nimln(1530, "system.nim");
	i_244273 = 0;
	nimln(1531, "system.nim");
	while (1) {
		tpassdata244017 LOC2;
		nimln(1531, "system.nim");
		nimln(1531, "system.nim");
		if (!(i_244273 < passesLen0)) goto LA1;
		nimln(1532, "system.nim");
		if ((NU)(i_244273) >= (NU)(passesLen0)) raiseIndexError();
		pass_244270 = passes[i_244273];
		nimln(109, "passes.nim");
		memset((void*)&LOC2, 0, sizeof(LOC2));
		carrypass_244208(pass_244270, module, passdata, &LOC2);
		passdata.Field0 = LOC2.Field0;
		passdata.Field1 = LOC2.Field1;
		nimln(1533, "system.nim");
		i_244273 = addInt(i_244273, 1);
	} LA1: ;
	popFrame();
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

N_NIMCALL(void, openpasses_244277)(tpasscontext244003** a, tsym185843* module) {
	NI i_244294;
	NI HEX3Atmp_244302;
	NI TMP3179;
	NI res_244304;
	nimfr("openPasses", "passes.nim")
	i_244294 = 0;
	HEX3Atmp_244302 = 0;
	nimln(112, "passes.nim");
	nimln(112, "passes.nim");
	TMP3179 = subInt(gpasseslen_244179, 1);
	HEX3Atmp_244302 = (NI32)(TMP3179);
	nimln(1450, "system.nim");
	res_244304 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_244304 <= HEX3Atmp_244302)) goto LA1;
		nimln(1450, "system.nim");
		i_244294 = res_244304;
		nimln(113, "passes.nim");
		{
			nimln(113, "passes.nim");
			nimln(113, "passes.nim");
			if ((NU)(i_244294) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_244178[(i_244294)- 0].Field0 == 0)) goto LA4;
			nimln(114, "passes.nim");
			if ((NU)(i_244294) > (NU)(9)) raiseIndexError();
			if ((NU)(i_244294) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_244294)- 0], gpasses_244178[(i_244294)- 0].Field0(module));
		}
		goto LA2;
		LA4: ;
		{
			nimln(115, "passes.nim");
			if ((NU)(i_244294) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_244294)- 0], NIM_NIL);
		}
		LA2: ;
		nimln(1453, "system.nim");
		res_244304 = addInt(res_244304, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, openpassescached_244309)(tpasscontext244003** a, tsym185843* module, trodreader234024* rd) {
	NI i_244327;
	NI HEX3Atmp_244352;
	NI TMP3180;
	NI res_244354;
	nimfr("openPassesCached", "passes.nim")
	i_244327 = 0;
	HEX3Atmp_244352 = 0;
	nimln(118, "passes.nim");
	nimln(118, "passes.nim");
	TMP3180 = subInt(gpasseslen_244179, 1);
	HEX3Atmp_244352 = (NI32)(TMP3180);
	nimln(1450, "system.nim");
	res_244354 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_244354 <= HEX3Atmp_244352)) goto LA1;
		nimln(1450, "system.nim");
		i_244327 = res_244354;
		nimln(119, "passes.nim");
		{
			nimln(119, "passes.nim");
			nimln(119, "passes.nim");
			if ((NU)(i_244327) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_244178[(i_244327)- 0].Field1 == 0)) goto LA4;
			nimln(120, "passes.nim");
			if ((NU)(i_244327) > (NU)(9)) raiseIndexError();
			if ((NU)(i_244327) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_244327)- 0], gpasses_244178[(i_244327)- 0].Field1(module, rd));
			nimln(121, "passes.nim");
			{
				nimln(121, "passes.nim");
				nimln(121, "passes.nim");
				if ((NU)(i_244327) > (NU)(9)) raiseIndexError();
				if (!!((a[(i_244327)- 0] == NIM_NIL))) goto LA8;
				nimln(122, "passes.nim");
				if ((NU)(i_244327) > (NU)(9)) raiseIndexError();
				(*a[(i_244327)- 0]).Fromcache = NIM_TRUE;
			}
			LA8: ;
		}
		goto LA2;
		LA4: ;
		{
			nimln(124, "passes.nim");
			if ((NU)(i_244327) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_244327)- 0], NIM_NIL);
		}
		LA2: ;
		nimln(1453, "system.nim");
		res_244354 = addInt(res_244354, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, closepasses_244359)(tpasscontext244003** a) {
	tnode185813* m;
	NI i_244376;
	NI HEX3Atmp_244385;
	NI TMP3181;
	NI res_244387;
	nimfr("closePasses", "passes.nim")
	nimln(127, "passes.nim");
	m = NIM_NIL;
	i_244376 = 0;
	HEX3Atmp_244385 = 0;
	nimln(128, "passes.nim");
	nimln(128, "passes.nim");
	TMP3181 = subInt(gpasseslen_244179, 1);
	HEX3Atmp_244385 = (NI32)(TMP3181);
	nimln(1450, "system.nim");
	res_244387 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_244387 <= HEX3Atmp_244385)) goto LA1;
		nimln(1450, "system.nim");
		i_244376 = res_244387;
		nimln(129, "passes.nim");
		{
			nimln(129, "passes.nim");
			nimln(129, "passes.nim");
			if ((NU)(i_244376) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_244178[(i_244376)- 0].Field3 == 0)) goto LA4;
			nimln(129, "passes.nim");
			if ((NU)(i_244376) > (NU)(9)) raiseIndexError();
			if ((NU)(i_244376) > (NU)(9)) raiseIndexError();
			m = gpasses_244178[(i_244376)- 0].Field3(a[(i_244376)- 0], m);
		}
		LA4: ;
		nimln(130, "passes.nim");
		if ((NU)(i_244376) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_244376)- 0], NIM_NIL);
		nimln(1453, "system.nim");
		res_244387 = addInt(res_244387, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_244392)(tnode185813* n, tpasscontext244003** a) {
	NIM_BOOL result;
	tnode185813* m;
	NI i_244411;
	NI HEX3Atmp_244430;
	NI TMP3182;
	NI res_244432;
	nimfr("processTopLevelStmt", "passes.nim")
	result = 0;
	nimln(134, "passes.nim");
	m = n;
	i_244411 = 0;
	HEX3Atmp_244430 = 0;
	nimln(135, "passes.nim");
	nimln(135, "passes.nim");
	TMP3182 = subInt(gpasseslen_244179, 1);
	HEX3Atmp_244430 = (NI32)(TMP3182);
	nimln(1450, "system.nim");
	res_244432 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_244432 <= HEX3Atmp_244430)) goto LA1;
		nimln(1450, "system.nim");
		i_244411 = res_244432;
		nimln(136, "passes.nim");
		{
			nimln(136, "passes.nim");
			nimln(136, "passes.nim");
			if ((NU)(i_244411) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_244178[(i_244411)- 0].Field2 == 0)) goto LA4;
			nimln(137, "passes.nim");
			if ((NU)(i_244411) > (NU)(9)) raiseIndexError();
			if ((NU)(i_244411) > (NU)(9)) raiseIndexError();
			m = gpasses_244178[(i_244411)- 0].Field2(a[(i_244411)- 0], m);
			nimln(138, "passes.nim");
			{
				nimln(138, "passes.nim");
				if (!m == 0) goto LA8;
				nimln(138, "passes.nim");
				nimln(138, "passes.nim");
				result = NIM_FALSE;
				goto BeforeRet;
			}
			LA8: ;
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_244432 = addInt(res_244432, 1);
	} LA1: ;
	nimln(139, "passes.nim");
	result = NIM_TRUE;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, processtoplevelstmtcached_244437)(tnode185813* n, tpasscontext244003** a) {
	tnode185813* m;
	NI i_244455;
	NI HEX3Atmp_244463;
	NI TMP3183;
	NI res_244465;
	nimfr("processTopLevelStmtCached", "passes.nim")
	nimln(143, "passes.nim");
	m = n;
	i_244455 = 0;
	HEX3Atmp_244463 = 0;
	nimln(144, "passes.nim");
	nimln(144, "passes.nim");
	TMP3183 = subInt(gpasseslen_244179, 1);
	HEX3Atmp_244463 = (NI32)(TMP3183);
	nimln(1450, "system.nim");
	res_244465 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_244465 <= HEX3Atmp_244463)) goto LA1;
		nimln(1450, "system.nim");
		i_244455 = res_244465;
		nimln(145, "passes.nim");
		{
			nimln(145, "passes.nim");
			nimln(145, "passes.nim");
			if ((NU)(i_244455) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_244178[(i_244455)- 0].Field1 == 0)) goto LA4;
			nimln(145, "passes.nim");
			if ((NU)(i_244455) > (NU)(9)) raiseIndexError();
			if ((NU)(i_244455) > (NU)(9)) raiseIndexError();
			m = gpasses_244178[(i_244455)- 0].Field2(a[(i_244455)- 0], m);
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_244465 = addInt(res_244465, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, closepassescached_244470)(tpasscontext244003** a) {
	tnode185813* m;
	NI i_244487;
	NI HEX3Atmp_244503;
	NI TMP3184;
	NI res_244505;
	nimfr("closePassesCached", "passes.nim")
	nimln(148, "passes.nim");
	m = NIM_NIL;
	i_244487 = 0;
	HEX3Atmp_244503 = 0;
	nimln(149, "passes.nim");
	nimln(149, "passes.nim");
	TMP3184 = subInt(gpasseslen_244179, 1);
	HEX3Atmp_244503 = (NI32)(TMP3184);
	nimln(1450, "system.nim");
	res_244505 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_244505 <= HEX3Atmp_244503)) goto LA1;
		nimln(1450, "system.nim");
		i_244487 = res_244505;
		nimln(150, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(150, "passes.nim");
			LOC4 = 0;
			nimln(150, "passes.nim");
			nimln(150, "passes.nim");
			if ((NU)(i_244487) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_244178[(i_244487)- 0].Field1 == 0);
			if (!(LOC4)) goto LA5;
			nimln(150, "passes.nim");
			nimln(150, "passes.nim");
			if ((NU)(i_244487) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_244178[(i_244487)- 0].Field3 == 0);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(151, "passes.nim");
			if ((NU)(i_244487) > (NU)(9)) raiseIndexError();
			if ((NU)(i_244487) > (NU)(9)) raiseIndexError();
			m = gpasses_244178[(i_244487)- 0].Field3(a[(i_244487)- 0], m);
		}
		LA6: ;
		nimln(152, "passes.nim");
		if ((NU)(i_244487) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_244487)- 0], NIM_NIL);
		nimln(1453, "system.nim");
		res_244505 = addInt(res_244505, 1);
	} LA1: ;
	popFrame();
}

N_NIMCALL(void, processimplicits_244510)(TY10665* implicits, NU8 nodekind, tpasscontext244003** a) {
	NimStringDesc* module_244529;
	NI i_244533;
	NI l_244535;
	nimfr("processImplicits", "passes.nim")
	module_244529 = 0;
	nimln(2795, "system.nim");
	i_244533 = 0;
	nimln(2796, "system.nim");
	nimln(2796, "system.nim");
	l_244535 = implicits->Sup.len;
	nimln(2797, "system.nim");
	while (1) {
		tnode185813* importstmt;
		tnode185813* str;
		nimln(2797, "system.nim");
		if (!(i_244533 < l_244535)) goto LA1;
		nimln(2798, "system.nim");
		if ((NU)(i_244533) >= (NU)(implicits->Sup.len)) raiseIndexError();
		module_244529 = implicits->data[i_244533];
		nimln(157, "passes.nim");
		importstmt = newnodei_186109(nodekind, gcmdlineinfo_162104);
		nimln(158, "passes.nim");
		str = newstrnode_186095(((NU8) 20), module_244529);
		nimln(159, "passes.nim");
		(*str).Info = gcmdlineinfo_162104;
		nimln(160, "passes.nim");
		addson_186217(importstmt, str);
		nimln(161, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(161, "passes.nim");
			nimln(161, "passes.nim");
			LOC4 = 0;
			LOC4 = processtoplevelstmt_244392(importstmt, a);
			if (!!(LOC4)) goto LA5;
			nimln(161, "passes.nim");
			goto LA1;
		}
		LA5: ;
		nimln(2799, "system.nim");
		i_244533 = addInt(i_244533, 1);
		nimln(2800, "system.nim");
		{
			nimln(2800, "system.nim");
			nimln(2800, "system.nim");
			nimln(2800, "system.nim");
			if (!!((implicits->Sup.len == l_244535))) goto LA9;
			nimln(2800, "system.nim");
			failedassertimpl_79821(((NimStringDesc*) &TMP3185));
		}
		LA9: ;
	} LA1: ;
	popFrame();
}

static N_INLINE(NI, sonslen_186191)(tnode185813* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1301, "ast.nim");
	{
		nimln(1301, "ast.nim");
		if (((TMP3177[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3178));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1301, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1302, "ast.nim");
		nimln(1302, "ast.nim");
		if (((TMP3177[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3178));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, processmodule_244049)(tsym185843* module, tllstream173204* stream, trodreader234024* rd) {
	tparsers218029 p;
	tpasscontextarray244173 a;
	tllstream173204* s;
	NI32 fileidx;
	nimfr("processModule", "passes.nim")
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI218029));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	nimln(168, "passes.nim");
	fileidx = ((NI32) ((*module).Position));
	nimln(169, "passes.nim");
	{
		nimln(169, "passes.nim");
		if (!(rd == NIM_NIL)) goto LA3;
		nimln(170, "passes.nim");
		openpasses_244277(a, module);
		nimln(171, "passes.nim");
		{
			NimStringDesc* filename;
			nimln(171, "passes.nim");
			if (!(stream == NIM_NIL)) goto LA7;
			nimln(172, "passes.nim");
			filename = tofullpath_162788(fileidx);
			nimln(173, "passes.nim");
			s = llstreamopen_173227(filename, ((NU8) 0));
			nimln(174, "passes.nim");
			{
				nimln(174, "passes.nim");
				if (!(s == NIM_NIL)) goto LA11;
				nimln(175, "passes.nim");
				rawmessage_163386(((NU16) 3), filename);
				nimln(176, "passes.nim");
				goto BeforeRet;
			}
			LA11: ;
		}
		goto LA5;
		LA7: ;
		{
			nimln(178, "passes.nim");
			s = stream;
		}
		LA5: ;
		nimln(179, "passes.nim");
		while (1) {
			nimln(180, "passes.nim");
			openparsers_218037(&p, fileidx, s);
			nimln(182, "passes.nim");
			{
				nimln(182, "passes.nim");
				nimln(182, "passes.nim");
				if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA17;
				nimln(187, "passes.nim");
				processimplicits_244510(implicitimports_135257, ((NU8) 115), a);
				nimln(188, "passes.nim");
				processimplicits_244510(implicitincludes_135279, ((NU8) 120), a);
			}
			LA17: ;
			nimln(190, "passes.nim");
			while (1) {
				tnode185813* n;
				nimln(191, "passes.nim");
				n = parsetoplevelstmt_218054(&p);
				nimln(192, "passes.nim");
				{
					nimln(192, "passes.nim");
					if (!((*n).Kind == ((NU8) 1))) goto LA22;
					nimln(192, "passes.nim");
					goto LA19;
				}
				LA22: ;
				nimln(193, "passes.nim");
				{
					NIM_BOOL LOC26;
					nimln(193, "passes.nim");
					nimln(193, "passes.nim");
					LOC26 = 0;
					LOC26 = processtoplevelstmt_244392(n, a);
					if (!!(LOC26)) goto LA27;
					nimln(193, "passes.nim");
					goto LA19;
				}
				LA27: ;
			} LA19: ;
			nimln(195, "passes.nim");
			closeparsers_218044(&p);
			nimln(196, "passes.nim");
			{
				nimln(196, "passes.nim");
				nimln(196, "passes.nim");
				if (!!(((*s).Kind == ((NU8) 3)))) goto LA31;
				nimln(196, "passes.nim");
				goto LA14;
			}
			LA31: ;
		} LA14: ;
		nimln(197, "passes.nim");
		closepasses_244359(a);
		nimln(199, "passes.nim");
		idsynchronizationpoint_184452(1000);
	}
	goto LA1;
	LA3: ;
	{
		tnode185813* n;
		NI i_244655;
		NI HEX3Atmp_244676;
		NI LOC34;
		NI TMP3186;
		NI res_244678;
		nimln(201, "passes.nim");
		openpassescached_244309(a, module, rd);
		nimln(202, "passes.nim");
		n = loadinitsection_234066(rd);
		i_244655 = 0;
		HEX3Atmp_244676 = 0;
		nimln(203, "passes.nim");
		nimln(203, "passes.nim");
		nimln(203, "passes.nim");
		LOC34 = 0;
		LOC34 = sonslen_186191(n);
		TMP3186 = subInt(LOC34, 1);
		HEX3Atmp_244676 = (NI32)(TMP3186);
		nimln(1450, "system.nim");
		res_244678 = 0;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_244678 <= HEX3Atmp_244676)) goto LA35;
			nimln(1450, "system.nim");
			i_244655 = res_244678;
			nimln(203, "passes.nim");
			if (((TMP3177[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3178));
			if ((NU)(i_244655) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			processtoplevelstmtcached_244437((*n).kindU.S6.Sons->data[i_244655], a);
			nimln(1453, "system.nim");
			res_244678 = addInt(res_244678, 1);
		} LA35: ;
		nimln(204, "passes.nim");
		closepassescached_244470(a);
	}
	LA1: ;
	BeforeRet: ;
	popFrame();
}
N_NOINLINE(void, passesInit)(void) {
	nimfr("passes", "passes.nim")
	popFrame();
}

N_NOINLINE(void, passesDatInit)(void) {
static TNimNode TMP3112[1];
NTI244003.size = sizeof(tpasscontext244003);
NTI244003.kind = 17;
NTI244003.base = (&NTI2409);
NTI244003.flags = 1;
TMP3112[0].kind = 1;
TMP3112[0].offset = offsetof(tpasscontext244003, Fromcache);
TMP3112[0].typ = (&NTI134);
TMP3112[0].name = "fromCache";
NTI244003.node = &TMP3112[0];
}

