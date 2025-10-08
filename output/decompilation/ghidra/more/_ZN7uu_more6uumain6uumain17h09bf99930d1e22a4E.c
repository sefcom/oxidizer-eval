undefined  [16] _ZN7uu_more6uumain6uumain17h09bf99930d1e22a4E(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  char cVar3;
  undefined uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined auVar13 [16];
  undefined local_4d9;
  undefined8 local_4d8;
  undefined **local_4d0;
  undefined8 *local_4c8;
  code *local_4c0;
  undefined8 *local_4b8;
  code *local_4b0;
  undefined local_4a8 [16];
  undefined8 *local_498;
  undefined *local_490;
  undefined8 local_488;
  ulong local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  long local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  ulong local_438;
  int local_430;
  undefined4 local_42c;
  undefined8 local_428;
  undefined **local_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined **local_3a0 [2];
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long local_358;
  undefined8 local_350;
  undefined local_340 [16];
  undefined8 local_330;
  undefined local_328 [16];
  undefined8 local_318;
  undefined local_310 [16];
  undefined8 local_300;
  undefined **local_2f8;
  undefined8 uStack_2f0;
  undefined8 **local_2e8;
  ulong local_2e0;
  undefined8 local_2d8;
  
                    /* try { // try from 00172977 to 001729d2 has its CatchHandler @ 0017339f */
  uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h280b746f5ffff174E();
  (*(code *)PTR__ZN3std9panicking8set_hook17h907d45d363a27a50E_0022d380)(uVar6,&DAT_002243c8);
  (*(code *)PTR__ZN7uu_more6uu_app17h91a4b949c44828f9E_0022d388)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h6f280e93681d8b4eE
            (&local_420,&local_2f8,param_1,param_2);
  local_370 = local_3f0;
  local_380 = local_400;
  uStack_37c = uStack_3fc;
  uStack_378 = (undefined4)uStack_3f8;
  uStack_374 = uStack_3f8._4_4_;
  local_390 = local_410;
  uStack_38c = uStack_40c;
  uStack_388 = uStack_408;
  uStack_384 = uStack_404;
  local_3a0[0] = local_420;
                    /* try { // try from 00172a1e to 00172a33 has its CatchHandler @ 00173361 */
  (*(code *)PTR__ZN7uu_more7Options4from17h891a40eb4d8100b7E_0022d398)(&local_3c8,local_3a0);
                    /* try { // try from 00172a34 to 00172aaa has its CatchHandler @ 00173389 */
  (*(code *)PTR__ZN7uu_more10setup_term17h0836ea3f29ebee77E_0022d3a0)(&local_2f8);
  uVar11 = uStack_2f0;
  auVar13._8_8_ = uStack_2f0;
  auVar13._0_8_ = local_2f8;
  if (local_2f8 == (undefined **)0x0) {
    local_480 = uStack_2f0;
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hb1a200c6a1fe7de3E
              (&local_2f8,local_3a0);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17hb8dd9878ac53ee79E(&local_478,&local_2f8);
    if (local_478 == 0) {
      local_478 = 0;
      uStack_470 = 1;
      local_468 = 0;
                    /* try { // try from 00173164 to 00173191 has its CatchHandler @ 00173339 */
      local_2f8 = (undefined **)(*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_0022d3d8)()
      ;
      auVar13 = (*(code *)
                  PTR__ZN55__LT_std__io__stdio__Stdin_u20_as_u20_std__io__Read_GT_14read_to_string17hfb372f0d8ac67275E_0022d3e0
                )(&local_2f8,&local_478);
      if ((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        if (local_468 != 0) {
          local_358 = local_468;
          local_368 = (undefined4)local_478;
          uStack_364 = local_478._4_4_;
          uStack_360 = (undefined4)uStack_470;
          uStack_35c = uStack_470._4_4_;
          local_350 = 0;
                    /* try { // try from 001731d5 to 001731ee has its CatchHandler @ 00173328 */
          auVar13 = _ZN7uu_more4more17h7c8eea8d2920cc18E(&local_368,&local_480,&local_3c8);
          if (auVar13._0_8_ == 0) {
LAB_001731fb:
            _ZN4core3ptr37drop_in_place_LT_uu_more__Options_GT_17h3d5cdd05e4c7b237E
                      (local_3c8,local_3c0);
                    /* try { // try from 00173210 to 0017321c has its CatchHandler @ 0017339f */
            _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2140f0859326984bE
                      (local_3a0);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar11;
            auVar13 = auVar1 << 0x40;
            goto LAB_00173304;
          }
          goto LAB_001732e2;
        }
                    /* try { // try from 00173241 to 00173291 has its CatchHandler @ 00173339 */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h18293cfa67260e0bE
                  (&local_420,"bad usage",9);
        local_2e8 = (undefined8 **)CONCAT44(uStack_40c,local_410);
        local_2f8 = local_420;
        uStack_2f0 = CONCAT44(uStack_414,uStack_418);
        local_2e0 = CONCAT44(local_2e0._4_4_,1);
        uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5e437b04e14cce82E(&local_2f8);
        auVar13._8_8_ =
             &
             PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17ha12dd1038329db0dE_002244a0
        ;
        auVar13._0_8_ = uVar6;
      }
      else {
        auVar13 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                  )(auVar13._8_8_);
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h252ce3d2b34612c7E
                (local_478,uStack_470);
    }
    else {
      local_438 = _ZN4core4iter6traits10exact_size17ExactSizeIterator3len17he3ff82773236146fE
                            (local_440);
      local_3d8 = local_448;
      local_3e8 = local_458;
      uStack_3e0 = uStack_450;
      uStack_3f8 = local_468;
      local_3f0 = uStack_460;
      uStack_408 = (undefined4)local_478;
      uStack_404 = local_478._4_4_;
      local_400 = (undefined4)uStack_470;
      uStack_3fc = uStack_470._4_4_;
      local_3d0 = local_440;
      ppuVar7 = (undefined **)0x0;
LAB_00172b08:
      do {
        while( true ) {
          while( true ) {
            uVar11 = CONCAT44(uStack_414,uStack_418);
            uVar6 = CONCAT44(uStack_40c,local_410);
            local_420 = (undefined **)0x0;
            if (((ulong)ppuVar7 & 1) == 0) {
                    /* try { // try from 00172b28 to 00172c47 has its CatchHandler @ 001733a4 */
              lVar8 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6dc70c466a64e469E
                                (&uStack_408);
              if (lVar8 == 0) {
                uVar11 = 0;
              }
              else {
                uVar11 = *(ulong *)(lVar8 + 8);
                uVar6 = *(undefined8 *)(lVar8 + 0x10);
              }
            }
            plVar9 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h96ff1e210b7855ffE
                                       (&local_420,&uStack_408);
            if (uVar11 == 0) goto LAB_001731fb;
            lVar8 = *plVar9;
            cVar3 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0022d3a8)
                              (uVar11,uVar6);
            if (cVar3 == '\0') break;
            lVar8 = (*(code *)
                      PTR__ZN9crossterm8terminal16disable_raw_mode17h465f563c46635ef8E_0022d3b0)();
            if (lVar8 != 0) {
                    /* try { // try from 00173225 to 0017323b has its CatchHandler @ 00173389 */
              auVar13 = (*(code *)
                          PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                        )(lVar8);
              goto LAB_001732e2;
            }
            local_4c8 = (undefined8 *)0x1;
            local_4b0 = (code *)CONCAT71(local_4b0._1_7_,1);
            local_4a8._0_8_ = &local_4c8;
            local_4a8._8_8_ =
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0022d3b8
            ;
            local_2f8 = (undefined **)&DAT_00224338;
            uStack_2f0 = 2;
            local_2d8 = 0;
            local_2e8 = (undefined8 **)local_4a8;
            local_2e0 = 1;
            local_4c0 = (code *)uVar11;
            local_4b8 = (undefined8 *)uVar6;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h725dcc8f79796e4cE(local_340,&local_2f8);
            local_2e0 = local_2e0 & 0xffffffff00000000;
            local_2e8 = (undefined8 **)local_330;
            local_4d8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5e437b04e14cce82E(&local_2f8);
            local_4d0 = &
                        PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17ha12dd1038329db0dE_002244a0
            ;
            uVar5 = _ZN80__LT_uucore__mods__error__UUsageError_u20_as_u20_uucore__mods__error__UError_GT_4code17h8679b4fbf35c6f91E
                              (local_4d8);
                    /* try { // try from 00172c61 to 00172ced has its CatchHandler @ 0017338b */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0022d3c0)(uVar5);
            local_4a8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0022d360)();
            local_4c8 = (undefined8 *)local_4a8;
            local_4c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h17d30c655730047aE;
            local_4b8 = &local_4d8;
            local_4b0 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4cb9a5d0848ee960E
            ;
            local_2f8 = (undefined **)&DAT_00224358;
            uStack_2f0 = 3;
            local_2d8 = 0;
            local_2e8 = &local_4c8;
            local_2e0 = 2;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0022d368)(&local_2f8);
                    /* try { // try from 00172cf8 to 00172e07 has its CatchHandler @ 001733a4 */
            _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hc76cfff48b2d6fadE
                      (local_4d8,local_4d0);
            lVar8 = (*(code *)
                      PTR__ZN9crossterm8terminal15enable_raw_mode17hd50a747b44e84432E_0022d3c8)();
            ppuVar7 = local_420;
            if (lVar8 != 0) {
              auVar13 = (*(code *)
                          PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                        )(lVar8);
              goto LAB_001732e2;
            }
          }
          _ZN3std2fs8metadata17hc83829b9c1bdbf56E(&local_2f8,uVar11,uVar6);
          ppuVar7 = local_2f8;
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hb95ebecb39e0d4bcE
                    (&local_2f8);
          if ((int)ppuVar7 != 2) break;
          lVar8 = (*(code *)
                    PTR__ZN9crossterm8terminal16disable_raw_mode17h465f563c46635ef8E_0022d3b0)();
          if (lVar8 != 0) {
                    /* try { // try from 001732ad to 001732b5 has its CatchHandler @ 00173389 */
            auVar13 = (*(code *)
                        PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                      )(lVar8);
            goto LAB_001732e2;
          }
          local_4c8 = (undefined8 *)0x1;
          local_4b0 = (code *)CONCAT71(local_4b0._1_7_,1);
          local_4a8._0_8_ = &local_4c8;
          local_4a8._8_8_ =
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0022d3b8
          ;
          local_2f8 = &PTR_s_cannot_open___No_such_file_or_di_00224388;
          uStack_2f0 = 2;
          local_2d8 = 0;
          local_2e8 = (undefined8 **)local_4a8;
          local_2e0 = 1;
          local_4c0 = (code *)uVar11;
          local_4b8 = (undefined8 *)uVar6;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h725dcc8f79796e4cE(local_328,&local_2f8);
          local_2e0 = local_2e0 & 0xffffffff00000000;
          local_2e8 = (undefined8 **)local_318;
          local_4d8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5e437b04e14cce82E(&local_2f8);
          local_4d0 = &
                      PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17ha12dd1038329db0dE_00224418
          ;
          uVar5 = _ZN80__LT_uucore__mods__error__UUsageError_u20_as_u20_uucore__mods__error__UError_GT_4code17h8679b4fbf35c6f91E
                            (local_4d8);
                    /* try { // try from 00172e21 to 00172ead has its CatchHandler @ 00173375 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0022d3c0)(uVar5);
          local_4a8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0022d360)();
          local_4c8 = (undefined8 *)local_4a8;
          local_4c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h17d30c655730047aE;
          local_4b8 = &local_4d8;
          local_4b0 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4cb9a5d0848ee960E
          ;
          local_2f8 = (undefined **)&DAT_00224358;
          uStack_2f0 = 3;
          local_2d8 = 0;
          local_2e8 = &local_4c8;
          local_2e0 = 2;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0022d368)(&local_2f8);
                    /* try { // try from 00172eb8 to 00172ef2 has its CatchHandler @ 001733a4 */
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hc76cfff48b2d6fadE
                    (local_4d8,local_4d0);
          lVar8 = (*(code *)PTR__ZN9crossterm8terminal15enable_raw_mode17hd50a747b44e84432E_0022d3c8
                  )();
          ppuVar7 = local_420;
          if (lVar8 != 0) {
            auVar13 = (*(code *)
                        PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                      )(lVar8);
            goto LAB_001732e2;
          }
        }
        _ZN3std2fs4File4open17h9aa6ed797dd29ae7E(&local_430,uVar11,uVar6);
        uVar2 = local_428;
        uVar5 = local_42c;
        if (local_430 == 1) {
          local_488 = local_428;
                    /* try { // try from 00172f0e to 00172fef has its CatchHandler @ 00173366 */
          lVar8 = (*(code *)
                    PTR__ZN9crossterm8terminal16disable_raw_mode17h465f563c46635ef8E_0022d3b0)();
          if (lVar8 == 0) {
            local_4c8 = (undefined8 *)0x1;
            local_4b0 = (code *)CONCAT71(local_4b0._1_7_,1);
            local_4c0 = (code *)uVar11;
            local_4b8 = (undefined8 *)uVar6;
            uVar4 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(uVar2);
            local_4d8 = CONCAT71(local_4d8._1_7_,uVar4);
            local_4a8._0_8_ = &local_4c8;
            local_4a8._8_8_ =
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0022d3b8
            ;
            local_498 = &local_4d8;
            local_490 = 
            PTR__ZN64__LT_std__io__error__ErrorKind_u20_as_u20_core__fmt__Display_GT_3fmt17heda7d5343088b56fE_0022d3d0
            ;
            local_2f8 = &PTR_s_cannot_open___No_such_file_or_di_002243a8;
            uStack_2f0 = 2;
            local_2d8 = 0;
            local_2e8 = (undefined8 **)local_4a8;
            local_2e0 = 2;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h725dcc8f79796e4cE(local_310,&local_2f8);
            local_2e0 = local_2e0 & 0xffffffff00000000;
            local_2e8 = (undefined8 **)local_300;
            local_4d8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5e437b04e14cce82E(&local_2f8);
            local_4d0 = &
                        PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17ha12dd1038329db0dE_00224418
            ;
            uVar5 = _ZN80__LT_uucore__mods__error__UUsageError_u20_as_u20_uucore__mods__error__UError_GT_4code17h8679b4fbf35c6f91E
                              (local_4d8);
                    /* try { // try from 00173009 to 00173095 has its CatchHandler @ 0017334d */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0022d3c0)(uVar5);
            local_4a8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0022d360)();
            local_4c8 = (undefined8 *)local_4a8;
            local_4c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h17d30c655730047aE;
            local_4b8 = &local_4d8;
            local_4b0 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4cb9a5d0848ee960E
            ;
            local_2f8 = (undefined **)&DAT_00224358;
            uStack_2f0 = 3;
            local_2d8 = 0;
            local_2e8 = &local_4c8;
            local_2e0 = 2;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0022d368)(&local_2f8);
                    /* try { // try from 001730a0 to 001730aa has its CatchHandler @ 00173366 */
            _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hc76cfff48b2d6fadE
                      (local_4d8,local_4d0);
            lVar8 = (*(code *)
                      PTR__ZN9crossterm8terminal15enable_raw_mode17hd50a747b44e84432E_0022d3c8)();
            if (lVar8 == 0) {
                    /* try { // try from 001730b4 to 001730bd has its CatchHandler @ 001733a4 */
              _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hfeb26519dcae8a08E
                        (&local_488);
              ppuVar7 = local_420;
              goto LAB_00172b08;
            }
          }
                    /* try { // try from 001732b8 to 001732c0 has its CatchHandler @ 00173326 */
          auVar13 = (*(code *)
                      PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                    )(lVar8);
                    /* try { // try from 001732c1 to 001732db has its CatchHandler @ 00173389 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hfeb26519dcae8a08E(&local_488);
          break;
        }
                    /* try { // try from 001730cb to 001730d9 has its CatchHandler @ 0017332c */
        lVar10 = (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_0022d1d8)
                           (&local_2f8,uVar11,uVar6);
        lVar12 = 0;
        uVar11 = 0;
        if ((char)local_2f8 == '\0') {
          uVar11 = uStack_2f0;
        }
        if (lVar8 != 0) {
          lVar12 = *plVar9;
          lVar10 = plVar9[1];
        }
                    /* try { // try from 00173119 to 00173134 has its CatchHandler @ 0017332a */
        auVar13 = _ZN7uu_more4more17h6e099d2d6eef5fb4E
                            (uVar5,&local_480,1 < local_438,uVar11,local_2e8,lVar12,lVar10,
                             &local_3c8);
        ppuVar7 = local_420;
      } while (auVar13._0_8_ == 0);
    }
  }
LAB_001732e2:
  _ZN4core3ptr37drop_in_place_LT_uu_more__Options_GT_17h3d5cdd05e4c7b237E(local_3c8,local_3c0);
                    /* try { // try from 001732f7 to 00173303 has its CatchHandler @ 0017339f */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2140f0859326984bE
            (local_3a0);
LAB_00173304:
  _ZN4core3ptr43drop_in_place_LT_uu_more__TerminalGuard_GT_17h095bf8633f89bcc9E(&local_4d9);
  return auVar13;
}