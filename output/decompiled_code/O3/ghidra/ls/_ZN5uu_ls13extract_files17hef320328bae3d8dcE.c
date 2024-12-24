char __rustcall uu_ls::extract_files(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"all",3);
  if (cVar1 != '\0') {
    return '\0';
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"almost-all",10);
  return '\x02' - cVar1;
}