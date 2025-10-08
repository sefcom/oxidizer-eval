void _ZN21ruff_python_formatter8comments9placement28are_parameters_parenthesized17hc4bf8dd1314cbfd0E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  uint in_EAX;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  auVar2 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                     ();
  auVar3 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                     (auVar2._0_8_,auVar2._8_8_,param_3,param_4);
  if (auVar3._0_8_ != 0) {
    uStack_38 = (ulong)(uint)uStack_38;
    auVar2 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x28,(long)&uStack_38 + 4);
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
              (auVar3._0_8_,auVar3._8_8_,auVar2._0_8_,auVar2._8_8_);
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
            (param_3,param_4,auVar2._0_8_,auVar2._8_8_,&PTR_DAT_0067d420);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}