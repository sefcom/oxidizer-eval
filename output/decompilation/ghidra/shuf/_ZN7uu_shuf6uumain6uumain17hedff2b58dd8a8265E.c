undefined  [16] _ZN7uu_shuf6uumain6uumain17hedff2b58dd8a8265E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  int iVar6;
  char cVar7;
  byte bVar8;
  undefined uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong extraout_RDX;
  undefined **ppuVar13;
  code *pcVar14;
  ulong uVar15;
  undefined *unaff_R13;
  code *pcVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined auVar26 [16];
  code *local_438;
  undefined *puStack_430;
  undefined8 local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  ulong local_408;
  undefined8 uStack_400;
  undefined8 local_3f0;
  code *local_3e8;
  undefined *puStack_3e0;
  undefined8 local_3d8;
  long local_3d0;
  code *local_3c8;
  undefined *puStack_3c0;
  undefined *local_3b8;
  code *pcStack_3b0;
  undefined *local_3a8;
  undefined *puStack_3a0;
  ulong local_398;
  undefined8 uStack_390;
  undefined4 local_380;
  undefined4 local_37c;
  undefined8 local_378;
  undefined *local_370;
  undefined *local_368;
  undefined *local_360;
  undefined *local_358;
  code *local_350;
  undefined *local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  ulong local_320;
  undefined *local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ulong local_2c8;
  undefined8 local_2c0;
  
  (*(code *)PTR__ZN7uu_shuf6uu_app17h51a53df890e82932E_00200a90)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h1b56f836ecd248acE
            (&local_438,&local_2f8,param_1,param_2);
  local_320 = local_408;
  local_330 = local_418;
  uStack_32c = uStack_414;
  uStack_328 = uStack_410;
  uStack_324 = uStack_40c;
  local_340 = (undefined4)local_428;
  uStack_33c = local_428._4_4_;
  uStack_338 = uStack_420;
  uStack_334 = uStack_41c;
  local_350 = local_438;
  local_348 = puStack_430;
                    /* try { // try from 0015ee40 to 0015f0d9 has its CatchHandler @ 0015f9f3 */
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200aa8
          )(&local_350,*(undefined8 *)PTR__ZN7uu_shuf7options4ECHO17h84a9804fc6ebf4b3E_00200aa0,
            *(undefined8 *)(PTR__ZN7uu_shuf7options4ECHO17h84a9804fc6ebf4b3E_00200aa0 + 8));
  if (cVar7 == '\0') {
    uVar12 = *(undefined8 *)PTR__ZN7uu_shuf7options11INPUT_RANGE17hc5e4b6a6169a5654E_00200ab8;
    uVar1 = *(undefined8 *)(PTR__ZN7uu_shuf7options11INPUT_RANGE17hc5e4b6a6169a5654E_00200ab8 + 8);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h933ae22ec05feddeE
              (&local_2f8,&local_350,uVar12,uVar1);
    lVar11 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5b4fae1e20bf99e6E
                       (uVar12,uVar1,&local_2f8);
    if (lVar11 != 0) {
      _ZN82__LT_core__ops__range__RangeInclusive_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17he208c34151454f8fE
                (&local_2f8,lVar11);
      local_438 = (code *)local_2f8;
      puStack_430 = uStack_2f0;
      iVar6 = local_2e8._1_4_;
      local_3c8._0_7_ = (undefined7)((ulong)local_2e8 >> 8);
      if ((char)local_2e8 != '\x02') {
        local_3e8 = (code *)local_2f8;
        puStack_3e0 = uStack_2f0;
        local_3d8 = (undefined *)CONCAT44(local_2e8._4_4_,iVar6 << 8);
        local_3d8 = (undefined *)CONCAT71(local_3d8._1_7_,(char)local_2e8);
        local_3f0 = 2;
        local_3d0 = 2;
        goto LAB_0015f25e;
      }
    }
    puVar17 = *(undefined **)PTR__ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E_00200ab0;
    uVar12 = *(undefined8 *)(PTR__ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E_00200ab0 + 8)
    ;
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h59f6811787992051E
              (&local_2f8,&local_350,puVar17,uVar12);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h3b06173179f33a28E
              (&local_438,puVar17,uVar12,&local_2f8);
    if (local_438 == (code *)0x0) {
      local_3c8 = _ZN4core3ops8function6FnOnce9call_once17hcf99c56a241a2abcE;
      puStack_3c0 = 
      PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_00200ac0
      ;
      local_3b8 = 
      PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_00200ac0
      ;
      pcStack_3b0 = (code *)0x0;
      puStack_3a0 = (undefined *)0x0;
      uStack_390 = 0;
    }
    else {
      pcStack_3b0 = (code *)CONCAT44(uStack_41c,uStack_420);
      local_3a8 = (undefined *)CONCAT44(uStack_414,local_418);
      puStack_3a0 = (undefined *)CONCAT44(uStack_40c,uStack_410);
      local_398 = local_408;
      uStack_390 = uStack_400;
      local_3b8 = local_428;
      local_3c8 = local_438;
      puStack_3c0 = puStack_430;
    }
    lVar11 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h69219f20d5bc9bd7E
                       (&local_3c8);
    if (lVar11 == 0) {
      pcVar14 = (code *)0x8000000000000000;
    }
    else {
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h10351ebe9e4824c9E
                (&local_2f8,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
      pcVar14 = (code *)local_2f8;
      unaff_R13 = uStack_2f0;
      puVar17 = (undefined *)local_2e8;
    }
                    /* try { // try from 0015f0fe to 0015f116 has its CatchHandler @ 0015f946 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h07c2de588eccaa05E
              (&local_2f8,&DAT_00119b45,1);
    pcVar16 = (code *)local_2f8;
    puVar18 = (undefined *)local_2e8;
    puVar19 = uStack_2f0;
    if (pcVar14 != (code *)0x8000000000000000) {
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hda7a5348c59c9f41E
                (local_2f8,uStack_2f0);
      pcVar16 = pcVar14;
      puVar18 = puVar17;
      puVar19 = unaff_R13;
    }
                    /* try { // try from 0015f151 to 0015f229 has its CatchHandler @ 0015f96b */
    lVar11 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h69219f20d5bc9bd7E
                       (&local_3c8);
    if (lVar11 != 0) {
      puStack_430 = *(undefined **)(lVar11 + 8);
      local_428 = *(undefined **)(lVar11 + 0x10);
      local_438 = (code *)0x1;
      uStack_420 = CONCAT31(uStack_420._1_3_,1);
      local_368 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00200ac8
      ;
      local_2f8 = &PTR_DAT_001f8fa0;
      uStack_2f0 = (undefined *)0x2;
      local_2d8 = 0;
      local_2e8 = &local_370;
      uStack_2e0 = 1;
      local_370 = (undefined *)&local_438;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h0b421a2599015f91E(&local_310,&local_2f8);
      uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
      local_2f8 = (undefined **)CONCAT44(uStack_30c,local_310);
      uStack_2f0 = (undefined *)CONCAT44(uStack_304,uStack_308);
      local_2e8 = (undefined **)local_300;
      uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h27ff8fca799d73ddE(&local_2f8);
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hda7a5348c59c9f41E
                (pcVar16,puVar19);
      auVar26._8_8_ =
           &
           PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h7343b8328bf87696E_001f8fe0
      ;
      auVar26._0_8_ = uVar12;
      goto LAB_0015f822;
    }
    local_3f0 = 0;
    local_3d0 = 0;
    local_3e8 = pcVar16;
    puStack_3e0 = puVar19;
    local_3d8 = puVar18;
  }
  else {
    uVar15 = *(ulong *)PTR__ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E_00200ab0;
    uVar12 = *(undefined8 *)(PTR__ZN7uu_shuf7options12FILE_OR_ARGS17hd97ce0f10cd28ca3E_00200ab0 + 8)
    ;
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h59f6811787992051E
              (&local_2f8,&local_350,uVar15,uVar12);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h3b06173179f33a28E
              (&local_438,uVar15,uVar12,&local_2f8);
    if (local_438 == (code *)0x0) {
      uVar20 = 0;
      uVar21 = 0;
      uStack_2d0 = 0;
      uStack_2cc = 0;
      uVar22 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_00200ac0
                     ,0);
      uVar23 = (undefined4)
               ((ulong)
                PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_00200ac0
               >> 0x20);
      uVar24 = 0;
      uVar25 = 0;
      pcVar14 = _ZN4core3ops8function6FnOnce9call_once17hcf99c56a241a2abcE;
      local_2c0 = 0;
      uStack_2f0 = 
      PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_00200ac0
      ;
    }
    else {
      pcVar14 = local_438;
      uStack_2f0 = puStack_430;
      local_2c0 = uStack_400;
      uVar15 = local_408;
      uVar20 = local_418;
      uVar21 = uStack_414;
      uStack_2d0 = uStack_410;
      uStack_2cc = uStack_40c;
      uVar22 = (undefined4)local_428;
      uVar23 = local_428._4_4_;
      uVar24 = uStack_420;
      uVar25 = uStack_41c;
    }
    local_2e8 = (undefined **)CONCAT44(uVar23,uVar22);
    uStack_2e0 = CONCAT44(uVar25,uVar24);
    local_2d8 = CONCAT44(uVar21,uVar20);
    local_2f8 = (undefined **)pcVar14;
    local_2c8 = uVar15;
    _ZN4core4iter6traits8iterator8Iterator7collect17h386b4ae5f25d38a7E(&local_438,&local_2f8);
    local_3d8 = local_428;
    local_3f0 = 1;
    local_3d0 = 1;
    local_3e8 = local_438;
    puStack_3e0 = puStack_430;
  }
LAB_0015f25e:
  uVar15 = *(ulong *)PTR__ZN7uu_shuf7options10HEAD_COUNT17hc89376d679544dccE_00200ad0;
  uVar12 = *(undefined8 *)(PTR__ZN7uu_shuf7options10HEAD_COUNT17hc89376d679544dccE_00200ad0 + 8);
                    /* try { // try from 0015f271 to 0015f380 has its CatchHandler @ 0015f9b4 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h107b91d7d21a3329E
            (&local_2f8,&local_350,uVar15,uVar12);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h3b06173179f33a28E
            (&local_438,uVar15,uVar12,&local_2f8);
  if (local_438 == (code *)0x0) {
    local_418 = 0;
    uStack_414 = 0;
    uStack_410 = 0;
    uStack_40c = 0;
    uVar20 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_00200ac0
                   ,0);
    uVar21 = (undefined4)
             ((ulong)
              PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_00200ac0
             >> 0x20);
    uVar22 = 0;
    uStack_41c = 0;
    pcVar14 = _ZN4core3ops8function6FnOnce9call_once17hbfdf60db88ee0badE;
    uStack_400 = 0;
    uStack_2f0 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_00200ac0
    ;
  }
  else {
    pcVar14 = local_438;
    uStack_2f0 = puStack_430;
    uVar15 = local_408;
    uVar20 = (undefined4)local_428;
    uVar21 = local_428._4_4_;
    uVar22 = uStack_420;
  }
  local_2e8 = (undefined **)CONCAT44(uVar21,uVar20);
  uStack_2e0 = CONCAT44(uStack_41c,uVar22);
  local_2d8 = CONCAT44(uStack_414,local_418);
  local_2f8 = (undefined **)pcVar14;
  uStack_2d0 = uStack_410;
  uStack_2cc = uStack_40c;
  local_2c8 = uVar15;
  local_2c0 = uStack_400;
  bVar8 = _ZN4core4iter6traits8iterator8Iterator6reduce17h498be5ebde0c0fc3E(&local_2f8);
  uVar12 = *(undefined8 *)PTR__ZN7uu_shuf7options6OUTPUT17hffb8654906b4b6f3E_00200ad8;
  puVar17 = *(undefined **)(PTR__ZN7uu_shuf7options6OUTPUT17hffb8654906b4b6f3E_00200ad8 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h2717c3350bcb7728E
            (&local_2f8,&local_350,uVar12,puVar17);
  lVar11 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5b4fae1e20bf99e6E
                     (uVar12,puVar17,&local_2f8);
  if (lVar11 == 0) {
    pcVar14 = (code *)0x8000000000000000;
  }
  else {
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h10351ebe9e4824c9E
              (&local_2f8,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
    local_358 = uStack_2f0;
    local_318 = (undefined *)local_2e8;
    pcVar14 = (code *)local_2f8;
  }
  uVar12 = *(undefined8 *)PTR__ZN7uu_shuf7options13RANDOM_SOURCE17h53a9ecde3a1f65d4E_00200ae0;
  uVar1 = *(undefined8 *)(PTR__ZN7uu_shuf7options13RANDOM_SOURCE17h53a9ecde3a1f65d4E_00200ae0 + 8);
                    /* try { // try from 0015f3c3 to 0015f40a has its CatchHandler @ 0015f990 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h2717c3350bcb7728E
            (&local_2f8,&local_350,uVar12);
  lVar11 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5b4fae1e20bf99e6E
                     (uVar12,uVar1,&local_2f8);
  if (lVar11 == 0) {
    pcVar16 = (code *)0x8000000000000000;
  }
  else {
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h10351ebe9e4824c9E
              (&local_2f8,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
    local_360 = uStack_2f0;
    pcVar16 = (code *)local_2f8;
    puVar17 = (undefined *)local_2e8;
  }
                    /* try { // try from 0015f445 to 0015f471 has its CatchHandler @ 0015f97b */
  uVar10 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200aa8
           )(&local_350,*(undefined8 *)PTR__ZN7uu_shuf7options6REPEAT17h176627c809f00ff4E_00200ae8,
             *(undefined8 *)(PTR__ZN7uu_shuf7options6REPEAT17h176627c809f00ff4E_00200ae8 + 8));
  puVar18 = (undefined *)(ulong)uVar10;
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200aa8
          )(&local_350,
            *(undefined8 *)PTR__ZN7uu_shuf7options15ZERO_TERMINATED17h959e083b84248a6cE_00200af0,
            *(undefined8 *)
             (PTR__ZN7uu_shuf7options15ZERO_TERMINATED17h959e083b84248a6cE_00200af0 + 8));
  lVar11 = local_3d0;
  local_398 = -(ulong)((bVar8 & 1) == 0) | extraout_RDX;
  uVar9 = 10;
  if (cVar7 != '\0') {
    uVar9 = 0;
  }
  puStack_3c0 = local_358;
  local_3b8 = local_318;
  local_3a8 = local_360;
  uStack_390._0_2_ = CONCAT11(uVar9,(char)uVar10);
  local_3c8 = pcVar14;
  pcStack_3b0 = pcVar16;
  puStack_3a0 = puVar17;
  if (pcVar14 == (code *)0x8000000000000000) {
                    /* try { // try from 0015f4ec to 0015f590 has its CatchHandler @ 0015f9a5 */
    uVar12 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00200af8)();
    uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf4381db234660265E(uVar12);
    ppuVar13 = (undefined **)&DAT_001f9048;
LAB_0015f57b:
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hde16fa8d922ef556E
              (&local_2f8,uVar12,ppuVar13);
    if (local_398 == 0) {
      bVar2 = true;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = puVar18;
      auVar26 = auVar5 << 0x40;
      bVar3 = true;
    }
    else {
      if (pcStack_3b0 == (code *)0x8000000000000000) {
                    /* try { // try from 0015f5bb to 0015f5c3 has its CatchHandler @ 0015f959 */
        local_378 = (*(code *)PTR__ZN4rand4rngs6thread3rng17h4ff389470e265d23E_00200b00)();
        local_380 = 1;
        pcVar14 = local_3e8;
        puVar17 = puStack_3e0;
      }
      else {
                    /* try { // try from 0015f66e to 0015f69b has its CatchHandler @ 0015f959 */
        _ZN3std2fs4File4open17h7a160c4deb55eb11E(&local_438,&pcStack_3b0);
        _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h5ca446cc5f876c2dE
                  (&local_370,&local_438,local_3a8,puStack_3a0);
        auVar26._8_8_ = local_368;
        auVar26._0_8_ = local_370;
        bVar2 = true;
        if (local_370 != (undefined *)0x0) {
          bVar3 = true;
          goto LAB_0015f7da;
        }
        local_37c = SUB84(local_368,0);
        local_380 = 0;
        pcVar14 = local_3e8;
        puVar17 = puStack_3e0;
        puVar18 = local_368;
      }
      local_3e8 = pcVar14;
      puStack_3e0 = puVar17;
      if (lVar11 == 0) {
                    /* try { // try from 0015f72f to 0015f73a has its CatchHandler @ 0015f90f */
        (*(code *)PTR__ZN7uu_shuf15read_input_file17h0dd917eae59a80a6E_00200b08)
                  (&local_438,puVar17,local_3d8);
        puVar18 = local_428;
        puVar19 = puStack_430;
        pcVar16 = local_438;
        auVar26._8_8_ = local_428;
        auVar26._0_8_ = puStack_430;
        if (local_438 != (code *)0x8000000000000000) {
                    /* try { // try from 0015f760 to 0015f76e has its CatchHandler @ 0015f8e1 */
          (*(code *)PTR__ZN7uu_shuf10split_seps17he07f8c4bbcda6c2aE_00200b10)
                    (&local_438,puStack_430,local_428,uStack_390._1_1_);
                    /* try { // try from 0015f76f to 0015f78b has its CatchHandler @ 0015f8ce */
          auVar26 = _ZN7uu_shuf9shuf_exec17h79873914e861185eE
                              (&local_438,&local_3c8,&local_380,&local_2f8);
          if (auVar26._0_8_ == 0) {
            _ZN4core3ptr60drop_in_place_LT_alloc__vec__Vec_LT__RF__u5b_u8_u5d__GT__GT_17h8013aa03af9fd79fE
                      (local_438,puStack_430);
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17he88919c0f298a561E
                      (pcVar16,puVar19);
            _ZN4core3mem4drop17haba8bbc81b3b7f82E(pcVar14,puVar17);
            goto LAB_0015f896;
          }
          _ZN4core3ptr60drop_in_place_LT_alloc__vec__Vec_LT__RF__u5b_u8_u5d__GT__GT_17h8013aa03af9fd79fE
                    (local_438,puStack_430);
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17he88919c0f298a561E
                    (pcVar16,puVar19);
        }
        _ZN4core3mem4drop17haba8bbc81b3b7f82E(pcVar14,puVar17);
        bVar2 = true;
        bVar3 = false;
        lVar11 = local_3d0;
      }
      else if ((int)lVar11 == 1) {
                    /* try { // try from 0015f5fd to 0015f604 has its CatchHandler @ 0015f925 */
        _ZN4core4iter6traits8iterator8Iterator7collect17h5369f70057094df7E
                  (&local_438,puVar17,puVar17 + (long)local_3d8 * 0x18);
                    /* try { // try from 0015f605 to 0015f621 has its CatchHandler @ 0015f8f1 */
        auVar26 = _ZN7uu_shuf9shuf_exec17h8c6a34276eb3a6e3E
                            (&local_438,&local_3c8,&local_380,&local_2f8);
        if (auVar26._0_8_ == 0) {
          _ZN4core3ptr60drop_in_place_LT_alloc__vec__Vec_LT__RF__u5b_u8_u5d__GT__GT_17h8013aa03af9fd79fE
                    (local_438,puStack_430);
          _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h3d87a4ccf2b72ae9E
                    (&local_3e8);
LAB_0015f896:
                    /* try { // try from 0015f896 to 0015f8a2 has its CatchHandler @ 0015f959 */
          _ZN4core3ptr40drop_in_place_LT_uu_shuf__WrappedRng_GT_17ha4d21bee6a71849cE(&local_380);
                    /* try { // try from 0015f8a3 to 0015f8af has its CatchHandler @ 0015f9a5 */
          _ZN4core3ptr131drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__display__OsWrite_GT__GT__GT_17h82c51d27cb490d12E
                    (&local_2f8);
          _ZN4core3ptr37drop_in_place_LT_uu_shuf__Options_GT_17h26199cbe53904ea6E(&local_3c8);
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h05c4f566b5c53a35E
                    (&local_350);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = puVar18;
          return auVar4 << 0x40;
        }
        _ZN4core3ptr60drop_in_place_LT_alloc__vec__Vec_LT__RF__u5b_u8_u5d__GT__GT_17h8013aa03af9fd79fE
                  (local_438,puStack_430);
        _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h3d87a4ccf2b72ae9E
                  (&local_3e8);
        bVar3 = true;
        bVar2 = false;
      }
      else {
                    /* try { // try from 0015f6cf to 0015f6eb has its CatchHandler @ 0015f904 */
        local_438 = pcVar14;
        puStack_430 = puVar17;
        local_428 = local_3d8;
        auVar26 = _ZN7uu_shuf9shuf_exec17hf79dbab0ae70f8a2E
                            (&local_438,&local_3c8,&local_380,&local_2f8);
        if (auVar26._0_8_ == 0) goto LAB_0015f896;
        bVar2 = true;
        bVar3 = true;
      }
                    /* try { // try from 0015f7cd to 0015f7d9 has its CatchHandler @ 0015f959 */
      _ZN4core3ptr40drop_in_place_LT_uu_shuf__WrappedRng_GT_17ha4d21bee6a71849cE(&local_380);
    }
LAB_0015f7da:
                    /* try { // try from 0015f7da to 0015f7e6 has its CatchHandler @ 0015f9a5 */
    _ZN4core3ptr131drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__display__OsWrite_GT__GT__GT_17h82c51d27cb490d12E
              (&local_2f8);
  }
  else {
    _ZN3std2fs4File6create17h2f5971c059453d14E(&local_438,&local_3c8);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h3a9194a7936d8fc3E
              (&local_370,&local_438,puStack_3c0,local_3b8);
    puVar18 = local_368;
    auVar26._8_8_ = local_368;
    auVar26._0_8_ = local_370;
    bVar2 = true;
    if (local_370 == (undefined *)0x0) {
      uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbb3d70d0569267e6E((ulong)local_368 & 0xffffffff);
      ppuVar13 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h1bf4f1a80a44565aE_001f90a0;
      goto LAB_0015f57b;
    }
    bVar3 = true;
  }
  _ZN4core3ptr37drop_in_place_LT_uu_shuf__Options_GT_17h26199cbe53904ea6E(&local_3c8);
  if ((int)lVar11 != 2) {
    if ((int)lVar11 == 1) {
      if (bVar2) {
        _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h3d87a4ccf2b72ae9E
                  (&local_3e8);
      }
    }
    else if (bVar3) {
      _ZN4core3mem4drop17haba8bbc81b3b7f82E(local_3e8,puStack_3e0);
    }
  }
LAB_0015f822:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h05c4f566b5c53a35E
            (&local_350);
  return auVar26;
}