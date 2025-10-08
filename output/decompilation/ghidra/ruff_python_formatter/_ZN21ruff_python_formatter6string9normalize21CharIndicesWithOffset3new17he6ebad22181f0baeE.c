void _ZN21ruff_python_formatter6string9normalize21CharIndicesWithOffset3new17he6ebad22181f0baeE
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined auVar3 [16];
  
  auVar3 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                     (param_4);
  lVar2 = auVar3._0_8_;
  if (lVar2 != 0) {
    *param_1 = lVar2;
    param_1[1] = auVar3._8_8_ + lVar2;
    param_1[2] = param_4;
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
            (param_2,param_3,param_4,param_3,&PTR_s_crates_ruff_python_formatter_src_0067f7a8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}