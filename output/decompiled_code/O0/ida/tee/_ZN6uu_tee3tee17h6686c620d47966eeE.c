__int64 __fastcall uu_tee::tee(__int64 a1)
{
  __sighandler_t v1; // rax
  __sighandler_t v2; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 *v8; // rbx
  __int64 *v9; // r15
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  char v17; // al
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  void (__fastcall **v22)(__int64 *); // rax
  void (__fastcall *v23)(__int64 *); // rsi
  __int64 result; // rax
  char v25; // [rsp+7h] [rbp-121h] BYREF
  char *v26; // [rsp+8h] [rbp-120h] BYREF
  __int64 *v27; // [rsp+10h] [rbp-118h] BYREF
  __int64 *v28; // [rsp+18h] [rbp-110h]
  __int64 *v29; // [rsp+20h] [rbp-108h] BYREF
  void (__fastcall **v30)(__int64 *); // [rsp+28h] [rbp-100h]
  unsigned __int64 v31; // [rsp+30h] [rbp-F8h]
  __int64 v32; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v34; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-D0h]
  __int128 v36; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+70h] [rbp-B8h]
  __int64 v38; // [rsp+78h] [rbp-B0h]
  char v39; // [rsp+80h] [rbp-A8h]
  __int128 v40; // [rsp+90h] [rbp-98h]
  __int64 v41; // [rsp+A0h] [rbp-88h]
  __int64 v42; // [rsp+A8h] [rbp-80h]
  unsigned __int64 v43; // [rsp+B0h] [rbp-78h]
  __int128 v44; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-60h]
  __int128 v46; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-48h]
  __int64 *v48; // [rsp+E8h] [rbp-40h]
  void *v49; // [rsp+F0h] [rbp-38h]

  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    v1 = signal(2, (__sighandler_t)((char *)&dword_0 + 1));
    nix::errno::<impl nix::errno::consts::Errno>::result(&v26, v1);
    if ( (_DWORD)v26 )
    {
      if ( HIDWORD(v26) != 134 )
        return 0x2700000003LL;
    }
  }
  if ( *(_BYTE *)(a1 + 26) == 4 )
  {
    v2 = signal(13, 0LL);
    nix::errno::<impl nix::errno::consts::Errno>::result(&v26, v2);
    if ( (_DWORD)v26 )
    {
      if ( HIDWORD(v26) != 134 )
        return 0x2700000003LL;
    }
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 || (v3 & 7) != 0 || (v4 = *(_QWORD *)(a1 + 16), v4 >= 0x555555555555556LL) )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  v26 = *(char **)(a1 + 8);
  v27 = (__int64 *)(v3 + 24 * v4);
  v28 = (__int64 *)a1;
  core::iter::adapters::try_process(&v44, &v26);
  v5 = *((_QWORD *)&v44 + 1);
  if ( (_QWORD)v44 != 0x8000000000000000LL )
  {
    v6 = v45;
    v34 = v44;
    v35 = v45;
    v7 = *(_QWORD *)(a1 + 16);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v26, 17LL, 0LL);
    v8 = v27;
    if ( v26 )
      alloc::raw_vec::handle_error(v27, v28);
    v9 = v28;
    core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_1EE4D, v28, 1LL, 1LL, 17LL);
    qmemcpy(v9, "'standard output'", 17);
    *(_QWORD *)&v40 = v8;
    *((_QWORD *)&v40 + 1) = v9;
    v41 = 17LL;
    v10 = std::io::stdio::stdout();
    v11 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v11 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v11 = v10;
    v48 = v11;
    v49 = &unk_10B468;
    v46 = v40;
    v47 = v41;
    alloc::vec::Vec<T,A>::insert(&v34, 0LL, &v46);
    v37 = v35;
    v36 = v34;
    v39 = *(_BYTE *)(a1 + 26);
    v38 = 0LL;
    v12 = std::io::stdio::stdin();
    v13 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v13 = v12;
    v29 = v13;
    v30 = (void (__fastcall **)(__int64 *))&unk_10B4B8;
    v5 = 0x2700000003LL;
    v42 = std::io::copy::stack_buffer_copy(&v29, &v36);
    v43 = v14;
    if ( v42 == 1 )
    {
      switch ( v14 & 3 )
      {
        case 0uLL:
          v15 = 16LL;
          goto LABEL_24;
        case 1uLL:
          v15 = 15LL;
LABEL_24:
          v17 = *(_BYTE *)(v14 + v15);
          break;
        case 2uLL:
          v16 = v14;
          v17 = std::sys::pal::unix::decode_error_kind(HIDWORD(v14));
          v14 = v16;
          break;
        case 3uLL:
          v18 = v14;
          v19 = HIDWORD(v14);
          v17 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v14));
          v14 = v18;
          if ( v17 == 41 )
            core::hint::unreachable_unchecked::precondition_check(v19, &v36, v18);
          return result;
      }
      v20 = v14;
      if ( v17 == 39 )
        v20 = 0LL;
      v31 = v20;
      if ( v17 == 39 )
      {
        std::io::error::repr_bitpacked::decode_repr(&v26, v14);
        if ( (unsigned __int8)v26 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v27);
        v14 = v31;
      }
      if ( v6 != v7 || v14 )
      {
        if ( v14 )
        {
          std::io::error::repr_bitpacked::decode_repr(&v26, v14);
          if ( (unsigned __int8)v26 >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v27);
        }
        goto LABEL_42;
      }
    }
    else
    {
      v31 = 0LL;
      if ( v6 != v7 )
      {
LABEL_42:
        v22 = v30;
        if ( *v30 )
        {
          (*v30)(v29);
          v22 = v30;
        }
        v23 = v22[1];
        if ( v23 )
          _rust_dealloc(v29, v23, v22[2]);
        core::ptr::drop_in_place<alloc::vec::Vec<uu_tee::NamedWriter>>(&v36);
        return v5;
      }
    }
    v32 = 0LL;
    v25 = v39;
    v33 = 0LL;
    v26 = &v25;
    v27 = &v33;
    v28 = &v32;
    alloc::vec::Vec<T,A>::retain_mut(&v36, &v26);
    v21 = v33 + v38;
    if ( __CFADD__(v33, v38) )
      core::panicking::panic_const::panic_const_add_overflow(&off_10B5F8);
    v38 += v33;
    if ( v32 )
    {
      std::io::error::repr_bitpacked::decode_repr(&v26, v32);
      if ( (unsigned __int8)v26 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v27);
    }
    else if ( !v21 )
    {
      v5 = 0LL;
    }
    goto LABEL_42;
  }
  return v5;
}
