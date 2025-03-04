__int64 __fastcall compat_core::program::main(_QWORD *src)
{
  _QWORD *v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int128 v29; // [rsp+10h] [rbp-2A8h] BYREF
  _QWORD v30[2]; // [rsp+20h] [rbp-298h] BYREF
  _QWORD dest[25]; // [rsp+30h] [rbp-288h] BYREF
  _QWORD v32[56]; // [rsp+F8h] [rbp-1C0h] BYREF

  v2 = src + 26;
  if ( *((_DWORD *)src + 50) == 1 )
  {
    compat_log::use_console();
    compat_kernel::app::Context<A>::log_error(src, src + 26);
    v3 = src[2];
    if ( v3 )
      _rust_dealloc(src[1], v3, 1LL);
    v4 = src[5];
    if ( v4 )
      _rust_dealloc(src[4], v4, 1LL);
    core::ptr::drop_in_place(src + 7);
    v5 = src[21];
    if ( v5 )
      _rust_dealloc(src[20], v5, 1LL);
    if ( src[25] )
      goto LABEL_9;
LABEL_50:
    core::ptr::drop_in_place(v2);
    return 0;
  }
  if ( *((_BYTE *)src + 280) )
  {
    compat_log::use_console();
    goto LABEL_35;
  }
  compat_fork::ignore_sighup();
  if ( !(unsigned __int8)compat_kernel::core::fork::fork_entry() )
  {
    compat_kernel::core::fork::fork(dest);
    if ( LODWORD(dest[0]) != 1 )
      std::process::exit(0LL);
    v29 = *(_OWORD *)&dest[1];
    if ( log::MAX_LOG_LEVEL_FILTER )
    {
      v30[0] = &v29;
      v30[1] = <std::io::error::Error as core::fmt::Display>::fmt;
      v32[0] = &off_3E5D78;
      v32[1] = 1LL;
      v32[2] = 0LL;
      v32[4] = v30;
      v32[5] = 1LL;
      log::__private_api_log(v32, 1LL, &off_3E5D88, 0LL);
      if ( (unsigned __int8)v29 < 2u )
        goto LABEL_35;
      v15 = (_QWORD *)*((_QWORD *)&v29 + 1);
      (**(void (__fastcall ***)(_QWORD))(*((_QWORD *)&v29 + 1) + 8LL))(**((_QWORD **)&v29 + 1));
      v16 = v15[1];
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
        _rust_dealloc(*v15, v17, *(_QWORD *)(v16 + 16));
      v18 = *((_QWORD *)&v29 + 1);
    }
    else
    {
      if ( (unsigned __int8)v29 < 2u )
        goto LABEL_35;
      (**(void (__fastcall ***)(_QWORD))(*((_QWORD *)&v29 + 1) + 8LL))(**((_QWORD **)&v29 + 1));
      v19 = *(_QWORD *)(*((_QWORD *)&v29 + 1) + 8LL);
      v20 = *(_QWORD *)(v19 + 8);
      if ( v20 )
        _rust_dealloc(**((_QWORD **)&v29 + 1), v20, *(_QWORD *)(v19 + 16));
      v18 = *((_QWORD *)&v29 + 1);
    }
    _rust_dealloc(v18, 24LL, 8LL);
  }
LABEL_35:
  memcpy(dest, src, sizeof(dest));
  compat_kernel::core::server::Server::build(v32, 4LL, 10LL, 16LL, dest);
  if ( log::MAX_LOG_LEVEL_FILTER >= 3uLL )
  {
    dest[0] = &off_3E5CE8;
    *(_OWORD *)&dest[1] = 1uLL;
    dest[4] = aCompatCoreProg;
    dest[5] = 0LL;
    log::__private_api_log(dest, 3LL, &off_3E5CF8, 0LL);
  }
  if ( (unsigned int)compat_core::unix::main(v2, (__int64)v32) )
  {
    core::ptr::drop_in_place(v32);
    if ( !src[25] )
    {
      core::ptr::drop_in_place(v2);
      return 1;
    }
    v21 = src[27];
    if ( v21 )
      _rust_dealloc(*v2, v21, 1LL);
    v22 = src[29];
    v8 = 1;
    if ( v22 )
    {
      v23 = src[31];
      if ( v23 )
      {
        v24 = 24 * v23;
        v25 = 0LL;
        do
        {
          v26 = *(_QWORD *)(v22 + v25 + 8);
          if ( v26 )
            _rust_dealloc(*(_QWORD *)(v22 + v25), v26, 1LL);
          v25 += 24LL;
        }
        while ( v24 != v25 );
      }
      v27 = src[30];
      if ( v27 )
      {
        v14 = 24 * v27;
        if ( 24 * v27 )
          goto LABEL_21;
      }
    }
    return v8;
  }
  compat_kernel::core::stats::Stats::render(v32);
  if ( log::MAX_LOG_LEVEL_FILTER >= 3uLL )
  {
    dest[0] = &off_3E5D30;
    *(_OWORD *)&dest[1] = 1uLL;
    dest[4] = aCompatCoreProg;
    dest[5] = 0LL;
    log::__private_api_log(dest, 3LL, &off_3E5D40, 0LL);
  }
  core::ptr::drop_in_place(v32);
  if ( !src[25] )
    goto LABEL_50;
LABEL_9:
  v6 = src[27];
  if ( v6 )
    _rust_dealloc(*v2, v6, 1LL);
  v7 = src[29];
  v8 = 0;
  if ( v7 )
  {
    v9 = src[31];
    if ( v9 )
    {
      v10 = 24 * v9;
      v11 = 0LL;
      do
      {
        v12 = *(_QWORD *)(v7 + v11 + 8);
        if ( v12 )
          _rust_dealloc(*(_QWORD *)(v7 + v11), v12, 1LL);
        v11 += 24LL;
      }
      while ( v10 != v11 );
    }
    v13 = src[30];
    if ( v13 )
    {
      v14 = 24 * v13;
      if ( 24 * v13 )
LABEL_21:
        _rust_dealloc(src[29], v14, 8LL);
    }
  }
  return v8;
}
