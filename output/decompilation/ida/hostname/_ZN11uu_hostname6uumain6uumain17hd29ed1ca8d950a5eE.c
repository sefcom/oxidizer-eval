__int64 __fastcall uu_hostname::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // [rsp+0h] [rbp-318h] BYREF
  __int64 v9; // [rsp+8h] [rbp-310h]
  __int128 v10; // [rsp+10h] [rbp-308h]
  __int128 v11; // [rsp+20h] [rbp-2F8h]
  __int64 v12; // [rsp+30h] [rbp-2E8h]
  _QWORD v13[2]; // [rsp+38h] [rbp-2E0h] BYREF
  __int128 v14; // [rsp+48h] [rbp-2D0h]
  __int128 v15; // [rsp+58h] [rbp-2C0h]
  __int64 v16; // [rsp+68h] [rbp-2B0h]

  uu_hostname::uu_app(v13);
  clap_builder::builder::command::Command::try_get_matches_from(&v8, v13, a1, a2);
  if ( v8 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
  v16 = v12;
  v15 = v11;
  v14 = v10;
  v13[0] = v8;
  v13[1] = v9;
  v3 = (__int64)*(&uu_hostname::OPT_HOST + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, v13, aHost, v3);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aHost, v3, &v8);
  if ( v4 )
  {
    v5 = hostname::set(v4);
    v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v5);
  }
  else
  {
    v6 = uu_hostname::display_hostname((__int64)v13);
  }
  v7 = v6;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v13);
  return v7;
}
