undefined  [16] _ZN6uu_seq6uumain6uumain17h1ad203335fb9862fE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined uVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 unaff_R12;
  undefined **ppuVar14;
  bool bVar15;
  undefined auVar16 [16];
  undefined2 local_51c;
  undefined local_51a;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  undefined8 local_4d0;
  long *local_4c8;
  undefined8 local_4c0;
  long *local_4b8;
  ulong local_4b0;
  int local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 local_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  ulong local_460;
  ulong local_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 local_428;
  undefined8 uStack_420;
  ulong local_418;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  ulong local_400;
  long local_3f8;
  undefined8 local_3f0;
  byte local_3e8;
  int local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  int local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  ulong local_388;
  ulong uStack_380;
  ulong local_378;
  ulong uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  ulong local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  ulong local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  long local_70 [8];
  
  (*(code *)PTR__ZN6uu_seq6uu_app17hd0faaa9474e9c549E_002239d8)(&local_338);
                    /* try { // try from 0016b245 to 0016b257 has its CatchHandler @ 0016bd49 */
  _ZN6uu_seq27split_short_args_with_value17hdae2cdacdc174560E(&local_428,param_1,param_2);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hd1c88fd558842ae0E
            (&local_518,&local_338,&local_428);
  local_440 = (undefined4)local_4f8;
  uStack_43c = local_4f8._4_4_;
  uStack_438 = (undefined4)uStack_4f0;
  uStack_434 = uStack_4f0._4_4_;
  local_450 = (undefined4)local_508;
  uStack_44c = local_508._4_4_;
  uStack_448 = uStack_500;
  uStack_444 = uStack_4fc;
  local_460 = local_518;
  local_458 = uStack_510;
                    /* try { // try from 0016b2d2 to 0016b326 has its CatchHandler @ 0016bd5b */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h38deca854bdaffcaE
            (&local_338,&local_460);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hb9b645cf222daec1E(local_70,&local_338);
  if (local_70[0] == 0) {
    local_338 = 0x8000000000000001;
                    /* try { // try from 0016b3ed to 0016b3f9 has its CatchHandler @ 0016bd5b */
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8df98ea5beea200aE(&local_338);
    ppuVar14 = &
               PTR__ZN4core3ptr44drop_in_place_LT_uu_seq__error__SeqError_GT_17hec68b593c2691446E_0021a510
    ;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17hf43435935691e018E(&local_4c0,local_70);
                    /* try { // try from 0016b327 to 0016b378 has its CatchHandler @ 0016bd35 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hed9adfe4617c837cE
              (&local_338,&local_460,"separator",9);
    uVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he420c565d1c1c117E
                      ("separator",9,&local_338);
    uVar6 = _ZN4core6option15Option_LT_T_GT_6map_or17h3479f1cde4d6a743E(uVar6);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h8638b58448d95b8cE
              (&local_338,uVar6);
    local_498 = local_328;
    local_4a8 = (int)local_338;
    uStack_4a4 = local_338._4_4_;
    uStack_4a0 = (undefined4)uStack_330;
    uStack_49c = uStack_330._4_4_;
                    /* try { // try from 0016b399 to 0016b3d2 has its CatchHandler @ 0016bd23 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hed9adfe4617c837cE
              (&local_338,&local_460,"terminator");
    lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he420c565d1c1c117E
                      ("terminator",10,&local_338);
    if (lVar7 == 0) {
      pcVar9 = (char *)0x0;
      uVar6 = 0;
    }
    else {
      pcVar9 = *(char **)(lVar7 + 8);
      uVar6 = *(undefined8 *)(lVar7 + 0x10);
    }
    uVar10 = 1;
    if (pcVar9 != (char *)0x0) {
      uVar10 = uVar6;
    }
    pcVar12 = "\n";
    if (pcVar9 != (char *)0x0) {
      pcVar12 = pcVar9;
    }
                    /* try { // try from 0016b422 to 0016b42e has its CatchHandler @ 0016bd23 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h8638b58448d95b8cE
              (&local_338,pcVar12,uVar10);
    local_508 = local_328;
    local_518 = local_338;
    uStack_510 = uStack_330;
                    /* try { // try from 0016b449 to 0016b49e has its CatchHandler @ 0016bd14 */
    bVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_002239e8
            )(&local_460,"equal-width",0xb);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hed9adfe4617c837cE
              (&local_338,&local_460,"format",6);
    lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he420c565d1c1c117E
                      ("format",6,&local_338);
    plVar11 = local_4b8;
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar7 + 8);
      unaff_R12 = *(undefined8 *)(lVar7 + 0x10);
    }
    local_418 = local_498;
    local_428 = CONCAT44(uStack_4a4,local_4a8);
    uStack_420 = CONCAT44(uStack_49c,uStack_4a0);
    local_410 = (undefined4)local_518;
    uStack_40c = local_518._4_4_;
    uStack_408 = (undefined4)uStack_510;
    uStack_404 = uStack_510._4_4_;
    local_400 = local_508;
    local_3f8 = lVar8;
    local_3f0 = unaff_R12;
    local_3e8 = bVar4;
    if ((bVar4 & lVar8 != 0) == 0) {
      if (local_4b0 < 2) {
        (*(code *)PTR__ZN6uu_seq6number13PreciseNumber3one17hbe78ba0f3eadaa72E_00223a00)(&local_3d8)
        ;
LAB_0016b5da:
                    /* try { // try from 0016b5da to 0016b5e7 has its CatchHandler @ 0016bcd3 */
        (*(code *)PTR__ZN6uu_seq6number13PreciseNumber3one17hbe78ba0f3eadaa72E_00223a00)(&local_398)
        ;
LAB_0016b5e8:
        uVar13 = local_388;
        lVar7 = 0;
        if ((long)local_388 < -0x7ffffffffffffffb) {
          lVar7 = local_388 + 0x8000000000000001;
        }
        if (lVar7 == 0) {
          if ((char)uStack_370 == '\x01') goto LAB_0016b615;
LAB_0016b740:
          lVar7 = local_4b0 - 1;
          if (local_4b0 == 0) {
            ppuVar14 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0021a590;
            local_4b0 = 0;
LAB_0016bc95:
                    /* try { // try from 0016bc95 to 0016bc9d has its CatchHandler @ 0016bcd8 */
            (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00223840)
                      (lVar7,local_4b0,ppuVar14);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_4c8 = local_4b8;
                    /* try { // try from 0016b760 to 0016b7c2 has its CatchHandler @ 0016bcd8 */
          (*(code *)
            PTR__ZN6uu_seq11numberparse86__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_uu_seq__number__PreciseNumber_GT_8from_str17h0a7ede5c0f7af91bE_002239f0
          )(&local_338,*(undefined8 *)(local_4b8[lVar7] + 8),
            *(undefined8 *)(local_4b8[lVar7] + 0x10));
          if ((int)local_338 == 2) {
            uVar3 = (undefined)uStack_330;
            (*(code *)
              PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002239f8
            )(&local_350,local_4c8[lVar7]);
            local_508 = local_340;
            local_518 = CONCAT44(uStack_34c,local_350);
            uStack_510 = CONCAT44(uStack_344,uStack_348);
            uStack_500 = CONCAT31(uStack_500._1_3_,uVar3);
            uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8df98ea5beea200aE(&local_518);
            goto LAB_0016b7c3;
          }
          local_478 = (undefined4)local_308;
          uStack_474 = local_308._4_4_;
          uStack_470 = (undefined4)uStack_300;
          uStack_46c = uStack_300._4_4_;
          local_488 = (undefined4)local_318;
          uStack_484 = local_318._4_4_;
          uStack_480 = (undefined4)uStack_310;
          uStack_47c = uStack_310._4_4_;
          local_498 = local_328;
          uStack_490 = (undefined4)uStack_320;
          uStack_48c = uStack_320._4_4_;
          local_4a8 = (int)local_338;
          uStack_4a4 = local_338._4_4_;
          uStack_4a0 = (undefined4)uStack_330;
          uStack_49c = uStack_330._4_4_;
          if (lVar8 == 0) {
            auVar16 = (*(code *)PTR__ZN6uu_seq16select_precision17h84cf8927d3a54a3bE_00223a08)
                                (&local_3d8,&local_398,&local_4a8);
            uStack_330 = auVar16._8_8_;
            local_518 = auVar16._0_8_;
            if (bVar4 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              if ((auVar16 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                uVar13 = uStack_330;
              }
              uVar6 = _ZN4core3cmp3Ord3max17h79a6793063d99ff6E
                                (CONCAT44(uStack_39c,uStack_3a0),uStack_360);
              lVar8 = _ZN4core3cmp3Ord3max17h79a6793063d99ff6E
                                (uVar6,CONCAT44(uStack_46c,uStack_470));
              lVar7 = uVar13 + 1;
              if (uVar13 == 0) {
                lVar7 = 0;
              }
              uVar13 = lVar7 + lVar8;
            }
            bVar15 = (auVar16 & (undefined  [16])0x1) == (undefined  [16])0x0;
            if (bVar15) {
              uStack_320._4_1_ = 2;
              uStack_320._3_1_ = 0;
              local_328 = 0;
              local_518 = 0;
            }
            else {
              uStack_320._3_1_ = 2;
              uStack_320._4_1_ = 0;
              local_328 = uVar13;
            }
            local_51a = local_338._2_1_;
            local_51c = (undefined2)local_338;
            bVar15 = !bVar15 && uStack_330 == 0;
            local_4e8 = 0;
            uStack_4e4 = 0;
            uStack_4e0 = 0;
            uStack_4dc = 0;
            local_4d8 = 1;
            local_4d0 = 0;
            uStack_4f0 = 1;
            local_318 = 0;
            uStack_320._2_1_ = 0;
            uStack_320._1_1_ = 0;
            uStack_320._0_1_ = 0;
          }
          else {
                    /* try { // try from 0016b87f to 0016b9b7 has its CatchHandler @ 0016bcb1 */
            _ZN6uucore8features6format19Format_LT_F_C_T_GT_5parse17h4331081ad9a72b1bE
                      (&local_338,lVar8,unaff_R12);
            local_518._0_3_ = (undefined3)(uStack_320 >> 0x28);
            uVar2 = local_518;
            local_518._2_1_ = (undefined)(uStack_320 >> 0x38);
            if (local_338 == 2) {
              local_338 = uStack_330;
              uStack_330 = local_328;
              uStack_320 = local_318;
              local_318 = uStack_310;
              local_518 = uVar2;
              uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc23a4c00967b272aE(&local_338);
              _ZN4core3ptr50drop_in_place_LT_uu_seq__number__PreciseNumber_GT_17h9d4f9d9c6f44184fE
                        (local_498,CONCAT44(uStack_48c,uStack_490));
              ppuVar14 = &
                         PTR__ZN4core3ptr58drop_in_place_LT_uucore__features__format__FormatError_GT_17h5a5ea9c07be0e41aE_0021a650
              ;
              goto LAB_0016b7cd;
            }
            local_51c = uStack_320._5_2_;
            local_51a = local_518._2_1_;
            uVar13 = 0;
            bVar15 = false;
            local_4d8 = local_2f8;
            uStack_4f0 = uStack_310;
            local_518 = local_338;
            local_4d0 = local_2f0;
            local_4e8 = (undefined4)local_308;
            uStack_4e4 = local_308._4_4_;
            uStack_4e0 = (undefined4)uStack_300;
            uStack_4dc = uStack_300._4_4_;
          }
          uStack_500 = CONCAT13(uStack_320._3_1_,
                                CONCAT12(uStack_320._2_1_,
                                         CONCAT11(uStack_320._1_1_,(undefined)uStack_320)));
          uStack_4fc = CONCAT13(local_51a,CONCAT21(local_51c,uStack_320._4_1_));
          local_338 = CONCAT44(uStack_3c4,local_3c8);
          uStack_320 = CONCAT44(uStack_3ac,uStack_3b0);
          uStack_310 = local_388;
          local_308 = uStack_380;
          uStack_300 = local_378;
          local_2f8 = uStack_370;
          local_2f0 = local_368;
          local_2e8 = (undefined4)local_498;
          uStack_2e4 = local_498._4_4_;
          uStack_2e0 = uStack_490;
          uStack_2dc = uStack_48c;
          local_2d8 = local_488;
          uStack_2d4 = uStack_484;
          uStack_2d0 = uStack_480;
          uStack_2cc = uStack_47c;
          local_2c8 = CONCAT44(uStack_474,local_478);
                    /* try { // try from 0016bbee to 0016bc0b has its CatchHandler @ 0016bca2 */
          uStack_510 = uStack_330;
          local_508 = local_328;
          local_4f8 = local_318;
          uStack_330 = CONCAT44(uStack_3bc,uStack_3c0);
          local_328 = CONCAT44(uStack_3b4,local_3b8);
          local_318 = CONCAT44(uStack_3a4,local_3a8);
          lVar7 = (*(code *)PTR__ZN6uu_seq9print_seq17hd8f134a0bd2a85e1E_00223a10)
                            (&local_338,uStack_420,local_418,CONCAT44(uStack_404,uStack_408),
                             local_400,&local_518,bVar15,uVar13);
          plVar11 = local_4c8;
          if (lVar7 == 0) {
LAB_0016bc2d:
            uVar6 = 0;
          }
          else {
            cVar5 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar7);
            if (cVar5 == '\v') {
                    /* try { // try from 0016bc25 to 0016bc39 has its CatchHandler @ 0016bca0 */
              _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hbedef271bd731043E(lVar7);
              goto LAB_0016bc2d;
            }
            uVar6 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h842103caaddd84ecE
                              (lVar7);
          }
          _ZN4core3ptr167drop_in_place_LT_uucore__features__format__Format_LT_uucore__features__format__num_format__Float_C__RF_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT__GT_17h10ba32ca73e4e6feE
                    (&local_518);
          _ZN4core3ptr39drop_in_place_LT_uu_seq__SeqOptions_GT_17h62b1a2b151fa4e05E(&local_428);
          _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u64_GT__GT_17h8f47eee04581b9b5E
                    (local_4c0,plVar11);
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h6d0652b0080590cdE
                    (&local_460);
          ppuVar14 = &
                     PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h2cab7978ea76da0cE_0021a5c8
          ;
          goto LAB_0016b81e;
        }
        if (lVar7 != 3) goto LAB_0016b740;
LAB_0016b615:
        if (local_4b0 < 2) {
          ppuVar14 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0021a578;
          lVar7 = 1;
          goto LAB_0016bc95;
        }
        local_4c8 = local_4b8;
                    /* try { // try from 0016b62d to 0016b666 has its CatchHandler @ 0016bcd8 */
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002239f8
        )(&local_518,local_4b8[1]);
        uStack_320 = local_508;
        uStack_330 = local_518;
        local_338 = 0x8000000000000000;
        uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8df98ea5beea200aE(&local_338);
LAB_0016b7c3:
        ppuVar14 = &
                   PTR__ZN4core3ptr44drop_in_place_LT_uu_seq__error__SeqError_GT_17hec68b593c2691446E_0021a510
        ;
LAB_0016b7cd:
        _ZN4core3ptr50drop_in_place_LT_uu_seq__number__PreciseNumber_GT_17h9d4f9d9c6f44184fE
                  (uVar13,uStack_380);
        plVar11 = local_4c8;
      }
      else {
        (*(code *)
          PTR__ZN6uu_seq11numberparse86__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_uu_seq__number__PreciseNumber_GT_8from_str17h0a7ede5c0f7af91bE_002239f0
        )(&local_338,*(undefined8 *)(*local_4b8 + 8),*(undefined8 *)(*local_4b8 + 0x10));
        if ((int)local_338 == 2) {
          uVar3 = (undefined)uStack_330;
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002239f8
          )(&local_4a8,*plVar11);
          local_508 = local_498;
          local_518 = CONCAT44(uStack_4a4,local_4a8);
          uStack_510 = CONCAT44(uStack_49c,uStack_4a0);
          uStack_500 = CONCAT31(uStack_500._1_3_,uVar3);
          uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8df98ea5beea200aE(&local_518);
          ppuVar14 = &
                     PTR__ZN4core3ptr44drop_in_place_LT_uu_seq__error__SeqError_GT_17hec68b593c2691446E_0021a510
          ;
          goto LAB_0016b7f7;
        }
        local_3d8 = (int)local_338;
        uStack_3d4 = local_338._4_4_;
        uStack_3d0 = (undefined4)uStack_330;
        uStack_3cc = uStack_330._4_4_;
        local_3c8 = (undefined4)local_328;
        uStack_3c4 = local_328._4_4_;
        uStack_3c0 = (undefined4)uStack_320;
        uStack_3bc = uStack_320._4_4_;
        local_3b8 = (undefined4)local_318;
        uStack_3b4 = local_318._4_4_;
        uStack_3b0 = (undefined4)uStack_310;
        uStack_3ac = uStack_310._4_4_;
        local_3a8 = (undefined4)local_308;
        uStack_3a4 = local_308._4_4_;
        uStack_3a0 = (undefined4)uStack_300;
        uStack_39c = uStack_300._4_4_;
        if (local_4b0 == 2) goto LAB_0016b5da;
                    /* try { // try from 0016b6c2 to 0016b71f has its CatchHandler @ 0016bcd3 */
        (*(code *)
          PTR__ZN6uu_seq11numberparse86__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_uu_seq__number__PreciseNumber_GT_8from_str17h0a7ede5c0f7af91bE_002239f0
        )(&local_338,*(undefined8 *)(plVar11[1] + 8),*(undefined8 *)(plVar11[1] + 0x10));
        if ((int)local_338 != 2) {
          local_398 = (int)local_338;
          uStack_394 = local_338._4_4_;
          uStack_390 = (undefined4)uStack_330;
          uStack_38c = uStack_330._4_4_;
          local_388 = local_328;
          uStack_380 = uStack_320;
          local_378 = local_318;
          uStack_370 = uStack_310;
          local_368 = local_308;
          uStack_360 = uStack_300;
          goto LAB_0016b5e8;
        }
        uVar3 = (undefined)uStack_330;
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002239f8
        )(&local_4a8,plVar11[1]);
        local_508 = local_498;
        local_518 = CONCAT44(uStack_4a4,local_4a8);
        uStack_510 = CONCAT44(uStack_49c,uStack_4a0);
        uStack_500 = CONCAT31(uStack_500._1_3_,uVar3);
        uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8df98ea5beea200aE(&local_518);
        ppuVar14 = &
                   PTR__ZN4core3ptr44drop_in_place_LT_uu_seq__error__SeqError_GT_17hec68b593c2691446E_0021a510
        ;
      }
      _ZN4core3ptr50drop_in_place_LT_uu_seq__number__PreciseNumber_GT_17h9d4f9d9c6f44184fE
                (CONCAT44(uStack_3c4,local_3c8),CONCAT44(uStack_3bc,uStack_3c0));
    }
    else {
      local_338 = 0x8000000000000002;
                    /* try { // try from 0016b51a to 0016b5d9 has its CatchHandler @ 0016bd02 */
      uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8df98ea5beea200aE(&local_338);
      ppuVar14 = &
                 PTR__ZN4core3ptr44drop_in_place_LT_uu_seq__error__SeqError_GT_17hec68b593c2691446E_0021a510
      ;
      plVar11 = local_4b8;
    }
LAB_0016b7f7:
    _ZN4core3ptr39drop_in_place_LT_uu_seq__SeqOptions_GT_17h62b1a2b151fa4e05E(&local_428);
    _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u64_GT__GT_17h8f47eee04581b9b5E
              (local_4c0,plVar11);
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h6d0652b0080590cdE
            (&local_460);
LAB_0016b81e:
  auVar16._8_8_ = ppuVar14;
  auVar16._0_8_ = uVar6;
  return auVar16;
}