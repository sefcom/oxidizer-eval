int * _ZN6uu_env15variable_parser14VariableParser14parse_variable17h7989a880208e7e71E
                (int *param_1,long *param_2)

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
  _ZN6uu_env15variable_parser14VariableParser8skip_one17hc689cd00633feaf8E(&local_38,lVar3);
  if (local_38 == 0xc) {
    iVar2 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h2461897ac15abcf2E(lVar3)
    ;
    if (iVar2 == 0x7b) {
      _ZN6uu_env15variable_parser14VariableParser8skip_one17hc689cd00633feaf8E(&local_38,lVar3);
      if (local_38 != 0xc) goto LAB_00171f50;
      _ZN6uu_env15variable_parser14VariableParser26parse_braced_variable_name17h5ed15cbe2773317aE
                (&local_38,lVar3);
      if (local_38 != 0xc) {
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
        *param_1 = 5;
        *(undefined8 *)(param_1 + 2) = uVar1;
        return param_1;
      }
      _ZN6uu_env15variable_parser14VariableParser28parse_unbraced_variable_name17hac50d30206de8963E
                (&local_38);
      if (local_38 != 0xc) {
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
    *param_1 = 0xc;
  }
  else {
LAB_00171f50:
    *(long *)(param_1 + 8) = lStack_18;
    *(undefined8 *)(param_1 + 4) = uStack_28;
    *(undefined8 *)(param_1 + 6) = uStack_20;
    *(ulong *)param_1 = CONCAT44(iStack_34,local_38);
    *(undefined8 *)(param_1 + 2) = uStack_30;
  }
  return param_1;
}