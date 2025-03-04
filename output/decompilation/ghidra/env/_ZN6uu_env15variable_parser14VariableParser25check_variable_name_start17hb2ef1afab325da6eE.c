void _ZN6uu_env15variable_parser14VariableParser25check_variable_name_start17hb2ef1afab325da6eE
               (undefined4 *param_1,long param_2)

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
  
  local_54 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h68b63febfc4461a0E
                       (param_2);
  if ((local_54 == 0x110000) || (9 < local_54 - 0x30U)) {
    *param_1 = 8;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    local_50 = &local_54;
    local_48 = _ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17hfe75cd72bcd9c522E;
    local_40 = &PTR_s_Unexpected_character______expect_00248e28;
    local_38 = 2;
    local_20 = 0;
    local_30 = &local_50;
    local_28 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha7b9eb55e1cbc84dE(param_1 + 4,&local_40);
    *param_1 = 4;
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  return;
}