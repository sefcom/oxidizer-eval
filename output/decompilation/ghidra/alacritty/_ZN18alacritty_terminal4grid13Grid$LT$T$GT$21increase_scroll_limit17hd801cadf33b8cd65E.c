void _ZN18alacritty_terminal4grid13Grid_LT_T_GT_21increase_scroll_limit17hd801cadf33b8cd65E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(ulong *)(param_1 + 0x98) <= *(ulong *)(param_1 + 0x28)) {
    lVar1 = *(ulong *)(param_1 + 0x28) - *(ulong *)(param_1 + 0x98);
  }
  lVar1 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(param_2,*(long *)(param_1 + 0xa8) - lVar1);
  if (lVar1 != 0) {
    _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_10initialize17hf07ff5cf81d3c7d9E
              (param_1,lVar1,*(undefined8 *)(param_1 + 0x90));
    return;
  }
  return;
}