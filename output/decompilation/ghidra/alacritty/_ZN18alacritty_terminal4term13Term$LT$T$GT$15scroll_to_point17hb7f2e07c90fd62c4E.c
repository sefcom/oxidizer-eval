void _ZN18alacritty_terminal4term13Term_LT_T_GT_15scroll_to_point17hb7f2e07c90fd62c4E
               (long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 200);
  if (SBORROW4(param_2,-iVar1) != param_2 + iVar1 < 0) {
    _ZN18alacritty_terminal4term13Term_LT_T_GT_14scroll_display17h6d83f12bf0aab15bE
              (param_1,0,-(param_2 + iVar1));
    return;
  }
  if (param_2 < *(int *)(param_1 + 0xc0) - iVar1) {
    return;
  }
  _ZN18alacritty_terminal4term13Term_LT_T_GT_14scroll_display17h6d83f12bf0aab15bE
            (param_1,0,~(param_2 + iVar1) + *(int *)(param_1 + 0xc0));
  return;
}