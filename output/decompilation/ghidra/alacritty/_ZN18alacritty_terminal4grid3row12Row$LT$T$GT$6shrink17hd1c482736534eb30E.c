void _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_6shrink17hd1c482736534eb30E
               (undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined8 local_50;
  long lStack_48;
  ulong local_40;
  long local_38;
  long local_30;
  
  if (param_3 < *(ulong *)(param_2 + 0x10)) {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_9split_off17h4284604988914e8fE
              (&local_50,param_2,param_3,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977428);
    uVar4 = local_40;
    lVar1 = lStack_48;
    local_30 = local_40 * 0x18 + lStack_48;
    local_38 = lStack_48;
    auVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_9rposition17he9dbe64162a19a23E
                       (&local_38);
    uVar2 = _ZN4core6option15Option_LT_T_GT_6map_or17h056726a80e331dccE(auVar5._0_8_,auVar5._8_8_);
    if (uVar2 <= uVar4) {
      local_40 = uVar2;
                    /* try { // try from 0046d565 to 0046d56c has its CatchHandler @ 0046d5c9 */
      _ZN4core3ptr67drop_in_place_LT__u5b_alacritty_terminal__term__cell__Cell_u5d__GT_17hee3a2d0d3617f058E
                (uVar2 * 0x18 + lVar1,uVar4 - uVar2);
      uVar4 = uVar2;
    }
    uVar3 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(*(undefined8 *)(param_2 + 0x18),param_3);
    *(undefined8 *)(param_2 + 0x18) = uVar3;
    if (uVar4 == 0) {
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr80drop_in_place_LT_alloc__vec__Vec_LT_alacritty_terminal__term__cell__Cell_GT__GT_17h3a26ff64830026d7E
                (&local_50);
    }
    else {
      param_1[2] = local_40;
      *param_1 = local_50;
      param_1[1] = lStack_48;
    }
  }
  else {
    *param_1 = 0x8000000000000000;
  }
  return;
}