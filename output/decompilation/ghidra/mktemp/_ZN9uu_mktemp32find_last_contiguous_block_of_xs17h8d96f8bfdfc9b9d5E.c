void _ZN9uu_mktemp32find_last_contiguous_block_of_xs17h8d96f8bfdfc9b9d5E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  
  auVar4 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h3ea40a8a7df4209cE(param_2,param_3);
  if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar2 = 0;
  }
  else {
    lVar3 = auVar4._8_8_ + 3;
    auVar4 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (lVar3,param_2,param_3);
    if (auVar4._0_8_ == 0) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_002000c8)
                (param_2,param_3,0,lVar3,&PTR_s_src_uu_mktemp_src_mktemp_rs_001f8fb8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    auVar4 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h7a5049edaccade27E
                       (auVar4._0_8_,auVar4._8_8_);
    uVar2 = _ZN4core6option15Option_LT_T_GT_6map_or17hda51459bca63de71E(auVar4._0_8_,auVar4._8_8_);
    param_1[1] = uVar2;
    param_1[2] = lVar3;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}