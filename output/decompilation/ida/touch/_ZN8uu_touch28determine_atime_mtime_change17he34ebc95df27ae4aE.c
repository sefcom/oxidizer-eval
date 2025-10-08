char __fastcall uu_touch::determine_atime_mtime_change(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bp
  char result; // al
  char flag; // cl
  _BYTE v5[64]; // [rsp+8h] [rbp-40h] BYREF

  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, aTime, 4LL)
    || (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v5, a1),
        (v1 = clap_builder::parser::error::MatchesError::unwrap(v5)) == 0) )
  {
    v2 = 2;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aAccess, 6LL) )
    {
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aModification, 12LL);
      result = 2;
      if ( !flag )
        return result;
      return 1;
    }
LABEL_8:
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aModification, 12LL)
      || v2 != 2 && (v2 & 1) == 0 )
    {
      return 2;
    }
    return 0;
  }
  v2 = uu_touch::determine_atime_mtime_change::{{closure}}(*(_QWORD *)(v1 + 8), *(_QWORD *)(v1 + 16));
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aAccess, 6LL) )
    goto LABEL_8;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aModification, 12LL) )
    return !v2;
  result = 1;
  if ( v2 )
    return 2;
  return result;
}