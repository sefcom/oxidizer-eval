void _ZN9alacritty14window_context13WindowContext21submit_display_update17h6cc5b42c48dd8bf0E
               (long param_1,undefined8 param_2,undefined8 param_3,undefined param_4,long param_5,
               char param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((*(byte *)(param_1 + 0x6de) & 1) == 0) {
    bVar4 = *(byte *)(param_5 + 0x116c) ^ 1;
  }
  else {
    bVar4 = *(int *)(param_1 + 0x298) == iVar1 + -1;
  }
  iVar2 = *(int *)(param_1 + 0x60);
  _ZN9alacritty7display7Display13handle_update17hcc25bf8cecd52e99E
            (param_2,param_1,param_3,param_4,param_5,param_7);
  if ((param_6 == '\0') && (*(long *)(param_5 + 0x1100) != 0)) {
    uVar3 = 1;
    if (((*(long *)(param_1 + 200) == 0 && iVar2 + 1 == iVar1) && (bVar4 & 1) == 0) ||
       (uVar3 = 0xffffffff, (*(long *)(param_1 + 200) != 0 & bVar4) != 0)) {
      _ZN18alacritty_terminal4term13Term_LT_T_GT_14scroll_display17h6d83f12bf0aab15bE
                (param_1,0,uVar3);
      return;
    }
  }
  return;
}