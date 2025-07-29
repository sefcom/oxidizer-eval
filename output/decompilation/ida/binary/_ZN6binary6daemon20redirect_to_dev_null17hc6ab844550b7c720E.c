__int64 binary::daemon::redirect_to_dev_null()
{
  __int64 v0; // r8
  __int64 v1; // r9
  const char *v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rbx
  int v5; // eax
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v14; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+8h] [rbp-70h]
  const char *v16; // [rsp+10h] [rbp-68h]
  __int64 v17; // [rsp+18h] [rbp-60h]
  __int64 v18; // [rsp+20h] [rbp-58h]
  char **v19; // [rsp+28h] [rbp-50h] BYREF
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  __int128 v22; // [rsp+40h] [rbp-38h]

  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
  {
    v19 = &off_18E7270;
    v20 = 1LL;
    v21 = 8LL;
    v22 = 0LL;
    v14 = aBinaryDaemon;
    v15 = 14LL;
    v16 = aBinaryDaemon;
    v17 = 14LL;
    v18 = log::__private_api::loc(&off_18E72A0);
    log::__private_api::log(&v19, 3LL, &v14, aBinaryDaemon, v0, v1);
  }
  <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v19, aDevNull, 9LL);
  v2 = (const char *)core::result::Result<T,E>::unwrap(&v19, &off_18E72B8);
  v4 = v3;
  v5 = open(v2, 2, 0LL);
  if ( v5 < 0 )
  {
    if ( core::sync::atomic::atomic_load() )
    {
      v19 = &off_18E7290;
      v20 = 1LL;
      v21 = 8LL;
      v22 = 0LL;
      v10 = log::__private_api::loc(&off_18E72D0);
      v14 = aBinaryDaemon;
      v15 = 14LL;
      v16 = aBinaryDaemon;
      v17 = 14LL;
      v18 = v10;
      log::__private_api::log(&v19, 1LL, &v14, aBinaryDaemon, v11, v12);
    }
  }
  else
  {
    v6 = v5;
    dup2(v5, 0);
    dup2(v6, 1);
    dup2(v6, 2);
    close(v6);
    if ( (unsigned __int64)core::sync::atomic::atomic_load() > 2 )
    {
      v19 = &off_18E7280;
      v20 = 1LL;
      v21 = 8LL;
      v22 = 0LL;
      v7 = log::__private_api::loc(&off_18E72E8);
      v14 = aBinaryDaemon;
      v15 = 14LL;
      v16 = aBinaryDaemon;
      v17 = 14LL;
      v18 = v7;
      log::__private_api::log(&v19, 3LL, &v14, aBinaryDaemon, v8, v9);
    }
  }
  return core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v4);
}