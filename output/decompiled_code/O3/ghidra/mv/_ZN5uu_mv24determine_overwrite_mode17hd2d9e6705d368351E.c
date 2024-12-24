char __rustcall uu_mv::determine_overwrite_mode(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,&DAT_00125f3c,10)
  ;
  if (cVar1 != '\0') {
    return '\0';
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_1,&DAT_00125f31,0xb);
  return '\x02' - cVar1;
}