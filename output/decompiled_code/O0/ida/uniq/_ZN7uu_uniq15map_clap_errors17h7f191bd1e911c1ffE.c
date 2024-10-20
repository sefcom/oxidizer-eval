__int64 __fastcall uu_uniq::map_clap_errors(__int64 a1)
{
  __int64 v1; // r14
  char *v2; // rbx
  __int64 v3; // r15
  __int64 v4; // r15
  __int64 v5; // r14
  char *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 v9; // r14
  char *v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rbx
  char *v14; // r13
  int v15; // eax
  __int64 v16; // rbp
  char v17; // r13
  char *v18; // rbp
  char v19; // bl
  char v20; // r12
  __int64 v21; // r14
  bool v22; // zf
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  int v30; // ecx
  __int64 v32; // [rsp+10h] [rbp-D8h] BYREF
  int v33; // [rsp+1Ch] [rbp-CCh]
  __int64 v34; // [rsp+20h] [rbp-C8h]
  char *v35; // [rsp+28h] [rbp-C0h]
  __int64 v36; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-B0h]
  char *v38; // [rsp+40h] [rbp-A8h]
  __int64 v39; // [rsp+48h] [rbp-A0h]
  __int64 v40; // [rsp+50h] [rbp-98h]
  char *v41; // [rsp+58h] [rbp-90h]
  char *v42; // [rsp+60h] [rbp-88h]
  __int64 v43; // [rsp+68h] [rbp-80h]
  __int64 v44; // [rsp+70h] [rbp-78h] BYREF
  char *v45; // [rsp+78h] [rbp-70h]
  __int64 v46; // [rsp+80h] [rbp-68h]
  __int64 v47; // [rsp+88h] [rbp-60h] BYREF
  char *v48; // [rsp+90h] [rbp-58h]
  __int64 v49; // [rsp+98h] [rbp-50h]
  __int64 v50; // [rsp+A0h] [rbp-48h] BYREF
  char *v51; // [rsp+A8h] [rbp-40h]
  __int64 v52; // [rsp+B0h] [rbp-38h]

  v32 = a1;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v36, 47LL, 0LL);
  v1 = v37;
  if ( v36 )
    alloc::raw_vec::handle_error(v37, v38);
  v2 = v38;
  v3 = 47LL;
  core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_209E8, v38, 1LL, 1LL, 47LL);
  qmemcpy(v2, "--group is mutually exclusive with -c/-d/-D/-u\n", 47);
  v44 = v1;
  v45 = v2;
  v46 = 47LL;
  if ( (unsigned __int64)(v1 - 47) <= 0x26 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v44, 47LL, 39LL);
    v2 = v45;
    v3 = v46;
  }
  core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_209C1, &v2[v3], 1LL, 1LL);
  qmemcpy(&v2[v3], "Try 'uniq --help' for more information.", 39);
  v4 = v46 + 39;
  v46 += 39LL;
  v40 = v44;
  v42 = v45;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v36, 117LL, 0LL);
  v5 = v37;
  if ( v36 )
    alloc::raw_vec::handle_error(v37, v38);
  v6 = v38;
  v7 = 117LL;
  core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_20A17, v38, 1LL, 1LL, 117LL);
  qmemcpy(
    v6,
    "invalid argument 'badoption' for '--group'\n"
    "Valid arguments are:\n"
    "  - 'prepend'\n"
    "  - 'append'\n"
    "  - 'separate'\n"
    "  - 'both'\n",
    117);
  v47 = v5;
  v48 = v6;
  v49 = 117LL;
  if ( (unsigned __int64)(v5 - 117) <= 0x26 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v47, 117LL, 39LL);
    v6 = v48;
    v7 = v49;
  }
  core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_209C1, &v6[v7], 1LL, 1LL);
  qmemcpy(&v6[v7], "Try 'uniq --help' for more information.", 39);
  v8 = v49 + 39;
  v49 += 39LL;
  v43 = v47;
  v41 = v48;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v36, 111LL, 0LL);
  v9 = v37;
  if ( v36 )
    alloc::raw_vec::handle_error(v37, v38);
  v10 = v38;
  v11 = 111LL;
  core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_20A8C, v38, 1LL, 1LL, 111LL);
  qmemcpy(
    v10,
    "invalid argument 'badoption' for '--all-repeated'\n"
    "Valid arguments are:\n"
    "  - 'none'\n"
    "  - 'prepend'\n"
    "  - 'separate'\n",
    111);
  v50 = v9;
  v51 = v10;
  v52 = 111LL;
  if ( (unsigned __int64)(v9 - 111) <= 0x26 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v50, 111LL, 39LL);
    v10 = v51;
    v11 = v52;
  }
  core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_209C1, &v10[v11], 1LL, 1LL);
  qmemcpy(&v10[v11], "Try 'uniq --help' for more information.", 39);
  v12 = v52 + 39;
  v52 += 39LL;
  if ( (v32 & 7) != 0 )
    core::panicking::panic_misaligned_pointer_dereference(
      8LL,
      v32,
      &anon_2d232170fced6d4cecdeaf7640098f3f_82_llvm_9379809081182074372);
  v13 = v50;
  v14 = v51;
  v15 = *(unsigned __int8 *)(v32 + 213);
  v16 = v43;
  if ( !*(_BYTE *)(v32 + 213) )
  {
    v24 = clap_builder::error::Error<F>::get(&v32, 5LL);
    if ( v24
      && (unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v24)
      && (v25 = clap_builder::error::Error<F>::get(&v32, 1LL)) != 0
      && (unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v25) )
    {
      v35 = v14;
      v34 = v13;
      v19 = 1;
      v17 = 0;
      v39 = v16;
      v18 = v41;
      v4 = v8;
      v33 = 0;
    }
    else
    {
      v26 = clap_builder::error::Error<F>::get(&v32, 5LL);
      if ( !v26 )
        goto LABEL_33;
      if ( !(unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v26) )
        goto LABEL_33;
      v27 = clap_builder::error::Error<F>::get(&v32, 1LL);
      if ( !v27 || !(unsigned __int8)uu_uniq::map_clap_errors::{{closure}}(v27) )
        goto LABEL_33;
      v28 = v13;
      v18 = v14;
      v17 = 1;
      v19 = 0;
      v34 = v28;
      v39 = v28;
      v35 = v18;
      v4 = v12;
      LOBYTE(v28) = 1;
      v33 = v28;
    }
    v20 = 0;
    goto LABEL_14;
  }
  if ( v15 == 8 )
  {
    v35 = v51;
    v34 = v50;
    v17 = 0;
    LOBYTE(v15) = 1;
    v33 = v15;
    v39 = v40;
    v18 = v42;
    v19 = 0;
    v20 = 1;
LABEL_14:
    v21 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v21 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    *(_QWORD *)v21 = v39;
    *(_QWORD *)(v21 + 8) = v18;
    *(_QWORD *)(v21 + 16) = v4;
    *(_DWORD *)(v21 + 24) = 1;
    if ( ((v34 == 0) | (unsigned __int8)v17) != 1 )
      _rust_dealloc(v35, v34, 1LL);
    v22 = ((v43 == 0) | (unsigned __int8)v19) == 0;
    v23 = v40;
    if ( v22 )
      _rust_dealloc(v41, v43, 1LL);
    if ( !((v23 == 0) | (unsigned __int8)v20) )
      _rust_dealloc(v42, v23, 1LL);
    core::ptr::drop_in_place<clap_builder::error::ErrorInner>(v32);
    _rust_dealloc(v32, 216LL, 8LL);
    return v21;
  }
LABEL_33:
  v36 = v32;
  LODWORD(v37) = 1;
  v21 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 16LL, 0LL);
  v29 = v40;
  if ( !v21 )
    alloc::alloc::handle_alloc_error(8LL, 16LL);
  v30 = v37;
  *(_QWORD *)v21 = v36;
  *(_DWORD *)(v21 + 8) = v30;
  if ( v13 )
    _rust_dealloc(v14, v13, 1LL);
  if ( v16 )
    _rust_dealloc(v41, v16, 1LL);
  if ( v29 )
    _rust_dealloc(v42, v29, 1LL);
  return v21;
}
