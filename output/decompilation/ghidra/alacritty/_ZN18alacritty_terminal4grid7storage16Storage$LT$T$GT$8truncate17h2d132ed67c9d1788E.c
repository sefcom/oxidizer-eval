void _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_8truncate17h2d132ed67c9d1788E
               (long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    lVar3 = *(ulong *)(param_1 + 0x10) - uVar2;
    if (uVar2 <= *(ulong *)(param_1 + 0x10)) goto LAB_0046edd6;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x10);
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11rotate_left17h461a6a02631add82E
              (*(undefined8 *)(param_1 + 8),uVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar2 = *(ulong *)(param_1 + 0x28);
    lVar3 = uVar1 - uVar2;
    if (uVar2 <= uVar1) {
LAB_0046edd6:
      *(ulong *)(param_1 + 0x10) = uVar2;
      _ZN4core3ptr109drop_in_place_LT__u5b_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__u5d__GT_17hbdfa2dfef87806d4E
                (uVar2 * 0x20 + *(long *)(param_1 + 8),lVar3);
      return;
    }
  }
  return;
}