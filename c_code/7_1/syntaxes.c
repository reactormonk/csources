/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode185813 tnode185813;
typedef struct tparsers218029 tparsers218029;
typedef struct tparser203203 tparser203203;
typedef struct tlexer177176 tlexer177176;
typedef struct tbaselexer175018 tbaselexer175018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream173204 tllstream173204;
typedef struct ttoken177174 ttoken177174;
typedef struct tident165019 tident165019;
typedef struct tidobj165013 tidobj165013;
typedef struct ttype185847 ttype185847;
typedef struct tlineinfo161527 tlineinfo161527;
typedef struct tsym185843 tsym185843;
typedef struct tnodeseq185807 tnodeseq185807;
typedef struct ttypeseq185845 ttypeseq185845;
typedef struct tloc185827 tloc185827;
typedef struct trope143007 trope143007;
typedef struct tscope185837 tscope185837;
typedef struct TY185943 TY185943;
typedef struct tinstantiation185833 tinstantiation185833;
typedef struct tstrtable185817 tstrtable185817;
typedef struct tsymseq185815 tsymseq185815;
typedef struct tlib185831 tlib185831;
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
typedef NimStringDesc* TY218016[4];
typedef NimStringDesc* TY218022[4];
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
struct  tidobj165013  {
  TNimObject Sup;
NI Id;
};
struct  tident165019  {
  tidobj165013 Sup;
NimStringDesc* S;
tident165019* Next;
NI H;
};
struct  tlineinfo161527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
typedef NimStringDesc* TY125662[1];
struct  tllstream173204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct  tstrtable185817  {
NI Counter;
tsymseq185815* Data;
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
struct  trope143007  {
  TNimObject Sup;
trope143007* Left;
trope143007* Right;
NI Length;
NimStringDesc* Data;
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
N_NIMCALL(tnode185813*, parsefile_218033)(NI32 fileidx);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_162788)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_10203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_163386)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tllstream173204*, llstreamopen_173222)(FILE** f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode185813*, parseall_218049)(tparsers218029* p);
N_NIMCALL(tnode185813*, parseall_203212)(tparser203203* p);
N_NIMCALL(tnode185813*, parseall_208006)(tparser203203* p);
N_NIMCALL(void, internalerror_163606)(NimStringDesc* errmsg);
N_NIMCALL(tnode185813*, parsetoplevelstmt_218054)(tparsers218029* p);
N_NIMCALL(tnode185813*, parsetoplevelstmt_203222)(tparser203203* p);
N_NIMCALL(tnode185813*, parsetoplevelstmt_208013)(tparser203203* p);
N_NIMCALL(NI, utf8bom_218094)(NimStringDesc* s);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, containsshebang_218100)(NimStringDesc* s, NI i);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(tnode185813*, parsepipe_218138)(NimStringDesc* filename, tllstream173204* inputstream);
N_NIMCALL(tllstream173204*, llstreamopen_173227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_173248)(tllstream173204* s, NimStringDesc** line);
N_NIMCALL(void, openparser_203364)(tparser203203* p, NimStringDesc* filename, tllstream173204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream173204*, llstreamopen_173218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(void, closeparser_203217)(tparser203203* p);
N_NIMCALL(void, llstreamclose_173238)(tllstream173204* s);
N_NIMCALL(NU8, getfilter_218219)(tident165019* ident);
N_NIMCALL(NIM_BOOL, identeq_165469)(tident165019* id, NimStringDesc* name);
N_NIMCALL(NU8, getparser_218276)(tident165019* ident);
N_NIMCALL(tident165019*, getcallee_218333)(tnode185813* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rendertree_209051)(tnode185813* n, NU8 renderflags);
N_NIMCALL(tllstream173204*, applyfilter_218426)(tparsers218029* p, tnode185813* n, NimStringDesc* filename, tllstream173204* stdin_218432);
N_NIMCALL(tllstream173204*, filtertmpl_217007)(tllstream173204* stdin_217009, NimStringDesc* filename, tnode185813* call);
N_NIMCALL(tllstream173204*, filterstrip_216008)(tllstream173204* stdin_216010, NimStringDesc* filename, tnode185813* call);
N_NIMCALL(tllstream173204*, filterreplace_216002)(tllstream173204* stdin_216004, NimStringDesc* filename, tnode185813* call);
N_NIMCALL(void, rawmessage_163292)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_162937)(NimStringDesc* s);
N_NIMCALL(tllstream173204*, evalpipe_218461)(tparsers218029* p, tnode185813* n, NimStringDesc* filename, tllstream173204* start);
N_NIMCALL(void, openparsers_218037)(tparsers218029* p, NI32 fileidx, tllstream173204* inputstream);
N_NIMCALL(void, openparser_203353)(tparser203203* p, NI32 fileidx, tllstream173204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(void, closeparsers_218044)(tparsers218029* p);
STRING_LITERAL(TMP2691, "standard", 8);
STRING_LITERAL(TMP2692, "strongspaces", 12);
STRING_LITERAL(TMP2693, "braces", 6);
STRING_LITERAL(TMP2694, "endx", 4);
NIM_CONST TY218016 parsernames_218015 = {((NimStringDesc*) &TMP2691),
((NimStringDesc*) &TMP2692),
((NimStringDesc*) &TMP2693),
((NimStringDesc*) &TMP2694)}
;
STRING_LITERAL(TMP2695, "none", 4);
STRING_LITERAL(TMP2696, "stdtmpl", 7);
STRING_LITERAL(TMP2697, "replace", 7);
STRING_LITERAL(TMP2698, "strip", 5);
NIM_CONST TY218022 filternames_218021 = {((NimStringDesc*) &TMP2695),
((NimStringDesc*) &TMP2696),
((NimStringDesc*) &TMP2697),
((NimStringDesc*) &TMP2698)}
;
STRING_LITERAL(TMP2703, "parser to implement", 19);
static NIM_CONST TY186025 TMP2707 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2708, "sons", 4);
static NIM_CONST TY186025 TMP2709 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2710, "ident", 5);
STRING_LITERAL(TMP2711, "|", 1);
TNimType NTI218029; /* TParsers */
TNimType NTI218005; /* TParserKind */
extern TNimType NTI203203; /* TParser */
extern TFrame* frameptr_13038;
extern tnode185813* emptynode_186744;
extern NI gverbosity_135120;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(tnode185813*, parsefile_218033)(NI32 fileidx) {
	tnode185813* result;
	tparsers218029 p;
	FILE* f;
	NimStringDesc* filename;
	tllstream173204* LOC6;
	nimfr("parseFile", "syntaxes.nim")
	result = 0;
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI218029));
	f = 0;
	nimln(48, "syntaxes.nim");
	filename = tofullpath_162788(fileidx);
	nimln(49, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(49, "syntaxes.nim");
		nimln(49, "syntaxes.nim");
		LOC3 = 0;
		LOC3 = open_10203(&f, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		nimln(50, "syntaxes.nim");
		rawmessage_163386(((NU16) 3), filename);
		nimln(51, "syntaxes.nim");
		goto BeforeRet;
	}
	LA4: ;
	nimln(52, "syntaxes.nim");
	nimln(52, "syntaxes.nim");
	LOC6 = 0;
	LOC6 = llstreamopen_173222(&f);
	openparsers_218037(&p, fileidx, LOC6);
	nimln(53, "syntaxes.nim");
	result = parseall_218049(&p);
	nimln(54, "syntaxes.nim");
	closeparsers_218044(&p);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode185813*, parseall_218049)(tparsers218029* p) {
	tnode185813* result;
	nimfr("parseAll", "syntaxes.nim")
	result = 0;
	nimln(57, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(59, "syntaxes.nim");
		result = parseall_203212(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		nimln(61, "syntaxes.nim");
		result = parseall_208006(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		nimln(63, "syntaxes.nim");
		internalerror_163606(((NimStringDesc*) &TMP2703));
		nimln(64, "syntaxes.nim");
		result = emptynode_186744;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(tnode185813*, parsetoplevelstmt_218054)(tparsers218029* p) {
	tnode185813* result;
	nimfr("parseTopLevelStmt", "syntaxes.nim")
	result = 0;
	nimln(67, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		nimln(69, "syntaxes.nim");
		result = parsetoplevelstmt_203222(&(*p).Parser);
	}
	break;
	case ((NU8) 2):
	{
		nimln(71, "syntaxes.nim");
		result = parsetoplevelstmt_208013(&(*p).Parser);
	}
	break;
	case ((NU8) 3):
	{
		nimln(73, "syntaxes.nim");
		internalerror_163606(((NimStringDesc*) &TMP2703));
		nimln(74, "syntaxes.nim");
		result = emptynode_186744;
	}
	break;
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, utf8bom_218094)(NimStringDesc* s) {
	NI result;
	nimfr("utf8Bom", "syntaxes.nim")
	result = 0;
	nimln(77, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(77, "syntaxes.nim");
		LOC3 = 0;
		nimln(77, "syntaxes.nim");
		LOC4 = 0;
		nimln(77, "syntaxes.nim");
		if ((NU)(0) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(77, "syntaxes.nim");
		if ((NU)(1) > (NU)(s->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)(s->data[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(77, "syntaxes.nim");
		if ((NU)(2) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(78, "syntaxes.nim");
		result = 3;
	}
	goto LA1;
	LA7: ;
	{
		nimln(80, "syntaxes.nim");
		result = 0;
	}
	LA1: ;
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

N_NIMCALL(NIM_BOOL, containsshebang_218100)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	nimfr("containsShebang", "syntaxes.nim")
	result = 0;
	nimln(83, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		NI TMP2704;
		NI j;
		NI TMP2705;
		nimln(83, "syntaxes.nim");
		LOC3 = 0;
		nimln(83, "syntaxes.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		nimln(83, "syntaxes.nim");
		nimln(83, "syntaxes.nim");
		TMP2704 = addInt(i, 1);
		if ((NU)((NI32)(TMP2704)) > (NU)(s->Sup.len)) raiseIndexError();
		LOC3 = ((NU8)(s->data[(NI32)(TMP2704)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(84, "syntaxes.nim");
		nimln(84, "syntaxes.nim");
		TMP2705 = addInt(i, 2);
		j = (NI32)(TMP2705);
		nimln(85, "syntaxes.nim");
		while (1) {
			nimln(85, "syntaxes.nim");
			if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA7;
			nimln(85, "syntaxes.nim");
			j = addInt(j, 1);
		} LA7: ;
		nimln(86, "syntaxes.nim");
		nimln(86, "syntaxes.nim");
		if ((NU)(j) > (NU)(s->Sup.len)) raiseIndexError();
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode185813*, parsepipe_218138)(NimStringDesc* filename, tllstream173204* inputstream) {
	tnode185813* result;
	tllstream173204* s;
	nimfr("parsePipe", "syntaxes.nim")
	result = 0;
	nimln(89, "syntaxes.nim");
	result = emptynode_186744;
	nimln(90, "syntaxes.nim");
	s = llstreamopen_173227(filename, ((NU8) 0));
	nimln(91, "syntaxes.nim");
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		nimln(91, "syntaxes.nim");
		nimln(91, "syntaxes.nim");
		if (!!((s == NIM_NIL))) goto LA3;
		nimln(92, "syntaxes.nim");
		nimln(92, "syntaxes.nim");
		line = rawNewString(80);
		nimln(93, "syntaxes.nim");
		nimln(93, "syntaxes.nim");
		LOC5 = 0;
		LOC5 = llstreamreadline_173248(s, &line);
		nimln(94, "syntaxes.nim");
		i = utf8bom_218094(line);
		nimln(95, "syntaxes.nim");
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			nimln(95, "syntaxes.nim");
			LOC8 = 0;
			LOC8 = containsshebang_218100(line, i);
			if (!LOC8) goto LA9;
			nimln(96, "syntaxes.nim");
			nimln(96, "syntaxes.nim");
			LOC11 = 0;
			LOC11 = llstreamreadline_173248(s, &line);
			nimln(97, "syntaxes.nim");
			i = 0;
		}
		LA9: ;
		nimln(98, "syntaxes.nim");
		{
			NIM_BOOL LOC14;
			NI TMP2706;
			tparser203203 q;
			NimStringDesc* LOC19;
			tllstream173204* LOC20;
			nimln(98, "syntaxes.nim");
			LOC14 = 0;
			nimln(98, "syntaxes.nim");
			if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			nimln(98, "syntaxes.nim");
			nimln(98, "syntaxes.nim");
			TMP2706 = addInt(i, 1);
			if ((NU)((NI32)(TMP2706)) > (NU)(line->Sup.len)) raiseIndexError();
			LOC14 = ((NU8)(line->data[(NI32)(TMP2706)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			nimln(99, "syntaxes.nim");
			i = addInt(i, 2);
			nimln(100, "syntaxes.nim");
			while (1) {
				nimln(100, "syntaxes.nim");
				if ((NU)(i) > (NU)(line->Sup.len)) raiseIndexError();
				if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA18;
				nimln(100, "syntaxes.nim");
				i = addInt(i, 1);
			} LA18: ;
			memset((void*)&q, 0, sizeof(q));
			objectInit(&q, (&NTI203203));
			nimln(102, "syntaxes.nim");
			nimln(102, "syntaxes.nim");
			nimln(102, "syntaxes.nim");
			LOC19 = 0;
			LOC19 = copyStr(line, i);
			LOC20 = 0;
			LOC20 = llstreamopen_173218(LOC19);
			openparser_203364(&q, filename, LOC20, NIM_FALSE);
			nimln(103, "syntaxes.nim");
			result = parseall_203212(&q);
			nimln(104, "syntaxes.nim");
			closeparser_203217(&q);
		}
		LA16: ;
		nimln(105, "syntaxes.nim");
		llstreamclose_173238(s);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getfilter_218219)(tident165019* ident) {
	NU8 result;
	NU8 i_218267;
	NU8 res_218271;
	nimfr("getFilter", "syntaxes.nim")
	result = 0;
	i_218267 = 0;
	nimln(1450, "system.nim");
	res_218271 = ((NU8) 0);
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_218271 <= ((NU8) 3))) goto LA1;
		nimln(1450, "system.nim");
		i_218267 = res_218271;
		nimln(109, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(109, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_165469(ident, filternames_218021[(i_218267)- 0]);
			if (!LOC4) goto LA5;
			nimln(110, "syntaxes.nim");
			nimln(110, "syntaxes.nim");
			result = i_218267;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1453, "system.nim");
		res_218271 = addInt(res_218271, 1);
	} LA1: ;
	nimln(111, "syntaxes.nim");
	result = ((NU8) 0);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, getparser_218276)(tident165019* ident) {
	NU8 result;
	NU8 i_218324;
	NU8 res_218328;
	nimfr("getParser", "syntaxes.nim")
	result = 0;
	i_218324 = 0;
	nimln(1450, "system.nim");
	res_218328 = ((NU8) 0);
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_218328 <= ((NU8) 3))) goto LA1;
		nimln(1450, "system.nim");
		i_218324 = res_218328;
		nimln(115, "syntaxes.nim");
		{
			NIM_BOOL LOC4;
			nimln(115, "syntaxes.nim");
			LOC4 = 0;
			LOC4 = identeq_165469(ident, parsernames_218015[(i_218324)- 0]);
			if (!LOC4) goto LA5;
			nimln(116, "syntaxes.nim");
			nimln(116, "syntaxes.nim");
			result = i_218324;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1453, "system.nim");
		res_218328 = addInt(res_218328, 1);
	} LA1: ;
	nimln(117, "syntaxes.nim");
	rawmessage_163386(((NU16) 30), (*ident).S);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(tident165019*, getcallee_218333)(tnode185813* n) {
	tident165019* result;
	nimfr("getCallee", "syntaxes.nim")
	result = 0;
	nimln(120, "syntaxes.nim");
	{
		NIM_BOOL LOC3;
		nimln(120, "syntaxes.nim");
		LOC3 = 0;
		nimln(120, "syntaxes.nim");
		LOC3 = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		nimln(120, "syntaxes.nim");
		if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(121, "syntaxes.nim");
		if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2709[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2710));
		result = (*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident;
	}
	goto LA1;
	LA5: ;
	{
		nimln(122, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 2))) goto LA8;
		nimln(123, "syntaxes.nim");
		if (!(((TMP2709[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2710));
		result = (*n).kindU.S5.Ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		nimln(125, "syntaxes.nim");
		nimln(125, "syntaxes.nim");
		LOC11 = 0;
		LOC11 = rendertree_209051(n, 0);
		rawmessage_163386(((NU16) 163), LOC11);
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream173204*, applyfilter_218426)(tparsers218029* p, tnode185813* n, NimStringDesc* filename, tllstream173204* stdin_218432) {
	tllstream173204* result;
	tident165019* ident;
	NU8 f;
	nimfr("applyFilter", "syntaxes.nim")
	result = 0;
	nimln(129, "syntaxes.nim");
	ident = getcallee_218333(n);
	nimln(130, "syntaxes.nim");
	f = getfilter_218219(ident);
	nimln(131, "syntaxes.nim");
	switch (f) {
	case ((NU8) 0):
	{
		nimln(133, "syntaxes.nim");
		(*p).Skin = getparser_218276(ident);
		nimln(134, "syntaxes.nim");
		result = stdin_218432;
	}
	break;
	case ((NU8) 1):
	{
		nimln(136, "syntaxes.nim");
		result = filtertmpl_217007(stdin_218432, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		nimln(138, "syntaxes.nim");
		result = filterstrip_216008(stdin_218432, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		nimln(140, "syntaxes.nim");
		result = filterreplace_216002(stdin_218432, filename, n);
	}
	break;
	}
	nimln(141, "syntaxes.nim");
	{
		nimln(141, "syntaxes.nim");
		nimln(141, "syntaxes.nim");
		if (!!((f == ((NU8) 0)))) goto LA7;
		nimln(142, "syntaxes.nim");
		{
			TY125662 LOC13;
			TY125662 LOC14;
			nimln(142, "syntaxes.nim");
			if (!(2 <= gverbosity_135120)) goto LA11;
			nimln(143, "syntaxes.nim");
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_163292(((NU16) 266), LOC13, 0);
			nimln(144, "syntaxes.nim");
			msgwriteln_162937((*result).S);
			nimln(145, "syntaxes.nim");
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_163292(((NU16) 267), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(tllstream173204*, evalpipe_218461)(tparsers218029* p, tnode185813* n, NimStringDesc* filename, tllstream173204* start) {
	tllstream173204* result;
	nimfr("evalPipe", "syntaxes.nim")
	result = 0;
	nimln(149, "syntaxes.nim");
	result = start;
	nimln(150, "syntaxes.nim");
	{
		nimln(150, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 1))) goto LA3;
		nimln(150, "syntaxes.nim");
		goto BeforeRet;
	}
	LA3: ;
	nimln(151, "syntaxes.nim");
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		NI i_218550;
		NI res_218626;
		nimln(151, "syntaxes.nim");
		LOC7 = 0;
		nimln(151, "syntaxes.nim");
		LOC8 = 0;
		nimln(151, "syntaxes.nim");
		LOC8 = ((*n).Kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		nimln(151, "syntaxes.nim");
		if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC8 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		nimln(152, "syntaxes.nim");
		if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP2709[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2710));
		LOC7 = identeq_165469((*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident, ((NimStringDesc*) &TMP2711));
		LA10: ;
		if (!LOC7) goto LA11;
		i_218550 = 0;
		nimln(1450, "system.nim");
		res_218626 = 1;
		nimln(1451, "system.nim");
		while (1) {
			nimln(1451, "system.nim");
			if (!(res_218626 <= 2)) goto LA13;
			nimln(1450, "system.nim");
			i_218550 = res_218626;
			nimln(154, "syntaxes.nim");
			{
				nimln(154, "syntaxes.nim");
				if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
				if ((NU)(i_218550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!((*(*n).kindU.S6.Sons->data[i_218550]).Kind == ((NU8) 29))) goto LA16;
				nimln(155, "syntaxes.nim");
				if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
				if ((NU)(i_218550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = evalpipe_218461(p, (*n).kindU.S6.Sons->data[i_218550], filename, result);
			}
			goto LA14;
			LA16: ;
			{
				nimln(157, "syntaxes.nim");
				if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
				if ((NU)(i_218550) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = applyfilter_218426(p, (*n).kindU.S6.Sons->data[i_218550], filename, result);
			}
			LA14: ;
			nimln(1453, "system.nim");
			res_218626 = addInt(res_218626, 1);
		} LA13: ;
	}
	goto LA5;
	LA11: ;
	{
		nimln(158, "syntaxes.nim");
		if (!((*n).Kind == ((NU8) 114))) goto LA20;
		nimln(159, "syntaxes.nim");
		if (((TMP2707[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2708));
		if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
		result = evalpipe_218461(p, (*n).kindU.S6.Sons->data[0], filename, result);
	}
	goto LA5;
	LA20: ;
	{
		nimln(161, "syntaxes.nim");
		result = applyfilter_218426(p, n, filename, result);
	}
	LA5: ;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, openparsers_218037)(tparsers218029* p, NI32 fileidx, tllstream173204* inputstream) {
	tllstream173204* s;
	NimStringDesc* filename;
	tnode185813* pipe;
	nimfr("openParsers", "syntaxes.nim")
	s = 0;
	nimln(165, "syntaxes.nim");
	(*p).Skin = ((NU8) 0);
	nimln(166, "syntaxes.nim");
	filename = tofullpath_162788(fileidx);
	nimln(167, "syntaxes.nim");
	pipe = parsepipe_218138(filename, inputstream);
	nimln(168, "syntaxes.nim");
	{
		nimln(168, "syntaxes.nim");
		nimln(168, "syntaxes.nim");
		if (!!((pipe == NIM_NIL))) goto LA3;
		nimln(168, "syntaxes.nim");
		s = evalpipe_218461(p, pipe, filename, inputstream);
	}
	goto LA1;
	LA3: ;
	{
		nimln(169, "syntaxes.nim");
		s = inputstream;
	}
	LA1: ;
	nimln(170, "syntaxes.nim");
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 2):
	case ((NU8) 3):
	{
		nimln(172, "syntaxes.nim");
		openparser_203353(&(*p).Parser, fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		nimln(174, "syntaxes.nim");
		openparser_203353(&(*p).Parser, fileidx, s, NIM_TRUE);
	}
	break;
	}
	popFrame();
}

N_NIMCALL(void, closeparsers_218044)(tparsers218029* p) {
	nimfr("closeParsers", "syntaxes.nim")
	nimln(177, "syntaxes.nim");
	closeparser_203217(&(*p).Parser);
	popFrame();
}
N_NOINLINE(void, syntaxesInit)(void) {
	nimfr("syntaxes", "syntaxes.nim")
	popFrame();
}

N_NOINLINE(void, syntaxesDatInit)(void) {
static TNimNode* TMP2699[2];
static TNimNode* TMP2700[4];
NI TMP2702;
static char* NIM_CONST TMP2701[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP2284[8];
NTI218029.size = sizeof(tparsers218029);
NTI218029.kind = 18;
NTI218029.base = 0;
TMP2699[0] = &TMP2284[1];
NTI218005.size = sizeof(NU8);
NTI218005.kind = 14;
NTI218005.base = 0;
NTI218005.flags = 3;
for (TMP2702 = 0; TMP2702 < 4; TMP2702++) {
TMP2284[TMP2702+2].kind = 1;
TMP2284[TMP2702+2].offset = TMP2702;
TMP2284[TMP2702+2].name = TMP2701[TMP2702];
TMP2700[TMP2702] = &TMP2284[TMP2702+2];
}
TMP2284[6].len = 4; TMP2284[6].kind = 2; TMP2284[6].sons = &TMP2700[0];
NTI218005.node = &TMP2284[6];
TMP2284[1].kind = 1;
TMP2284[1].offset = offsetof(tparsers218029, Skin);
TMP2284[1].typ = (&NTI218005);
TMP2284[1].name = "skin";
TMP2699[1] = &TMP2284[7];
TMP2284[7].kind = 1;
TMP2284[7].offset = offsetof(tparsers218029, Parser);
TMP2284[7].typ = (&NTI203203);
TMP2284[7].name = "parser";
TMP2284[0].len = 2; TMP2284[0].kind = 2; TMP2284[0].sons = &TMP2699[0];
NTI218029.node = &TMP2284[0];
}

