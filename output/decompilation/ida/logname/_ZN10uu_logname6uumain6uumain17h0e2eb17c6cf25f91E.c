__int64 __fastcall uu_logname::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int128 v4; // rax
  __int128 *v5; // [rsp+0h] [rbp-368h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+8h] [rbp-360h]
  __int128 v7; // [rsp+10h] [rbp-358h] BYREF
  __int128 v8; // [rsp+20h] [rbp-348h]
  __int128 v9; // [rsp+30h] [rbp-338h]
  __int64 v10; // [rsp+40h] [rbp-328h]
  __int128 v11; // [rsp+48h] [rbp-320h] BYREF
  __int128 v12; // [rsp+58h] [rbp-310h]
  __int128 v13; // [rsp+68h] [rbp-300h]
  __int64 v14; // [rsp+78h] [rbp-2F0h]
  char **dest; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v16; // [rsp+88h] [rbp-2E0h]
  __int128 **v17; // [rsp+90h] [rbp-2D8h]
  __int128 v18; // [rsp+98h] [rbp-2D0h]

  uu_logname::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v7, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v7, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v7 + 1),
             &dest,
             v2,
             -(__int64)v7);
  v14 = v10;
  v13 = v9;
  v12 = v8;
  v11 = v7;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
  uu_logname::get_userlogin(&v11);
  if ( (_QWORD)v11 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v4 = uucore::util_name();
    v7 = v4;
    v5 = &v7;
    v6 = <&T as core::fmt::Display>::fmt;
    dest = (char **)&unk_D4E38;
    v16 = 2LL;
    v17 = &v5;
    v18 = 1uLL;
    std::io::stdio::_eprint(&dest);
    dest = &off_D4EB0;
    v16 = 1LL;
    v17 = (__int128 **)&byte_8;
    v18 = 0LL;
    std::io::stdio::_eprint(&dest);
  }
  else
  {
    *(_QWORD *)&v8 = v12;
    v7 = v11;
    v5 = &v7;
    v6 = <alloc::string::String as core::fmt::Display>::fmt;
    dest = (char **)&unk_D4E58;
    v16 = 2LL;
    v17 = &v5;
    v18 = 1uLL;
    std::io::stdio::_print(&dest);
    core::ptr::drop_in_place<alloc::string::String>(v7, *((_QWORD *)&v7 + 1));
  }
  return 0LL;
}