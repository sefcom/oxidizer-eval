ulong _ZN18alacritty_terminal4grid13Grid_LT_T_GT_11scroll_down17hcd50b72e74cc8cd9E
                (long param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  
  uVar5 = (ulong)(uint)(param_3 - param_2);
  uVar11 = (uint)param_4;
  if ((int)uVar11 < param_3 - param_2) {
    if (*(long *)(param_1 + 0xa8) == 0) {
      iVar9 = *(int *)(param_1 + 0x98);
      if (param_3 < iVar9) {
        do {
          iVar8 = param_3 + 1;
          _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_4swap17hbe868b4d06836c04E
                    (param_1,param_3,param_3 - uVar11);
          param_3 = iVar8;
        } while (iVar9 != iVar8);
      }
      uVar3 = *(ulong *)(param_1 + 0x10);
      if (uVar3 == 0) {
        (*(code *)
          PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_009de548)
                  (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009772d8);
        pcVar4 = (code *)swi(3);
        uVar5 = (*pcVar4)();
        return uVar5;
      }
      uVar7 = *(long *)(param_1 + 0x18) + param_4;
      if ((uVar7 | uVar3) >> 0x20 == 0) {
        uVar5 = (uVar7 & 0xffffffff) / (uVar3 & 0xffffffff);
        *(ulong *)(param_1 + 0x18) = (uVar7 & 0xffffffff) % (uVar3 & 0xffffffff);
      }
      else {
        uVar5 = uVar7 / uVar3;
        *(ulong *)(param_1 + 0x18) = uVar7 % uVar3;
      }
      if (param_4 != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x4c);
        lVar10 = 0;
        do {
          lVar1 = lVar10 + 1;
          uVar6 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                            (param_1,lVar10,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009772f0);
          uVar5 = _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_5reset17h7a49f1c8f619314fE
                            (uVar6,uVar2);
          lVar10 = lVar1;
        } while (param_4 != lVar1);
      }
      if (0 < param_2) {
        iVar9 = 0;
        do {
          iVar8 = iVar9 + 1;
          uVar5 = _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_4swap17hbe868b4d06836c04E
                            (param_1,iVar9,uVar11 + iVar9);
          iVar9 = iVar8;
        } while (param_2 != iVar8);
      }
    }
    else {
      iVar9 = param_2 + uVar11;
      if (iVar9 < param_3) {
        do {
          iVar8 = ~uVar11 + param_3;
          param_3 = param_3 + -1;
          uVar5 = _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_4swap17hbe868b4d06836c04E
                            (param_1,param_3,iVar8);
        } while (iVar9 < param_3);
      }
      if (param_2 < iVar9) {
        uVar2 = *(undefined4 *)(param_1 + 0x4c);
        do {
          iVar9 = iVar9 + -1;
          uVar6 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                            (param_1,iVar9,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977308);
          uVar5 = _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_5reset17h7a49f1c8f619314fE
                            (uVar6,uVar2);
        } while (param_2 < iVar9);
      }
    }
  }
  else if (param_2 < param_3) {
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    do {
      iVar9 = param_2 + 1;
      uVar6 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                        (param_1,param_2,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977320);
      uVar5 = _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_5reset17h7a49f1c8f619314fE(uVar6,uVar2);
      param_2 = iVar9;
    } while (param_3 != iVar9);
  }
  return uVar5;
}