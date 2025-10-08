void _ZN6uu_sum8sysv_sum17h712a5fcd71af1ffcE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined auVar6 [16];
  ulong local_1040;
  undefined8 local_1030 [512];
  
  local_1030[0] = 0;
  uVar2 = 0;
  (*(code *)PTR_memset_001e8380)(local_1030,0,0x1000);
  local_1040 = 0;
  do {
    while( true ) {
                    /* try { // try from 00154590 to 0015459d has its CatchHandler @ 00154673 */
      auVar6 = _ZN3std2io5impls70__LT_impl_u20_std__io__Read_u20_for_u20_alloc__boxed__Box_LT_R_GT__GT_4read17h791f7fb0e274ba22E
                         (param_2,param_3,local_1030);
      lVar4 = auVar6._8_8_;
      if ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0) break;
      if (lVar4 == 0) {
        iVar5 = (uVar2 >> 0x10) + (uVar2 & 0xffff);
        param_1[1] = ((local_1040 >> 9) + 1) - (ulong)((local_1040 & 0x1ff) == 0);
        *(short *)(param_1 + 2) = (short)((uint)iVar5 >> 0x10) + (short)iVar5;
        uVar3 = 0;
LAB_00154600:
        *param_1 = uVar3;
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h5ecc831ddc7a04edE
                  (param_2,param_3);
        return;
      }
                    /* try { // try from 001545c5 to 001545d6 has its CatchHandler @ 0015465f */
      auVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h7c38171c70972876E
                         (lVar4,local_1030,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001e1168);
      local_1040 = local_1040 + lVar4;
      uVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h294b17057650bcf1E
                        (auVar6._0_8_,auVar6._8_8_ + auVar6._0_8_,uVar2);
    }
    cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar4);
    if (cVar1 != '#') {
      param_1[1] = lVar4;
      uVar3 = 1;
      goto LAB_00154600;
    }
                    /* try { // try from 001545b6 to 001545bd has its CatchHandler @ 00154671 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5d0502746400dd7dE(lVar4);
  } while( true );
}