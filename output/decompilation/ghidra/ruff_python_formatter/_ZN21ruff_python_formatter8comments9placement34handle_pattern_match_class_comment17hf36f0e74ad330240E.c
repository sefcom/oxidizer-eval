void _ZN21ruff_python_formatter8comments9placement34handle_pattern_match_class_comment17hf36f0e74ad330240E
               (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint extraout_EDX;
  
  (*(code *)
    PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
  )(*(undefined8 *)(param_3 + 0x40));
  uVar2 = *(uint *)(param_2 + 8);
  if ((extraout_EDX < uVar2) &&
     (uVar3 = *(uint *)((long)param_2 + 0x44), uVar3 < *(uint *)(param_3 + 0x30))) {
    uVar4 = param_2[1];
    uVar1 = *(undefined *)(param_2 + 9);
    param_1[1] = *param_2;
    param_1[2] = uVar4;
    *(uint *)(param_1 + 3) = uVar2;
    *(uint *)((long)param_1 + 0x1c) = uVar3;
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)((long)param_1 + 0x21) = uVar1;
    *param_1 = 0x60;
    return;
  }
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar10;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}