__int64 __fastcall uu_true::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // r14
  __int64 (__fastcall *v5)(); // rdx
  __int64 v6; // rax
  __int64 v8; // [rsp+8h] [rbp-3A0h] BYREF
  void *v9; // [rsp+10h] [rbp-398h] BYREF
  _QWORD **v10; // [rsp+18h] [rbp-390h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+20h] [rbp-388h]
  _QWORD *v12; // [rsp+28h] [rbp-380h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+30h] [rbp-378h]
  __int64 *v14; // [rsp+38h] [rbp-370h]
  __int64 (__fastcall *v15)(); // [rsp+40h] [rbp-368h]
  void *v16; // [rsp+48h] [rbp-360h] BYREF
  __int64 v17; // [rsp+50h] [rbp-358h]
  _QWORD *v18; // [rsp+58h] [rbp-350h]
  __int64 v19; // [rsp+60h] [rbp-348h]
  __int64 v20; // [rsp+68h] [rbp-340h]
  _BYTE v21[16]; // [rsp+78h] [rbp-330h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp-320h]
  __int64 v23; // [rsp+90h] [rbp-318h] BYREF
  __int64 v24; // [rsp+98h] [rbp-310h]
  _BYTE dest[736]; // [rsp+C8h] [rbp-2E0h] BYREF

  uu_true::uu_app(dest);
  core::iter::traits::iterator::Iterator::collect(v21, a1, a2);
  if ( v22 <= 2 )
  {
    clap_builder::builder::command::Command::try_get_matches_from_mut(&v23, dest, v21);
    if ( !__OFSUB__(0LL, v23) )
      goto LABEL_11;
    v2 = v24;
    v3 = *(unsigned __int8 *)(v24 + 221);
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
      clap_builder::builder::command::Command::render_version(&v12, dest);
      v10 = &v12;
      v11 = <alloc::string::String as core::fmt::Display>::fmt;
      v16 = &unk_158E0;
      v17 = 1LL;
      v20 = 0LL;
      v18 = &v10;
      v19 = 1LL;
      v4 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v9, &v16);
      core::ptr::drop_in_place<alloc::string::String>(v12, v13);
      if ( !v4 )
      {
LABEL_10:
        core::ptr::drop_in_place<clap_builder::error::Error>(v2);
        if ( v23 == 0x8000000000000000LL )
          return core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
LABEL_11:
        core::ptr::drop_in_place<core::result::Result<clap_builder::parser::matches::arg_matches::ArgMatches,clap_builder::error::Error>>(&v23);
        return core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
      }
    }
    v8 = v4;
    v9 = &std::io::stdio::stderr::INSTANCE;
    v10 = (_QWORD **)uucore::util_name();
    v11 = v5;
    v12 = &v10;
    v13 = <&T as core::fmt::Display>::fmt;
    v14 = &v8;
    v15 = <std::io::error::Error as core::fmt::Display>::fmt;
    v16 = &unk_CAEC8;
    v17 = 3LL;
    v20 = 0LL;
    v18 = &v12;
    v19 = 2LL;
    v6 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v9, &v16);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v6);
    uucore::mods::error::set_exit_code(1LL);
    core::ptr::drop_in_place<std::io::error::Error>(v8);
    goto LABEL_10;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v21);
  return core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
}