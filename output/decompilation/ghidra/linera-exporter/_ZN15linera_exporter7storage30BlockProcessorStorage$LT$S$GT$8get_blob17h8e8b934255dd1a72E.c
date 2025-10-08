void _ZN15linera_exporter7storage30BlockProcessorStorage_LT_S_GT_8get_blob17h8e8b934255dd1a72E
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 200) = param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined8 *)(param_1 + 0xd0) = *param_3;
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(undefined *)(param_1 + 0xf0) = *(undefined *)(param_3 + 4);
  *(undefined *)(param_1 + 0xf1) = 0;
  return;
}