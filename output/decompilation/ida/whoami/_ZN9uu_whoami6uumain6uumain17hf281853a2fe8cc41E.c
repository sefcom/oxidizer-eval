// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_whoami::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rax
  _QWORD v5[3]; // [rsp+8h] [rbp-330h] BYREF
  __int64 v6; // [rsp+20h] [rbp-318h] BYREF
  __int64 v7; // [rsp+28h] [rbp-310h]
  __int128 v8; // [rsp+30h] [rbp-308h]
  __int128 v9; // [rsp+40h] [rbp-2F8h]
  __int64 v10; // [rsp+50h] [rbp-2E8h]
  __int64 dest; // [rsp+58h] [rbp-2E0h] BYREF
  __int64 v12; // [rsp+60h] [rbp-2D8h]
  __int128 v13; // [rsp+68h] [rbp-2D0h]
  __int128 v14; // [rsp+78h] [rbp-2C0h]
  __int64 v15; // [rsp+88h] [rbp-2B0h]

  uu_whoami::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v6, &dest, a1, a2);
  if ( __OFSUB__(-v6, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v7,
             &dest,
             v2,
             -v6);
  v15 = v10;
  v14 = v9;
  v13 = v8;
  dest = v6;
  v12 = v7;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&dest);
  uu_whoami::whoami(&dest);
  result = v12;
  if ( dest != 0x8000000000000000LL )
  {
    v5[0] = dest;
    v5[1] = v12;
    v5[2] = v13;
    v4 = uucore::mods::display::println_verbatim(v5);
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v4);
  }
  return result;
}