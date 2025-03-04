undefined8 _ZN6uu_fmt9parasplit15ParagraphStream14is_mail_header17h9700490a74650aecE(long param_1)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined uVar6;
  undefined auVar7 [16];
  long local_20;
  long local_18;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar1 = *(long *)(param_1 + 8);
    uVar2 = *(ulong *)(param_1 + 0x10);
    cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hfb67edc00a317262E
                      (lVar1,uVar2,"From ",5);
    uVar4 = 1;
    if (cVar3 == '\0') {
      auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h92b5562c589406cdE(lVar1,uVar2);
      uVar5 = auVar7._8_8_;
      uVar4 = 0;
      if ((auVar7._0_8_ != 0) && (uVar5 != 0)) {
        uVar6 = uVar5 == uVar2;
        if (uVar2 <= uVar5) goto LAB_001b9c7e;
        if (*(char *)(lVar1 + uVar5) < -0x40) {
          do {
            uVar6 = 1;
            _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE(lVar1,uVar2);
LAB_001b9c7e:
          } while (!(bool)uVar6);
        }
        local_18 = uVar5 + lVar1;
        local_20 = lVar1;
        uVar6 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h78ccae77746afe6cE(&local_20);
        uVar4 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h162bfb0b12d90eb8E
                          (uVar6);
        return uVar4;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}