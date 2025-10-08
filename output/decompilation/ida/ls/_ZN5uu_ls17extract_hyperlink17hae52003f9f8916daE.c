__int64 __fastcall uu_ls::extract_hyperlink(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  char v6; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v7[3]; // [rsp+10h] [rbp-48h] BYREF
  __int128 v8; // [rsp+28h] [rbp-30h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v7, a1, aHyperlink, 9LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aHyperlink, 9LL, v7);
  if ( !v2 )
    core::option::unwrap_failed(&off_286870);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  LOBYTE(v1) = 1;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aAlways, 6LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aYes, 3LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aForce, 5LL) )
  {
    return v1;
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aAuto, 4LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aTty, 3LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aIfTty, 6LL) )
  {
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aNever, 5LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aNo, 2LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aNone, 4LL) )
    {
      v7[0] = &off_286860;
      v7[1] = 1LL;
      v7[2] = &v6;
      v8 = 0LL;
      core::panicking::panic_fmt(v7, &off_286888);
    }
    return 0;
  }
  std::io::stdio::stdout();
  return std::sys::io::is_terminal::isatty::is_terminal();
}