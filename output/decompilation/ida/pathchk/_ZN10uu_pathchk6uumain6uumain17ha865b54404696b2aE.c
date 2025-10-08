__int64 __fastcall uu_pathchk::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char flag; // bl
  char v5; // r14
  char v6; // al
  __int64 v7; // rcx
  char v8; // al
  char i; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // r12
  __int64 v15; // rbx
  char v16; // [rsp+7h] [rbp-401h] BYREF
  __int64 v17; // [rsp+8h] [rbp-400h] BYREF
  __int64 v18; // [rsp+10h] [rbp-3F8h]
  __int64 v19; // [rsp+18h] [rbp-3F0h]
  __int128 v20; // [rsp+20h] [rbp-3E8h] BYREF
  __int128 v21; // [rsp+30h] [rbp-3D8h]
  __int128 v22; // [rsp+40h] [rbp-3C8h]
  __int128 v23; // [rsp+50h] [rbp-3B8h]
  _OWORD v24[3]; // [rsp+68h] [rbp-3A0h] BYREF
  __int64 v25; // [rsp+98h] [rbp-370h]
  __int128 v26; // [rsp+A0h] [rbp-368h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-358h]
  __int128 v28; // [rsp+B8h] [rbp-350h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-340h]
  _OWORD v30[4]; // [rsp+D0h] [rbp-338h] BYREF
  __int128 dest; // [rsp+110h] [rbp-2F8h] BYREF
  __int64 v32; // [rsp+120h] [rbp-2E8h] BYREF
  int v33; // [rsp+128h] [rbp-2E0h]
  __int16 v34; // [rsp+150h] [rbp-2B8h]

  uu_pathchk::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v20, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v20, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v20 + 1),
             &dest,
             v2,
             -(__int64)v20);
  v25 = v23;
  v24[2] = v22;
  v24[1] = v21;
  v24[0] = v20;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aPosix, 5LL);
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aPosixSpecial, 13LL);
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v24, aPortability, 11LL);
  v7 = (unsigned __int8)(2 * v5);
  if ( v6 )
    v7 = 3LL;
  v8 = 2 * v6 + 1;
  if ( v5 )
    v8 = 3;
  if ( !flag )
    v8 = v7;
  v16 = v8;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v24, 3LL, v7);
  clap_builder::parser::error::MatchesError::unwrap(v30, &dest);
  if ( *(_QWORD *)&v30[0] )
  {
    v23 = v30[3];
    v22 = v30[2];
    v21 = v30[1];
    v20 = v30[0];
    for ( i = 1; ; i &= v14 )
    {
      v10 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v20);
      if ( !v10 )
        break;
      v17 = 0LL;
      v18 = 8LL;
      v19 = 0LL;
      v11 = *(_QWORD *)(v10 + 16);
      <char as core::str::pattern::Pattern>::into_searcher(&v32, *(_QWORD *)(v10 + 8), v11);
      *(_QWORD *)&dest = 0LL;
      *((_QWORD *)&dest + 1) = v11;
      v34 = 1;
      while ( 1 )
      {
        v12 = core::str::iter::SplitInternal<P>::next(&dest);
        if ( !v12 )
          break;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, v12, v13);
        v27 = v29;
        v26 = v28;
        alloc::vec::Vec<T,A>::push(&v17, &v26);
      }
      v14 = uu_pathchk::check_path(&v16, v18, v19);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v17);
    }
    if ( (i & 1) == 0 )
      uucore::mods::error::set_exit_code(1LL);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v24);
    return 0LL;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v20, aMissingOperand, 15LL);
    v32 = v21;
    dest = v20;
    v33 = 1;
    v15 = alloc::boxed::Box<T>::new(&dest);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v24);
    return v15;
  }
}