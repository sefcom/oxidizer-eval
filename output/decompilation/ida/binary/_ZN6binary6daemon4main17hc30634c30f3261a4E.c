__int64 binary::daemon::main()
{
  __int64 v0; // r8
  __int64 v1; // r9
  const char *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r14
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  const char *v20; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+8h] [rbp-80h]
  const char *v22; // [rsp+10h] [rbp-78h]
  __int64 v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+20h] [rbp-68h]
  char **v25; // [rsp+28h] [rbp-60h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int128 v28; // [rsp+40h] [rbp-48h]

  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
  {
    v25 = &off_18E7118;
    v26 = 1LL;
    v27 = 8LL;
    v28 = 0LL;
    v20 = aBinaryDaemon;
    v21 = 14LL;
    v22 = aBinaryDaemon;
    v23 = 14LL;
    v24 = log::__private_api::loc(&off_18E7168);
    log::__private_api::log(&v25, 3LL, &v20, aBinaryDaemon, v0, v1);
  }
  if ( (unsigned __int8)binary::daemon::check_lock() )
  {
    binary::daemon::fork_to_bg();
    binary::daemon::redirect_to_dev_null();
    binary::daemon::close_all_fds();
    umask(0);
    <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v25, asc_170099F, 1LL);
    v2 = (const char *)core::result::Result<T,E>::unwrap(&v25, &off_18E7198);
    v4 = v3;
    v5 = chdir(v2);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v4);
    if ( v5 && core::sync::atomic::atomic_load() )
    {
      v25 = &off_18E7128;
      v26 = 1LL;
      v27 = 8LL;
      v28 = 0LL;
      v6 = log::__private_api::loc(&off_18E71B0);
      v20 = aBinaryDaemon;
      v21 = 14LL;
      v22 = aBinaryDaemon;
      v23 = 14LL;
      v24 = v6;
      log::__private_api::log(&v25, 1LL, &v20, aBinaryDaemon, v7, v8);
    }
    if ( (unsigned __int64)core::sync::atomic::atomic_load() > 2 )
    {
      v25 = &off_18E7138;
      v26 = 1LL;
      v27 = 8LL;
      v28 = 0LL;
      v9 = log::__private_api::loc(&off_18E71C8);
      v20 = aBinaryDaemon;
      v21 = 14LL;
      v22 = aBinaryDaemon;
      v23 = 14LL;
      v24 = v9;
      log::__private_api::log(&v25, 3LL, &v20, aBinaryDaemon, v10, v11);
    }
    while ( 1 )
    {
      if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
      {
        v25 = &off_18E7148;
        v26 = 1LL;
        v27 = 8LL;
        v28 = 0LL;
        v12 = log::__private_api::loc(&off_18E71E0);
        v20 = aBinaryDaemon;
        v21 = 14LL;
        v22 = aBinaryDaemon;
        v23 = 14LL;
        v24 = v12;
        log::__private_api::log(&v25, 3LL, &v20, v13, v14, v15);
      }
      std::thread::sleep(60LL, 0LL);
    }
  }
  result = core::sync::atomic::atomic_load();
  if ( result )
  {
    v25 = &off_18E7158;
    v26 = 1LL;
    v27 = 8LL;
    v28 = 0LL;
    v17 = log::__private_api::loc(&off_18E7180);
    v20 = aBinaryDaemon;
    v21 = 14LL;
    v22 = aBinaryDaemon;
    v23 = 14LL;
    v24 = v17;
    return log::__private_api::log(&v25, 1LL, &v20, aBinaryDaemon, v18, v19);
  }
  return result;
}