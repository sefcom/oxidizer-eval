undefined  [16]
_ZN18alacritty_terminal4term13Term_LT_T_GT_11expand_wide17h832c6afc1f08b7ffE
          (ulong param_1,ulong param_2,uint param_3,char param_4)

{
  ushort uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  undefined auVar7 [16];
  undefined auVar8 [12];
  
  uVar5 = (ulong)param_3;
  lVar4 = param_1 + 0x28;
  lVar3 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                    (lVar4,param_3,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977680);
  if (*(ulong *)(lVar3 + 0x10) <= param_2) {
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
              (param_2,*(ulong *)(lVar3 + 0x10),&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977698);
LAB_0046effa:
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)(param_1);
    pcVar2 = (code *)swi(3);
    auVar7 = (*pcVar2)();
    return auVar7;
  }
  uVar1 = *(ushort *)(*(long *)(lVar3 + 8) + 0x14 + param_2 * 0x18);
  if (param_4 == '\0') {
    if ((uVar1 & 0x60) != 0) {
      param_2 = param_2 + (long)(short)((uint)(int)(short)(uVar1 << 9) >> 0xf);
      auVar8 = _ZN18alacritty_terminal5index5Point3sub17h8b4b7dd5f4447bbcE
                         (param_2,param_3,param_1,1);
      param_1 = auVar8._0_8_;
      lVar4 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                        (lVar4,auVar8._8_4_,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009776b0);
      if (*(ulong *)(lVar4 + 0x10) <= param_1) goto LAB_0046effa;
      bVar6 = (*(byte *)(*(long *)(lVar4 + 8) + 0x15 + param_1 * 0x18) & 4) != 0;
      if (bVar6) {
        param_2 = param_1;
      }
      uVar5 = (ulong)param_3;
      if (bVar6) {
        uVar5 = (ulong)auVar8._8_4_;
      }
    }
  }
  else if ((uVar1 & 0x400) == 0) {
    if ((uVar1 & 0x20) != 0) {
      param_2 = _ZN4core3cmp3Ord3min17hffab314b5e6491b1E(param_2 + 1,*(long *)(param_1 + 0xb8) + -1)
      ;
    }
  }
  else {
    uVar5 = (ulong)(param_3 + 1);
    param_2 = 1;
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = param_2;
  return auVar7;
}