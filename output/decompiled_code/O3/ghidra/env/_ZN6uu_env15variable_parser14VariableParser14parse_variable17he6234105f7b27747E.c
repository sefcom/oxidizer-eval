int * __rustcall uu_env::variable_parser::VariableParser::parse_variable(int *param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int local_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lVar3 = *param_2;
  skip_one(&local_38,lVar3);
  if (local_38 == 8) {
    iVar2 = get_current_char(lVar3);
    if (iVar2 == 0x7b) {
      skip_one(&local_38,lVar3);
      if (local_38 != 8) goto LAB_001d5969;
      parse_braced_variable_name(&local_38,lVar3);
      if (local_38 != 8) {
        *param_1 = local_38;
        param_1[1] = iStack_34;
        *(undefined8 *)(param_1 + 2) = uStack_30;
        *(undefined8 *)(param_1 + 4) = uStack_28;
        *(undefined8 *)(param_1 + 6) = uStack_20;
        *(long *)(param_1 + 8) = lStack_18;
        return param_1;
      }
    }
    else {
      if (iVar2 == 0x110000) {
        uVar1 = *(undefined8 *)(lVar3 + 0x20);
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 4,&DAT_00124ee7,0x15);
        *param_1 = 4;
        *(undefined8 *)(param_1 + 2) = uVar1;
        return param_1;
      }
      parse_unbraced_variable_name(&local_38);
      if (local_38 != 8) {
        *(undefined8 *)(param_1 + 6) = uStack_20;
        *(long *)(param_1 + 8) = lStack_18;
        *param_1 = local_38;
        param_1[1] = iStack_34;
        *(undefined8 *)(param_1 + 2) = uStack_30;
        *(undefined8 *)(param_1 + 4) = uStack_28;
        return param_1;
      }
      uStack_20 = 0;
      lStack_18 = lVar3;
    }
    *(undefined8 *)(param_1 + 2) = uStack_30;
    *(undefined8 *)(param_1 + 4) = uStack_28;
    *(undefined8 *)(param_1 + 6) = uStack_20;
    *(long *)(param_1 + 8) = lStack_18;
    *param_1 = 8;
  }
  else {
LAB_001d5969:
    *(long *)(param_1 + 8) = lStack_18;
    *(undefined8 *)(param_1 + 4) = uStack_28;
    *(undefined8 *)(param_1 + 6) = uStack_20;
    *(ulong *)param_1 = CONCAT44(iStack_34,local_38);
    *(undefined8 *)(param_1 + 2) = uStack_30;
  }
  return param_1;
}