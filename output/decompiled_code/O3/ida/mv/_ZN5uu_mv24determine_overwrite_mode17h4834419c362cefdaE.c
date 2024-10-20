char __fastcall uu_mv::determine_overwrite_mode(__int64 a1)
{
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aNoClobber, 10LL) )
    return 0;
  else
    return 2 - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aInteractive, 11LL);
}
