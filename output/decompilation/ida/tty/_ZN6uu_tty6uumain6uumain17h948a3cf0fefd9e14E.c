__int64 __fastcall uu_tty::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v8; // [rsp+8h] [rbp-360h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-358h] BYREF
  _QWORD v10[2]; // [rsp+20h] [rbp-348h] BYREF
  __int64 v11; // [rsp+30h] [rbp-338h] BYREF
  __int64 v12; // [rsp+38h] [rbp-330h]
  __int64 v13; // [rsp+40h] [rbp-328h]
  _BYTE v14[56]; // [rsp+48h] [rbp-320h] BYREF
  char **dest; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v16; // [rsp+88h] [rbp-2E0h]
  _QWORD *v17; // [rsp+90h] [rbp-2D8h]
  __int128 v18; // [rsp+98h] [rbp-2D0h]

  uu_tty::uu_app(&dest);
  clap_builder::builder::command::Command::get_matches_from(v14, &dest, a1, a2);
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v14, aSilent, 6LL) )
  {
    v8 = std::io::stdio::stdout();
    std::io::stdio::stdin();
    nix::unistd::ttyname(&v11);
    v3 = v11;
    if ( __OFSUB__(-v11, 1LL) )
    {
      uucore::mods::error::set_exit_code(1LL);
      dest = &off_D1F50;
      v16 = 1LL;
      v17 = (_QWORD *)&byte_8;
      v18 = 0LL;
      v4 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v8, &dest);
    }
    else
    {
      v5 = v12;
      v10[0] = v12;
      v10[1] = v13;
      v9[0] = v10;
      v9[1] = <std::path::Display as core::fmt::Display>::fmt;
      dest = (char **)&unk_D1EF8;
      v16 = 2LL;
      v17 = v9;
      v18 = 1uLL;
      v4 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v8, &dest);
      core::mem::drop(v3, v5);
    }
    if ( !v4 )
    {
      v6 = <std::io::stdio::Stdout as std::io::Write>::flush(&v8);
      if ( !v6 )
      {
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0LL);
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0LL);
        goto LABEL_10;
      }
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v6);
    }
    std::process::exit(3);
  }
  std::io::stdio::stdin();
  if ( (unsigned __int8)std::sys::io::is_terminal::isatty::is_terminal() )
  {
LABEL_10:
    v2 = 0LL;
    goto LABEL_11;
  }
  v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
LABEL_11:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v14);
  return v2;
}