void _ZN21ruff_python_formatter10expression19expr_number_literal25normalize_floating_number17h0dea00e00392162aE
               (undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined auVar8 [16];
  undefined auVar9 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_68 = 0;
  uStack_60 = 1;
  local_58 = 0;
  local_40 = param_2 + param_3;
  local_38 = 0;
  local_50 = param_1;
  local_48 = param_2;
  auVar9 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                     (&local_48);
  bVar7 = auVar9._8_4_ == 0x2e;
  if (bVar7) {
                    /* try { // try from 0040bdc2 to 0040c060 has its CatchHandler @ 0040c063 */
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_68,0x30);
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_68,0x2e);
    lVar5 = auVar9._0_8_ + 1;
  }
  else {
    lVar5 = 0;
  }
LAB_0040be02:
  auVar9 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                     (&local_48);
  iVar3 = auVar9._8_4_;
  lVar6 = auVar9._0_8_;
  if (iVar3 < 0x45) goto code_r0x0040be11;
  if ((iVar3 == 0x45) || (iVar3 == 0x65)) {
    if (bVar7) {
      auVar8 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                         (lVar5,lVar6,param_2,param_3);
      lVar2 = auVar8._0_8_;
      if (lVar2 == 0) {
        ppuVar4 = &PTR_s_crates_ruff_python_formatter_src_0067db30;
        goto LAB_0040c04f;
      }
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                (&local_68,lVar2,auVar8._8_8_ + lVar2);
      _ZN5alloc6string6String4push17h0ede46164189e411E(&local_68,0x30);
      lVar5 = lVar6;
      if (iVar3 != 0x45) goto LAB_0040bf88;
LAB_0040bede:
      auVar8 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                         (lVar5,lVar6,param_2,param_3);
      lVar2 = auVar8._0_8_;
      if (lVar2 == 0) {
        ppuVar4 = &PTR_s_crates_ruff_python_formatter_src_0067db48;
        goto LAB_0040c04f;
      }
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                (&local_68,lVar2,auVar8._8_8_ + lVar2);
      _ZN5alloc6string6String4push17h0ede46164189e411E(&local_68,0x65);
      lVar5 = lVar6 + 1;
      auVar9 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                         (&local_48);
    }
    else {
      if (iVar3 == 0x45) goto LAB_0040bede;
LAB_0040bf88:
      auVar9 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                         (&local_48);
    }
    lVar6 = auVar9._0_8_;
    if (auVar9._8_4_ != 0x2b) goto joined_r0x0040c011;
    auVar8 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                       (lVar5,lVar6,param_2,param_3);
    lVar2 = auVar8._0_8_;
    if (lVar2 != 0) {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                (&local_68,lVar2,auVar8._8_8_ + lVar2);
      lVar5 = lVar6 + 1;
      goto joined_r0x0040c011;
    }
    ppuVar4 = &PTR_s_crates_ruff_python_formatter_src_0067db60;
    goto LAB_0040c04f;
  }
  if (iVar3 != 0x110000) goto LAB_0040be00;
  if (bVar7) {
    auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (lVar5,param_2,param_3);
    lVar6 = auVar8._0_8_;
    if (lVar6 == 0) {
      ppuVar4 = &PTR_s_crates_ruff_python_formatter_src_0067db18;
      lVar6 = param_3;
      goto LAB_0040c04f;
    }
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
              (&local_68,lVar6,auVar8._8_8_ + lVar6);
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_68,0x30);
    lVar5 = param_3;
  }
joined_r0x0040c011:
  if (lVar5 == 0) {
    local_50[1] = param_2;
    local_50[2] = param_3;
    *local_50 = 0x8000000000000000;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE(&local_68);
  }
  else {
    auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (lVar5,param_2,param_3);
    lVar6 = auVar8._0_8_;
    if (lVar6 == 0) {
      ppuVar4 = &PTR_s_crates_ruff_python_formatter_src_0067db78;
      lVar6 = param_3;
LAB_0040c04f:
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                (param_2,param_3,lVar5,lVar6,ppuVar4);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
              (&local_68,lVar6,auVar8._8_8_ + lVar6);
    local_50[2] = local_58;
    *local_50 = local_68;
    local_50[1] = uStack_60;
  }
  return;
code_r0x0040be11:
  bVar7 = true;
  if (iVar3 != 0x2e) {
LAB_0040be00:
    bVar7 = false;
  }
  goto LAB_0040be02;
}