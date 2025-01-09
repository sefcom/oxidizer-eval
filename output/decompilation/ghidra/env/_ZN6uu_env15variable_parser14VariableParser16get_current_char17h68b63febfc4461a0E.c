undefined4 __rustcall uu_env::variable_parser::VariableParser::get_current_char(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 local_10 [2];
  char local_8;
  
  string_parser::StringParser::peek(local_10,param_1);
  uVar1 = 0x110000;
  if (local_8 == '\x02') {
    uVar1 = local_10[0];
  }
  return uVar1;
}