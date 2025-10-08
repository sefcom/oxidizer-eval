__int64 __fastcall uu_ls::extract_color(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  _BYTE v6[72]; // [rsp+0h] [rbp-48h] BYREF

  if ( !(unsigned __int8)uu_ls::is_color_compatible_term() )
    return 0;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v6, a1, aColor, 5LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aColor, 5LL, v6);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    v4 = *(_QWORD *)(v2 + 16);
    LOBYTE(v1) = 1;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, 1LL, 0LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aAlways, 6LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aYes, 3LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aForce, 5LL) )
    {
      return v1;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aAuto, 4LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aTty, 3LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aIfTty, 6LL) )
    {
      std::io::stdio::stdout();
      return std::sys::io::is_terminal::isatty::is_terminal();
    }
    return 0;
  }
  return clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, aColor, 5LL);
}