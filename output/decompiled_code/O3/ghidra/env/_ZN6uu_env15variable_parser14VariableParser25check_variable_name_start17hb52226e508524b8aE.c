void __rustcall
uu_env::variable_parser::VariableParser::check_variable_name_start(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  int local_54;
  int *local_50;
  code *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined4 **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_54 = get_current_char(param_2);
  if ((local_54 == 0x110000) || (9 < local_54 - 0x30U)) {
    *param_1 = 8;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    local_50 = &local_54;
    local_48 = _<char_as_core::fmt::Display>::fmt;
    local_40 = &PTR_DAT_00249598;
    local_38 = 2;
    local_20 = 0;
    local_30 = &local_50;
    local_28 = 1;
    core::option::Option<T>::map_or_else(param_1 + 4,&local_40);
    *param_1 = 4;
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  return;
}