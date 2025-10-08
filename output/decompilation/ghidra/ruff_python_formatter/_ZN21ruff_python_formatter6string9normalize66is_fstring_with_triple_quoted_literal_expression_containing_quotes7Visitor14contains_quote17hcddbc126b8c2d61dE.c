void _ZN21ruff_python_formatter6string9normalize66is_fstring_with_triple_quoted_literal_expression_containing_quotes7Visitor14contains_quote17hcddbc126b8c2d61dE
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined auVar5 [16];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  auVar5 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                     (param_2,param_3);
  lVar4 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                    (auVar5._0_8_,auVar5._8_8_,uVar1,uVar2);
  if (lVar4 != 0) {
    _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
              (((param_4 & 1) == 0) * '\x05' + '\"',lVar4);
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
            (uVar1,uVar2,auVar5._0_8_,auVar5._8_8_,&PTR_s_crates_ruff_python_formatter_src_0067f808)
  ;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}