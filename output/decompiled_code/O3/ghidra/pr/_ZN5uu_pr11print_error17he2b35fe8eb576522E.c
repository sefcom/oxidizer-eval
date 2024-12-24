void __rustcall uu_pr::print_error(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_48;
  undefined *local_40;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = param_2;
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_1,&DAT_00166c60,0x10);
  if (cVar1 == '\0') {
    local_38 = _<&T_as_core::fmt::Display>::fmt;
    local_30 = &DAT_00408840;
    local_28 = 2;
    local_10 = 0;
    local_20 = &local_40;
    local_18 = 1;
    local_40 = (undefined *)&local_48;
    std::io::stdio::_eprint(&local_30);
  }
  return;
}