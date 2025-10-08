__int64 __fastcall just::function::invocation_directory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v5; // xmm0
  __m256i v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::convert_native_path(
    &v6,
    a2,
    a3,
    a4,
    *(_QWORD *)(**(_QWORD **)a2 + 32LL),
    *(_QWORD *)(**(_QWORD **)a2 + 40LL));
  if ( v6.m256i_i32[0] == 1 )
  {
    v8 = v6.m256i_i64[3];
    v7 = *(_OWORD *)&v6.m256i_u64[1];
    just::function::invocation_directory::{{closure}}(a1 + 8, &v7);
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v5 = *(_OWORD *)v6.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v6.m256i_u64[2];
    *(_OWORD *)a1 = v5;
  }
  return a1;
}