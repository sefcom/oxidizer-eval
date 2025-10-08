void _ZN15linera_exporter7storage26SharedStorage_LT_C_C_S_GT_9get_block17h2b381fb8607b86d4E
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[0xd] = param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined *)((long)param_1 + 0x71) = 0;
  return;
}