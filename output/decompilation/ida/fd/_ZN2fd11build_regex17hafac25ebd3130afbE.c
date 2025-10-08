__int64 __fastcall fd::build_regex(__int64 a1, __int64 a2, char a3)
{
  __int128 v4; // xmm0
  __m256i v6; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v7; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-C8h]
  _BYTE v9[192]; // [rsp+38h] [rbp-C0h] BYREF

  regex::builders::string::RegexBuilder::new(v9, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  v9[157] = a3 ^ 1;
  v9[159] = 1;
  regex::builders::bytes::RegexBuilder::build(&v6, v9);
  if ( v6.m256i_i64[0] )
  {
    v4 = *(_OWORD *)v6.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v6.m256i_u64[2];
    *(_OWORD *)a1 = v4;
  }
  else
  {
    v8 = v6.m256i_i64[3];
    v7 = *(_OWORD *)&v6.m256i_u64[1];
    *(_QWORD *)(a1 + 8) = fd::build_regex::{{closure}}(&v7);
    *(_QWORD *)a1 = 0LL;
  }
  core::ptr::drop_in_place<regex::builders::bytes::RegexBuilder>(v9);
  return core::ptr::drop_in_place<alloc::string::String>(a2);
}