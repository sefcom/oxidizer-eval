__int64 __fastcall uu_ls::extract_indicator_style(__int64 a1)
{
  unsigned int flag; // ebp
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  _BYTE v9[72]; // [rsp+0h] [rbp-48h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v9, a1, &unk_D29CF, 15LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(&unk_D29CF, 15LL, v9);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    v4 = *(_QWORD *)(v2 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aNone, 4LL) )
    {
      LOBYTE(flag) = 2;
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aFileType, 9LL) )
      {
        LOBYTE(flag) = 3;
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aClassify, 8LL) )
          return (unsigned int)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aSlash, 5LL);
      }
      return flag;
    }
    return 0;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v9, a1, aClassify, 8LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aClassify, 8LL, v9);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aNever, 5LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aNo, 2LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aNone, 4LL) )
    {
      LOBYTE(flag) = 3;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aAlways, 6LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aYes, 3LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aForce, 5LL) )
      {
        return flag;
      }
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aAuto, 4LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aTty, 3LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aIfTty, 6LL) )
      {
        std::io::stdio::stdout();
        return 3 * (unsigned int)((unsigned __int8)std::sys::io::is_terminal::isatty::is_terminal() != 0);
      }
    }
    return 0;
  }
  LOBYTE(flag) = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aP, 1LL) )
  {
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aFileType, 9LL);
    LOBYTE(flag) = 2 * flag;
  }
  return flag;
}