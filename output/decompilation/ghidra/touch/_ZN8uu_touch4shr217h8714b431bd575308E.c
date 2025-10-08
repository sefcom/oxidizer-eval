undefined (*) [16]
_ZN8uu_touch4shr217h8714b431bd575308E(undefined (*param_1) [16],undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined (*pauVar4) [16];
  long lVar5;
  undefined local_50 [16];
  long local_40;
  long local_38;
  
  _ZN4core3str21__LT_impl_u20_str_GT_16split_at_checked17h496d55096ddfbaefE
            (local_50,param_2,param_3,param_3 + -2);
  lVar2 = local_40;
  uVar1 = local_50._8_8_;
  uVar3 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    lVar5 = local_38 + local_40;
    local_50 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h5234b02e90494cc1E
                         (param_3,1,1,&PTR_s__home_34r7hm4n__rustup_toolchain_003797d0);
    local_40 = 0;
                    /* try { // try from 00238d84 to 00238da6 has its CatchHandler @ 00238de2 */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17he55151bea8bec2a5E
              (local_50,lVar2,lVar5);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17he55151bea8bec2a5E
              (local_50,uVar3,uVar1 + uVar3);
    *(long *)param_1[1] = local_40;
    *param_1 = local_50;
    return param_1;
  }
  uVar3 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_003aa0b8)
                    (param_2,param_3,0,param_3 + -2,&PTR_s__home_34r7hm4n__rustup_toolchain_00379d10
                    );
                    /* catch() { ... } // from try @ 00238d84 with catch @ 00238de2 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hc61d8ef8308f20d8E(local_50);
  pauVar4 = (undefined (*) [16])_Unwind_Resume(uVar3);
  return pauVar4;
}