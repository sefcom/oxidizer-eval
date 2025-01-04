__int64 __fastcall uu_wc::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+8h] [rbp-370h] BYREF
  __int64 v5; // [rsp+10h] [rbp-368h]
  __int128 v6; // [rsp+18h] [rbp-360h]
  __int128 v7; // [rsp+28h] [rbp-350h]
  __int64 v8; // [rsp+38h] [rbp-340h]
  _QWORD v9[2]; // [rsp+40h] [rbp-338h] BYREF
  __int128 v10; // [rsp+50h] [rbp-328h]
  __int128 v11; // [rsp+60h] [rbp-318h]
  __int64 v12; // [rsp+70h] [rbp-308h]
  _BYTE v13[32]; // [rsp+78h] [rbp-300h] BYREF
  __int64 v14; // [rsp+98h] [rbp-2E0h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-2D8h]
  __int128 v16; // [rsp+A8h] [rbp-2D0h]

  uu_wc::uu_app(&v14);
  clap_builder::builder::command::Command::try_get_matches_from(&v4, &v14, a1, a2);
  if ( v4 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
  v12 = v8;
  v11 = v7;
  v10 = v6;
  v9[0] = v4;
  v9[1] = v5;
  uu_wc::Settings::new(v13, v9);
  uu_wc::Inputs::new(&v14, v9);
  v2 = v15;
  if ( v14 != 3 )
  {
    v4 = v14;
    v5 = v15;
    v6 = v16;
    v2 = uu_wc::wc(&v4, v13);
    core::ptr::drop_in_place<uu_wc::Inputs>(&v4);
  }
  core::ptr::drop_in_place<uu_wc::Settings>(v13);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v9);
  return v2;
}
