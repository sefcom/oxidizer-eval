undefined **
_ZN7uu_fold18fold_file_bytewise17h3af11a64241fe044E
          (undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined **local_98;
  long local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_64;
  undefined local_60 [16];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  code *local_38;
  
  local_b0 = 0;
  local_a8 = 1;
  local_a0 = (undefined8 *)0x0;
  local_64 = param_2;
  local_50 = param_3;
  do {
    uVar2 = _ZN3std2io16append_to_string17h03d08dbf90a74f4aE(&local_b0,param_1);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17ha34f519a25036496E
              (&local_98,uVar2);
    ppuVar3 = local_98;
    if (local_98 != (undefined **)0x0) {
                    /* try { // try from 001b1c9a to 001b1caf has its CatchHandler @ 001b1cf5 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he0f0171ff9caf1b3E(&local_b0);
LAB_001b1cb0:
      _ZN4core3ptr101drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_mut_u20_dyn_u20_std__io__Read_GT__GT_17hd2a31b9451a7f555E
                (*param_1,param_1[1]);
      return ppuVar3;
    }
    if (local_90 == 0) {
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he0f0171ff9caf1b3E(&local_b0);
      goto LAB_001b1cb0;
    }
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5f12374e656de98eE
                      (local_a8,local_a0,"\n",1);
    uVar2 = local_a8;
    if (cVar1 == '\0') {
      if (local_a0 != (undefined8 *)0x0) {
        puVar4 = local_50;
        if (local_a0 < local_50) {
          puVar4 = local_a0;
        }
        local_48 = local_a0;
        auVar7 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                           (0,puVar4,local_a8);
        if (auVar7._0_8_ == 0) {
          puVar6 = (undefined8 *)0x0;
          puVar5 = local_48;
LAB_001b1cdc:
                    /* try { // try from 001b1cdc to 001b1cf4 has its CatchHandler @ 001b1d01 */
          uVar2 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                            (uVar2,puVar5,puVar6,puVar4,&PTR_s_src_uu_fold_src_fold_rs_0021a988);
                    /* catch() { ... } // from try @ 001b1c9a with catch @ 001b1cf5 */
          _ZN4core3ptr101drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_mut_u20_dyn_u20_std__io__Read_GT__GT_17hd2a31b9451a7f555E
                    (*puVar6,puVar6[1]);
          ppuVar3 = (undefined **)_Unwind_Resume(uVar2);
          return ppuVar3;
        }
        puVar6 = (undefined8 *)0x0;
        while( true ) {
          puVar5 = local_48;
          if ((puVar4 < local_48) && ((char)local_64 != '\0')) {
            auVar8 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h608a144437da32c7E
                               (auVar7._0_8_,auVar7._8_8_);
            if (auVar8._0_8_ != 0) {
              local_98 = (undefined **)0x0;
              local_88 = (undefined8 **)((ulong)local_88 & 0xffffffffffffff00);
                    /* try { // try from 001b1b54 to 001b1bf8 has its CatchHandler @ 001b1d03 */
              local_90 = auVar8._8_8_;
              auVar7 = _ZN4core3str6traits117__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeInclusive_LT_usize_GT__GT_5index17h3fe2ad0e36dabac9E
                                 (&local_98,auVar7._0_8_,auVar7._8_8_);
            }
          }
          local_60 = auVar7;
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5f12374e656de98eE
                            (auVar7._0_8_,auVar7._8_8_,"\n",1);
          if (cVar1 != '\0') goto LAB_001b1a81;
          puVar6 = (undefined8 *)((long)puVar6 + local_60._8_8_);
          local_40 = (undefined8 *)local_60;
          puVar4 = (undefined8 *)((long)puVar5 - (long)puVar6);
          if (puVar5 < puVar6 || puVar4 == (undefined8 *)0x0) break;
          local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha398d9e18c3ebe29E;
          local_98 = (undefined **)&DAT_0021a968;
          local_90 = 2;
          uStack_78 = 0;
          local_88 = &local_40;
          local_80 = 1;
          _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_98);
          puVar5 = local_a0;
          uVar2 = local_a8;
          if (local_50 <= puVar4) {
            puVar4 = local_50;
          }
          puVar4 = (undefined8 *)((long)puVar4 + (long)puVar6);
          auVar7 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                             (puVar6,puVar4,local_a8,local_a0);
          if (auVar7._0_8_ == 0) goto LAB_001b1cdc;
        }
        local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha398d9e18c3ebe29E;
        local_98 = (undefined **)&DAT_00114600;
        local_90 = 1;
        uStack_78 = 0;
        local_88 = &local_40;
        local_80 = 1;
                    /* try { // try from 001b1c7c to 001b1c86 has its CatchHandler @ 001b1cfa */
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_98);
      }
    }
    else {
      local_98 = &PTR_s__0021a958;
      local_90 = 1;
      local_88 = (undefined8 **)&DAT_00000008;
      local_80 = 0;
      uStack_78 = 0;
                    /* try { // try from 001b1a76 to 001b1ad5 has its CatchHandler @ 001b1cfc */
      _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_98);
    }
LAB_001b1a81:
    _ZN5alloc6string6String8truncate17hafe089c60c3201e9E(&local_b0);
  } while( true );
}