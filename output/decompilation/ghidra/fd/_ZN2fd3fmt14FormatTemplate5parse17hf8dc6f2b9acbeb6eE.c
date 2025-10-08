void _ZN2fd3fmt14FormatTemplate5parse17hf8dc6f2b9acbeb6eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  uint local_84;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  undefined8 *local_58;
  int local_50 [2];
  long local_48;
  long local_40;
  uint local_38;
  long lVar6;
  
  auVar12._8_8_ = param_3;
  auVar12._0_8_ = param_2;
  local_a0 = 0;
  uStack_98 = 8;
  local_90 = 0;
  local_c0 = 0;
  uStack_b8 = 1;
  local_b0 = 0;
                    /* try { // try from 002f58a0 to 002f58a4 has its CatchHandler @ 002f5c12 */
  uVar5 = _ZN3std4sync9once_lock17OnceLock_LT_T_GT_15get_or_try_init17h77d73ffcdcd8c639E();
  ppuVar7 = &PTR_s_src_fmt_mod_rs_00502398;
  local_58 = param_1;
LAB_002f58c6:
  while( true ) {
    auVar13 = auVar12;
                    /* try { // try from 002f58c6 to 002f5ab7 has its CatchHandler @ 002f5c10 */
    lVar8 = auVar13._8_8_;
    lVar9 = auVar13._0_8_;
    _ZN12aho_corasick11ahocorasick11AhoCorasick8try_find17h7a5fd104737965dcE
              (&local_78,uVar5,lVar9,lVar8);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h853440dbf80ed5f0E(local_50,&local_78);
    lVar10 = local_40;
    lVar11 = local_48;
    puVar3 = local_58;
    if (local_50[0] != 1) {
      if (lVar8 != 0) {
                    /* try { // try from 002f5af3 to 002f5b02 has its CatchHandler @ 002f5c12 */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf1e3b0a0715a4abdE
                  (&local_c0,lVar9,lVar8 + lVar9);
      }
      if (local_90 == 0) {
        puVar3[3] = local_b0;
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_c0;
        *(undefined4 *)((long)puVar3 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((long)puVar3 + 0x14) = uStack_b8._4_4_;
        *puVar3 = 1;
        _ZN4core3ptr58drop_in_place_LT_alloc__vec__Vec_LT_fd__fmt__Token_GT__GT_17h54d3355a0c3cb965E
                  (&local_a0);
      }
      else if (local_b0 == 0) {
        puVar3[3] = local_90;
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_a0;
        *(undefined4 *)((long)puVar3 + 0xc) = local_a0._4_4_;
        *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_98;
        *(undefined4 *)((long)puVar3 + 0x14) = uStack_98._4_4_;
        *puVar3 = 0;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6194a405d9e61c9bE(&local_c0);
      }
      else {
                    /* try { // try from 002f5b13 to 002f5b28 has its CatchHandler @ 002f5bfb */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hfae91a531911040aE
                  (&local_a0,&local_c0,&PTR_s_src_fmt_mod_rs_00502470);
        puVar3[3] = local_90;
        puVar3[1] = local_a0;
        puVar3[2] = uStack_98;
        *puVar3 = 0;
      }
      return;
    }
    if (1 < local_38) break;
    lVar11 = local_48 + 1;
    auVar12 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                        (lVar11,lVar9,lVar8);
    lVar6 = auVar12._0_8_;
    if (lVar6 == 0) goto LAB_002f5bd6;
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf1e3b0a0715a4abdE
              (&local_c0,lVar6,auVar12._8_8_ + lVar6);
    auVar12 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                        (lVar10,lVar9,lVar8);
    if (auVar12._0_8_ == 0) {
      ppuVar7 = &PTR_s_src_fmt_mod_rs_005023b0;
LAB_002f5bd8:
                    /* try { // try from 002f5bd8 to 002f5be9 has its CatchHandler @ 002f5c12 */
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00540938)
                (auVar13._0_8_,lVar8,lVar10,auVar13._8_8_,ppuVar7);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  local_84 = local_38;
  local_a8 = local_40;
  local_80 = lVar9;
  auVar12 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                      (local_40,lVar9,lVar8);
  auVar13._8_8_ = lVar8;
  auVar13._0_8_ = local_80;
  if (auVar12._0_8_ == 0) {
    ppuVar7 = &PTR_s_src_fmt_mod_rs_005023c8;
    lVar10 = local_a8;
    goto LAB_002f5bd8;
  }
  local_78 = 0;
  auVar13 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x7d,&local_78);
  cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf20ef8fd404ea81dE
                    (auVar12._0_8_,auVar12._8_8_,auVar13._0_8_,auVar13._8_8_);
  lVar9 = local_80;
  lVar10 = local_a8;
  auVar13._0_8_ = local_80;
  auVar2._8_8_ = lVar8;
  auVar2._0_8_ = local_80;
  if (cVar4 == '\0') {
    auVar12 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                        (lVar11,local_80,lVar8);
    lVar10 = auVar12._0_8_;
    if (lVar10 != 0) {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf1e3b0a0715a4abdE
                (&local_c0,lVar10,auVar12._8_8_ + lVar10);
      if (local_b0 != 0) {
        local_68 = local_b0;
        local_78 = (undefined4)local_c0;
        uStack_74 = local_c0._4_4_;
        uStack_70 = (undefined4)uStack_b8;
        uStack_6c = uStack_b8._4_4_;
        local_c0 = 0;
        uStack_b8 = 1;
        local_b0 = 0;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hfae91a531911040aE
                  (&local_a0,&local_78,&PTR_s_src_fmt_mod_rs_005023f8);
      }
      _ZN2fd3fmt21token_from_pattern_id17h335ee60225c838faE(&local_78,local_84);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hfae91a531911040aE
                (&local_a0,&local_78,&PTR_s_src_fmt_mod_rs_00502410);
      lVar10 = local_a8;
      auVar12 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                          (local_a8,lVar9,lVar8);
      if (auVar12._0_8_ == 0) {
        ppuVar7 = &PTR_s_src_fmt_mod_rs_00502428;
        goto LAB_002f5bd8;
      }
      goto LAB_002f58c6;
    }
    ppuVar7 = &PTR_s_src_fmt_mod_rs_005023e0;
  }
  else {
    auVar12 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                        (local_a8,local_80,lVar8);
    lVar11 = auVar12._0_8_;
    if (lVar11 != 0) {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf1e3b0a0715a4abdE
                (&local_c0,lVar11,auVar12._8_8_ + lVar11);
      lVar10 = local_a8 + 1;
      auVar12 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                          (lVar10,lVar9,lVar8);
      if (auVar12._0_8_ == 0) {
        ppuVar7 = &PTR_s_src_fmt_mod_rs_00502458;
        auVar13 = auVar2;
        goto LAB_002f5bd8;
      }
      goto LAB_002f58c6;
    }
    ppuVar7 = &PTR_s_src_fmt_mod_rs_00502440;
    lVar11 = lVar10;
  }
LAB_002f5bd6:
  auVar13._8_8_ = lVar11;
  auVar13._0_8_ = lVar9;
  lVar10 = 0;
  goto LAB_002f5bd8;
}