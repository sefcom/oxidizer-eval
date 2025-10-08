void _ZN15linera_exporter5state31BlockExporterStateView_LT_C_GT_10index_blob17h02e642e63947d11aE
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  char local_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar1 = 0x8000000000000014;
  _ZN12linera_views5views8set_view20SetView_LT_C_C_I_GT_6insert17h88f1dd143a5aa299E
            (&local_38,param_2 + 0x58);
  if (local_38 == '\f') {
    uVar1 = 0x800000000000001c;
  }
  else {
    param_1[5] = local_18;
    param_1[3] = local_28;
    param_1[4] = uStack_20;
    param_1[1] = CONCAT71(uStack_37,local_38);
    param_1[2] = uStack_30;
  }
  *param_1 = uVar1;
  return;
}