void _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_10grow_lines17h797124adb8045c3dE
               (long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = param_2 - *(long *)(param_1 + 0x98);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                    (param_1,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977440);
  _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_10initialize17hf07ff5cf81d3c7d9E
            (param_1,param_2 - lVar3,*(undefined8 *)(lVar1 + 0x10));
  *(ulong *)(param_1 + 0x20) = param_2;
  *(ulong *)(param_1 + 0x98) = param_2;
  lVar3 = 0;
  if (param_2 <= *(ulong *)(param_1 + 0x28)) {
    lVar3 = *(ulong *)(param_1 + 0x28) - param_2;
  }
  uVar2 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(lVar3,uVar4);
  if (uVar4 != uVar2) {
    _ZN18alacritty_terminal4grid13Grid_LT_T_GT_9scroll_up17hf31756b0f8886f88E
              (param_1,0,param_2 & 0xffffffff);
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)uVar2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (int)uVar2;
  lVar3 = 0;
  if (uVar4 <= *(ulong *)(param_1 + 0xa0)) {
    lVar3 = *(ulong *)(param_1 + 0xa0) - uVar4;
  }
  *(long *)(param_1 + 0xa0) = lVar3;
  _ZN18alacritty_terminal4grid13Grid_LT_T_GT_21decrease_scroll_limit17h8721b8159654f913E
            (param_1,uVar4);
  return;
}