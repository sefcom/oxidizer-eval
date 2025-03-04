/* WARNING: Type propagation algorithm not settling */

undefined8 *
_ZN5uu_pr13build_options17h94d2c892cdb8648cE
          (undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *******param_4,
          undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *******pppppppuVar13;
  char *pcVar14;
  undefined8 *******pppppppuVar15;
  undefined8 uVar16;
  undefined8 *******pppppppuVar17;
  char *pcVar18;
  undefined8 *******pppppppuVar19;
  ulong uVar20;
  long lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined local_33d;
  undefined4 local_33c;
  undefined8 *local_338;
  byte local_329;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2cc;
  undefined8 local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 *******local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 *******local_248;
  undefined8 *******local_240;
  undefined8 *******local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 *******local_220;
  undefined8 *******local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 *******local_208;
  undefined8 *******local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 *******local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 *******local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 *******local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 *******local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 *******local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined local_120 [32];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined local_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined local_48 [24];
  
  local_338 = param_1;
  local_238 = param_4;
  local_230 = param_5;
  local_228 = param_6;
  bVar7 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"form-feed",9);
  cVar8 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"merge",5);
  if (cVar8 != '\0') {
    cVar9 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                      (param_2,"column",6);
    if (cVar9 != '\0') {
      pcVar18 = "cannot specify number of columns when printing in parallel";
      uVar16 = 0x3a;
LAB_002c4592:
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h52af2e019a03ed2dE
                (&local_328,pcVar18,uVar16);
      local_338[1] = 0x8000000000000001;
      local_338[2] = local_328;
      local_338[3] = uStack_320;
      local_338[4] = local_318;
      *local_338 = 2;
      return local_338;
    }
    cVar9 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"across",6);
    if (cVar9 != '\0') {
      pcVar18 = "cannot specify both printing across and printing in parallel";
      uVar16 = 0x3c;
      goto LAB_002c4592;
    }
  }
  local_329 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (param_2,"merge",5);
  pcVar18 = "header";
  local_2c8 = param_2;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf528812c919d4af6E
            (&local_328,param_2,"header",6);
  lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf38d98c9afef2728E
                     ("header",6,&local_328);
  if (lVar10 == 0) {
    lVar21 = 0;
    if (cVar8 != '\0') goto LAB_002c462e;
LAB_002c4640:
    if (local_238 == (undefined8 *******)0x0) {
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                (0,0,&PTR_s_src_uu_pr_src_pr_rs_00409280);
    }
    lVar1 = *param_3;
    pcVar2 = (char *)param_3[1];
    cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbb47e2b296de4d69E
                      (lVar1,pcVar2,"-",1);
    pcVar14 = (char *)0x0;
    lVar10 = 1;
    if (cVar9 == '\0') {
      pcVar14 = pcVar2;
      lVar10 = lVar1;
    }
  }
  else {
    lVar21 = *(long *)(lVar10 + 8);
    pcVar18 = *(char **)(lVar10 + 0x10);
    if (cVar8 == '\0') goto LAB_002c4640;
LAB_002c462e:
    pcVar14 = (char *)0x0;
    lVar10 = 1;
  }
  if (lVar21 != 0) {
    lVar10 = lVar21;
    pcVar14 = pcVar18;
  }
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h52af2e019a03ed2dE
            (&local_328,lVar10,pcVar14);
  local_198 = local_318;
  local_1a8 = (undefined4)local_328;
  uStack_1a4 = local_328._4_4_;
  uStack_1a0 = (undefined4)uStack_320;
  uStack_19c = uStack_320._4_4_;
                    /* try { // try from 002c46c6 to 002c47ef has its CatchHandler @ 002c5997 */
  _ZN63__LT_uu_pr__NumberingMode_u20_as_u20_core__default__Default_GT_7default17h62d70fa0066756c7E
            (&local_328);
  pppppppuVar19 = local_308;
  _ZN4core3ptr41drop_in_place_LT_uu_pr__NumberingMode_GT_17h7b44dbe916af3d67E(&local_328);
  _ZN5uu_pr11parse_usize17hfdefcaff0fd209a5E(&local_2b8,local_2c8,"first-line-number",0x11);
  pppppppuVar13 = (undefined8 *******)uStack_2b0;
  pppppppuVar17 = (undefined8 *******)local_2b8;
  uStack_320 = pppppppuVar19;
  local_328 = (undefined **)0x8000000000000005;
  if ((undefined8 *******)local_2b8 != (undefined8 *******)0x8000000000000006) {
    local_148 = (undefined4)local_2a8;
    uStack_144 = local_2a8._4_4_;
    uStack_140 = (undefined4)uStack_2a0;
    uStack_13c = uStack_2a0._4_4_;
    _ZN4core3ptr71drop_in_place_LT_core__result__Result_LT_usize_C_uu_pr__PrError_GT__GT_17ha4194cf31cf0eea9E
              (&local_328);
    pppppppuVar19 = pppppppuVar13;
    if (pppppppuVar17 != (undefined8 *******)0x8000000000000005) {
      *(undefined4 *)(local_338 + 3) = local_148;
      *(undefined4 *)((long)local_338 + 0x1c) = uStack_144;
      *(undefined4 *)(local_338 + 4) = uStack_140;
      *(undefined4 *)((long)local_338 + 0x24) = uStack_13c;
      local_338[1] = pppppppuVar17;
      local_338[2] = pppppppuVar13;
      *local_338 = 2;
      goto LAB_002c5675;
    }
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf528812c919d4af6E
            (&local_328,local_2c8,"number-lines",0xc);
  lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf38d98c9afef2728E
                     ("number-lines",0xc,&local_328);
  if (lVar10 == 0) {
    local_2b8 = (char *)0x8000000000000000;
  }
  else {
    _ZN5uu_pr13build_options28__u7b__u7b_closure_u7d__u7d_17h8ef498fb2ad05c80E
              (&local_328,pppppppuVar19,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
    local_298 = local_308;
    local_2a8 = local_318;
    uStack_2a0 = (code *)uStack_310;
    local_2b8 = (char *)local_328;
    uStack_2b0 = (code *)uStack_320;
  }
  _ZN4core6option15Option_LT_T_GT_7or_else17ha3e2a98868988ec3E(&local_148,&local_2b8,local_2c8);
  uVar16 = local_2c8;
                    /* try { // try from 002c47f0 to 002c484e has its CatchHandler @ 002c5988 */
  cVar9 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (local_2c8,"double-space",0xc);
  if (cVar9 == '\0') {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h52af2e019a03ed2dE
              (&local_328,"\n argument ",1);
    local_1d8 = local_318;
    local_1e8 = (undefined4)local_328;
    uStack_1e4 = local_328._4_4_;
    uStack_1e0 = (undefined4)uStack_320;
    uStack_1dc = uStack_320._4_4_;
  }
  else {
    _ZN5alloc3str21__LT_impl_u20_str_GT_6repeat17h44a69ba09e43960aE(&local_1e8,"\n argument ",1,2);
  }
                    /* try { // try from 002c4869 to 002c487e has its CatchHandler @ 002c5983 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h52af2e019a03ed2dE
            (&local_328,"\n argument ",1);
  local_178 = local_318;
  local_188 = (undefined4)local_328;
  uStack_184 = local_328._4_4_;
  uStack_180 = (undefined4)uStack_320;
  uStack_17c = uStack_320._4_4_;
  if (cVar8 == '\0') {
    if (local_238 == (undefined8 *******)0x0) {
                    /* try { // try from 002c58d0 to 002c58e0 has its CatchHandler @ 002c5992 */
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                (0,0,&PTR_s_src_uu_pr_src_pr_rs_00409298);
    }
    lVar10 = *param_3;
    lVar21 = param_3[1];
                    /* try { // try from 002c48b5 to 002c492e has its CatchHandler @ 002c5992 */
    cVar8 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbb47e2b296de4d69E
                      (lVar10,lVar21,"-",1);
    if (cVar8 != '\0') goto LAB_002c48d4;
    uVar11 = _ZN5uu_pr23file_last_modified_time17ha75c4cf04aa4487bE(&local_168,lVar10,lVar21);
  }
  else {
LAB_002c48d4:
    _ZN6chrono6offset5local5Local3now17ha82adb6e05d16f38E(&local_268);
    local_2b8 = "%b %d %H:%M %Y";
    uStack_2b0 = (code *)0xe;
    local_2a8 = (undefined8 *******)&DAT_00000008;
    uStack_2a0 = (code *)0x0;
    _ZN6chrono8datetime18DateTime_LT_Tz_GT_17format_with_items17h8783bdf86431a8e2E
              (&local_328,&local_268,&local_2b8);
                    /* try { // try from 002c492f to 002c4940 has its CatchHandler @ 002c5931 */
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17hac2fd916285297b4E
              (&local_168,&local_328);
                    /* try { // try from 002c4941 to 002c4984 has its CatchHandler @ 002c5992 */
    uVar11 = _ZN4core3ptr109drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_chrono__format__strftime__StrftimeItems_GT__GT_17hc5f165bf2c68bf1eE
                       (&local_328);
  }
  local_2cc = (undefined4)CONCAT71((int7)((ulong)uVar11 >> 8),1);
                    /* try { // try from 002c498b to 002c49ba has its CatchHandler @ 002c598d */
  _ZN5regex5regex6string5Regex3new17h2b022f3b326b0361E(&local_328,"\\s*\\+(\\d+:*\\d*)\\s*",0x12);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8fa19f49ce20910dE
            (local_120,&local_328,&PTR_s_src_uu_pr_src_pr_rs_004092b0);
                    /* try { // try from 002c49bb to 002c4f8b has its CatchHandler @ 002c599c */
  _ZN5regex5regex6string5Regex11captures_at17h3dfa64f8a9d1e89bE
            (&local_2b8,local_120,local_230,local_228);
  if ((int)local_2b8 == 2) {
    local_248 = (undefined8 *******)&DAT_00000001;
LAB_002c4a9d:
    _ZN5regex5regex6string5Regex11captures_at17h3dfa64f8a9d1e89bE
              (&local_2b8,local_120,local_230,local_228);
    if ((int)local_2b8 == 2) {
      uVar11 = 0;
    }
    else {
      local_2e8 = local_278;
      local_2f8 = local_288;
      uStack_2f4 = uStack_284;
      uStack_2f0 = uStack_280;
      uStack_2ec = uStack_27c;
      local_308 = local_298;
      uStack_300 = uStack_290;
      uStack_2fc = uStack_28c;
      local_318 = local_2a8;
      uStack_310 = (undefined8 *******)uStack_2a0;
      local_328 = (undefined **)local_2b8;
      uStack_320 = (undefined8 *******)uStack_2b0;
      uVar11 = _ZN5uu_pr13build_options28__u7b__u7b_closure_u7d__u7d_17h20f6ec5ab6200f34E
                         (&local_328);
    }
    lVar10 = _ZN4core6option15Option_LT_T_GT_6filter17hb95f08937d3c1d4eE(uVar11);
    if (lVar10 == 0) {
      bVar3 = false;
LAB_002c4b7d:
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf528812c919d4af6E
                (&local_328,uVar16,"pages",5);
      lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf38d98c9afef2728E
                         ("pages",5,&local_328);
      if (lVar10 != 0) {
        _ZN5uu_pr13build_options28__u7b__u7b_closure_u7d__u7d_17h2ddd4089cb1ade00E
                  (&local_328,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
        local_268 = uStack_320;
        uStack_260 = (undefined4)local_318;
        uStack_25c = local_318._4_4_;
        if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000000) {
          uStack_2b0 = (code *)uStack_320;
          local_2a8 = local_318;
          local_2b8 = (char *)local_328;
          _ZN4core3ops8function6FnOnce9call_once17ha1b2362239e97776E(&local_328,uVar16,&local_2b8);
          local_a8 = (undefined4)local_318;
          uStack_a4 = local_318._4_4_;
          uStack_a0 = (undefined4)uStack_310;
          uStack_9c = uStack_310._4_4_;
          if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000005) {
            local_248 = uStack_320;
          }
          else {
            pppppppuVar19 = uStack_320;
            pppppppuVar17 = (undefined8 *******)local_328;
            uVar22 = (undefined4)local_318;
            uVar23 = local_318._4_4_;
            uVar24 = (undefined4)uStack_310;
            uVar25 = uStack_310._4_4_;
            if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000006)
            goto LAB_002c5228;
          }
        }
      }
      local_150 = local_248;
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf528812c919d4af6E
                (&local_328,uVar16,"pages",5);
      uVar11 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf38d98c9afef2728E
                         ("pages",5,&local_328);
      lVar10 = _ZN4core6option15Option_LT_T_GT_6filter17h140b96ae474dbf5eE(uVar11);
      if (lVar10 == 0) {
LAB_002c4d59:
        if (bVar3) goto LAB_002c4d6d;
        local_1f0 = 0;
      }
      else {
        _ZN5uu_pr13build_options28__u7b__u7b_closure_u7d__u7d_17h38790067a811e053E
                  (&local_328,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
        local_268 = uStack_320;
        uStack_260 = (undefined4)local_318;
        uStack_25c = local_318._4_4_;
        if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000000)
        goto LAB_002c4d59;
        uStack_2b0 = (code *)uStack_320;
        local_2a8 = local_318;
        local_2b8 = (char *)local_328;
        _ZN4core3ops8function6FnOnce9call_once17ha1b2362239e97776E(&local_328,uVar16,&local_2b8);
        local_98 = (undefined4)local_318;
        uStack_94 = local_318._4_4_;
        uStack_90 = (undefined4)uStack_310;
        uStack_8c = uStack_310._4_4_;
        if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000005) {
          pppppppuVar19 = uStack_320;
          pppppppuVar17 = (undefined8 *******)local_328;
          uVar22 = (undefined4)local_318;
          uVar23 = local_318._4_4_;
          uVar24 = (undefined4)uStack_310;
          uVar25 = uStack_310._4_4_;
          if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000006)
          goto LAB_002c5228;
          goto LAB_002c4d59;
        }
        local_240 = uStack_320;
LAB_002c4d6d:
        local_268 = local_240;
        if (local_240 < local_248) {
          local_2b8 = (char *)&local_150;
          uStack_2b0 = 
          _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
          ;
          local_2a8 = (undefined8 *******)&local_268;
          uStack_2a0 = 
          _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
          ;
          local_328 = &PTR_s_invalid___pages_argument_____00409250;
          uStack_320 = (undefined8 *******)0x3;
          local_308 = (undefined8 *******)0x0;
          uStack_310 = (undefined8 *******)0x2;
          local_318 = (undefined8 *******)&local_2b8;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ea8d69383c77fddE(&local_60,&local_328);
          local_338[4] = local_50;
          *(undefined4 *)(local_338 + 2) = local_60;
          *(undefined4 *)((long)local_338 + 0x14) = uStack_5c;
          *(undefined4 *)(local_338 + 3) = uStack_58;
          *(undefined4 *)((long)local_338 + 0x1c) = uStack_54;
          local_338[1] = 0x8000000000000001;
          *local_338 = 2;
          goto LAB_002c5634;
        }
        local_1f0 = 1;
      }
      _ZN5uu_pr11parse_usize17hfdefcaff0fd209a5E(&local_2b8,uVar16,"length",6);
      pppppppuVar17 = (undefined8 *******)uStack_2b0;
      pppppppuVar19 = (undefined8 *******)local_2b8;
      uStack_320 = (undefined8 *******)((ulong)(bVar7 ^ 1) * 3 + 0x3f);
      local_328 = (undefined **)0x8000000000000005;
      pppppppuVar13 = uStack_320;
      if ((undefined8 *******)local_2b8 == (undefined8 *******)0x8000000000000006) {
LAB_002c4e87:
        local_2bc = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                              (uVar16,"omit-header",0xb);
        local_2bc = local_2bc ^ 1;
        pppppppuVar17 = (undefined8 *******)((long)pppppppuVar13 + -10);
      }
      else {
        local_268 = local_2a8;
        uStack_260 = (undefined4)uStack_2a0;
        uStack_25c = uStack_2a0._4_4_;
        _ZN4core3ptr71drop_in_place_LT_core__result__Result_LT_usize_C_uu_pr__PrError_GT__GT_17ha4194cf31cf0eea9E
                  (&local_328);
        if (pppppppuVar19 != (undefined8 *******)0x8000000000000005) {
          *(undefined4 *)(local_338 + 3) = (undefined4)local_268;
          *(undefined4 *)((long)local_338 + 0x1c) = local_268._4_4_;
          *(undefined4 *)(local_338 + 4) = uStack_260;
          *(undefined4 *)((long)local_338 + 0x24) = uStack_25c;
          local_338[1] = pppppppuVar19;
          local_338[2] = pppppppuVar17;
          *local_338 = 2;
          goto LAB_002c5634;
        }
        pppppppuVar13 = pppppppuVar17;
        if (&DAT_00000009 < pppppppuVar17) goto LAB_002c4e87;
        local_2bc = 0;
      }
      cVar8 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (uVar16,"form-feed",9);
      if (cVar8 == '\0') {
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h52af2e019a03ed2dE
                  (&local_328,"\n argument ",1);
        local_1b8 = local_318;
        local_1c8 = (undefined4)local_328;
        uStack_1c4 = local_328._4_4_;
        uStack_1c0 = (undefined4)uStack_320;
        uStack_1bc = uStack_320._4_4_;
      }
      else {
        puVar12 = (undefined *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(1,1);
        if (puVar12 == (undefined *)0x0) {
                    /* try { // try from 002c58e3 to 002c58f2 has its CatchHandler @ 002c599c */
                    /* WARNING: Subroutine does not return */
          _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(1,1);
        }
        *puVar12 = 0xc;
        _ZN5alloc5slice4hack8into_vec17h170b8d01c23dd35dE(local_48,puVar12,1);
        _ZN5alloc6string6String9from_utf817hacb364918987915aE(&local_328,local_48);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hff028afbac41c813E
                  (&local_1c8,&local_328,&PTR_s_src_uu_pr_src_pr_rs_004092c8);
      }
                    /* try { // try from 002c4fa6 to 002c5078 has its CatchHandler @ 002c5943 */
      local_33d = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                            (uVar16,"across",6);
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf528812c919d4af6E
                (&local_328,uVar16,"sep-string",10);
      lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf38d98c9afef2728E
                         ("sep-string",10,&local_328);
      if (lVar10 == 0) {
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf528812c919d4af6E
                  (&local_328,uVar16,"separator",9);
        lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf38d98c9afef2728E
                           ("separator",9,&local_328);
        if (lVar10 != 0) goto LAB_002c5027;
LAB_002c504f:
        local_268 = (undefined8 *******)((ulong)local_268 & 0xffffffff00000000);
        uVar11 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(9,&local_268);
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h52af2e019a03ed2dE
                  (&local_328,uVar11);
        uStack_210 = (undefined4)uStack_320;
        uStack_20c = uStack_320._4_4_;
        pppppppuVar19 = local_318;
      }
      else {
LAB_002c5027:
        _ZN4core3ops8function6FnOnce9call_once17hb52d6c73ae74d5cfE(&local_328,lVar10);
        uStack_210 = SUB84(uStack_320,0);
        local_2b8 = (char *)uStack_320;
        uStack_2b0 = (code *)local_318;
        if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000000)
        goto LAB_002c504f;
        uStack_20c = uStack_320._4_4_;
        pppppppuVar19 = (undefined8 *******)local_328;
      }
      local_33c = (undefined4)CONCAT71((int7)((ulong)pppppppuVar19 >> 8),1);
      local_218 = (undefined8 *******)local_328;
      local_208 = local_318;
                    /* try { // try from 002c50b6 to 002c529d has its CatchHandler @ 002c5948 */
      cVar8 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                        (uVar16,"width",5);
      pppppppuVar19 = (undefined8 *******)&DAT_00000048;
      if (cVar8 != '\0') {
        cVar8 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                          (local_2c8,"separator",9);
        pppppppuVar19 = (undefined8 *******)&DAT_00000048;
        if (cVar8 != '\0') {
          pppppppuVar19 = (undefined8 *******)0x200;
        }
      }
      _ZN5uu_pr11parse_usize17hfdefcaff0fd209a5E(&local_2b8,local_2c8,"width",5);
      pppppppuVar4 = (undefined8 *******)uStack_2b0;
      pppppppuVar13 = (undefined8 *******)local_2b8;
      local_328 = (undefined **)0x8000000000000005;
      uStack_320 = pppppppuVar19;
      if ((undefined8 *******)local_2b8 == (undefined8 *******)0x8000000000000006) {
LAB_002c516c:
        local_220 = pppppppuVar19;
        cVar8 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (local_2c8,"join-lines",10);
        if (cVar8 == '\0') {
          _ZN5uu_pr11parse_usize17hfdefcaff0fd209a5E(&local_328,local_2c8,"page-width");
          if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000006) {
            local_1f8 = 0;
          }
          else {
            if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000005) {
              *(undefined4 *)(local_338 + 3) = (undefined4)local_318;
              *(undefined4 *)((long)local_338 + 0x1c) = local_318._4_4_;
              *(undefined4 *)(local_338 + 4) = (undefined4)uStack_310;
              *(undefined4 *)((long)local_338 + 0x24) = uStack_310._4_4_;
              local_338[1] = local_328;
              local_338[2] = uStack_320;
              *local_338 = 2;
              goto LAB_002c561a;
            }
            local_200 = uStack_320;
            local_1f8 = 1;
          }
        }
        else {
          local_1f8 = 0;
        }
        _ZN5regex5regex6string5Regex3new17h2b022f3b326b0361E(&local_328,"\\s*-(\\d+)\\s*",0xc);
        pppppppuVar19 = (undefined8 *******)0x0;
        uVar16 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8fa19f49ce20910dE
                           (local_e8,&local_328,&PTR_s_src_uu_pr_src_pr_rs_004092e0);
        local_33c = (undefined4)CONCAT71((int7)((ulong)uVar16 >> 8),1);
                    /* try { // try from 002c52a4 to 002c53ff has its CatchHandler @ 002c591c */
        _ZN5regex5regex6string5Regex11captures_at17h3dfa64f8a9d1e89bE
                  (&local_2b8,local_e8,local_230,local_228);
        uVar16 = local_2c8;
        if ((int)local_2b8 == 2) {
          bVar3 = true;
LAB_002c537d:
          _ZN5uu_pr11parse_usize17hfdefcaff0fd209a5E(&local_328,uVar16,"column",6);
          if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000006) {
            pppppppuVar19 = uStack_320;
            if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000005)
            goto LAB_002c5440;
            pppppppuVar13 = (undefined8 *******)local_328;
            local_258 = (undefined4)local_318;
            uStack_254 = local_318._4_4_;
            uStack_250 = (undefined4)uStack_310;
            uStack_24c = uStack_310._4_4_;
            goto LAB_002c5589;
          }
          uStack_2a0 = (code *)&local_220;
          local_2b8 = (char *)local_218;
          uStack_2b0._0_4_ = uStack_210;
          uStack_2b0._4_4_ = uStack_20c;
          local_2a8 = local_208;
          local_298 = (undefined8 *******)&local_33d;
          if (bVar3) {
            local_328 = (undefined **)0x8000000000000000;
            local_33c = 0;
            _ZN4core3ptr70drop_in_place_LT_uu_pr__build_options___u7b__u7b_closure_u7d__u7d__GT_17h2fa688b4a75204f5E
                      (&local_2b8);
          }
          else {
LAB_002c5440:
            uStack_2a0 = (code *)&local_220;
            local_2b8 = (char *)local_218;
            uStack_2b0._4_4_ = uStack_20c;
            uStack_2b0._0_4_ = uStack_210;
            local_2a8 = local_208;
            local_318 = local_208;
            local_328 = (undefined **)local_218;
            uStack_320 = (undefined8 *******)CONCAT44(uStack_20c,uStack_210);
            uStack_310 = local_220;
            uStack_300 = CONCAT31(uStack_300._1_3_,local_33d);
            local_308 = pppppppuVar19;
          }
                    /* try { // try from 002c5475 to 002c5501 has its CatchHandler @ 002c5905 */
          _ZN5uu_pr11parse_usize17hfdefcaff0fd209a5E(&local_268,uVar16,"indent",6);
          pppppppuVar19 = local_268;
          uStack_2b0 = (code *)0x0;
          local_2b8 = (char *)0x8000000000000005;
          if (local_268 == (undefined8 *******)0x8000000000000006) {
LAB_002c54e5:
            _ZN5alloc3str21__LT_impl_u20_str_GT_6repeat17h44a69ba09e43960aE
                      (&local_100,
                       " /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-1.11.1/src/regex/string.rsinvalid + argument invalid --pages argument invalid - argument "
                       ,1);
                    /* try { // try from 002c5502 to 002c5573 has its CatchHandler @ 002c58f3 */
            cVar8 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                              (local_2c8,"join-lines",10);
            uVar20 = (ulong)local_329;
            if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000000) {
              _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                        (&local_2b8,&local_328);
              local_268 = (undefined8 *******)uStack_2b0;
              uStack_260 = (undefined4)local_2a8;
              uStack_25c = local_2a8._4_4_;
              pppppppuVar19 = local_318;
              pppppppuVar13 = uStack_310;
              pppppppuVar4 = local_308;
              pppppppuVar5 = (undefined8 *******)local_2b8;
              pppppppuVar6 = (undefined8 *******)uStack_2b0;
              if ((undefined8 *******)local_2b8 != (undefined8 *******)0x8000000000000000)
              goto joined_r0x002c5577;
            }
            _ZN5uu_pr13build_options28__u7b__u7b_closure_u7d__u7d_17h2f6e5f2b8a2f8c99E
                      (&local_2b8,uVar20);
            pppppppuVar19 = local_318;
            pppppppuVar13 = uStack_310;
            pppppppuVar4 = local_308;
            pppppppuVar5 = (undefined8 *******)local_2b8;
            pppppppuVar6 = (undefined8 *******)uStack_2b0;
joined_r0x002c5577:
            if (cVar8 == '\0') {
              pppppppuVar15 = pppppppuVar4;
              if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000000) {
                pppppppuVar15 = (undefined8 *******)0x0;
              }
              if (uVar20 != 0) {
                pppppppuVar15 = local_238;
              }
              uVar16 = local_1f8;
              if (&DAT_00000001 < pppppppuVar15) {
                local_200 = (undefined8 *******)&DAT_00000048;
                if ((undefined8 *******)local_328 != (undefined8 *******)0x8000000000000000) {
                  local_200 = pppppppuVar13;
                }
                uVar16 = 1;
              }
            }
            else {
              uVar16 = 0;
            }
            local_338[0x1f] = local_128;
            local_338[0x1d] = local_138;
            local_338[0x1e] = uStack_130;
            local_338[0x1b] = CONCAT44(uStack_144,local_148);
            local_338[0x1c] = CONCAT44(uStack_13c,uStack_140);
            local_338[8] = local_198;
            local_338[6] = CONCAT44(uStack_1a4,local_1a8);
            local_338[7] = CONCAT44(uStack_19c,uStack_1a0);
            local_338[0xb] = local_178;
            local_338[9] = CONCAT44(uStack_184,local_188);
            local_338[10] = CONCAT44(uStack_17c,uStack_180);
            local_338[0xe] = local_1d8;
            local_338[0xc] = CONCAT44(uStack_1e4,local_1e8);
            local_338[0xd] = CONCAT44(uStack_1dc,uStack_1e0);
            local_338[0xf] = local_168;
            local_338[0x10] = uStack_160;
            local_338[0x11] = local_158;
            local_338[0x12] = CONCAT44(uStack_1c4,local_1c8);
            local_338[0x13] = CONCAT44(uStack_1bc,uStack_1c0);
            local_338[0x14] = local_1b8;
            local_318._0_4_ = SUB84(pppppppuVar19,0);
            local_318._4_4_ = (undefined4)((ulong)pppppppuVar19 >> 0x20);
            uStack_310._0_4_ = SUB84(pppppppuVar13,0);
            uStack_310._4_4_ = (undefined4)((ulong)pppppppuVar13 >> 0x20);
            local_308._0_4_ = SUB84(pppppppuVar4,0);
            local_308._4_4_ = (undefined4)((ulong)pppppppuVar4 >> 0x20);
            local_338[0x20] = local_328;
            local_338[0x21] = uStack_320;
            *(undefined4 *)(local_338 + 0x22) = (undefined4)local_318;
            *(undefined4 *)((long)local_338 + 0x114) = local_318._4_4_;
            *(undefined4 *)(local_338 + 0x23) = (undefined4)uStack_310;
            *(undefined4 *)((long)local_338 + 0x11c) = uStack_310._4_4_;
            *(undefined4 *)(local_338 + 0x24) = (undefined4)local_308;
            *(undefined4 *)((long)local_338 + 0x124) = local_308._4_4_;
            *(undefined4 *)(local_338 + 0x25) = uStack_300;
            *(undefined4 *)((long)local_338 + 300) = uStack_2fc;
            local_338[0x15] = local_100;
            local_338[0x16] = uStack_f8;
            local_338[0x17] = local_f0;
            local_2b8._0_4_ = (int)pppppppuVar5;
            local_2b8._4_4_ = (undefined4)((ulong)pppppppuVar5 >> 0x20);
            uStack_2b0._0_4_ = SUB84(pppppppuVar6,0);
            uStack_2b0._4_4_ = (undefined4)((ulong)pppppppuVar6 >> 0x20);
            *(int *)(local_338 + 0x18) = (int)local_2b8;
            *(undefined4 *)((long)local_338 + 0xc4) = local_2b8._4_4_;
            *(undefined4 *)(local_338 + 0x19) = (undefined4)uStack_2b0;
            *(undefined4 *)((long)local_338 + 0xcc) = uStack_2b0._4_4_;
            local_338[0x1a] = local_2a8;
            *local_338 = local_1f0;
            local_338[1] = local_240;
            local_338[2] = uVar20;
            local_338[3] = local_238;
            local_338[4] = uVar16;
            local_338[5] = local_200;
            local_338[0x26] = local_248;
            local_338[0x27] = pppppppuVar17;
            *(char *)(local_338 + 0x28) = cVar9;
            *(char *)((long)local_338 + 0x141) = (char)local_2bc;
            *(byte *)((long)local_338 + 0x142) = bVar7;
            *(char *)((long)local_338 + 0x143) = cVar8;
            local_33c = 0;
                    /* try { // try from 002c5898 to 002c58a4 has its CatchHandler @ 002c5948 */
            local_318 = pppppppuVar19;
            uStack_310 = pppppppuVar13;
            local_308 = pppppppuVar4;
            local_2b8 = (char *)pppppppuVar5;
            uStack_2b0 = (code *)pppppppuVar6;
            _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17had11a4c52115c130E
                      (local_e8);
            local_2cc = 0;
                    /* try { // try from 002c58ad to 002c58b9 has its CatchHandler @ 002c598d */
            _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17had11a4c52115c130E
                      (local_120);
            return local_338;
          }
          uVar16 = CONCAT44(uStack_25c,uStack_260);
          local_78 = local_258;
          uStack_74 = uStack_254;
          uStack_70 = uStack_250;
          uStack_6c = uStack_24c;
          _ZN4core3ptr71drop_in_place_LT_core__result__Result_LT_usize_C_uu_pr__PrError_GT__GT_17ha4194cf31cf0eea9E
                    (&local_2b8);
          if (pppppppuVar19 == (undefined8 *******)0x8000000000000005) goto LAB_002c54e5;
          *(undefined4 *)(local_338 + 3) = local_78;
          *(undefined4 *)((long)local_338 + 0x1c) = uStack_74;
          *(undefined4 *)(local_338 + 4) = uStack_70;
          *(undefined4 *)((long)local_338 + 0x24) = uStack_6c;
          local_338[1] = pppppppuVar19;
          local_338[2] = uVar16;
          *local_338 = 2;
          local_33c = 0;
                    /* try { // try from 002c55d3 to 002c55dc has its CatchHandler @ 002c591c */
          _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_uu_pr__ColumnModeOptions_GT__GT_17h09df0facecc11534E
                    (&local_328);
          bVar3 = true;
          local_33c = 0;
        }
        else {
          local_2e8 = local_278;
          local_2f8 = local_288;
          uStack_2f4 = uStack_284;
          uStack_2f0 = uStack_280;
          uStack_2ec = uStack_27c;
          local_308 = local_298;
          uStack_300 = uStack_290;
          uStack_2fc = uStack_28c;
          local_318 = local_2a8;
          uStack_310 = (undefined8 *******)uStack_2a0;
          local_328 = (undefined **)local_2b8;
          uStack_320 = (undefined8 *******)uStack_2b0;
          _ZN5uu_pr13build_options28__u7b__u7b_closure_u7d__u7d_17h56f47d86be9314d3E
                    (&local_268,&local_328);
          pppppppuVar19 = (undefined8 *******)CONCAT44(uStack_25c,uStack_260);
          local_88 = local_258;
          uStack_84 = uStack_254;
          uStack_80 = uStack_250;
          uStack_7c = uStack_24c;
          if (local_268 == (undefined8 *******)0x8000000000000005) {
            bVar3 = false;
            goto LAB_002c537d;
          }
          bVar3 = true;
          pppppppuVar13 = local_268;
          if (local_268 == (undefined8 *******)0x8000000000000006) goto LAB_002c537d;
LAB_002c5589:
          *(undefined4 *)(local_338 + 3) = local_258;
          *(undefined4 *)((long)local_338 + 0x1c) = uStack_254;
          *(undefined4 *)(local_338 + 4) = uStack_250;
          *(undefined4 *)((long)local_338 + 0x24) = uStack_24c;
          local_338[1] = pppppppuVar13;
          local_338[2] = pppppppuVar19;
          *local_338 = 2;
          local_33c = (undefined4)CONCAT71((int7)((ulong)pppppppuVar13 >> 8),1);
          bVar3 = false;
        }
                    /* try { // try from 002c55ea to 002c55f6 has its CatchHandler @ 002c5948 */
        _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17had11a4c52115c130E(local_e8)
        ;
        if (!bVar3) goto LAB_002c561a;
      }
      else {
        local_268 = local_2a8;
        uStack_260 = (undefined4)uStack_2a0;
        uStack_25c = uStack_2a0._4_4_;
        _ZN4core3ptr71drop_in_place_LT_core__result__Result_LT_usize_C_uu_pr__PrError_GT__GT_17ha4194cf31cf0eea9E
                  (&local_328);
        pppppppuVar19 = pppppppuVar4;
        if (pppppppuVar13 == (undefined8 *******)0x8000000000000005) goto LAB_002c516c;
        *(undefined4 *)(local_338 + 3) = (undefined4)local_268;
        *(undefined4 *)((long)local_338 + 0x1c) = local_268._4_4_;
        *(undefined4 *)(local_338 + 4) = uStack_260;
        *(undefined4 *)((long)local_338 + 0x24) = uStack_25c;
        local_338[1] = pppppppuVar13;
        local_338[2] = pppppppuVar4;
        *local_338 = 2;
LAB_002c561a:
                    /* try { // try from 002c561a to 002c5626 has its CatchHandler @ 002c5943 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h93d342cc5e2da10eE(&local_218);
      }
                    /* try { // try from 002c5627 to 002c5633 has its CatchHandler @ 002c599c */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h93d342cc5e2da10eE(&local_1c8);
    }
    else {
      _ZN5uu_pr13build_options28__u7b__u7b_closure_u7d__u7d_17h7437547c2616abd3E(&local_328,lVar10);
      local_240 = uStack_320;
      local_b8 = (undefined4)local_318;
      uStack_b4 = local_318._4_4_;
      uStack_b0 = (undefined4)uStack_310;
      uStack_ac = uStack_310._4_4_;
      if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000005) {
        bVar3 = true;
        goto LAB_002c4b7d;
      }
      if ((undefined8 *******)local_328 == (undefined8 *******)0x8000000000000006) {
        bVar3 = false;
        goto LAB_002c4b7d;
      }
      *(undefined4 *)(local_338 + 3) = (undefined4)local_318;
      *(undefined4 *)((long)local_338 + 0x1c) = local_318._4_4_;
      *(undefined4 *)(local_338 + 4) = (undefined4)uStack_310;
      *(undefined4 *)((long)local_338 + 0x24) = uStack_310._4_4_;
      local_338[1] = local_328;
      local_338[2] = uStack_320;
      *local_338 = 2;
    }
  }
  else {
    local_2e8 = local_278;
    local_2f8 = local_288;
    uStack_2f4 = uStack_284;
    uStack_2f0 = uStack_280;
    uStack_2ec = uStack_27c;
    local_308 = local_298;
    uStack_300 = uStack_290;
    uStack_2fc = uStack_28c;
    local_318 = local_2a8;
    uStack_310 = (undefined8 *******)uStack_2a0;
    local_328 = (undefined **)local_2b8;
    uStack_320 = (undefined8 *******)uStack_2b0;
    _ZN5uu_pr13build_options28__u7b__u7b_closure_u7d__u7d_17hb4b836d6dfb59964E
              (&local_268,&local_328);
    local_c8 = local_258;
    uStack_c4 = uStack_254;
    uStack_c0 = uStack_250;
    uStack_bc = uStack_24c;
    local_248 = (undefined8 *******)CONCAT44(uStack_25c,uStack_260);
    if ((local_268 == (undefined8 *******)0x8000000000000005) ||
       (local_248 = (undefined8 *******)&DAT_00000001,
       pppppppuVar19 = (undefined8 *******)CONCAT44(uStack_25c,uStack_260),
       pppppppuVar17 = local_268, uVar22 = local_258, uVar23 = uStack_254, uVar24 = uStack_250,
       uVar25 = uStack_24c, local_268 == (undefined8 *******)0x8000000000000006)) goto LAB_002c4a9d;
LAB_002c5228:
    *(undefined4 *)(local_338 + 3) = uVar22;
    *(undefined4 *)((long)local_338 + 0x1c) = uVar23;
    *(undefined4 *)(local_338 + 4) = uVar24;
    *(undefined4 *)((long)local_338 + 0x24) = uVar25;
    local_338[1] = pppppppuVar17;
    local_338[2] = pppppppuVar19;
    *local_338 = 2;
  }
LAB_002c5634:
                    /* try { // try from 002c5634 to 002c5640 has its CatchHandler @ 002c598d */
  _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17had11a4c52115c130E(local_120);
                    /* try { // try from 002c5641 to 002c564d has its CatchHandler @ 002c5992 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h93d342cc5e2da10eE(&local_168);
                    /* try { // try from 002c564e to 002c565a has its CatchHandler @ 002c5983 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h93d342cc5e2da10eE(&local_188);
                    /* try { // try from 002c565b to 002c5667 has its CatchHandler @ 002c5988 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h93d342cc5e2da10eE(&local_1e8);
                    /* try { // try from 002c5668 to 002c5674 has its CatchHandler @ 002c5997 */
  _ZN4core3ptr69drop_in_place_LT_core__option__Option_LT_uu_pr__NumberingMode_GT__GT_17hf3dc7f07a38e8ff6E
            (&local_148);
LAB_002c5675:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h93d342cc5e2da10eE(&local_1a8);
  return local_338;
}