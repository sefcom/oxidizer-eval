void _ZN15linera_exporter7storage26SharedStorage_LT_C_C_S_GT_8get_blob17h1ba4c864b04c69f1E
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined8 *)(param_1 + 0x52) = *param_3;
  *(undefined8 *)(param_1 + 0x5a) = uVar1;
  *(undefined8 *)(param_1 + 0x62) = uVar2;
  *(undefined8 *)(param_1 + 0x6a) = uVar3;
  *(undefined *)(param_1 + 0x72) = *(undefined *)(param_3 + 4);
  *(undefined *)(param_1 + 0x73) = 0;
  return;
}