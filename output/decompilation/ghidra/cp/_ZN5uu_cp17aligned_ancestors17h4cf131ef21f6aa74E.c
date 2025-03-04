undefined4 *
_ZN5uu_cp17aligned_ancestors17h4cf131ef21f6aa74E
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined local_a8 [8];
  undefined8 local_a0;
  long local_98;
  undefined local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined local_68;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17ha9a51cff601b0b6fE
            (local_a8);
                    /* try { // try from 00206311 to 00206320 has its CatchHandler @ 00206435 */
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17ha9a51cff601b0b6fE
            (local_90,param_4,param_5);
                    /* try { // try from 0020632f to 0020636c has its CatchHandler @ 0020643a */
  auVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17he83a069ad3b6613eE
                     (1,local_98 + -1,local_a0,local_98,
                      &PTR_s_src_uu_cp_src_cp_rs____warning__002b5f18);
  local_78 = 1;
  local_68 = 0;
  local_70 = auVar3._8_8_;
  auVar4 = _ZN115__LT_core__ops__range__RangeInclusive_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hce3f4665478ff52eE
                     (&local_78,local_88,local_80);
  local_c0 = 0;
  uStack_b8 = 8;
  local_b0 = 0;
  _ZN4core4iter6traits8iterator8Iterator3zip17hb514995cb38ea568E
            (&local_78,auVar3._0_8_,auVar3._8_8_ * 0x10 + auVar3._0_8_,auVar4._0_8_,
             auVar4._8_8_ * 0x10 + auVar4._0_8_);
  auVar3 = _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17h0c852af8ce20f45aE
                     (&local_78);
  if (auVar3._0_8_ != 0) {
    do {
      puVar2 = auVar3._8_8_;
      puVar1 = auVar3._0_8_;
      local_40 = *puVar1;
      uStack_3c = puVar1[1];
      uStack_38 = puVar1[2];
      uStack_34 = puVar1[3];
      local_30 = *puVar2;
      uStack_2c = puVar2[1];
      uStack_28 = puVar2[2];
      uStack_24 = puVar2[3];
                    /* try { // try from 002063e6 to 002063f0 has its CatchHandler @ 0020643f */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h1a85c61530c4026eE(&local_c0,&local_40);
      auVar3 = _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17h0c852af8ce20f45aE
                         (&local_78);
    } while (auVar3._0_8_ != 0);
  }
  *(undefined8 *)(param_1 + 4) = local_b0;
  *param_1 = (undefined4)local_c0;
  param_1[1] = local_c0._4_4_;
  param_1[2] = (undefined4)uStack_b8;
  param_1[3] = uStack_b8._4_4_;
                    /* try { // try from 0020640f to 00206418 has its CatchHandler @ 00206435 */
  _ZN4core3ptr63drop_in_place_LT_alloc__vec__Vec_LT__RF_std__path__Path_GT__GT_17hdc1f49bdf38a06e8E
            (local_90);
  _ZN4core3ptr63drop_in_place_LT_alloc__vec__Vec_LT__RF_std__path__Path_GT__GT_17hdc1f49bdf38a06e8E
            (local_a8);
  return param_1;
}