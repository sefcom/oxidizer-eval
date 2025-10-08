char __fastcall uu_ls::extract_files(__int64 a1)
{
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aAll, 3LL) )
    return 0;
  else
    return 2 - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aAlmostAll, 10LL);
}