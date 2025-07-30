__int64 __fastcall binary::install::copy_self(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v20; // [rsp+0h] [rbp-B8h] BYREF
  __int128 **v21; // [rsp+10h] [rbp-A8h]
  __int128 v22; // [rsp+18h] [rbp-A0h]
  const char *v23; // [rsp+30h] [rbp-88h] BYREF
  __int64 v24; // [rsp+38h] [rbp-80h]
  const char *v25; // [rsp+40h] [rbp-78h]
  __int64 v26; // [rsp+48h] [rbp-70h]
  __int64 v27; // [rsp+50h] [rbp-68h]
  __int128 *v28; // [rsp+58h] [rbp-60h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+60h] [rbp-58h]
  __int128 v30; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v31[8]; // [rsp+78h] [rbp-40h] BYREF
  __int128 v32; // [rsp+80h] [rbp-38h]
  __int128 v33; // [rsp+90h] [rbp-28h] BYREF
  __int128 **v34; // [rsp+A0h] [rbp-18h]

  if ( (unsigned __int64)core::sync::atomic::atomic_load(a1) >= 3 )
  {
    *(_QWORD *)&v20 = &off_18E6C30;
    *((_QWORD *)&v20 + 1) = 1LL;
    v21 = (__int128 **)&byte_8;
    v22 = 0LL;
    v23 = aBinaryInstall;
    v24 = 15LL;
    v25 = aBinaryInstall;
    v26 = 15LL;
    v27 = log::__private_api::loc(&off_18E6C90);
    log::__private_api::log(&v20, 3LL, &v23, aBinaryInstall, v1, v2);
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v20, aVarLogCross, 15LL);
  v34 = v21;
  v33 = v20;
  *(_QWORD *)&v20 = std::fs::create_dir_all(&v33);
  if ( (_QWORD)v20 )
  {
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v20);
    if ( core::sync::atomic::atomic_load(&v20) )
    {
      *(_QWORD *)&v20 = &off_18E6C40;
      *((_QWORD *)&v20 + 1) = 1LL;
      v21 = (__int128 **)&byte_8;
      v22 = 0LL;
      v3 = log::__private_api::loc(&off_18E6D20);
      v23 = aBinaryInstall;
      v24 = 15LL;
      v25 = aBinaryInstall;
      v26 = 15LL;
      v27 = v3;
      log::__private_api::log(&v20, 1LL, &v23, aBinaryInstall, v4, v5);
    }
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v20);
    *(_QWORD *)&v20 = std::fs::set_permissions(&v33, 511LL);
    if ( (_QWORD)v20 )
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v20);
      if ( core::sync::atomic::atomic_load(&v20) )
      {
        *(_QWORD *)&v20 = &off_18E6C50;
        *((_QWORD *)&v20 + 1) = 1LL;
        v21 = (__int128 **)&byte_8;
        v22 = 0LL;
        v6 = log::__private_api::loc(&off_18E6D08);
        v23 = aBinaryInstall;
        v24 = 15LL;
        v25 = aBinaryInstall;
        v26 = 15LL;
        v27 = v6;
        log::__private_api::log(&v20, 1LL, &v23, aBinaryInstall, v7, v8);
      }
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v20);
      std::path::Path::join(v31, *((_QWORD *)&v33 + 1), v34, aAutoColor, 10LL);
      std::env::current_exe(&v20);
      core::result::Result<T,E>::unwrap(&v23, &v20);
      *(_QWORD *)&v9 = std::fs::copy(&v23, v31);
      v30 = v9;
      if ( (_QWORD)v9 )
      {
        core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v30);
        if ( core::sync::atomic::atomic_load(&v30) )
        {
          v30 = v32;
          v28 = &v30;
          v29 = <std::path::Display as core::fmt::Display>::fmt;
          *(_QWORD *)&v20 = &off_18E6C60;
          *((_QWORD *)&v20 + 1) = 1LL;
          v21 = &v28;
          v22 = 1uLL;
          v10 = log::__private_api::loc(&off_18E6CF0);
          v23 = aBinaryInstall;
          v24 = 15LL;
          v25 = aBinaryInstall;
          v26 = 15LL;
          v27 = v10;
          log::__private_api::log(&v20, 1LL, &v23, aBinaryInstall, v11, v12);
        }
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v30);
        *(_QWORD *)&v20 = std::fs::set_permissions(v31, 511LL);
        if ( (_QWORD)v20 )
        {
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v20);
          if ( core::sync::atomic::atomic_load(&v20) )
          {
            v30 = v32;
            v28 = &v30;
            v29 = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)&v20 = &off_18E6C70;
            *((_QWORD *)&v20 + 1) = 1LL;
            v21 = &v28;
            v22 = 1uLL;
            v13 = log::__private_api::loc(&off_18E6CD8);
            v23 = aBinaryInstall;
            v24 = 15LL;
            v25 = aBinaryInstall;
            v26 = 15LL;
            v27 = v13;
            log::__private_api::log(&v20, 1LL, &v23, aBinaryInstall, v14, v15);
          }
        }
        else
        {
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v20);
          if ( (unsigned __int64)core::sync::atomic::atomic_load(&v20) >= 3 )
          {
            v30 = v32;
            v28 = &v30;
            v29 = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)&v20 = &off_18E6C80;
            *((_QWORD *)&v20 + 1) = 1LL;
            v21 = &v28;
            v22 = 1uLL;
            v17 = log::__private_api::loc(&off_18E6CC0);
            v23 = aBinaryInstall;
            v24 = 15LL;
            v25 = aBinaryInstall;
            v26 = 15LL;
            v27 = v17;
            log::__private_api::log(&v20, 3LL, &v23, aBinaryInstall, v18, v19);
          }
        }
      }
      core::ptr::drop_in_place<std::path::PathBuf>(v31);
    }
  }
  return core::ptr::drop_in_place<std::path::PathBuf>(&v33);
}