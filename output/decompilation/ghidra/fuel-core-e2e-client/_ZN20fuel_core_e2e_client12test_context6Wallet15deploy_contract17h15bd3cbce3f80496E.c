void _ZN20fuel_core_e2e_client12test_context6Wallet15deploy_contract17h15bd3cbce3f80496E
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x90) = param_2;
  (*(code *)PTR_memcpy_012b6040)(param_1,param_3,0x90);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined8 *)(param_1 + 0x98) = *param_4;
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined *)(param_1 + 400) = 0;
  return;
}