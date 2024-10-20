_OWORD *__fastcall uu_tail::follow::watch::WatcherRx::watch_with_parent(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int128 *v3; // r15
  _OWORD *v4; // rax
  __int128 v5; // xmm0
  _OWORD *v6; // r15
  char is_absolute; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r13
  _OWORD *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // r12
  __int64 v15; // rax
  __int128 v17; // [rsp+0h] [rbp-148h] BYREF
  _QWORD v18[2]; // [rsp+10h] [rbp-138h] BYREF
  __int128 v19; // [rsp+20h] [rbp-128h] BYREF
  __int128 v20; // [rsp+30h] [rbp-118h]
  __int128 v21; // [rsp+40h] [rbp-108h]
  __int64 v22; // [rsp+50h] [rbp-F8h]
  __int128 v23; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-D8h]
  _QWORD v25[2]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v26[2]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-A0h]
  __int64 v29; // [rsp+B0h] [rbp-98h]
  _BYTE v30[24]; // [rsp+B8h] [rbp-90h] BYREF
  __int128 v31; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-68h]
  _OWORD v33[3]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+118h] [rbp-30h]

  std::path::Path::to_path_buf(&v17);
  if ( !*((_QWORD *)&v17 + 1) || v18[0] < 0LL )
    goto LABEL_41;
  if ( (unsigned __int8)std::path::Path::is_file() )
  {
    if ( !*((_QWORD *)&v17 + 1) || v18[0] < 0LL )
      goto LABEL_41;
    v1 = std::path::Path::parent();
    if ( !v1 )
    {
      if ( *((_QWORD *)&v17 + 1) && v18[0] >= 0LL )
      {
        v26[0] = *((_QWORD *)&v17 + 1);
        v26[1] = v18[0];
        v25[0] = v26;
        v25[1] = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&v19 = &off_189760;
        *((_QWORD *)&v19 + 1) = 1LL;
        *(_QWORD *)&v20 = v25;
        *((_QWORD *)&v20 + 1) = 1LL;
        *(_QWORD *)&v21 = 0LL;
        alloc::fmt::format::format_inner(&v31, &v19);
        *(_QWORD *)&v20 = v32;
        v19 = v31;
        DWORD2(v20) = 1;
        v4 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v4 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v5 = v19;
        v4[1] = v20;
        v6 = v4;
        *v4 = v5;
        goto LABEL_34;
      }
      goto LABEL_41;
    }
    if ( (unsigned __int8)std::path::Path::is_dir(v1, v2) )
    {
      v3 = (__int128 *)v30;
      std::path::Path::to_path_buf(v30);
      alloc::raw_vec::RawVec<T,A>::current_memory(&v19, &v17);
      if ( *((_QWORD *)&v19 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v18, v19, *((_QWORD *)&v19 + 1), v20);
    }
    else
    {
      std::sys::os_str::bytes::Slice::to_owned(&v19, asc_2B6FF, 1LL);
      v24 = v20;
      v23 = v19;
      alloc::raw_vec::RawVec<T,A>::current_memory(&v19, &v17);
      if ( *((_QWORD *)&v19 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v18, v19, *((_QWORD *)&v19 + 1), v20);
      v3 = &v23;
    }
    v18[0] = *((_QWORD *)v3 + 2);
    v17 = *v3;
  }
  if ( !*((_QWORD *)&v17 + 1) || v18[0] < 0LL )
    goto LABEL_41;
  is_absolute = std::path::Path::is_absolute(*((_QWORD *)&v17 + 1));
  v8 = *((_QWORD *)&v17 + 1);
  v9 = v18[0];
  if ( is_absolute )
    goto LABEL_29;
  if ( !*((_QWORD *)&v17 + 1) || v18[0] < 0LL )
LABEL_41:
    core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
  std::sys::pal::unix::fs::canonicalize(&v27, *((_QWORD *)&v17 + 1), v18[0]);
  v10 = v27;
  v11 = v28;
  if ( v27 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v19 = 0x8000000000000000LL;
    *((_QWORD *)&v20 + 1) = v28;
    v12 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v12 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v13 = v19;
    v12[1] = v20;
    v6 = v12;
    *v12 = v13;
    goto LABEL_34;
  }
  v14 = v29;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v19, &v17);
  if ( *((_QWORD *)&v19 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v18, v19, *((_QWORD *)&v19 + 1), v20);
  *(_QWORD *)&v17 = v10;
  v8 = v11;
  *((_QWORD *)&v17 + 1) = v11;
  v9 = v14;
  v18[0] = v14;
LABEL_29:
  if ( !v8 || v9 < 0 )
    goto LABEL_41;
  (*(void (__fastcall **)(_OWORD *, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(a1 + 24) + 24LL))(
    v33,
    *(_QWORD *)(a1 + 16),
    v8,
    v9,
    1LL);
  if ( *(_QWORD *)&v33[0] != 6LL )
  {
    v22 = v34;
    v21 = v33[2];
    v20 = v33[1];
    v19 = v33[0];
    v15 = uu_tail::follow::watch::WatcherRx::watch::{{closure}}(&v19);
    if ( v15 )
    {
      v6 = (_OWORD *)v15;
LABEL_34:
      alloc::raw_vec::RawVec<T,A>::current_memory(&v19, &v17);
      if ( *((_QWORD *)&v19 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v18, v19, *((_QWORD *)&v19 + 1), v20);
      return v6;
    }
  }
  alloc::raw_vec::RawVec<T,A>::current_memory(&v19, &v17);
  if ( *((_QWORD *)&v19 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v18, v19, *((_QWORD *)&v19 + 1), v20);
  return 0LL;
}
