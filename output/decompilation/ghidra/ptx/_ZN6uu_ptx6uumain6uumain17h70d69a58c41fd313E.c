undefined  [16] _ZN6uu_ptx6uumain6uumain17h70d69a58c41fd313E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined local_4e0 [8];
  long local_4d8;
  long local_4d0;
  undefined8 local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 uStack_4b8;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 local_4a0;
  long local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined local_458 [24];
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined8 local_400;
  long local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  long local_370 [2];
  undefined8 local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined local_340 [24];
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
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  
  (*(code *)PTR__ZN6uu_ptx6uu_app17h769fde6fd203379aE_0042c2f8)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h2025ffa7a5bdc906E
            (&local_3f0,&local_2e8,param_1,param_2);
  if (local_3f0 == -0x8000000000000000) {
    auVar5 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0042c300
             )();
    return auVar5;
  }
  local_470 = local_3d0;
  uStack_46c = uStack_3cc;
  uStack_468 = uStack_3c8;
  uStack_464 = uStack_3c4;
  local_480 = local_3e0;
  uStack_47c = uStack_3dc;
  uStack_478 = uStack_3d8;
  uStack_474 = uStack_3d4;
  local_490 = local_3f0;
  local_488 = local_3e8;
  uVar3 = *(undefined8 *)PTR__ZN6uu_ptx7options4FILE17h4728e06c059c85afE_0042c308;
  uVar4 = *(undefined8 *)(PTR__ZN6uu_ptx7options4FILE17h4728e06c059c85afE_0042c308 + 8);
                    /* try { // try from 0026307d to 00263131 has its CatchHandler @ 00263549 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h864bac169c66e408E
            (&local_2e8,&local_490,uVar3,uVar4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h699c379ce761fce9E
            (&local_3f0,uVar3,uVar4,&local_2e8);
  if (local_3f0 == 0) {
    puVar2 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E_0042c2b0)(8,0x18);
      goto LAB_002634d4;
    }
                    /* try { // try from 00263147 to 00263156 has its CatchHandler @ 00263509 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h74d88cca8ed314ccE(&local_2e8)
    ;
    *(ulong *)(puVar2 + 4) = CONCAT44(uStack_2d4,local_2d8);
    *puVar2 = local_2e8;
    puVar2[1] = uStack_2e4;
    puVar2[2] = uStack_2e0;
    puVar2[3] = uStack_2dc;
                    /* try { // try from 0026317f to 00263190 has its CatchHandler @ 00263549 */
    _ZN5alloc5slice4hack8into_vec17ha6afe10c25aac0c3E(local_4e0,puVar2,1);
  }
  else {
    _ZN82__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__clone__Clone_GT_5clone17h83e32bfe53941955E
              (&local_2e8,&local_3f0);
    local_328 = local_2e8;
    uStack_324 = uStack_2e4;
    uStack_320 = uStack_2e0;
    uStack_31c = uStack_2dc;
    local_318 = local_2d8;
    uStack_314 = uStack_2d4;
    uStack_310 = uStack_2d0;
    uStack_30c = uStack_2cc;
    local_308 = local_2c8;
    uStack_304 = uStack_2c4;
    uStack_300 = uStack_2c0;
    uStack_2fc = uStack_2bc;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h54a09cbba16345a6E
              (local_4e0,&local_328);
  }
                    /* try { // try from 00263191 to 002631a3 has its CatchHandler @ 0026353a */
  (*(code *)PTR__ZN6uu_ptx10get_config17hbc4f2f006b9116e7E_0042c310)(&local_2e8,&local_490);
  uVar3 = CONCAT44(uStack_2dc,uStack_2e0);
  uVar4 = CONCAT44(uStack_2d4,local_2d8);
  if (CONCAT44(uStack_2e4,local_2e8) != -0x8000000000000000) {
    local_400 = local_290;
    local_410 = local_2a0;
    uStack_40c = uStack_29c;
    uStack_408 = uStack_298;
    uStack_404 = uStack_294;
    local_420 = local_2b0;
    uStack_41c = uStack_2ac;
    uStack_418 = uStack_2a8;
    uStack_414 = uStack_2a4;
    local_430 = uStack_2c0;
    uStack_42c = uStack_2bc;
    uStack_428 = local_2b8;
    uStack_424 = uStack_2b4;
    local_440 = uStack_2d0;
    uStack_43c = uStack_2cc;
    uStack_438 = local_2c8;
    uStack_434 = uStack_2c4;
                    /* try { // try from 0026322d to 00263247 has its CatchHandler @ 00263528 */
    (*(code *)PTR__ZN6uu_ptx10WordFilter3new17h834513af9e48d5eeE_0042c318)
              (&local_2e8,&local_490,local_458);
    uVar3 = CONCAT44(uStack_2dc,uStack_2e0);
    uVar4 = CONCAT44(uStack_2d4,local_2d8);
    if (CONCAT44(uStack_2e4,local_2e8) != -0x8000000000000000) {
      local_378 = local_270;
      local_388 = local_280;
      uStack_380 = uStack_278;
      local_398 = local_290;
      uStack_390 = uStack_288;
      local_3a8 = local_2a0;
      uStack_3a4 = uStack_29c;
      uStack_3a0 = uStack_298;
      uStack_39c = uStack_294;
      local_3b8 = local_2b0;
      uStack_3b4 = uStack_2ac;
      uStack_3b0 = uStack_2a8;
      uStack_3ac = uStack_2a4;
      uStack_3c8 = uStack_2c0;
      uStack_3c4 = uStack_2bc;
      local_3c0 = local_2b8;
      uStack_3bc = uStack_2b4;
      uStack_3d8 = uStack_2d0;
      uStack_3d4 = uStack_2cc;
      local_3d0 = local_2c8;
      uStack_3cc = uStack_2c4;
                    /* try { // try from 002632fb to 00263322 has its CatchHandler @ 00263516 */
      (*(code *)PTR__ZN6uu_ptx10read_input17h3799c9cd7e5fae81E_0042c320)
                (&local_2e8,local_4d8,local_4d0,local_458);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hc396743c958a8c80E
                (&local_4c8,&local_2e8);
      uVar4 = uStack_4b8;
      uVar3 = CONCAT44(uStack_4bc,uStack_4c0);
      if (local_4c8 != 0) {
        local_348 = local_4a0;
        local_358 = local_4b0;
        uStack_354 = uStack_4ac;
        uStack_350 = uStack_4a8;
        uStack_34c = uStack_4a4;
        local_370[0] = local_4c8;
        local_360 = uStack_4b8;
                    /* try { // try from 0026336d to 00263392 has its CatchHandler @ 002634f7 */
        (*(code *)PTR__ZN6uu_ptx15create_word_set17ha43c71debbb1b6c6E_0042c328)
                  (local_340,local_458,&local_3f0,local_370);
        if (((char)local_400 == '\0') && (local_4d0 == 2)) {
          local_4d0 = 1;
          local_4c8 = *(long *)(local_4d8 + 0x18);
          if (local_4c8 == -0x8000000000000000) {
                    /* try { // try from 002634c7 to 002634d3 has its CatchHandler @ 002634e5 */
            (*(code *)PTR__ZN4core6option13unwrap_failed17h0e11329e76906eaaE_0042c338)
                      (&DAT_003eadf0);
LAB_002634d4:
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uStack_4c0 = *(undefined4 *)(local_4d8 + 0x20);
          uStack_4bc = *(undefined4 *)(local_4d8 + 0x24);
          uStack_4b8 = *(undefined8 *)(local_4d8 + 0x28);
        }
        else {
                    /* try { // try from 00263413 to 0026341f has its CatchHandler @ 002634e5 */
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h74d88cca8ed314ccE
                    (&local_2e8);
          uStack_4b8 = CONCAT44(uStack_2d4,local_2d8);
          local_4c8 = CONCAT44(uStack_2e4,local_2e8);
          uStack_4c0 = uStack_2e0;
          uStack_4bc = uStack_2dc;
        }
                    /* try { // try from 00263444 to 00263461 has its CatchHandler @ 002634d6 */
        auVar5 = (*(code *)PTR__ZN6uu_ptx24write_traditional_output17h994b7c7d26d6c70fE_0042c330)
                           (local_458,local_370,local_340,CONCAT44(uStack_4bc,uStack_4c0),uStack_4b8
                           );
                    /* try { // try from 00263462 to 00263471 has its CatchHandler @ 002634e5 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9bf6ad007f06787bE(&local_4c8);
                    /* try { // try from 00263472 to 0026347e has its CatchHandler @ 002634f7 */
        _ZN4core3ptr84drop_in_place_LT_alloc__collections__btree__set__BTreeSet_LT_uu_ptx__WordRef_GT__GT_17h769ae90a68da11f0E
                  (local_340);
                    /* try { // try from 0026347f to 0026348b has its CatchHandler @ 00263516 */
        _ZN4core3ptr108drop_in_place_LT_std__collections__hash__map__HashMap_LT_alloc__string__String_C_uu_ptx__FileContent_GT__GT_17h39bd43f06bcbad41E
                  (local_370);
                    /* try { // try from 0026348c to 00263498 has its CatchHandler @ 00263528 */
        _ZN4core3ptr39drop_in_place_LT_uu_ptx__WordFilter_GT_17h81a74b3f80d3fda1E(&local_3f0);
                    /* try { // try from 00263499 to 002634a5 has its CatchHandler @ 0026353a */
        _ZN4core3ptr35drop_in_place_LT_uu_ptx__Config_GT_17h6e90df535937af8fE(local_458);
                    /* try { // try from 002634a6 to 002634c4 has its CatchHandler @ 00263549 */
        _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h958462a3e0e95c8dE
                  (local_4e0);
        goto LAB_002633f4;
      }
                    /* try { // try from 002633d0 to 002633dc has its CatchHandler @ 00263528 */
      _ZN4core3ptr39drop_in_place_LT_uu_ptx__WordFilter_GT_17h81a74b3f80d3fda1E(&local_3f0);
    }
                    /* try { // try from 002633dd to 002633e9 has its CatchHandler @ 0026353a */
    _ZN4core3ptr35drop_in_place_LT_uu_ptx__Config_GT_17h6e90df535937af8fE(local_458);
  }
                    /* try { // try from 002633ea to 002633f3 has its CatchHandler @ 00263549 */
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h958462a3e0e95c8dE
            (local_4e0);
LAB_002633f4:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hc3045b61d51b3b09E
            (&local_490);
  return auVar5;
}