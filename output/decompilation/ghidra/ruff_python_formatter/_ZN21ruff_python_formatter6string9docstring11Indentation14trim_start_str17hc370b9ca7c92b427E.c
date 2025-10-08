undefined  [16]
_ZN21ruff_python_formatter6string9docstring11Indentation14trim_start_str17hc370b9ca7c92b427E
          (undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  long local_40;
  long local_38;
  
  auVar11._8_8_ = param_3;
  auVar11._0_8_ = param_2;
  uVar3 = _ZN21ruff_python_formatter6string9docstring11Indentation7columns17h9e266497152669caE();
  local_38 = param_2 + param_3;
  local_40 = param_2;
  auVar10 = _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(&local_40);
  uVar4 = auVar10._8_8_;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    uVar6 = 0;
    while( true ) {
      uVar5 = auVar11._8_8_;
      uVar9 = auVar11._0_8_;
      if (uVar3 <= uVar6) break;
      uVar7 = (uint)uVar4;
      if (uVar7 == 0x20) {
LAB_00426920:
        uVar6 = uVar6 + 1;
        lVar8 = 1;
LAB_00426929:
        auVar11 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                            (lVar8,uVar9,uVar5);
        if (auVar11._0_8_ == 0) {
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                    (uVar9,uVar5,lVar8,uVar5,&PTR_s_crates_ruff_python_formatter_src_0067f590);
LAB_00426a21:
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                    (uVar9,uVar5,1,uVar5,&PTR_s_crates_ruff_python_formatter_src_0067f578);
          pcVar1 = (code *)swi(3);
          auVar11 = (*pcVar1)();
          return auVar11;
        }
      }
      else {
        if (uVar7 != 9) {
          if (uVar7 - 9 < 5) goto LAB_00426920;
          if (uVar7 < 0x80) {
            return auVar11;
          }
          cVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE
                            (uVar4 & 0xffffffff);
          if (cVar2 == '\0') {
            return auVar11;
          }
          if (uVar7 < 0x800) {
            uVar6 = uVar6 + 2;
            lVar8 = 2;
          }
          else {
            lVar8 = 4 - (ulong)(uVar7 < 0x10000);
            uVar6 = uVar6 + lVar8;
          }
          goto LAB_00426929;
        }
        auVar11 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                            (1,uVar9,uVar5);
        if (auVar11._0_8_ == 0) goto LAB_00426a21;
        uVar6 = (uVar6 & 0xfffffffffffffff8) + 8;
      }
      auVar10 = _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(&local_40);
      uVar4 = auVar10._8_8_;
      if ((auVar10 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        return auVar11;
      }
    }
  }
  return auVar11;
}