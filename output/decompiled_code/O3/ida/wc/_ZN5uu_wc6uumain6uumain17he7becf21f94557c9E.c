__int64 __fastcall uu_wc::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+8h] [rbp-370h] BYREF
  __int64 v8; // [rsp+10h] [rbp-368h]
  __int128 v9; // [rsp+18h] [rbp-360h]
  __int128 v10; // [rsp+28h] [rbp-350h]
  __int64 v11; // [rsp+38h] [rbp-340h]
  _QWORD v12[2]; // [rsp+40h] [rbp-338h] BYREF
  __int128 v13; // [rsp+50h] [rbp-328h]
  __int128 v14; // [rsp+60h] [rbp-318h]
  __int64 v15; // [rsp+70h] [rbp-308h]
  _BYTE v16[32]; // [rsp+78h] [rbp-300h] BYREF
  __int64 v17; // [rsp+98h] [rbp-2E0h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-2D8h]
  __int128 v19; // [rsp+A8h] [rbp-2D0h]

  uu_wc::uu_app(&v17);
  clap_builder::builder::command::Command::try_get_matches_from(&v7, &v17, a1, a2);
  if ( v7 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
  v15 = v11;
  v14 = v10;
  v13 = v9;
  v12[0] = v7;
  v12[1] = v8;
  uu_wc::Settings::new((__int64)v16, (__int64)v12);
  uu_wc::Inputs::new(&v17, (__int64)v12);
  v2 = v18;
  if ( v17 != 3 )
  {
    v7 = v17;
    v8 = v18;
    v9 = v19;
    v2 = uu_wc::wc(&v7, (__int64)v16, v3, *((__int64 *)&v19 + 1), v4, v5);
    core::ptr::drop_in_place<uu_wc::Inputs>(&v7);
  }
  core::ptr::drop_in_place<uu_wc::Settings>(v16);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v12);
  return v2;
}
