ulong _ZN21ruff_python_formatter8verbatim11Indentation9from_stmt17hc466a24ed7083ab9E
                (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 unaff_R12;
  undefined auVar7 [16];
  undefined auVar8 [16];
  long local_38;
  long local_30;
  
  auVar7._8_8_ = unaff_R12;
  auVar7._0_8_ = param_1;
  uVar2 = _ZN83__LT_ruff_python_ast__generated__Stmt_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h6da43eeee2e8d007E
                    ();
  uVar3 = (*(code *)
            PTR__ZN65__LT_str_u20_as_u20_ruff_source_file__line_ranges__LineRanges_GT_10line_start17h88cc009d0f122bfeE_006be1a0
          )(param_2,param_3,uVar2);
  uVar4 = _ZN83__LT_ruff_python_ast__generated__Stmt_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h6da43eeee2e8d007E
                    (param_1);
  if (uVar4 < uVar3) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067fa68);
  }
  else {
    auVar7 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                       (uVar3,uVar4);
    auVar8 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                       (auVar7._0_8_,auVar7._8_8_,param_2,param_3);
    local_38 = auVar8._0_8_;
    if (local_38 != 0) {
      local_30 = auVar8._8_8_ + local_38;
      auVar7 = _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(&local_38);
      uVar6 = auVar7._8_8_;
      uVar3 = 0;
      if ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        uVar3 = 0;
        do {
          if (((int)uVar6 != 9) && ((int)uVar6 != 0x20)) break;
          uVar3 = uVar3 + 1;
          auVar7 = _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(&local_38);
          uVar6 = auVar7._8_8_;
        } while ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0);
      }
      return (ulong)uVar3;
    }
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
            (param_2,param_3,auVar7._0_8_,auVar7._8_8_,
             &PTR_s_crates_ruff_python_formatter_src_0067fa80);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}