undefined8 *
_ZN7uu_head5parse14parse_obsolete17hee0b1fdae7af2962E(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_EDX;
  long lVar4;
  ulong uVar5;
  undefined auVar6 [16];
  undefined auVar7 [12];
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_40 = param_2 + param_3;
  local_38 = 0;
  local_48 = param_2;
  auVar7 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                     (&local_48);
  if ((auVar7._8_4_ == 0x2d) &&
     (_ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                (&local_48), extraout_EDX - 0x30U < 10)) {
    lVar4 = auVar7._0_8_ + 1;
    do {
      auVar6 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                         (&local_48);
      lVar2 = auVar6._0_8_;
      if (auVar6._8_4_ == 0x110000) {
        uVar5 = 0;
        lVar2 = param_3;
        break;
      }
      uVar5 = auVar6._8_8_ & 0xffffffff;
    } while (auVar6._8_4_ - 0x30U < 10);
    auVar6 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                       (lVar4,lVar2,param_2,param_3);
    if (auVar6._0_8_ == 0) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001fe8a0)
                (param_2,param_3,lVar4,lVar2,&PTR_s_src_uu_head_src_parse_rs_001f7a28);
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined8 *)(*pcVar1)();
      return puVar3;
    }
    _ZN7uu_head5parse17process_num_block17hda0983907d92f9a0E
              (param_1,auVar6._0_8_,auVar6._8_8_,uVar5,&local_48);
  }
  else {
    *param_1 = 0x8000000000000001;
  }
  return param_1;
}