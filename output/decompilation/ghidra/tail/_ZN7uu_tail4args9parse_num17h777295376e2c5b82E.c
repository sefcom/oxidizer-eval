void _ZN7uu_tail4args9parse_num17h777295376e2c5b82E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined auVar6 [12];
  long local_58;
  long local_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h7d9223cb22f63277E(param_2,param_3);
  lVar4 = auVar5._8_8_;
  lVar2 = auVar5._0_8_;
  local_50 = lVar4 + lVar2;
  local_58 = lVar2;
  auVar6 = _ZN4core3str11validations15next_code_point17h4e3882b40d59c120E(&local_58);
  if ((auVar6 & (undefined  [12])0x1) != (undefined  [12])0x0) {
    if (auVar6._8_4_ == 0x2b) {
      auVar5 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                         (1,lVar2,lVar4);
      if (auVar5._0_8_ == 0) {
LAB_001a01d1:
        uVar3 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_0027d7a8)
                          (lVar2,lVar4,1,lVar4,&PTR_DAT_00273168);
                    /* catch() { ... } // from try @ 001a0168 with catch @ 001a01ec */
        _ZN4core3ptr107drop_in_place_LT_core__result__Result_LT_u64_C_uucore__features__parser__parse_size__ParseSizeError_GT__GT_17hf3bc7b467f48f35cE
                  (&local_58);
        _Unwind_Resume(uVar3);
        return;
      }
      bVar1 = true;
      goto LAB_001a0136;
    }
    if (auVar6._8_4_ == 0x2d) {
      auVar5 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                         (1,lVar2,lVar4);
      if (auVar5._0_8_ == 0) goto LAB_001a01d1;
      bVar1 = false;
      goto LAB_001a0136;
    }
  }
  bVar1 = false;
LAB_001a0136:
  (*(code *)PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_0027d7a0)
            (&local_58,auVar5._0_8_,auVar5._8_8_);
  if ((int)local_58 == 4) {
    if (local_50 == 0) {
      if (bVar1) {
        param_1[1] = 2;
      }
      else {
        param_1[1] = 3;
      }
    }
    else if (bVar1) {
      param_1[1] = 1;
      param_1[2] = local_50;
    }
    else {
      param_1[1] = 0;
      param_1[2] = local_50;
    }
    uVar3 = 4;
  }
  else {
                    /* try { // try from 001a0168 to 001a0177 has its CatchHandler @ 001a01ec */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha6b2ce04d4e70875E
              (&local_38,auVar5._0_8_,auVar5._8_8_);
    param_1[3] = local_28;
    *(undefined4 *)(param_1 + 1) = local_38;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_34;
    *(undefined4 *)(param_1 + 2) = uStack_30;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_2c;
    uVar3 = 1;
  }
  *param_1 = uVar3;
  _ZN4core3ptr107drop_in_place_LT_core__result__Result_LT_u64_C_uucore__features__parser__parse_size__ParseSizeError_GT__GT_17hf3bc7b467f48f35cE
            (&local_58);
  return;
}