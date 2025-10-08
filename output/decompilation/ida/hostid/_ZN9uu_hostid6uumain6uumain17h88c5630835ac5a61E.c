__int64 __fastcall uu_hostid::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD v4[2]; // [rsp+8h] [rbp-350h] BYREF
  __int128 v5; // [rsp+18h] [rbp-340h]
  __int128 v6; // [rsp+28h] [rbp-330h]
  __int64 v7; // [rsp+38h] [rbp-320h]
  __int64 v8; // [rsp+40h] [rbp-318h] BYREF
  __int64 v9; // [rsp+48h] [rbp-310h]
  __int128 v10; // [rsp+50h] [rbp-308h]
  __int128 v11; // [rsp+60h] [rbp-2F8h]
  __int64 v12; // [rsp+70h] [rbp-2E8h]
  _BYTE dest[736]; // [rsp+78h] [rbp-2E0h] BYREF

  uu_hostid::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v8, dest, a1, a2);
  if ( __OFSUB__(-v8, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v9,
             dest,
             v2,
             -v8);
  v7 = v12;
  v6 = v11;
  v5 = v10;
  v4[0] = v8;
  v4[1] = v9;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v4);
  uu_hostid::hostid();
  return 0LL;
}