void _ZN21ruff_python_formatter8comments9placement30handle_trailing_module_comment17h61c2f4e57ae7d9d7E
               (undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  
  if ((*(int *)(param_3 + 2) == 0x5e) && (param_3[4] == 0x5e)) {
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar1 = *(undefined *)(param_3 + 9);
      auVar9 = _ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Stmt_GT__GT_4from17h095e0f7c3429d85dE
                         (*(long *)(param_2 + 0x10) * 0x80 + *(long *)(param_2 + 8) + -0x80);
      *(undefined (*) [16])(param_1 + 1) = auVar9;
      param_1[3] = param_3[8];
      *(undefined *)(param_1 + 4) = 0;
      *(undefined *)((long)param_1 + 0x21) = uVar1;
      *param_1 = 0x5f;
      return;
    }
    uVar2 = param_3[1];
    uVar1 = *(undefined *)(param_3 + 9);
    param_1[1] = *param_3;
    param_1[2] = uVar2;
    param_1[3] = param_3[8];
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)((long)param_1 + 0x21) = uVar1;
    *param_1 = 0x5e;
    return;
  }
  uVar2 = param_3[9];
  param_1[8] = param_3[8];
  param_1[9] = uVar2;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[7];
  param_1[6] = param_3[6];
  param_1[7] = uVar8;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}