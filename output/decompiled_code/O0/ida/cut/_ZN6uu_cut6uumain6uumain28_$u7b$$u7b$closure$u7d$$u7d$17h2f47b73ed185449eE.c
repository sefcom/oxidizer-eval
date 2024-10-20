_QWORD *__fastcall uu_cut::uumain::uumain::{{closure}}(_QWORD *a1, _QWORD *a2, _BYTE *a3, _QWORD *a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  _QWORD *result; // rax
  _QWORD src[5]; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-18h]
  __int64 v12; // [rsp+58h] [rbp-10h]
  __int64 v13; // [rsp+60h] [rbp-8h]

  v4 = a2;
  v5 = *a2;
  v6 = v4[1];
  LOBYTE(v4) = *a3;
  LOBYTE(v13) = 2;
  src[0] = v5;
  src[1] = v6;
  v10 = (char)v4;
  src[2] = v11;
  src[3] = v12;
  src[4] = v13;
  a1[7] = *a4;
  a1[8] = a4[1];
  a1[9] = a4[2];
  memcpy(a1 + 1, src, 0x30uLL);
  result = a1;
  *a1 = 0LL;
  return result;
}
