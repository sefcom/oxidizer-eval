__int64 __fastcall uu_cp::CopyMode::from_matches(__int64 a1)
{
  unsigned int flag; // ebp
  _BYTE v3[72]; // [rsp+0h] [rbp-48h] BYREF

  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aLink, 4LL) )
  {
    return 0;
  }
  else
  {
    LOBYTE(flag) = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aSymbolicLink, 13LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        v3,
        a1,
        anon_ed76c72955b0392b1034724163f330f4_106_llvm_5630693844464734936,
        6LL);
      LOBYTE(flag) = 3;
      if ( !clap_builder::parser::error::MatchesError::unwrap(
              anon_ed76c72955b0392b1034724163f330f4_106_llvm_5630693844464734936,
              6LL,
              v3)
        && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               a1,
                               anon_ed76c72955b0392b1034724163f330f4_107_llvm_5630693844464734936,
                               1LL) )
      {
        LOBYTE(flag) = 2;
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                a1,
                                aAttributesOnly,
                                15LL) )
        {
          flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aRemoveDestinat, 18LL);
          LOBYTE(flag) = 2 * (flag ^ 1) + 2;
        }
      }
    }
  }
  return flag;
}
