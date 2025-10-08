ulong _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_16line_search_left17h51103e5e6ff36c7aE
                (long param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  iVar4 = 0;
  if (*(ulong *)(param_1 + 0xc0) <= *(ulong *)(param_1 + 0x50)) {
    iVar4 = (int)*(ulong *)(param_1 + 0x50) - (int)*(ulong *)(param_1 + 0xc0);
  }
  uVar5 = *(long *)(param_1 + 0xb8) - 1;
  while( true ) {
    uVar3 = (ulong)param_2;
    if (param_2 == -iVar4 || SBORROW4(param_2,-iVar4) != (int)(param_2 + iVar4) < 0) {
      return uVar3;
    }
    param_2 = param_2 - 1;
    lVar2 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                      (param_1 + 0x28,param_2,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977a60);
    if (*(ulong *)(lVar2 + 0x10) <= uVar5) break;
    if ((*(byte *)(*(long *)(lVar2 + 8) + 0x14 + uVar5 * 0x18) & 0x10) == 0) {
      return uVar3;
    }
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (uVar5,*(ulong *)(lVar2 + 0x10),&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977a78);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}