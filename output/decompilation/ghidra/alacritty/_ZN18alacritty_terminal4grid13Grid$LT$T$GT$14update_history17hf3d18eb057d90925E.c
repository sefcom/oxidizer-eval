void _ZN18alacritty_terminal4grid13Grid_LT_T_GT_14update_history17hf3d18eb057d90925E
               (long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar3 = 0;
  if (*(ulong *)(param_1 + 0x98) <= uVar1) {
    uVar3 = uVar1 - *(ulong *)(param_1 + 0x98);
  }
  if (param_2 < uVar3) {
    *(ulong *)(param_1 + 0x28) = (param_2 - uVar3) + uVar1;
    if (uVar1 + (param_2 - uVar3) + 1000 < *(ulong *)(param_1 + 0x10)) {
      _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_8truncate17h2d132ed67c9d1788E(param_1);
    }
  }
  uVar2 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(*(undefined8 *)(param_1 + 0xa0),param_2);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(ulong *)(param_1 + 0xa8) = param_2;
  return;
}