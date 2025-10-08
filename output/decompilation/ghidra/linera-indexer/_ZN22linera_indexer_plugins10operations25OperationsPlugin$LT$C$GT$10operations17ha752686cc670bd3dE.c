void _ZN22linera_indexer_plugins10operations25OperationsPlugin_LT_C_GT_10operations17ha752686cc670bd3dE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x12) = param_3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  uVar4 = param_4[4];
  uVar5 = param_4[5];
  *(undefined8 *)(param_1 + 2) = *param_4;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  *(undefined8 *)(param_1 + 0xe) = param_4[6];
  *param_1 = param_5;
  param_1[1] = param_6;
  *(undefined *)(param_1 + 0x34) = 0;
  return;
}