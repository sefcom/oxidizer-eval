void _ZN9uu_csplit8patterns16extract_patterns17h928579bbd5018ce5E
               (long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined4 local_1f4;
  long local_1f0;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  uint local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long local_168;
  long local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined local_118 [16];
  long local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined local_70 [32];
  undefined local_50 [32];
  
  local_118 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17hb297da055ad6cb1bE
                        (param_3,8,0x38,&PTR_s_src_uu_csplit_src_patterns_rs_00342b10);
  local_108 = 0;
                    /* try { // try from 00220801 to 00220830 has its CatchHandler @ 00220fb0 */
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h830f62d081924685E_00371320)
            (&local_1d8,"^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]?\\d+)?$",0x39);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd43abd6e025e2b39E
            (local_70,&local_1d8,&PTR_s_src_uu_csplit_src_patterns_rs_00342b28);
                    /* try { // try from 00220837 to 00220866 has its CatchHandler @ 00220fb5 */
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h830f62d081924685E_00371320)
            (&local_1d8,"^\\{(?P<TIMES>\\d+)|\\*\\}$",0x17);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd43abd6e025e2b39E
            (local_50,&local_1d8,&PTR_s_src_uu_csplit_src_patterns_rs_00342b40);
  local_120 = param_2 + param_3 * 0x18;
  uVar2 = 0;
  local_128 = param_2;
LAB_002208a0:
  do {
    local_138 = 0;
    if ((uVar2 & 1) == 0) {
      if (local_128 == local_120) goto LAB_00220e89;
      lVar6 = local_128;
      local_128 = local_128 + 0x18;
    }
    else {
      lVar6 = local_130;
      if (local_130 == 0) {
LAB_00220e89:
        param_1[3] = local_108;
        *(undefined4 *)(param_1 + 1) = local_118._0_4_;
        *(undefined4 *)((long)param_1 + 0xc) = local_118._4_4_;
        *(undefined4 *)(param_1 + 2) = local_118._8_4_;
        *(undefined4 *)((long)param_1 + 0x14) = local_118._12_4_;
        *param_1 = 0xd;
                    /* try { // try from 00220eb5 to 00220ec1 has its CatchHandler @ 00220fb5 */
        _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h2b486921155c886aE(local_50)
        ;
        _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h2b486921155c886aE(local_70)
        ;
        return;
      }
    }
    plVar3 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hebf8dc8ccd364aa5E
                               (&local_138,&local_128);
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      lVar7 = 1;
      local_1f0 = 1;
    }
    else {
                    /* try { // try from 0022091b to 0022092a has its CatchHandler @ 00220fc2 */
      _ZN5regex5regex6string5Regex11captures_at17hcab2228dfbb616d4E
                (&local_e0,local_50,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
      lVar7 = 1;
      local_1f0 = 1;
      if (local_e0 != 2) {
        local_198 = local_a0;
        local_1a8 = local_b0;
        uStack_1a4 = uStack_ac;
        uStack_1a0 = uStack_a8;
        uStack_19c = uStack_a4;
        local_1b8 = local_c0;
        uStack_1b4 = uStack_bc;
        uStack_1b0 = uStack_b8;
        uStack_1ac = uStack_b4;
        local_1c8 = CONCAT44(uStack_cc,local_d0);
        uStack_1c0 = CONCAT44(uStack_c4,uStack_c8);
        local_1d8 = local_e0;
        uStack_1d4 = uStack_dc;
        uStack_1d0 = CONCAT44(uStack_d4,uStack_d8);
        uVar2 = local_138 & 1;
        local_138 = 0;
        if ((uVar2 == 0) && (local_128 != local_120)) {
          local_128 = local_128 + 0x18;
        }
                    /* try { // try from 002209bd to 00220a23 has its CatchHandler @ 00220fbe */
        (*(code *)
          PTR__ZN14regex_automata4util8captures8Captures17get_group_by_name17h8f90aac536405334E_00371328
        )(&local_190,&local_1c8,"TIMES",5);
        uVar4 = local_198;
        if ((local_190 & 1) == 0) {
          local_1f0 = 0;
        }
        else {
          uVar10 = CONCAT44(uStack_19c,uStack_1a0);
          uVar8 = CONCAT44(uStack_184,local_188);
          uVar9 = CONCAT44(uStack_17c,uStack_180);
          lVar7 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                            (uVar8,uVar9,uVar10,local_198);
          if (lVar7 == 0) {
                    /* try { // try from 00220f90 to 00220fa8 has its CatchHandler @ 00220fc7 */
            (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00371330)
                      (uVar10,uVar4,uVar8,uVar9,&PTR_s__home_34r7hm4n__cargo_registry_s_00342b58);
            goto LAB_00220fa9;
          }
          _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                    (&local_190,lVar7);
          lVar7 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hf95dfc8d9c334a81E(&local_190);
          lVar7 = lVar7 + 1;
          local_1f0 = 1;
        }
                    /* try { // try from 00220a5a to 00220ae8 has its CatchHandler @ 00220fc2 */
        _ZN4core3ptr51drop_in_place_LT_regex__regex__string__Captures_GT_17h1a91c97dafa9aa99E
                  (&local_1d8);
      }
    }
    _ZN5regex5regex6string5Regex11captures_at17hcab2228dfbb616d4E
              (&local_e0,local_70,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    if (local_e0 == 2) {
      _ZN4core3ptr79drop_in_place_LT_core__option__Option_LT_regex__regex__string__Captures_GT__GT_17h7e9a5be73d043bacE
                (&local_e0);
      _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                (&local_e0,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      if ((char)local_e0 == '\x01') {
                    /* try { // try from 00220ed4 to 00220f3b has its CatchHandler @ 00220fab */
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00371240
        )(&local_1d8,lVar6);
        param_1[3] = local_1c8;
        *(int *)(param_1 + 1) = local_1d8;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_1d4;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1d0;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_1d0._4_4_;
        *param_1 = 7;
LAB_00220f3c:
                    /* try { // try from 00220f3c to 00220f48 has its CatchHandler @ 00220fb5 */
        _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h2b486921155c886aE(local_50)
        ;
                    /* try { // try from 00220f49 to 00220f55 has its CatchHandler @ 00220fb0 */
        _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h2b486921155c886aE(local_70)
        ;
        _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_uu_csplit__patterns__Pattern_GT__GT_17hb8a5ba762c76bd0bE
                  (local_118);
        return;
      }
      uStack_1d0 = CONCAT44(uStack_d4,uStack_d8);
      local_1c8 = local_1f0;
      local_1d8 = 0;
      uStack_1c0 = lVar7;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4d7a41e11383ce2fE
                (local_118,&local_1d8,&PTR_s_src_uu_csplit_src_patterns_rs_00342bd0);
      uVar2 = local_138;
      goto LAB_002208a0;
    }
    local_198 = local_a0;
    local_1a8 = local_b0;
    uStack_1a4 = uStack_ac;
    uStack_1a0 = uStack_a8;
    uStack_19c = uStack_a4;
    local_1b8 = local_c0;
    uStack_1b4 = uStack_bc;
    uStack_1b0 = uStack_b8;
    uStack_1ac = uStack_b4;
    local_1c8 = CONCAT44(uStack_cc,local_d0);
    uStack_1c0 = CONCAT44(uStack_c4,uStack_c8);
    local_1d8 = local_e0;
    uStack_1d4 = uStack_dc;
    uStack_1d0 = CONCAT44(uStack_d4,uStack_d8);
                    /* try { // try from 00220b41 to 00220e71 has its CatchHandler @ 00220fc0 */
    (*(code *)
      PTR__ZN14regex_automata4util8captures8Captures17get_group_by_name17h8f90aac536405334E_00371328
    )(&local_190,&local_1c8,"OFFSET",6);
    uVar4 = local_198;
    if ((local_190 & 1) != 0) {
      uVar10 = CONCAT44(uStack_19c,uStack_1a0);
      uVar8 = CONCAT44(uStack_184,local_188);
      uVar9 = CONCAT44(uStack_17c,uStack_180);
      auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                          (uVar8,uVar9,uVar10,local_198);
      if (auVar11._0_8_ != 0) {
        uVar4 = _ZN4core3num21__LT_impl_u20_i32_GT_16from_ascii_radix17h8c416a74051ba1e6E
                          (auVar11._0_8_,auVar11._8_8_);
        local_1f4 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h542ec9408ccec41aE(uVar4);
        goto LAB_00220bc8;
      }
LAB_00220f75:
                    /* try { // try from 00220f75 to 00220f8d has its CatchHandler @ 00220fd6 */
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00371330)
                (uVar10,uVar4,uVar8,uVar9,&PTR_s__home_34r7hm4n__cargo_registry_s_00342b58);
LAB_00220fa9:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_1f4 = 0;
LAB_00220bc8:
    (*(code *)
      PTR__ZN14regex_automata4util8captures8Captures17get_group_by_name17h8f90aac536405334E_00371328
    )(&local_190,&local_1c8,"UPTOQ",4);
    uVar4 = local_198;
    if (local_190 == 1) {
      uVar10 = CONCAT44(uStack_19c,uStack_1a0);
      uVar8 = CONCAT44(uStack_184,local_188);
      uVar9 = CONCAT44(uStack_17c,uStack_180);
      lVar5 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                        (uVar8,uVar9,uVar10,local_198);
      if (lVar5 == 0) goto LAB_00220f75;
      (*(code *)PTR__ZN5regex5regex6string5Regex3new17h830f62d081924685E_00371320)(&local_100,lVar5)
      ;
      if (local_100 == 0) {
        _ZN9uu_csplit8patterns16extract_patterns28__u7b__u7b_closure_u7d__u7d_17h292cec365962b576E
                  (&local_190,lVar6,&uStack_f8);
        lVar6 = CONCAT44(uStack_18c,local_190);
        local_158 = CONCAT44(uStack_184,local_188);
        uStack_150 = CONCAT44(uStack_17c,uStack_180);
        local_148 = CONCAT44(uStack_174,local_178);
        uStack_140 = CONCAT44(uStack_16c,uStack_170);
        if (lVar6 != 0xd) {
LAB_00220f02:
          local_88 = (undefined4)local_148;
          uStack_84 = local_148._4_4_;
          uStack_80 = (undefined4)uStack_140;
          uStack_7c = uStack_140._4_4_;
          local_98 = (undefined4)local_158;
          uStack_94 = local_158._4_4_;
          uStack_90 = (undefined4)uStack_150;
          uStack_8c = uStack_150._4_4_;
          *(undefined4 *)(param_1 + 3) = (undefined4)local_148;
          *(undefined4 *)((long)param_1 + 0x1c) = local_148._4_4_;
          *(undefined4 *)(param_1 + 4) = (undefined4)uStack_140;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_140._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)local_158;
          *(undefined4 *)((long)param_1 + 0xc) = local_158._4_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_150;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_150._4_4_;
          *param_1 = lVar6;
          _ZN4core3ptr51drop_in_place_LT_regex__regex__string__Captures_GT_17h1a91c97dafa9aa99E
                    (&local_1d8);
          goto LAB_00220f3c;
        }
      }
      else {
        local_148 = local_f0;
        uStack_140 = uStack_e8;
        local_158 = local_100;
        uStack_150 = uStack_f8;
      }
      local_88 = (undefined4)local_148;
      uStack_84 = local_148._4_4_;
      uStack_80 = (undefined4)uStack_140;
      uStack_7c = uStack_140._4_4_;
      local_98 = (undefined4)local_158;
      uStack_94 = local_158._4_4_;
      uStack_90 = (undefined4)uStack_150;
      uStack_8c = uStack_150._4_4_;
      local_178 = (undefined4)local_148;
      uStack_174 = local_148._4_4_;
      uStack_170 = (undefined4)uStack_140;
      uStack_16c = uStack_140._4_4_;
      local_188 = (undefined4)local_158;
      uStack_184 = local_158._4_4_;
      uStack_180 = (undefined4)uStack_150;
      uStack_17c = uStack_150._4_4_;
      uStack_18c = local_1f4;
      local_168 = local_1f0;
      local_190 = 1;
      local_160 = lVar7;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4d7a41e11383ce2fE
                (local_118,&local_190,&PTR_s_src_uu_csplit_src_patterns_rs_00342ba0);
    }
    else {
      (*(code *)
        PTR__ZN14regex_automata4util8captures8Captures17get_group_by_name17h8f90aac536405334E_00371328
      )(&local_190,&local_1c8,"SKIPTO",6);
      uVar4 = local_198;
      if ((local_190 & 1) != 0) {
        uVar10 = CONCAT44(uStack_19c,uStack_1a0);
        uVar8 = CONCAT44(uStack_184,local_188);
        uVar9 = CONCAT44(uStack_17c,uStack_180);
        lVar5 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                          (uVar8,uVar9,uVar10,local_198);
        if (lVar5 == 0) goto LAB_00220f75;
        (*(code *)PTR__ZN5regex5regex6string5Regex3new17h830f62d081924685E_00371320)
                  (&local_100,lVar5);
        if (local_100 == 0) {
          _ZN9uu_csplit8patterns16extract_patterns28__u7b__u7b_closure_u7d__u7d_17h292cec365962b576E
                    (&local_190,lVar6,&uStack_f8);
          lVar6 = CONCAT44(uStack_18c,local_190);
          local_158 = CONCAT44(uStack_184,local_188);
          uStack_150 = CONCAT44(uStack_17c,uStack_180);
          local_148 = CONCAT44(uStack_174,local_178);
          uStack_140 = CONCAT44(uStack_16c,uStack_170);
          if (lVar6 != 0xd) goto LAB_00220f02;
        }
        else {
          local_148 = local_f0;
          uStack_140 = uStack_e8;
          local_158 = local_100;
          uStack_150 = uStack_f8;
        }
        local_88 = (undefined4)local_148;
        uStack_84 = local_148._4_4_;
        uStack_80 = (undefined4)uStack_140;
        uStack_7c = uStack_140._4_4_;
        local_98 = (undefined4)local_158;
        uStack_94 = local_158._4_4_;
        uStack_90 = (undefined4)uStack_150;
        uStack_8c = uStack_150._4_4_;
        local_178 = (undefined4)local_148;
        uStack_174 = local_148._4_4_;
        uStack_170 = (undefined4)uStack_140;
        uStack_16c = uStack_140._4_4_;
        local_188 = (undefined4)local_158;
        uStack_184 = local_158._4_4_;
        uStack_180 = (undefined4)uStack_150;
        uStack_17c = uStack_150._4_4_;
        uStack_18c = local_1f4;
        local_168 = local_1f0;
        local_190 = 2;
        local_160 = lVar7;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4d7a41e11383ce2fE
                  (local_118,&local_190,&PTR_s_src_uu_csplit_src_patterns_rs_00342bb8);
      }
    }
                    /* try { // try from 00220e72 to 00220e7b has its CatchHandler @ 00220fc2 */
    _ZN4core3ptr51drop_in_place_LT_regex__regex__string__Captures_GT_17h1a91c97dafa9aa99E
              (&local_1d8);
    uVar2 = local_138;
  } while( true );
}