char __fastcall uu_ls::extract_files(__int64 a1)
{
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a1,
                          anon_34cd953b2c946f74a585889e96ce9d7a_15_llvm_16853030268703478466,
                          3LL) )
    return 0;
  else
    return 2
         - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             a1,
             anon_34cd953b2c946f74a585889e96ce9d7a_16_llvm_16853030268703478466,
             10LL);
}
