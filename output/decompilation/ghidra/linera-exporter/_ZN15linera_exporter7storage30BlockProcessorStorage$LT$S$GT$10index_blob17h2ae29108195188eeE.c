void _ZN15linera_exporter7storage30BlockProcessorStorage_LT_S_GT_10index_blob17h2ae29108195188eeE
               (long *param_1,long param_2,undefined8 param_3)

{
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  _ZN15linera_exporter5state31BlockExporterStateView_LT_C_GT_10index_blob17h02e642e63947d11aE
            (&local_50,param_2 + 0x3b8);
  if (local_50 == -0x7fffffffffffffe4) {
    _ZN9mini_moka6unsync5cache22Cache_LT_K_C_V_C_S_GT_6insert17hde582dd0133f2816E(param_2,param_3);
    *param_1 = -0x7fffffffffffffe4;
  }
  else {
    param_1[4] = local_30;
    param_1[5] = lStack_28;
    param_1[2] = local_40;
    param_1[3] = lStack_38;
    *param_1 = local_50;
    param_1[1] = lStack_48;
  }
  return;
}