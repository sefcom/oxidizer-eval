void _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_bigint17hfc488cc1793399d6E
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[3] = param_2[2];
  param_1[4] = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  *param_1 = 0;
  return;
}