undefined4 *
_ZN10change_log6domain9changelog18generate_changelog17h15897968701ea5d1E
          (undefined4 *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 **local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 **local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 **local_1b8;
  long lStack_1b0;
  char *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 **local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  char **local_150;
  undefined8 **local_148;
  code *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 **local_128;
  long lStack_120;
  char *local_118;
  undefined8 uStack_110;
  long local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  long lStack_c0;
  undefined local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  long lStack_90;
  undefined local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 **local_68;
  long lStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  local_168 = 0;
  local_160 = 1;
  local_158 = 0;
  local_100 = param_2;
  local_f8 = param_1;
                    /* try { // try from 004b7580 to 004b758c has its CatchHandler @ 004b814b */
  local_88 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17heeb658250516b418E();
  local_98 = _DAT_007a5b58;
  lStack_90 = _UNK_007a5b60;
  local_a8 = PTR_DAT_007a5b48._0_4_;
  uStack_a4 = PTR_DAT_007a5b48._4_4_;
  uStack_a0 = _UNK_007a5b50;
  uStack_9c = _UNK_007a5b54;
                    /* try { // try from 004b75bb to 004b75bf has its CatchHandler @ 004b8143 */
  local_b8 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17heeb658250516b418E();
  local_c8 = _DAT_007a5b58;
  lStack_c0 = _UNK_007a5b60;
  local_d8 = PTR_DAT_007a5b48._0_4_;
  uStack_d4 = PTR_DAT_007a5b48._4_4_;
  uStack_d0 = _UNK_007a5b50;
  uStack_cc = _UNK_007a5b54;
  local_f0 = 0;
  local_e8 = 8;
  local_e0 = 0;
                    /* try { // try from 004b7612 to 004b761b has its CatchHandler @ 004b8141 */
  _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17hfe44976d49bd0547E
            (&local_1c8);
  puVar3 = 
  PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_007f6890
  ;
  local_58 = local_1a8;
  uStack_50 = uStack_1a0;
  local_68 = local_1b8;
  lStack_60 = lStack_1b0;
  local_78 = (undefined4)local_1c8;
  uStack_74 = local_1c8._4_4_;
  uStack_70 = (undefined4)uStack_1c0;
  uStack_6c = uStack_1c0._4_4_;
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    lVar1 = *(long *)(local_100 + 8);
    lVar7 = 0;
    do {
      if (*(long *)(lVar1 + 0x58 + lVar7) != 0) {
                    /* try { // try from 004b769d to 004b7806 has its CatchHandler @ 004b81d9 */
        (*(code *)puVar3)(&local_1c8,lVar1 + lVar7 + 0x48);
        _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hf09db0658b520e22E
                  (&local_78,&local_1c8);
      }
      auVar8 = _ZN10change_log6domain9changelog21category_from_pr_type17h091454f49f5cc1c5E
                         (*(undefined8 *)(lVar1 + 8 + lVar7),*(undefined8 *)(lVar1 + 0x10 + lVar7));
      lVar4 = auVar8._0_8_;
      if (lVar4 != 0) {
        if (*(char *)(lVar1 + 0x60 + lVar7) == '\0') {
          _ZN9hashbrown11rustc_entry62__LT_impl_u20_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__GT_11rustc_entry17h0d631eb2439e9909E
                    (&local_1c8,&local_a8,lVar4,auVar8._8_8_);
          if (local_1c8 == (undefined **)0x0) {
            local_138 = (undefined *)0x0;
          }
          else {
            lStack_120 = lStack_1b0;
            local_138 = (char *)local_1c8;
          }
          uVar5 = _ZN3std11collections4hash3map18Entry_LT_K_C_V_GT_10or_default17h37f8d28162c96b61E
                            (&local_138);
          (*(code *)puVar3)(&local_1c8,lVar1 + lVar7 + 0x18);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hab16c5672367a118E
                    (uVar5,&local_1c8,&PTR_s_scripts_change_log_src_domain_ch_007a5be0);
        }
        else {
          _ZN9hashbrown11rustc_entry62__LT_impl_u20_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__GT_11rustc_entry17h0d631eb2439e9909E
                    (&local_1c8,&local_d8,lVar4,auVar8._8_8_);
          if (local_1c8 == (undefined **)0x0) {
            local_138 = (undefined *)0x0;
          }
          else {
            lStack_120 = lStack_1b0;
            local_138 = (char *)local_1c8;
          }
          uVar5 = _ZN3std11collections4hash3map18Entry_LT_K_C_V_GT_10or_default17h37f8d28162c96b61E
                            (&local_138);
          (*(code *)puVar3)(&local_1c8,lVar1 + lVar7 + 0x18);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hab16c5672367a118E
                    (uVar5,&local_1c8,&PTR_s_scripts_change_log_src_domain_ch_007a5bf8);
          (*(code *)puVar3)(&local_1c8,lVar1 + lVar7 + 0x30);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hab16c5672367a118E
                    (&local_f0,&local_1c8,&PTR_s_scripts_change_log_src_domain_ch_007a5c10);
        }
      }
      lVar7 = lVar7 + 0x68;
    } while (lVar6 * 0x68 - lVar7 != 0);
  }
  if (lStack_60 == 0) {
    bVar2 = true;
  }
  else {
                    /* try { // try from 004b781e to 004b788f has its CatchHandler @ 004b819a */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h9f76318f46fbb90dE
              (&local_168,"# Summary\n\nIn this release, we:\n","");
    local_118 = local_58;
    uStack_110 = uStack_50;
    local_128 = local_68;
    lStack_120 = lStack_60;
    local_138 = (char *)CONCAT44(uStack_74,local_78);
    uStack_130 = CONCAT44(uStack_6c,uStack_70);
    _ZN106__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h991e3d21f5644337E
              (&local_1c8,&local_138);
    _ZN4core4iter6traits8iterator8Iterator7collect17h0de00b5364e9b9c9E(local_48,&local_1c8);
                    /* try { // try from 004b78a0 to 004b78a4 has its CatchHandler @ 004b812c */
    _ZN5alloc5slice11stable_sort17h83943790025e9447E(local_40,local_38);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h8df512d2ded3f811E
              (&local_138,local_48);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0220764a290286f5E
              (&local_188,&local_138);
    do {
      local_1d8 = local_178;
      local_1e8 = (undefined4)local_188;
      uStack_1e4 = local_188._4_4_;
      uStack_1e0 = (undefined4)uStack_180;
      uStack_1dc = uStack_180._4_4_;
      local_140 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_1c8 = (undefined **)&DAT_007a5b80;
      uStack_1c0 = 2;
      local_1a8 = (char *)0x0;
      local_1b8 = &local_148;
      lStack_1b0 = 1;
      local_148 = (undefined8 **)&local_1e8;
                    /* try { // try from 004b7975 to 004b797f has its CatchHandler @ 004b81a8 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h8667f145713f23f9E(&local_200,&local_1c8);
      local_1c8 = (undefined **)CONCAT44(uStack_1fc,local_200);
      uStack_1c0 = CONCAT44(uStack_1f4,uStack_1f8);
      local_1b8 = local_1f0;
                    /* try { // try from 004b799c to 004b79a3 has its CatchHandler @ 004b81ad */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h9f76318f46fbb90dE
                (&local_168,uStack_1c0,(long)local_1f0 + uStack_1c0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_1c8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_1e8);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0220764a290286f5E
                (&local_188,&local_138);
    } while (local_188 != (char ***)0x8000000000000000);
                    /* try { // try from 004b79d7 to 004b79f5 has its CatchHandler @ 004b8195 */
    _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17hf692e010f2269745E
              (&local_138);
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_168,10);
    bVar2 = false;
  }
  local_138 = "FeaturesS";
  uStack_130 = 8;
  local_128 = (undefined8 **)0x1cacf1;
  lStack_120 = 5;
  local_118 = "Chores";
  uStack_110 = 6;
  if (lStack_c0 != 0) {
                    /* try { // try from 004b7a6d to 004b7a87 has its CatchHandler @ 004b819a */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h9f76318f46fbb90dE
              (&local_168,"# Breaking\n\n","- ");
    local_150 = (char **)&local_138;
                    /* try { // try from 004b7a98 to 004b7b12 has its CatchHandler @ 004b819c */
    lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h54a470f9e611ad5cE(&local_d8)
    ;
    if (lVar6 != 0) {
      local_188 = &local_150;
      uStack_180 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6dc4ff969fc020bE;
      local_1c8 = &PTR_s___007a5ba0;
      uStack_1c0 = 2;
      local_1a8 = (char *)0x0;
      lStack_1b0 = 1;
      local_1b8 = (undefined8 **)&local_188;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h8667f145713f23f9E(&local_200,&local_1c8);
      local_1e8 = local_200;
      uStack_1e4 = uStack_1fc;
      uStack_1e0 = uStack_1f8;
      uStack_1dc = uStack_1f4;
      local_1d8 = local_1f0;
                    /* try { // try from 004b7b2f to 004b7b3b has its CatchHandler @ 004b8186 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h9f76318f46fbb90dE
                (&local_168,CONCAT44(uStack_1f4,uStack_1f8),
                 (long)local_1f0 + CONCAT44(uStack_1f4,uStack_1f8));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_1e8);
                    /* try { // try from 004b7b56 to 004b7b5f has its CatchHandler @ 004b819c */
      _ZN4core4iter6traits8iterator8Iterator7collect17hbd6d1aa0d4b5008cE
                (&local_200,*(long *)(lVar6 + 0x18),
                 *(long *)(lVar6 + 0x18) + *(long *)(lVar6 + 0x20) * 0x18);
                    /* try { // try from 004b7b6a to 004b7b80 has its CatchHandler @ 004b8177 */
      _ZN5alloc3str17join_generic_copy17h7dd5fc911c59ac5bE
                (&local_1c8,CONCAT44(uStack_1f4,uStack_1f8),local_1f0,"\n",1);
      local_178 = local_1b8;
      local_188 = (char ***)local_1c8;
      uStack_180 = (code *)uStack_1c0;
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7a6bd4f0094bad36E
                (&local_200);
      local_140 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_1c8 = (undefined **)&DAT_007a5bc0;
      uStack_1c0 = 2;
      local_1a8 = (char *)0x0;
      local_1b8 = &local_148;
      lStack_1b0 = 1;
                    /* try { // try from 004b7bf0 to 004b7bfe has its CatchHandler @ 004b816a */
      local_148 = (undefined8 **)&local_188;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h8667f145713f23f9E(&local_200,&local_1c8);
      local_1e8 = local_200;
      uStack_1e4 = uStack_1fc;
      uStack_1e0 = uStack_1f8;
      uStack_1dc = uStack_1f4;
      local_1d8 = local_1f0;
                    /* try { // try from 004b7c1b to 004b7c27 has its CatchHandler @ 004b8153 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h9f76318f46fbb90dE
                (&local_168,CONCAT44(uStack_1f4,uStack_1f8),
                 (long)local_1f0 + CONCAT44(uStack_1f4,uStack_1f8));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_1e8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_188);
    }
                    /* try { // try from 004b7c47 to 004b7cc4 has its CatchHandler @ 004b819c */
    local_150 = (char **)&local_128;
    lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h54a470f9e611ad5cE
                      (&local_d8,&local_128);
    if (lVar6 != 0) {
      local_188 = &local_150;
      uStack_180 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6dc4ff969fc020bE;
      local_1c8 = &PTR_s___007a5ba0;
      uStack_1c0 = 2;
      local_1a8 = (char *)0x0;
      lStack_1b0 = 1;
      local_1b8 = (undefined8 **)&local_188;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h8667f145713f23f9E(&local_200,&local_1c8);
      local_1e8 = local_200;
      uStack_1e4 = uStack_1fc;
      uStack_1e0 = uStack_1f8;
      uStack_1dc = uStack_1f4;
      local_1d8 = local_1f0;
                    /* try { // try from 004b7ce1 to 004b7ced has its CatchHandler @ 004b8186 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h9f76318f46fbb90dE
                (&local_168,CONCAT44(uStack_1f4,uStack_1f8),
                 (long)local_1f0 + CONCAT44(uStack_1f4,uStack_1f8));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_1e8);
                    /* try { // try from 004b7d08 to 004b7d11 has its CatchHandler @ 004b819c */
      _ZN4core4iter6traits8iterator8Iterator7collect17hbd6d1aa0d4b5008cE
                (&local_200,*(long *)(lVar6 + 0x18),
                 *(long *)(lVar6 + 0x18) + *(long *)(lVar6 + 0x20) * 0x18);
                    /* try { // try from 004b7d1c to 004b7d32 has its CatchHandler @ 004b8177 */
      _ZN5alloc3str17join_generic_copy17h7dd5fc911c59ac5bE
                (&local_1c8,CONCAT44(uStack_1f4,uStack_1f8),local_1f0,"\n",1);
      local_178 = local_1b8;
      local_188 = (char ***)local_1c8;
      uStack_180 = (code *)uStack_1c0;
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7a6bd4f0094bad36E
                (&local_200);
      local_140 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_1c8 = (undefined **)&DAT_007a5bc0;
      uStack_1c0 = 2;
      local_1a8 = (char *)0x0;
      local_1b8 = &local_148;
      lStack_1b0 = 1;
                    /* try { // try from 004b7da2 to 004b7db0 has its CatchHandler @ 004b816a */
      local_148 = (undefined8 **)&local_188;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h8667f145713f23f9E(&local_200,&local_1c8);
      local_1e8 = local_200;
      uStack_1e4 = uStack_1fc;
      uStack_1e0 = uStack_1f8;
      uStack_1dc = uStack_1f4;
      local_1d8 = local_1f0;
                    /* try { // try from 004b7dcd to 004b7dd9 has its CatchHandler @ 004b8153 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h9f76318f46fbb90dE
                (&local_168,CONCAT44(uStack_1f4,uStack_1f8),
                 (long)local_1f0 + CONCAT44(uStack_1f4,uStack_1f8));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_1e8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_188);
    }
                    /* try { // try from 004b7df9 to 004b7e76 has its CatchHandler @ 004b819c */
    local_150 = &local_118;
    lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h54a470f9e611ad5cE
                      (&local_d8,&local_118);
    if (lVar6 != 0) {
      local_188 = &local_150;
      uStack_180 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6dc4ff969fc020bE;
      local_1c8 = &PTR_s___007a5ba0;
      uStack_1c0 = 2;
      local_1a8 = (char *)0x0;
      lStack_1b0 = 1;
      local_1b8 = (undefined8 **)&local_188;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h8667f145713f23f9E(&local_200,&local_1c8);
      local_1e8 = local_200;
      uStack_1e4 = uStack_1fc;
      uStack_1e0 = uStack_1f8;
      uStack_1dc = uStack_1f4;
      local_1d8 = local_1f0;
                    /* try { // try from 004b7e93 to 004b7e9f has its CatchHandler @ 004b8186 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h9f76318f46fbb90dE
                (&local_168,CONCAT44(uStack_1f4,uStack_1f8),
                 (long)local_1f0 + CONCAT44(uStack_1f4,uStack_1f8));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_1e8);
                    /* try { // try from 004b7eba to 004b7ec3 has its CatchHandler @ 004b819c */
      _ZN4core4iter6traits8iterator8Iterator7collect17hbd6d1aa0d4b5008cE
                (&local_200,*(long *)(lVar6 + 0x18),
                 *(long *)(lVar6 + 0x18) + *(long *)(lVar6 + 0x20) * 0x18);
                    /* try { // try from 004b7ece to 004b7ee4 has its CatchHandler @ 004b8177 */
      _ZN5alloc3str17join_generic_copy17h7dd5fc911c59ac5bE
                (&local_1c8,CONCAT44(uStack_1f4,uStack_1f8),local_1f0,"\n",1);
      local_178 = local_1b8;
      local_188 = (char ***)local_1c8;
      uStack_180 = (code *)uStack_1c0;
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7a6bd4f0094bad36E
                (&local_200);
      local_140 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_1c8 = (undefined **)&DAT_007a5bc0;
      uStack_1c0 = 2;
      local_1a8 = (char *)0x0;
      local_1b8 = &local_148;
      lStack_1b0 = 1;
                    /* try { // try from 004b7f54 to 004b7f62 has its CatchHandler @ 004b816a */
      local_148 = (undefined8 **)&local_188;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h8667f145713f23f9E(&local_200,&local_1c8);
      local_1e8 = local_200;
      uStack_1e4 = uStack_1fc;
      uStack_1e0 = uStack_1f8;
      uStack_1dc = uStack_1f4;
      local_1d8 = local_1f0;
                    /* try { // try from 004b7f7f to 004b7f8b has its CatchHandler @ 004b8153 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h9f76318f46fbb90dE
                (&local_168,CONCAT44(uStack_1f4,uStack_1f8),
                 (long)local_1f0 + CONCAT44(uStack_1f4,uStack_1f8));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_1e8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_188);
    }
  }
                    /* try { // try from 004b7fa3 to 004b8055 has its CatchHandler @ 004b819e */
  lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h54a470f9e611ad5cE
                    (&local_a8,&local_138);
  if (lVar6 != 0) {
    _ZN10change_log6domain9changelog18generate_changelog28__u7b__u7b_closure_u7d__u7d_17h5267fa083183a71dE
              (&local_168,local_138,uStack_130,*(undefined8 *)(lVar6 + 0x18),
               *(undefined8 *)(lVar6 + 0x20));
  }
  lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h54a470f9e611ad5cE
                    (&local_a8,&local_128);
  if (lVar6 != 0) {
    _ZN10change_log6domain9changelog18generate_changelog28__u7b__u7b_closure_u7d__u7d_17h5267fa083183a71dE
              (&local_168,local_128,lStack_120,*(undefined8 *)(lVar6 + 0x18),
               *(undefined8 *)(lVar6 + 0x20));
  }
  lVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h54a470f9e611ad5cE
                    (&local_a8,&local_118);
  if (lVar6 != 0) {
    _ZN10change_log6domain9changelog18generate_changelog28__u7b__u7b_closure_u7d__u7d_17h5267fa083183a71dE
              (&local_168,local_118,uStack_110,*(undefined8 *)(lVar6 + 0x18),
               *(undefined8 *)(lVar6 + 0x20));
  }
  if (local_e0 != 0) {
                    /* try { // try from 004b806b to 004b80a5 has its CatchHandler @ 004b819a */
    _ZN10change_log6domain9changelog18generate_changelog28__u7b__u7b_closure_u7d__u7d_17h5267fa083183a71dE
              (&local_168,"Migration Notes",0xf,local_e8);
  }
  uVar5 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h600657c26d527ff2E(local_160,local_158)
  ;
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf07736205cb4a9e6E
            (&local_1c8,uVar5);
  *(undefined8 ***)(local_f8 + 4) = local_1b8;
  *local_f8 = (undefined4)local_1c8;
  local_f8[1] = local_1c8._4_4_;
  local_f8[2] = (undefined4)uStack_1c0;
  local_f8[3] = uStack_1c0._4_4_;
  if (bVar2) {
    _ZN4core3ptr86drop_in_place_LT_std__collections__hash__set__HashSet_LT_alloc__string__String_GT__GT_17he8816c9b59b211bdE
              (&local_78);
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7a6bd4f0094bad36E
            (&local_f0);
  _ZN4core3ptr119drop_in_place_LT_std__collections__hash__map__HashMap_LT__RF_str_C_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17h2c36cc80d5141f6dE
            (&local_d8);
  _ZN4core3ptr119drop_in_place_LT_std__collections__hash__map__HashMap_LT__RF_str_C_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17h2c36cc80d5141f6dE
            (&local_a8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h97ccf84ef02c8f94E(&local_168);
  _ZN4core3ptr85drop_in_place_LT_alloc__vec__Vec_LT_change_log__domain__models__ChangelogInfo_GT__GT_17h16241f9709ce52a3E
            (local_100);
  return local_f8;
}