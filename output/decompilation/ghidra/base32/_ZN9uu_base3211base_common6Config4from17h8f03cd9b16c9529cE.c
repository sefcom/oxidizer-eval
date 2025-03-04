undefined8 *
_ZN9uu_base3211base_common6Config4from17h8f03cd9b16c9529cE(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  undefined8 *local_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 *puStack_188;
  undefined local_180;
  undefined local_178 [24];
  undefined4 local_160;
  undefined **local_158;
  undefined4 *local_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined8 local_138;
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
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar9 = &anon_c1c055de090567b5a95d92af4d90b7c9_26_llvm_10347091732497712345;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h5f358a8c68c9a234E
            (&local_158,param_2,&anon_c1c055de090567b5a95d92af4d90b7c9_26_llvm_10347091732497712345,
             4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h49b6dd2a71fba2f5E
            (&local_68,&anon_c1c055de090567b5a95d92af4d90b7c9_26_llvm_10347091732497712345,4,
             &local_158);
  if (CONCAT44(uStack_64,local_68) != 0) {
    local_78 = local_38;
    uStack_74 = uStack_34;
    uStack_70 = uStack_30;
    uStack_6c = uStack_2c;
    local_88 = local_48;
    uStack_84 = uStack_44;
    uStack_80 = uStack_40;
    uStack_7c = uStack_3c;
    local_98 = local_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    local_a8 = local_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    lVar4 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h87b3baa98003a4ffE
                      (&local_a8);
    if (lVar4 == 0) {
      uVar6 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                        (&PTR_s_src_uu_base32_src_base_common_rs_002495a0);
                    /* catch() { ... } // from try @ 001c1111 with catch @ 001c12d7
                       catch() { ... } // from try @ 001c118c with catch @ 001c12d7 */
                    /* try { // try from 001c12da to 001c12e3 has its CatchHandler @ 001c12ec */
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hde4c27a62c966e98E
                (&local_1b0);
      puVar7 = (undefined8 *)_Unwind_Resume(uVar6);
      return puVar7;
    }
    lVar5 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h87b3baa98003a4ffE
                      (&local_a8);
    if (lVar5 != 0) {
      local_190 = *(undefined8 *)(lVar5 + 8);
      puStack_188 = *(undefined4 **)(lVar5 + 0x10);
      local_198 = 0;
      local_180 = 1;
      local_1c0 = &local_198;
      local_1b8 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_158 = &PTR_DAT_00249570;
      local_150 = (undefined4 *)0x1;
      local_138 = 0;
      local_148 = &local_1c0;
      local_140 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hb37e8cc30801e00bE(local_178,&local_158);
      local_160 = 1;
      uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha198aac8b81d8d24E(local_178);
      ppuVar8 = &
                PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hcc0ebb5b383acb93E_002495f0
      ;
LAB_001c10c7:
      param_1[1] = uVar6;
      param_1[2] = ppuVar8;
      *param_1 = 2;
      return param_1;
    }
    uVar6 = *(undefined8 *)(lVar4 + 8);
    puVar9 = *(undefined4 **)(lVar4 + 0x10);
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a5391263b8fe46eE
                      (uVar6,puVar9,&DAT_00118b77,1);
    if (cVar1 == '\0') {
      _ZN3std2fs8metadata17h44d4a21c29bf25daE(&local_158,uVar6,puVar9);
      if (local_158 == (undefined **)0x2) {
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hbca8dbb0b453c058E
                  (2,local_150);
        local_198 = 1;
        local_180 = 0;
        local_1c0 = &local_198;
        local_1b8 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_158 = (undefined **)&DAT_00249580;
        local_150 = (undefined4 *)0x2;
        local_138 = 0;
        local_148 = &local_1c0;
        local_140 = 1;
        local_190 = uVar6;
        puStack_188 = puVar9;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hb37e8cc30801e00bE(local_178,&local_158);
        local_160 = 1;
        uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h89f85ffc87d48af0E(local_178);
        ppuVar8 = &
                  PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h48d19f049bfa81faE_00249698
        ;
        goto LAB_001c10c7;
      }
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hbca8dbb0b453c058E
                (local_158,local_150);
      _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
                (&local_1b0,uVar6,puVar9);
      goto LAB_001c1111;
    }
  }
  local_1b0 = 0x8000000000000000;
LAB_001c1111:
                    /* try { // try from 001c1111 to 001c1156 has its CatchHandler @ 001c12d7 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h61f91ed1ea627239E
            (&local_158,param_2,&anon_c1c055de090567b5a95d92af4d90b7c9_24_llvm_10347091732497712345,
             4);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h0cc7fcf21fadb1edE
                    (&anon_c1c055de090567b5a95d92af4d90b7c9_24_llvm_10347091732497712345,4,
                     &local_158);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    _ZN9uu_base3211base_common6Config4from28__u7b__u7b_closure_u7d__u7d_17ha2ccd14d5f7590b0E
              (&local_158,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    if (local_158 != (undefined **)0x0) {
      param_1[1] = local_158;
      param_1[2] = local_150;
      *param_1 = 2;
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hde4c27a62c966e98E
                (&local_1b0);
      return param_1;
    }
    uVar6 = 1;
    puVar9 = local_150;
  }
                    /* try { // try from 001c118c to 001c11b7 has its CatchHandler @ 001c12d7 */
  uVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&anon_c1c055de090567b5a95d92af4d90b7c9_23_llvm_10347091732497712345,6);
  uVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,anon_c1c055de090567b5a95d92af4d90b7c9_25_llvm_10347091732497712345,0xe)
  ;
  param_1[4] = local_1a0;
  param_1[2] = local_1b0;
  param_1[3] = uStack_1a8;
  *param_1 = uVar6;
  param_1[1] = puVar9;
  *(undefined *)(param_1 + 5) = uVar2;
  *(undefined *)((long)param_1 + 0x29) = uVar3;
  return param_1;
}