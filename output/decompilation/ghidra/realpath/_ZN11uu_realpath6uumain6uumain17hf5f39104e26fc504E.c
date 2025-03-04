undefined  [16]
_ZN11uu_realpath6uumain6uumain17hf5f39104e26fc504E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined auVar14 [16];
  undefined *local_430;
  undefined8 local_428;
  undefined **local_420;
  undefined local_418 [16];
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined *local_3e8;
  undefined *local_3e0;
  undefined8 *local_3d8;
  code *local_3d0;
  undefined4 local_3c8;
  undefined4 local_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 local_3a4;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 local_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined local_360 [8];
  undefined *local_358;
  long local_350;
  undefined local_348 [16];
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined *local_2f8;
  undefined8 local_2f0;
  undefined **local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  
  (*(code *)PTR__ZN11uu_realpath6uu_app17hb0ffbeae13444ba5E_002273b8)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h7b8b03d6141a8787E
            (&local_3a0,&local_2f8,param_1,param_2);
  if (local_3a0 == (undefined8 *)0x8000000000000000) {
    local_2f0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5baf976cfb5a61c3E(uStack_398,1);
    ppuVar12 = &
               PTR__ZN4core3ptr58drop_in_place_LT_uucore__mods__error__ClapErrorWrapper_GT_17h6d53558137d31371E_00220eb8
    ;
  }
  else {
    local_3b4 = uStack_37c;
    uStack_3b0 = uStack_378;
    uStack_3ac = uStack_374;
    uStack_3a8 = uStack_370;
    local_3a4 = local_36c;
    local_3d8 = local_3a0;
    local_3d0 = uStack_398;
    local_3c8 = (undefined4)local_390;
    uVar13 = *(undefined8 *)PTR__ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E_002273c0;
    uVar11 = *(undefined8 *)(PTR__ZN11uu_realpath9ARG_FILES17h0ac2f48b74b0f320E_002273c0 + 8);
                    /* try { // try from 0016b404 to 0016b49a has its CatchHandler @ 0016b861 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h416337ccbd5dbc14E
              (&local_2f8,&local_3d8,uVar13,uVar11);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h7356003a6c200bffE
              (&local_3a0,uVar13,uVar11,&local_2f8);
    if (local_3a0 == (undefined8 *)0x0) {
                    /* try { // try from 0016b84d to 0016b859 has its CatchHandler @ 0016b861 */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h0e11329e76906eaaE_00227408)
                (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00220e68);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_308 = uStack_370;
    uStack_304 = local_36c;
    uStack_300 = uStack_368;
    uStack_2fc = uStack_364;
    local_318 = uStack_380;
    uStack_314 = uStack_37c;
    uStack_310 = uStack_378;
    uStack_30c = uStack_374;
    local_328 = (undefined4)local_390;
    uStack_324 = local_390._4_4_;
    uStack_320 = uStack_388;
    uStack_31c = uStack_384;
    local_338 = (undefined4)local_3a0;
    uStack_334 = local_3a0._4_4_;
    uStack_330 = (undefined4)uStack_398;
    uStack_32c = uStack_398._4_4_;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h23f5f70296f3017dE
              (local_360,&local_338);
                    /* try { // try from 0016b4a9 to 0016b576 has its CatchHandler @ 0016b866 */
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002273d0
            )(&local_3d8,*(undefined8 *)PTR__ZN11uu_realpath9OPT_STRIP17ha2783a6f0cb5ee11E_002273c8,
              *(undefined8 *)(PTR__ZN11uu_realpath9OPT_STRIP17ha2783a6f0cb5ee11E_002273c8 + 8));
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002273d0
            )(&local_3d8,*(undefined8 *)PTR__ZN11uu_realpath8OPT_ZERO17h1b943b2f1083bf62E_002273d8,
              *(undefined8 *)(PTR__ZN11uu_realpath8OPT_ZERO17h1b943b2f1083bf62E_002273d8 + 8));
    uVar13 = 10;
    if (cVar4 != '\0') {
      uVar13 = 0;
    }
    cVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002273d0
            )(&local_3d8,*(undefined8 *)PTR__ZN11uu_realpath9OPT_QUIET17h9225b410354dbc8bE_002273e0,
              *(undefined8 *)(PTR__ZN11uu_realpath9OPT_QUIET17h9225b410354dbc8bE_002273e0 + 8));
    cVar6 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002273d0
            )(&local_3d8,
              *(undefined8 *)PTR__ZN11uu_realpath11OPT_LOGICAL17hbce69eac99b6145fE_002273e8,
              *(undefined8 *)(PTR__ZN11uu_realpath11OPT_LOGICAL17hbce69eac99b6145fE_002273e8 + 8));
    cVar7 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002273d0
            )(&local_3d8,"canonicalize-existing",0x15);
    cVar4 = '\x01';
    if (cVar7 == '\0') {
      cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002273d0
              )(&local_3d8,"canonicalize-missing",0x14);
      cVar4 = cVar4 * '\x02';
    }
    cVar7 = '\0';
    if (cVar3 == '\0') {
      cVar7 = cVar6 + '\x01';
    }
    (*(code *)PTR__ZN11uu_realpath24prepare_relative_options17hce8b705a83476ef9E_002273f0)
              (&local_2f8,&local_3d8,cVar4,cVar7);
    ppuVar12 = local_2e8;
    if (local_2f8 == (undefined *)0x8000000000000001) {
                    /* try { // try from 0016b5a1 to 0016b5ad has its CatchHandler @ 0016b861 */
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h46da251bdeece735E
                (local_360);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h0936fb64c2ae8dd7E
                (&local_3d8);
    }
    else {
      local_3f8 = local_2d0;
      local_408 = (undefined4)local_2e0;
      uStack_404 = local_2e0._4_4_;
      uStack_400 = (undefined4)uStack_2d8;
      uStack_3fc = uStack_2d8._4_4_;
      local_430 = local_2f8;
      local_428 = local_2f0;
      local_420 = local_2e8;
      local_3e0 = local_358 + local_350 * 0x18;
      local_3e8 = local_358;
      lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h81084d37048fee0eE
                        (&local_3e8);
      puVar2 = PTR__ZN11uu_realpath12resolve_path17h12f80bacada43346E_002273f8;
      if (lVar9 != 0) {
        if (cVar5 == '\0') {
          ppuVar12 = &local_3e8;
          do {
            uVar11 = 0;
            if (local_430 != (undefined *)0x8000000000000000) {
              uVar11 = local_428;
            }
            uVar10 = 0;
            if (CONCAT44(uStack_404,local_408) != -0x8000000000000000) {
              uVar10 = CONCAT44(uStack_3fc,uStack_400);
            }
                    /* try { // try from 0016b747 to 0016b779 has its CatchHandler @ 0016b881 */
            uVar11 = (*(code *)PTR__ZN11uu_realpath12resolve_path17h12f80bacada43346E_002273f8)
                               (*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),uVar13,
                                cVar7,cVar4,uVar11,local_420,uVar10,local_3f8);
            auVar14 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h051db6d61166b42eE
                                (uVar11,lVar9);
            if (auVar14._0_8_ != 0) {
                    /* try { // try from 0016b789 to 0016b838 has its CatchHandler @ 0016b86d */
              local_418 = auVar14;
              uVar8 = (**(code **)(auVar14._8_8_ + 0x60))(auVar14._0_8_);
              (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00227400)
                        (uVar8);
              auVar14 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00227398)();
              local_3a0 = (undefined8 *)local_348;
              uStack_398 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h87f610677bb13b0cE
              ;
              local_390 = local_418;
              uStack_388 = 0x16e220;
              uStack_384 = 0;
              local_2f8 = &DAT_00220e38;
              local_2f0 = 3;
              uStack_2d8 = 0;
              local_2e8 = (undefined **)&local_3a0;
              local_2e0 = 2;
              local_348 = auVar14;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_002273a0)(&local_2f8);
                    /* try { // try from 0016b843 to 0016b847 has its CatchHandler @ 0016b881 */
              _ZN4core3ptr118drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Sync_u2b_core__marker__Send_GT__GT_17h234f35a2ffb064b3E
                        (local_418._0_8_,local_418._8_8_);
            }
            lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h81084d37048fee0eE
                              (ppuVar12);
          } while (lVar9 != 0);
        }
        else {
          ppuVar12 = &local_3e8;
          do {
            uVar11 = 0;
            if (local_430 != (undefined *)0x8000000000000000) {
              uVar11 = local_428;
            }
            uVar10 = 0;
            if (CONCAT44(uStack_404,local_408) != -0x8000000000000000) {
              uVar10 = CONCAT44(uStack_3fc,uStack_400);
            }
                    /* try { // try from 0016b677 to 0016b6a3 has its CatchHandler @ 0016b86b */
            uVar11 = (*(code *)puVar2)(*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),
                                       uVar13,cVar7,cVar4,uVar11,local_420,uVar10,local_3f8);
            _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc7b44fbfad25f6f6E
                      (uVar11);
            lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h81084d37048fee0eE
                              (ppuVar12);
          } while (lVar9 != 0);
        }
      }
                    /* try { // try from 0016b6b4 to 0016b6bd has its CatchHandler @ 0016b85c */
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hb958e3bcaa0fe370E
                (&local_408);
                    /* try { // try from 0016b6be to 0016b6c7 has its CatchHandler @ 0016b866 */
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hb958e3bcaa0fe370E
                (&local_430);
                    /* try { // try from 0016b6c8 to 0016b6d4 has its CatchHandler @ 0016b861 */
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h46da251bdeece735E
                (local_360);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h0936fb64c2ae8dd7E
                (&local_3d8);
      local_2f0 = 0;
    }
  }
  auVar14._8_8_ = ppuVar12;
  auVar14._0_8_ = local_2f0;
  return auVar14;
}