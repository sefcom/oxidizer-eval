__int64 __fastcall uu_cp::OverwriteMode::from_matches(__int64 a1)
{
  unsigned int v1; // ebp

  LOBYTE(v1) = 1;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aInteractive, 11LL) )
    goto LABEL_5;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aNoClobber, 10LL) )
  {
    v1 = 0;
LABEL_5:
    uu_cp::ClobberMode::from_matches(a1);
    return v1;
  }
  LOBYTE(v1) = 2;
  return v1;
}
