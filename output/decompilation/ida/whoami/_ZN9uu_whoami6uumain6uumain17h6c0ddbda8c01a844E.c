__int64 __fastcall uu_whoami::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-370h] BYREF
  _QWORD v5[2]; // [rsp+20h] [rbp-358h] BYREF
  __int128 v6; // [rsp+30h] [rbp-348h]
  __int128 v7; // [rsp+40h] [rbp-338h]
  __int64 v8; // [rsp+50h] [rbp-328h]
  __int64 v9; // [rsp+58h] [rbp-320h] BYREF
  __int64 v10; // [rsp+60h] [rbp-318h]
  __int128 v11; // [rsp+68h] [rbp-310h]
  __int128 v12; // [rsp+78h] [rbp-300h]
  __int64 v13; // [rsp+88h] [rbp-2F0h]
  __int64 dest; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v15; // [rsp+98h] [rbp-2E0h]
  __int64 v16; // [rsp+A0h] [rbp-2D8h]

  uu_whoami::uu_app((char *)&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v9, &dest, a1, a2);
  if ( v9 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
  v8 = v13;
  v7 = v12;
  v6 = v11;
  v5[0] = v9;
  v5[1] = v10;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v5);
  uu_whoami::whoami((__int64)&dest);
  result = v15;
  if ( dest != 0x8000000000000000LL )
  {
    v4[0] = dest;
    v4[1] = v15;
    v4[2] = v16;
    v3 = uucore::mods::display::println_verbatim(v4);
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v3);
  }
  return result;
}
