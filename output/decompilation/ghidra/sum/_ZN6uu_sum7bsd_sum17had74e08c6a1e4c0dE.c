void _ZN6uu_sum7bsd_sum17had74e08c6a1e4c0dE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined8 local_1040;
  undefined8 local_1030 [512];
  
  local_1030[0] = 0;
  local_1040 = 0;
  (*(code *)PTR_memset_001e8380)(local_1030,0,0x1000);
  uVar4 = 0;
  do {
    while( true ) {
                    /* try { // try from 00154440 to 0015444d has its CatchHandler @ 00154512 */
      auVar5 = _ZN3std2io5impls70__LT_impl_u20_std__io__Read_u20_for_u20_alloc__boxed__Box_LT_R_GT__GT_4read17h791f7fb0e274ba22E
                         (param_2,param_3,local_1030);
      lVar3 = auVar5._8_8_;
      if ((auVar5 & (undefined  [16])0x1) != (undefined  [16])0x0) break;
      if (lVar3 == 0) {
        param_1[1] = ((uVar4 >> 10) + 1) - (ulong)((uVar4 & 0x3ff) == 0);
        *(short *)(param_1 + 2) = (short)local_1040;
        uVar2 = 0;
LAB_001544b2:
        *param_1 = uVar2;
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h5ecc831ddc7a04edE
                  (param_2,param_3);
        return;
      }
                    /* try { // try from 00154475 to 00154486 has its CatchHandler @ 001544fe */
      auVar5 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h7c38171c70972876E
                         (lVar3,local_1030,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001e1150);
      uVar4 = uVar4 + lVar3;
      local_1040 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17hd7512954fe2c6365E
                             (auVar5._0_8_,auVar5._8_8_ + auVar5._0_8_,local_1040);
    }
    cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar3);
    if (cVar1 != '#') {
      param_1[1] = lVar3;
      uVar2 = 1;
      goto LAB_001544b2;
    }
                    /* try { // try from 00154466 to 0015446d has its CatchHandler @ 00154510 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5d0502746400dd7dE(lVar3);
  } while( true );
}