_OWORD *__fastcall uu_env::apply_change_directory(__int64 a1)
{
  __int64 v1; // rbx
  size_t v2; // r14
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  _OWORD *v10; // rbx
  _OWORD *result; // rax
  __int64 v12; // rbx
  void *v13; // r14
  __int128 v14; // xmm0
  __int128 v15; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v16; // [rsp+10h] [rbp-98h]
  __int64 v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v19[4]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-48h] BYREF
  char v21; // [rsp+78h] [rbp-30h]
  __int128 v22; // [rsp+80h] [rbp-28h] BYREF
  __int64 v23; // [rsp+90h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 120);
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( v1 )
    {
      v2 = *(_QWORD *)(a1 + 128);
      v3 = std::sys::pal::unix::os::chdir(*(void **)(a1 + 120), v2);
      if ( v3 )
      {
        v18 = v3;
        v20[0] = 1LL;
        v20[1] = v1;
        v20[2] = v2;
        v21 = 1;
        v19[0] = v20;
        v19[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v19[2] = &v18;
        v19[3] = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v15 = &off_1390E0;
        *((_QWORD *)&v15 + 1) = 2LL;
        *(_QWORD *)&v16 = v19;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17 = 0LL;
        alloc::fmt::format::format_inner(&v22, &v15, v4, v5, v6, v7);
        *(_QWORD *)&v16 = v23;
        v15 = v22;
        DWORD2(v16) = 125;
        v8 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v8 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v9 = v15;
        v8[1] = v16;
        v10 = v8;
        *v8 = v9;
        std::io::error::repr_bitpacked::decode_repr(&v15, v18);
        if ( (unsigned __int8)v15 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v15 + 8);
        return v10;
      }
    }
    return 0LL;
  }
  if ( !v1 )
    return 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v15, 38LL, 0LL);
  v12 = *((_QWORD *)&v15 + 1);
  if ( (_QWORD)v15 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v15 + 1), v16);
  v13 = (void *)v16;
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_2671A, v16, 1LL, 1LL, 38LL);
  qmemcpy(v13, "must specify command with --chdir (-C)", 38);
  *(_QWORD *)&v15 = v12;
  *((_QWORD *)&v15 + 1) = v13;
  *(_QWORD *)&v16 = 38LL;
  DWORD2(v16) = 125;
  result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v14 = v15;
  result[1] = v16;
  *result = v14;
  return result;
}
