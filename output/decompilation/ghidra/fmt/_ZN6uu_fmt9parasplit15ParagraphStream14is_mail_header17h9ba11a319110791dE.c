undefined8 _ZN6uu_fmt9parasplit15ParagraphStream14is_mail_header17h9ba11a319110791dE(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  undefined8 uVar4;
  long extraout_RDX;
  ulong uVar5;
  undefined auVar6 [16];
  long local_28;
  long local_20;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hb830fba2111df73fE
                      (uVar5,uVar4,"From ",5);
    if (cVar1 != '\0') {
      return 1;
    }
    bVar2 = _ZN4core3str21__LT_impl_u20_str_GT_4find17hdd5d4e14db394534E(uVar5,uVar4);
    if ((extraout_RDX != 0 & bVar2) == 1) {
      auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                         (extraout_RDX,uVar5,uVar4);
      local_28 = auVar6._0_8_;
      if (local_28 == 0) {
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001f7098)
                  (uVar5,uVar4,0,extraout_RDX,&PTR_s_src_uu_fmt_src_parasplit_rs_001f04f0);
        uVar4 = _ZN4core3ops5range11RangeBounds8contains17h5b8ae313c7cf7c60E(uVar5 & 0xffffffff);
        return uVar4;
      }
      local_20 = auVar6._8_8_ + local_28;
      uVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hfc019a86165eac7fE(&local_28);
      uVar4 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h11ae78aea6a48c46E
                        (uVar3);
      return uVar4;
    }
  }
  return 0;
}