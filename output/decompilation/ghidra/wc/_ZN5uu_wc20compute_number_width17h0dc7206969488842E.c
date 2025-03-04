undefined8 _ZN5uu_wc20compute_number_width17h0dc7206969488842E(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  uint local_a8;
  long local_90;
  
  if (*param_1 == 0) {
    iVar1 = _ZN5uu_wc8Settings14number_enabled17he133dd856851d2dcE(param_2);
    uVar4 = 7;
    if (iVar1 == 1) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
    if ((int)*param_1 == 1) {
      iVar1 = _ZN5uu_wc8Settings14number_enabled17he133dd856851d2dcE(param_2);
      if ((iVar1 != 1) || (param_1[3] != 1)) {
        local_f0 = param_1[2];
        local_e8 = local_f0 + param_1[3] * 0x18;
        plVar2 = (long *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h04bf2145419757f2E
                                   (&local_f0);
        if (plVar2 != (long *)0x0) {
          uVar4 = 1;
          lVar5 = 0;
          do {
            if (*plVar2 == -0x7fffffffffffffff) {
              uVar4 = 7;
            }
            else {
              _ZN3std2fs8metadata17ha24470e461e4d7b2E(&local_e0,plVar2);
              if (local_e0 != 2) {
                lVar3 = local_90;
                if ((local_a8 & 0xf000) != 0x8000) {
                  uVar4 = 7;
                  lVar3 = 0;
                }
                lVar5 = lVar5 + lVar3;
              }
              _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hc7378430642e479dE
                        (local_e0,local_d8);
            }
            plVar2 = (long *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h04bf2145419757f2E
                                       (&local_f0);
          } while (plVar2 != (long *)0x0);
          if (lVar5 != 0) {
            iVar1 = _ZN4core3num9int_log103u6417hf5cf0ae12f20d199E(lVar5);
            uVar4 = _ZN4core3cmp6max_by17h29d87775ffd58160E(iVar1 + 1,uVar4);
            return uVar4;
          }
        }
      }
    }
  }
  return uVar4;
}