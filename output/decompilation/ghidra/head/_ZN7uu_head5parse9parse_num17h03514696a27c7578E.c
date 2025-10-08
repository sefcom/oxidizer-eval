void _ZN7uu_head5parse9parse_num17h03514696a27c7578E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  undefined auVar6 [16];
  undefined auVar7 [12];
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  auVar6 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h3dd4052efcf88c0eE(param_2,param_3);
  lVar4 = auVar6._8_8_;
  lVar2 = auVar6._0_8_;
  lStack_48 = lVar2 + lVar4;
  local_50 = lVar2;
  auVar7 = _ZN4core3str11validations15next_code_point17h2ff41328517a3a4fE(&local_50);
  iVar3 = auVar7._8_4_;
  if ((auVar7 & (undefined  [12])0x1) == (undefined  [12])0x0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc3a09e7815fd3a4cE
              (param_1 + 1,param_2,param_3);
    *param_1 = 1;
  }
  else {
    if ((iVar3 == 0x2b) || (iVar3 == 0x2d)) {
      auVar6 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                         (lVar2,lVar4);
      if (auVar6._0_8_ == 0) {
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001fe8a0)
                  (lVar2,lVar4,1,lVar4,&PTR_s_src_uu_head_src_parse_rs_001f7ae8);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar5 = iVar3 == 0x2d;
    }
    else {
      bVar5 = false;
    }
    auVar6 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h92d05917bc16c8c8E
                       (auVar6._0_8_,auVar6._8_8_);
    if (auVar6._8_8_ == 0) {
      param_1[1] = 0;
    }
    else {
      (*(code *)
        PTR__ZN6uucore8features6parser10parse_size18parse_size_u64_max17hec104ac5ce610c62E_001fe8b0)
                (&local_50,auVar6._0_8_);
      if ((int)local_50 != 4) {
        param_1[2] = local_40;
        param_1[3] = lStack_38;
        *param_1 = local_50;
        param_1[1] = lStack_48;
        return;
      }
      param_1[1] = lStack_48;
    }
    *(bool *)(param_1 + 2) = bVar5;
    *param_1 = 4;
  }
  return;
}