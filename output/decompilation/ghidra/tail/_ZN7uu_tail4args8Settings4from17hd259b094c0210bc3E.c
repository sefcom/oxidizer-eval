long * _ZN7uu_tail4args8Settings4from17hd259b094c0210bc3E(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  undefined uVar5;
  byte bVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  long lVar10;
  ulong uVar11;
  undefined **ppuVar12;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar13;
  undefined auVar14 [16];
  undefined local_1c9;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 **local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  long local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined local_160;
  undefined4 local_154;
  long *local_150;
  long local_148;
  long lStack_140;
  ulong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ulong uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined2 local_100;
  undefined local_fe;
  undefined4 local_fd;
  undefined local_f9;
  undefined8 *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined local_d0 [24];
  undefined local_b8 [16];
  ulong local_a8;
  undefined local_a0 [16];
  ulong local_90;
  undefined local_88 [16];
  ulong local_78;
  long local_70 [8];
  
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0027d740
          )(param_2,&DAT_0012463f,1);
  uVar5 = 1;
  if (cVar4 == '\0') {
    uVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0027d740
            )(param_2,&DAT_00124640,5);
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7b3d077d0028ebf2E
            (&local_1c8,param_2,&DAT_00124645,6);
  auVar14 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf1a769ab7d4b2739E
                      (&DAT_00124645,6,&local_1c8);
  puVar2 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17h533e2cba337d4042E_0027d750
  ;
  lVar10 = auVar14._0_8_;
  if (lVar10 == 0) {
    uVar13 = CONCAT71(auVar14._9_7_,2);
    local_154 = (undefined4)uVar13;
    if (cVar4 != '\0') goto LAB_0019f13a;
  }
  else {
    uVar13 = *(undefined8 *)(lVar10 + 8);
    uVar1 = *(undefined8 *)(lVar10 + 0x10);
    if (cVar4 != '\0') {
      auVar14 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17h533e2cba337d4042E_0027d750
                )(param_2,&DAT_0012463f,1);
      bVar6 = (*(code *)puVar2)(param_2,&DAT_00124645,6);
      if (((auVar14 & (undefined  [16])0x1) != (undefined  [16])0x0) &&
         (local_154 = (undefined4)CONCAT71((int7)(extraout_RDX >> 8),1),
         (bVar6 & auVar14._8_8_ <= extraout_RDX) == 0)) goto LAB_0019f13c;
    }
    cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h700a79b2753b21bbE
                      (uVar13,uVar1,&DAT_00121a58,4);
    uVar13 = extraout_RDX_00;
    if (cVar4 == '\0') {
      local_154 = 0;
    }
    else {
LAB_0019f13a:
      local_154 = (undefined4)CONCAT71((int7)((ulong)uVar13 >> 8),1);
    }
  }
LAB_0019f13c:
  uVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0027d740
          )(param_2,&DAT_0012464b,0xb);
  _ZN7uu_tail4args10FilterMode4from17hb59232841d18f0f6E(&local_1c8,param_2);
  local_138 = (ulong)local_1b8;
  lStack_140 = uStack_1c0;
  local_148 = (long)local_1c8;
  puVar2 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0027d740
  ;
  if (local_1c8 == (undefined **)0x5) {
    param_1[1] = uStack_1c0;
    param_1[2] = (long)local_1b8;
    *param_1 = 5;
    return param_1;
  }
  uVar8 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0027d740
          )(param_2,&DAT_00124656,7);
  local_150 = param_1;
  uVar9 = (*(code *)puVar2)(param_2,&DAT_0012465d,0x13);
  (*(code *)
    PTR__ZN66__LT_uu_tail__args__Settings_u20_as_u20_core__default__Default_GT_7default17hab317295196880fbE_0027d418
  )(&local_1c8);
  plVar3 = local_150;
  local_108 = local_188;
  local_110 = local_190;
  local_100 = CONCAT11(uVar7,uVar5);
  local_fd = CONCAT31(CONCAT21(local_fd._2_2_,(char)local_154),uVar9);
  uStack_130 = (undefined4)local_1b0;
  uStack_12c = local_1b0._4_4_;
  uStack_128 = (undefined4)uStack_1a8;
  uStack_124 = uStack_1a8._4_4_;
  uStack_118 = uStack_198;
  uStack_114 = uStack_194;
                    /* try { // try from 0019f273 to 0019f740 has its CatchHandler @ 0019f779 */
  local_fe = uVar8;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7b3d077d0028ebf2E
            (&local_1c8,param_2,&DAT_00124670,0xe);
  lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf1a769ab7d4b2739E
                     (&DAT_00124670,0xe,&local_1c8);
  if (lVar10 == 0) {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7b3d077d0028ebf2E
              (&local_1c8,param_2,&DAT_0012467e,0x13);
    lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf1a769ab7d4b2739E
                       (&DAT_0012467e,0x13,&local_1c8);
    if (lVar10 != 0) {
      uVar13 = *(undefined8 *)(lVar10 + 8);
      uVar1 = *(undefined8 *)(lVar10 + 0x10);
      uVar11 = _ZN4core3num21__LT_impl_u20_u32_GT_16from_ascii_radix17h825576ac29f90020E
                         (uVar13,uVar1);
      if ((uVar11 & 1) != 0) {
        local_178 = 0;
        local_160 = 1;
        local_f8 = &local_178;
        local_f0 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
        ;
        local_1c8 = &PTR_DAT_00272fb0;
        uStack_1c0 = 1;
        uStack_1a8 = 0;
        local_1b8 = &local_f8;
        local_1b0 = 1;
        uStack_170 = uVar13;
        local_168 = uVar1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h0ad4dbebb1db8692E(local_b8,&local_1c8);
        local_1b0 = CONCAT44(local_1b0._4_4_,1);
        local_1b8 = (undefined8 **)local_a8;
        lVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_1c8);
        goto LAB_0019f405;
      }
      local_108 = CONCAT44(local_108._4_4_,(int)(uVar11 >> 0x20));
    }
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7b3d077d0028ebf2E
              (&local_1c8,param_2,&DAT_00124691,3);
    lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf1a769ab7d4b2739E
                       (&DAT_00124691,3,&local_1c8);
    if (lVar10 == 0) {
LAB_0019f552:
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hfeeaae4cf3e9fe7dE
                (&local_1c8,param_2);
      _ZN12clap_builder6parser5error12MatchesError6unwrap17h06967c07660eda5fE(local_70,&local_1c8);
      if (local_70[0] == 0) {
        _ZN7uu_tail4args8Settings4from28__u7b__u7b_closure_u7d__u7d_17h7af28a89fa321ee6E(&local_1c8)
        ;
      }
      else {
        _ZN4core4iter6traits8iterator8Iterator7collect17hac11550ad94c7bc1E(&local_1c8,local_70);
      }
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_uu_tail__paths__Input_GT__GT_17hc1e8b2989ad93a4fE
                (&uStack_130);
      plVar3 = local_150;
      uStack_120 = (ulong)local_1b8;
      uStack_130 = (undefined4)local_1c8;
      uStack_12c = local_1c8._4_4_;
      uStack_128 = (undefined4)uStack_1c0;
      uStack_124 = uStack_1c0._4_4_;
      cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0027d740
              )(param_2,&DAT_00124656,7);
      if ((cVar4 == '\0') && (uStack_120 < 2)) {
        bVar6 = 0;
      }
      else {
        bVar6 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0027d740
                )(param_2,&DAT_00124699,5);
        bVar6 = bVar6 ^ 1;
      }
      plVar3[6] = CONCAT44(uStack_114,uStack_118);
      plVar3[7] = CONCAT44(uStack_10c,local_110);
      plVar3[4] = CONCAT44(uStack_124,uStack_128);
      plVar3[5] = uStack_120;
      plVar3[2] = local_138;
      plVar3[3] = CONCAT44(uStack_12c,uStack_130);
      *plVar3 = local_148;
      plVar3[1] = lStack_140;
      plVar3[8] = local_108;
      *(undefined2 *)(plVar3 + 9) = local_100;
      *(byte *)((long)plVar3 + 0x4a) = bVar6;
      *(undefined4 *)((long)plVar3 + 0x4b) = local_fd;
      *(undefined *)((long)plVar3 + 0x4f) = local_f9;
      return plVar3;
    }
    uVar13 = *(undefined8 *)(lVar10 + 8);
    uVar1 = *(undefined8 *)(lVar10 + 0x10);
    uVar11 = _ZN4core3num21__LT_impl_u20_i32_GT_16from_ascii_radix17h8c416a74051ba1e6E(uVar13,uVar1)
    ;
    uStack_170 = uVar13;
    local_168 = uVar1;
    if ((uVar11 & 1) == 0) {
      if (-1 < (long)uVar11) {
        local_108 = CONCAT44((int)(uVar11 >> 0x20),(undefined4)local_108);
        goto LAB_0019f552;
      }
      local_178 = 0;
      local_160 = 1;
      local_f8 = &local_178;
      local_f0 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
      ;
      local_1c8 = &PTR_DAT_00272fc0;
      uStack_1c0 = 1;
      uStack_1a8 = 0;
      local_1b8 = &local_f8;
      local_1b0 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h0ad4dbebb1db8692E(local_a0,&local_1c8);
      local_1b0 = CONCAT44(local_1b0._4_4_,1);
      local_1b8 = (undefined8 **)local_90;
      lVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_1c8);
    }
    else {
      local_1c9 = (undefined)(uVar11 >> 8);
      local_178 = 0;
      local_160 = 1;
      local_f8 = &local_178;
      local_f0 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0027d380
      ;
      local_e8 = &local_1c9;
      local_e0 = 
      PTR__ZN70__LT_core__num__error__ParseIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h3e61086f3d7b9af4E_0027d760
      ;
      local_1c8 = &PTR_DAT_00272fd0;
      uStack_1c0 = 2;
      uStack_1a8 = 0;
      local_1b8 = &local_f8;
      local_1b0 = 2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h0ad4dbebb1db8692E(local_88,&local_1c8);
      local_1b0 = CONCAT44(local_1b0._4_4_,1);
      local_1b8 = (undefined8 **)local_78;
      lVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_1c8);
    }
    plVar3[1] = lVar10;
    ppuVar12 = &
               PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
    ;
  }
  else {
    local_d8 = lVar10;
    (*(code *)PTR__ZN6uucore8features6parser10parse_time8from_str17h30003dba666110f8E_0027d758)
              (local_d0,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),0);
    lVar10 = _ZN7uu_tail4args8Settings4from28__u7b__u7b_closure_u7d__u7d_17hfdc7478eec48226dE
                       (&local_d8,local_d0);
LAB_0019f405:
    plVar3[1] = lVar10;
    ppuVar12 = &
               PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00273010
    ;
  }
  plVar3[2] = (long)ppuVar12;
  *plVar3 = 5;
  _ZN4core3ptr44drop_in_place_LT_uu_tail__args__Settings_GT_17h19701cb79d8addd9E(&local_148);
  return plVar3;
}