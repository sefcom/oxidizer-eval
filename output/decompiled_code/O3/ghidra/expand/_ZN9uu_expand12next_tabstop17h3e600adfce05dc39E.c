long __rustcall uu_expand::next_tabstop(ulong *param_1,long param_2,ulong param_3,char param_4)

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
LAB_001b34f5:
    if (param_2 == 1) {
      uVar4 = *param_1;
      if (uVar4 != 0) {
LAB_001b350b:
        if ((param_3 | uVar4) >> 0x20 != 0) {
          return uVar4 - param_3 % uVar4;
        }
        return uVar4 - (param_3 & 0xffffffff) % (uVar4 & 0xffffffff);
      }
      core::panicking::panic_const::panic_const_rem_by_zero(&PTR_DAT_0021ed50);
LAB_001b3602:
      ppuVar6 = &PTR_DAT_0021ed80;
LAB_001b3612:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(unaff_R12,0,ppuVar6);
    }
    local_30 = param_1 + param_2;
    local_38 = param_1;
    plVar2 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::find
                               (&local_38,&local_28);
    if (plVar2 == (long *)0x0) {
      return 1;
    }
  }
  else {
    unaff_R12 = param_2 + -1;
    if (param_4 == '\x01') {
      auVar7 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                         (unaff_R12,param_1,param_2,&PTR_DAT_0021ed68);
      local_38 = auVar7._0_8_;
      local_30 = local_38 + auVar7._8_8_;
      plVar2 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::find
                                 (&local_38,&local_28);
      if (plVar2 == (long *)0x0) {
        if (param_2 != 0) {
          uVar4 = param_1[param_2 + -1];
          if (uVar4 != 0) goto LAB_001b350b;
          core::panicking::panic_const::panic_const_rem_by_zero(&PTR_DAT_0021ed98);
          goto LAB_001b34f5;
        }
        goto LAB_001b3602;
      }
    }
    else {
      auVar7 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                         (unaff_R12,param_1,param_2,&PTR_DAT_0021edb0);
      local_38 = auVar7._0_8_;
      local_30 = local_38 + auVar7._8_8_;
      plVar2 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::find
                                 (&local_38,&local_28);
      if (plVar2 == (long *)0x0) {
        if (param_2 == 0) {
          ppuVar6 = &PTR_DAT_0021edc8;
          goto LAB_001b3612;
        }
        if (param_2 == 1) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(0xffffffffffffffff,1,&PTR_DAT_0021ede0);
        }
        uVar4 = param_1[param_2 + -1];
        if (uVar4 == 0) {
          core::panicking::panic_const::panic_const_div_by_zero(&PTR_DAT_0021edf8);
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
        goto LAB_001b35c0;
      }
    }
  }
  lVar5 = *plVar2;
LAB_001b35c0:
  return lVar5 - param_3;
}