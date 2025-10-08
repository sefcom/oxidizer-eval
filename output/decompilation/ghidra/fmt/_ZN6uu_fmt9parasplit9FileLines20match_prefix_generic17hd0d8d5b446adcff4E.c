undefined  [16]
_ZN6uu_fmt9parasplit9FileLines20match_prefix_generic17hd0d8d5b446adcff4E
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,char param_5)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [12];
  long local_48;
  long local_40;
  undefined8 local_38;
  
  uVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hb830fba2111df73fE
                    (param_3,param_4,param_1);
  if (param_5 == '\0' && (char)uVar3 == '\0') {
    local_40 = param_3 + param_4;
    local_38 = 0;
    local_48 = param_3;
    auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                       (&local_48);
    if (auVar8._8_4_ == 0x110000) {
      uVar6 = 0;
      uVar5 = 0;
      goto LAB_00162a9a;
    }
    do {
      uVar3 = auVar8._8_4_;
      uVar6 = auVar8._0_8_;
      auVar7 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                         (uVar6,param_3,param_4);
      if (auVar7._0_8_ == 0) {
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001f7098)
                  (param_3,param_4,uVar6,param_4,&PTR_s_src_uu_fmt_src_parasplit_rs_001f04a8);
        pcVar1 = (code *)swi(3);
        auVar7 = (*pcVar1)();
        return auVar7;
      }
      uVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hb830fba2111df73fE
                        (auVar7._0_8_,auVar7._8_8_,param_1,param_2);
      uVar5 = (ulong)uVar4;
      if ((char)uVar4 != '\0') goto LAB_00162a9a;
    } while ((((uVar3 - 9 < 5) || (uVar3 == 0x20)) ||
             ((0x7f < uVar3 &&
              (cVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(uVar3)
              , cVar2 != '\0')))) &&
            (auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                                (&local_48), auVar8._8_4_ != 0x110000));
  }
  else {
    uVar5 = (ulong)uVar3;
  }
  uVar6 = 0;
LAB_00162a9a:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}