void _ZN9uu_mktemp32find_last_contiguous_block_of_xs17h8856c2687abea15aE
               (long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong extraout_RDX;
  undefined uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  auVar4 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h6ddde4d1ca094418E(param_2,param_3);
  if (auVar4._0_8_ != 0) {
    uVar2 = auVar4._8_8_ + 3;
    if (uVar2 != 0) {
      uVar3 = uVar2 == param_3;
      if (param_3 <= uVar2) goto LAB_001bf00e;
      if (*(char *)(param_2 + uVar2) < -0x40) {
        do {
          uVar3 = 1;
          _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                    (param_2,param_3,0,uVar2,&PTR_s_src_uu_mktemp_src_mktemp_rs_00236a28);
          uVar2 = extraout_RDX;
LAB_001bf00e:
        } while (!(bool)uVar3);
      }
    }
    auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h5f0bced45080d5d4E(param_2,uVar2);
    lVar1 = _ZN4core6option15Option_LT_T_GT_6map_or17h073759538f04d9efE(auVar5._0_8_,auVar5._8_8_);
    param_1[1] = lVar1;
    param_1[2] = uVar2;
  }
  *param_1 = auVar4._0_8_;
  return;
}