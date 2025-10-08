void _ZN15linera_exporter5state31BlockExporterStateView_LT_C_GT_15is_blob_indexed17ha0351f2a50ffe08fE
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x1f0) = param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined8 *)(param_1 + 0x219) = *param_3;
  *(undefined8 *)(param_1 + 0x221) = uVar1;
  *(undefined8 *)(param_1 + 0x229) = uVar2;
  *(undefined8 *)(param_1 + 0x231) = uVar3;
  *(undefined *)(param_1 + 0x239) = *(undefined *)(param_3 + 4);
  *(undefined *)(param_1 + 0x23a) = 0;
  return;
}