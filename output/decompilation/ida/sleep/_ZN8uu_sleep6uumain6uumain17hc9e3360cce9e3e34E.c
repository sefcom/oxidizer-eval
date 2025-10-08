__int64 __fastcall uu_sleep::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // [rsp+8h] [rbp-3B0h] BYREF
  __int64 v8; // [rsp+10h] [rbp-3A8h]
  __int64 v9; // [rsp+18h] [rbp-3A0h]
  __int64 v10; // [rsp+20h] [rbp-398h] BYREF
  _BYTE v11[48]; // [rsp+28h] [rbp-390h]
  __int64 v12; // [rsp+58h] [rbp-360h]
  _QWORD v13[2]; // [rsp+60h] [rbp-358h] BYREF
  __int128 v14; // [rsp+70h] [rbp-348h]
  __int128 v15; // [rsp+80h] [rbp-338h]
  __int64 v16; // [rsp+90h] [rbp-328h]
  __int64 v17; // [rsp+98h] [rbp-320h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-318h]
  __int128 v19; // [rsp+B0h] [rbp-308h]
  __int128 v20; // [rsp+C0h] [rbp-2F8h]
  __int64 v21; // [rsp+D0h] [rbp-2E8h]
  _BYTE dest[736]; // [rsp+D8h] [rbp-2E0h] BYREF

  uu_sleep::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v10, dest, a1, a2);
  if ( __OFSUB__(-v10, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *(_QWORD *)v11,
             dest,
             v2,
             -v10);
  v16 = *(_QWORD *)&v11[40];
  v15 = *(_OWORD *)&v11[24];
  v14 = *(_OWORD *)&v11[8];
  v13[0] = v10;
  v13[1] = *(_QWORD *)v11;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v13);
  clap_builder::parser::error::MatchesError::unwrap(&v10, dest);
  if ( v10 )
  {
    v21 = v12;
    v20 = *(_OWORD *)&v11[32];
    v19 = *(_OWORD *)&v11[16];
    v17 = v10;
    v18 = *(_OWORD *)v11;
    core::iter::traits::iterator::Iterator::collect(&v7, &v17);
    v4 = v8;
    v5 = uu_sleep::sleep(v8, v9);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v7, v4);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v13);
    return v5;
  }
  else
  {
    v6 = uu_sleep::uumain::uumain::{{closure}}();
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v13);
    return v6;
  }
}