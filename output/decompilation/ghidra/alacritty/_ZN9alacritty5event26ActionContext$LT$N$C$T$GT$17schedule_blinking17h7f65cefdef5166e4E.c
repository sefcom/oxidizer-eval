void _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_17schedule_blinking17h7f65cefdef5166e4E
               (long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_188 [22];
  undefined local_d8 [192];
  
  uVar1 = _ZN9alacritty7display6window6Window2id17h395f89524db74bebE
                    (*(long *)(param_1 + 0x30) + 800);
  local_188[0] = 0x8000000000000007;
  _ZN9alacritty5event5Event3new17h74b0126f9adfc99eE(local_d8,local_188,uVar1);
  uVar2 = _ZN4core3cmp3Ord3max17he38e22e81f6eeae2E
                    (*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x3c8));
  _ZN9alacritty9scheduler9Scheduler8schedule17hb60357d8e26bddb3E
            (*(undefined8 *)(param_1 + 0x60),local_d8,uVar2 / 1000,
             ((int)uVar2 + (int)(uVar2 / 1000) * -1000) * 1000000,1,uVar1,2);
  return;
}