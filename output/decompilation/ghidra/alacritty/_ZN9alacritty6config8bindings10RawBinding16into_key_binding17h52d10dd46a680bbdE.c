void _ZN9alacritty6config8bindings10RawBinding16into_key_binding17h52d10dd46a680bbdE
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(short *)(param_2 + 6) == 5) {
    uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he9b99f1ca761bae9E(param_2);
    param_1[1] = uVar12;
    *param_1 = 0x8000000000000035;
    return;
  }
  uVar12 = param_2[10];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  uVar2 = *(undefined4 *)((long)param_2 + 0x5c);
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  uVar10 = param_2[4];
  uVar11 = param_2[5];
  uVar1 = *(undefined2 *)(param_2 + 0xc);
  *param_1 = *param_2;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  param_1[4] = uVar10;
  param_1[5] = uVar11;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  param_1[10] = uVar12;
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  *(undefined2 *)((long)param_1 + 0x5c) = uVar1;
  return;
}