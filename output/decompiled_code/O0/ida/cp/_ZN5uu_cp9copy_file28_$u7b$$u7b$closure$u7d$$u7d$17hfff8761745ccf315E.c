__int64 __fastcall uu_cp::copy_file::{{closure}}(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // r12
  void *v6; // r13
  __int128 v7; // xmm0
  char v9; // [rsp+Fh] [rbp-D9h] BYREF
  __int64 v10; // [rsp+10h] [rbp-D8h] BYREF
  void *s1[2]; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-C0h]
  char **v13; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp-A8h]
  __int64 v16; // [rsp+48h] [rbp-A0h]
  void **v17; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall **v18)(); // [rsp+58h] [rbp-90h]
  __int64 v19; // [rsp+60h] [rbp-88h]
  char v20; // [rsp+68h] [rbp-80h]
  _QWORD v21[2]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v22[3]; // [rsp+80h] [rbp-68h] BYREF
  char v23; // [rsp+98h] [rbp-50h]
  __int128 v24; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-38h]

  v10 = a4;
  s1[0] = 0LL;
  s1[1] = &dword_0 + 1;
  v12 = 0LL;
  v19 = 32LL;
  v20 = 3;
  v13 = 0LL;
  v15 = 0LL;
  v17 = s1;
  v18 = &anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
  if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v10, &v13) )
    core::result::unwrap_failed(
      anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
      55LL,
      &v9,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
  v5 = s1[1];
  if ( !s1[1] || v12 < 0 )
    core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_20_llvm_1613436602710632571, 162LL);
  v6 = s1[0];
  if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(
                          anon_edd0bd9b3106a806526586a6c9f9e2d7_296_llvm_17885426612345091974,
                          0x19uLL,
                          s1[1]) )
  {
    if ( v6 )
      _rust_dealloc(v5, v6, 1LL);
    v22[0] = 1LL;
    v22[1] = a2;
    v22[2] = a3;
    v23 = 1;
    v21[0] = v22;
    v21[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v13 = &anon_edd0bd9b3106a806526586a6c9f9e2d7_298_llvm_17885426612345091974;
    v14 = 2LL;
    v15 = v21;
    v16 = 1LL;
    v17 = 0LL;
    alloc::fmt::format::format_inner(&v24, &v13);
    *(_QWORD *)(a1 + 16) = v25;
    v7 = v24;
  }
  else
  {
    if ( v6 )
      _rust_dealloc(v5, v6, 1LL);
    s1[0] = 0LL;
    s1[1] = &dword_0 + 1;
    v12 = 0LL;
    v19 = 32LL;
    v20 = 3;
    v13 = 0LL;
    v15 = 0LL;
    v17 = s1;
    v18 = &anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
    if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v10, &v13) )
      core::result::unwrap_failed(
        anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
        55LL,
        &v9,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
    *(_QWORD *)(a1 + 16) = v12;
    v7 = *(_OWORD *)s1;
  }
  *(_OWORD *)a1 = v7;
  std::io::error::repr_bitpacked::decode_repr(&v13, v10);
  if ( (unsigned __int8)v13 >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v14);
  return a1;
}
