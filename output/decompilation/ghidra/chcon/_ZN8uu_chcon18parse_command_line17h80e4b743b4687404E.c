void _ZN8uu_chcon18parse_command_line17h80e4b743b4687404E(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined uVar6;
  char cVar7;
  byte bVar8;
  undefined uVar9;
  long lVar10;
  undefined local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  code *local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined local_1c0 [16];
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  code *local_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long local_178;
  code *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  code *pcStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined *local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  code *local_c8;
  code *pcStack_c0;
  undefined *local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined local_78 [16];
  undefined8 local_68;
  undefined local_60 [16];
  undefined8 local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h74c3fe6b7768e9bbE(&local_238);
  local_190 = local_208;
  local_1a0 = (undefined4)local_218;
  uStack_19c = local_218._4_4_;
  uStack_198 = (undefined4)uStack_210;
  uStack_194 = uStack_210._4_4_;
  local_1b0 = (undefined4)uStack_228;
  uStack_1ac = uStack_228._4_4_;
  uStack_1a8 = uStack_220;
  uStack_1a4 = uStack_21c;
                    /* try { // try from 0015c592 to 0015ca70 has its CatchHandler @ 0015ce69 */
  uVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f6ea0
          )(local_1c0,*(undefined8 *)PTR__ZN8uu_chcon7options7VERBOSE17hdb57e67b80c894f3E_001f6e98,
            *(undefined8 *)(PTR__ZN8uu_chcon7options7VERBOSE17hdb57e67b80c894f3E_001f6e98 + 8));
  puVar3 = PTR__ZN8uu_chcon7options9RECURSIVE17h433a04139793bdf7E_001f6ea8;
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f6ea0
          )(local_1c0,*(undefined8 *)PTR__ZN8uu_chcon7options9RECURSIVE17h433a04139793bdf7E_001f6ea8
            ,*(undefined8 *)(PTR__ZN8uu_chcon7options9RECURSIVE17h433a04139793bdf7E_001f6ea8 + 8));
  if (cVar7 == '\0') {
    bVar8 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f6ea0
            )(local_1c0,
              *(undefined8 *)
               PTR__ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E_001f6eb8,
              *(undefined8 *)
               (PTR__ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E_001f6eb8 +
               8));
    bVar8 = bVar8 ^ 1;
    local_23c = 0;
  }
  else {
    cVar7 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f6ea0
            )(local_1c0,
              *(undefined8 *)
               PTR__ZN8uu_chcon7options9sym_links20FOLLOW_DIR_SYM_LINKS17h95a2c6febd631cb3E_001f6eb0
              ,*(undefined8 *)
                (
                PTR__ZN8uu_chcon7options9sym_links20FOLLOW_DIR_SYM_LINKS17h95a2c6febd631cb3E_001f6eb0
                + 8));
    puVar4 = PTR__ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E_001f6eb8;
    if (cVar7 == '\0') {
      cVar7 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f6ea0
              )(local_1c0,
                *(undefined8 *)
                 PTR__ZN8uu_chcon7options9sym_links23FOLLOW_ARG_DIR_SYM_LINK17h3f112273255ac430E_001f6f00
                ,*(undefined8 *)
                  (
                  PTR__ZN8uu_chcon7options9sym_links23FOLLOW_ARG_DIR_SYM_LINK17h3f112273255ac430E_001f6f00
                  + 8));
      puVar5 = PTR__ZN8uu_chcon7options11dereference11DEREFERENCE17h91753ff18563b15fE_001f6f08;
      puVar4 = PTR__ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E_001f6eb8;
      if (cVar7 == '\0') {
        cVar7 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f6ea0
                )(local_1c0,
                  *(undefined8 *)
                   PTR__ZN8uu_chcon7options11dereference11DEREFERENCE17h91753ff18563b15fE_001f6f08,
                  *(undefined8 *)
                   (PTR__ZN8uu_chcon7options11dereference11DEREFERENCE17h91753ff18563b15fE_001f6f08
                   + 8));
        if (cVar7 != '\0') {
          local_168 = (code *)puVar3;
          uStack_160 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd8baa6bbb24b7a31E;
          local_158 = puVar5;
          pcStack_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd8baa6bbb24b7a31E;
          local_238 = 0x1ef520;
          uStack_234 = 0;
          uStack_230 = 3;
          uStack_22c = 0;
          local_218 = (code *)0x0;
          uStack_228 = &local_168;
          uStack_220 = 2;
          uStack_21c = 0;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17hc21cbd6b2ca648caE(local_48,&local_238);
          uStack_234 = (undefined4)local_48._0_8_;
          uStack_230 = SUB84(local_48._0_8_,4);
          uStack_22c = (undefined4)local_48._8_8_;
          uStack_228._0_4_ = SUB84(local_48._8_8_,4);
          local_68 = local_38;
          goto LAB_0015ca86;
        }
        local_23c = 1;
        bVar8 = 0;
      }
      else {
        cVar7 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f6ea0
                )(local_1c0,
                  *(undefined8 *)
                   PTR__ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E_001f6eb8
                  ,*(undefined8 *)
                    (
                    PTR__ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E_001f6eb8
                    + 8));
        if (cVar7 != '\0') {
          local_168 = (code *)puVar3;
          uStack_160 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd8baa6bbb24b7a31E;
          local_158 = puVar4;
          pcStack_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd8baa6bbb24b7a31E;
          local_238 = 0x1ef4f0;
          uStack_234 = 0;
          uStack_230 = 3;
          uStack_22c = 0;
          local_218 = (code *)0x0;
          uStack_228 = &local_168;
          uStack_220 = 2;
          uStack_21c = 0;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17hc21cbd6b2ca648caE(local_60,&local_238);
          uStack_234 = (undefined4)local_60._0_8_;
          uStack_230 = SUB84(local_60._0_8_,4);
          uStack_22c = (undefined4)local_60._8_8_;
          uStack_228._0_4_ = SUB84(local_60._8_8_,4);
          local_68 = local_50;
LAB_0015ca86:
          uStack_228._4_4_ = (undefined4)local_68;
          uStack_220 = (undefined4)((ulong)local_68 >> 0x20);
          *(undefined4 *)(param_1 + 1) = 0xd;
          *(undefined4 *)((long)param_1 + 0xc) = local_238;
          *(undefined4 *)(param_1 + 2) = uStack_234;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_230;
          *(undefined4 *)(param_1 + 3) = uStack_22c;
          param_1[3] = CONCAT44((undefined4)uStack_228,uStack_22c);
          param_1[4] = local_68;
          *param_1 = 0x8000000000000000;
          goto LAB_0015cd90;
        }
        bVar8 = 1;
        local_23c = 3;
      }
    }
    else {
      cVar7 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f6ea0
              )(local_1c0,
                *(undefined8 *)
                 PTR__ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E_001f6eb8,
                *(undefined8 *)
                 (PTR__ZN8uu_chcon7options11dereference14NO_DEREFERENCE17hc7d4d7bee8a13a98E_001f6eb8
                 + 8));
      if (cVar7 != '\0') {
        local_168 = (code *)puVar3;
        uStack_160 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd8baa6bbb24b7a31E;
        local_158 = puVar4;
        pcStack_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd8baa6bbb24b7a31E;
        local_238 = 0x1ef4f0;
        uStack_234 = 0;
        uStack_230 = 3;
        uStack_22c = 0;
        local_218 = (code *)0x0;
        uStack_228 = &local_168;
        uStack_220 = 2;
        uStack_21c = 0;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hc21cbd6b2ca648caE(local_78,&local_238);
        uStack_234 = (undefined4)local_78._0_8_;
        uStack_230 = SUB84(local_78._0_8_,4);
        uStack_22c = (undefined4)local_78._8_8_;
        uStack_228._0_4_ = SUB84(local_78._8_8_,4);
        goto LAB_0015ca86;
      }
      bVar8 = 1;
      local_23c = 2;
    }
  }
  uVar9 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f6ea0
          )(local_1c0,
            *(undefined8 *)
             PTR__ZN8uu_chcon7options13preserve_root13PRESERVE_ROOT17hed149f8ad63239c9E_001f6ec0,
            *(undefined8 *)
             (PTR__ZN8uu_chcon7options13preserve_root13PRESERVE_ROOT17hed149f8ad63239c9E_001f6ec0 +
             8));
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hc5f2a3eca716ea62E
            (&local_238,local_1c0);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hec60d137fbc4d6efE(&local_168,&local_238);
  if (local_168 == (code *)0x0) {
    local_c8 = _ZN4core3ops8function6FnOnce9call_once17he5068d866819ed9aE;
    pcStack_c0 = (code *)
                 PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001f6ec8
    ;
    local_b8 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001f6ec8
    ;
    pcStack_b0 = (code *)0x0;
    uStack_a0 = 0;
    uStack_90 = 0;
  }
  else {
    local_98 = local_138;
    uStack_90 = uStack_130;
    local_a8 = local_148;
    uStack_a0 = uStack_140;
    local_b8 = local_158;
    pcStack_b0 = pcStack_150;
    local_c8 = local_168;
    pcStack_c0 = uStack_160;
  }
  uVar1 = *(undefined8 *)PTR__ZN8uu_chcon7options9REFERENCE17h0672fdda11d64845E_001f6ed0;
  uVar2 = *(undefined8 *)(PTR__ZN8uu_chcon7options9REFERENCE17h0672fdda11d64845E_001f6ed0 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0477ef604a8ad906E
            (&local_238,local_1c0,uVar1,uVar2);
  lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h73d1c29dbb6365b1E
                     (uVar1,uVar2,&local_238);
  puVar3 = PTR__ZN8uu_chcon7options4USER17h4d0d2bc056c6cdccE_001f6ed8;
  if (lVar10 == 0) {
    cVar7 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f6ee0
            )(local_1c0,*(undefined8 *)PTR__ZN8uu_chcon7options4USER17h4d0d2bc056c6cdccE_001f6ed8,
              *(undefined8 *)(PTR__ZN8uu_chcon7options4USER17h4d0d2bc056c6cdccE_001f6ed8 + 8));
    if ((((cVar7 == '\0') &&
         (cVar7 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f6ee0
                  )(local_1c0,
                    *(undefined8 *)PTR__ZN8uu_chcon7options4ROLE17h7d7e94c698023b65E_001f6ee8,
                    *(undefined8 *)(PTR__ZN8uu_chcon7options4ROLE17h7d7e94c698023b65E_001f6ee8 + 8))
         , cVar7 == '\0')) &&
        (cVar7 = (*(code *)
                   PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f6ee0
                 )(local_1c0,
                   *(undefined8 *)PTR__ZN8uu_chcon7options4TYPE17hfd1961fc61e3d8d1E_001f6ef0,
                   *(undefined8 *)(PTR__ZN8uu_chcon7options4TYPE17hfd1961fc61e3d8d1E_001f6ef0 + 8)),
        cVar7 == '\0')) &&
       (cVar7 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001f6ee0
                )(local_1c0,
                  *(undefined8 *)PTR__ZN8uu_chcon7options5RANGE17hcdb017c1bd75f344E_001f6ef8,
                  *(undefined8 *)(PTR__ZN8uu_chcon7options5RANGE17hcdb017c1bd75f344E_001f6ef8 + 8)),
       cVar7 == '\0')) {
                    /* try { // try from 0015cdcb to 0015cdee has its CatchHandler @ 0015ce69 */
      lVar10 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha7a165e3d750885eE
                         (&local_c8);
      if (lVar10 == 0) {
        *(undefined4 *)(param_1 + 1) = 10;
        *param_1 = 0x8000000000000000;
        goto LAB_0015cd90;
      }
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd084c32dadc89fd4E
                (&local_238,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
      pcStack_150 = (code *)CONCAT44(uStack_228._4_4_,(undefined4)uStack_228);
      uStack_160 = (code *)CONCAT44(uStack_234,local_238);
      local_158 = (undefined *)CONCAT44(uStack_22c,uStack_230);
      local_168 = (code *)0x8000000000000002;
    }
    else {
      uVar1 = *(undefined8 *)puVar3;
      uVar2 = *(undefined8 *)(puVar3 + 8);
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0477ef604a8ad906E
                (&local_238,local_1c0,uVar1,uVar2);
      lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h73d1c29dbb6365b1E
                         (uVar1,uVar2,&local_238);
      if (lVar10 == 0) {
        local_108 = (code *)&DAT_8000000000000000;
      }
      else {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd084c32dadc89fd4E
                  (&local_238,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
        local_f8 = (undefined *)CONCAT44(uStack_228._4_4_,(undefined4)uStack_228);
        local_108 = (code *)CONCAT44(uStack_234,local_238);
        uStack_100 = uStack_230;
        uStack_fc = uStack_22c;
      }
      uVar1 = *(undefined8 *)PTR__ZN8uu_chcon7options4ROLE17h7d7e94c698023b65E_001f6ee8;
      uVar2 = *(undefined8 *)(PTR__ZN8uu_chcon7options4ROLE17h7d7e94c698023b65E_001f6ee8 + 8);
                    /* try { // try from 0015cacb to 0015cb09 has its CatchHandler @ 0015ce45 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0477ef604a8ad906E
                (&local_238,local_1c0,uVar1,uVar2);
      lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h73d1c29dbb6365b1E
                         (uVar1,uVar2,&local_238);
      if (lVar10 == 0) {
        local_e8 = (code *)0x8000000000000000;
      }
      else {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd084c32dadc89fd4E
                  (&local_238,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
        local_d8 = CONCAT44(uStack_228._4_4_,(undefined4)uStack_228);
        local_e8 = (code *)CONCAT44(uStack_234,local_238);
        uStack_e0 = uStack_230;
        uStack_dc = uStack_22c;
      }
      uVar1 = *(undefined8 *)PTR__ZN8uu_chcon7options4TYPE17hfd1961fc61e3d8d1E_001f6ef0;
      uVar2 = *(undefined8 *)(PTR__ZN8uu_chcon7options4TYPE17hfd1961fc61e3d8d1E_001f6ef0 + 8);
                    /* try { // try from 0015cb3c to 0015cb7a has its CatchHandler @ 0015ce33 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0477ef604a8ad906E
                (&local_238,local_1c0,uVar1,uVar2);
      lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h73d1c29dbb6365b1E
                         (uVar1,uVar2,&local_238);
      if (lVar10 == 0) {
        local_188 = 0x8000000000000000;
      }
      else {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd084c32dadc89fd4E
                  (&local_238,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
        local_178 = CONCAT44(uStack_228._4_4_,(undefined4)uStack_228);
        local_188 = CONCAT44(uStack_234,local_238);
        uStack_180 = uStack_230;
        uStack_17c = uStack_22c;
      }
      uVar1 = *(undefined8 *)PTR__ZN8uu_chcon7options5RANGE17hcdb017c1bd75f344E_001f6ef8;
      uVar2 = *(undefined8 *)(PTR__ZN8uu_chcon7options5RANGE17hcdb017c1bd75f344E_001f6ef8 + 8);
                    /* try { // try from 0015cbad to 0015cbee has its CatchHandler @ 0015ce21 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0477ef604a8ad906E
                (&local_238,local_1c0,uVar1,uVar2);
      lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h73d1c29dbb6365b1E
                         (uVar1,uVar2,&local_238);
      uStack_120 = 0x8000000000000000;
      if (lVar10 != 0) {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd084c32dadc89fd4E
                  (&local_238,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
        uStack_120 = CONCAT44(uStack_234,local_238);
        local_88 = CONCAT44(uStack_22c,uStack_230);
        uStack_80 = CONCAT44(uStack_228._4_4_,(undefined4)uStack_228);
      }
      local_158 = local_f8;
      uStack_160 = (code *)CONCAT44(uStack_fc,uStack_100);
      local_168 = local_108;
      local_148 = CONCAT44(uStack_dc,uStack_e0);
      pcStack_150 = local_e8;
      uStack_140 = local_d8;
      uStack_130 = CONCAT44(uStack_17c,uStack_180);
      local_138 = local_188;
      local_128 = local_178;
      local_118 = (undefined4)local_88;
      uStack_114 = local_88._4_4_;
      uStack_110 = (undefined4)uStack_80;
      uStack_10c = uStack_80._4_4_;
    }
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd084c32dadc89fd4E
              (&local_238,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
    pcStack_150 = (code *)CONCAT44(uStack_228._4_4_,(undefined4)uStack_228);
    uStack_160 = (code *)CONCAT44(uStack_234,local_238);
    local_158 = (undefined *)CONCAT44(uStack_22c,uStack_230);
    local_168 = (code *)0x8000000000000001;
  }
                    /* try { // try from 0015cc79 to 0015cc8d has its CatchHandler @ 0015ce57 */
  _ZN4core4iter6traits8iterator8Iterator7collect17hc92e52921e991262E(&local_188,&local_c8);
  if (local_178 == 0) {
    *(undefined4 *)(param_1 + 1) = 0xb;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17hfed6b9b34b8c787eE
              (&local_188);
    _ZN4core3ptr46drop_in_place_LT_uu_chcon__CommandLineMode_GT_17hb5c779bffb711795E(&local_168);
  }
  else {
    local_1d0 = CONCAT44(uStack_114,local_118);
    uStack_1c8 = CONCAT44(uStack_10c,uStack_110);
    local_1e0 = local_128;
    uStack_1d8 = uStack_120;
    uVar1 = uStack_1d8;
    uStack_1f0 = local_138;
    uStack_1e8 = uStack_130;
    uStack_200 = local_148;
    uStack_1f8 = uStack_140;
    uStack_210 = local_158;
    local_208 = pcStack_150;
    uStack_220 = SUB84(local_168,0);
    uStack_21c = (undefined4)((ulong)local_168 >> 0x20);
    local_218 = uStack_160;
    uStack_228._0_4_ = (undefined4)local_178;
    uStack_228._4_4_ = (undefined4)((ulong)local_178 >> 0x20);
    local_238 = (undefined4)local_188;
    uStack_234 = (undefined4)((ulong)local_188 >> 0x20);
    uStack_230 = uStack_180;
    uStack_22c = uStack_17c;
    *param_1 = local_188;
    param_1[1] = CONCAT44(uStack_17c,uStack_180);
    param_1[4] = uStack_160;
    param_1[5] = local_158;
    param_1[6] = pcStack_150;
    param_1[7] = local_148;
    param_1[8] = uStack_140;
    param_1[9] = local_138;
    param_1[10] = uStack_130;
    param_1[0xb] = local_128;
    uStack_1d8._0_4_ = (undefined4)uStack_120;
    uStack_1d8._4_4_ = (undefined4)((ulong)uStack_120 >> 0x20);
    *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_1d8;
    *(undefined4 *)((long)param_1 + 100) = uStack_1d8._4_4_;
    *(undefined4 *)(param_1 + 0xd) = local_118;
    *(undefined4 *)((long)param_1 + 0x6c) = uStack_114;
    param_1[2] = local_178;
    param_1[3] = local_168;
    param_1[0xe] = uStack_1c8;
    *(undefined *)(param_1 + 0xf) = uVar6;
    *(undefined *)((long)param_1 + 0x79) = uVar9;
    *(byte *)((long)param_1 + 0x7a) = bVar8;
    *(undefined *)((long)param_1 + 0x7b) = local_23c;
    uStack_1d8 = uVar1;
  }
LAB_0015cd90:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h64662adfe54568ceE
            (local_1c0);
  return;
}