void _ZN21ruff_python_formatter8comments9placement44handle_leading_class_with_decorators_comment17hfc063ea7137b8fbeE
               (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((((*(char *)(param_2 + 9) == '\x01') &&
       (uVar1 = *(uint *)(param_2 + 8), uVar1 < *(uint *)(param_3 + 0x30))) &&
      (*(long *)(param_3 + 0x10) != 0)) &&
     (*(uint *)(*(long *)(param_3 + 8) + -0xc + *(long *)(param_3 + 0x10) * 0x60) < uVar1)) {
    uVar2 = *(undefined4 *)((long)param_2 + 0x44);
    param_1[1] = 3;
    param_1[2] = param_3;
    *(uint *)(param_1 + 3) = uVar1;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
    *(undefined2 *)(param_1 + 4) = 0x100;
    *param_1 = 0x60;
    return;
  }
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar9;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}