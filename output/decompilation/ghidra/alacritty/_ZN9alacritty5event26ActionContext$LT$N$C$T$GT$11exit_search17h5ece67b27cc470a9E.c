void _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_11exit_search17h5ece67b27cc470a9E(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  _ZN9alacritty7display6window6Window15set_ime_allowed17hbb6cdda1349198bdE
            (lVar1 + 800,(*(uint *)(*(long *)(param_1 + 8) + 0x6dc) & 0x10000) == 0);
  *(undefined *)(lVar1 + 0x48) = 1;
  *(undefined *)(lVar1 + 0x55c) = 1;
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(lVar1 + 0x1100) = 0;
  *(undefined *)(lVar1 + 0x1160) = 2;
  return;
}