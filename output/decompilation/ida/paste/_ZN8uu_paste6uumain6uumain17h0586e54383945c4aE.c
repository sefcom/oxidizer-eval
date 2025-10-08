// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_paste::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int8 flag; // bl
  __int64 v5; // r14
  char v6; // al
  __int64 v7; // r8
  __int64 v8; // rbx
  char **v9; // rdi
  __int128 v10; // [rsp+8h] [rbp-360h] BYREF
  __int128 v11; // [rsp+18h] [rbp-350h]
  __int128 v12; // [rsp+28h] [rbp-340h]
  __int128 v13; // [rsp+38h] [rbp-330h]
  _OWORD v14[3]; // [rsp+48h] [rbp-320h] BYREF
  __int64 v15; // [rsp+78h] [rbp-2F0h]
  __int128 dest; // [rsp+80h] [rbp-2E8h] BYREF
  __int128 v17; // [rsp+90h] [rbp-2D8h]
  __int128 v18; // [rsp+A0h] [rbp-2C8h]
  __int128 v19; // [rsp+B0h] [rbp-2B8h]

  uu_paste::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v10, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v10, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v10 + 1),
             &dest,
             v2,
             -(__int64)v10);
  v15 = v13;
  v14[2] = v12;
  v14[1] = v11;
  v14[0] = v10;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v14, aSerial, 6LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v14);
  v5 = clap_builder::parser::error::MatchesError::unwrap(&dest);
  if ( !v5 )
  {
    v9 = &off_DE230;
    goto LABEL_10;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v14);
  clap_builder::parser::error::MatchesError::unwrap(&v10, &dest);
  if ( !(_QWORD)v10 )
  {
    v9 = &off_DE248;
LABEL_10:
    core::option::unwrap_failed(v9);
  }
  v19 = v13;
  v18 = v12;
  v17 = v11;
  dest = v10;
  core::iter::traits::iterator::Iterator::collect(&v10, &dest);
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v14, aZeroTerminated, 15LL);
  *(_QWORD *)&v17 = v11;
  dest = v10;
  v7 = 10LL;
  if ( v6 )
    v7 = 0LL;
  v8 = uu_paste::paste(&dest, flag, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), v7);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v14);
  return v8;
}