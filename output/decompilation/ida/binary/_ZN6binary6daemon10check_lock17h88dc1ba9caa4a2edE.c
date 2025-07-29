__int64 binary::daemon::check_lock()
{
  __int64 v0; // r8
  __int64 v1; // r9
  char *v2; // r14
  const char *v3; // rbx
  int v4; // eax
  unsigned __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  const char *v20; // [rsp+0h] [rbp-A8h] BYREF
  char *file; // [rsp+8h] [rbp-A0h]
  const char *v22; // [rsp+10h] [rbp-98h]
  __int64 v23; // [rsp+18h] [rbp-90h]
  __int64 v24; // [rsp+20h] [rbp-88h]
  char **v25; // [rsp+28h] [rbp-80h] BYREF
  __int64 v26; // [rsp+30h] [rbp-78h]
  _QWORD *v27; // [rsp+38h] [rbp-70h]
  __int128 v28; // [rsp+40h] [rbp-68h]
  __uid_t v29; // [rsp+5Ch] [rbp-4Ch] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v31[56]; // [rsp+70h] [rbp-38h] BYREF

  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
  {
    v25 = &off_18E7378;
    v26 = 1LL;
    v27 = (_QWORD *)&byte_8;
    v28 = 0LL;
    v20 = aBinaryDaemon;
    file = byte_9 + 5;
    v22 = aBinaryDaemon;
    v23 = 14LL;
    v24 = log::__private_api::loc(&off_18E73D8);
    log::__private_api::log(&v25, 3LL, &v20, aBinaryDaemon, v0, v1);
  }
  v29 = geteuid();
  v30[0] = &v29;
  v30[1] = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
  v25 = &off_18E7398;
  v26 = 1LL;
  v27 = v30;
  v28 = 1uLL;
  core::option::Option<T>::map_or_else(v31, &v25);
  <T as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v20, v31);
  if ( __OFSUB__(0LL, v20) )
  {
    v2 = file;
    v3 = v22;
    v4 = open(file, 66, 384LL);
    if ( v4 < 0 )
    {
      if ( core::sync::atomic::atomic_load() )
      {
        v25 = &off_18E73A8;
        v26 = 1LL;
        v27 = (_QWORD *)&byte_8;
        v28 = 0LL;
        v13 = log::__private_api::loc(&off_18E7420);
        v20 = aBinaryDaemon;
        file = byte_9 + 5;
        v22 = aBinaryDaemon;
        v23 = 14LL;
        v24 = v13;
        log::__private_api::log(&v25, 1LL, &v20, aBinaryDaemon, v14, v15);
      }
      core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v3);
      return 0;
    }
    else
    {
      v6 = flock(v4, 6);
      v5 = core::sync::atomic::atomic_load();
      LOBYTE(v6) = v6 == 0;
      if ( (_BYTE)v6 )
      {
        if ( v5 > 2 )
        {
          v25 = &off_18E73B8;
          v26 = 1LL;
          v27 = (_QWORD *)&byte_8;
          v28 = 0LL;
          v16 = log::__private_api::loc(&off_18E73F0);
          v20 = aBinaryDaemon;
          file = byte_9 + 5;
          v22 = aBinaryDaemon;
          v23 = 14LL;
          v24 = v16;
          log::__private_api::log(&v25, 3LL, &v20, aBinaryDaemon, v17, v18);
        }
      }
      else if ( v5 > 1 )
      {
        v25 = &off_18E73C8;
        v26 = 1LL;
        v27 = (_QWORD *)&byte_8;
        v28 = 0LL;
        v7 = log::__private_api::loc(&off_18E7408);
        v20 = aBinaryDaemon;
        file = byte_9 + 5;
        v22 = aBinaryDaemon;
        v23 = 14LL;
        v24 = v7;
        log::__private_api::log(&v25, 2LL, &v20, aBinaryDaemon, v8, v9);
      }
      core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v3);
    }
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<alloc::ffi::c_str::CString,alloc::ffi::c_str::NulError>>(&v20);
    if ( core::sync::atomic::atomic_load() )
    {
      v25 = &off_18E7388;
      v26 = 1LL;
      v27 = (_QWORD *)&byte_8;
      v28 = 0LL;
      v10 = log::__private_api::loc(&off_18E7438);
      v20 = aBinaryDaemon;
      file = byte_9 + 5;
      v22 = aBinaryDaemon;
      v23 = 14LL;
      v24 = v10;
      log::__private_api::log(&v25, 1LL, &v20, aBinaryDaemon, v11, v12);
    }
    return 0;
  }
  return v6;
}