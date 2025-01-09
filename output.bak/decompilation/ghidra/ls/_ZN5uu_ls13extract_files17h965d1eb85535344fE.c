char __rustcall uu_ls::extract_files(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_1,&anon_902b05dc61fef0513c491a1430f3d56c_7_llvm_11494158254235805547,3);
  if (cVar1 != '\0') {
    return '\0';
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_1,anon_902b05dc61fef0513c491a1430f3d56c_8_llvm_11494158254235805547,10);
  return '\x02' - cVar1;
}