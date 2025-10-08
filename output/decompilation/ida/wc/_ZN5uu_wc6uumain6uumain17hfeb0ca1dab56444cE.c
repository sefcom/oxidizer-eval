// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_wc::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rbx
  _QWORD v5[4]; // [rsp+0h] [rbp-358h] BYREF
  _QWORD v6[2]; // [rsp+20h] [rbp-338h] BYREF
  __int128 v7; // [rsp+30h] [rbp-328h]
  __int64 v8; // [rsp+40h] [rbp-318h] BYREF
  __int64 v9; // [rsp+48h] [rbp-310h]
  __int128 v10; // [rsp+50h] [rbp-308h]
  __int128 v11; // [rsp+60h] [rbp-2F8h]
  __int64 v12; // [rsp+70h] [rbp-2E8h]
  _QWORD dest[2]; // [rsp+78h] [rbp-2E0h] BYREF
  __int128 v14; // [rsp+88h] [rbp-2D0h]
  __int128 v15; // [rsp+98h] [rbp-2C0h]
  __int64 v16; // [rsp+A8h] [rbp-2B0h]

  uu_wc::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v8, dest, a1, a2);
  if ( __OFSUB__(-v8, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v9,
             dest,
             v2,
             -v8);
  v16 = v12;
  v15 = v11;
  v14 = v10;
  dest[0] = v8;
  dest[1] = v9;
  uu_wc::Settings::new(v5, dest);
  uu_wc::Inputs::new(&v8, dest);
  v4 = v9;
  if ( v8 != 3 )
  {
    v6[0] = v8;
    v6[1] = v9;
    v7 = v10;
    v4 = uu_wc::wc(v6, v5);
    core::ptr::drop_in_place<uu_wc::Inputs>(v6);
  }
  core::ptr::drop_in_place<uu_wc::Settings>(v5[0], v5[1]);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
  return v4;
}