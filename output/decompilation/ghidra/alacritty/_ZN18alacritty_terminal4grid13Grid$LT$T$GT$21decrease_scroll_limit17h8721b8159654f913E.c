void _ZN18alacritty_terminal4grid13Grid_LT_T_GT_21decrease_scroll_limit17h8721b8159654f913E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x28);
  uVar4 = *(ulong *)(param_1 + 0x98);
  lVar2 = 0;
  if (uVar4 <= uVar5) {
    lVar2 = uVar5 - uVar4;
  }
  lVar1 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(param_2,lVar2);
  if (lVar1 != 0) {
    lVar2 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(lVar1,lVar2);
    uVar5 = uVar5 - lVar2;
    *(ulong *)(param_1 + 0x28) = uVar5;
    if (uVar5 + 1000 < *(ulong *)(param_1 + 0x10)) {
      _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_8truncate17h2d132ed67c9d1788E(param_1);
      uVar5 = *(ulong *)(param_1 + 0x28);
      uVar4 = *(ulong *)(param_1 + 0x98);
    }
    lVar2 = 0;
    if (uVar4 <= uVar5) {
      lVar2 = uVar5 - uVar4;
    }
    uVar3 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(*(undefined8 *)(param_1 + 0xa0),lVar2);
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
  }
  return;
}