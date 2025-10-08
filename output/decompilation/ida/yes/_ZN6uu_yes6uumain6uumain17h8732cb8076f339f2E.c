// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_yes::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // [rsp+0h] [rbp-398h] BYREF
  __int64 v9; // [rsp+8h] [rbp-390h] BYREF
  __int64 v10; // [rsp+10h] [rbp-388h]
  __int64 v11; // [rsp+18h] [rbp-380h]
  __int64 v12; // [rsp+20h] [rbp-378h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+28h] [rbp-370h]
  __int128 v14; // [rsp+30h] [rbp-368h]
  __int128 v15; // [rsp+40h] [rbp-358h]
  __int64 v16; // [rsp+50h] [rbp-348h]
  _QWORD v17[2]; // [rsp+60h] [rbp-338h] BYREF
  __int128 v18; // [rsp+70h] [rbp-328h]
  __int128 v19; // [rsp+80h] [rbp-318h]
  __int64 v20; // [rsp+90h] [rbp-308h]
  __int128 v21; // [rsp+98h] [rbp-300h] BYREF
  __int64 *v22; // [rsp+A8h] [rbp-2F0h]
  __int128 dest; // [rsp+B0h] [rbp-2E8h] BYREF
  __int64 *v24; // [rsp+C0h] [rbp-2D8h]
  __int64 v25; // [rsp+C8h] [rbp-2D0h]
  __int64 v26; // [rsp+D0h] [rbp-2C8h]

  uu_yes::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v12, &dest, a1, a2);
  if ( __OFSUB__(-v12, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v13,
             &dest,
             v2,
             -v12);
  v20 = v16;
  v19 = v15;
  v18 = v14;
  v17[0] = v12;
  v17[1] = v13;
  v9 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(0x4000LL, 1LL, 1LL, &off_D7578);
  v10 = v4;
  v11 = 0LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v17);
  clap_builder::parser::error::MatchesError::unwrap(&v12, &dest);
  uu_yes::args_into_buffer((__int64)&v9, &v12);
  uu_yes::prepare_buffer(&v9);
  v5 = uu_yes::exec(v10, v11);
  v6 = v5;
  if ( v5 )
  {
    if ( (unsigned __int8)std::io::error::Error::kind(v5) != 11 )
    {
      v8 = v6;
      v12 = (__int64)&v8;
      v13 = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_D7568;
      *((_QWORD *)&dest + 1) = 1LL;
      v26 = 0LL;
      v24 = &v12;
      v25 = 1LL;
      core::option::Option<T>::map_or_else(&v21, &dest);
      LODWORD(v25) = 1;
      dest = v21;
      v24 = v22;
      v7 = alloc::boxed::Box<T>::new(&dest);
      core::ptr::drop_in_place<std::io::error::Error>(v8);
      goto LABEL_8;
    }
    core::ptr::drop_in_place<std::io::error::Error>(v6);
  }
  v7 = 0LL;
LABEL_8:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v9, v10);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v17);
  return v7;
}