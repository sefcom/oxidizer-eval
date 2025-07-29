__int64 __fastcall binary::install::drop_library(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v17; // [rsp+Ch] [rbp-CCh] BYREF
  __int128 *v18; // [rsp+10h] [rbp-C8h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+18h] [rbp-C0h]
  const char *v20; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-B0h]
  const char *v22; // [rsp+30h] [rbp-A8h]
  __int64 v23; // [rsp+38h] [rbp-A0h]
  __int64 v24; // [rsp+40h] [rbp-98h]
  char **v25; // [rsp+48h] [rbp-90h] BYREF
  __int64 v26; // [rsp+50h] [rbp-88h]
  __int128 **v27; // [rsp+58h] [rbp-80h]
  __int128 v28; // [rsp+60h] [rbp-78h]
  _QWORD v29[2]; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v30[24]; // [rsp+88h] [rbp-50h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-38h] BYREF
  _BYTE v32[8]; // [rsp+B0h] [rbp-28h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-20h]
  __int64 v34; // [rsp+C0h] [rbp-18h]

  if ( (unsigned __int64)core::sync::atomic::atomic_load(a1) >= 3 )
  {
    v25 = &off_18E6D38;
    v26 = 1LL;
    v27 = (__int128 **)&byte_8;
    v28 = 0LL;
    v20 = aBinaryInstall;
    v21 = 15LL;
    v22 = aBinaryInstall;
    v23 = 15LL;
    v24 = log::__private_api::loc(&off_18E6D78);
    log::__private_api::log(&v25, 3LL, &v20, aBinaryInstall, v1, v2);
  }
  binary::install::find_library_path(v32);
  std::path::Path::join(v30, v33, v34, aLibcextSo2, 12LL);
  std::fs::File::create(v29, v30);
  if ( LODWORD(v29[0]) == 1 )
  {
    if ( core::sync::atomic::atomic_load(v29) )
    {
      v31 = *(_OWORD *)&v30[8];
      v18 = &v31;
      v19 = <std::path::Display as core::fmt::Display>::fmt;
      v25 = &off_18E6D48;
      v26 = 1LL;
      v27 = &v18;
      v28 = 1uLL;
      v3 = log::__private_api::loc(&off_18E6DD8);
      v20 = aBinaryInstall;
      v21 = 15LL;
      v22 = aBinaryInstall;
      v23 = 15LL;
      v24 = v3;
      log::__private_api::log(&v25, 1LL, &v20, aBinaryInstall, v4, v5);
    }
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v30[16];
    *(_OWORD *)a1 = *(_OWORD *)v30;
    core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(v29);
  }
  else
  {
    v17 = HIDWORD(v29[0]);
    v29[0] = <std::os::unix::net::stream::UnixStream as std::io::Write>::write(&v17, &unk_5047A, "743194b43ab51cE");
    v29[1] = v6;
    if ( v29[0] && core::sync::atomic::atomic_load(&v17) )
    {
      v31 = *(_OWORD *)&v30[8];
      v18 = &v31;
      v19 = <std::path::Display as core::fmt::Display>::fmt;
      v25 = &off_18E6D58;
      v26 = 1LL;
      v27 = &v18;
      v28 = 1uLL;
      v7 = log::__private_api::loc(&off_18E6D90);
      v20 = aBinaryInstall;
      v21 = 15LL;
      v22 = aBinaryInstall;
      v23 = 15LL;
      v24 = v7;
      log::__private_api::log(&v25, 1LL, &v20, aBinaryInstall, v8, v9);
    }
    v25 = (char **)std::fs::set_permissions(v30, 511LL);
    if ( v25 )
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v25);
      if ( core::sync::atomic::atomic_load(&v25) )
      {
        v31 = *(_OWORD *)&v30[8];
        v18 = &v31;
        v19 = <std::path::Display as core::fmt::Display>::fmt;
        v25 = &off_18E6C70;
        v26 = 1LL;
        v27 = &v18;
        v28 = 1uLL;
        v10 = log::__private_api::loc(&off_18E6DA8);
        v20 = aBinaryInstall;
        v21 = 15LL;
        v22 = aBinaryInstall;
        v23 = 15LL;
        v24 = v10;
        log::__private_api::log(&v25, 1LL, &v20, aBinaryInstall, v11, v12);
      }
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v25);
    }
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&v25) > 2 )
    {
      v31 = *(_OWORD *)&v30[8];
      v18 = &v31;
      v19 = <std::path::Display as core::fmt::Display>::fmt;
      v25 = &off_18E6D68;
      v26 = 1LL;
      v27 = &v18;
      v28 = 1uLL;
      v13 = log::__private_api::loc(&off_18E6DC0);
      v20 = aBinaryInstall;
      v21 = 15LL;
      v22 = aBinaryInstall;
      v23 = 15LL;
      v24 = v13;
      log::__private_api::log(&v25, 3LL, &v20, aBinaryInstall, v14, v15);
    }
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v30[16];
    *(_OWORD *)a1 = *(_OWORD *)v30;
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v29);
    core::ptr::drop_in_place<std::fs::File>(v17);
  }
  return core::ptr::drop_in_place<std::path::PathBuf>(v32);
}