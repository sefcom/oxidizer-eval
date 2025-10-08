void _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_22update_cursor_blinking17h6fa78630776ddb12E
               (long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  undefined local_128 [248];
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x40);
  bVar7 = *(byte *)(lVar3 + 0x3d7);
  uVar1 = *(uint *)(lVar2 + 0x6dc);
  cVar8 = *(char *)(lVar3 + 0x3d6);
  if (((uVar1 & 0x10000) != 0) && (*(char *)(lVar3 + 0x3d4) != '\x04')) {
    bVar7 = *(byte *)(lVar3 + 0x3d5);
    cVar8 = *(char *)(lVar3 + 0x3d4);
  }
  bVar5 = _ZN18alacritty_terminal4term13Term_LT_T_GT_12cursor_style17hbc8727fad33b6b36E();
  if ((cVar8 != '\x03') && (1 < bVar7 - 1)) {
    if (bVar7 != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      bVar5 = 1;
      goto joined_r0x00554ce2;
    }
    bVar5 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x30);
joined_r0x00554ce2:
  if ((uVar1 & 0x10001) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = *(int *)(lVar3 + 0x2d0) == 2;
  }
  uVar6 = _ZN9alacritty7display6window6Window2id17h395f89524db74bebE(lVar3 + 800);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  _ZN9alacritty9scheduler9Scheduler10unschedule17h47626c0d73e9c11fE(local_128,uVar4,uVar6,2);
  _ZN4core3ptr76drop_in_place_LT_core__option__Option_LT_alacritty__scheduler__Timer_GT__GT_17h4830a0e7a5b3781aE
            (local_128);
  _ZN9alacritty9scheduler9Scheduler10unschedule17h47626c0d73e9c11fE(local_128,uVar4,uVar6,3);
  _ZN4core3ptr76drop_in_place_LT_core__option__Option_LT_alacritty__scheduler__Timer_GT__GT_17h4830a0e7a5b3781aE
            (local_128);
  **(undefined **)(param_1 + 0x48) = 0;
  if (((bVar5 & bVar9) != 0) && (*(char *)(lVar2 + 0x6e2) == '\x01')) {
    _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_17schedule_blinking17h7f65cefdef5166e4E(param_1);
    _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_25schedule_blinking_timeout17h7dcff9507b3e6248E
              (param_1);
    return;
  }
  *(undefined *)(lVar3 + 0x836) = 0;
  **(undefined **)(param_1 + 0x78) = 1;
  return;
}