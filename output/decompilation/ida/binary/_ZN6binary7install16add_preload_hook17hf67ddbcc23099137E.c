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
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v20; // [rsp+Ch] [rbp-ACh] BYREF
  char **v21; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-A0h]
  __int128 *v23; // [rsp+20h] [rbp-98h]
  __int128 v24; // [rsp+28h] [rbp-90h]
  __int128 v25; // [rsp+40h] [rbp-78h] BYREF
  const char *v26; // [rsp+50h] [rbp-68h]
  __int64 (__fastcall *v27)(); // [rsp+58h] [rbp-60h]
  __int64 v28; // [rsp+60h] [rbp-58h]
  __int128 v29; // [rsp+68h] [rbp-50h] BYREF
  __int64 v30; // [rsp+78h] [rbp-40h]
  __int128 *v31; // [rsp+80h] [rbp-38h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+88h] [rbp-30h]
  __int128 v33; // [rsp+90h] [rbp-28h] BYREF

  if ( (unsigned __int64)core::sync::atomic::atomic_load() > 2 )
  {
    v29 = *(_OWORD *)(a1 + 8);
    v31 = &v29;
    v32 = <std::path::Display as core::fmt::Display>::fmt;
    v21 = &off_18E6B08;
    v22 = 1LL;
    v23 = (__int128 *)&v31;
    v24 = 1uLL;
    *(_QWORD *)&v25 = aBinaryInstall;
    *((_QWORD *)&v25 + 1) = 15LL;
    v26 = aBinaryInstall;
    v27 = (__int64 (__fastcall *)())(byte_9 + 6);
    v28 = log::__private_api::loc(&off_18E6B88);
    log::__private_api::log(&v21, 3LL, &v25, aBinaryInstall, v2, v3);
  }
  *(_QWORD *)&v29 = 0LL;
  *((_QWORD *)&v29 + 1) = 1LL;
  v30 = 0LL;
  std::fs::File::open(&v21, aEtcLdSoPreload, 18LL);
  if ( (_DWORD)v21 == 1
    || (LODWORD(v25) = HIDWORD(v21),
        v4 = <std::fs::File as std::io::Read>::read_to_string(&v25, &v29),
        core::result::Result<T,E>::unwrap(v4, v5),
        core::ptr::drop_in_place<std::fs::File>((unsigned int)v25),
        ((unsigned __int8)v21 & 1) != 0) )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v21);
  }
  v6 = core::str::<impl str>::trim_end_matches(*((_QWORD *)&v29 + 1), v30);
  v8 = v7;
  alloc::string::String::from_utf8_lossy(&v21, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  if ( (unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(v22, v23, v6, v8) )
  {
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v21);
    if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
    {
      v21 = &off_18E6B78;
      v22 = 1LL;
      v23 = (_OWORD *)&byte_8;
      v24 = 0LL;
      v9 = log::__private_api::loc(&off_18E6C18);
      *(_QWORD *)&v25 = aBinaryInstall;
      *((_QWORD *)&v25 + 1) = 15LL;
      v26 = aBinaryInstall;
      v27 = (__int64 (__fastcall *)())(byte_9 + 6);
      v28 = v9;
      log::__private_api::log(&v21, 3LL, &v25, aBinaryInstall, v10, v11);
    }
  }
  else
  {
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v21);
    std::fs::File::create(&v21, aEtcLdSoPreload, 18LL);
    v20 = core::result::Result<T,E>::unwrap(&v21);
    core::str::<impl str>::trim_end_matches(*((_QWORD *)&v29 + 1), v30);
    if ( v12 )
    {
      v33 = *(_OWORD *)(a1 + 8);
      v31 = (__int128 *)core::str::<impl str>::trim_end_matches(*((_QWORD *)&v29 + 1), v30);
      v32 = v13;
      *(_QWORD *)&v25 = &v33;
      *((_QWORD *)&v25 + 1) = <std::path::Display as core::fmt::Display>::fmt;
      v26 = (const char *)&v31;
      v27 = <&T as core::fmt::Display>::fmt;
      v21 = (char **)&unk_18E6B18;
      v22 = 3LL;
      v23 = &v25;
      v24 = 2uLL;
      v14 = std::io::Write::write_fmt(&v20, &v21);
      core::result::Result<T,E>::unwrap(v14, &off_18E6BE8);
    }
    else
    {
      v25 = *(_OWORD *)(a1 + 8);
      v31 = &v25;
      v32 = <std::path::Display as core::fmt::Display>::fmt;
      v21 = (char **)&unk_18E6B48;
      v22 = 2LL;
      v23 = (__int128 *)&v31;
      v24 = 1uLL;
      v15 = std::io::Write::write_fmt(&v20, &v21);
      core::result::Result<T,E>::unwrap(v15, &off_18E6BD0);
    }
    if ( (unsigned __int64)core::sync::atomic::atomic_load() > 2 )
    {
      v21 = &off_18E6B68;
      v22 = 1LL;
      v23 = (_OWORD *)&byte_8;
      v24 = 0LL;
      v16 = log::__private_api::loc(&off_18E6C00);
      *(_QWORD *)&v25 = aBinaryInstall;
      *((_QWORD *)&v25 + 1) = 15LL;
      v26 = aBinaryInstall;
      v27 = (__int64 (__fastcall *)())(byte_9 + 6);
      v28 = v16;
      log::__private_api::log(&v21, 3LL, &v25, aBinaryInstall, v17, v18);
    }
    core::ptr::drop_in_place<std::fs::File>(v20);
  }
  core::ptr::drop_in_place<alloc::string::String>(&v29);
  return core::ptr::drop_in_place<std::path::PathBuf>(a1);
}