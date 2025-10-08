void _ZN20fuel_core_e2e_client12test_context6Wallet9owns_coin17h0ab31b4875dfe45eE
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[0x14] = *param_3;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_3 + 4);
  *(undefined *)((long)param_1 + 0xe4) = 0;
  return;
}