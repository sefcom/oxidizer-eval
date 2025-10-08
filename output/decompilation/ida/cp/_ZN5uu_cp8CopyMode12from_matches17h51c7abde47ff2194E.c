__int64 __fastcall uu_cp::CopyMode::from_matches(__int64 a1)
{
  unsigned int flag; // ebp
  __int64 v2; // r15
  _BYTE v4[80]; // [rsp+8h] [rbp-50h] BYREF

  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aLink, 4LL) )
  {
    return 0;
  }
  else
  {
    LOBYTE(flag) = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aSymbolicLink, 13LL) )
    {
      v2 = (__int64)*(&uucore::features::update_control::arguments::OPT_UPDATE + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v4, a1, aUpdate, v2);
      LOBYTE(flag) = 3;
      if ( !clap_builder::parser::error::MatchesError::unwrap(aUpdate, v2, v4)
        && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               a1,
                               aU,
                               uucore::features::update_control::arguments::OPT_UPDATE_NO_ARG[1]) )
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