__int64 __fastcall rg::flags::hiargs::platform_hostname(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int128 v13; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-A8h]
  __int64 v15; // [rsp+20h] [rbp-98h] BYREF
  __int128 v16; // [rsp+28h] [rbp-90h] BYREF
  __int128 *v17; // [rsp+38h] [rbp-80h]
  __int64 v18; // [rsp+40h] [rbp-78h]
  __int64 v19; // [rsp+48h] [rbp-70h]
  const char *v20; // [rsp+58h] [rbp-60h] BYREF
  __int64 v21; // [rsp+60h] [rbp-58h]
  const char *v22; // [rsp+68h] [rbp-50h]
  __int64 v23; // [rsp+70h] [rbp-48h]
  __int64 v24; // [rsp+78h] [rbp-40h]
  __int128 v25; // [rsp+80h] [rbp-38h] BYREF
  __int64 v26; // [rsp+90h] [rbp-28h]

  grep_cli::hostname::hostname(&v25);
  if ( __OFSUB__(0LL, (_QWORD)v25) )
  {
    v15 = *((_QWORD *)&v25 + 1);
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
    {
      *(_QWORD *)&v13 = &v15;
      *((_QWORD *)&v13 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v16 = &off_3EB380;
      *((_QWORD *)&v16 + 1) = 1LL;
      v19 = 0LL;
      v17 = &v13;
      v18 = 1LL;
      v5 = log::__private_api::loc(&off_3EB3C8, 0LL, v1, v2, v3, v4);
      v20 = aRgFlagsHiargs;
      v21 = 17LL;
      v22 = aRgFlagsHiargs;
      v23 = 17LL;
      v24 = v5;
      log::__private_api::log(&v16, 4LL, &v20);
    }
    *a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<std::io::error::Error>(&v15);
  }
  else
  {
    v14 = v26;
    v13 = v25;
    v7 = *((_QWORD *)&v25 + 1);
    core::str::converts::from_utf8(&v16);
    if ( (_DWORD)v16 == 1 )
    {
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
      {
        *(_QWORD *)&v25 = &v13;
        *((_QWORD *)&v25 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        *(_QWORD *)&v16 = &off_3EB390;
        *((_QWORD *)&v16 + 1) = 2LL;
        v19 = 0LL;
        v17 = &v25;
        v18 = 1LL;
        v12 = log::__private_api::loc(&off_3EB3B0, 0LL, v8, v9, v10, v11);
        v20 = aRgFlagsHiargs;
        v21 = 17LL;
        v22 = aRgFlagsHiargs;
        v23 = 17LL;
        v24 = v12;
        log::__private_api::log(&v16, 4LL, &v20);
        v7 = *((_QWORD *)&v13 + 1);
      }
      *a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<std::ffi::os_str::OsString>(v13, v7);
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, *((_QWORD *)&v16 + 1));
      a1[2] = v17;
      *(_OWORD *)a1 = v16;
      return core::ptr::drop_in_place<std::ffi::os_str::OsString>(v13, v7);
    }
  }
}