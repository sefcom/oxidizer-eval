void _ZN18alacritty_terminal4term13Term_LT_T_GT_14scroll_display17h6d83f12bf0aab15bE(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_38 [4];
  
  lVar3 = *(long *)(param_1 + 200);
  _ZN18alacritty_terminal4grid13Grid_LT_T_GT_14scroll_display17h2a71daa54e5ae981E(param_1 + 0x28);
  local_38[0] = 0x8000000000000000;
  _ZN89__LT_alacritty__event__EventProxy_u20_as_u20_alacritty_terminal__event__EventListener_GT_10send_event17hcb980e74e667f924E
            (param_1,local_38);
  uVar1 = *(uint *)(param_1 + 200);
  iVar2 = *(int *)(param_1 + 0xc0);
  uVar4 = _ZN4core3cmp3Ord3max17h485505c56320f468E(-uVar1,*(undefined4 *)(param_1 + 0x298));
  uVar4 = _ZN4core3cmp3Ord3min17h3552534d3430b892E(~uVar1 + iVar2,uVar4);
  *(undefined4 *)(param_1 + 0x298) = uVar4;
  _ZN18alacritty_terminal4term13Term_LT_T_GT_27vi_mode_recompute_selection17hf880b3a3d59b9937E
            (param_1);
  if (lVar3 != *(long *)(param_1 + 200)) {
    *(undefined *)(param_1 + 0x210) = 1;
  }
  return;
}