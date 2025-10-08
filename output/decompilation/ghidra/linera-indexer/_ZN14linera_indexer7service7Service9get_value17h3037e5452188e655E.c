void _ZN14linera_indexer7service7Service9get_value17h3037e5452188e655E
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[0x71] = param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined8 *)((long)param_1 + 0x3b2) = *param_4;
  *(undefined8 *)((long)param_1 + 0x3ba) = uVar1;
  *(undefined8 *)((long)param_1 + 0x3c2) = uVar2;
  *(undefined8 *)((long)param_1 + 0x3ca) = uVar3;
  *(undefined *)((long)param_1 + 0x3d2) = *(undefined *)(param_4 + 4);
  *(undefined *)((long)param_1 + 0x3b1) = 0;
  return;
}