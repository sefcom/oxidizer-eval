undefined  [16] _ZN7uu_join6uumain6uumain17h1b6d83c6f48ee96dE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  undefined uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined auVar12 [16];
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 local_528;
  ulong local_520;
  undefined local_518;
  undefined7 local_517;
  undefined uStack_510;
  undefined7 uStack_50f;
  undefined7 local_508;
  undefined uStack_501;
  undefined7 uStack_500;
  undefined local_4f8 [16];
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  
  (*(code *)PTR__ZN7uu_join6uu_app17h2d689a8b41cf12f0E_002393f8)(&local_460);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h7cd18d2507ff2cb6E
            (&local_180,&local_460,param_1,param_2);
  if (CONCAT44(uStack_17c,local_180) == -0x8000000000000000) {
    auVar12 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00239400
              )();
    return auVar12;
  }
  local_4c8 = local_150;
  local_4d8 = local_160;
  uStack_4d4 = uStack_15c;
  uStack_4d0 = uStack_158;
  uStack_4cc = uStack_154;
  local_4e8 = local_170;
  uStack_4e4 = uStack_16c;
  uStack_4e0 = uStack_168;
  uStack_4dc = uStack_164;
                    /* try { // try from 00175155 to 0017516a has its CatchHandler @ 0017565d */
  (*(code *)PTR__ZN7uu_join14parse_settings17h8cf47cd535767909E_00239408)(&local_460,local_4f8);
  local_580 = CONCAT44(uStack_45c,local_460);
  uStack_578 = CONCAT44(uStack_454,uStack_458);
  local_570 = CONCAT44(uStack_44c,uStack_450);
  auVar12._8_8_ = local_570;
  auVar12._0_8_ = uStack_578;
  if (local_580 == -0x8000000000000000) goto LAB_001755fd;
  local_528 = local_408;
  local_538 = (undefined4)local_418;
  uStack_534 = local_418._4_4_;
  uStack_530 = (undefined4)uStack_410;
  uStack_52c = uStack_410._4_4_;
  local_548 = local_428;
  uStack_544 = uStack_424;
  uStack_540 = (undefined4)uStack_420;
  uStack_53c = uStack_420._4_4_;
  uStack_558 = local_438;
  uStack_554 = uStack_434;
  uStack_550 = uStack_430;
  uStack_54c = uStack_42c;
  uStack_568 = uStack_448;
  uStack_564 = uStack_444;
  uStack_560 = uStack_440;
  uStack_55c = uStack_43c;
                    /* try { // try from 001751db to 001752eb has its CatchHandler @ 00175662 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0a3561c1fe3beb95E
            (&local_460,local_4f8,"file1",5);
  lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hed9f402bd0e7a7b2E
                    ("file1",5,&local_460);
  if (lVar7 == 0) {
    ppuVar11 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_002327c0;
LAB_0017562f:
                    /* try { // try from 0017562f to 00175634 has its CatchHandler @ 00175662 */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h0e11329e76906eaaE_00239328)(ppuVar11);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0a3561c1fe3beb95E
            (&local_460,local_4f8,"file2",5);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hed9f402bd0e7a7b2E
                    ("file2",5,&local_460);
  if (lVar8 == 0) {
    ppuVar11 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_002327d8;
    goto LAB_0017562f;
  }
  uVar9 = *(undefined8 *)(lVar7 + 8);
  uVar1 = *(undefined8 *)(lVar7 + 0x10);
  cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8d59285a30fd8affE
                    (uVar9,uVar1,
                     "-capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rsTried to shrink to a larger capacity/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/raw_vec.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/io/mod.rs"
                     ,1);
  if ((cVar5 != '\0') &&
     (cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8d59285a30fd8affE
                        (*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),
                         "-capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rsTried to shrink to a larger capacity/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/raw_vec.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/io/mod.rs"
                         ,1), cVar5 != '\0')) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hffccecc10e570152E(&local_180)
    ;
    uStack_450 = local_170;
    uStack_44c = uStack_16c;
    local_460 = local_180;
    uStack_45c = uStack_17c;
    uStack_458 = uStack_178;
    uStack_454 = uStack_174;
    uStack_448 = 1;
    uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5d0185bc8dd5466cE(&local_460);
                    /* try { // try from 001752ec to 001752f6 has its CatchHandler @ 0017565d */
    _ZN4core3ptr38drop_in_place_LT_uu_join__Settings_GT_17h9f47be3a5d5db85bE(&local_580);
    auVar12._8_8_ =
         &
         PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h38d3eb800182e62dE_00232828
    ;
    auVar12._0_8_ = uVar9;
    goto LAB_001755fd;
  }
  switch(CONCAT44(uStack_54c,uStack_550) ^ 0x8000000000000000) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0017534c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar12 = (*(code *)((long)&switchD_001753cf::switchdataD_0010b638 +
                        (long)(int)switchD_001753cf::switchdataD_0010b638))();
    return auVar12;
  default:
                    /* try { // try from 0017537a to 00175386 has its CatchHandler @ 00175662 */
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0ad05dcf4e8c4432E
              (&local_460,&uStack_550);
    uVar10 = CONCAT44(uStack_45c,local_460);
    local_508 = CONCAT43(uStack_454,uStack_458._1_3_);
    uStack_501 = (undefined)uStack_450;
    uStack_500 = (undefined7)(CONCAT44(uStack_44c,uStack_450) >> 8);
    uVar6 = (undefined)uStack_458;
    switch(uVar10 ^ 0x8000000000000000) {
    case 0:
      goto switchD_001753cf_caseD_0;
    default:
      goto switchD_001753cf_caseD_1;
    case 2:
      goto switchD_001753cf_caseD_2;
    case 3:
      goto switchD_001753cf_caseD_3;
    }
  case 2:
    uVar10 = 0x8000000000000002;
    break;
  case 3:
    uVar10 = 0x8000000000000003;
  }
  uVar6 = 0x38;
  switch(uVar10 ^ 0x8000000000000000) {
  case 0:
switchD_001753cf_caseD_0:
    uStack_410 = CONCAT44(uStack_52c,uStack_530);
    local_408 = local_528;
    uStack_420 = CONCAT44(uStack_53c,uStack_540);
    local_418 = CONCAT44(uStack_534,local_538);
    uStack_430 = uStack_550;
    uStack_42c = uStack_54c;
    local_428 = local_548;
    uStack_424 = uStack_544;
    uStack_440 = uStack_560;
    uStack_43c = uStack_55c;
    local_438 = uStack_558;
    uStack_434 = uStack_554;
    uStack_450 = (undefined4)local_570;
    uStack_44c = local_570._4_4_;
    uStack_448 = uStack_568;
    uStack_444 = uStack_564;
    local_460 = (undefined4)local_580;
    uStack_45c = local_580._4_4_;
    uStack_458 = (undefined4)uStack_578;
    uStack_454 = uStack_578._4_4_;
                    /* try { // try from 00175426 to 00175513 has its CatchHandler @ 00175658 */
    auVar12 = _ZN7uu_join4exec17h84507deb68976620E
                        (uVar9,uVar1,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),
                         &local_460,uVar6);
    break;
  default:
switchD_001753cf_caseD_1:
    local_518 = uVar6;
    local_517 = local_508;
    uStack_510 = uStack_501;
    uStack_50f = uStack_500;
    uVar2 = *(undefined8 *)(lVar8 + 8);
    uVar3 = *(undefined8 *)(lVar8 + 0x10);
    local_470 = CONCAT44(uStack_52c,uStack_530);
    uStack_468 = local_528;
    local_480 = CONCAT44(uStack_53c,uStack_540);
    uStack_478 = CONCAT44(uStack_534,local_538);
    local_490 = uStack_550;
    uStack_48c = uStack_54c;
    uStack_488 = local_548;
    uStack_484 = uStack_544;
    local_4a0 = uStack_560;
    uStack_49c = uStack_55c;
    uStack_498 = uStack_558;
    uStack_494 = uStack_554;
    local_4b0 = (undefined4)local_570;
    uStack_4ac = local_570._4_4_;
    uStack_4a8 = uStack_568;
    uStack_4a4 = uStack_564;
    local_4c0 = (undefined4)local_580;
    uStack_4bc = local_580._4_4_;
    uStack_4b8 = (undefined4)uStack_578;
    uStack_4b4 = uStack_578._4_4_;
    local_180 = CONCAT31(local_180._1_3_,1);
                    /* try { // try from 00175599 to 001755b2 has its CatchHandler @ 0017563c */
    local_520 = uVar10;
    _ZN6memchr6memmem13FinderBuilder25build_forward_with_ranker17h00ab6db1a626f082E
              (&local_460,&local_180,&local_520);
    (*(code *)PTR_memcpy_002392b0)(&local_180,&local_460,0x120);
                    /* try { // try from 001755d1 to 001755ec has its CatchHandler @ 00175637 */
    auVar12 = _ZN7uu_join4exec17h99a16e0e986e240aE(uVar9,uVar1,uVar2,uVar3,&local_4c0,&local_180);
                    /* try { // try from 001755ed to 001755fc has its CatchHandler @ 00175658 */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8146444ea6c0efb2E(&local_520);
    break;
  case 2:
switchD_001753cf_caseD_2:
    uStack_410 = CONCAT44(uStack_52c,uStack_530);
    local_408 = local_528;
    uStack_420 = CONCAT44(uStack_53c,uStack_540);
    local_418 = CONCAT44(uStack_534,local_538);
    uStack_430 = uStack_550;
    uStack_42c = uStack_54c;
    local_428 = local_548;
    uStack_424 = uStack_544;
    uStack_440 = uStack_560;
    uStack_43c = uStack_55c;
    local_438 = uStack_558;
    uStack_434 = uStack_554;
    uStack_450 = (undefined4)local_570;
    uStack_44c = local_570._4_4_;
    uStack_448 = uStack_568;
    uStack_444 = uStack_564;
    local_460 = (undefined4)local_580;
    uStack_45c = local_580._4_4_;
    uStack_458 = (undefined4)uStack_578;
    uStack_454 = uStack_578._4_4_;
    auVar12 = _ZN7uu_join4exec17h3549e6cfd5b8c4eaE
                        (uVar9,uVar1,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),
                         &local_460);
    break;
  case 3:
switchD_001753cf_caseD_3:
    uStack_410 = CONCAT44(uStack_52c,uStack_530);
    local_408 = local_528;
    uStack_420 = CONCAT44(uStack_53c,uStack_540);
    local_418 = CONCAT44(uStack_534,local_538);
    uStack_430 = uStack_550;
    uStack_42c = uStack_54c;
    local_428 = local_548;
    uStack_424 = uStack_544;
    uStack_440 = uStack_560;
    uStack_43c = uStack_55c;
    local_438 = uStack_558;
    uStack_434 = uStack_554;
    uStack_450 = (undefined4)local_570;
    uStack_44c = local_570._4_4_;
    uStack_448 = uStack_568;
    uStack_444 = uStack_564;
    local_460 = (undefined4)local_580;
    uStack_45c = local_580._4_4_;
    uStack_458 = (undefined4)uStack_578;
    uStack_454 = uStack_578._4_4_;
    auVar12 = _ZN7uu_join4exec17he72a5f97bdf4dbefE
                        (uVar9,uVar1,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),
                         &local_460);
  }
LAB_001755fd:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he0c483a964158d1eE
            (local_4f8);
  return auVar12;
}