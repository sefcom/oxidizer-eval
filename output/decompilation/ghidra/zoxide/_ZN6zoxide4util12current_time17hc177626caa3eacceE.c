undefined  [16] _ZN6zoxide4util12current_time17hc177626caa3eacceE(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  ulong local_40;
  int local_38;
  undefined local_30 [12];
  undefined local_20 [24];
  
  local_30 = (*(code *)PTR__ZN3std4time10SystemTime3now17h4fbc1302a9c481f4E_0023b9b0)();
  (*(code *)PTR__ZN3std4time10SystemTime14duration_since17h5eaa6a008fb4c137E_0023b9b8)
            (local_20,local_30,0,0);
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17hc4dc3457e2a22d9bE
            (&local_40,local_20);
  if (local_38 == 1000000000) {
    auVar2._8_8_ = local_40;
    auVar2._0_8_ = 1;
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_40;
  return auVar1 << 0x40;
}