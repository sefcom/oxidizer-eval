__int64 __fastcall uu_true::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // r14
  __int64 (__fastcall *v5)(); // rdx
  __int64 v6; // rax
  __int64 v8; // [rsp+0h] [rbp-3A8h] BYREF
  void *v9; // [rsp+8h] [rbp-3A0h] BYREF
  _QWORD *v10; // [rsp+10h] [rbp-398h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+18h] [rbp-390h]
  __int128 v12; // [rsp+20h] [rbp-388h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-378h]
  __int64 v14; // [rsp+38h] [rbp-370h]
  __int64 v15; // [rsp+40h] [rbp-368h]
  _QWORD v16[4]; // [rsp+58h] [rbp-350h] BYREF
  __int128 v17; // [rsp+78h] [rbp-330h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp-320h]
  __int64 v19; // [rsp+90h] [rbp-318h] BYREF
  __int64 v20; // [rsp+98h] [rbp-310h]
  _BYTE dest[736]; // [rsp+C8h] [rbp-2E0h] BYREF

  uu_true::uu_app(dest);
  core::iter::traits::iterator::Iterator::collect(&v17, a1, a2);
  if ( v18 <= 2 )
  {
    v13 = (_QWORD *)v18;
    v12 = v17;
    clap_builder::builder::command::Command::try_get_matches_from_mut(&v19, dest, &v12);
    if ( v19 != 0x8000000000000000LL )
      goto LABEL_11;
    v2 = v20;
    v3 = *(unsigned __int8 *)(v20 + 213);
    if ( v3 == 12 )
    {
      v4 = clap_builder::builder::command::Command::print_help(dest);
      if ( !v4 )
        goto LABEL_10;
    }
    else
    {
      if ( v3 != 14 )
        goto LABEL_10;
      v9 = (void *)std::io::stdio::stdout();
      clap_builder::builder::command::Command::render_version(v16, dest);
      v10 = v16;
      v11 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v12 = &unk_F6848;
      *((_QWORD *)&v12 + 1) = 2LL;
      v15 = 0LL;
      v13 = &v10;
      v14 = 1LL;
      v4 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v9, &v12);
      core::ptr::drop_in_place<alloc::string::String>(v16);
      if ( !v4 )
      {
LABEL_10:
        core::ptr::drop_in_place<clap_builder::error::Error>(v2);
        if ( v19 == 0x8000000000000000LL )
          return core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
LABEL_11:
        core::ptr::drop_in_place<core::result::Result<clap_builder::parser::matches::arg_matches::ArgMatches,clap_builder::error::Error>>(&v19);
        return core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
      }
    }
    v8 = v4;
    v9 = &std::io::stdio::stderr::INSTANCE;
    v10 = (_QWORD *)uucore::util_name();
    v11 = v5;
    v16[0] = &v10;
    v16[1] = <&T as core::fmt::Display>::fmt;
    v16[2] = &v8;
    v16[3] = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&v12 = &unk_F6880;
    *((_QWORD *)&v12 + 1) = 3LL;
    v15 = 0LL;
    v13 = v16;
    v14 = 2LL;
    v6 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v9, &v12);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v6);
    uucore::mods::error::set_exit_code(1LL);
    core::ptr::drop_in_place<std::io::error::Error>(v8);
    goto LABEL_10;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v17);
  return core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
}
