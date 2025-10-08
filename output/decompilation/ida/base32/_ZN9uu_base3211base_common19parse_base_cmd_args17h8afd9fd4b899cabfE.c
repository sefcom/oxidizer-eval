__int64 __fastcall uu_base32::base_common::parse_base_cmd_args(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx
  _QWORD v7[2]; // [rsp+0h] [rbp-358h] BYREF
  __int128 v8; // [rsp+10h] [rbp-348h]
  __int128 v9; // [rsp+20h] [rbp-338h]
  __int64 v10; // [rsp+30h] [rbp-328h]
  __int64 v11; // [rsp+38h] [rbp-320h] BYREF
  __int64 v12; // [rsp+40h] [rbp-318h]
  __int128 v13; // [rsp+48h] [rbp-310h]
  __int128 v14; // [rsp+58h] [rbp-300h]
  __int64 v15; // [rsp+68h] [rbp-2F0h]
  _BYTE v16[744]; // [rsp+70h] [rbp-2E8h] BYREF

  uu_base32::base_common::base_app(v16, aEncodeDecodeDa, 375LL, aOptionFile, 21LL);
  clap_builder::builder::command::Command::try_get_matches_from(&v11, v16, a2, a3);
  if ( __OFSUB__(-v11, 1LL) )
  {
    result = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
               v12,
               v16,
               v4,
               -v11);
    a1[1] = result;
    a1[2] = v6;
    *a1 = 2LL;
  }
  else
  {
    v10 = v15;
    v9 = v14;
    v8 = v13;
    v7[0] = v11;
    v7[1] = v12;
    ((void (__fastcall *)(_QWORD *, _QWORD *))uu_base32::base_common::Config::from)(a1, v7);
    return core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v7);
  }
  return result;
}