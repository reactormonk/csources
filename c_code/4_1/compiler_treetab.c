/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode172659 tnode172659;
typedef struct ttype172693 ttype172693;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym172689 tsym172689;
typedef struct tident141017 tident141017;
typedef struct tnodeseq172653 tnodeseq172653;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq172691 ttypeseq172691;
typedef struct tscope172683 tscope172683;
typedef struct TY172786 TY172786;
typedef struct tinstantiation172679 tinstantiation172679;
typedef struct tstrtable172663 tstrtable172663;
typedef struct tsymseq172661 tsymseq172661;
typedef struct tloc172673 tloc172673;
typedef struct trope121007 trope121007;
typedef struct tlib172677 tlib172677;
typedef struct tnodetable172717 tnodetable172717;
typedef struct tnodepairseq172715 tnodepairseq172715;
typedef struct tnodepair172713 tnodepair172713;
typedef struct tcell38848 tcell38848;
typedef struct tcellseq38864 tcellseq38864;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38860 tcellset38860;
typedef struct tpagedesc38856 tpagedesc38856;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21438 tsmallchunk21438;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21440 tbigchunk21440;
typedef struct tintset21415 tintset21415;
typedef struct ttrunk21411 ttrunk21411;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40814 tgcstat40814;
typedef struct TY172775 TY172775;
typedef struct tlistentry109014 tlistentry109014;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tnode172659 {
ttype172693* Typ;
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
struct {tsym172689* Sym;
} S4;
struct {tident141017* Ident;
} S5;
struct {tnodeseq172653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY172865[20];
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
struct TNimObject {
TNimType* m_type;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct tstrtable172663 {
NI Counter;
tsymseq172661* Data;
};
struct tloc172673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype172693* T;
trope121007* R;
trope121007* Heaproot;
NI A;
};
struct tsym172689 {
  tidobj141011 Sup;
NU8 Kind;
union {
struct {ttypeseq172691* Typeinstcache;
tscope172683* Typscope;
} S1;
struct {TY172786* Procinstcache;
tscope172683* Scope;
} S2;
struct {TY172786* Usedgenerics;
tstrtable172663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype172693* Typ;
tident141017* Name;
tlineinfo137509 Info;
tsym172689* Owner;
NU32 Flags;
tnode172659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc172673 Loc;
tlib172677* Annex;
tnode172659* Constraint;
};
struct tnodepair172713 {
NI H;
tnode172659* Key;
NI Val;
};
struct tnodetable172717 {
NI Counter;
tnodepairseq172715* Data;
};
struct tcell38848 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38864 {
NI Len;
NI Cap;
tcell38848** D;
};
struct tcellset38860 {
NI Counter;
NI Max;
tpagedesc38856* Head;
tpagedesc38856** Data;
};
typedef tsmallchunk21438* TY22222[512];
typedef ttrunk21411* ttrunkbuckets21413[256];
struct tintset21415 {
ttrunkbuckets21413 Data;
};
struct tmemregion22210 {
NI Minlargeobj;
NI Maxlargeobj;
TY22222 Freesmallchunks;
tllchunk22204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21440* Freechunkslist;
tintset21415 Chunkstarts;
tavlnode22208* Root;
tavlnode22208* Deleted;
tavlnode22208* Last;
tavlnode22208* Freeavlnodes;
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
tcellseq38864 Zct;
tcellseq38864 Decstack;
tcellset38860 Cycleroots;
tcellseq38864 Tempstack;
NI Recgclock;
tmemregion22210 Region;
tgcstat40814 Stat;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct ttype172693 {
  tidobj141011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq172691* Sons;
tnode172659* N;
tsym172689* Destructor;
tsym172689* Owner;
tsym172689* Sym;
NI64 Size;
NI Align;
tloc172673 Loc;
};
struct tscope172683 {
NI Depthlevel;
tstrtable172663 Symbols;
tnodeseq172653* Usingsyms;
tscope172683* Parent;
};
struct tinstantiation172679 {
tsym172689* Sym;
ttypeseq172691* Concretetypes;
TY172775* Usedby;
};
struct trope121007 {
  TNimObject Sup;
trope121007* Left;
trope121007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
};
struct tlib172677 {
  tlistentry109014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope121007* Name;
tnode172659* Path;
};
typedef NI TY21418[16];
struct tpagedesc38856 {
tpagedesc38856* Next;
NI Key;
TY21418 Bits;
};
struct tbasechunk21436 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21438 {
  tbasechunk21436 Sup;
tsmallchunk21438* Next;
tsmallchunk21438* Prev;
tfreecell21428* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22204 {
NI Size;
NI Acc;
tllchunk22204* Next;
};
struct tbigchunk21440 {
  tbasechunk21436 Sup;
tbigchunk21440* Next;
tbigchunk21440* Prev;
NI Align;
NF Data;
};
struct ttrunk21411 {
ttrunk21411* Next;
NI Key;
TY21418 Bits;
};
typedef tavlnode22208* TY22214[2];
struct tavlnode22208 {
TY22214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
struct tnodeseq172653 {
  TGenericSeq Sup;
  tnode172659* data[SEQ_DECL_SIZE];
};
struct ttypeseq172691 {
  TGenericSeq Sup;
  ttype172693* data[SEQ_DECL_SIZE];
};
struct TY172786 {
  TGenericSeq Sup;
  tinstantiation172679* data[SEQ_DECL_SIZE];
};
struct tsymseq172661 {
  TGenericSeq Sup;
  tsym172689* data[SEQ_DECL_SIZE];
};
struct tnodepairseq172715 {
  TGenericSeq Sup;
  tnodepair172713 data[SEQ_DECL_SIZE];
};
struct TY172775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_224018)(tnode172659* n);
static N_INLINE(NI, HEX21HEX26_110013)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
N_NIMCALL(NI, hash_110826)(NimStringDesc* x);
static N_INLINE(NI, sonslen_173022)(tnode172659* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, treesequivalent_224180)(tnode172659* a, tnode172659* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_205663)(ttype172693* a, ttype172693* b, NU8 flags);
N_NIMCALL(NI, nodetablerawget_224377)(tnodetable172717 t, NI k, tnode172659* key);
static N_INLINE(NI, nexttry_179196)(NI h, NI maxhash);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, nodetableget_224400)(tnodetable172717 t, tnode172659* key);
N_NIMCALL(void, nodetablerawinsert_224411)(tnodepairseq172715** data, NI k, tnode172659* key, NI val);
N_NIMCALL(void, hiddenraiseassert_76017)(NimStringDesc* msg);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(void, nodetableput_224605)(tnodetable172717* t, tnode172659* key, NI val);
N_NIMCALL(NIM_BOOL, mustrehash_179191)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nodetabletestorset_224881)(tnodetable172717* t, tnode172659* key, NI val);
static NIM_CONST TY172865 TMP3143 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3144, "ident", 5);
static NIM_CONST TY172865 TMP3145 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3146, "sym", 3);
static NIM_CONST TY172865 TMP3147 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3148, "intVal", 6);
static NIM_CONST TY172865 TMP3149 = {
0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3150, "floatVal", 8);
static NIM_CONST TY172865 TMP3151 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3152, "strVal", 6);
static NIM_CONST TY172865 TMP3153 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3154, "sons", 4);
STRING_LITERAL(TMP3159, "data[h].key == nil ", 19);
STRING_LITERAL(TMP3160, "not (t.data[index].key == nil) ", 31);
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;
extern TNimType NTI172715; /* TNodePairSeq */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(NI, HEX21HEX26_110013)(NI h, NI val) {
	NI result;
	nimfr("!&", "hashes.nim")
	result = 0;
	nimln(24, "hashes.nim");
	nimln(24, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)(val));
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	nimln(25, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(10))));
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	nimln(26, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(6)));
	popFrame();
	return result;
}
static N_INLINE(NI, sonslen_173022)(tnode172659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP3153[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3154));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP3153[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3154));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
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
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
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
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(NI, hashtree_224018)(tnode172659* n) {
	NI result;
	nimfr("hashTree", "treetab.nim")
	result = 0;
	nimln(16, "treetab.nim");
	{
		nimln(16, "treetab.nim");
		if (!(n == NIM_NIL)) goto LA3;
		nimln(16, "treetab.nim");
		goto BeforeRet;
	}	LA3: ;
	nimln(17, "treetab.nim");
	nimln(17, "treetab.nim");
	result = ((NI) ((*n).Kind));
	nimln(18, "treetab.nim");
	switch ((*n).Kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}	break;
	case ((NU8) 2):
	{
		nimln(22, "treetab.nim");
		if (!(((TMP3143[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3144));
		result = HEX21HEX26_110013(result, (*(*n).kindU.S5.Ident).H);
	}	break;
	case ((NU8) 3):
	{
		nimln(24, "treetab.nim");
		if (!(((TMP3145[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3146));
		result = HEX21HEX26_110013(result, (*(*(*n).kindU.S4.Sym).Name).H);
	}	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		nimln(26, "treetab.nim");
		{
			NIM_BOOL LOC11;
			nimln(26, "treetab.nim");
			LOC11 = 0;
			nimln(702, "system.nim");
			if (!(((TMP3147[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3148));
			LOC11 = ((-2147483647 -1) <= (*n).kindU.S1.Intval);
			if (!(LOC11)) goto LA12;
			nimln(26, "treetab.nim");
			if (!(((TMP3147[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3148));
			LOC11 = ((*n).kindU.S1.Intval <= 2147483647);
			LA12: ;
			if (!LOC11) goto LA13;
			nimln(27, "treetab.nim");
			if (!(((TMP3147[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3148));
			result = HEX21HEX26_110013(result, ((NI)chckRange64((*n).kindU.S1.Intval, (-2147483647 -1), 2147483647)));
		}		LA13: ;
	}	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		nimln(29, "treetab.nim");
		{
			NIM_BOOL LOC18;
			nimln(29, "treetab.nim");
			LOC18 = 0;
			nimln(702, "system.nim");
			if (!(((TMP3149[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3150));
			LOC18 = (-1.0000000000000000e+06 <= (*n).kindU.S2.Floatval);
			if (!(LOC18)) goto LA19;
			nimln(29, "treetab.nim");
			if (!(((TMP3149[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3150));
			LOC18 = ((*n).kindU.S2.Floatval <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(30, "treetab.nim");
			nimln(30, "treetab.nim");
			if (!(((TMP3149[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3150));
			result = HEX21HEX26_110013(result, float64ToInt32((*n).kindU.S2.Floatval));
		}		LA20: ;
	}	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		NI LOC23;
		nimln(32, "treetab.nim");
		nimln(32, "treetab.nim");
		if (!(((TMP3151[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3152));
		LOC23 = 0;
		LOC23 = hash_110826((*n).kindU.S3.Strval);
		result = HEX21HEX26_110013(result, LOC23);
	}	break;
	default:
	{
		NI i_224157;
		NI HEX3Atmp_224173;
		NI LOC25;
		NI TMP3155;
		NI res_224175;
		i_224157 = 0;
		HEX3Atmp_224173 = 0;
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		nimln(34, "treetab.nim");
		LOC25 = 0;
		LOC25 = sonslen_173022(n);
		TMP3155 = subInt(LOC25, 1);
		HEX3Atmp_224173 = (NI32)(TMP3155);
		nimln(1301, "system.nim");
		res_224175 = 0;
		nimln(1302, "system.nim");
		while (1) {
			NI LOC27;
			nimln(1302, "system.nim");
			if (!(res_224175 <= HEX3Atmp_224173)) goto LA26;
			nimln(1301, "system.nim");
			i_224157 = res_224175;
			nimln(35, "treetab.nim");
			nimln(35, "treetab.nim");
			if (((TMP3153[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3154));
			if ((NU)(i_224157) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC27 = 0;
			LOC27 = hashtree_224018((*n).kindU.S6.Sons->data[i_224157]);
			result = HEX21HEX26_110013(result, LOC27);
			nimln(1304, "system.nim");
			res_224175 = addInt(res_224175, 1);
		} LA26: ;
	}	break;
	}
	BeforeRet: ;	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(NIM_BOOL, treesequivalent_224180)(tnode172659* a, tnode172659* b) {
	NIM_BOOL result;
	nimfr("TreesEquivalent", "treetab.nim")
	result = 0;
	nimln(38, "treetab.nim");
	{
		nimln(38, "treetab.nim");
		if (!(a == b)) goto LA3;
		nimln(39, "treetab.nim");
		result = NIM_TRUE;
	}	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		nimln(40, "treetab.nim");
		LOC6 = 0;
		nimln(40, "treetab.nim");
		LOC7 = 0;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		nimln(40, "treetab.nim");
		LOC6 = ((*a).Kind == (*b).Kind);
		LA9: ;
		if (!LOC6) goto LA10;
		nimln(41, "treetab.nim");
		switch ((*a).Kind) {
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			nimln(42, "treetab.nim");
			result = NIM_TRUE;
		}		break;
		case ((NU8) 3):
		{
			nimln(43, "treetab.nim");
			nimln(43, "treetab.nim");
			if (!(((TMP3145[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3146));
			if (!(((TMP3145[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3146));
			result = ((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id);
		}		break;
		case ((NU8) 2):
		{
			nimln(44, "treetab.nim");
			nimln(44, "treetab.nim");
			if (!(((TMP3143[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3144));
			if (!(((TMP3143[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3144));
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			nimln(45, "treetab.nim");
			nimln(45, "treetab.nim");
			if (!(((TMP3147[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3148));
			if (!(((TMP3147[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3148));
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			nimln(46, "treetab.nim");
			nimln(46, "treetab.nim");
			if (!(((TMP3149[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3150));
			if (!(((TMP3149[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3150));
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			nimln(47, "treetab.nim");
			nimln(47, "treetab.nim");
			if (!(((TMP3151[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3152));
			if (!(((TMP3151[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3152));
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}		break;
		default:
		{
			nimln(49, "treetab.nim");
			{
				NI LOC21;
				NI LOC22;
				NI i_224347;
				NI HEX3Atmp_224370;
				NI LOC25;
				NI TMP3156;
				NI res_224372;
				nimln(49, "treetab.nim");
				nimln(49, "treetab.nim");
				LOC21 = 0;
				LOC21 = sonslen_173022(a);
				nimln(49, "treetab.nim");
				LOC22 = 0;
				LOC22 = sonslen_173022(b);
				if (!(LOC21 == LOC22)) goto LA23;
				i_224347 = 0;
				HEX3Atmp_224370 = 0;
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				nimln(50, "treetab.nim");
				LOC25 = 0;
				LOC25 = sonslen_173022(a);
				TMP3156 = subInt(LOC25, 1);
				HEX3Atmp_224370 = (NI32)(TMP3156);
				nimln(1301, "system.nim");
				res_224372 = 0;
				nimln(1302, "system.nim");
				while (1) {
					nimln(1302, "system.nim");
					if (!(res_224372 <= HEX3Atmp_224370)) goto LA26;
					nimln(1301, "system.nim");
					i_224347 = res_224372;
					nimln(51, "treetab.nim");
					{
						NIM_BOOL LOC29;
						nimln(51, "treetab.nim");
						nimln(51, "treetab.nim");
						if (((TMP3153[(*a).Kind/8] &(1<<((*a).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3154));
						if ((NU)(i_224347) >= (NU)((*a).kindU.S6.Sons->Sup.len)) raiseIndexError();
						if (((TMP3153[(*b).Kind/8] &(1<<((*b).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3154));
						if ((NU)(i_224347) >= (NU)((*b).kindU.S6.Sons->Sup.len)) raiseIndexError();
						LOC29 = 0;
						LOC29 = treesequivalent_224180((*a).kindU.S6.Sons->data[i_224347], (*b).kindU.S6.Sons->data[i_224347]);
						if (!!(LOC29)) goto LA30;
						nimln(51, "treetab.nim");
						goto BeforeRet;
					}					LA30: ;
					nimln(1304, "system.nim");
					res_224372 = addInt(res_224372, 1);
				} LA26: ;
				nimln(52, "treetab.nim");
				result = NIM_TRUE;
			}			LA23: ;
		}		break;
		}
		nimln(53, "treetab.nim");
		{
			if (!result) goto LA34;
			nimln(53, "treetab.nim");
			result = sametypeornil_205663((*a).Typ, (*b).Typ, 0);
		}		LA34: ;
	}	goto LA1;
	LA10: ;
	LA1: ;
	BeforeRet: ;	popFrame();
	return result;
}
static N_INLINE(NI, nexttry_179196)(NI h, NI maxhash) {
	NI result;
	NI TMP3157;
	NI TMP3158;
	nimfr("nextTry", "astalgo.nim")
	result = 0;
	nimln(452, "astalgo.nim");
	nimln(452, "astalgo.nim");
	nimln(452, "astalgo.nim");
	nimln(452, "astalgo.nim");
	TMP3157 = mulInt(5, h);
	TMP3158 = addInt((NI32)(TMP3157), 1);
	result = (NI)((NI32)(TMP3158) & maxhash);
	popFrame();
	return result;
}
N_NIMCALL(NI, nodetablerawget_224377)(tnodetable172717 t, NI k, tnode172659* key) {
	NI result;
	NI h;
	nimfr("NodeTableRawGet", "treetab.nim")
	result = 0;
	nimln(56, "treetab.nim");
	nimln(56, "treetab.nim");
	nimln(56, "treetab.nim");
	h = (NI)(k & (t.Data->Sup.len-1));
	nimln(57, "treetab.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA1;
		nimln(58, "treetab.nim");
		{
			NIM_BOOL LOC4;
			nimln(58, "treetab.nim");
			LOC4 = 0;
			nimln(58, "treetab.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC4 = (t.Data->data[h].H == k);
			if (!(LOC4)) goto LA5;
			nimln(58, "treetab.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC4 = treesequivalent_224180(t.Data->data[h].Key, key);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(59, "treetab.nim");
			nimln(59, "treetab.nim");
			result = h;
			goto BeforeRet;
		}		LA6: ;
		nimln(60, "treetab.nim");
		nimln(60, "treetab.nim");
		h = nexttry_179196(h, (t.Data->Sup.len-1));
	} LA1: ;
	nimln(61, "treetab.nim");
	result = -1;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NI, nodetableget_224400)(tnodetable172717 t, tnode172659* key) {
	NI result;
	NI index;
	NI LOC1;
	nimfr("NodeTableGet", "treetab.nim")
	result = 0;
	nimln(64, "treetab.nim");
	nimln(64, "treetab.nim");
	LOC1 = 0;
	LOC1 = hashtree_224018(key);
	index = nodetablerawget_224377(t, LOC1, key);
	nimln(65, "treetab.nim");
	{
		nimln(702, "system.nim");
		if (!(0 <= index)) goto LA4;
		nimln(65, "treetab.nim");
		if ((NU)(index) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		result = t.Data->data[index].Val;
	}	goto LA2;
	LA4: ;
	{
		nimln(66, "treetab.nim");
		result = (-2147483647 -1);
	}	LA2: ;
	popFrame();
	return result;
}
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr) {
	tcell38848* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38848*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38848))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43802)(tcell38848* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42215(&gch_40844.Zct, c);	popFrame();
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(250, "gc.nim");
		c = usrtocell_42239(src);
		nimln(167, "gc.nim");
		(*c).Refcount += 8;
	}	LA3: ;
	nimln(252, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(253, "gc.nim");
		c = usrtocell_42239((*dest));
		nimln(254, "gc.nim");
		{
			nimln(165, "gc.nim");
			(*c).Refcount -= 8;
			nimln(166, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43802(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(void, nodetablerawinsert_224411)(tnodepairseq172715** data, NI k, tnode172659* key, NI val) {
	NI h;
	nimfr("NodeTableRawInsert", "treetab.nim")
	nimln(70, "treetab.nim");
	nimln(70, "treetab.nim");
	nimln(70, "treetab.nim");
	h = (NI)(k & ((*data)->Sup.len-1));
	nimln(71, "treetab.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA1;
		nimln(71, "treetab.nim");
		nimln(71, "treetab.nim");
		h = nexttry_179196(h, ((*data)->Sup.len-1));
	} LA1: ;
	nimln(72, "treetab.nim");
	{
		nimln(72, "treetab.nim");
		nimln(72, "treetab.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA4;
		nimln(72, "treetab.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP3159));	}	LA4: ;
	nimln(73, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].H = k;
	nimln(74, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRefNoCycle((void**) &(*data)->data[h].Key, key);
	nimln(75, "treetab.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Val = val;
	popFrame();
}
N_NIMCALL(void, nodetableput_224605)(tnodetable172717* t, tnode172659* key, NI val) {
	tnodepairseq172715* n;
	NI k;
	NI index;
	nimfr("NodeTablePut", "treetab.nim")
	n = 0;
	nimln(79, "treetab.nim");
	k = hashtree_224018(key);
	nimln(80, "treetab.nim");
	index = nodetablerawget_224377((*t), k, key);
	nimln(81, "treetab.nim");
	{
		nimln(702, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(82, "treetab.nim");
		{
			nimln(82, "treetab.nim");
			nimln(82, "treetab.nim");
			nimln(82, "treetab.nim");
			if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).Data->data[index].Key == NIM_NIL)))) goto LA7;
			nimln(82, "treetab.nim");
			hiddenraiseassert_76017(((NimStringDesc*) &TMP3160));		}		LA7: ;
		nimln(83, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		(*t).Data->data[index].Val = val;
	}	goto LA1;
	LA3: ;
	{
		nimln(85, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP3161;
			NI i_224836;
			NI HEX3Atmp_224874;
			NI res_224876;
			tnodepairseq172715* LOC20;
			nimln(85, "treetab.nim");
			nimln(85, "treetab.nim");
			LOC12 = 0;
			LOC12 = mustrehash_179191((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			nimln(86, "treetab.nim");
			TMP3161 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq172715*) newSeq((&NTI172715), (NI32)(TMP3161));
			i_224836 = 0;
			HEX3Atmp_224874 = 0;
			nimln(87, "treetab.nim");
			nimln(87, "treetab.nim");
			HEX3Atmp_224874 = ((*t).Data->Sup.len-1);
			nimln(1301, "system.nim");
			res_224876 = 0;
			nimln(1302, "system.nim");
			while (1) {
				nimln(1302, "system.nim");
				if (!(res_224876 <= HEX3Atmp_224874)) goto LA15;
				nimln(1301, "system.nim");
				i_224836 = res_224876;
				nimln(88, "treetab.nim");
				{
					nimln(698, "system.nim");
					nimln(698, "system.nim");
					if ((NU)(i_224836) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_224836].Key == NIM_NIL))) goto LA18;
					nimln(89, "treetab.nim");
					if ((NU)(i_224836) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_224836) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_224836) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_224411(&n, (*t).Data->data[i_224836].H, (*t).Data->data[i_224836].Key, (*t).Data->data[i_224836].Val);				}				LA18: ;
				nimln(1304, "system.nim");
				res_224876 = addInt(res_224876, 1);
			} LA15: ;
			nimln(90, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}		LA13: ;
		nimln(91, "treetab.nim");
		nodetablerawinsert_224411(&(*t).Data, k, key, val);		nimln(92, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}	LA1: ;
	popFrame();
}
N_NIMCALL(NI, nodetabletestorset_224881)(tnodetable172717* t, tnode172659* key, NI val) {
	NI result;
	tnodepairseq172715* n;
	NI k;
	NI index;
	nimfr("NodeTableTestOrSet", "treetab.nim")
	result = 0;
	n = 0;
	nimln(96, "treetab.nim");
	k = hashtree_224018(key);
	nimln(97, "treetab.nim");
	index = nodetablerawget_224377((*t), k, key);
	nimln(98, "treetab.nim");
	{
		nimln(702, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(99, "treetab.nim");
		{
			nimln(99, "treetab.nim");
			nimln(99, "treetab.nim");
			nimln(99, "treetab.nim");
			if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!!(!(((*t).Data->data[index].Key == NIM_NIL)))) goto LA7;
			nimln(99, "treetab.nim");
			hiddenraiseassert_76017(((NimStringDesc*) &TMP3160));		}		LA7: ;
		nimln(100, "treetab.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		result = (*t).Data->data[index].Val;
	}	goto LA1;
	LA3: ;
	{
		nimln(102, "treetab.nim");
		{
			NIM_BOOL LOC12;
			NI TMP3162;
			NI i_225036;
			NI HEX3Atmp_225074;
			NI res_225076;
			tnodepairseq172715* LOC20;
			nimln(102, "treetab.nim");
			nimln(102, "treetab.nim");
			LOC12 = 0;
			LOC12 = mustrehash_179191((*t).Data->Sup.len, (*t).Counter);
			if (!LOC12) goto LA13;
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			nimln(103, "treetab.nim");
			TMP3162 = mulInt((*t).Data->Sup.len, 2);
			n = (tnodepairseq172715*) newSeq((&NTI172715), (NI32)(TMP3162));
			i_225036 = 0;
			HEX3Atmp_225074 = 0;
			nimln(104, "treetab.nim");
			nimln(104, "treetab.nim");
			HEX3Atmp_225074 = ((*t).Data->Sup.len-1);
			nimln(1301, "system.nim");
			res_225076 = 0;
			nimln(1302, "system.nim");
			while (1) {
				nimln(1302, "system.nim");
				if (!(res_225076 <= HEX3Atmp_225074)) goto LA15;
				nimln(1301, "system.nim");
				i_225036 = res_225076;
				nimln(105, "treetab.nim");
				{
					nimln(698, "system.nim");
					nimln(698, "system.nim");
					if ((NU)(i_225036) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if (!!(((*t).Data->data[i_225036].Key == NIM_NIL))) goto LA18;
					nimln(106, "treetab.nim");
					if ((NU)(i_225036) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_225036) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					if ((NU)(i_225036) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
					nodetablerawinsert_224411(&n, (*t).Data->data[i_225036].H, (*t).Data->data[i_225036].Key, (*t).Data->data[i_225036].Val);				}				LA18: ;
				nimln(1304, "system.nim");
				res_225076 = addInt(res_225076, 1);
			} LA15: ;
			nimln(107, "treetab.nim");
			LOC20 = 0;
			LOC20 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC20;
		}		LA13: ;
		nimln(108, "treetab.nim");
		nodetablerawinsert_224411(&(*t).Data, k, key, val);		nimln(109, "treetab.nim");
		result = val;
		nimln(110, "treetab.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}	LA1: ;
	popFrame();
	return result;
}N_NOINLINE(void, compilertreetabInit)(void) {
	nimfr("treetab", "treetab.nim")
	popFrame();
}

N_NOINLINE(void, compilertreetabDatInit)(void) {
}

