undefined  [16]
_ZN12uu_dircolors6uumain6uumain17h64bd80dba95c0b42E(undefined **param_1,undefined8 param_2)

{
  undefined8 **ppuVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  char local_491;
  undefined *local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  uint uStack_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined8 local_460;
  undefined8 *local_450;
  code *local_448;
  undefined8 *local_440;
  undefined *local_438;
  undefined8 local_430;
  undefined8 local_428;
  long *local_420;
  long local_418;
  undefined *local_410;
  undefined8 local_408;
  undefined *local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  uint uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 local_3d0;
  int local_3c8;
  undefined4 local_3c4;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 **local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 **local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 **local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 **local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 **local_98;
  undefined local_90 [48];
  undefined local_60 [48];
  
  (*(code *)PTR__ZN12uu_dircolors6uu_app17h0ca3ae80d0f731e8E_001fe0d0)(&local_3b8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h7b1766bd96ab2d71E
            (&local_490,&local_3b8,param_1,param_2);
  local_3d0 = local_460;
  local_3e0 = local_470;
  uStack_3dc = uStack_46c;
  uStack_3d8 = uStack_468;
  uStack_3d4 = uStack_464;
  local_3f0 = (undefined4)local_480;
  uStack_3ec = local_480._4_4_;
  uStack_3e8 = uStack_478;
  uStack_3e4 = uStack_474;
  local_400 = local_490;
  local_3f8 = uStack_488;
                    /* try { // try from 0015fbeb to 0015fc4f has its CatchHandler @ 00160612 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hebd739a8be5302e3E
            (&local_3b8,&local_400);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h7d8a42b146f21d46E(&local_490,&local_3b8);
  local_3b8 = (undefined **)0x0;
  uStack_3b0 = (undefined *)0x8;
  local_3a8 = (undefined8 **)0x0;
  _ZN4core6option15Option_LT_T_GT_6map_or17h22cc3115edbc3910E(&local_428,&local_490,&local_3b8);
                    /* try { // try from 0015fc50 to 0015fd17 has its CatchHandler @ 00160617 */
  cVar9 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe0e0
          )(&local_400,"c-shell",7);
  if (((cVar9 == '\0') &&
      (cVar9 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe0e0
               )(&local_400,"bourne-shell",0xc), cVar9 == '\0')) ||
     ((cVar9 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe0e0
               )(&local_400,"print-database",0xe), cVar9 == '\0' &&
      (cVar9 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe0e0
               )(&local_400,"print-ls-colors",0xf), cVar9 == '\0')))) {
                    /* try { // try from 0015fd56 to 0015ff33 has its CatchHandler @ 00160617 */
    cVar9 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe0e0
            )(&local_400,"print-database",0xe);
    if ((cVar9 != '\0') &&
       (cVar9 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe0e0
                )(&local_400,"print-ls-colors",0xf), cVar9 != '\0')) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfa910bc67f7961e5E
                (&local_490,"options --print-database and --print-ls-colors are mutually exclusive",
                 0x45);
      local_3a8 = local_480;
      local_3b8 = (undefined **)local_490;
      uStack_3b0 = (undefined *)uStack_488;
      local_3a0 = (undefined8 **)CONCAT44(local_3a0._4_4_,1);
      uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37964118bcf75eedE(&local_3b8);
      goto LAB_0015fd18;
    }
    cVar9 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe0e0
            )(&local_400,"print-database",0xe);
    if (cVar9 == '\0') {
      cVar9 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe0e0
              )(&local_400,"c-shell",7);
      cVar10 = '\x01';
      if (cVar9 != '\0') {
LAB_00160016:
        plVar3 = local_420;
        local_491 = cVar10;
        if (local_418 == 1) {
          uVar11 = *(undefined8 *)(*local_420 + 8);
          ppuVar1 = *(undefined8 ***)(*local_420 + 0x10);
          cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4bb8f6e1f67b4157E
                            (uVar11,ppuVar1,"-",1);
          if (cVar9 == '\0') {
            cVar9 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001fe110)
                              (uVar11,ppuVar1);
            if (cVar9 != '\0') {
              local_490 = (undefined *)0x1;
              uStack_478 = CONCAT31(uStack_478._1_3_,1);
              local_448 = (code *)
                          PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fe098
              ;
              local_3b8 = &PTR_s_expected_file__got_directory_001f4ff0;
              uStack_3b0 = (undefined *)0x1;
              local_398 = 0;
              local_3a8 = &local_450;
              local_3a0 = (undefined8 **)0x1;
              uStack_488 = (undefined8 **)uVar11;
              local_480 = ppuVar1;
              local_450 = &local_490;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17h53cf05d23a4dbe8cE
                        (&local_c0,&local_3b8);
              local_3a0 = (undefined8 **)CONCAT44(local_3a0._4_4_,2);
              local_3b8 = (undefined **)CONCAT44(uStack_bc,local_c0);
              uStack_3b0 = (undefined *)CONCAT44(uStack_b4,uStack_b8);
              local_3a8 = local_b0;
              uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37964118bcf75eedE(&local_3b8);
              goto LAB_0016032b;
            }
            _ZN3std2fs4File4open17h997f5f2f8f213834E(&local_3c8,uVar11,ppuVar1);
            if (local_3c8 == 1) {
              local_430 = local_3c0;
              local_490 = (undefined *)0x1;
              uStack_478 = uStack_478 & 0xffffff00;
              local_448 = (code *)
                          PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fe098
              ;
              local_440 = &local_430;
              local_438 = 
              PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001fe118
              ;
              local_3b8 = (undefined **)&DAT_001f4f48;
              uStack_3b0 = (undefined *)0x2;
              local_398 = 0;
              local_3a8 = &local_450;
              local_3a0 = (undefined8 **)0x2;
                    /* try { // try from 001603e7 to 00160433 has its CatchHandler @ 001605bb */
              uStack_488 = (undefined8 **)uVar11;
              local_480 = ppuVar1;
              local_450 = &local_490;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17h53cf05d23a4dbe8cE
                        (&local_a8,&local_3b8);
              local_3a0 = (undefined8 **)CONCAT44(local_3a0._4_4_,1);
              local_3b8 = (undefined **)CONCAT44(uStack_a4,local_a8);
              uStack_3b0 = (undefined *)CONCAT44(uStack_9c,uStack_a0);
              local_3a8 = local_98;
              uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37964118bcf75eedE(&local_3b8);
                    /* try { // try from 0016043c to 00160460 has its CatchHandler @ 00160610 */
              _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h9605c47f6bab8b35E
                        (local_430);
              param_1 = &
                        PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h97527237b64d2f67E_001f5020
              ;
              goto LAB_0015fd22;
            }
            _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hf4d2fb8681f88375E
                      (local_90,local_3c4);
                    /* try { // try from 00160461 to 00160471 has its CatchHandler @ 001605a9 */
            (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_001fe120)
                      (&local_490,uVar11,ppuVar1);
            local_410 = local_490;
                    /* try { // try from 00160489 to 001604aa has its CatchHandler @ 0016058f */
            local_408 = uStack_488;
            _ZN12uu_dircolors5parse17h163ac6b47826303eE
                      (&local_3b8,local_90,&local_491,uStack_488,local_480);
            ppuVar6 = local_3a0;
            ppuVar1 = local_3a8;
            puVar5 = uStack_3b0;
            uVar4 = (ulong)local_3b8;
            _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h27d753f1da108540E
                      (local_410,local_408);
            puVar7 = local_490;
            uVar8 = uStack_488;
            local_490 = puVar5;
            uStack_488 = ppuVar1;
            local_3a8 = ppuVar6;
            local_3b8 = (undefined **)uVar4;
          }
          else {
                    /* try { // try from 001600f8 to 0016010d has its CatchHandler @ 00160610 */
            uVar11 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001fe108)();
            _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hd118cba447eab8b7E
                      (local_60,uVar11);
            lVar2 = *plVar3;
                    /* try { // try from 00160119 to 00160132 has its CatchHandler @ 001605f8 */
            _ZN12uu_dircolors5parse17h4ab437343b8a2bbaE
                      (&local_3b8,local_60,&local_491,*(undefined8 *)(lVar2 + 8),
                       *(undefined8 *)(lVar2 + 0x10));
            puVar7 = local_490;
            uVar8 = uStack_488;
            local_490 = uStack_3b0;
            uStack_488 = local_3a8;
            local_3a8 = local_3a0;
          }
          if (((ulong)local_3b8 & 1) == 0) {
            local_448 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_3b8 = (undefined **)&DAT_001f4f68;
            uStack_3b0 = (undefined *)0x2;
            local_398 = 0;
            local_3a8 = &local_450;
            local_3a0 = (undefined8 **)0x1;
                    /* try { // try from 0016054a to 00160557 has its CatchHandler @ 001605ca */
            local_450 = &local_490;
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001fe0f0)(&local_3b8);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                      (local_490,uStack_488);
            uVar11 = 0;
          }
          else {
            local_3a0._4_4_ = (undefined4)((ulong)local_3a0 >> 0x20);
            local_3a0 = (undefined8 **)CONCAT44(local_3a0._4_4_,1);
                    /* try { // try from 00160180 to 0016018c has its CatchHandler @ 001605e3 */
            local_3b8 = (undefined **)local_490;
            uStack_3b0 = (undefined *)uStack_488;
            uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37964118bcf75eedE(&local_3b8);
            uStack_488 = (undefined8 **)uVar8;
            local_490 = puVar7;
          }
          _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17hadb3ca9fd0739737E
                    (local_428,plVar3);
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8406cbe15c6891aaE
                    (&local_400);
          param_1 = &
                    PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h97527237b64d2f67E_001f5020
          ;
          goto LAB_0015fd3e;
        }
        if (local_418 != 0) {
          uStack_488 = *(undefined8 ***)(local_420[1] + 8);
          local_480 = *(undefined8 ***)(local_420[1] + 0x10);
          local_490 = (undefined *)0x0;
          uStack_478 = CONCAT31(uStack_478._1_3_,1);
          local_448 = (code *)
                      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fe098
          ;
          local_3b8 = &PTR_s_extra_operand_file_operands_cann_001f4fe0;
          uStack_3b0 = (undefined *)0x1;
          local_398 = 0;
          local_3a8 = &local_450;
          local_3a0 = (undefined8 **)0x1;
                    /* try { // try from 0016020f to 0016034c has its CatchHandler @ 00160610 */
          local_450 = &local_490;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h53cf05d23a4dbe8cE(&local_d8,&local_3b8);
          local_3a0 = (undefined8 **)CONCAT44(local_3a0._4_4_,1);
          local_3b8 = (undefined **)CONCAT44(uStack_d4,local_d8);
          uStack_3b0 = (undefined *)CONCAT44(uStack_cc,uStack_d0);
          local_3a8 = local_c8;
          uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37964118bcf75eedE(&local_3b8);
          goto LAB_0015fd18;
        }
                    /* try { // try from 00160035 to 00160053 has its CatchHandler @ 00160610 */
        (*(code *)PTR__ZN12uu_dircolors18generate_ls_colors17h913fd92084aef0ebE_001fe100)
                  (&local_490,&local_491,&DAT_0011a222,1);
        local_448 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_3b8 = (undefined **)&DAT_001f4f68;
        uStack_3b0 = (undefined *)0x2;
        local_398 = 0;
        local_3a8 = &local_450;
        local_3a0 = (undefined8 **)0x1;
                    /* try { // try from 001600a5 to 001600b2 has its CatchHandler @ 001605fa */
        local_450 = &local_490;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001fe0f0)(&local_3b8);
        goto LAB_001600b3;
      }
      cVar9 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe0e0
              )(&local_400,"bourne-shell",0xc);
      if (cVar9 != '\0') {
        cVar10 = '\0';
        goto LAB_00160016;
      }
                    /* try { // try from 0015ff98 to 00160010 has its CatchHandler @ 00160617 */
      cVar9 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe0e0
              )(&local_400,"print-ls-colors",0xf);
      cVar10 = '\x02';
      if (cVar9 != '\0') goto LAB_00160016;
      local_491 = '\x03';
      cVar10 = (*(code *)PTR__ZN12uu_dircolors12guess_syntax17h7a704cd20b6b2f5bE_001fe0f8)();
      if (cVar10 != '\x03') goto LAB_00160016;
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfa910bc67f7961e5E
                (&local_490,"no SHELL environment variable, and no shell type option given",0x3d);
      local_3a8 = local_480;
      local_3b8 = (undefined **)local_490;
      uStack_3b0 = (undefined *)uStack_488;
      local_3a0 = (undefined8 **)CONCAT44(local_3a0._4_4_,1);
      uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37964118bcf75eedE(&local_3b8);
LAB_0016032b:
      param_1 = &
                PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h97527237b64d2f67E_001f5020
      ;
    }
    else {
      if (local_418 != 0) {
        uStack_488 = *(undefined8 ***)(*local_420 + 8);
        local_480 = *(undefined8 ***)(*local_420 + 0x10);
        local_490 = (undefined *)0x0;
        uStack_478 = CONCAT31(uStack_478._1_3_,1);
        local_448 = (code *)
                    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fe098
        ;
        local_3b8 = &PTR_s_extra_operand_file_operands_cann_001f4fc0;
        uStack_3b0 = (undefined *)0x2;
        local_398 = 0;
        local_3a8 = &local_450;
        local_3a0 = (undefined8 **)0x1;
        local_450 = &local_490;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h53cf05d23a4dbe8cE(&local_f0,&local_3b8);
        local_3a0 = (undefined8 **)CONCAT44(local_3a0._4_4_,1);
        local_3b8 = (undefined **)CONCAT44(uStack_ec,local_f0);
        uStack_3b0 = (undefined *)CONCAT44(uStack_e4,uStack_e8);
        local_3a8 = local_e0;
        uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37964118bcf75eedE(&local_3b8);
        goto LAB_0015fd18;
      }
      (*(code *)PTR__ZN12uu_dircolors25generate_dircolors_config17h11151b3620e36f5bE_001fe0e8)
                (&local_490);
      local_448 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_3b8 = (undefined **)&DAT_001f4f68;
      uStack_3b0 = (undefined *)0x2;
      local_398 = 0;
      local_3a8 = &local_450;
      local_3a0 = (undefined8 **)0x1;
                    /* try { // try from 0015ff85 to 0015ff92 has its CatchHandler @ 001605fc */
      local_450 = &local_490;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001fe0f0)(&local_3b8);
LAB_001600b3:
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                (local_490,uStack_488);
      uVar11 = 0;
    }
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfa910bc67f7961e5E
              (&local_490,
               "the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive"
               ,0x5b);
    local_3a8 = local_480;
    local_3b8 = (undefined **)local_490;
    uStack_3b0 = (undefined *)uStack_488;
    local_3a0 = (undefined8 **)CONCAT44(local_3a0._4_4_,1);
    uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37964118bcf75eedE(&local_3b8);
LAB_0015fd18:
    param_1 = &
              PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h97527237b64d2f67E_001f50a8
    ;
  }
LAB_0015fd22:
  _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17hadb3ca9fd0739737E
            (local_428,local_420);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8406cbe15c6891aaE
            (&local_400);
LAB_0015fd3e:
  auVar12._8_8_ = param_1;
  auVar12._0_8_ = uVar11;
  return auVar12;
}