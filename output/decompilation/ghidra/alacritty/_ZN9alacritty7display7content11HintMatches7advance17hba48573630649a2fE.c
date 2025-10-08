undefined8
_ZN9alacritty7display7content11HintMatches7advance17hba48573630649a2fE
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  char cVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x18);
  if (uVar4 < uVar1) {
    puVar3 = (undefined4 *)(*(long *)(param_1 + 8) + uVar4 * 0x28 + 0x18);
    do {
      uVar4 = uVar4 + 1;
      cVar2 = _ZN80__LT_alacritty_terminal__index__Point_LT_L_C_C_GT__u20_as_u20_core__cmp__Ord_GT_3cmp17h2b413278cc536aeeE
                        (*(undefined8 *)(puVar3 + -6),puVar3[-4],param_2,param_3);
      if ('\0' < cVar2) {
        return 0;
      }
      cVar2 = _ZN80__LT_alacritty_terminal__index__Point_LT_L_C_C_GT__u20_as_u20_core__cmp__Ord_GT_3cmp17h2b413278cc536aeeE
                        (*(undefined8 *)(puVar3 + -2),*puVar3,param_2,param_3);
      if (-1 < cVar2) {
        return 1;
      }
      *(ulong *)(param_1 + 0x18) = uVar4;
      puVar3 = puVar3 + 10;
    } while (uVar4 != uVar1);
  }
  return 0;
}