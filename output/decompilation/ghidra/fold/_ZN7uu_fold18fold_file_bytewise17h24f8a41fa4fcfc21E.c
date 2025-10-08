undefined  [16]
_ZN7uu_fold18fold_file_bytewise17h24f8a41fa4fcfc21E
          (undefined8 *param_1,undefined4 param_2,ulong param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_R14;
  ulong uVar7;
  ulong uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined **local_98;
  ulong local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_64;
  ulong local_60;
  ulong local_58;
  undefined8 *local_50;
  code *local_48;
  undefined local_40 [16];
  
  local_b0 = 0;
  local_a8 = 1;
  local_a0 = 0;
  local_64 = param_2;
  local_60 = param_3;
  do {
    uVar4 = _ZN3std2io16append_to_string17hb4ee5df90b2f96d8E(&local_b0,param_1);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h71ea541673afeda3E
              (&local_98,uVar4);
    ppuVar2 = local_98;
    uVar7 = local_a0;
    uVar6 = local_90;
    if ((local_98 != (undefined **)0x0) || (uVar6 = unaff_R14, local_90 == 0)) {
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd6746ad766958504E
                (local_b0,local_a8);
      _ZN4core3ptr101drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_mut_u20_dyn_u20_std__io__Read_GT__GT_17h19a3fdc7885eb034E
                (*param_1,param_1[1]);
      auVar9._8_8_ = uVar6;
      auVar9._0_8_ = ppuVar2;
      return auVar9;
    }
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3760bbb718d9d081E
                      (local_a8,local_a0,"\n",1);
    uVar6 = local_a0;
    uVar4 = local_a8;
    if (cVar3 == '\0') {
      if (uVar7 != 0) {
        local_58 = uVar7;
        uVar5 = local_60;
        if (uVar7 < local_60) {
          uVar5 = uVar7;
        }
        auVar9 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                           (0,uVar5,local_a8,local_a0);
        if (auVar9._0_8_ == 0) {
          uVar8 = 0;
LAB_0015bcc6:
                    /* try { // try from 0015bcc6 to 0015bcde has its CatchHandler @ 0015bcea */
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001ed2f8)
                    (uVar4,uVar6,uVar8,uVar5,&PTR_s_s_001e6bc0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar8 = 0;
        while( true ) {
          uVar7 = local_58;
          if (((char)local_64 != '\0') && (uVar5 < local_58)) {
            auVar10 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h6bd4e6b6c143b2e7E
                                (auVar9._0_8_,auVar9._8_8_);
            if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
              local_98 = (undefined **)0x0;
              local_88 = (undefined8 **)((ulong)local_88 & 0xffffffffffffff00);
                    /* try { // try from 0015bb43 to 0015bbf1 has its CatchHandler @ 0015bce8 */
              local_90 = auVar10._8_8_;
              auVar9 = _ZN4core3str6traits117__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeInclusive_LT_usize_GT__GT_5index17hc52fb59378bf613fE
                                 (&local_98,auVar9._0_8_,auVar9._8_8_);
            }
          }
          local_40 = auVar9;
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3760bbb718d9d081E
                            (auVar9._0_8_,auVar9._8_8_,"\n",1);
          if (cVar3 != '\0') goto LAB_0015ba61;
          uVar8 = uVar8 + auVar9._8_8_;
          local_50 = (undefined8 *)local_40;
          uVar5 = uVar7 - uVar8;
          if (uVar7 < uVar8 || uVar5 == 0) break;
          local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h16b66ac19e1327b7E;
          local_98 = (undefined **)&DAT_001e6ba0;
          local_90 = 2;
          uStack_78 = 0;
          local_88 = &local_50;
          local_80 = 1;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ed378)(&local_98);
          uVar6 = local_a0;
          uVar4 = local_a8;
          if (local_60 <= uVar5) {
            uVar5 = local_60;
          }
          uVar5 = uVar5 + uVar8;
          auVar9 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                             (uVar8,uVar5,local_a8,local_a0);
          if (auVar9._0_8_ == 0) goto LAB_0015bcc6;
        }
        local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h16b66ac19e1327b7E;
        local_98 = (undefined **)&DAT_00117f60;
        local_90 = 1;
        uStack_78 = 0;
        local_88 = &local_50;
        local_80 = 1;
                    /* try { // try from 0015bc72 to 0015bc7c has its CatchHandler @ 0015bce1 */
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ed378)(&local_98);
      }
    }
    else {
      local_98 = &PTR_s__001e6b90;
      local_90 = 1;
      local_88 = (undefined8 **)&DAT_00000008;
      local_80 = 0;
      uStack_78 = 0;
                    /* try { // try from 0015ba56 to 0015ba80 has its CatchHandler @ 0015bce3 */
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ed378)(&local_98);
    }
LAB_0015ba61:
    _ZN5alloc6string6String8truncate17h4c9243e558c5f483E(&local_b0);
    unaff_R14 = uVar7;
  } while( true );
}