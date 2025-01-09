char __rustcall uu_cp::ClobberMode::from_matches(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"force",5);
  if (cVar1 != '\0') {
    return '\0';
  }
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_1,"remove-destination",0x12);
  return '\x02' - cVar1;
}