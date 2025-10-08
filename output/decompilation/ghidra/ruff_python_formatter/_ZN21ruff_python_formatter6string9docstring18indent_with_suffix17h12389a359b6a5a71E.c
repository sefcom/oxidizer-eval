long _ZN21ruff_python_formatter6string9docstring18indent_with_suffix17h12389a359b6a5a71E
               (undefined (*param_1) [16],undefined8 param_2,ulong param_3)

{
  char cVar1;
  undefined uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined8 uStack_60;
  long lStack_58;
  undefined uStack_50;
  undefined (*pauStack_48) [16];
  code *pcStack_40;
  
  pcStack_40 = (code *)0x426a90;
  auVar4 = (*(code *)
             PTR__ZN72__LT_str_u20_as_u20_ruff_python_trivia__whitespace__PythonWhitespace_GT_21trim_whitespace_start17h664fc8ac076cf662E_006be120
           )(param_2,param_3);
  lVar3 = param_3 - auVar4._8_8_;
  if (param_3 < auVar4._8_8_) {
    pcStack_40 = (code *)0x426ae8;
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
              ("suffix <= lineassertion failed: string.is_implicit_concatenated()",0xe,
               &PTR_s_crates_ruff_python_formatter_src_0067f5c0);
  }
  else {
    pcStack_40 = (code *)0x426aac;
    auVar5 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (lVar3,param_2,param_3);
    if (auVar5._0_8_ != 0) {
      *param_1 = auVar5;
      param_1[1] = auVar4;
      return auVar5._0_8_;
    }
  }
  pcStack_40 = _ZN21ruff_python_formatter6string9docstring13is_rst_option17h85d4d44a3db9c66fE;
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
            (param_2,param_3,0,lVar3,&PTR_s_crates_ruff_python_formatter_src_0067f5a8);
  pauStack_48 = param_1;
  pcStack_40 = (code *)param_3;
  auVar4 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17hd401112d4c765288E();
  lVar3 = auVar4._0_8_;
  uStack_60 = (ulong)uStack_60._4_4_ << 0x20;
  auVar5 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x3a,&uStack_60);
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                    (lVar3,auVar4._8_8_,auVar5._0_8_,auVar5._8_8_);
  if (cVar1 != '\0') {
    lStack_58 = auVar4._8_8_ + lVar3;
    uStack_50 = 0;
    uStack_60 = lVar3;
    uVar2 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17ha107697c28683076E
                      (&uStack_60);
    lVar3 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                      (uVar2,1);
    return lVar3;
  }
  return 0;
}