char __fastcall uu_ls::extract_files(__int64 a1)
{
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a1,
                          anon_902b05dc61fef0513c491a1430f3d56c_7_llvm_11494158254235805547,
                          3LL) )
    return 0;
  else
    return 2
         - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             a1,
             anon_902b05dc61fef0513c491a1430f3d56c_8_llvm_11494158254235805547,
             10LL);
}
