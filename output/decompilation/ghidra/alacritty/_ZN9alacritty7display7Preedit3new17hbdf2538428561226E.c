void _ZN9alacritty7display7Preedit3new17hbdf2538428561226E
               (undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 in_RAX;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 unaff_R12;
  undefined auVar8 [16];
  
  if (*param_3 != 1) {
    uVar6 = 0;
LAB_0054fc29:
    param_1[8] = param_2[2];
    uVar1 = param_2[1];
    param_1[6] = *param_2;
    param_1[7] = uVar1;
    uVar1 = *(undefined8 *)(param_3 + 2);
    *param_1 = *(undefined8 *)param_3;
    param_1[1] = uVar1;
    param_1[2] = *(undefined8 *)(param_3 + 4);
    param_1[3] = uVar6;
    param_1[4] = unaff_R12;
    param_1[5] = in_RAX;
    return;
  }
  uVar6 = *(undefined8 *)(param_3 + 2);
  uVar1 = *(undefined8 *)(param_3 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                     (uVar6,uVar2);
  lVar5 = auVar8._0_8_;
  if (lVar5 == 0) {
    ppuVar7 = &PTR_s_alacritty_src_display_mod_rs_00982830;
  }
  else {
                    /* try { // try from 0054fbf0 to 0054fc89 has its CatchHandler @ 0054fc8c */
    unaff_R12 = _ZN4core4iter6traits8iterator8Iterator4fold17h3d1978069ee83a65E
                          (lVar5,auVar8._8_8_ + lVar5);
    auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (uVar1,uVar2,uVar3);
    lVar5 = auVar8._0_8_;
    if (lVar5 != 0) {
      in_RAX = _ZN4core4iter6traits8iterator8Iterator4fold17h3d1978069ee83a65E
                         (lVar5,auVar8._8_8_ + lVar5);
      uVar6 = 1;
      goto LAB_0054fc29;
    }
    ppuVar7 = &PTR_s_alacritty_src_display_mod_rs_00982848;
    uVar6 = uVar1;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_009de180)
            (uVar2,uVar3,uVar6,uVar3,ppuVar7);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}