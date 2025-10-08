undefined8
_ZN21ruff_python_formatter6string9docstring19CodeExampleMarkdown6is_end17ha9cdf7b4e1783aa6E
          (long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  long local_38;
  long local_30;
  long local_28;
  undefined local_20;
  undefined7 uStack_1f;
  
  _ZN21ruff_python_formatter6string9docstring18indent_with_suffix17h12389a359b6a5a71E(&local_38);
  lVar3 = local_28;
  lVar2 = CONCAT71(uStack_1f,local_20);
  cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                    (local_28,lVar2,"```",3);
  if ((cVar4 == '\0') &&
     (cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                        (local_28,lVar2,"~~~",3), cVar4 == '\0')) {
    return 0;
  }
  local_30 = local_28 + lVar2;
  local_38 = local_28;
  local_20 = 0;
  local_28 = param_1;
  uVar6 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h4e671f5b6eecc8f3E
                    (&local_38);
  if (uVar6 < *(ulong *)(param_1 + 0x30)) {
    return 0;
  }
  auVar9 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                     (uVar6,lVar3,lVar2);
  lVar7 = auVar9._0_8_;
  if (lVar7 == 0) {
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
              (lVar3,lVar2,uVar6,lVar2,&PTR_s_crates_ruff_python_formatter_src_0067f4f8);
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  local_30 = auVar9._8_8_ + lVar7;
  local_38 = lVar7;
  uVar5 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hdeb9c8256045f284E(&local_38);
  uVar8 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                    (uVar5,0);
  return uVar8;
}