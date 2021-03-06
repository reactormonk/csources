/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <dirent.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tlineinfo163527 tlineinfo163527;
typedef struct tlinkedlist118023 tlinkedlist118023;
typedef struct tlistentry118017 tlistentry118017;
typedef struct tstringtable121810 tstringtable121810;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq121808 tkeyvaluepairseq121808;
typedef struct TY95105 TY95105;
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
struct  tlinkedlist118023  {
tlistentry118017* Head;
tlistentry118017* Tail;
NI Counter;
};
typedef NIM_CHAR TY98549[256];
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
struct TY95105 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  tstringtable121810  {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq121808* Data;
NU8 Mode;
};
struct  tlistentry118017  {
  TNimObject Sup;
tlistentry118017* Prev;
tlistentry118017* Next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tkeyvaluepairseq121808 {
  TGenericSeq Sup;
  TY95105 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, addpath_172007)(NimStringDesc* path, tlineinfo163527 info);
N_NIMCALL(NIM_BOOL, contains_118237)(tlinkedlist118023 list, NimStringDesc* data);
N_NIMCALL(void, prependstr_118437)(tlinkedlist118023* list, NimStringDesc* data);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, versionsplitpos_172014)(NimStringDesc* s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_172054)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, addpackage_172137)(tstringtable121810* packages, NimStringDesc* p);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_71024, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable121810* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(tstringtable121810* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(void, addbabelpath_172163)(NimStringDesc* p, tlineinfo163527 info);
N_NIMCALL(void, message_165584)(tlineinfo163527 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addpathwithnimfiles_172170)(NimStringDesc* p, tlineinfo163527 info);
N_NIMCALL(NIM_BOOL, hasnimfile_172174)(NimStringDesc* dir);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, HEX2F_109477)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nsuEndsWith)(NimStringDesc* s, NimStringDesc* suffix);
N_NIMCALL(void, addpathrec_172216)(NimStringDesc* dir, tlineinfo163527 info);
N_NIMCALL(tstringtable121810*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, babelpath_172290)(NimStringDesc* path, tlineinfo163527 info);
STRING_LITERAL(TMP1424, "head", 4);
STRING_LITERAL(TMP1427, ".", 1);
STRING_LITERAL(TMP1428, "..", 2);
STRING_LITERAL(TMP1432, ".nim", 4);
extern tlinkedlist118023 searchpaths_137115;
extern TFrame* frameptr_13038;
extern NI gverbosity_137120;
extern tlinkedlist118023 lazypaths_137116;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

N_NIMCALL(void, addpath_172007)(NimStringDesc* path, tlineinfo163527 info) {
	nimfr("addPath", "babelcmd.nim")
	nimln(15, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(15, "babelcmd.nim");
		nimln(15, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = contains_118237(searchpaths_137115, path);
		if (!!(LOC3)) goto LA4;
		nimln(16, "babelcmd.nim");
		prependstr_118437(&searchpaths_137115, path);
	}
	LA4: ;
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

N_NIMCALL(NI, versionsplitpos_172014)(NimStringDesc* s) {
	NI result;
	NI TMP1423;
	nimfr("versionSplitPos", "babelcmd.nim")
	result = 0;
	nimln(19, "babelcmd.nim");
	nimln(19, "babelcmd.nim");
	nimln(19, "babelcmd.nim");
	TMP1423 = subInt(s->Sup.len, 2);
	result = (NI32)(TMP1423);
	nimln(20, "babelcmd.nim");
	while (1) {
		NIM_BOOL LOC2;
		nimln(20, "babelcmd.nim");
		LOC2 = 0;
		nimln(20, "babelcmd.nim");
		LOC2 = (1 < result);
		if (!(LOC2)) goto LA3;
		nimln(20, "babelcmd.nim");
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		LOC2 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
		LA3: ;
		if (!LOC2) goto LA1;
		nimln(20, "babelcmd.nim");
		result = subInt(result, 1);
	} LA1: ;
	nimln(21, "babelcmd.nim");
	{
		nimln(21, "babelcmd.nim");
		nimln(21, "babelcmd.nim");
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA6;
		nimln(21, "babelcmd.nim");
		nimln(21, "babelcmd.nim");
		result = s->Sup.len;
	}
	LA6: ;
	popFrame();
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_172054)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
	nimfr("<.", "babelcmd.nim")
	result = 0;
	nimln(28, "babelcmd.nim");
	{
		nimln(28, "babelcmd.nim");
		if (!eqStrings(a, ((NimStringDesc*) &TMP1424))) goto LA3;
		nimln(28, "babelcmd.nim");
		nimln(28, "babelcmd.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	nimln(29, "babelcmd.nim");
	i = 0;
	nimln(30, "babelcmd.nim");
	j = 0;
	nimln(31, "babelcmd.nim");
	vera = 0;
	nimln(32, "babelcmd.nim");
	verb = 0;
	nimln(33, "babelcmd.nim");
	while (1) {
		NI ii;
		NI jj;
		nimln(34, "babelcmd.nim");
		ii = npuParseInt(a, &vera, i);
		nimln(35, "babelcmd.nim");
		jj = npuParseInt(b, &verb, j);
		nimln(37, "babelcmd.nim");
		{
			NIM_BOOL LOC8;
			nimln(37, "babelcmd.nim");
			LOC8 = 0;
			nimln(37, "babelcmd.nim");
			LOC8 = (ii <= 0);
			if (LOC8) goto LA9;
			nimln(37, "babelcmd.nim");
			LOC8 = (jj <= 0);
			LA9: ;
			if (!LOC8) goto LA10;
			nimln(37, "babelcmd.nim");
			nimln(37, "babelcmd.nim");
			nimln(37, "babelcmd.nim");
			result = (0 < jj);
			goto BeforeRet;
		}
		LA10: ;
		nimln(38, "babelcmd.nim");
		{
			nimln(38, "babelcmd.nim");
			if (!(vera < verb)) goto LA14;
			nimln(38, "babelcmd.nim");
			nimln(38, "babelcmd.nim");
			result = NIM_TRUE;
			goto BeforeRet;
		}
		goto LA12;
		LA14: ;
		{
			nimln(39, "babelcmd.nim");
			if (!(verb < vera)) goto LA17;
			nimln(39, "babelcmd.nim");
			nimln(39, "babelcmd.nim");
			result = NIM_FALSE;
			goto BeforeRet;
		}
		goto LA12;
		LA17: ;
		LA12: ;
		nimln(41, "babelcmd.nim");
		i = addInt(i, ii);
		nimln(42, "babelcmd.nim");
		j = addInt(j, jj);
		nimln(43, "babelcmd.nim");
		{
			nimln(43, "babelcmd.nim");
			if ((NU)(i) > (NU)(a->Sup.len)) raiseIndexError();
			if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA21;
			nimln(43, "babelcmd.nim");
			i = addInt(i, 1);
		}
		LA21: ;
		nimln(44, "babelcmd.nim");
		{
			nimln(44, "babelcmd.nim");
			if ((NU)(j) > (NU)(b->Sup.len)) raiseIndexError();
			if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA25;
			nimln(44, "babelcmd.nim");
			j = addInt(j, 1);
		}
		LA25: ;
	}
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpackage_172137)(tstringtable121810* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	NI TMP1425;
	nimfr("addPackage", "babelcmd.nim")
	nimln(47, "babelcmd.nim");
	x = versionsplitpos_172014(p);
	nimln(48, "babelcmd.nim");
	nimln(48, "babelcmd.nim");
	nimln(48, "babelcmd.nim");
	TMP1425 = subInt(x, 1);
	name = copyStrLast(p, 0, (NI32)(TMP1425));
	nimln(49, "babelcmd.nim");
	{
		NimStringDesc* version;
		NI TMP1426;
		nimln(49, "babelcmd.nim");
		nimln(49, "babelcmd.nim");
		if (!(x < p->Sup.len)) goto LA3;
		nimln(50, "babelcmd.nim");
		nimln(50, "babelcmd.nim");
		nimln(50, "babelcmd.nim");
		TMP1426 = addInt(x, 1);
		version = copyStr(p, (NI32)(TMP1426));
		nimln(51, "babelcmd.nim");
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			nimln(51, "babelcmd.nim");
			nimln(51, "babelcmd.nim");
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_172054(LOC7, version);
			if (!LOC8) goto LA9;
			nimln(52, "babelcmd.nim");
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nimln(54, "babelcmd.nim");
		nstPut(packages, name, ((NimStringDesc*) &TMP1424));
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void, addbabelpath_172163)(NimStringDesc* p, tlineinfo163527 info) {
	nimfr("addBabelPath", "babelcmd.nim")
	nimln(62, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(62, "babelcmd.nim");
		nimln(62, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = contains_118237(searchpaths_137115, p);
		if (!!(LOC3)) goto LA4;
		nimln(63, "babelcmd.nim");
		{
			nimln(63, "babelcmd.nim");
			if (!(1 <= gverbosity_137120)) goto LA8;
			nimln(63, "babelcmd.nim");
			message_165584(info, ((NU16) 269), p);
		}
		LA8: ;
		nimln(64, "babelcmd.nim");
		prependstr_118437(&lazypaths_137116, p);
	}
	LA4: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, hasnimfile_172174)(NimStringDesc* dir) {
	NIM_BOOL result;
	NU8 kind_172178;
	NimStringDesc* path_172179;
	DIR* d_172190;
	nimfr("hasNimFile", "babelcmd.nim")
	result = 0;
	kind_172178 = 0;
	path_172179 = 0;
	nimln(1262, "os.nim");
	d_172190 = opendir(dir->data);
	nimln(1263, "os.nim");
	{
		int LOC37;
		nimln(1263, "os.nim");
		nimln(1263, "os.nim");
		if (!!((d_172190 == NIM_NIL))) goto LA3;
		nimln(1264, "os.nim");
		while (1) {
			struct dirent* x_172192;
			NimStringDesc* y_172194;
			nimln(1265, "os.nim");
			x_172192 = readdir(d_172190);
			nimln(1266, "os.nim");
			{
				nimln(1266, "os.nim");
				if (!(x_172192 == NIM_NIL)) goto LA8;
				nimln(1266, "os.nim");
				goto LA5;
			}
			LA8: ;
			nimln(1267, "os.nim");
			nimln(1267, "os.nim");
			y_172194 = cstrToNimstr(((NCSTRING) ((*x_172192).d_name)));
			nimln(1268, "os.nim");
			{
				NIM_BOOL LOC12;
				struct stat s_172196;
				NU8 k_172198;
				nimln(1268, "os.nim");
				LOC12 = 0;
				nimln(1268, "os.nim");
				nimln(1268, "os.nim");
				LOC12 = !(eqStrings(y_172194, ((NimStringDesc*) &TMP1427)));
				if (!(LOC12)) goto LA13;
				nimln(1268, "os.nim");
				nimln(1268, "os.nim");
				LOC12 = !(eqStrings(y_172194, ((NimStringDesc*) &TMP1428)));
				LA13: ;
				if (!LOC12) goto LA14;
				memset((void*)&s_172196, 0, sizeof(s_172196));
				nimln(1270, "os.nim");
				y_172194 = HEX2F_109477(dir, y_172194);
				nimln(1271, "os.nim");
				{
					int LOC18;
					nimln(1271, "os.nim");
					nimln(1271, "os.nim");
					LOC18 = 0;
					LOC18 = lstat(y_172194->data, &s_172196);
					if (!(LOC18 < ((NI32) 0))) goto LA19;
					nimln(1271, "os.nim");
					goto LA5;
				}
				LA19: ;
				nimln(1272, "os.nim");
				k_172198 = ((NU8) 0);
				nimln(1273, "os.nim");
				{
					NIM_BOOL LOC23;
					nimln(1273, "os.nim");
					LOC23 = 0;
					LOC23 = S_ISDIR(s_172196.st_mode);
					if (!LOC23) goto LA24;
					nimln(1273, "os.nim");
					k_172198 = ((NU8) 2);
				}
				LA24: ;
				nimln(1274, "os.nim");
				{
					NIM_BOOL LOC28;
					nimln(1274, "os.nim");
					LOC28 = 0;
					LOC28 = S_ISLNK(s_172196.st_mode);
					if (!LOC28) goto LA29;
					nimln(1274, "os.nim");
					nimln(1274, "os.nim");
					k_172198 = addInt(k_172198, 1);
				}
				LA29: ;
				nimln(1272, "os.nim");
				kind_172178 = k_172198;
				nimln(1267, "os.nim");
				path_172179 = y_172194;
				nimln(69, "babelcmd.nim");
				{
					NIM_BOOL LOC33;
					nimln(69, "babelcmd.nim");
					LOC33 = 0;
					nimln(69, "babelcmd.nim");
					LOC33 = (kind_172178 == ((NU8) 0));
					if (!(LOC33)) goto LA34;
					nimln(69, "babelcmd.nim");
					LOC33 = nsuEndsWith(path_172179, ((NimStringDesc*) &TMP1432));
					LA34: ;
					if (!LOC33) goto LA35;
					nimln(70, "babelcmd.nim");
					result = NIM_TRUE;
					nimln(71, "babelcmd.nim");
					goto LA5;
				}
				LA35: ;
			}
			LA14: ;
		} LA5: ;
		nimln(1276, "os.nim");
		nimln(1276, "os.nim");
		LOC37 = 0;
		LOC37 = closedir(d_172190);
	}
	LA3: ;
	popFrame();
	return result;
}

N_NIMCALL(void, addpathwithnimfiles_172170)(NimStringDesc* p, tlineinfo163527 info) {
	nimfr("addPathWithNimFiles", "babelcmd.nim")
	nimln(72, "babelcmd.nim");
	{
		NIM_BOOL LOC3;
		nimln(72, "babelcmd.nim");
		LOC3 = 0;
		LOC3 = hasnimfile_172174(p);
		if (!LOC3) goto LA4;
		nimln(73, "babelcmd.nim");
		addbabelpath_172163(p, info);
	}
	goto LA1;
	LA4: ;
	{
		NU8 kind_172201;
		NimStringDesc* p2_172202;
		DIR* d_172204;
		kind_172201 = 0;
		p2_172202 = 0;
		nimln(1262, "os.nim");
		d_172204 = opendir(p->data);
		nimln(1263, "os.nim");
		{
			int LOC42;
			nimln(1263, "os.nim");
			nimln(1263, "os.nim");
			if (!!((d_172204 == NIM_NIL))) goto LA9;
			nimln(1264, "os.nim");
			while (1) {
				struct dirent* x_172206;
				NimStringDesc* y_172208;
				nimln(1265, "os.nim");
				x_172206 = readdir(d_172204);
				nimln(1266, "os.nim");
				{
					nimln(1266, "os.nim");
					if (!(x_172206 == NIM_NIL)) goto LA14;
					nimln(1266, "os.nim");
					goto LA11;
				}
				LA14: ;
				nimln(1267, "os.nim");
				nimln(1267, "os.nim");
				y_172208 = cstrToNimstr(((NCSTRING) ((*x_172206).d_name)));
				nimln(1268, "os.nim");
				{
					NIM_BOOL LOC18;
					struct stat s_172210;
					NU8 k_172212;
					nimln(1268, "os.nim");
					LOC18 = 0;
					nimln(1268, "os.nim");
					nimln(1268, "os.nim");
					LOC18 = !(eqStrings(y_172208, ((NimStringDesc*) &TMP1427)));
					if (!(LOC18)) goto LA19;
					nimln(1268, "os.nim");
					nimln(1268, "os.nim");
					LOC18 = !(eqStrings(y_172208, ((NimStringDesc*) &TMP1428)));
					LA19: ;
					if (!LOC18) goto LA20;
					memset((void*)&s_172210, 0, sizeof(s_172210));
					nimln(1270, "os.nim");
					y_172208 = HEX2F_109477(p, y_172208);
					nimln(1271, "os.nim");
					{
						int LOC24;
						nimln(1271, "os.nim");
						nimln(1271, "os.nim");
						LOC24 = 0;
						LOC24 = lstat(y_172208->data, &s_172210);
						if (!(LOC24 < ((NI32) 0))) goto LA25;
						nimln(1271, "os.nim");
						goto LA11;
					}
					LA25: ;
					nimln(1272, "os.nim");
					k_172212 = ((NU8) 0);
					nimln(1273, "os.nim");
					{
						NIM_BOOL LOC29;
						nimln(1273, "os.nim");
						LOC29 = 0;
						LOC29 = S_ISDIR(s_172210.st_mode);
						if (!LOC29) goto LA30;
						nimln(1273, "os.nim");
						k_172212 = ((NU8) 2);
					}
					LA30: ;
					nimln(1274, "os.nim");
					{
						NIM_BOOL LOC34;
						nimln(1274, "os.nim");
						LOC34 = 0;
						LOC34 = S_ISLNK(s_172210.st_mode);
						if (!LOC34) goto LA35;
						nimln(1274, "os.nim");
						nimln(1274, "os.nim");
						k_172212 = addInt(k_172212, 1);
					}
					LA35: ;
					nimln(1272, "os.nim");
					kind_172201 = k_172212;
					nimln(1267, "os.nim");
					p2_172202 = y_172208;
					nimln(76, "babelcmd.nim");
					{
						NIM_BOOL LOC39;
						nimln(76, "babelcmd.nim");
						LOC39 = 0;
						LOC39 = hasnimfile_172174(p2_172202);
						if (!LOC39) goto LA40;
						nimln(76, "babelcmd.nim");
						addbabelpath_172163(p2_172202, info);
					}
					LA40: ;
				}
				LA20: ;
			} LA11: ;
			nimln(1276, "os.nim");
			nimln(1276, "os.nim");
			LOC42 = 0;
			LOC42 = closedir(d_172204);
		}
		LA9: ;
	}
	LA1: ;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(void, addpathrec_172216)(NimStringDesc* dir, tlineinfo163527 info) {
	tstringtable121810* packages;
	NI pos;
	NI TMP1433;
	NU8 k_172252;
	NimStringDesc* p_172253;
	DIR* d_172265;
	NimStringDesc* p_172263;
	NimStringDesc* key_172275;
	NimStringDesc* val_172277;
	NI h_172279;
	NI HEX3Atmp_172281;
	NI res_172283;
	nimfr("addPathRec", "babelcmd.nim")
	nimln(79, "babelcmd.nim");
	packages = nstnewStringTable(((NU8) 2));
	nimln(80, "babelcmd.nim");
	nimln(80, "babelcmd.nim");
	nimln(80, "babelcmd.nim");
	TMP1433 = subInt(dir->Sup.len, 1);
	pos = (NI32)(TMP1433);
	nimln(81, "babelcmd.nim");
	{
		nimln(81, "babelcmd.nim");
		if ((NU)(pos) > (NU)(dir->Sup.len)) raiseIndexError();
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		nimln(81, "babelcmd.nim");
		pos = addInt(pos, 1);
	}
	LA3: ;
	k_172252 = 0;
	p_172253 = 0;
	nimln(1262, "os.nim");
	d_172265 = opendir(dir->data);
	nimln(1263, "os.nim");
	{
		int LOC41;
		nimln(1263, "os.nim");
		nimln(1263, "os.nim");
		if (!!((d_172265 == NIM_NIL))) goto LA7;
		nimln(1264, "os.nim");
		while (1) {
			struct dirent* x_172267;
			NimStringDesc* y_172269;
			nimln(1265, "os.nim");
			x_172267 = readdir(d_172265);
			nimln(1266, "os.nim");
			{
				nimln(1266, "os.nim");
				if (!(x_172267 == NIM_NIL)) goto LA12;
				nimln(1266, "os.nim");
				goto LA9;
			}
			LA12: ;
			nimln(1267, "os.nim");
			nimln(1267, "os.nim");
			y_172269 = cstrToNimstr(((NCSTRING) ((*x_172267).d_name)));
			nimln(1268, "os.nim");
			{
				NIM_BOOL LOC16;
				struct stat s_172271;
				NU8 k_172273;
				nimln(1268, "os.nim");
				LOC16 = 0;
				nimln(1268, "os.nim");
				nimln(1268, "os.nim");
				LOC16 = !(eqStrings(y_172269, ((NimStringDesc*) &TMP1427)));
				if (!(LOC16)) goto LA17;
				nimln(1268, "os.nim");
				nimln(1268, "os.nim");
				LOC16 = !(eqStrings(y_172269, ((NimStringDesc*) &TMP1428)));
				LA17: ;
				if (!LOC16) goto LA18;
				memset((void*)&s_172271, 0, sizeof(s_172271));
				nimln(1270, "os.nim");
				y_172269 = HEX2F_109477(dir, y_172269);
				nimln(1271, "os.nim");
				{
					int LOC22;
					nimln(1271, "os.nim");
					nimln(1271, "os.nim");
					LOC22 = 0;
					LOC22 = lstat(y_172269->data, &s_172271);
					if (!(LOC22 < ((NI32) 0))) goto LA23;
					nimln(1271, "os.nim");
					goto LA9;
				}
				LA23: ;
				nimln(1272, "os.nim");
				k_172273 = ((NU8) 0);
				nimln(1273, "os.nim");
				{
					NIM_BOOL LOC27;
					nimln(1273, "os.nim");
					LOC27 = 0;
					LOC27 = S_ISDIR(s_172271.st_mode);
					if (!LOC27) goto LA28;
					nimln(1273, "os.nim");
					k_172273 = ((NU8) 2);
				}
				LA28: ;
				nimln(1274, "os.nim");
				{
					NIM_BOOL LOC32;
					nimln(1274, "os.nim");
					LOC32 = 0;
					LOC32 = S_ISLNK(s_172271.st_mode);
					if (!LOC32) goto LA33;
					nimln(1274, "os.nim");
					nimln(1274, "os.nim");
					k_172273 = addInt(k_172273, 1);
				}
				LA33: ;
				nimln(1272, "os.nim");
				k_172252 = k_172273;
				nimln(1267, "os.nim");
				p_172253 = y_172269;
				nimln(83, "babelcmd.nim");
				{
					NIM_BOOL LOC37;
					nimln(83, "babelcmd.nim");
					LOC37 = 0;
					nimln(83, "babelcmd.nim");
					LOC37 = (k_172252 == ((NU8) 2));
					if (!(LOC37)) goto LA38;
					nimln(83, "babelcmd.nim");
					nimln(83, "babelcmd.nim");
					if ((NU)(pos) > (NU)(p_172253->Sup.len)) raiseIndexError();
					LOC37 = !(((NU8)(p_172253->data[pos]) == (NU8)(46)));
					LA38: ;
					if (!LOC37) goto LA39;
					nimln(84, "babelcmd.nim");
					addpackage_172137(packages, p_172253);
				}
				LA39: ;
			}
			LA18: ;
		} LA9: ;
		nimln(1276, "os.nim");
		nimln(1276, "os.nim");
		LOC41 = 0;
		LOC41 = closedir(d_172265);
	}
	LA7: ;
	p_172263 = 0;
	key_172275 = 0;
	val_172277 = 0;
	h_172279 = 0;
	HEX3Atmp_172281 = 0;
	nimln(40, "strtabs.nim");
	nimln(40, "strtabs.nim");
	HEX3Atmp_172281 = ((*packages).Data->Sup.len-1);
	nimln(1457, "system.nim");
	res_172283 = 0;
	nimln(1458, "system.nim");
	while (1) {
		nimln(1458, "system.nim");
		if (!(res_172283 <= HEX3Atmp_172281)) goto LA42;
		nimln(1457, "system.nim");
		h_172279 = res_172283;
		nimln(41, "strtabs.nim");
		{
			NimStringDesc* res_172285;
			nimln(41, "strtabs.nim");
			nimln(41, "strtabs.nim");
			if ((NU)(h_172279) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			if (!!((*packages).Data->data[h_172279].Field0 == 0)) goto LA45;
			nimln(42, "strtabs.nim");
			if ((NU)(h_172279) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			key_172275 = (*packages).Data->data[h_172279].Field0;
			nimln(42, "strtabs.nim");
			if ((NU)(h_172279) >= (NU)((*packages).Data->Sup.len)) raiseIndexError();
			val_172277 = (*packages).Data->data[h_172279].Field1;
			nimln(58, "babelcmd.nim");
			nimln(58, "babelcmd.nim");
			{
				nimln(58, "babelcmd.nim");
				if (!eqStrings(val_172277, ((NimStringDesc*) &TMP1424))) goto LA49;
				res_172285 = key_172275;
			}
			goto LA47;
			LA49: ;
			{
				NimStringDesc* LOC52;
				nimln(58, "babelcmd.nim");
				LOC52 = 0;
				LOC52 = rawNewString(key_172275->Sup.len + val_172277->Sup.len + 1);
appendString(LOC52, key_172275);
appendChar(LOC52, 45);
appendString(LOC52, val_172277);
				res_172285 = LOC52;
			}
			LA47: ;
			nimln(58, "babelcmd.nim");
			p_172263 = res_172285;
			nimln(86, "babelcmd.nim");
			addbabelpath_172163(p_172263, info);
		}
		LA45: ;
		nimln(1460, "system.nim");
		res_172283 = addInt(res_172283, 1);
	} LA42: ;
	popFrame();
}

N_NIMCALL(void, babelpath_172290)(NimStringDesc* path, tlineinfo163527 info) {
	nimfr("babelPath", "babelcmd.nim")
	nimln(89, "babelcmd.nim");
	addpathrec_172216(path, info);
	nimln(90, "babelcmd.nim");
	addbabelpath_172163(path, info);
	popFrame();
}
N_NOINLINE(void, babelcmdInit)(void) {
	nimfr("babelcmd", "babelcmd.nim")
	popFrame();
}

N_NOINLINE(void, babelcmdDatInit)(void) {
}

