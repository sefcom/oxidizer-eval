undefined  [16]
_ZN18alacritty_terminal5index5Point10grid_clamp17h0af70e6c7939b3f8E
          (undefined8 param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  
  uVar2 = _ZN18alacritty_terminal4grid10Dimensions11last_column17h43ccb5805f51a6acE
                    (*(undefined8 *)(param_3 + 0x90));
  uVar3 = _ZN4core3cmp3Ord3min17hffab314b5e6491b1E(param_1,uVar2);
  uVar1 = _ZN18alacritty_terminal4grid10Dimensions15bottommost_line17h4f75d9959625aee4E
                    (*(undefined8 *)(param_3 + 0x98));
  uVar4 = (ulong)uVar1;
  if ((int)param_2 < (int)uVar1) {
    uVar4 = (ulong)param_2;
  }
  if ((int)uVar1 < (int)param_2) {
    uVar3 = uVar2;
  }
  if ((int)param_2 < 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}