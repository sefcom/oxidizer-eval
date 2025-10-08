void _ZN21ruff_python_formatter8comments9placement47handle_leading_function_with_decorators_comment17hd641c7b4e7b2916eE
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  long lVar9;
  bool bVar10;
  
  if (param_2[2] == 0x5e) {
    lVar9 = param_2[4];
    if (lVar9 == 0x5e) goto LAB_00402e65;
    bVar10 = false;
  }
  else {
    bVar10 = (int)param_2[2] == 0x56;
    lVar9 = param_2[4];
    if (lVar9 == 0x5e) goto LAB_00402e65;
  }
  if ((int)lVar9 == 0x4f) {
    bVar8 = *(byte *)(param_2 + 9);
    if ((bVar10 & bVar8) != 0) {
LAB_00402e9e:
      uVar1 = param_2[1];
      param_1[1] = *param_2;
      param_1[2] = uVar1;
      param_1[3] = param_2[8];
      *(undefined *)(param_1 + 4) = 0;
      *(byte *)((long)param_1 + 0x21) = bVar8;
      *param_1 = 0x60;
      return;
    }
  }
  else {
    bVar8 = *(byte *)(param_2 + 9);
    if ((bVar10 & (int)lVar9 == 0x58 & bVar8) == 1) goto LAB_00402e9e;
  }
LAB_00402e65:
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}