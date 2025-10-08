long _ZN18alacritty_terminal4grid21GridIterator_LT_T_GT_4cell17h5c2417f3cd861f7eE
               (undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  
  uVar1 = param_1[1];
  lVar3 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                    (*param_1,*(undefined4 *)(param_1 + 2),
                     &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009773c8);
  if (uVar1 < *(ulong *)(lVar3 + 0x10)) {
    return uVar1 * 0x18 + *(long *)(lVar3 + 8);
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (uVar1,*(ulong *)(lVar3 + 0x10),&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009773c8);
  pcVar2 = (code *)swi(3);
  lVar3 = (*pcVar2)();
  return lVar3;
}