void _ZN2rg5flags3doc20render_custom_markup17h0fb1cb8c658149ecE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  char **local_c8;
  code *pcStack_c0;
  long local_b8;
  undefined local_a8 [16];
  undefined8 local_98;
  undefined4 *local_90;
  undefined *local_88;
  code *pcStack_80;
  long local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_40;
  undefined8 local_38;
  
  auVar7._8_8_ = param_3;
  auVar7._0_8_ = param_2;
  local_40 = "flag-negate";
  local_38 = 0xb;
  local_90 = param_1;
  local_a8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h02ccee15b84dfdd3E
                       (param_3,1,1,&PTR_s__rustc_bf64d66bd58719fac2585eae5_004e4678);
  local_98 = 0;
  local_c8 = &local_40;
  pcStack_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
  local_70 = &PTR_s__x_004ead28;
  local_68 = 2;
  local_50 = 0;
  local_58 = 1;
                    /* try { // try from 0034cf2a to 0034cf3a has its CatchHandler @ 0034d103 */
  local_60 = (undefined **)&local_c8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
            (&local_88,0,local_a8._8_8_,&local_70);
  local_b8 = local_78;
  do {
    lVar6 = auVar7._8_8_;
                    /* try { // try from 0034cf60 to 0034cffa has its CatchHandler @ 0034d118 */
    lVar5 = auVar7._0_8_;
    auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h2e6bfdbb875eb727E(lVar5,lVar6,&local_c8);
    lVar2 = auVar7._8_8_;
    if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                    /* try { // try from 0034d023 to 0034d100 has its CatchHandler @ 0034d11a */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
                (local_a8,lVar5,lVar6 + lVar5);
      *(undefined8 *)(local_90 + 4) = local_98;
      *local_90 = local_a8._0_4_;
      local_90[1] = local_a8._4_4_;
      local_90[2] = local_a8._8_4_;
      local_90[3] = local_a8._12_4_;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_c8);
      return;
    }
    auVar7 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (lVar2,lVar5,lVar6);
    lVar3 = auVar7._0_8_;
    if (lVar3 == 0) {
      lVar3 = 0;
      ppuVar4 = &PTR_DAT_004ead68;
      goto LAB_0034d0f2;
    }
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
              (local_a8,lVar3,auVar7._8_8_ + lVar3);
    lVar3 = lVar2 + local_b8;
    auVar7 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (lVar3,lVar5,lVar6);
    if (auVar7._0_8_ == 0) {
      ppuVar4 = &PTR_DAT_004ead80;
      lVar2 = lVar6;
      goto LAB_0034d0f2;
    }
    auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h93486ebb28bd6af0E(auVar7._0_8_,auVar7._8_8_)
    ;
    if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      pcStack_80 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_70 = &PTR_DAT_004ead48;
      local_68 = 2;
      local_50 = 0;
      local_60 = &local_88;
      local_58 = 1;
      local_88 = (undefined *)&local_c8;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00526780)
                (&local_70,&PTR_DAT_004ead98);
      goto LAB_0034d101;
    }
    lVar2 = auVar7._8_8_ + lVar3;
    auVar7 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                       (lVar3,lVar2,lVar5,lVar6);
    if (auVar7._0_8_ == 0) {
      ppuVar4 = &PTR_DAT_004eadb0;
      goto LAB_0034d0f2;
    }
    _ZN2rg5flags3doc3man13generate_flag28__u7b__u7b_closure_u7d__u7d_17h4e6e445adcbab60fE
              (auVar7._0_8_,auVar7._8_8_,local_a8);
    lVar3 = lVar2 + 1;
    auVar7 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (lVar3,lVar5,lVar6);
  } while (auVar7._0_8_ != 0);
  ppuVar4 = &PTR_DAT_004eadc8;
  lVar2 = lVar6;
LAB_0034d0f2:
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00526f78)
            (lVar5,lVar6,lVar3,lVar2,ppuVar4);
LAB_0034d101:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}