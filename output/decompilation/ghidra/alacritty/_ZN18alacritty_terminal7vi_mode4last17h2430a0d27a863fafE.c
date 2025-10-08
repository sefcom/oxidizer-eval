undefined  [16] _ZN18alacritty_terminal7vi_mode4last17h2430a0d27a863fafE(long param_1)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  byte local_30 [8];
  ulong local_28;
  uint local_20;
  
  auVar5 = _ZN18alacritty_terminal4term13Term_LT_T_GT_11expand_wide17h832c6afc1f08b7ffE();
  uVar3 = auVar5._0_8_;
  uVar4 = auVar5._8_8_ & 0xffffffff;
  _ZN18alacritty_terminal7vi_mode21last_occupied_in_line17h9d6671481df7c379E(local_30,param_1);
  if (((local_30[0] & 1) == 0) || (local_28 <= uVar3)) {
    cVar2 = _ZN18alacritty_terminal7vi_mode7is_wrap17h0d49787c150cddfaE(param_1,uVar3,uVar4);
    uVar1 = uVar4;
    if (cVar2 == '\0') {
      uVar3 = *(long *)(param_1 + 0xb8) - 1;
    }
    else {
      do {
        uVar4 = uVar1;
        cVar2 = _ZN18alacritty_terminal7vi_mode7is_wrap17h0d49787c150cddfaE(param_1,uVar3,uVar4);
        uVar1 = (ulong)((int)uVar4 + 1);
      } while (cVar2 != '\0');
      _ZN18alacritty_terminal7vi_mode21last_occupied_in_line17h9d6671481df7c379E
                (local_30,param_1,uVar4);
      if (local_30[0] != 0) {
        uVar4 = (ulong)local_20;
        uVar3 = local_28;
      }
    }
  }
  else {
    uVar4 = (ulong)local_20;
    uVar3 = local_28;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}