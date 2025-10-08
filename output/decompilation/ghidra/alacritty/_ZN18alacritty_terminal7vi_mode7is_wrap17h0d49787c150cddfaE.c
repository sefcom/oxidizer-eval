ulong _ZN18alacritty_terminal7vi_mode7is_wrap17h0d49787c150cddfaE
                (long param_1,ulong param_2,undefined4 param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                    (param_1 + 0x28,param_3,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977ce8);
  if (param_2 < *(ulong *)(lVar2 + 0x10)) {
    return (ulong)((*(byte *)(*(long *)(lVar2 + 8) + 0x14 + param_2 * 0x18) & 0x10) >> 4);
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (param_2,*(ulong *)(lVar2 + 0x10),&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977ce8);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}