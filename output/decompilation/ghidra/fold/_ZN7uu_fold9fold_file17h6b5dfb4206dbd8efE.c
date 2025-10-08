undefined  [16]
_ZN7uu_fold9fold_file17h6b5dfb4206dbd8efE(undefined8 *param_1,uint param_2,ulong param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong unaff_R13;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined auVar13 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined local_c8 [16];
  undefined8 *local_b8;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  uint local_54;
  ulong local_50;
  ulong local_48;
  long local_40;
  long local_38;
  
  local_70 = 0;
  local_68 = 1;
  local_60 = 0;
  local_e0 = 0;
  local_d8 = 1;
  local_d0 = 0;
  local_48 = (ulong)param_2;
  uVar11 = 0;
  uVar5 = 0;
  local_78 = param_1;
  local_54 = param_2;
  local_50 = param_3;
LAB_0015be02:
                    /* try { // try from 0015be02 to 0015be1b has its CatchHandler @ 0015c263 */
  uVar3 = _ZN3std2io16append_to_string17hb4ee5df90b2f96d8E(&local_70,local_78);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h71ea541673afeda3E
            (&local_a8,uVar3);
  auVar13._8_8_ = local_a0;
  auVar13._0_8_ = local_a8;
  if ((local_a8 != (undefined *)0x0) || (local_a0 == 0)) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd6746ad766958504E(local_e0,local_d8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd6746ad766958504E(local_70,local_68);
    _ZN4core3ptr101drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_mut_u20_dyn_u20_std__io__Read_GT__GT_17h19a3fdc7885eb034E
              (*local_78,local_78[1]);
    return auVar13;
  }
  local_38 = local_60 + local_68;
  local_40 = local_68;
  do {
    auVar13 = _ZN4core3str11validations15next_code_point17h22c36519b8a1e543E(&local_40);
    uVar9 = local_d0;
    uVar3 = local_d8;
    puVar7 = (undefined *)(auVar13._8_8_ & 0xffffffff);
    if ((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      puVar7 = &DAT_00110000;
    }
    uVar6 = (uint)puVar7;
    if (uVar6 == 10) {
      auVar13 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                          (local_d0,local_d8,local_d0);
      if (auVar13._0_8_ == 0) {
        ppuVar8 = &PTR_s_s_001e6bf0;
        uVar10 = uVar9;
LAB_0015c23b:
                    /* try { // try from 0015c23b to 0015c24b has its CatchHandler @ 0015c267 */
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001ed2f8)
                  (uVar3,uVar9,0,uVar10,ppuVar8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_b8 = (undefined8 *)local_c8;
      local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h16b66ac19e1327b7E;
      local_a8 = &DAT_001e6ba0;
      local_a0 = 2;
      local_88 = 0;
      local_98 = &local_b8;
      local_90 = 1;
                    /* try { // try from 0015c162 to 0015c1e4 has its CatchHandler @ 0015c263 */
      local_c8 = auVar13;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ed378)(&local_a8);
      _ZN5alloc6string6String13replace_range17h6440f5464c1e7598E(&local_e0,uVar9);
      uVar11 = 0;
      uVar5 = local_d0;
      if (local_d0 == 0) goto LAB_0015bdfa;
      goto LAB_0015bdf0;
    }
    if (uVar6 == 0x110000) break;
    uVar4 = uVar5;
    uVar10 = unaff_R13;
    if (local_50 <= uVar5) {
      uVar10 = local_d0;
      if ((uVar11 & 1) != 0) {
        uVar10 = unaff_R13 + 1;
      }
      auVar13 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                          (uVar10,local_d8,local_d0);
      if (auVar13._0_8_ == 0) {
        ppuVar8 = &PTR_s_s_001e6c08;
        goto LAB_0015c23b;
      }
      local_b8 = (undefined8 *)local_c8;
      local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h16b66ac19e1327b7E;
      local_a8 = &DAT_001e6ba0;
      local_a0 = 2;
      local_88 = 0;
      local_98 = &local_b8;
      local_90 = 1;
      local_c8 = auVar13;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ed378)(&local_a8);
      _ZN5alloc6string6String13replace_range17h6440f5464c1e7598E(&local_e0,uVar10);
      uVar11 = 0;
      uVar4 = local_d0;
    }
    uVar9 = local_d0;
    uVar3 = local_d8;
    unaff_R13 = uVar10;
    uVar12 = uVar11;
    if (uVar6 == 8) {
      uVar5 = uVar4 - 1;
      if (uVar4 == 0) {
        uVar5 = 0;
      }
    }
    else if (uVar6 == 9) {
      uVar5 = (uVar4 & 0xfffffffffffffff8) + 8;
      unaff_R13 = local_d0;
      uVar12 = local_48;
      if (local_50 < uVar5) {
        if (local_d0 == 0) {
          unaff_R13 = 0;
        }
        else {
          uVar10 = uVar10 + 1;
          if ((uVar11 & 1) == 0) {
            uVar10 = local_d0;
          }
          auVar13 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                              (uVar10,local_d8,local_d0);
          if (auVar13._0_8_ == 0) {
            ppuVar8 = &PTR_s_s_001e6c20;
            goto LAB_0015c23b;
          }
          local_b8 = (undefined8 *)local_c8;
          local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h16b66ac19e1327b7E;
          local_a8 = &DAT_001e6ba0;
          local_a0 = 2;
          local_88 = 0;
          local_98 = &local_b8;
          local_90 = 1;
          local_c8 = auVar13;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ed378)(&local_a8);
          _ZN5alloc6string6String13replace_range17h6440f5464c1e7598E(&local_e0,uVar10);
          unaff_R13 = local_d0;
          uVar12 = local_48;
        }
      }
    }
    else if (uVar6 == 0xd) {
      uVar5 = 0;
    }
    else {
      if ((char)local_54 != '\0') {
        if ((uVar6 < 0x21) && ((0x100003800U >> ((ulong)puVar7 & 0x3f) & 1) != 0)) {
LAB_0015c081:
          uVar5 = uVar4 + 1;
          unaff_R13 = local_d0;
          uVar12 = 1;
          goto LAB_0015be7d;
        }
        if (0x7f < uVar6) {
          cVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(puVar7);
          if (cVar2 != '\0') goto LAB_0015c081;
        }
      }
      uVar5 = uVar4 + 1;
    }
LAB_0015be7d:
                    /* try { // try from 0015be7d to 0015c056 has its CatchHandler @ 0015c265 */
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_e0,puVar7);
    uVar11 = uVar12;
  } while( true );
  if (local_d0 != 0) {
LAB_0015bdf0:
    local_c8._0_8_ = &local_e0;
    local_c8._8_8_ =
         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_a8 = &DAT_00117f60;
    local_a0 = 1;
    local_88 = 0;
    local_98 = (undefined8 **)local_c8;
    local_90 = 1;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ed378)(&local_a8);
    _ZN5alloc6string6String8truncate17h4c9243e558c5f483E(&local_e0);
  }
LAB_0015bdfa:
  _ZN5alloc6string6String8truncate17h4c9243e558c5f483E(&local_70);
  goto LAB_0015be02;
}