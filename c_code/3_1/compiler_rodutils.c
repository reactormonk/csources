/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef NIM_CHAR TY177022[81];
N_NIMCALL(NimStringDesc*, tostrmaxprecision_177015)(NF f);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, encodestr_177029)(NimStringDesc* s, NimStringDesc** result);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, hexchar_177058)(NIM_CHAR c, NI* xi);
N_NIMCALL(NimStringDesc*, decodestr_177114)(NCSTRING s, NI* pos);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, encodevbiggestintaux_177161)(NI64 x, NimStringDesc** result);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NIMCALL(void, encodevbiggestint_177186)(NI64 x, NimStringDesc** result);
N_NIMCALL(void, encodevintaux_177193)(NI x, NimStringDesc** result);
static N_INLINE(NI, modInt)(NI a, NI b);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NIMCALL(void, encodevint_177218)(NI x, NimStringDesc** result);
N_NIMCALL(NI, decodevint_177239)(NCSTRING s, NI* pos);
N_NIMCALL(void, hiddenraiseassert_76017)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI64, decodevbiggestint_177495)(NCSTRING s, NI* pos);
N_NIMCALL(NI64, mulInt64)(NI64 a, NI64 b);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
STRING_LITERAL(TMP2059, "NAN", 3);
STRING_LITERAL(TMP2060, "0.0", 3);
STRING_LITERAL(TMP2061, "INF", 3);
STRING_LITERAL(TMP2062, "-INF", 4);
STRING_LITERAL(TMP2069, "", 0);
STRING_LITERAL(TMP2075, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(TMP2083, "contains({\'a\'..\'z\', \'A\'..\'Z\', \'0\'..\'9\', \'-\', \'\\x80\'..\'\\xFF\'}, s"
"[i]) ", 68);
extern TFrame* frameptr_12037;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(NimStringDesc*, tostrmaxprecision_177015)(NF f) {
	NimStringDesc* result;
	nimfr("ToStrMaxPrecision", "rodutils.nim")
	result = 0;
	nimln(16, "rodutils.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((f == f))) goto LA3;
		nimln(17, "rodutils.nim");
		result = copyString(((NimStringDesc*) &TMP2059));
	}	goto LA1;
	LA3: ;
	{
		nimln(18, "rodutils.nim");
		if (!(f == 0.0)) goto LA6;
		nimln(19, "rodutils.nim");
		result = copyString(((NimStringDesc*) &TMP2060));
	}	goto LA1;
	LA6: ;
	{
		nimln(20, "rodutils.nim");
		nimln(20, "rodutils.nim");
		if (!(f == ((NF)(5.0000000000000000e-01) * (NF)(f)))) goto LA9;
		nimln(21, "rodutils.nim");
		{
			nimln(706, "system.nim");
			if (!(0.0 < f)) goto LA13;
			nimln(21, "rodutils.nim");
			result = copyString(((NimStringDesc*) &TMP2061));
		}		goto LA11;
		LA13: ;
		{
			nimln(22, "rodutils.nim");
			result = copyString(((NimStringDesc*) &TMP2062));
		}		LA11: ;
	}	goto LA1;
	LA9: ;
	{
		TY177022 buf;
		memset((void*)buf, 0, sizeof(buf));
		nimln(25, "rodutils.nim");
		sprintf(((NCSTRING) (buf)), "%#.16e", f);		nimln(26, "rodutils.nim");
		nimln(26, "rodutils.nim");
		result = cstrToNimstr(((NCSTRING) (buf)));
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
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
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
N_NIMCALL(void, encodestr_177029)(NimStringDesc* s, NimStringDesc** result) {
	NI i_177043;
	NI HEX3Atmp_177051;
	NI TMP2063;
	NI res_177053;
	nimfr("encodeStr", "rodutils.nim")
	i_177043 = 0;
	HEX3Atmp_177051 = 0;
	nimln(29, "rodutils.nim");
	nimln(29, "rodutils.nim");
	nimln(29, "rodutils.nim");
	TMP2063 = subInt(s->Sup.len, 1);
	HEX3Atmp_177051 = (NI32)(TMP2063);
	nimln(1301, "system.nim");
	res_177053 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_177053 <= HEX3Atmp_177051)) goto LA1;
		nimln(1301, "system.nim");
		i_177043 = res_177053;
		nimln(30, "rodutils.nim");
		if ((NU)(i_177043) > (NU)(s->Sup.len)) raiseIndexError();
		switch (((NU8)(s->data[i_177043]))) {
		case 97 ... 122:
		case 65 ... 90:
		case 48 ... 57:
		case 95:
		{
			nimln(31, "rodutils.nim");
			if ((NU)(i_177043) > (NU)(s->Sup.len)) raiseIndexError();
			(*result) = addChar((*result), s->data[i_177043]);
		}		break;
		default:
		{
			NimStringDesc* LOC4;
			NimStringDesc* LOC5;
			nimln(32, "rodutils.nim");
			nimln(32, "rodutils.nim");
			LOC4 = 0;
			nimln(32, "rodutils.nim");
			nimln(32, "rodutils.nim");
			if ((NU)(i_177043) > (NU)(s->Sup.len)) raiseIndexError();
			LOC5 = 0;
			LOC5 = nsuToHex(((NI64) (((NU8)(s->data[i_177043])))), 2);
			LOC4 = rawNewString(LOC5->Sup.len + 1);
appendChar(LOC4, 92);
appendString(LOC4, LOC5);
			(*result) = resizeString((*result), LOC4->Sup.len + 0);
appendString((*result), LOC4);
		}		break;
		}
		nimln(1304, "system.nim");
		res_177053 = addInt(res_177053, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, hexchar_177058)(NIM_CHAR c, NI* xi) {
	nimfr("hexChar", "rodutils.nim")
	nimln(35, "rodutils.nim");
	switch (((NU8)(c))) {
	case 48 ... 57:
	{
		NI TMP2064;
		nimln(36, "rodutils.nim");
		nimln(36, "rodutils.nim");
		nimln(36, "rodutils.nim");
		nimln(36, "rodutils.nim");
		nimln(36, "rodutils.nim");
		TMP2064 = subInt(((NI) (((NU8)(c)))), 48);
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(4)) | ((NI) ((NI32)(TMP2064))));
	}	break;
	case 97 ... 102:
	{
		NI TMP2065;
		NI TMP2066;
		nimln(37, "rodutils.nim");
		nimln(37, "rodutils.nim");
		nimln(37, "rodutils.nim");
		nimln(37, "rodutils.nim");
		nimln(37, "rodutils.nim");
		nimln(37, "rodutils.nim");
		TMP2065 = subInt(((NI) (((NU8)(c)))), 97);
		TMP2066 = addInt(((NI) ((NI32)(TMP2065))), 10);
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(4)) | ((NI) ((NI32)(TMP2066))));
	}	break;
	case 65 ... 70:
	{
		NI TMP2067;
		NI TMP2068;
		nimln(38, "rodutils.nim");
		nimln(38, "rodutils.nim");
		nimln(38, "rodutils.nim");
		nimln(38, "rodutils.nim");
		nimln(38, "rodutils.nim");
		nimln(38, "rodutils.nim");
		TMP2067 = subInt(((NI) (((NU8)(c)))), 65);
		TMP2068 = addInt(((NI) ((NI32)(TMP2067))), 10);
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(4)) | ((NI) ((NI32)(TMP2068))));
	}	break;
	default:
	{
	}	break;
	}
	popFrame();
}
static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));	}	LA1: ;
	BeforeRet: ;	return result;
}
N_NIMCALL(NimStringDesc*, decodestr_177114)(NCSTRING s, NI* pos) {
	NimStringDesc* result;
	NI i;
	nimfr("decodeStr", "rodutils.nim")
	result = 0;
	nimln(42, "rodutils.nim");
	i = (*pos);
	nimln(43, "rodutils.nim");
	result = copyString(((NimStringDesc*) &TMP2069));
	nimln(44, "rodutils.nim");
	while (1) {
		nimln(45, "rodutils.nim");
		switch (((NU8)(s[i]))) {
		case 92:
		{
			NI xi;
			NI TMP2070;
			NI TMP2071;
			nimln(47, "rodutils.nim");
			i = addInt(i, 3);
			nimln(48, "rodutils.nim");
			xi = 0;
			nimln(49, "rodutils.nim");
			nimln(49, "rodutils.nim");
			TMP2070 = subInt(i, 2);
			hexchar_177058(s[(NI32)(TMP2070)], &xi);			nimln(50, "rodutils.nim");
			nimln(50, "rodutils.nim");
			TMP2071 = subInt(i, 1);
			hexchar_177058(s[(NI32)(TMP2071)], &xi);			nimln(51, "rodutils.nim");
			nimln(51, "rodutils.nim");
			result = addChar(result, ((NIM_CHAR) (((NI)chckRange(xi, 0, 255)))));
		}		break;
		case 97 ... 122:
		case 65 ... 90:
		case 48 ... 57:
		case 95:
		{
			nimln(53, "rodutils.nim");
			result = addChar(result, s[i]);
			nimln(54, "rodutils.nim");
			i = addInt(i, 1);
		}		break;
		default:
		{
			nimln(55, "rodutils.nim");
			goto LA1;
		}		break;
		}
	} LA1: ;
	nimln(56, "rodutils.nim");
	(*pos) = i;
	popFrame();
	return result;
}
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	result = (NI64)(a % b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();	}	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(void, encodevbiggestintaux_177161)(NI64 x, NimStringDesc** result) {
	NIM_CHAR d_177167;
	NI64 v_177169;
	NI64 rem_177171;
	NI64 TMP2072;
	NI idx_177173;
	nimfr("encodeVBiggestIntAux", "rodutils.nim")
	d_177167 = 0;
	nimln(69, "rodutils.nim");
	v_177169 = x;
	nimln(70, "rodutils.nim");
	nimln(70, "rodutils.nim");
	TMP2072 = modInt64(v_177169, 190);
	rem_177171 = (NI64)(TMP2072);
	nimln(71, "rodutils.nim");
	{
		NI64 TMP2073;
		nimln(71, "rodutils.nim");
		if (!(((NI) (rem_177171)) < 0)) goto LA3;
		nimln(72, "rodutils.nim");
		(*result) = addChar((*result), 45);
		nimln(73, "rodutils.nim");
		nimln(73, "rodutils.nim");
		nimln(73, "rodutils.nim");
		TMP2073 = divInt64(v_177169, 190);
		if ((NI64)(TMP2073) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		v_177169 = -((NI64)(TMP2073));
		nimln(74, "rodutils.nim");
		nimln(74, "rodutils.nim");
		if (((NI64) (rem_177171)) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
		rem_177171 = -(((NI64) (rem_177171)));
	}	goto LA1;
	LA3: ;
	{
		NI64 TMP2074;
		nimln(76, "rodutils.nim");
		nimln(76, "rodutils.nim");
		TMP2074 = divInt64(v_177169, 190);
		v_177169 = (NI64)(TMP2074);
	}	LA1: ;
	nimln(77, "rodutils.nim");
	idx_177173 = ((NI) (rem_177171));
	nimln(78, "rodutils.nim");
	{
		nimln(78, "rodutils.nim");
		if (!(idx_177173 < 62)) goto LA8;
		nimln(78, "rodutils.nim");
		if ((NU)(idx_177173) > (NU)(((NimStringDesc*) &TMP2075)->Sup.len)) raiseIndexError();
		d_177167 = ((NimStringDesc*) &TMP2075)->data[idx_177173];
	}	goto LA6;
	LA8: ;
	{
		NI TMP2076;
		NI TMP2077;
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		TMP2076 = subInt(idx_177173, 62);
		TMP2077 = addInt((NI32)(TMP2076), 128);
		d_177167 = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP2077), 0, 255))));
	}	LA6: ;
	nimln(80, "rodutils.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((v_177169 == 0))) goto LA13;
		nimln(80, "rodutils.nim");
		encodevbiggestintaux_177161(v_177169, result);	}	LA13: ;
	nimln(81, "rodutils.nim");
	(*result) = addChar((*result), d_177167);
	popFrame();
}
N_NIMCALL(void, encodevbiggestint_177186)(NI64 x, NimStringDesc** result) {
	nimfr("encodeVBiggestInt", "rodutils.nim")
	nimln(89, "rodutils.nim");
	nimln(89, "rodutils.nim");
	encodevbiggestintaux_177161((NI64)((NU64)(x) + (NU64)(5)), result);	popFrame();
}
static N_INLINE(NI, modInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	result = (NI32)(a % b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();	}	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(void, encodevintaux_177193)(NI x, NimStringDesc** result) {
	NIM_CHAR d_177199;
	NI v_177201;
	NI rem_177203;
	NI TMP2078;
	NI idx_177205;
	nimfr("encodeVIntAux", "rodutils.nim")
	d_177199 = 0;
	nimln(69, "rodutils.nim");
	v_177201 = x;
	nimln(70, "rodutils.nim");
	nimln(70, "rodutils.nim");
	TMP2078 = modInt(v_177201, 190);
	rem_177203 = (NI32)(TMP2078);
	nimln(71, "rodutils.nim");
	{
		NI TMP2079;
		nimln(71, "rodutils.nim");
		if (!(((NI) (rem_177203)) < 0)) goto LA3;
		nimln(72, "rodutils.nim");
		(*result) = addChar((*result), 45);
		nimln(73, "rodutils.nim");
		nimln(73, "rodutils.nim");
		nimln(73, "rodutils.nim");
		TMP2079 = divInt(v_177201, 190);
		if ((NI32)(TMP2079) == (-2147483647 -1)) raiseOverflow();
		v_177201 = ((NI32)-((NI32)(TMP2079)));
		nimln(74, "rodutils.nim");
		nimln(74, "rodutils.nim");
		if (((NI) (rem_177203)) == (-2147483647 -1)) raiseOverflow();
		rem_177203 = ((NI32)-(((NI) (rem_177203))));
	}	goto LA1;
	LA3: ;
	{
		NI TMP2080;
		nimln(76, "rodutils.nim");
		nimln(76, "rodutils.nim");
		TMP2080 = divInt(v_177201, 190);
		v_177201 = (NI32)(TMP2080);
	}	LA1: ;
	nimln(77, "rodutils.nim");
	idx_177205 = ((NI) (rem_177203));
	nimln(78, "rodutils.nim");
	{
		nimln(78, "rodutils.nim");
		if (!(idx_177205 < 62)) goto LA8;
		nimln(78, "rodutils.nim");
		if ((NU)(idx_177205) > (NU)(((NimStringDesc*) &TMP2075)->Sup.len)) raiseIndexError();
		d_177199 = ((NimStringDesc*) &TMP2075)->data[idx_177205];
	}	goto LA6;
	LA8: ;
	{
		NI TMP2081;
		NI TMP2082;
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		nimln(79, "rodutils.nim");
		TMP2081 = subInt(idx_177205, 62);
		TMP2082 = addInt((NI32)(TMP2081), 128);
		d_177199 = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP2082), 0, 255))));
	}	LA6: ;
	nimln(80, "rodutils.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((v_177201 == 0))) goto LA13;
		nimln(80, "rodutils.nim");
		encodevintaux_177193(v_177201, result);	}	LA13: ;
	nimln(81, "rodutils.nim");
	(*result) = addChar((*result), d_177199);
	popFrame();
}
N_NIMCALL(void, encodevint_177218)(NI x, NimStringDesc** result) {
	nimfr("encodeVInt", "rodutils.nim")
	nimln(98, "rodutils.nim");
	nimln(98, "rodutils.nim");
	encodevintaux_177193((NI)((NU32)(x) + (NU32)(5)), result);	popFrame();
}
N_NIMCALL(NI, decodevint_177239)(NCSTRING s, NI* pos) {
	NI result;
	NI i_177246;
	NI sign_177248;
	NI TMP2099;
	nimfr("decodeVInt", "rodutils.nim")
	result = 0;
	nimln(101, "rodutils.nim");
	i_177246 = (*pos);
	nimln(102, "rodutils.nim");
	sign_177248 = -1;
	nimln(103, "rodutils.nim");
	{
		nimln(103, "rodutils.nim");
		nimln(103, "rodutils.nim");
		if (!!((((NU8)(s[i_177246])) >= ((NU8)(97)) && ((NU8)(s[i_177246])) <= ((NU8)(122)) || ((NU8)(s[i_177246])) >= ((NU8)(65)) && ((NU8)(s[i_177246])) <= ((NU8)(90)) || ((NU8)(s[i_177246])) >= ((NU8)(48)) && ((NU8)(s[i_177246])) <= ((NU8)(57)) || ((NU8)(s[i_177246])) == ((NU8)(45)) || ((NU8)(s[i_177246])) >= ((NU8)(128)) && ((NU8)(s[i_177246])) <= ((NU8)(255))))) goto LA3;
		nimln(103, "rodutils.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP2083));	}	LA3: ;
	nimln(104, "rodutils.nim");
	{
		nimln(104, "rodutils.nim");
		if (!((NU8)(s[i_177246]) == (NU8)(45))) goto LA7;
		nimln(105, "rodutils.nim");
		i_177246 = addInt(i_177246, 1);
		nimln(106, "rodutils.nim");
		sign_177248 = 1;
	}	LA7: ;
	nimln(107, "rodutils.nim");
	result = 0;
	nimln(108, "rodutils.nim");
	while (1) {
		nimln(109, "rodutils.nim");
		switch (((NU8)(s[i_177246]))) {
		case 48 ... 57:
		{
			NI TMP2084;
			NI TMP2085;
			NI TMP2086;
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			TMP2084 = mulInt(result, 190);
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			TMP2085 = subInt(((NI) (((NU8)(s[i_177246])))), 48);
			TMP2086 = subInt((NI32)(TMP2084), ((NI) ((NI32)(TMP2085))));
			result = (NI32)(TMP2086);
		}		break;
		case 97 ... 122:
		{
			NI TMP2087;
			NI TMP2088;
			NI TMP2089;
			NI TMP2090;
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			TMP2087 = mulInt(result, 190);
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			TMP2088 = subInt(((NI) (((NU8)(s[i_177246])))), 97);
			TMP2089 = addInt(((NI) ((NI32)(TMP2088))), 10);
			TMP2090 = subInt((NI32)(TMP2087), ((NI) ((NI32)(TMP2089))));
			result = (NI32)(TMP2090);
		}		break;
		case 65 ... 90:
		{
			NI TMP2091;
			NI TMP2092;
			NI TMP2093;
			NI TMP2094;
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			TMP2091 = mulInt(result, 190);
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			TMP2092 = subInt(((NI) (((NU8)(s[i_177246])))), 65);
			TMP2093 = addInt(((NI) ((NI32)(TMP2092))), 36);
			TMP2094 = subInt((NI32)(TMP2091), ((NI) ((NI32)(TMP2093))));
			result = (NI32)(TMP2094);
		}		break;
		case 128 ... 255:
		{
			NI TMP2095;
			NI TMP2096;
			NI TMP2097;
			NI TMP2098;
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			TMP2095 = mulInt(result, 190);
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			TMP2096 = subInt(((NI) (((NU8)(s[i_177246])))), 128);
			TMP2097 = addInt(((NI) ((NI32)(TMP2096))), 62);
			TMP2098 = subInt((NI32)(TMP2095), ((NI) ((NI32)(TMP2097))));
			result = (NI32)(TMP2098);
		}		break;
		default:
		{
			nimln(114, "rodutils.nim");
			goto LA9;
		}		break;
		}
		nimln(115, "rodutils.nim");
		i_177246 = addInt(i_177246, 1);
	} LA9: ;
	nimln(116, "rodutils.nim");
	nimln(116, "rodutils.nim");
	nimln(116, "rodutils.nim");
	TMP2099 = mulInt(result, sign_177248);
	result = (NI)((NU32)((NI32)(TMP2099)) - (NU32)(5));
	nimln(117, "rodutils.nim");
	(*pos) = i_177246;
	popFrame();
	return result;
}
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(NI64, decodevbiggestint_177495)(NCSTRING s, NI* pos) {
	NI64 result;
	NI i_177502;
	NI sign_177504;
	NI64 TMP2115;
	nimfr("decodeVBiggestInt", "rodutils.nim")
	result = 0;
	nimln(101, "rodutils.nim");
	i_177502 = (*pos);
	nimln(102, "rodutils.nim");
	sign_177504 = -1;
	nimln(103, "rodutils.nim");
	{
		nimln(103, "rodutils.nim");
		nimln(103, "rodutils.nim");
		if (!!((((NU8)(s[i_177502])) >= ((NU8)(97)) && ((NU8)(s[i_177502])) <= ((NU8)(122)) || ((NU8)(s[i_177502])) >= ((NU8)(65)) && ((NU8)(s[i_177502])) <= ((NU8)(90)) || ((NU8)(s[i_177502])) >= ((NU8)(48)) && ((NU8)(s[i_177502])) <= ((NU8)(57)) || ((NU8)(s[i_177502])) == ((NU8)(45)) || ((NU8)(s[i_177502])) >= ((NU8)(128)) && ((NU8)(s[i_177502])) <= ((NU8)(255))))) goto LA3;
		nimln(103, "rodutils.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP2083));	}	LA3: ;
	nimln(104, "rodutils.nim");
	{
		nimln(104, "rodutils.nim");
		if (!((NU8)(s[i_177502]) == (NU8)(45))) goto LA7;
		nimln(105, "rodutils.nim");
		i_177502 = addInt(i_177502, 1);
		nimln(106, "rodutils.nim");
		sign_177504 = 1;
	}	LA7: ;
	nimln(107, "rodutils.nim");
	result = 0;
	nimln(108, "rodutils.nim");
	while (1) {
		nimln(109, "rodutils.nim");
		switch (((NU8)(s[i_177502]))) {
		case 48 ... 57:
		{
			NI64 TMP2100;
			NI TMP2101;
			NI64 TMP2102;
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			TMP2100 = mulInt64(result, 190);
			nimln(110, "rodutils.nim");
			nimln(110, "rodutils.nim");
			TMP2101 = subInt(((NI) (((NU8)(s[i_177502])))), 48);
			TMP2102 = subInt64((NI64)(TMP2100), ((NI64) ((NI32)(TMP2101))));
			result = (NI64)(TMP2102);
		}		break;
		case 97 ... 122:
		{
			NI64 TMP2103;
			NI TMP2104;
			NI TMP2105;
			NI64 TMP2106;
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			TMP2103 = mulInt64(result, 190);
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			nimln(111, "rodutils.nim");
			TMP2104 = subInt(((NI) (((NU8)(s[i_177502])))), 97);
			TMP2105 = addInt(((NI) ((NI32)(TMP2104))), 10);
			TMP2106 = subInt64((NI64)(TMP2103), ((NI64) ((NI32)(TMP2105))));
			result = (NI64)(TMP2106);
		}		break;
		case 65 ... 90:
		{
			NI64 TMP2107;
			NI TMP2108;
			NI TMP2109;
			NI64 TMP2110;
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			TMP2107 = mulInt64(result, 190);
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			nimln(112, "rodutils.nim");
			TMP2108 = subInt(((NI) (((NU8)(s[i_177502])))), 65);
			TMP2109 = addInt(((NI) ((NI32)(TMP2108))), 36);
			TMP2110 = subInt64((NI64)(TMP2107), ((NI64) ((NI32)(TMP2109))));
			result = (NI64)(TMP2110);
		}		break;
		case 128 ... 255:
		{
			NI64 TMP2111;
			NI TMP2112;
			NI TMP2113;
			NI64 TMP2114;
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			TMP2111 = mulInt64(result, 190);
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			nimln(113, "rodutils.nim");
			TMP2112 = subInt(((NI) (((NU8)(s[i_177502])))), 128);
			TMP2113 = addInt(((NI) ((NI32)(TMP2112))), 62);
			TMP2114 = subInt64((NI64)(TMP2111), ((NI64) ((NI32)(TMP2113))));
			result = (NI64)(TMP2114);
		}		break;
		default:
		{
			nimln(114, "rodutils.nim");
			goto LA9;
		}		break;
		}
		nimln(115, "rodutils.nim");
		i_177502 = addInt(i_177502, 1);
	} LA9: ;
	nimln(116, "rodutils.nim");
	nimln(116, "rodutils.nim");
	nimln(116, "rodutils.nim");
	TMP2115 = mulInt64(result, ((NI64) (sign_177504)));
	result = (NI64)((NU64)((NI64)(TMP2115)) - (NU64)(5));
	nimln(117, "rodutils.nim");
	(*pos) = i_177502;
	popFrame();
	return result;
}N_NOINLINE(void, compilerrodutilsInit)(void) {
	nimfr("rodutils", "rodutils.nim")
	popFrame();
}

N_NOINLINE(void, compilerrodutilsDatInit)(void) {
}

