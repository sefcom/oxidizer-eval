void _ZN20fuel_core_e2e_client12test_context6Wallet11transfer_tx17hf1a5fd46012fdccbE
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[0x102] = param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = param_4;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined8 *)((long)param_1 + 0x819) = *param_5;
  *(undefined8 *)((long)param_1 + 0x821) = uVar1;
  *(undefined8 *)((long)param_1 + 0x829) = uVar2;
  *(undefined8 *)((long)param_1 + 0x831) = uVar3;
  *(undefined *)((long)param_1 + 0x839) = *(undefined *)(param_5 + 4);
  *(undefined *)(param_1 + 0x103) = 0;
  return;
}