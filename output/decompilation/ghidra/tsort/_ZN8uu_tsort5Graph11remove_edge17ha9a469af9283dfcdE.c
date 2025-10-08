void _ZN8uu_tsort5Graph11remove_edge17ha9a469af9283dfcdE
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h9c29cb3229f656caE
                    (param_1 + 0x18);
  if (lVar2 == 0) {
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f1dc8)
              (&PTR_s_src_uu_tsort_src_tsort_001eb2f8);
  }
  else {
    _ZN8uu_tsort6remove17h9256c665cc3cd014E(lVar2 + 0x10,param_4,param_5);
    lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h9c29cb3229f656caE
                      (param_1 + 0x18,param_4,param_5);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x28) = *(long *)(lVar2 + 0x28) + -1;
      return;
    }
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f1dc8)
            (&PTR_s_src_uu_tsort_src_tsort_001eb310);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}