void _ZN18alacritty_terminal9selection9Selection8to_range17h2a26a8fa10c1a05cE
               (long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined auVar5 [12];
  undefined local_b8 [12];
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_3 + 0xb8);
  local_88 = param_2[2];
  local_98 = *param_2;
  uStack_90 = param_2[1];
  local_b8._0_8_ = param_2[3];
  iVar4 = *(int *)(param_2 + 4);
  uStack_ac = *(undefined4 *)((long)param_2 + 0x24);
  local_a8 = param_2[5];
  local_b8._8_4_ = iVar4;
  cVar2 = _ZN80__LT_alacritty_terminal__index__Point_LT_L_C_C_GT__u20_as_u20_core__cmp__Ord_GT_3cmp17h2b413278cc536aeeE
                    (local_98,uStack_90 & 0xffffffff,local_b8._0_8_);
  if ('\0' < cVar2) {
    _ZN4core10intrinsics25typed_swap_nonoverlapping17h0a04095f3d754e5fE(&local_98,local_b8);
    iVar4 = local_b8._8_4_;
  }
  iVar3 = 0;
  if (*(ulong *)(param_3 + 0xc0) <= *(ulong *)(param_3 + 0x50)) {
    iVar3 = (int)*(ulong *)(param_3 + 0x50) - (int)*(ulong *)(param_3 + 0xc0);
  }
  if (SBORROW4(iVar4,-iVar3) != iVar4 + iVar3 < 0) {
    *(undefined *)(param_1 + 0x20) = 2;
    return;
  }
  local_38 = uVar1;
  auVar5 = _ZN18alacritty_terminal5index5Point10grid_clamp17hd0d1827dd0c9d684E
                     (local_98,uStack_90 & 0xffffffff,param_3,1);
  local_98 = auVar5._0_8_;
  uStack_90 = CONCAT44(uStack_90._4_4_,auVar5._8_4_);
  local_b8 = _ZN18alacritty_terminal5index5Point10grid_clamp17hd0d1827dd0c9d684E
                       (local_b8._0_8_,iVar4,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x0047485c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_001eedd0 + *(int *)(&DAT_001eedd0 + (ulong)*(byte *)(param_2 + 6) * 4)))();
  return;
}