__int64 __fastcall uu_paste::uumain::uumain(__int64 a1, __int64 a2)
{
  unsigned __int8 flag; // bl
  __int64 v4; // r14
  char v5; // al
  __int64 v6; // r8
  __int64 v7; // rbx
  char **v8; // rdi
  __int128 v9; // [rsp+8h] [rbp-3A0h] BYREF
  __int128 v10; // [rsp+18h] [rbp-390h]
  __int128 v11; // [rsp+28h] [rbp-380h]
  __int128 v12; // [rsp+38h] [rbp-370h]
  _OWORD v13[3]; // [rsp+48h] [rbp-360h] BYREF
  __int64 v14; // [rsp+78h] [rbp-330h]
  _OWORD v15[4]; // [rsp+80h] [rbp-328h] BYREF
  __int128 v16; // [rsp+C0h] [rbp-2E8h] BYREF
  __int64 v17; // [rsp+D0h] [rbp-2D8h]

  uu_paste::uu_app(&v16);
  clap_builder::builder::command::Command::try_get_matches_from(&v9, &v16, a1, a2);
  if ( (_QWORD)v9 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v9 + 1));
  v14 = v12;
  v13[2] = v11;
  v13[1] = v10;
  v13[0] = v9;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v13, aSerial, 6LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v16, v13, aDelimiters, 10LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aDelimiters, 10LL, &v16);
  if ( !v4 )
  {
    v8 = &off_111E08;
    goto LABEL_10;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, v13, aFile, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(&v9, aFile, 4LL, &v16);
  if ( !(_QWORD)v9 )
  {
    v8 = &off_111E20;
LABEL_10:
    core::option::unwrap_failed(v8);
  }
  v15[3] = v12;
  v15[2] = v11;
  v15[1] = v10;
  v15[0] = v9;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9, v15);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v13, aZeroTerminated, 15LL);
  v17 = v10;
  v16 = v9;
  v6 = 10LL;
  if ( v5 )
    v6 = 0LL;
  v7 = uu_paste::paste(&v16, flag, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16), v6);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v13);
  return v7;
}
