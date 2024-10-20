__int64 __fastcall uu_tail::follow::watch::WatcherRx::watch_with_parent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // rbp
  __int128 v13; // xmm0
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 result; // rax
  __int64 v18; // r12
  __int128 v19; // kr00_16
  __int128 v20; // xmm0
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int128 v23; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-B8h]
  __int128 v25; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+30h] [rbp-98h]
  __int64 v27; // [rsp+40h] [rbp-88h]
  __int128 v28; // [rsp+50h] [rbp-78h] BYREF
  __int64 v29; // [rsp+60h] [rbp-68h]
  _QWORD v30[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v31[9]; // [rsp+80h] [rbp-48h] BYREF

  std::path::Path::to_path_buf(&v23, a3, a4);
  v4 = *((_QWORD *)&v23 + 1);
  v5 = v24;
  if ( (unsigned __int8)std::path::Path::is_file(*((_QWORD *)&v23 + 1), v24) )
  {
    v6 = std::path::Path::parent(v4, v5);
    v11 = v6;
    if ( !v6 )
    {
      *(_QWORD *)&v28 = v4;
      *((_QWORD *)&v28 + 1) = v5;
      v30[0] = &v28;
      v30[1] = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)&v25 = &off_15CA48;
      *((_QWORD *)&v25 + 1) = 1LL;
      v27 = 0LL;
      *(_QWORD *)&v26 = v30;
      *((_QWORD *)&v26 + 1) = 1LL;
      alloc::fmt::format::format_inner(v31, &v25, v7, v8, v9, v10);
      v14 = v31[0];
      v15 = v31[1];
      v16 = v31[2];
      result = _rust_alloc(32LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *(_QWORD *)result = v14;
      *(_QWORD *)(result + 8) = v15;
      *(_QWORD *)(result + 16) = v16;
      *(_DWORD *)(result + 24) = 1;
      goto LABEL_21;
    }
    v12 = v7;
    if ( (unsigned __int8)std::path::Path::is_dir(v6, v7) )
    {
      std::path::Path::to_path_buf(&v25, v11, v12);
      if ( (_QWORD)v23 )
        _rust_dealloc(v4, v23, 1LL);
      v24 = v26;
      v13 = v25;
    }
    else
    {
      std::sys::os_str::bytes::Slice::to_owned(&v25, asc_24256, 1LL);
      v29 = v26;
      v28 = v25;
      if ( (_QWORD)v23 )
        _rust_dealloc(v4, v23, 1LL);
      v24 = v29;
      v13 = v28;
    }
    v23 = v13;
  }
  v4 = *((_QWORD *)&v23 + 1);
  v18 = v24;
  if ( !(unsigned __int8)std::path::Path::is_absolute(*((_QWORD *)&v23 + 1), v24) )
  {
    std::sys::pal::unix::fs::canonicalize(&v25, v4, v18);
    v19 = v25;
    if ( (_QWORD)v25 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v25 = 0x8000000000000000LL;
      *((_QWORD *)&v26 + 1) = *((_QWORD *)&v19 + 1);
      result = _rust_alloc(32LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v20 = v25;
      *(_OWORD *)(result + 16) = v26;
      *(_OWORD *)result = v20;
      goto LABEL_21;
    }
    v18 = v26;
    if ( (_QWORD)v23 )
      _rust_dealloc(v4, v23, 1LL);
    v23 = v19;
    v24 = v18;
    v4 = *((_QWORD *)&v19 + 1);
  }
  result = uu_tail::follow::watch::WatcherRx::watch(a1, a2, v4, v18);
  if ( result )
  {
LABEL_21:
    if ( (_QWORD)v23 )
    {
      v21 = v4;
      v22 = result;
      _rust_dealloc(v21, v23, 1LL);
      return v22;
    }
    return result;
  }
  if ( (_QWORD)v23 )
    _rust_dealloc(v4, v23, 1LL);
  return 0LL;
}
