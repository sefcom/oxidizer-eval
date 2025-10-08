long _ZN18alacritty_terminal4grid13Grid_LT_T_GT_11cursor_cell17h4172fc1fd56d763cE(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  lVar3 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                    (param_1,*(undefined4 *)(param_1 + 0x38),
                     &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009772a8);
  uVar4 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(*(undefined8 *)(lVar3 + 0x18),uVar1 + 1);
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  if (uVar1 < *(ulong *)(lVar3 + 0x10)) {
    return uVar1 * 0x18 + *(long *)(lVar3 + 8);
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (uVar1,*(ulong *)(lVar3 + 0x10),&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009772c0);
  pcVar2 = (code *)swi(3);
  lVar3 = (*pcVar2)();
  return lVar3;
}