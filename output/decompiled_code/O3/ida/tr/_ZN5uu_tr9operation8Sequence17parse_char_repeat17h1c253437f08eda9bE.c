__int64 __fastcall uu_tr::operation::Sequence::parse_char_repeat(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rdi
  __int64 result; // rax
  __int128 v6; // xmm0
  _QWORD v7[6]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int128 v10; // [rsp+50h] [rbp-18h]

  v7[0] = asc_14A09;
  v7[1] = 1LL;
  v7[2] = asc_14A0C;
  v7[3] = 1LL;
  v7[4] = asc_14A0D;
  v7[5] = 1LL;
  nom::sequence::delimited::{{closure}}(&v8, v7, a2, a3);
  v4 = (_OWORD *)(a1 + 8);
  if ( v8 )
  {
    uu_tr::operation::Sequence::parse_char_repeat::{{closure}}(v4, &v8);
    result = 0LL;
  }
  else
  {
    v6 = v9;
    *(_OWORD *)(a1 + 24) = v10;
    *v4 = v6;
    result = 1LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}
