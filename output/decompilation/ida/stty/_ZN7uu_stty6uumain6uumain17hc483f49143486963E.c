// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_stty::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rbx
  __int64 v5; // [rsp+0h] [rbp-348h] BYREF
  __int64 v6; // [rsp+8h] [rbp-340h]
  __int128 v7; // [rsp+10h] [rbp-338h]
  __int128 v8; // [rsp+20h] [rbp-328h]
  __int64 v9; // [rsp+30h] [rbp-318h]
  _QWORD v10[2]; // [rsp+38h] [rbp-310h] BYREF
  __int128 v11; // [rsp+48h] [rbp-300h]
  __int128 v12; // [rsp+58h] [rbp-2F0h]
  _QWORD dest[2]; // [rsp+68h] [rbp-2E0h] BYREF
  __int128 v14; // [rsp+78h] [rbp-2D0h]
  __int128 v15; // [rsp+88h] [rbp-2C0h]
  __int64 v16; // [rsp+98h] [rbp-2B0h]

  uu_stty::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v5, dest, a1, a2);
  if ( __OFSUB__(-v5, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v6,
             dest,
             v2,
             -v5);
  v16 = v9;
  v15 = v8;
  v14 = v7;
  dest[0] = v5;
  dest[1] = v6;
  uu_stty::Options::from(&v5, dest);
  if ( v5 == 0x8000000000000001LL )
  {
    v4 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
  }
  else
  {
    v12 = v8;
    v11 = v7;
    v10[0] = v5;
    v10[1] = v6;
    v4 = uu_stty::stty(v10);
    core::ptr::drop_in_place<uu_stty::Options>(v10);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
  return v4;
}