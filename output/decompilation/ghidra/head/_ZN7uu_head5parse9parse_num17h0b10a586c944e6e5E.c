long * _ZN7uu_head5parse9parse_num17h0b10a586c944e6e5E
                 (long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int extraout_EDX;
  long lVar5;
  bool bVar6;
  undefined auVar7 [16];
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h3f31f53537262b42E(param_2,param_3);
  lVar5 = auVar7._8_8_;
  lVar3 = auVar7._0_8_;
  lStack_48 = lVar3 + lVar5;
  local_50 = lVar3;
  iVar2 = _ZN4core3str11validations15next_code_point17hbd45400f08067c57E(&local_50);
  if (iVar2 == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h06f047f66f37fa7fE
              (param_1 + 1,param_2,param_3);
    *param_1 = 1;
  }
  else {
    if ((extraout_EDX == 0x2b) || (extraout_EDX == 0x2d)) {
      auVar7 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                         (lVar3,lVar5);
      if (auVar7._0_8_ == 0) {
        _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                  (lVar3,lVar5,1,lVar5,&PTR_s_src_uu_head_src_parse_rs_0022d098);
        pcVar1 = (code *)swi(3);
        plVar4 = (long *)(*pcVar1)();
        return plVar4;
      }
      bVar6 = extraout_EDX == 0x2d;
    }
    else {
      bVar6 = false;
    }
    auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h64aa6c7f4fac8ad0E
                       (auVar7._0_8_,auVar7._8_8_,0x30);
    if (auVar7._8_8_ == 0) {
      param_1[1] = 0;
    }
    else {
      _ZN6uucore6parser10parse_size14parse_size_u6417h6825c2c9656edafaE(&local_50,auVar7._0_8_);
      if ((int)local_50 != 3) {
        param_1[2] = local_40;
        param_1[3] = lStack_38;
        *param_1 = local_50;
        param_1[1] = lStack_48;
        return param_1;
      }
      param_1[1] = lStack_48;
    }
    *(bool *)(param_1 + 2) = bVar6;
    *param_1 = 3;
  }
  return param_1;
}