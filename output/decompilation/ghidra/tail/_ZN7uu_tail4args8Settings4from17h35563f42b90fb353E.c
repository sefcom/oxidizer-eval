/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
_ZN7uu_tail4args8Settings4from17h35563f42b90fb353E(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  long **local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined2 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  code *local_170;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  long **local_148;
  undefined8 uStack_140;
  undefined *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long *local_118;
  code *pcStack_110;
  undefined8 *local_100;
  code *pcStack_f8;
  long **local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long **pplStack_d8;
  undefined auStack_d0 [12];
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined local_b6;
  undefined4 local_b5;
  undefined local_b1;
  long local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long **local_38;
  
  cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"F",1);
  uVar4 = 1;
  if (cVar3 == '\0') {
    uVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"retry",5);
  }
  uVar11 = 0;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0a7145d185c82391E
            (&local_1d8,param_2,"follow",6);
  lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd5b58983d4d3848bE
                    ("follow",6,&local_1d8);
  if (lVar9 == 0) {
    uVar11 = CONCAT71((int7)((ulong)uVar11 >> 8),2);
    local_15c = (undefined4)uVar11;
    if (cVar3 != '\0') goto LAB_001f8f8a;
  }
  else {
    uVar1 = *(undefined8 *)(lVar9 + 8);
    uVar2 = *(undefined8 *)(lVar9 + 0x10);
    if (cVar3 != '\0') {
      auVar13 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17hc3c8b487726d2353E
                          (param_2,"F",1);
      auVar14 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17hc3c8b487726d2353E
                          (param_2,"follow",6);
      if ((auVar13._0_8_ != 0) &&
         ((local_15c = (undefined4)CONCAT71((int7)((ulong)uVar11 >> 8),1), auVar14._0_8_ == 0 ||
          (auVar14._8_8_ < auVar13._8_8_)))) goto LAB_001f8f8c;
    }
    uVar11 = 0;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1e3c65a51412c010E
                      (uVar1,uVar2,&DAT_0011ef30);
    if (cVar3 == '\0') {
      local_15c = 0;
    }
    else {
LAB_001f8f8a:
      local_15c = (undefined4)CONCAT71((int7)((ulong)uVar11 >> 8),1);
    }
  }
LAB_001f8f8c:
  uVar5 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"use-polling",0xb);
  _ZN7uu_tail4args10FilterMode4from17h013a88fb4d6b4428E(&local_1d8,param_2);
  local_f0 = local_1c8;
  pcStack_f8 = uStack_1d0;
  local_100 = local_1d8;
  if (local_1d8 == (undefined **)&DAT_00000005) {
    param_1[1] = uStack_1d0;
    param_1[2] = local_1c8;
    *param_1 = 5;
    return param_1;
  }
  uVar6 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"verbose",7);
  uVar7 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"-presume-input-pipe",0x13);
  _ZN66__LT_uu_tail__args__Settings_u20_as_u20_core__default__Default_GT_7default17hfebeb1c4deedc4afE
            (&local_1d8);
  local_c0 = local_198;
  auStack_d0._8_4_ = local_1a0;
  local_b8 = CONCAT11(uVar5,uVar4);
  local_b5 = CONCAT31(CONCAT21(local_b5._2_2_,(char)local_15c),uVar7);
  uStack_e8 = (undefined4)uStack_1c0;
  uStack_e4 = uStack_1c0._4_4_;
  uStack_e0 = (undefined4)uStack_1b8;
  uStack_dc = uStack_1b8._4_4_;
  auStack_d0._4_4_ = uStack_1a4;
  auStack_d0._0_4_ = uStack_1a8;
                    /* try { // try from 001f90a5 to 001f9146 has its CatchHandler @ 001f9759 */
  local_b6 = uVar6;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0a7145d185c82391E
            (&local_1d8,param_2,"sleep-interval",0xe);
  lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd5b58983d4d3848bE
                    ("sleep-interval",0xe,&local_1d8);
  if (lVar9 != 0) {
    local_198 = 0xa0a0a0a0a0a0a0a;
    local_190 = 0xa0a;
    local_1d8 = (undefined **)_DAT_002bb4b0;
    uStack_1d0 = _UNK_002bb4b8;
    local_1c8 = _DAT_002bb4c0;
    uStack_1c0 = _UNK_002bb4c8;
    uStack_1b8 = PTR__ZN4core3ops8function6FnOnce9call_once17h37fe0cc403951f67E_002bb4d0;
    uStack_1b0 = PTR__ZN4core3ops8function6FnOnce9call_once17he82f0b256b285aefE_002bb4d8;
    uStack_1a8 = _DAT_002bb4e0;
    uStack_1a4 = _UNK_002bb4e4;
    local_1a0 = _UNK_002bb4e8;
    uStack_19c = _UNK_002bb4ec;
    local_b0 = lVar9;
    _ZN10fundu_core5parse6Parser12parse_single17hf9b1910532b4386dE
              (&local_188,&local_1d8,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),
               &local_198);
    if ((int)local_188 != 8) {
      local_118 = &local_b0;
      pcStack_110 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h06c7cece6fef7c8fE;
      local_158 = &PTR_s_invalid_number_of_seconds____002bb450;
      uStack_150 = (code *)0x2;
      local_138 = (undefined *)0x0;
      local_148 = &local_118;
      uStack_140 = 1;
                    /* try { // try from 001f936d to 001f93b9 has its CatchHandler @ 001f974a */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hb4ba59fb1ad49b60E(&local_90,&local_158);
      uStack_140 = CONCAT44(uStack_140._4_4_,1);
      local_158 = (undefined **)CONCAT44(uStack_8c,local_90);
      uStack_150 = (code *)CONCAT44(uStack_84,uStack_88);
      local_148 = (long **)local_80;
      uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h42dcf3336ec00766E(&local_158);
      param_1[1] = uVar11;
      param_1[2] = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h1ea5e540229014a9E_002bb550
      ;
      *param_1 = 5;
                    /* try { // try from 001f93d5 to 001f9570 has its CatchHandler @ 001f9759 */
      _ZN4core3ptr107drop_in_place_LT_core__result__Result_LT_fundu_core__time__Duration_C_fundu_core__error__ParseError_GT__GT_17h2be0415dad2f401aE
                (&local_188);
      goto LAB_001f970f;
    }
    local_98 = local_170;
    local_a8 = (undefined4)local_180;
    uStack_a4 = local_180._4_4_;
    uStack_a0 = (undefined4)uStack_178;
    uStack_9c = uStack_178._4_4_;
                    /* try { // try from 001f916c to 001f9179 has its CatchHandler @ 001f974a */
    auStack_d0 = _ZN107__LT_fundu_core__time__Duration_u20_as_u20_fundu_core__time__SaturatingInto_LT_core__time__Duration_GT__GT_15saturating_into17h30e35891ecf0eb52E
                           (&local_a8);
                    /* try { // try from 001f9189 to 001f9305 has its CatchHandler @ 001f9759 */
    _ZN4core3ptr107drop_in_place_LT_core__result__Result_LT_fundu_core__time__Duration_C_fundu_core__error__ParseError_GT__GT_17h2be0415dad2f401aE
              (&local_188);
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0a7145d185c82391E
            (&local_1d8,param_2,"max-unchanged-stats",0x13);
  lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd5b58983d4d3848bE
                    ("max-unchanged-stats",0x13,&local_1d8);
  if (lVar9 == 0) {
LAB_001f91ee:
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0a7145d185c82391E
              (&local_1d8,param_2,"pid",3);
    lVar9 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd5b58983d4d3848bE
                      ("pid",3,&local_1d8);
    if (lVar9 == 0) {
LAB_001f9252:
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hcc8251d6567d3870E
                (&local_1d8,param_2,"files",5);
      _ZN12clap_builder6parser5error12MatchesError6unwrap17h3a2fb0b054d1f196E
                (&local_158,"files",5,&local_1d8);
      if (local_158 != (undefined **)0x0) {
        uStack_1a8 = local_128;
        uStack_1a4 = uStack_124;
        local_1a0 = uStack_120;
        uStack_19c = uStack_11c;
        uStack_1b8 = local_138;
        uStack_1b0 = (undefined *)CONCAT44(uStack_12c,uStack_130);
        local_1c8 = local_148;
        uStack_1c0 = uStack_140;
        local_1d8 = local_158;
        uStack_1d0 = uStack_150;
        _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h66624b19774c7a57E
                  (&local_188,&local_1d8);
        if (local_188 != (undefined8 *)0x8000000000000000) {
          uStack_1d0 = local_180;
          local_1c8 = uStack_178;
          local_1d8 = (undefined **)local_188;
          goto LAB_001f9588;
        }
      }
      _ZN7uu_tail4args8Settings4from28__u7b__u7b_closure_u7d__u7d_17h3c638c53028a58e9E(&local_1d8);
LAB_001f9588:
                    /* try { // try from 001f9588 to 001f9597 has its CatchHandler @ 001f9733 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_uu_tail__paths__Input_GT__GT_17h2f358108f234e3daE
                (&uStack_e8);
      pplStack_d8 = local_1c8;
      uStack_e8 = (undefined4)local_1d8;
      uStack_e4 = local_1d8._4_4_;
      uStack_e0 = (undefined4)uStack_1d0;
      uStack_dc = uStack_1d0._4_4_;
      if (local_1c8 < (long **)0x2) {
        bVar8 = 0;
      }
      else {
                    /* try { // try from 001f95b5 to 001f96f3 has its CatchHandler @ 001f9759 */
        bVar8 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (param_2,"quiet: warning: ",5);
        bVar8 = bVar8 ^ 1;
      }
      param_1[6] = auStack_d0._0_8_;
      param_1[7] = CONCAT44(uStack_c4,auStack_d0._8_4_);
      param_1[4] = CONCAT44(uStack_dc,uStack_e0);
      param_1[5] = pplStack_d8;
      param_1[2] = local_f0;
      param_1[3] = CONCAT44(uStack_e4,uStack_e8);
      *param_1 = local_100;
      param_1[1] = pcStack_f8;
      param_1[8] = local_c0;
      *(undefined2 *)(param_1 + 9) = local_b8;
      *(byte *)((long)param_1 + 0x4a) = bVar8;
      *(undefined4 *)((long)param_1 + 0x4b) = local_b5;
      *(undefined *)((long)param_1 + 0x4f) = local_b1;
      return param_1;
    }
    uVar11 = *(undefined8 *)(lVar9 + 8);
    uVar1 = *(undefined8 *)(lVar9 + 0x10);
    uVar10 = _ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_i32_GT_8from_str17h5b8351ce1d7a5cacE
                       (uVar11,uVar1);
    if ((uVar10 & 1) == 0) {
      if (-1 < (long)uVar10) {
        local_c0 = CONCAT44((int)(uVar10 >> 0x20),(undefined4)local_c0);
        goto LAB_001f9252;
      }
      local_158 = (undefined **)0x0;
      uStack_140 = CONCAT71(uStack_140._1_7_,1);
      local_188 = &local_158;
      local_180 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_1d8 = &PTR_s_invalid_PID____002bb480;
      uStack_1d0 = (code *)0x1;
      uStack_1b8 = (undefined *)0x0;
      local_1c8 = &local_188;
      uStack_1c0 = 1;
      uStack_150 = (code *)uVar11;
      local_148 = (long **)uVar1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hb4ba59fb1ad49b60E(&local_60,&local_1d8);
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,1);
      local_1d8 = (undefined **)CONCAT44(uStack_5c,local_60);
      uStack_1d0 = (code *)CONCAT44(uStack_54,uStack_58);
      local_1c8 = local_50;
      uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7645b42f7bfbf581E(&local_1d8);
    }
    else {
      local_118 = (long *)CONCAT71(local_118._1_7_,(char)(uVar10 >> 8));
      local_158 = (undefined **)0x0;
      uStack_140 = CONCAT71(uStack_140._1_7_,1);
      local_188 = &local_158;
      local_180 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      uStack_178 = &local_118;
      local_170 = 
      _ZN70__LT_core__num__error__ParseIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h98d79d8d19892e5aE
      ;
      local_1d8 = &PTR_s_invalid_PID____002bb490;
      uStack_1d0 = (code *)0x2;
      uStack_1b8 = (undefined *)0x0;
      local_1c8 = &local_188;
      uStack_1c0 = 2;
      uStack_150 = (code *)uVar11;
      local_148 = (long **)uVar1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hb4ba59fb1ad49b60E(&local_48,&local_1d8);
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,1);
      local_1d8 = (undefined **)CONCAT44(uStack_44,local_48);
      uStack_1d0 = (code *)CONCAT44(uStack_3c,uStack_40);
      local_1c8 = local_38;
      uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7645b42f7bfbf581E(&local_1d8);
    }
    param_1[1] = uVar11;
    ppuVar12 = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17he6319248e6802a40E_002bb3c8
    ;
  }
  else {
    uVar11 = *(undefined8 *)(lVar9 + 8);
    uVar1 = *(undefined8 *)(lVar9 + 0x10);
    uVar10 = _ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_u32_GT_8from_str17hecf13f2b24d2aba7E
                       (uVar11,uVar1);
    if ((uVar10 & 1) == 0) {
      local_c0 = CONCAT44(local_c0._4_4_,(int)(uVar10 >> 0x20));
      goto LAB_001f91ee;
    }
    local_158 = (undefined **)0x0;
    uStack_140 = CONCAT71(uStack_140._1_7_,1);
    local_188 = &local_158;
    local_180 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_1d8 = &PTR_s_invalid_maximum_number_of_unchan_002bb470;
    uStack_1d0 = (code *)0x1;
    uStack_1b8 = (undefined *)0x0;
    local_1c8 = &local_188;
    uStack_1c0 = 1;
    uStack_150 = (code *)uVar11;
    local_148 = (long **)uVar1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hb4ba59fb1ad49b60E(&local_78,&local_1d8);
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,1);
    local_1d8 = (undefined **)CONCAT44(uStack_74,local_78);
    uStack_1d0 = (code *)CONCAT44(uStack_6c,uStack_70);
    local_1c8 = local_68;
    uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h42dcf3336ec00766E(&local_1d8);
    param_1[1] = uVar11;
    ppuVar12 = &
               PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h1ea5e540229014a9E_002bb550
    ;
  }
  param_1[2] = ppuVar12;
  *param_1 = 5;
LAB_001f970f:
  _ZN4core3ptr44drop_in_place_LT_uu_tail__args__Settings_GT_17h37c5ae6af18c4c5aE(&local_100);
  return param_1;
}