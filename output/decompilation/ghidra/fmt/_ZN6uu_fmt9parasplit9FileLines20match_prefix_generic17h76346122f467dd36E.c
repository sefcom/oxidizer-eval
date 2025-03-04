undefined  [16]
_ZN6uu_fmt9parasplit9FileLines20match_prefix_generic17h76346122f467dd36E
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,char param_5)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [12];
  long local_48;
  long local_40;
  undefined8 local_38;
  
  uVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hfb67edc00a317262E
                    (param_3,param_4,param_1,param_2);
  uVar6 = 0;
  if (((char)uVar3 == '\0') && (param_5 == '\0')) {
    local_40 = param_3 + param_4;
    local_38 = 0;
    local_48 = param_3;
    auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                       (&local_48);
    iVar4 = auVar8._8_4_;
    while (iVar4 != 0x110000) {
      uVar5 = auVar8._8_4_;
      uVar6 = auVar8._0_8_;
      auVar7 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                         (uVar6,param_3,param_4);
      if (auVar7._0_8_ == 0) {
        _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                  (param_3,param_4,uVar6,param_4,&PTR_s_src_uu_fmt_src_parasplit_rs_00226620);
        pcVar1 = (code *)swi(3);
        auVar7 = (*pcVar1)();
        return auVar7;
      }
      uVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hfb67edc00a317262E
                        (auVar7._0_8_,auVar7._8_8_,param_1,param_2);
      if ((char)uVar3 != '\0') {
        uVar3 = CONCAT71((int7)((ulong)uVar3 >> 8),1);
        goto LAB_001b9851;
      }
      if (((4 < uVar5 - 9) && (uVar5 != 0x20)) &&
         ((uVar5 < 0x80 ||
          (cVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE(uVar5),
          cVar2 == '\0')))) break;
      auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                         (&local_48);
      iVar4 = auVar8._8_4_;
    }
    uVar6 = 0;
    uVar3 = 0;
  }
LAB_001b9851:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar3;
  return auVar7;
}