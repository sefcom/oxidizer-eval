undefined  [16]
_ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_17line_search_right17h7ee6c3b77284b281E
          (long param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined auVar6 [16];
  
  iVar1 = *(int *)(param_1 + 0xc0);
  uVar4 = *(long *)(param_1 + 0xb8) - 1;
  do {
    iVar5 = param_2;
    if (iVar1 <= iVar5 + 1) break;
    lVar3 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                      (param_1 + 0x28,iVar5,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977a90);
    if (*(ulong *)(lVar3 + 0x10) <= uVar4) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                (uVar4,*(ulong *)(lVar3 + 0x10),&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977aa8);
      pcVar2 = (code *)swi(3);
      auVar6 = (*pcVar2)();
      return auVar6;
    }
    param_2 = iVar5 + 1;
  } while ((*(byte *)(*(long *)(lVar3 + 8) + 0x14 + uVar4 * 0x18) & 0x10) != 0);
  auVar6._8_4_ = iVar5;
  auVar6._0_8_ = uVar4;
  auVar6._12_4_ = 0;
  return auVar6;
}