undefined  [16]
_ZN4just6parser6Parser9parse_ast15pop_doc_comment17h6e6b0063e8da67d5E(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_R14;
  undefined auVar7 [16];
  undefined auStack_128 [256];
  
  if ((param_2 == 0) && (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 8);
    if (*(long *)(lVar2 + -0x100 + lVar1 * 0x100) == -0x7ffffffffffffffe) {
      lVar5 = lVar1 * 0x100 + lVar2;
      uVar6 = *(undefined8 *)(lVar5 + -0xf8);
      uVar3 = *(undefined8 *)(lVar5 + -0xf0);
      auVar7 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                         (1,uVar6,uVar3);
      if (auVar7._0_8_ == 0) {
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
                  (uVar6,uVar3,1,uVar3,&PTR_DAT_005308a0);
        pcVar4 = (code *)swi(3);
        auVar7 = (*pcVar4)();
        return auVar7;
      }
      auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h646b688298f76263E
                         (auVar7._0_8_,auVar7._8_8_);
      unaff_R14 = auVar7._8_8_;
      uVar6 = auVar7._0_8_;
      *(long *)(param_1 + 0x10) = lVar1 + -1;
      (*(code *)PTR_memcpy_00565e28)(auStack_128,lVar2 + (lVar1 + -1) * 0x100,0x100);
      _ZN4core3ptr65drop_in_place_LT_core__option__Option_LT_just__item__Item_GT__GT_17h8b74df35f7f6bdd5E
                (auStack_128);
      goto LAB_0037a0af;
    }
  }
  uVar6 = 0;
LAB_0037a0af:
  auVar7._8_8_ = unaff_R14;
  auVar7._0_8_ = uVar6;
  return auVar7;
}