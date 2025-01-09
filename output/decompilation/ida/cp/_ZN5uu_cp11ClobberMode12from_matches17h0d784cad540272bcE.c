char __fastcall uu_cp::ClobberMode::from_matches(__int64 a1)
{
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aForce, 5LL) )
    return 0;
  else
    return 2 - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aRemoveDestinat, 18LL);
}
