void _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_25schedule_blinking_timeout17h7dcff9507b3e6248E
               (long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined auVar5 [12];
  undefined8 local_198 [22];
  undefined local_e8 [192];
  
  cVar1 = *(char *)(*(long *)(param_1 + 0x40) + 0x3d8);
  if (cVar1 == '\0') {
    auVar5 = ZEXT812(0);
  }
  else {
    uVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x3c8) * 2;
    uVar4 = uVar2 / 1000;
    auVar5 = _ZN4core3cmp3Ord3max17h3810429b1613a891E
                       (uVar4,((int)uVar2 + (int)uVar4 * -1000) * 1000000,cVar1);
  }
  if (auVar5._0_8_ != 0 || auVar5._8_4_ != 0) {
    uVar3 = _ZN9alacritty7display6window6Window2id17h395f89524db74bebE
                      (*(long *)(param_1 + 0x30) + 800);
    local_198[0] = 0x8000000000000008;
    _ZN9alacritty5event5Event3new17h74b0126f9adfc99eE(local_e8,local_198,uVar3);
    _ZN9alacritty9scheduler9Scheduler8schedule17hb60357d8e26bddb3E
              (*(undefined8 *)(param_1 + 0x60),local_e8,auVar5._0_8_,auVar5._8_4_,0,uVar3,3);
  }
  return;
}