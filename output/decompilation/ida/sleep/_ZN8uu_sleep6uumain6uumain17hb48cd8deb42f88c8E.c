__int64 __fastcall uu_sleep::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE v4[8]; // [rsp+8h] [rbp-3B0h] BYREF
  __int64 v5; // [rsp+10h] [rbp-3A8h]
  __int64 v6; // [rsp+18h] [rbp-3A0h]
  __int64 v7; // [rsp+20h] [rbp-398h] BYREF
  _BYTE v8[48]; // [rsp+28h] [rbp-390h]
  __int64 v9; // [rsp+58h] [rbp-360h]
  _QWORD v10[2]; // [rsp+60h] [rbp-358h] BYREF
  __int128 v11; // [rsp+70h] [rbp-348h]
  __int128 v12; // [rsp+80h] [rbp-338h]
  __int64 v13; // [rsp+90h] [rbp-328h]
  __int64 v14; // [rsp+98h] [rbp-320h] BYREF
  __int128 v15; // [rsp+A0h] [rbp-318h]
  __int128 v16; // [rsp+B0h] [rbp-308h]
  __int128 v17; // [rsp+C0h] [rbp-2F8h]
  __int64 v18; // [rsp+D0h] [rbp-2E8h]
  _BYTE v19[736]; // [rsp+D8h] [rbp-2E0h] BYREF

  uu_sleep::uu_app(v19);
  clap_builder::builder::command::Command::try_get_matches_from(&v7, v19, a1, a2);
  if ( v7 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)v8);
  v13 = *(_QWORD *)&v8[40];
  v12 = *(_OWORD *)&v8[24];
  v11 = *(_OWORD *)&v8[8];
  v10[0] = v7;
  v10[1] = *(_QWORD *)v8;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v19, v10, aNumber, 6LL);
  clap_builder::parser::error::MatchesError::unwrap(&v7, aNumber, 6LL, v19);
  if ( v7 )
  {
    v18 = v9;
    v17 = *(_OWORD *)&v8[32];
    v16 = *(_OWORD *)&v8[16];
    v14 = v7;
    v15 = *(_OWORD *)v8;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v4, &v14);
    v2 = uu_sleep::sleep(v5, v6);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v4);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v10);
  }
  else
  {
    v2 = uu_sleep::uumain::uumain::{{closure}}();
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v10);
  }
  return v2;
}
