void _ZN18alacritty_terminal4grid13Grid_LT_T_GT_9scroll_up17hf31756b0f8886f88E
               (long param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = (uint)param_4;
  if (param_2 == 0 || (int)uVar8 < param_3 - param_2) {
    if (*(long *)(param_1 + 0xa0) != 0) {
      uVar5 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E
                        (*(long *)(param_1 + 0xa0) + param_4,*(undefined8 *)(param_1 + 0xa8));
      *(undefined8 *)(param_1 + 0xa0) = uVar5;
    }
    if (param_2 == 0) {
      _ZN18alacritty_terminal4grid13Grid_LT_T_GT_21increase_scroll_limit17hd801cadf33b8cd65E
                (param_1,param_4);
      uVar3 = *(ulong *)(param_1 + 0x10);
      if (uVar3 == 0) {
        (*(code *)
          PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_009de548)
                  (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977380);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = (uVar3 - param_4) + *(long *)(param_1 + 0x18);
      if ((uVar6 | uVar3) >> 0x20 == 0) {
        *(ulong *)(param_1 + 0x18) = (uVar6 & 0xffffffff) % (uVar3 & 0xffffffff);
        iVar7 = *(int *)(param_1 + 0x98);
      }
      else {
        *(ulong *)(param_1 + 0x18) = uVar6 % uVar3;
        iVar7 = *(int *)(param_1 + 0x98);
      }
      if (param_3 < iVar7) {
        do {
          iVar1 = iVar7 + ~uVar8;
          iVar7 = iVar7 + -1;
          _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_4swap17hbe868b4d06836c04E
                    (param_1,iVar7,iVar1);
        } while (param_3 < iVar7);
      }
    }
    else if (param_2 < (int)(param_3 - uVar8)) {
      do {
        iVar7 = param_2 + 1;
        _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_4swap17hbe868b4d06836c04E
                  (param_1,param_2,uVar8 + param_2);
        param_2 = iVar7;
      } while (iVar7 < (int)(param_3 - uVar8));
    }
    if ((int)(param_3 - uVar8) < param_3) {
      iVar7 = -uVar8;
      do {
        uVar5 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                          (param_1,param_3 + iVar7,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977398)
        ;
        _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_5reset17h7a49f1c8f619314fE
                  (uVar5,*(undefined4 *)(param_1 + 0x4c));
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0);
    }
  }
  else if (param_2 < param_3) {
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    do {
      iVar7 = param_2 + 1;
      uVar5 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                        (param_1,param_2,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009773b0);
      _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_5reset17h7a49f1c8f619314fE(uVar5,uVar2);
      param_2 = iVar7;
    } while (param_3 != iVar7);
  }
  return;
}