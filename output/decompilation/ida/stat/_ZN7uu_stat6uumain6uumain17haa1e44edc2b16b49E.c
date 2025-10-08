// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_stat::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rbx
  unsigned int v5; // eax
  _QWORD v6[2]; // [rsp+8h] [rbp-620h] BYREF
  __int128 v7; // [rsp+18h] [rbp-610h]
  __int128 v8; // [rsp+28h] [rbp-600h]
  __int64 v9; // [rsp+38h] [rbp-5F0h]
  __int64 v10; // [rsp+40h] [rbp-5E8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-5E0h]
  __int128 v12; // [rsp+50h] [rbp-5D8h]
  __int128 v13; // [rsp+60h] [rbp-5C8h]
  __int64 v14; // [rsp+70h] [rbp-5B8h]
  _QWORD dest[3]; // [rsp+78h] [rbp-5B0h] BYREF
  __int128 v16; // [rsp+90h] [rbp-598h]
  __int128 v17; // [rsp+A0h] [rbp-588h]
  __int128 v18; // [rsp+B0h] [rbp-578h]
  __int128 v19; // [rsp+C0h] [rbp-568h]
  __int128 v20; // [rsp+D0h] [rbp-558h]
  __int64 src; // [rsp+340h] [rbp-2E8h] BYREF
  __int64 v22; // [rsp+348h] [rbp-2E0h]
  __int64 v23; // [rsp+350h] [rbp-2D8h]
  __int128 v24; // [rsp+358h] [rbp-2D0h]
  __int128 v25; // [rsp+368h] [rbp-2C0h]
  __int128 v26; // [rsp+378h] [rbp-2B0h]
  __int128 v27; // [rsp+388h] [rbp-2A0h]
  __int128 v28; // [rsp+398h] [rbp-290h]

  uu_stat::uu_app(&src);
  clap_builder::builder::command::Command::after_help(dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v10, dest, a1, a2);
  if ( __OFSUB__(-v10, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v11,
             dest,
             v2,
             -v10);
  v9 = v14;
  v8 = v13;
  v7 = v12;
  v6[0] = v10;
  v6[1] = v11;
  uu_stat::Stater::new(&src, v6);
  v4 = v22;
  if ( src != 0x8000000000000000LL )
  {
    v20 = v28;
    v19 = v27;
    v18 = v26;
    v17 = v25;
    v16 = v24;
    dest[0] = src;
    dest[1] = v22;
    dest[2] = v23;
    v5 = uu_stat::Stater::exec(dest);
    if ( v5 )
      v4 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    else
      v4 = 0LL;
    core::ptr::drop_in_place<uu_stat::Stater>(dest);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v6);
  return v4;
}