undefined  [16]
_ZN11uu_realpath6uumain6uumain17h4951007969af279fE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  long lVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined auVar17 [16];
  long local_3c0;
  undefined **local_3b8;
  code *local_3b0;
  code *local_3a8;
  undefined8 local_3a0;
  undefined8 *local_398;
  code *local_390;
  undefined4 local_388;
  undefined4 local_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 local_364;
  undefined8 *local_360;
  code *pcStack_358;
  undefined8 local_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined local_320 [8];
  long local_318;
  long local_310;
  undefined local_308 [16];
  undefined8 *local_2f8;
  code *pcStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  (*(code *)PTR__ZN11uu_realpath6uu_app17h23198b2885553f83E_001f2fc0)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17he30c2dd8d847e14cE
            (&local_360,&local_2f8,param_1,param_2);
  local_374 = uStack_33c;
  uStack_370 = uStack_338;
  uStack_36c = uStack_334;
  uStack_368 = uStack_330;
  local_364 = local_32c;
  local_398 = local_360;
  local_390 = pcStack_358;
  local_388 = (undefined4)local_350;
  uVar13 = *(undefined8 *)PTR__ZN11uu_realpath9ARG_FILES17hb7f3293541c84ef7E_001f2fc8;
  uVar1 = *(undefined8 *)(PTR__ZN11uu_realpath9ARG_FILES17hb7f3293541c84ef7E_001f2fc8 + 8);
                    /* try { // try from 00155cca to 00155d63 has its CatchHandler @ 00156146 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h37d95d2df42b3eedE
            (&local_2f8,&local_398,uVar13,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hac41c44882bcb057E(&local_360,uVar13,uVar1);
  if (local_360 != (undefined8 *)0x0) {
    local_2c8 = uStack_330;
    uStack_2c4 = local_32c;
    uStack_2c0 = uStack_328;
    uStack_2bc = uStack_324;
    local_2d8 = (code *)CONCAT44(uStack_33c,uStack_340);
    uStack_2d0 = uStack_338;
    uStack_2cc = uStack_334;
    local_2e8 = (undefined8 **)CONCAT44(local_350._4_4_,(undefined4)local_350);
    uStack_2e0 = CONCAT44(uStack_344,uStack_348);
    local_2f8 = local_360;
    pcStack_2f0 = pcStack_358;
    _ZN4core4iter6traits8iterator8Iterator7collect17hdb759ab7422451e3E(local_320,&local_2f8);
                    /* try { // try from 00155d72 to 00155e42 has its CatchHandler @ 001560fb */
    cVar7 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f2fd8
            )(&local_398,*(undefined8 *)PTR__ZN11uu_realpath9OPT_STRIP17hea98d883e06261d4E_001f2fd0,
              *(undefined8 *)(PTR__ZN11uu_realpath9OPT_STRIP17hea98d883e06261d4E_001f2fd0 + 8));
    cVar8 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f2fd8
            )(&local_398,*(undefined8 *)PTR__ZN11uu_realpath8OPT_ZERO17h541106c6f648941bE_001f2fe0,
              *(undefined8 *)(PTR__ZN11uu_realpath8OPT_ZERO17h541106c6f648941bE_001f2fe0 + 8));
    uVar16 = 10;
    if (cVar8 != '\0') {
      uVar16 = 0;
    }
    cVar9 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f2fd8
            )(&local_398,*(undefined8 *)PTR__ZN11uu_realpath9OPT_QUIET17h2de9e0ed8df49daeE_001f2fe8,
              *(undefined8 *)(PTR__ZN11uu_realpath9OPT_QUIET17h2de9e0ed8df49daeE_001f2fe8 + 8));
    cVar10 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f2fd8
             )(&local_398,
               *(undefined8 *)PTR__ZN11uu_realpath11OPT_LOGICAL17he80554cf4834d4bbE_001f2ff0,
               *(undefined8 *)(PTR__ZN11uu_realpath11OPT_LOGICAL17he80554cf4834d4bbE_001f2ff0 + 8));
    cVar11 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f2fd8
             )(&local_398,"canonicalize-existing",0x15);
    cVar8 = '\x01';
    if (cVar11 == '\0') {
      cVar8 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f2fd8
              )(&local_398,"canonicalize-missing",0x14);
      cVar8 = cVar8 * '\x02';
    }
    cVar11 = '\0';
    if (cVar7 == '\0') {
      cVar11 = cVar10 + '\x01';
    }
    (*(code *)PTR__ZN11uu_realpath24prepare_relative_options17h41375d3aff00cd98E_001f2ff8)
              (&local_2f8,&local_398,cVar8,cVar11);
    pcVar6 = local_2d8;
    lVar5 = uStack_2e0;
    ppuVar4 = local_2e8;
    pcVar2 = pcStack_2f0;
    puVar3 = local_2f8;
    if (local_2f8 == (undefined8 *)0x8000000000000001) {
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17hd0c0a7bace92335aE
                (local_320);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2cf72d9c1ed05912E
                (&local_398);
    }
    else {
      if (local_310 != 0) {
        local_3a0 = CONCAT44(uStack_2cc,uStack_2d0);
        local_3b0 = pcStack_2f0;
        if (local_2f8 == (undefined8 *)&DAT_8000000000000000) {
          local_3b0 = (code *)0x0;
        }
        local_3a8 = (code *)0x0;
        if (uStack_2e0 != -0x8000000000000000) {
          local_3a8 = local_2d8;
        }
        if (cVar9 == '\0') {
          lVar15 = 0;
          do {
            uVar13 = (*(code *)PTR__ZN11uu_realpath12resolve_path17h552c68346491a6aaE_001f3000)
                               (*(undefined8 *)(local_318 + 8 + lVar15),
                                *(undefined8 *)(local_318 + 0x10 + lVar15),uVar16,cVar11,cVar8,
                                local_3b0,ppuVar4,local_3a8,local_3a0);
            lVar14 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h3d4d92ecb6af89beE
                               (uVar13,*(undefined8 *)(local_318 + 8 + lVar15),
                                *(undefined8 *)(local_318 + 0x10 + lVar15));
            if (lVar14 == 0) {
                    /* try { // try from 00155fc0 to 0015601a has its CatchHandler @ 00156116 */
              _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h57eea4118bcf36d2E
                        (0,&
                           PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17hc198d1328b4d3cc3E_001ebb08
                        );
            }
            else {
              local_3b8 = &
                          PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17hc198d1328b4d3cc3E_001ebb08
              ;
              local_3c0 = lVar14;
              uVar12 = _ZN6uucore4mods5error6UError4code17h03c463a1fb15bbeaE();
                    /* try { // try from 00156036 to 001560d7 has its CatchHandler @ 00156100 */
              (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f3008)
                        (uVar12);
              auVar17 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f2f98)();
              local_360 = (undefined8 *)local_308;
              pcStack_358 = 
              _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hee44077f1658e718E;
              local_350 = &local_3c0;
              uStack_348 = 0x1598b0;
              uStack_344 = 0;
              local_2f8 = (undefined8 *)&DAT_001eb9b0;
              pcStack_2f0 = (code *)0x3;
              local_2d8 = (code *)0x0;
              uStack_2e0 = 2;
              local_2e8 = &local_360;
              local_308 = auVar17;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f2fa0)(&local_2f8);
                    /* try { // try from 001560e2 to 001560e6 has its CatchHandler @ 00156116 */
              _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hf6e261a66b2d911aE
                        (local_3c0,local_3b8);
            }
            lVar15 = lVar15 + 0x18;
          } while (local_310 * 0x18 != lVar15);
        }
        else {
          lVar15 = 0;
          do {
                    /* try { // try from 00155f2a to 00155f57 has its CatchHandler @ 00156114 */
            uVar13 = (*(code *)PTR__ZN11uu_realpath12resolve_path17h552c68346491a6aaE_001f3000)
                               (*(undefined8 *)(local_318 + 8 + lVar15),
                                *(undefined8 *)(local_318 + 0x10 + lVar15),uVar16,cVar11,cVar8,
                                local_3b0,ppuVar4,local_3a8,local_3a0);
            _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h3073fe51a1703a1eE
                      (uVar13);
            lVar15 = lVar15 + 0x18;
          } while (local_310 * 0x18 != lVar15);
        }
      }
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h6793401050955f40E
                (lVar5,pcVar6);
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h6793401050955f40E
                (puVar3,pcVar2);
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17hd0c0a7bace92335aE
                (local_320);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2cf72d9c1ed05912E
                (&local_398);
      pcStack_2f0 = (code *)0x0;
    }
    auVar17._8_8_ = ppuVar4;
    auVar17._0_8_ = pcStack_2f0;
    return auVar17;
  }
                    /* try { // try from 001560ec to 001560f8 has its CatchHandler @ 00156146 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f3010)
            (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001eb9e0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}