__int64 __fastcall uu_pwd::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char v4; // bl
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-348h] BYREF
  __int64 v9; // [rsp+8h] [rbp-340h]
  __int128 v10; // [rsp+10h] [rbp-338h]
  __int128 v11; // [rsp+20h] [rbp-328h]
  __int64 v12; // [rsp+30h] [rbp-318h]
  __int64 v13; // [rsp+38h] [rbp-310h] BYREF
  __int64 v14; // [rsp+40h] [rbp-308h]
  __int64 v15; // [rsp+48h] [rbp-300h]
  _QWORD v16[3]; // [rsp+50h] [rbp-2F8h] BYREF
  _QWORD dest[2]; // [rsp+68h] [rbp-2E0h] BYREF
  __int128 v18; // [rsp+78h] [rbp-2D0h]
  __int128 v19; // [rsp+88h] [rbp-2C0h]
  __int64 v20; // [rsp+98h] [rbp-2B0h]

  uu_pwd::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v8, dest, a1, a2);
  if ( __OFSUB__(-v8, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v9,
             dest,
             v2,
             -v8);
  v20 = v12;
  v19 = v11;
  v18 = v10;
  dest[0] = v8;
  dest[1] = v9;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, &unk_16BB0, 8LL)
    || !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aLogical, 7LL)
    && (std::env::var(&v8),
        v4 = v8,
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v8),
        (v4 & 1) != 0) )
  {
    uu_pwd::physical_path(&v8);
  }
  else
  {
    uu_pwd::logical_path(&v8);
  }
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v13,
    &v8);
  v5 = v14;
  if ( v13 == 0x8000000000000000LL )
    goto LABEL_11;
  v16[0] = v13;
  v16[1] = v14;
  v16[2] = v15;
  v6 = uucore::mods::display::println_verbatim(v16);
  v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v6);
  if ( v7 )
  {
    v5 = v7;
LABEL_11:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
    return v5;
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
  return 0LL;
}