void __rustcall
uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined auVar3 [16];
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = *(long *)(param_2 + 0x20);
  check_variable_name_start(&local_48);
  if ((int)local_48 == 8) {
    uVar2 = get_current_char(param_2);
    while ((uVar2 != 0x110000 &&
           (((uVar2 == 0x5f || (uVar2 - 0x30 < 10)) || ((uVar2 & 0x1fffdf) - 0x41 < 0x1a))))) {
      skip_one(&local_48,param_2);
      if ((int)local_48 != 8) goto LAB_001d5554;
      uVar2 = get_current_char(param_2);
    }
    lStack_40 = *(long *)(param_2 + 0x20);
    if (lStack_40 == lVar1) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 2,"Missing variable name",0x15);
      *(undefined4 *)param_1 = 4;
      param_1[1] = lVar1;
    }
    else {
      local_48 = lVar1;
      auVar3 = string_parser::StringParser::substring(param_2,&local_48);
      *(undefined (*) [16])(param_1 + 1) = auVar3;
      *(undefined4 *)param_1 = 8;
    }
  }
  else {
LAB_001d5554:
    param_1[4] = local_28;
    param_1[2] = local_38;
    param_1[3] = lStack_30;
    *param_1 = local_48;
    param_1[1] = lStack_40;
  }
  return;
}