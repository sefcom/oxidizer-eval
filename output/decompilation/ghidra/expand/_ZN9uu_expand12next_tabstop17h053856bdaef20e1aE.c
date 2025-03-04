long _ZN9uu_expand12next_tabstop17h053856bdaef20e1aE
               (ulong *param_1,long param_2,ulong param_3,char param_4)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_R12;
  undefined auVar7 [16];
  ulong *local_38;
  ulong *local_30;
  ulong local_28;
  
  local_28 = param_3;
  if (param_4 == '\0') {
LAB_001b29e5:
    if (param_2 == 1) {
      uVar4 = *param_1;
      if (uVar4 != 0) {
LAB_001b29fb:
        if ((param_3 | uVar4) >> 0x20 != 0) {
          return uVar4 - param_3 % uVar4;
        }
        return uVar4 - (param_3 & 0xffffffff) % (uVar4 & 0xffffffff);
      }
      _ZN4core9panicking11panic_const23panic_const_rem_by_zero17h9246b1d1945ea5ddE
                (&PTR_DAT_0021ce70);
LAB_001b2af2:
      ppuVar6 = &PTR_DAT_0021cea0;
LAB_001b2b02:
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(unaff_R12,0,ppuVar6);
    }
    local_30 = param_1 + param_2;
    local_38 = param_1;
    plVar2 = (long *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17hf95545e01abab4a0E
                               (&local_38,&local_28);
    if (plVar2 == (long *)0x0) {
      return 1;
    }
  }
  else {
    unaff_R12 = param_2 + -1;
    if (param_4 == '\x01') {
      auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hc559d2d2cb947946E
                         (unaff_R12,param_1,param_2,&PTR_DAT_0021ce88);
      local_38 = auVar7._0_8_;
      local_30 = local_38 + auVar7._8_8_;
      plVar2 = (long *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h4c63399f73daa1d6E
                                 (&local_38,&local_28);
      if (plVar2 == (long *)0x0) {
        if (param_2 != 0) {
          uVar4 = param_1[param_2 + -1];
          if (uVar4 != 0) goto LAB_001b29fb;
          _ZN4core9panicking11panic_const23panic_const_rem_by_zero17h9246b1d1945ea5ddE
                    (&PTR_DAT_0021ceb8);
          goto LAB_001b29e5;
        }
        goto LAB_001b2af2;
      }
    }
    else {
      auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hc559d2d2cb947946E
                         (unaff_R12,param_1,param_2,&PTR_DAT_0021ced0);
      local_38 = auVar7._0_8_;
      local_30 = local_38 + auVar7._8_8_;
      plVar2 = (long *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h7026d95030402bbdE
                                 (&local_38,&local_28);
      if (plVar2 == (long *)0x0) {
        if (param_2 == 0) {
          ppuVar6 = &PTR_DAT_0021cee8;
          goto LAB_001b2b02;
        }
        if (param_2 == 1) {
                    /* WARNING: Subroutine does not return */
          _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                    (0xffffffffffffffff,1,&PTR_DAT_0021cf00);
        }
        uVar4 = param_1[param_2 + -1];
        if (uVar4 == 0) {
          _ZN4core9panicking11panic_const23panic_const_div_by_zero17haded503194f0bf6eE
                    (&PTR_DAT_0021cf18);
          pcVar1 = (code *)swi(3);
          lVar5 = (*pcVar1)();
          return lVar5;
        }
        param_3 = param_3 - param_1[param_2 + -2];
        if ((param_3 | uVar4) >> 0x20 == 0) {
          uVar3 = (param_3 & 0xffffffff) / (uVar4 & 0xffffffff);
        }
        else {
          uVar3 = param_3 / uVar4;
        }
        lVar5 = (uVar3 + 1) * uVar4;
        goto LAB_001b2ab0;
      }
    }
  }
  lVar5 = *plVar2;
LAB_001b2ab0:
  return lVar5 - param_3;
}