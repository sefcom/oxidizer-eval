void _ZN21ruff_python_formatter6string9normalize16normalize_string17hc4cd811eeabf866fE
               (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,uint param_5,
               undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  uint extraout_EDX;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined auVar11 [16];
  undefined auVar12 [12];
  long local_120;
  uint local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e0;
  int local_d8;
  long local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined local_70;
  undefined7 uStack_6f;
  uint local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_110 = 0;
  uStack_108 = 1;
  local_100 = 0;
                    /* try { // try from 004288b8 to 004288c4 has its CatchHandler @ 00428ee9 */
  local_bc = param_6;
  _ZN21ruff_python_formatter6string9normalize21CharIndicesWithOffset3new17he6ebad22181f0baeE
            (&local_80);
  local_114 = (uint)((param_5 & 1) == 0) * 5 + 0x22;
  local_c0 = (param_5 & 1) * 5 + 0x22;
  local_f8 = (undefined4)local_80;
  uStack_f4 = local_80._4_4_;
  uStack_f0 = (undefined4)uStack_78;
  uStack_ec = uStack_78._4_4_;
  lVar5 = 0;
  lVar8 = CONCAT71(uStack_6f,local_70);
  iVar9 = 0x110001;
LAB_00428921:
  do {
    auVar12._8_4_ = iVar9;
    auVar12._0_8_ = lVar8;
    local_d8 = 0x110001;
    if (iVar9 == 0x110001) {
      auVar12 = (*(code *)
                  PTR__ZN122__LT_ruff_python_formatter__string__normalize__CharIndicesWithOffset_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf58dafd35644a129E_006bd628
                )(&local_f8);
    }
    uVar10 = auVar12._8_4_;
    lVar7 = auVar12._0_8_;
    if (uVar10 == 0x110000) {
      if (lVar5 == 0) {
        param_1[1] = param_2;
        param_1[2] = param_3;
        *param_1 = 0x8000000000000000;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE(&local_110);
      }
      else {
        auVar11 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                            (lVar5,param_2,param_3);
        lVar8 = auVar11._0_8_;
        if (lVar8 == 0) {
          ppuVar6 = &PTR_s_crates_ruff_python_formatter_src_0067f778;
          lVar7 = param_3;
          goto LAB_00428e76;
        }
                    /* try { // try from 00428e18 to 00428e84 has its CatchHandler @ 00428ee9 */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                  (&local_110,lVar8,auVar11._8_8_ + lVar8);
        param_1[2] = local_100;
        *param_1 = local_110;
        param_1[1] = uStack_108;
      }
      return;
    }
    local_120 = lVar7;
    if (uVar10 == 0xd) {
      auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                          (lVar5,lVar7,param_2,param_3);
      lVar8 = auVar11._0_8_;
      if (lVar8 != 0) {
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                  (&local_110,lVar8,auVar11._8_8_ + lVar8);
        _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hb3641f26b9f0d361E
                  (&local_e0,&local_f8);
        if (local_d8 == 10) {
          local_d8 = 0x110001;
        }
        else {
          _ZN5alloc6string6String4push17h0ede46164189e411E(&local_110,10);
        }
        goto LAB_0042890f;
      }
      ppuVar6 = &PTR_s_crates_ruff_python_formatter_src_0067f718;
      goto LAB_00428e76;
    }
    if (((uVar10 == 0x7b) || (uVar10 == 0x7d)) && ((char)local_bc != '\0')) {
      local_70 = 0;
                    /* try { // try from 00428987 to 00428d2d has its CatchHandler @ 00428ec8 */
      local_80 = lVar5;
      uStack_78 = lVar7;
      auVar11 = _ZN4core3str6traits117__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeInclusive_LT_usize_GT__GT_5index17hc52fb59378bf613fE
                          (&local_80,param_2,param_3);
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                (&local_110,auVar11._0_8_,auVar11._8_8_ + auVar11._0_8_);
      _ZN5alloc6string6String4push17h0ede46164189e411E(&local_110,uVar10);
      goto LAB_0042890f;
    }
    lVar8 = local_e0;
    iVar9 = local_d8;
  } while (0x3f < (byte)param_5);
  if (uVar10 != 0x5c) {
    if (((param_5 & 2) != 0) || (uVar10 != local_114)) goto LAB_00428921;
    auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                        (lVar5,lVar7,param_2,param_3);
    lVar8 = auVar11._0_8_;
    if (lVar8 == 0) {
      ppuVar6 = &PTR_s_crates_ruff_python_formatter_src_0067f760;
      goto LAB_00428e76;
    }
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
              (&local_110,lVar8,auVar11._8_8_ + lVar8);
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_110,0x5c);
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_110,local_114);
    goto LAB_0042890f;
  }
  _ZN88__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__clone__Clone_GT_5clone17h770b4f8dca32ea06E
            (&local_80,&local_f8);
  uVar10 = local_60;
  local_60 = 0x110001;
  if (uVar10 == 0x110001) {
    (*(code *)
      PTR__ZN122__LT_ruff_python_formatter__string__normalize__CharIndicesWithOffset_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf58dafd35644a129E_006bd628
    )(&local_80);
    uVar10 = extraout_EDX;
  }
  iVar9 = local_d8;
  if (uVar10 == 0x5c) {
    local_d8 = 0x110001;
    iVar2 = local_d8;
    if (iVar9 == 0x110001) {
      (*(code *)
        PTR__ZN122__LT_ruff_python_formatter__string__normalize__CharIndicesWithOffset_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf58dafd35644a129E_006bd628
      )(&local_f8);
      iVar2 = local_d8;
    }
  }
  else {
    lVar8 = local_e0;
    if (uVar10 == 0x110000) goto LAB_00428921;
    uVar3 = 2;
    local_c8 = 2;
    if ((0x7f < uVar10) && (local_c8 = 3, 0x7ff < uVar10)) {
      local_c8 = 5 - (ulong)(uVar10 < 0x10000);
    }
    local_a0 = param_2;
    local_98 = param_3;
    if ((int)uVar10 < 0x75) {
      if (uVar10 == 0x4e) {
        uVar4 = 1;
        if ((param_5 & 8) != 0) goto LAB_00428c84;
        goto LAB_00428bb1;
      }
      if ((uVar10 == 0x55) && ((param_5 & 8) == 0)) {
        uVar3 = 8;
        goto LAB_00428baf;
      }
LAB_00428c84:
      local_90 = &local_120;
      local_88 = &local_c8;
      local_48 = -0x7fffffffffffffff;
    }
    else {
      if (uVar10 != 0x78) {
        if ((uVar10 != 0x75) || ((param_5 & 8) != 0)) goto LAB_00428c84;
        uVar3 = 4;
      }
LAB_00428baf:
      uVar4 = 0;
LAB_00428bb1:
      local_90 = &local_120;
      local_88 = &local_c8;
      _ZN21ruff_python_formatter6string9normalize16normalize_string28__u7b__u7b_closure_u7d__u7d_17h67cfe5df4b476716E
                (&local_48,&local_a0,uVar4,uVar3);
      if (local_48 != -0x7fffffffffffffff) {
        local_b8 = (undefined4)local_48;
        uStack_b4 = local_48._4_4_;
        uStack_b0 = uStack_40;
        uStack_ac = uStack_3c;
        local_a8 = local_38;
        local_50 = param_1;
        if (local_48 == -0x8000000000000000) {
          lVar8 = local_38;
          if (local_38 != -1) goto LAB_00428dc8;
        }
        else {
          lVar7 = local_c8 + local_120;
          auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                              (lVar5,lVar7,param_2,param_3);
          lVar8 = auVar11._0_8_;
          if (lVar8 == 0) {
                    /* try { // try from 00428eab to 00428ec3 has its CatchHandler @ 00428eca */
            (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                      (param_2,param_3,lVar5,lVar7,&PTR_s_crates_ruff_python_formatter_src_0067f730)
            ;
            goto LAB_00428ec4;
          }
                    /* try { // try from 00428d94 to 00428dbc has its CatchHandler @ 00428ec6 */
          local_58 = lVar7;
          _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                    (&local_110,lVar8,auVar11._8_8_ + lVar8);
          lVar8 = local_a8;
          _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                    (&local_110,CONCAT44(uStack_ac,uStack_b0),
                     CONCAT44(uStack_ac,uStack_b0) + local_a8);
          lVar5 = local_58 + lVar8;
LAB_00428dc8:
          lVar8 = lVar8 + 1;
          do {
            iVar9 = local_d8;
            local_d8 = 0x110001;
            if (iVar9 == 0x110001) {
              (*(code *)
                PTR__ZN122__LT_ruff_python_formatter__string__normalize__CharIndicesWithOffset_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf58dafd35644a129E_006bd628
              )(&local_f8);
            }
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17heb51e2f4908e5022E
                  (&local_b8);
        iVar2 = local_d8;
        param_1 = local_50;
        goto joined_r0x00428c6d;
      }
    }
    _ZN4core3ptr78drop_in_place_LT_core__option__Option_LT_alloc__borrow__Cow_LT_str_GT__GT__GT_17hf21f357c1c799cf3E
              (&local_48);
    iVar2 = local_d8;
  }
joined_r0x00428c6d:
  lVar8 = local_e0;
  iVar9 = iVar2;
  if ((param_5 & 2) != 0) goto LAB_00428921;
  if (uVar10 != local_c0) {
    if ((uVar10 == local_114) && (local_d8 = 0x110001, iVar9 = local_d8, iVar2 == 0x110001)) {
      (*(code *)
        PTR__ZN122__LT_ruff_python_formatter__string__normalize__CharIndicesWithOffset_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf58dafd35644a129E_006bd628
      )(&local_f8);
      lVar8 = local_e0;
      iVar9 = local_d8;
    }
    goto LAB_00428921;
  }
  local_d8 = 0x110001;
  if (iVar2 == 0x110001) {
    (*(code *)
      PTR__ZN122__LT_ruff_python_formatter__string__normalize__CharIndicesWithOffset_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf58dafd35644a129E_006bd628
    )(&local_f8);
  }
  lVar7 = local_120;
  auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                      (lVar5,local_120,param_2,param_3);
  lVar8 = auVar11._0_8_;
  if (lVar8 == 0) {
    ppuVar6 = &PTR_s_crates_ruff_python_formatter_src_0067f748;
LAB_00428e76:
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
              (param_2,param_3,lVar5,lVar7,ppuVar6);
LAB_00428ec4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
            (&local_110,lVar8,auVar11._8_8_ + lVar8);
LAB_0042890f:
  lVar5 = local_120 + 1;
  lVar8 = local_e0;
  iVar9 = local_d8;
  goto LAB_00428921;
}