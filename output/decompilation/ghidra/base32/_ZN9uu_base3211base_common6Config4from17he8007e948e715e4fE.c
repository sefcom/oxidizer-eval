undefined8 *
_ZN9uu_base3211base_common6Config4from17he8007e948e715e4fE(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined8 unaff_R13;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined local_198;
  undefined8 local_190;
  undefined **local_188;
  undefined8 local_180;
  undefined8 **local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined local_d8 [24];
  undefined4 local_c0;
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
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h4d3b70c651aa8c6aE
            (&local_188);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hac17f97783eea1ceE(&local_70,&local_188);
  ppuVar8 = (undefined **)0x8000000000000000;
  if (CONCAT44(uStack_6c,local_70) != 0) {
    local_88 = local_40;
    uStack_84 = uStack_3c;
    uStack_80 = uStack_38;
    uStack_7c = uStack_34;
    local_98 = local_50;
    uStack_94 = uStack_4c;
    uStack_90 = uStack_48;
    uStack_8c = uStack_44;
    local_a8 = local_60;
    uStack_a4 = uStack_5c;
    uStack_a0 = uStack_58;
    uStack_9c = uStack_54;
    local_b8 = local_70;
    uStack_b4 = uStack_6c;
    uStack_b0 = uStack_68;
    uStack_ac = uStack_64;
    lVar4 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h82324a6f9092af02E
                      (&local_b8);
    if (lVar4 == 0) {
      uVar6 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_002153f8)
                        (&PTR_s_src_uu_base32_src_base_common_rs_0020dd48);
                    /* catch() { ... } // from try @ 0016934f with catch @ 00169512 */
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h0062591d8d9fcd54E
                (0x8000000000000000,local_1c8);
      puVar7 = (undefined8 *)_Unwind_Resume(uVar6);
      return puVar7;
    }
    lVar5 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h82324a6f9092af02E
                      (&local_b8);
    if (lVar5 != 0) {
      local_1a8 = *(undefined8 *)(lVar5 + 8);
      local_1a0 = *(undefined8 *)(lVar5 + 0x10);
      local_1b0 = 0;
      local_198 = 1;
      local_1c0 = &local_1b0;
      local_1b8 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00215380
      ;
      local_188 = &PTR_s_extra_operand___No_such_file_or_d_0020dd18;
      local_180 = 1;
      local_168 = 0;
      local_178 = &local_1c0;
      local_170 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hff3b22300eec286cE(local_d8,&local_188);
      local_c0 = 1;
      uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h338aae5a226963c6E(local_d8);
      ppuVar8 = &
                PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h080af14acde6290bE_0020dd80
      ;
LAB_00169312:
      param_1[1] = uVar6;
      param_1[2] = ppuVar8;
      *param_1 = 2;
      return param_1;
    }
    unaff_R13 = *(undefined8 *)(lVar4 + 8);
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h52d9b32bcebef6ceE
                      (unaff_R13,uVar6,&DAT_0011b2e0,1);
    if (cVar1 == '\0') {
      _ZN3std2fs8metadata17heefbd7b898f0dc89E(&local_188,unaff_R13,uVar6);
      ppuVar8 = local_188;
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hb5229bc0585f68fbE
                (local_188,local_180);
      if (ppuVar8 == (undefined **)0x2) {
        local_1b0 = 1;
        local_198 = 0;
        local_1c0 = &local_1b0;
        local_1b8 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00215380
        ;
        local_188 = (undefined **)&DAT_0020dd28;
        local_180 = 2;
        local_168 = 0;
        local_178 = &local_1c0;
        local_170 = 1;
        local_1a8 = unaff_R13;
        local_1a0 = uVar6;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hff3b22300eec286cE(local_d8,&local_188);
        local_c0 = 1;
        uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h338aae5a226963c6E(local_d8);
        ppuVar8 = &
                  PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h080af14acde6290bE_0020de08
        ;
        goto LAB_00169312;
      }
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_002153f0
      )(&local_188,unaff_R13,uVar6);
      local_1c8 = local_180;
      local_190 = local_178;
      ppuVar8 = local_188;
    }
  }
                    /* try { // try from 0016934f to 001693df has its CatchHandler @ 00169512 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb2a3bc7313f94180E
            (&local_188,param_2);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h24f08cad05a4d07cE(&local_188);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    _ZN9uu_base3211base_common6Config4from28__u7b__u7b_closure_u7d__u7d_17haa7277871ad8176dE
              (&local_188,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    if (local_188 != (undefined **)0x0) {
      param_1[1] = local_188;
      param_1[2] = local_180;
      *param_1 = 2;
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h0062591d8d9fcd54E
                (ppuVar8,local_1c8);
      return param_1;
    }
    uVar6 = 1;
    unaff_R13 = local_180;
  }
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_002153e8
          )(param_2,"decode",6);
  uVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_002153e8
          )(param_2,"ignore-garbage",0xe);
  *param_1 = uVar6;
  param_1[1] = unaff_R13;
  param_1[2] = ppuVar8;
  param_1[3] = local_1c8;
  param_1[4] = local_190;
  *(undefined *)(param_1 + 5) = uVar2;
  *(undefined *)((long)param_1 + 0x29) = uVar3;
  return param_1;
}