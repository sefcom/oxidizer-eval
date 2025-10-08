void _ZN8uu_tsort5Graph8add_edge17h4310416a4e0d07eaE
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  
  _ZN8uu_tsort5Graph8add_node17hfb6ef72a6390e4a5E();
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfd999d1d0287ce02E
                    (param_2,param_3,param_4,param_5);
  if (cVar2 != '\0') {
    return;
  }
  _ZN8uu_tsort5Graph8add_node17hfb6ef72a6390e4a5E(param_1,param_4,param_5);
  lVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h9c29cb3229f656caE
                    (param_1 + 0x18,param_2,param_3);
  if (lVar3 == 0) {
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f1dc8)
              (&PTR_s_src_uu_tsort_src_tsort_001eb2c8);
  }
  else {
    _ZN8uu_tsort4Node13add_successor17hb6395ae5c1a566e9E(lVar3 + 0x10,param_4,param_5);
    lVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_13get_inner_mut17h9c29cb3229f656caE
                      (param_1 + 0x18,param_4,param_5);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x28) = *(long *)(lVar3 + 0x28) + 1;
      return;
    }
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f1dc8)
            (&PTR_s_src_uu_tsort_src_tsort_001eb2e0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}