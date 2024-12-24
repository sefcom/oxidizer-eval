__int64 __fastcall uu_yes::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+0h] [rbp-398h] BYREF
  __int64 v7; // [rsp+8h] [rbp-390h] BYREF
  __int64 **v8; // [rsp+10h] [rbp-388h]
  unsigned __int64 v9; // [rsp+18h] [rbp-380h]
  _QWORD v10[2]; // [rsp+20h] [rbp-378h] BYREF
  __int128 v11; // [rsp+30h] [rbp-368h]
  __int128 v12; // [rsp+40h] [rbp-358h]
  __int64 v13; // [rsp+50h] [rbp-348h]
  __int64 *v14; // [rsp+58h] [rbp-340h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+60h] [rbp-338h]
  __int128 v16; // [rsp+68h] [rbp-330h]
  __int128 v17; // [rsp+78h] [rbp-320h]
  __int64 v18; // [rsp+88h] [rbp-310h]
  __int128 v19; // [rsp+98h] [rbp-300h] BYREF
  __int64 **v20; // [rsp+A8h] [rbp-2F0h]
  __int128 dest; // [rsp+B0h] [rbp-2E8h] BYREF
  __int64 **v22; // [rsp+C0h] [rbp-2D8h]
  __int64 v23; // [rsp+C8h] [rbp-2D0h]
  __int64 v24; // [rsp+D0h] [rbp-2C8h]

  uu_yes::uu_app((char *)&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v14, &dest, a1, a2);
  if ( v14 == (__int64 *)0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
  v13 = v18;
  v12 = v17;
  v11 = v16;
  v10[0] = v14;
  v10[1] = v15;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&dest, 0x4000LL, 0LL);
  if ( (_QWORD)dest )
    alloc::raw_vec::handle_error(*((_QWORD *)&dest + 1), v22);
  v7 = *((_QWORD *)&dest + 1);
  v8 = v22;
  v9 = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    &dest,
    v10,
    "STRINGstandard output: USimpleErrormessage",
    6LL);
  clap_builder::parser::error::MatchesError::unwrap(&v14, "STRINGstandard output: USimpleErrormessage", 6LL, &dest);
  uu_yes::args_into_buffer((__int64)&v7, &v14);
  uu_yes::prepare_buffer((__int64)&v7);
  v3 = uu_yes::exec((__int64)v8, v9);
  v4 = v3;
  if ( v3 )
  {
    if ( (unsigned __int8)std::io::error::Error::kind(v3) == 11 )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v4);
      v2 = 0LL;
    }
    else
    {
      v6 = v4;
      v14 = &v6;
      v15 = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_1078F8;
      *((_QWORD *)&dest + 1) = 1LL;
      v24 = 0LL;
      v22 = &v14;
      v23 = 1LL;
      core::option::Option<T>::map_or_else(&v19, &dest);
      LODWORD(v23) = 1;
      dest = v19;
      v22 = v20;
      v2 = alloc::boxed::Box<T>::new(&dest);
      core::ptr::drop_in_place<std::io::error::Error>(v6);
    }
  }
  else
  {
    v2 = 0LL;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v7);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v10);
  return v2;
}
