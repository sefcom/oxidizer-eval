void _ZN15linera_exporter7storage30BlockProcessorStorage_LT_S_GT_4load17h75c9b7919cddd2d9E
               (undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  *(undefined4 *)(param_1 + 0xf) = param_3;
  uVar1 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  param_1[2] = param_4[2];
  uVar1 = param_5[1];
  param_1[7] = *param_5;
  param_1[8] = uVar1;
  *(undefined *)((long)param_1 + 0x7c) = 0;
  return;
}