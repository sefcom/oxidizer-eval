undefined  [16] _ZN7uu_more6uumain6uumain17h4c9d06880e616e90E(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  undefined uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined **ppuVar13;
  long *unaff_R12;
  long lVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined8 local_4d0;
  undefined **local_4c8;
  undefined8 *local_4c0;
  undefined local_4b8 [16];
  code *local_4a8;
  undefined local_4a0 [16];
  undefined8 *local_490;
  undefined *local_488;
  undefined8 local_480;
  undefined8 local_478;
  long local_470;
  undefined8 local_468;
  undefined8 local_460;
  ulong local_458;
  undefined8 local_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  int local_3f8;
  undefined4 local_3f4;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  undefined local_3a8 [40];
  undefined local_380 [16];
  undefined8 local_370;
  undefined local_368 [16];
  undefined8 local_358;
  undefined local_350 [16];
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined **local_2f8;
  undefined8 uStack_2f0;
  undefined8 **local_2e8;
  ulong local_2e0;
  undefined8 local_2d8;
  
  uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbe5cdb06c2dfc463E();
  (*(code *)PTR__ZN3std9panicking8set_hook17h088dd0fc26a2f66cE_002679f0)(uVar10,&DAT_0025f3e8);
  (*(code *)PTR__ZN7uu_more6uu_app17h63e8d97b108584c5E_002679f8)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h4336a96216fc8b75E
            (&local_450,&local_2f8,param_1,param_2);
  if (local_450 == (undefined **)0x8000000000000000) {
    auVar15 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00267a00
              )(CONCAT44(uStack_444,uStack_448));
  }
  else {
    local_3b8 = local_420;
    local_3c8 = local_430;
    uStack_3c4 = uStack_42c;
    uStack_3c0 = (undefined4)uStack_428;
    uStack_3bc = uStack_428._4_4_;
    local_3d8 = local_440;
    uStack_3d4 = uStack_43c;
    uStack_3d0 = uStack_438;
    uStack_3cc = uStack_434;
    local_3e8 = (undefined4)local_450;
    uStack_3e4 = local_450._4_4_;
    uStack_3e0 = uStack_448;
    uStack_3dc = uStack_444;
                    /* try { // try from 00184510 to 00184525 has its CatchHandler @ 00184e78 */
    (*(code *)PTR__ZN7uu_more7Options4from17hc98fb754786f3522E_00267a08)(local_3a8,&local_3e8);
    local_480 = 0;
    local_478 = 1;
    local_470 = 0;
                    /* try { // try from 00184541 to 001845b7 has its CatchHandler @ 00184e7d */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17ha584c1f8ab2c43aeE
              (&local_2f8,&local_3e8,&DAT_0010eaa3,5);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17hc4c5d21c114f8312E
              (&local_338,&DAT_0010eaa3,5,&local_2f8);
    if (CONCAT44(uStack_334,local_338) == 0) {
                    /* try { // try from 00184d38 to 00184e21 has its CatchHandler @ 00184e7d */
      local_2f8 = (undefined **)(*(code *)PTR__ZN3std2io5stdio5stdin17h7215cc131abb55d8E_00267a60)()
      ;
      auVar15 = (*(code *)
                  PTR__ZN55__LT_std__io__stdio__Stdin_u20_as_u20_std__io__Read_GT_14read_to_string17h09ca7fad329b13bbE_00267a68
                )(&local_2f8,&local_480);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h09e424b011fd4dc7E
                (auVar15._0_8_,auVar15._8_8_,&PTR_DAT_0025f5f8);
      if (local_470 == 0) {
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h961c84a8721cb85eE
                  (&local_450);
        local_2e8 = (undefined8 **)CONCAT44(uStack_43c,local_440);
        local_2f8 = local_450;
        uStack_2f0 = CONCAT44(uStack_444,uStack_448);
        local_2e0 = CONCAT44(local_2e0._4_4_,1);
        uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h768fabb14d69f87eE(&local_2f8);
        auVar15._8_8_ =
             &
             PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hd9c8560ccadcb594E_0025f570
        ;
        auVar15._0_8_ = uVar10;
      }
      else {
        local_2f8 = (undefined **)
                    (*(code *)PTR__ZN7uu_more10setup_term17hbb8a9341123ad1e0E_00267a10)();
        auVar15 = (*(code *)PTR__ZN7uu_more4more17h8763b7f12892fd6bE_00267a50)
                            (local_478,local_470,&local_2f8,0,0);
        if (auVar15._0_8_ == 0) {
          (*(code *)PTR__ZN7uu_more10reset_term17h414dda587ba155f3E_00267a58)(&local_2f8);
LAB_00184d0d:
                    /* try { // try from 00184d0d to 00184d16 has its CatchHandler @ 00184e73 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he781af9e0f3172dbE(&local_480);
                    /* try { // try from 00184d17 to 00184d23 has its CatchHandler @ 00184e78 */
          _ZN4core3ptr37drop_in_place_LT_uu_more__Options_GT_17hfbeede890f8e1fbdE(local_3a8);
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hd23c2e9f40f94766E
                    (&local_3e8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = unaff_R12;
          return auVar3 << 0x40;
        }
      }
    }
    else {
      local_468 = (*(code *)PTR__ZN7uu_more10setup_term17hbb8a9341123ad1e0E_00267a10)();
      local_458 = _ZN4core4iter6traits10exact_size17ExactSizeIterator3len17h3b01bf493a451249E
                            (local_300);
      local_408 = local_308;
      local_418 = local_318;
      uStack_410 = uStack_310;
      uStack_428 = local_328;
      local_420 = uStack_320;
      uStack_438 = local_338;
      uStack_434 = uStack_334;
      local_430 = uStack_330;
      uStack_42c = uStack_32c;
      local_400 = local_300;
      ppuVar13 = (undefined **)0x0;
LAB_00184627:
      while( true ) {
        auVar16._4_4_ = uStack_444;
        auVar16._0_4_ = uStack_448;
        uVar1 = CONCAT44(uStack_43c,local_440);
        auVar16._8_8_ = uVar1;
        local_450 = (undefined **)0x0;
        if (ppuVar13 == (undefined **)0x0) {
          lVar11 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbb3d00fd695aef87E
                             (&uStack_438);
          if (lVar11 == 0) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar1;
            auVar16 = auVar2 << 0x40;
          }
          else {
            auVar16 = _ZN4core3ops8function5impls80__LT_impl_u20_core__ops__function__FnOnce_LT_A_GT__u20_for_u20__RF_mut_u20_F_GT_9call_once17h77a234cc4792ba23E
                                (*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
          }
        }
        uVar10 = auVar16._8_8_;
        lVar11 = auVar16._0_8_;
        plVar12 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hd5406e92df845752E
                                    (&local_450,&uStack_438);
        if (lVar11 == 0) {
                    /* try { // try from 00184cff to 00184d0c has its CatchHandler @ 00184e7d */
          (*(code *)PTR__ZN7uu_more10reset_term17h414dda587ba155f3E_00267a58)(&local_468);
          goto LAB_00184d0d;
        }
        lVar14 = *plVar12;
        cVar7 = (*(code *)PTR__ZN3std4path4Path6is_dir17h9ac0db933706da51E_00267a18)(lVar11,uVar10);
        unaff_R12 = plVar12;
        local_4b8 = auVar16;
        if (cVar7 == '\0') break;
        uVar10 = (*(code *)PTR__ZN9crossterm8terminal16disable_raw_mode17h305d553e1a48c02aE_00267a20
                 )();
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha63502d5ecd852ebE(uVar10,&PTR_DAT_0025f520);
        local_4c0 = (undefined8 *)0x1;
        local_4a8 = (code *)CONCAT71(local_4a8._1_7_,1);
        local_4a0._8_8_ =
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_00267a28
        ;
        local_2f8 = (undefined **)&DAT_0025f358;
        uStack_2f0 = 2;
        local_2d8 = 0;
        local_2e8 = (undefined8 **)local_4a0;
        local_2e0 = 1;
        local_4a0._0_8_ = &local_4c0;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h80f1e74e99a52e3cE(local_380,&local_2f8);
        local_2e0 = local_2e0 & 0xffffffff00000000;
        local_2e8 = (undefined8 **)local_370;
        local_4d0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h768fabb14d69f87eE(&local_2f8);
        local_4c8 = &
                    PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hd9c8560ccadcb594E_0025f570
        ;
        uVar9 = _ZN80__LT_uucore__mods__error__UUsageError_u20_as_u20_uucore__mods__error__UError_GT_4code17he3a59f98489a3243E
                          (local_4d0);
                    /* try { // try from 0018479c to 00184828 has its CatchHandler @ 00184ecb */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00267a30)(uVar9);
        local_4a0 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_002679d0)();
        local_4c0 = (undefined8 *)local_4a0;
        local_4b8._0_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf5f786156cb2ce45E;
        local_4b8._8_8_ = &local_4d0;
        local_4a8 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17he53398c8fff906b9E
        ;
        local_2f8 = (undefined **)&DAT_0025f378;
        uStack_2f0 = 3;
        local_2d8 = 0;
        local_2e0 = 2;
        local_2e8 = &local_4c0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_002679d8)(&local_2f8);
                    /* try { // try from 00184833 to 00184948 has its CatchHandler @ 00184edf */
        _ZN4core3ptr118drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Sync_u2b_core__marker__Send_GT__GT_17h3fe0217d98661d13E
                  (local_4d0,local_4c8);
        uVar10 = (*(code *)PTR__ZN9crossterm8terminal15enable_raw_mode17h2b8809045542de71E_00267a38)
                           ();
        ppuVar13 = &PTR_DAT_0025f5e0;
LAB_00184617:
                    /* try { // try from 00184617 to 00184782 has its CatchHandler @ 00184edf */
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha63502d5ecd852ebE(uVar10,ppuVar13);
        ppuVar13 = local_450;
      }
      _ZN3std2fs8metadata17hfcb81de4f67bf64aE(&local_2f8,lVar11,uVar10);
      if ((int)local_2f8 == 2) {
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h0dc49061fa491f70E
                  (&local_2f8);
        uVar10 = (*(code *)PTR__ZN9crossterm8terminal16disable_raw_mode17h305d553e1a48c02aE_00267a20
                 )();
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha63502d5ecd852ebE(uVar10,&PTR_DAT_0025f4f0);
        local_4c0 = (undefined8 *)0x1;
        local_4a8 = (code *)CONCAT71(local_4a8._1_7_,1);
        local_4a0._8_8_ =
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_00267a28
        ;
        local_2f8 = &PTR_DAT_0025f3a8;
        uStack_2f0 = 2;
        local_2d8 = 0;
        local_2e8 = (undefined8 **)local_4a0;
        local_2e0 = 1;
        local_4a0._0_8_ = &local_4c0;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h80f1e74e99a52e3cE(local_368,&local_2f8);
        local_2e0 = local_2e0 & 0xffffffff00000000;
        local_2e8 = (undefined8 **)local_358;
        local_4d0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h768fabb14d69f87eE(&local_2f8);
        local_4c8 = &
                    PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hd9c8560ccadcb594E_0025f468
        ;
        uVar9 = _ZN80__LT_uucore__mods__error__UUsageError_u20_as_u20_uucore__mods__error__UError_GT_4code17he3a59f98489a3243E
                          (local_4d0);
                    /* try { // try from 00184962 to 001849ee has its CatchHandler @ 00184ea5 */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00267a30)(uVar9);
        local_4a0 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_002679d0)();
        local_4c0 = (undefined8 *)local_4a0;
        local_4b8._0_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf5f786156cb2ce45E;
        local_4b8._8_8_ = &local_4d0;
        local_4a8 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17he53398c8fff906b9E
        ;
        local_2f8 = (undefined **)&DAT_0025f378;
        uStack_2f0 = 3;
        local_2d8 = 0;
        local_2e0 = 2;
        local_2e8 = &local_4c0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_002679d8)(&local_2f8);
                    /* try { // try from 001849f9 to 00184a2f has its CatchHandler @ 00184edf */
        _ZN4core3ptr118drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Sync_u2b_core__marker__Send_GT__GT_17h3fe0217d98661d13E
                  (local_4d0,local_4c8);
        uVar10 = (*(code *)PTR__ZN9crossterm8terminal15enable_raw_mode17h2b8809045542de71E_00267a38)
                           ();
        ppuVar13 = &PTR_DAT_0025f508;
        goto LAB_00184617;
      }
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h0dc49061fa491f70E
                (&local_2f8);
      _ZN3std2fs4File4open17h323ef9f190b156bfE(&local_3f8,lVar11,uVar10);
      uVar5 = local_3f0;
      if (local_3f8 != 0) {
        local_460 = local_3f0;
                    /* try { // try from 00184a4e to 00184b3a has its CatchHandler @ 00184eb9 */
        uVar10 = (*(code *)PTR__ZN9crossterm8terminal16disable_raw_mode17h305d553e1a48c02aE_00267a20
                 )();
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha63502d5ecd852ebE(uVar10,&PTR_DAT_0025f430);
        local_4c0 = (undefined8 *)0x1;
        local_4a8 = (code *)CONCAT71(local_4a8._1_7_,1);
        uVar8 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(uVar5);
        local_4d0 = CONCAT71(local_4d0._1_7_,uVar8);
        local_4a0._8_8_ =
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_00267a28
        ;
        local_490 = &local_4d0;
        local_488 = 
        PTR__ZN64__LT_std__io__error__ErrorKind_u20_as_u20_core__fmt__Display_GT_3fmt17ha1aa9f6bc9a7f1d5E_00267a40
        ;
        local_2f8 = &PTR_DAT_0025f3c8;
        uStack_2f0 = 2;
        local_2d8 = 0;
        local_2e8 = (undefined8 **)local_4a0;
        local_2e0 = 2;
        local_4a0._0_8_ = &local_4c0;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h80f1e74e99a52e3cE(local_350,&local_2f8);
        local_2e0 = local_2e0 & 0xffffffff00000000;
        local_2e8 = (undefined8 **)local_340;
        local_4d0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h768fabb14d69f87eE(&local_2f8);
        local_4c8 = &
                    PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hd9c8560ccadcb594E_0025f468
        ;
        uVar9 = _ZN80__LT_uucore__mods__error__UUsageError_u20_as_u20_uucore__mods__error__UError_GT_4code17he3a59f98489a3243E
                          (local_4d0);
                    /* try { // try from 00184b54 to 00184be0 has its CatchHandler @ 00184e91 */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00267a30)(uVar9);
        local_4a0 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_002679d0)();
        local_4c0 = (undefined8 *)local_4a0;
        local_4b8._0_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf5f786156cb2ce45E;
        local_4b8._8_8_ = &local_4d0;
        local_4a8 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17he53398c8fff906b9E
        ;
        local_2f8 = (undefined **)&DAT_0025f378;
        uStack_2f0 = 3;
        local_2d8 = 0;
        local_2e0 = 2;
        local_2e8 = &local_4c0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_002679d8)(&local_2f8);
                    /* try { // try from 00184beb to 00184c04 has its CatchHandler @ 00184eb9 */
        _ZN4core3ptr118drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Sync_u2b_core__marker__Send_GT__GT_17h3fe0217d98661d13E
                  (local_4d0,local_4c8);
        uVar10 = (*(code *)PTR__ZN9crossterm8terminal15enable_raw_mode17h2b8809045542de71E_00267a38)
                           ();
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha63502d5ecd852ebE(uVar10,&PTR_DAT_0025f4d8);
                    /* try { // try from 00184c05 to 00184c2f has its CatchHandler @ 00184edf */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h46901b14184092d9E(&local_460);
        ppuVar13 = local_450;
        goto LAB_00184627;
      }
      _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h5dc0c383d62754c2E
                (&local_2f8,0x2000,local_3f4);
                    /* try { // try from 00184c30 to 00184cd2 has its CatchHandler @ 00184e7f */
      auVar15 = _ZN82__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__Read_GT_14read_to_string17ha689075af2c7df98E
                          (&local_2f8,&local_480);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h09e424b011fd4dc7E
                (auVar15._0_8_,auVar15._8_8_,&PTR_DAT_0025f418);
      lVar6 = local_470;
      uVar5 = local_478;
      (*(code *)
        PTR__ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E_00267a48
      )(&local_4c0,lVar11,uVar10);
      pcVar4 = (code *)local_4b8._0_8_;
      if (local_4c0 != (undefined8 *)0x0) {
        pcVar4 = (code *)0x0;
      }
      if (lVar14 != 0) {
        lVar14 = *plVar12;
      }
      auVar15 = (*(code *)PTR__ZN7uu_more4more17h8763b7f12892fd6bE_00267a50)
                          (uVar5,lVar6,&local_468,1 < local_458,pcVar4,local_4b8._8_8_,lVar14,
                           plVar12[1],local_3a8);
      if (auVar15._0_8_ == 0) {
        local_470 = 0;
        _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17hd977552b0a65e162E
                  (&local_2f8);
        ppuVar13 = local_450;
        goto LAB_00184627;
      }
      _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17hd977552b0a65e162E
                (&local_2f8);
    }
                    /* try { // try from 00184e37 to 00184e40 has its CatchHandler @ 00184e73 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he781af9e0f3172dbE(&local_480);
                    /* try { // try from 00184e41 to 00184e4d has its CatchHandler @ 00184e78 */
    _ZN4core3ptr37drop_in_place_LT_uu_more__Options_GT_17hfbeede890f8e1fbdE(local_3a8);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hd23c2e9f40f94766E
              (&local_3e8);
  }
  return auVar15;
}