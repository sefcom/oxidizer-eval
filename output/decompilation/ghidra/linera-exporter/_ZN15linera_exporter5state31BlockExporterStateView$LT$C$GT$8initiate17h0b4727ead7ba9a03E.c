void _ZN15linera_exporter5state31BlockExporterStateView_LT_C_GT_8initiate17h0b4727ead7ba9a03E
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  (*(code *)PTR_memcpy_01592358)(param_1,param_2,0x90);
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x90) = *param_3;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = param_3[2];
  *(undefined *)(param_1 + 0x850) = 0;
  return;
}