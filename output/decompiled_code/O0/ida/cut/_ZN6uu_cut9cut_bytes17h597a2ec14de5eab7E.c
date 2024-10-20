_OWORD *__fastcall uu_cut::cut_bytes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void (__fastcall **v5)(__int64); // rdx
  const char *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  _OWORD *v9; // rax
  _OWORD *v10; // rbx
  __int128 v11; // xmm0
  void (__fastcall **v12)(__int64); // rax
  void (__fastcall **v13)(__int64); // rax
  unsigned __int8 v15; // [rsp+Fh] [rbp-119h] BYREF
  __int64 v16; // [rsp+10h] [rbp-118h] BYREF
  void (__fastcall **v17)(__int64); // [rsp+18h] [rbp-110h]
  __int64 v18; // [rsp+20h] [rbp-108h] BYREF
  __int128 v19; // [rsp+28h] [rbp-100h] BYREF
  __int64 v20; // [rsp+38h] [rbp-F0h]
  __int64 v21; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-D8h]
  __int128 *v24; // [rsp+60h] [rbp-C8h]
  __int64 (__fastcall **v25)(); // [rsp+68h] [rbp-C0h]
  __int64 v26; // [rsp+70h] [rbp-B8h]
  char v27; // [rsp+78h] [rbp-B0h]
  __int64 v28; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+88h] [rbp-A0h]
  __int128 v30; // [rsp+90h] [rbp-98h]
  __int64 v31; // [rsp+A0h] [rbp-88h]
  __int64 v32; // [rsp+A8h] [rbp-80h]
  __int128 v33; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-68h]
  _QWORD v35[2]; // [rsp+D8h] [rbp-50h] BYREF
  _QWORD v36[8]; // [rsp+E8h] [rbp-40h] BYREF

  v35[0] = a2;
  v35[1] = a3;
  v15 = *(_BYTE *)(a4 + 40);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v21, 0x2000LL, 0LL);
  if ( v21 )
    alloc::raw_vec::handle_error(v22, v23);
  if ( !v23 )
    core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
  v28 = v23;
  v29 = 0x2000LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = a1;
  v16 = uu_cut::stdout_writer();
  v17 = v5;
  v6 = asc_1FD1C;
  if ( *(_QWORD *)a4 )
    v6 = *(const char **)a4;
  v7 = 1LL;
  if ( *(_QWORD *)a4 )
    v7 = *(_QWORD *)(a4 + 8);
  v36[0] = v35;
  v36[1] = &v16;
  v36[2] = v6;
  v36[3] = v7;
  v36[4] = a4;
  v36[5] = &v15;
  LOBYTE(v21) = v15;
  v8 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v28, v15, v36, &v21);
  if ( v8 )
  {
    v18 = v8;
    *(_QWORD *)&v19 = 0LL;
    *((_QWORD *)&v19 + 1) = 1LL;
    v20 = 0LL;
    v26 = 32LL;
    v27 = 3;
    v21 = 0LL;
    v23 = 0LL;
    v24 = &v19;
    v25 = &anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
    if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v18, &v21) )
      core::result::unwrap_failed(
        anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
        55LL,
        &v33,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
    *(_QWORD *)&v34 = v20;
    v33 = v19;
    DWORD2(v34) = 1;
    v9 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    v10 = v9;
    if ( !v9 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v11 = v33;
    v9[1] = v34;
    *v9 = v11;
    std::io::error::repr_bitpacked::decode_repr(&v21, v18);
    if ( (unsigned __int8)v21 >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v22);
    v12 = v17;
    if ( *v17 )
    {
      (*v17)(v16);
      v12 = v17;
    }
    if ( v12[1] )
      _rust_dealloc(v16);
    if ( v29 )
      _rust_dealloc(v28);
  }
  else
  {
    v13 = v17;
    if ( *v17 )
    {
      (*v17)(v16);
      v13 = v17;
    }
    if ( v13[1] )
      _rust_dealloc(v16);
    if ( v29 )
      _rust_dealloc(v28);
    return 0LL;
  }
  return v10;
}
