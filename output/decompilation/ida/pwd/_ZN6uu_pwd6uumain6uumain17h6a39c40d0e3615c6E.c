__int64 __fastcall uu_pwd::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD v6[2]; // [rsp+8h] [rbp-370h] BYREF
  __int128 v7; // [rsp+18h] [rbp-360h]
  __int128 v8; // [rsp+28h] [rbp-350h]
  __int64 v9; // [rsp+38h] [rbp-340h]
  __int64 v10; // [rsp+40h] [rbp-338h] BYREF
  __int64 v11; // [rsp+48h] [rbp-330h]
  __int128 v12; // [rsp+50h] [rbp-328h]
  __int128 v13; // [rsp+60h] [rbp-318h]
  __int64 v14; // [rsp+70h] [rbp-308h]
  _QWORD v15[3]; // [rsp+78h] [rbp-300h] BYREF
  _QWORD v16[93]; // [rsp+90h] [rbp-2E8h] BYREF

  uu_pwd::uu_app(v16);
  clap_builder::builder::command::Command::try_get_matches_from(&v10, v16, a1, a2);
  if ( v10 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
  v9 = v14;
  v8 = v13;
  v7 = v12;
  v6[0] = v10;
  v6[1] = v11;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, aPhysical, 8LL) )
    goto LABEL_7;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v6, aLogical, 7LL) )
  {
    std::env::var(v16);
    if ( v16[0] )
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v16);
LABEL_7:
      uu_pwd::physical_path((__int64)v16);
      goto LABEL_10;
    }
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v16);
  }
  uu_pwd::logical_path((__int64)v16);
LABEL_10:
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v10,
    v16);
  v3 = v11;
  if ( v10 == 0x8000000000000000LL )
  {
LABEL_13:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v6);
    return v3;
  }
  v15[0] = v10;
  v15[1] = v11;
  v15[2] = v12;
  v4 = uucore::mods::display::println_verbatim(v15);
  v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v4);
  if ( v5 )
  {
    v3 = v5;
    goto LABEL_13;
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v6);
  return 0LL;
}
