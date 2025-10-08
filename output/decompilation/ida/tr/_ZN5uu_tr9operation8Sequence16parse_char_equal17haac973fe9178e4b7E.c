__int64 __fastcall uu_tr::operation::Sequence::parse_char_equal(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rdi
  __int128 v5; // xmm0
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+8h] [rbp-80h] BYREF
  char v8; // [rsp+18h] [rbp-70h]
  const char *v9; // [rsp+20h] [rbp-68h]
  __int64 v10; // [rsp+28h] [rbp-60h]
  const char *v11; // [rsp+30h] [rbp-58h]
  __int64 v12; // [rsp+38h] [rbp-50h]
  const char *v13; // [rsp+40h] [rbp-48h]
  __int64 v14; // [rsp+48h] [rbp-40h]
  int v15; // [rsp+50h] [rbp-38h] BYREF
  _OWORD v16[3]; // [rsp+58h] [rbp-30h] BYREF

  v13 = asc_1BBC1;
  v14 = 2LL;
  v7[0] = asc_1BBC3;
  v7[1] = 2LL;
  v8 = 1;
  v9 = asc_1BBC3;
  v10 = 2LL;
  v11 = asc_1BBC3;
  v12 = 2LL;
  <nom::sequence::Preceded<F,G> as nom::internal::Parser<I>>::process(&v15, v7, a2, a3);
  v4 = (_OWORD *)(a1 + 8);
  if ( v15 == 1 )
  {
    v5 = v16[0];
    *(_OWORD *)(a1 + 24) = v16[1];
    *v4 = v5;
    result = 1LL;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    uu_tr::operation::Sequence::parse_char_equal::{{closure}}(v4, v16);
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}