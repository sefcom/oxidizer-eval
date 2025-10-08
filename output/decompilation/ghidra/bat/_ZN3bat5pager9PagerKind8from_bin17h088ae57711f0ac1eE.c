ulong _ZN3bat5pager9PagerKind8from_bin17h088ae57711f0ac1eE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 unaff_RBP;
  ulong uVar5;
  ulong uVar7;
  undefined auVar8 [16];
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined7 uVar6;
  
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                    (param_1,param_2,&DAT_002a2c1b,7);
  uVar6 = (undefined7)((ulong)unaff_RBP >> 8);
  uVar5 = CONCAT71(uVar6,4);
  if (cVar3 != '\0') goto LAB_0053d66e;
  auVar8 = (*(code *)PTR__ZN3std4path4Path9file_stem17hc69c2d2c61933548E_00807580)(param_1,param_2);
  lVar4 = auVar8._0_8_;
  (*(code *)PTR__ZN3std3env7args_os17h5ff0cf6a45e392f2E_00807bb0)(&local_60);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h44aa0e071acc92fbE
            (&local_40,&local_60);
                    /* try { // try from 0053d58b to 0053d592 has its CatchHandler @ 0053d67d */
  _ZN4core3ptr37drop_in_place_LT_std__env__ArgsOs_GT_17h0d349c28e5b4db48E(&local_60);
  uVar7 = CONCAT71((int7)((ulong)&local_60 >> 8),5);
  if (local_40 != -0x8000000000000000) {
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    local_60 = local_40;
    cVar3 = _ZN3bat5pager9PagerKind8from_bin28__u7b__u7b_closure_u7d__u7d_17h6cf46e1c73f01f26E
                      (lVar4,auVar8._8_8_,&local_60);
    uVar7 = (ulong)((uint)(cVar3 == '\0') * 5);
  }
  if (lVar4 == 0) {
    local_60 = -0x7fffffffffffffff;
LAB_0053d661:
    uVar5 = uVar7 & 0xffffffff;
  }
  else {
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
              (&local_60,lVar4,auVar8._8_8_);
    if (local_60 == -0x7fffffffffffffff) goto LAB_0053d661;
    uVar1 = CONCAT44(uStack_54,local_58);
    uVar2 = CONCAT44(uStack_4c,uStack_50);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                      (uVar1,uVar2,"less",4);
    uVar5 = CONCAT71(uVar6,1);
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                        (uVar1,uVar2,&DAT_00181e6c,4);
      uVar5 = CONCAT71(uVar6,2);
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                          (uVar1,uVar2,&DAT_00180bb8,4);
        uVar5 = CONCAT71(uVar6,3);
        if (cVar3 == '\0') goto LAB_0053d661;
      }
    }
  }
  _ZN4core3ptr64drop_in_place_LT_nu_ansi_term__display__OSControl_LT_str_GT__GT_17hfc2aeb8c0099f497E
            (&local_60);
LAB_0053d66e:
  return uVar5 & 0xffffffff;
}