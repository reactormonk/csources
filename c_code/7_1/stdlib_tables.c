/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttable161560 ttable161560;
typedef struct tkeyvaluepairseq161563 tkeyvaluepairseq161563;
typedef struct tkeyvaluepair161566 tkeyvaluepair161566;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tkeyvaluepair161566 {
NU8 Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct  ttable161560  {
tkeyvaluepairseq161563* Data;
NI Counter;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
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
typedef NI TY22818[16];
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
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
struct tkeyvaluepairseq161563 {
  TGenericSeq Sup;
  tkeyvaluepair161566 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_137414)(NI length, NI counter);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_137606)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, ispoweroftwo_131278)(NI x);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP892)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, rawget_161744)(ttable161560 t_161751, NimStringDesc* key_161754);
N_NIMCALL(NI, hash_118827)(NimStringDesc* x);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, enlarge_161886)(ttable161560* t_161895);
N_NIMCALL(void, rawinsert_161956)(ttable161560* t_161965, tkeyvaluepairseq161563** data_161973, NimStringDesc* key_161977, NI32 val_161979);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
STRING_LITERAL(TMP455, "length > counter ", 17);
STRING_LITERAL(TMP887, "isPowerOfTwo(initialSize) ", 26);
extern TFrame* frameptr_13038;
TNimType NTI161566; /* TKeyValuePair */
TNimType NTI137010; /* TSlotEnum */
extern TNimType NTI143; /* string */
extern TNimType NTI112; /* int32 */
TNimType NTI161563; /* TKeyValuePairSeq */
TNimType NTI161560; /* TTable */
extern TNimType NTI106; /* int */
extern tgcheap43216 gch_43244;

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

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(NIM_BOOL, mustrehash_137414)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP456;
	NI TMP457;
	NI TMP458;
	nimfr("mustRehash", "tables.nim")
	result = 0;
	nimln(66, "tables.nim");
	{
		nimln(66, "tables.nim");
		nimln(66, "tables.nim");
		if (!!((counter < length))) goto LA3;
		nimln(66, "tables.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP455));
	}
	LA3: ;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	LOC5 = 0;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP456 = mulInt(length, 2);
	nimln(67, "tables.nim");
	TMP457 = mulInt(counter, 3);
	LOC5 = ((NI32)(TMP456) < (NI32)(TMP457));
	if (LOC5) goto LA6;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP458 = subInt(length, counter);
	LOC5 = ((NI32)(TMP458) < 4);
	LA6: ;
	result = LOC5;
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

static N_INLINE(NI, nexttry_137606)(NI h, NI maxhash) {
	NI result;
	NI TMP459;
	NI TMP460;
	nimfr("nextTry", "tables.nim")
	result = 0;
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	TMP459 = mulInt(5, h);
	TMP460 = addInt((NI32)(TMP459), 1);
	result = (NI)((NI32)(TMP460) & maxhash);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP892)(void* p, NI op) {
	tkeyvaluepairseq161563* a;
	NI LOC1;
	a = (tkeyvaluepairseq161563*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_161552)(NI initialsize_161557, ttable161560* Result) {
	nimfr("initTable", "tables.nim")
	nimln(167, "tables.nim");
	{
		NIM_BOOL LOC3;
		nimln(167, "tables.nim");
		nimln(167, "tables.nim");
		LOC3 = 0;
		LOC3 = ispoweroftwo_131278(initialsize_161557);
		if (!!(LOC3)) goto LA4;
		nimln(167, "tables.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP887));
	}
	LA4: ;
	nimln(168, "tables.nim");
	(*Result).Counter = 0;
	nimln(169, "tables.nim");
	unsureAsgnRef((void**) &(*Result).Data, (tkeyvaluepairseq161563*) newSeq((&NTI161563), initialsize_161557));
	popFrame();
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
	}
	LA3: ;
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
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, rawget_161744)(ttable161560 t_161751, NimStringDesc* key_161754) {
	NI result;
	NI h;
	NI LOC1;
	nimfr("rawGet", "tables.nim")
	result = 0;
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_118827(key_161754);
	nimln(73, "tables.nim");
	h = (NI)(LOC1 & (t_161751.Data->Sup.len-1));
	nimln(74, "tables.nim");
	while (1) {
		nimln(74, "tables.nim");
		nimln(74, "tables.nim");
		if ((NU)(h) >= (NU)(t_161751.Data->Sup.len)) raiseIndexError();
		if (!!((t_161751.Data->data[h].Field0 == ((NU8) 0)))) goto LA2;
		nimln(75, "tables.nim");
		{
			NIM_BOOL LOC5;
			nimln(75, "tables.nim");
			LOC5 = 0;
			nimln(75, "tables.nim");
			if ((NU)(h) >= (NU)(t_161751.Data->Sup.len)) raiseIndexError();
			LOC5 = eqStrings(t_161751.Data->data[h].Field1, key_161754);
			if (!(LOC5)) goto LA6;
			nimln(75, "tables.nim");
			if ((NU)(h) >= (NU)(t_161751.Data->Sup.len)) raiseIndexError();
			LOC5 = (t_161751.Data->data[h].Field0 == ((NU8) 1));
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(76, "tables.nim");
			nimln(76, "tables.nim");
			result = h;
			goto BeforeRet;
		}
		LA7: ;
		nimln(77, "tables.nim");
		nimln(77, "tables.nim");
		h = nexttry_137606(h, (t_161751.Data->Sup.len-1));
	} LA2: ;
	nimln(78, "tables.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_161730)(ttable161560 t_161737, NimStringDesc* key_161740) {
	NIM_BOOL result;
	NI LOC1;
	nimfr("hasKey", "tables.nim")
	result = 0;
	nimln(108, "tables.nim");
	nimln(108, "tables.nim");
	nimln(108, "tables.nim");
	LOC1 = 0;
	LOC1 = rawget_161744(t_161737, key_161740);
	result = (0 <= LOC1);
	popFrame();
	return result;
}

N_NIMCALL(NI32, HEX5BHEX5D_161781)(ttable161560 t_161788, NimStringDesc* key_161791) {
	NI32 result;
	NI index;
	nimfr("[]", "tables.nim")
	result = 0;
	nimln(96, "tables.nim");
	index = rawget_161744(t_161788, key_161791);
	nimln(97, "tables.nim");
	{
		nimln(97, "tables.nim");
		if (!(0 <= index)) goto LA3;
		nimln(97, "tables.nim");
		if ((NU)(index) >= (NU)(t_161788.Data->Sup.len)) raiseIndexError();
		result = t_161788.Data->data[index].Field2;
	}
	LA3: ;
	popFrame();
	return result;
}

static N_INLINE(tcell41290*, usrtocell_44643)(void* usr) {
	tcell41290* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41290*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41290))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41290* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell41290* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_44643(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46202(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, rawinsert_161956)(ttable161560* t_161965, tkeyvaluepairseq161563** data_161973, NimStringDesc* key_161977, NI32 val_161979) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC3;
	nimfr("rawInsert", "tables.nim")
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_118827(key_161977);
	nimln(81, "tables.nim");
	h = (NI)(LOC1 & ((*data_161973)->Sup.len-1));
	nimln(82, "tables.nim");
	while (1) {
		nimln(82, "tables.nim");
		if ((NU)(h) >= (NU)((*data_161973)->Sup.len)) raiseIndexError();
		if (!((*data_161973)->data[h].Field0 == ((NU8) 1))) goto LA2;
		nimln(83, "tables.nim");
		nimln(83, "tables.nim");
		h = nexttry_137606(h, ((*data_161973)->Sup.len-1));
	} LA2: ;
	nimln(84, "tables.nim");
	if ((NU)(h) >= (NU)((*data_161973)->Sup.len)) raiseIndexError();
	LOC3 = 0;
	LOC3 = (*data_161973)->data[h].Field1; (*data_161973)->data[h].Field1 = copyStringRC1(key_161977);
	if (LOC3) nimGCunrefNoCycle(LOC3);
	nimln(85, "tables.nim");
	if ((NU)(h) >= (NU)((*data_161973)->Sup.len)) raiseIndexError();
	(*data_161973)->data[h].Field2 = val_161979;
	nimln(86, "tables.nim");
	if ((NU)(h) >= (NU)((*data_161973)->Sup.len)) raiseIndexError();
	(*data_161973)->data[h].Field0 = ((NU8) 1);
	popFrame();
}

N_NIMCALL(void, enlarge_161886)(ttable161560* t_161895) {
	tkeyvaluepairseq161563* n;
	NI TMP905;
	NI i_161941;
	NI HEX3Atmp_162011;
	NI res_162013;
	tkeyvaluepairseq161563* LOC6;
	nimfr("enlarge", "tables.nim")
	n = 0;
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	TMP905 = mulInt((*t_161895).Data->Sup.len, 2);
	n = (tkeyvaluepairseq161563*) newSeq((&NTI161563), (NI32)(TMP905));
	i_161941 = 0;
	HEX3Atmp_162011 = 0;
	nimln(117, "tables.nim");
	nimln(117, "tables.nim");
	HEX3Atmp_162011 = ((*t_161895).Data->Sup.len-1);
	nimln(1450, "system.nim");
	res_162013 = 0;
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_162013 <= HEX3Atmp_162011)) goto LA1;
		nimln(1450, "system.nim");
		i_161941 = res_162013;
		nimln(118, "tables.nim");
		{
			nimln(118, "tables.nim");
			if ((NU)(i_161941) >= (NU)((*t_161895).Data->Sup.len)) raiseIndexError();
			if (!((*t_161895).Data->data[i_161941].Field0 == ((NU8) 1))) goto LA4;
			nimln(118, "tables.nim");
			if ((NU)(i_161941) >= (NU)((*t_161895).Data->Sup.len)) raiseIndexError();
			if ((NU)(i_161941) >= (NU)((*t_161895).Data->Sup.len)) raiseIndexError();
			rawinsert_161956(t_161895, &n, (*t_161895).Data->data[i_161941].Field1, (*t_161895).Data->data[i_161941].Field2);
		}
		LA4: ;
		nimln(1453, "system.nim");
		res_162013 = addInt(res_162013, 1);
	} LA1: ;
	nimln(119, "tables.nim");
	LOC6 = 0;
	LOC6 = (*t_161895).Data;
	unsureAsgnRef((void**) &(*t_161895).Data, n);
	n = LOC6;
	popFrame();
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_161841)(ttable161560* t_161850, NimStringDesc* key_161854, NI32 val_161856) {
	NI index;
	nimfr("[]=", "tables.nim")
	nimln(127, "tables.nim");
	index = rawget_161744((*t_161850), key_161854);
	nimln(128, "tables.nim");
	{
		nimln(128, "tables.nim");
		if (!(0 <= index)) goto LA3;
		nimln(129, "tables.nim");
		if ((NU)(index) >= (NU)((*t_161850).Data->Sup.len)) raiseIndexError();
		(*t_161850).Data->data[index].Field2 = val_161856;
	}
	goto LA1;
	LA3: ;
	{
		nimln(122, "tables.nim");
		{
			NIM_BOOL LOC8;
			nimln(122, "tables.nim");
			nimln(122, "tables.nim");
			LOC8 = 0;
			LOC8 = mustrehash_137414((*t_161850).Data->Sup.len, (*t_161850).Counter);
			if (!LOC8) goto LA9;
			nimln(122, "tables.nim");
			enlarge_161886(t_161850);
		}
		LA9: ;
		nimln(123, "tables.nim");
		rawinsert_161956(t_161850, &(*t_161850).Data, key_161854, val_161856);
		nimln(124, "tables.nim");
		(*t_161850).Counter = addInt((*t_161850).Counter, 1);
	}
	LA1: ;
	popFrame();
}
N_NOINLINE(void, stdlibtablesInit)(void) {
	nimfr("tables", "tables.nim")
	popFrame();
}

N_NOINLINE(void, stdlibtablesDatInit)(void) {
static TNimNode* TMP888[3];
static TNimNode* TMP889[3];
NI TMP891;
static char* NIM_CONST TMP890[3] = {
"seEmpty", 
"seFilled", 
"seDeleted"};
static TNimNode* TMP893[2];
static TNimNode TMP453[11];
NTI161566.size = sizeof(tkeyvaluepair161566);
NTI161566.kind = 18;
NTI161566.base = 0;
NTI161566.flags = 2;
TMP888[0] = &TMP453[1];
NTI137010.size = sizeof(NU8);
NTI137010.kind = 14;
NTI137010.base = 0;
NTI137010.flags = 3;
for (TMP891 = 0; TMP891 < 3; TMP891++) {
TMP453[TMP891+2].kind = 1;
TMP453[TMP891+2].offset = TMP891;
TMP453[TMP891+2].name = TMP890[TMP891];
TMP889[TMP891] = &TMP453[TMP891+2];
}
TMP453[5].len = 3; TMP453[5].kind = 2; TMP453[5].sons = &TMP889[0];
NTI137010.node = &TMP453[5];
TMP453[1].kind = 1;
TMP453[1].offset = offsetof(tkeyvaluepair161566, Field0);
TMP453[1].typ = (&NTI137010);
TMP453[1].name = "Field0";
TMP888[1] = &TMP453[6];
TMP453[6].kind = 1;
TMP453[6].offset = offsetof(tkeyvaluepair161566, Field1);
TMP453[6].typ = (&NTI143);
TMP453[6].name = "Field1";
TMP888[2] = &TMP453[7];
TMP453[7].kind = 1;
TMP453[7].offset = offsetof(tkeyvaluepair161566, Field2);
TMP453[7].typ = (&NTI112);
TMP453[7].name = "Field2";
TMP453[0].len = 3; TMP453[0].kind = 2; TMP453[0].sons = &TMP888[0];
NTI161566.node = &TMP453[0];
NTI161563.size = sizeof(tkeyvaluepairseq161563*);
NTI161563.kind = 24;
NTI161563.base = (&NTI161566);
NTI161563.flags = 2;
NTI161563.marker = TMP892;
NTI161560.size = sizeof(ttable161560);
NTI161560.kind = 18;
NTI161560.base = 0;
NTI161560.flags = 2;
TMP893[0] = &TMP453[9];
TMP453[9].kind = 1;
TMP453[9].offset = offsetof(ttable161560, Data);
TMP453[9].typ = (&NTI161563);
TMP453[9].name = "data";
TMP893[1] = &TMP453[10];
TMP453[10].kind = 1;
TMP453[10].offset = offsetof(ttable161560, Counter);
TMP453[10].typ = (&NTI106);
TMP453[10].name = "counter";
TMP453[8].len = 2; TMP453[8].kind = 2; TMP453[8].sons = &TMP893[0];
NTI161560.node = &TMP453[8];
}

