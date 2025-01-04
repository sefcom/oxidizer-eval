        __int64 a7)
{
  __int64 v8; // rdx
  _QWORD v10[2]; // [rsp+0h] [rbp-358h] BYREF
  __int128 v11; // [rsp+10h] [rbp-348h]
  __int128 v12; // [rsp+20h] [rbp-338h]
  __int64 v13; // [rsp+30h] [rbp-328h]
  __int64 v14; // [rsp+38h] [rbp-320h] BYREF
  __int64 v15; // [rsp+40h] [rbp-318h]
  __int128 v16; // [rsp+48h] [rbp-310h]
  __int128 v17; // [rsp+58h] [rbp-300h]
  __int64 v18; // [rsp+68h] [rbp-2F0h]
  _BYTE v19[744]; // [rsp+70h] [rbp-2E8h] BYREF

  uu_base32::base_common::base_app(v19, a4, a5, a6, a7);
  clap_builder::builder::command::Command::try_get_matches_from(&v14, v19, a2, a3);
  if ( v14 == 0x8000000000000000LL )
  {
    a1[1] = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
    a1[2] = v8;
    *a1 = 2LL;
  }
  else
  {
    v13 = v18;
    v12 = v17;
    v11 = v16;
    v10[0] = v14;
    v10[1] = v15;
    ((void (__fastcall *)(_QWORD *, _QWORD *))uu_base32::base_common::Config::from)(a1, v10);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v10);
  }
  return a1;
}
