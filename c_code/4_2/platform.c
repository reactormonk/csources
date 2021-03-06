/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tinfoos140044 tinfoos140044;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tinfocpu140453 tinfocpu140453;
typedef struct tcell41290 tcell41290;
typedef struct TNimType TNimType;
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
typedef struct TNimNode TNimNode;
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
struct tinfoos140044 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef tinfoos140044 TY140064[23];
typedef NimStringDesc* TY140463[2];
struct tinfocpu140453 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu140453 TY140469[14];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
N_NIMCALL(void, settarget_140599)(NU8 o, NU8 c);
N_NIMCALL(void, failedassertimpl_79821)(NimStringDesc* msg);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(NU8, nametoos_140582)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, nametocpu_140586)(NimStringDesc* name);
STRING_LITERAL(TMP462, "DOS", 3);
STRING_LITERAL(TMP463, "..", 2);
STRING_LITERAL(TMP464, "$1.dll", 6);
STRING_LITERAL(TMP465, "/", 1);
STRING_LITERAL(TMP466, ".obj", 4);
STRING_LITERAL(TMP467, "\015\012", 2);
STRING_LITERAL(TMP468, ";", 1);
STRING_LITERAL(TMP469, "\\", 1);
STRING_LITERAL(TMP470, ".bat", 4);
STRING_LITERAL(TMP471, ".", 1);
STRING_LITERAL(TMP472, ".exe", 4);
STRING_LITERAL(TMP473, "Windows", 7);
STRING_LITERAL(TMP474, "OS2", 3);
STRING_LITERAL(TMP475, "Linux", 5);
STRING_LITERAL(TMP476, "lib$1.so", 8);
STRING_LITERAL(TMP477, ".o", 2);
STRING_LITERAL(TMP478, "\012", 1);
STRING_LITERAL(TMP479, ":", 1);
STRING_LITERAL(TMP480, ".sh", 3);
STRING_LITERAL(TMP481, "", 0);
STRING_LITERAL(TMP482, "MorphOS", 7);
STRING_LITERAL(TMP483, "SkyOS", 5);
STRING_LITERAL(TMP484, "Solaris", 7);
STRING_LITERAL(TMP485, "Irix", 4);
STRING_LITERAL(TMP486, "NetBSD", 6);
STRING_LITERAL(TMP487, "FreeBSD", 7);
STRING_LITERAL(TMP488, "OpenBSD", 7);
STRING_LITERAL(TMP489, "AIX", 3);
STRING_LITERAL(TMP490, "PalmOS", 6);
STRING_LITERAL(TMP491, "QNX", 3);
STRING_LITERAL(TMP492, "Amiga", 5);
STRING_LITERAL(TMP493, "$1.library", 10);
STRING_LITERAL(TMP494, "Atari", 5);
STRING_LITERAL(TMP495, ".tpp", 4);
STRING_LITERAL(TMP496, "Netware", 7);
STRING_LITERAL(TMP497, "$1.nlm", 6);
STRING_LITERAL(TMP498, ".nlm", 4);
STRING_LITERAL(TMP499, "MacOS", 5);
STRING_LITERAL(TMP500, "::", 2);
STRING_LITERAL(TMP501, "$1Lib", 5);
STRING_LITERAL(TMP502, "\015", 1);
STRING_LITERAL(TMP503, ",", 1);
STRING_LITERAL(TMP504, "MacOSX", 6);
STRING_LITERAL(TMP505, "lib$1.dylib", 11);
STRING_LITERAL(TMP506, "Haiku", 5);
STRING_LITERAL(TMP507, "JS", 2);
STRING_LITERAL(TMP508, "NimrodVM", 8);
STRING_LITERAL(TMP509, "Standalone", 10);
NIM_CONST TY140064 os_140063 = {{((NimStringDesc*) &TMP462),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP464),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP469),
((NimStringDesc*) &TMP470),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP471),
2}
,
{((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP464),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP469),
((NimStringDesc*) &TMP470),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP471),
2}
,
{((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP464),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP469),
((NimStringDesc*) &TMP470),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP471),
2}
,
{((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
5}
,
{((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
5}
,
{((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
5}
,
{((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
5}
,
{((NimStringDesc*) &TMP485),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
5}
,
{((NimStringDesc*) &TMP486),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
5}
,
{((NimStringDesc*) &TMP487),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
5}
,
{((NimStringDesc*) &TMP488),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
5}
,
{((NimStringDesc*) &TMP489),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
5}
,
{((NimStringDesc*) &TMP490),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
1}
,
{((NimStringDesc*) &TMP491),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
5}
,
{((NimStringDesc*) &TMP492),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP493),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
1}
,
{((NimStringDesc*) &TMP494),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP464),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP495),
((NimStringDesc*) &TMP471),
1}
,
{((NimStringDesc*) &TMP496),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP497),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP498),
((NimStringDesc*) &TMP471),
2}
,
{((NimStringDesc*) &TMP499),
((NimStringDesc*) &TMP500),
((NimStringDesc*) &TMP501),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP502),
((NimStringDesc*) &TMP503),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
2}
,
{((NimStringDesc*) &TMP504),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP505),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
13}
,
{((NimStringDesc*) &TMP506),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
13}
,
{((NimStringDesc*) &TMP507),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
0}
,
{((NimStringDesc*) &TMP508),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
0}
,
{((NimStringDesc*) &TMP509),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP471),
0}
}
;
STRING_LITERAL(TMP510, "littleEndian", 12);
STRING_LITERAL(TMP511, "bigEndian", 9);
NIM_CONST TY140463 endiantostr_140462 = {((NimStringDesc*) &TMP510),
((NimStringDesc*) &TMP511)}
;
STRING_LITERAL(TMP512, "i386", 4);
STRING_LITERAL(TMP513, "m68k", 4);
STRING_LITERAL(TMP514, "alpha", 5);
STRING_LITERAL(TMP515, "powerpc", 7);
STRING_LITERAL(TMP516, "powerpc64", 9);
STRING_LITERAL(TMP517, "sparc", 5);
STRING_LITERAL(TMP518, "vm", 2);
STRING_LITERAL(TMP519, "ia64", 4);
STRING_LITERAL(TMP520, "amd64", 5);
STRING_LITERAL(TMP521, "mips", 4);
STRING_LITERAL(TMP522, "arm", 3);
STRING_LITERAL(TMP523, "js", 2);
STRING_LITERAL(TMP524, "nimrodvm", 8);
STRING_LITERAL(TMP525, "avr", 3);
NIM_CONST TY140469 cpu_140468 = {{((NimStringDesc*) &TMP512),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP513),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP514),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP515),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP516),
64,
((NU8) 1),
64,
64}
,
{((NimStringDesc*) &TMP517),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP518),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP519),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP520),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP521),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP522),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP523),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP524),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP525),
16,
((NU8) 0),
32,
16}
}
;
STRING_LITERAL(TMP526, "c != cpuNone ", 13);
STRING_LITERAL(TMP527, "o != osNone ", 12);
STRING_LITERAL(TMP531, "solaris", 7);
NU8 targetcpu_140573;
NU8 hostcpu_140574;
NU8 targetos_140575;
NU8 hostos_140576;
NI intsize_140590;
NI floatsize_140591;
NI ptrsize_140592;
NimStringDesc* tnl_140593;
extern TFrame* frameptr_13038;
extern tgcheap43216 gch_43244;

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
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
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_46202(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, settarget_140599)(NU8 o, NU8 c) {
	NI TMP528;
	NI TMP529;
	NI TMP530;
	NimStringDesc* LOC9;
	nimfr("setTarget", "platform.nim")
	nimln(198, "platform.nim");
	{
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		if (!!(!((c == ((NU8) 0))))) goto LA3;
		nimln(198, "platform.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP526));
	}
	LA3: ;
	nimln(199, "platform.nim");
	{
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		if (!!(!((o == ((NU8) 0))))) goto LA7;
		nimln(199, "platform.nim");
		failedassertimpl_79821(((NimStringDesc*) &TMP527));
	}
	LA7: ;
	nimln(201, "platform.nim");
	targetcpu_140573 = c;
	nimln(202, "platform.nim");
	targetos_140575 = o;
	nimln(203, "platform.nim");
	nimln(203, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP528 = divInt(cpu_140468[(c)- 1].Field1, 8);
	intsize_140590 = (NI64)(TMP528);
	nimln(204, "platform.nim");
	nimln(204, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP529 = divInt(cpu_140468[(c)- 1].Field3, 8);
	floatsize_140591 = (NI64)(TMP529);
	nimln(205, "platform.nim");
	nimln(205, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP530 = divInt(cpu_140468[(c)- 1].Field4, 8);
	ptrsize_140592 = (NI64)(TMP530);
	nimln(206, "platform.nim");
	if (o < 1 || o > 23) raiseIndexError();
	LOC9 = 0;
	LOC9 = tnl_140593; tnl_140593 = copyStringRC1(os_140063[(o)- 1].Field5);
	if (LOC9) nimGCunrefNoCycle(LOC9);
	popFrame();
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
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

N_NIMCALL(NU8, nametoos_140582)(NimStringDesc* name) {
	NU8 result;
	NU8 i_141072;
	NU8 res_141075;
	nimfr("nameToOS", "platform.nim")
	result = 0;
	i_141072 = 0;
	nimln(1450, "system.nim");
	res_141075 = ((NU8) 1);
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_141075 <= ((NU8) 23))) goto LA1;
		nimln(1450, "system.nim");
		i_141072 = res_141075;
		nimln(210, "platform.nim");
		{
			NI LOC4;
			nimln(210, "platform.nim");
			nimln(210, "platform.nim");
			if (i_141072 < 1 || i_141072 > 23) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(name, os_140063[(i_141072)- 1].Field0);
			if (!(LOC4 == 0)) goto LA5;
			nimln(211, "platform.nim");
			nimln(211, "platform.nim");
			result = i_141072;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1453, "system.nim");
		res_141075 = addInt(res_141075, 1);
	} LA1: ;
	nimln(212, "platform.nim");
	result = ((NU8) 0);
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, nametocpu_140586)(NimStringDesc* name) {
	NU8 result;
	NU8 i_141140;
	NU8 res_141143;
	nimfr("nameToCPU", "platform.nim")
	result = 0;
	i_141140 = 0;
	nimln(1450, "system.nim");
	res_141143 = ((NU8) 1);
	nimln(1451, "system.nim");
	while (1) {
		nimln(1451, "system.nim");
		if (!(res_141143 <= ((NU8) 14))) goto LA1;
		nimln(1450, "system.nim");
		i_141140 = res_141143;
		nimln(216, "platform.nim");
		{
			NI LOC4;
			nimln(216, "platform.nim");
			nimln(216, "platform.nim");
			if (i_141140 < 1 || i_141140 > 14) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(name, cpu_140468[(i_141140)- 1].Field0);
			if (!(LOC4 == 0)) goto LA5;
			nimln(217, "platform.nim");
			nimln(217, "platform.nim");
			result = i_141140;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1453, "system.nim");
		res_141143 = addInt(res_141143, 1);
	} LA1: ;
	nimln(218, "platform.nim");
	result = ((NU8) 0);
	BeforeRet: ;
	popFrame();
	return result;
}
N_NOINLINE(void, platformInit)(void) {
	nimfr("platform", "platform.nim")
	nimln(220, "platform.nim");
	hostcpu_140574 = nametocpu_140586(((NimStringDesc*) &TMP520));
	nimln(221, "platform.nim");
	hostos_140576 = nametoos_140582(((NimStringDesc*) &TMP531));
	nimln(223, "platform.nim");
	settarget_140599(hostos_140576, hostcpu_140574);
	popFrame();
}

N_NOINLINE(void, platformDatInit)(void) {
}

