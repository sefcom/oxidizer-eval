void _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_18search_reset_state17h60fb25255eb6c066E
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auStack_108 [248];
  
  uVar4 = _ZN9alacritty7display6window6Window2id17h395f89524db74bebE
                    (*(long *)(param_1 + 0x30) + 800);
  _ZN9alacritty9scheduler9Scheduler10unschedule17h47626c0d73e9c11fE
            (auStack_108,*(undefined8 *)(param_1 + 0x60),uVar4,1);
  _ZN4core3ptr76drop_in_place_LT_core__option__Option_LT_alacritty__scheduler__Timer_GT__GT_17h4830a0e7a5b3781aE
            (auStack_108);
  lVar2 = *(long *)(param_1 + 0x68);
  *(undefined *)(lVar2 + 0x1160) = 2;
  lVar3 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar3 + 0x6de) & 1) != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x1138);
    *(undefined8 *)(lVar3 + 0x290) = *(undefined8 *)(lVar2 + 0x1130);
    *(undefined4 *)(lVar3 + 0x298) = uVar1;
    _ZN18alacritty_terminal4term13Term_LT_T_GT_14scroll_display17h6d83f12bf0aab15bE
              (lVar3,0,*(undefined4 *)(lVar2 + 0x1168));
    *(undefined4 *)(lVar2 + 0x1168) = 0;
    **(undefined **)(param_1 + 0x78) = 1;
  }
  return;
}