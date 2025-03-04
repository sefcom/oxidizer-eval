__int64 __fastcall uu_env::parse_args_from_str(__int64 a1, __int64 a2, __int64 a3)
{
  __m256i v4; // [rsp+8h] [rbp-60h] BYREF
  __int64 v5; // [rsp+28h] [rbp-40h]
  __m256i v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  uu_env::split_iterator::split((__int64)&v4, a2, a3);
  if ( v4.m256i_i32[0] == 8 )
  {
    *(_QWORD *)(a1 + 16) = v4.m256i_i64[3];
    *(_OWORD *)a1 = *(_OWORD *)&v4.m256i_u64[1];
  }
  else
  {
    v7 = v5;
    v6 = v4;
    *(_QWORD *)(a1 + 8) = uu_env::parse_args_from_str::{{closure}}(&v6);
    *(_QWORD *)(a1 + 16) = &off_148908;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return a1;
}
