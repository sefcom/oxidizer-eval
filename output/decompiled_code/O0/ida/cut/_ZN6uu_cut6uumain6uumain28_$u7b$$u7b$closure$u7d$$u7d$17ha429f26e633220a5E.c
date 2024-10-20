_QWORD *__fastcall uu_cut::uumain::uumain::{{closure}}(_QWORD *a1, __int64 **a2, _QWORD *a3)
{
  __int64 **v3; // r8
  __int64 *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 *v7; // r10
  __int64 *v8; // r9
  _QWORD *result; // rax
  _QWORD src[5]; // [rsp+18h] [rbp-60h] BYREF
  char v11; // [rsp+40h] [rbp-38h]
  __int64 *v12; // [rsp+48h] [rbp-30h]
  __int64 *v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-20h]
  __int64 *v15; // [rsp+60h] [rbp-18h]
  __int64 *v16; // [rsp+68h] [rbp-10h]
  __int64 v17; // [rsp+70h] [rbp-8h]

  v3 = a2;
  v4 = *a2;
  v5 = **a2;
  v6 = v4[1];
  LOBYTE(v4) = *(_BYTE *)v3[1];
  v7 = v3[3];
  v8 = v3[4];
  LOBYTE(v3) = *(_BYTE *)v3[2];
  v15 = v7;
  v16 = v8;
  LOBYTE(v17) = (unsigned __int8)v3 & 1;
  v12 = v7;
  v13 = v8;
  v14 = v17;
  src[0] = v5;
  src[1] = v6;
  v11 = (char)v4;
  src[2] = v7;
  src[3] = v8;
  src[4] = v17;
  a1[7] = *a3;
  a1[8] = a3[1];
  a1[9] = a3[2];
  memcpy(a1 + 1, src, 0x30uLL);
  result = a1;
  *a1 = 2LL;
  return result;
}
