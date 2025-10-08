void _ZN7uu_stat9group_num17hf49c8796a9e1a06aE(undefined (*param_1) [16],long param_2,ulong param_3)

{
  code *pcVar1;
  undefined auVar2 [16];
  char cVar3;
  undefined uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  ulong unaff_R12;
  long lVar9;
  ulong uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined local_50 [16];
  undefined8 local_40;
  undefined (*local_38) [16];
  
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  local_50._0_8_ = local_50._0_8_ & 0xffffffff00000000;
  local_38 = param_1;
  auVar11 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,local_50);
  cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17he427642b66178077E
                    (param_2,param_3,auVar11._0_8_,auVar11._8_8_);
  if (cVar3 == '\0') {
    local_50._8_8_ = param_2 + param_3;
    local_40 = 1;
    local_50._0_8_ = param_2;
    uVar4 = _ZN100__LT_core__iter__adapters__take__Take_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h58722b60cf20048eE
                      (local_50);
    cVar5 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17heb96e2ce1b42c0f3E
                      (uVar4);
    if (cVar5 != '\0') goto LAB_00173868;
LAB_00173a4f:
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_00222278)
              ("assertion failed: is_negative || s.chars().take(1).all(|c| c.is_ascii_digit())",0x4e
               ,&PTR_s_src_uu_stat_src_stat_rs_00219b28);
    param_3 = unaff_R12;
  }
  else {
LAB_00173868:
    local_50._8_8_ = param_2 + param_3;
    local_40 = 1;
    local_50._0_8_ = param_2;
    uVar4 = _ZN100__LT_core__iter__adapters__skip__Skip_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17hbbb272a2f22a6199E
                      (local_50);
    cVar5 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17heb96e2ce1b42c0f3E
                      (uVar4);
    if (cVar5 == '\0') {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_00222278)
                ("assertion failed: s.chars().skip(1).all(|c| c.is_ascii_digit())?",0x3f,
                 &PTR_s_src_uu_stat_src_stat_rs_00219b40);
      goto LAB_00173a4f;
    }
    if (param_3 < 4) {
      *(long *)(*local_38 + 8) = param_2;
      *(ulong *)local_38[1] = param_3;
      *(undefined8 *)*local_38 = 0x8000000000000000;
      return;
    }
    uVar10 = param_3 - 1;
    local_50 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h64b6c31f147b6cd7E
                         (uVar10 / 3,1,1,&PTR_s__home_34r7hm4n__rustup_toolchain_002195e8);
    local_40 = 0;
    auVar11 = auVar2;
    if (cVar3 != '\0') {
                    /* try { // try from 00173906 to 0017397d has its CatchHandler @ 00173a82 */
      _ZN5alloc6string6String4push17h0ede46164189e411E(local_50,0x2d);
      lVar9 = 1;
      auVar11 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                          (1,param_2,param_3);
      if (auVar11._0_8_ == 0) {
        ppuVar8 = &PTR_s_src_uu_stat_src_stat_rs_00219b58;
        goto LAB_00173a22;
      }
      uVar10 = auVar11._8_8_ - 1;
    }
    lVar7 = auVar11._8_8_;
    param_3 = uVar10 % 3 + 1;
    auVar12 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                        (param_3,auVar11._0_8_,lVar7);
    lVar9 = auVar12._0_8_;
    auVar2 = auVar11;
    if (lVar9 != 0) {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hbc4458354b3c4ae2E
                (local_50,lVar9,auVar12._8_8_ + lVar9);
      param_3 = uVar10 % 3 + 4;
      while( true ) {
        if ((1 - lVar7) + param_3 == 4) {
          *(undefined8 *)local_38[1] = local_40;
          *local_38 = local_50;
          return;
        }
                    /* try { // try from 001739ba to 001739f3 has its CatchHandler @ 00173a80 */
        _ZN5alloc6string6String4push17h0ede46164189e411E(local_50,0x2c);
        lVar9 = param_3 - 3;
        auVar12 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                            (lVar9,param_3,auVar11._0_8_,lVar7);
        lVar6 = auVar12._0_8_;
        if (lVar6 == 0) break;
        param_3 = param_3 + 3;
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hbc4458354b3c4ae2E
                  (local_50,lVar6,auVar12._8_8_ + lVar6);
      }
      ppuVar8 = &PTR_s_src_uu_stat_src_stat_rs_00219b88;
      goto LAB_00173a22;
    }
  }
  ppuVar8 = &PTR_s_src_uu_stat_src_stat_rs_00219b70;
  lVar9 = 0;
LAB_00173a22:
                    /* try { // try from 00173a22 to 00173a33 has its CatchHandler @ 00173a82 */
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00222268)
            (auVar2._0_8_,auVar2._8_8_,lVar9,param_3,ppuVar8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}