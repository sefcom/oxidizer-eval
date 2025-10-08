__int64 __fastcall uu_env::parse_args_from_str(__int64 a1)
{
  __m256i v2; // [rsp+8h] [rbp-60h] BYREF
  __int64 v3; // [rsp+28h] [rbp-40h]
  __m256i v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  uu_env::split_iterator::split((__int64)&v2);
  if ( v2.m256i_i32[0] == 12 )
  {
    *(_QWORD *)(a1 + 16) = v2.m256i_i64[3];
    *(_OWORD *)a1 = *(_OWORD *)&v2.m256i_u64[1];
  }
  else
  {
    v5 = v3;
    v4 = v2;
    *(_QWORD *)(a1 + 8) = uu_env::parse_args_from_str::{{closure}}(&v4);
    *(_QWORD *)(a1 + 16) = &off_1108A8;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return a1;
}