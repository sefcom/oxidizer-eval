undefined8 _ZN7uu_join6uumain6uumain17h8d1d569db9477de2E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 local_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
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
  uint *local_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
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
  
  (*(code *)PTR__ZN7uu_join6uu_app17hf0c646455b56e430E_00204fb0)(&local_460);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h6344f1457e8c4b42E
            (&local_180,&local_460,param_1,param_2);
  local_4c8 = local_150;
  local_4d8 = local_160;
  uStack_4d4 = uStack_15c;
  uStack_4d0 = uStack_158;
  uStack_4cc = uStack_154;
  local_4e8 = local_170;
  uStack_4e4 = uStack_16c;
  uStack_4e0 = uStack_168;
  uStack_4dc = uStack_164;
                    /* try { // try from 00165dc8 to 00165ddd has its CatchHandler @ 0016630f */
  (*(code *)PTR__ZN7uu_join14parse_settings17ha7f529424dcbcc67E_00204fc0)(&local_460,local_4f8);
  local_568 = CONCAT44(uStack_45c,local_460);
  uVar6 = CONCAT44(uStack_454,uStack_458);
  if (local_568 == -0x8000000000000000) goto LAB_001662b4;
  local_510 = local_408;
  local_520 = (undefined4)local_418;
  uStack_51c = local_418._4_4_;
  uStack_518 = (undefined4)uStack_410;
  uStack_514 = uStack_410._4_4_;
  local_530 = local_428;
  uStack_52c = uStack_424;
  uStack_528 = (undefined4)uStack_420;
  uStack_524 = uStack_420._4_4_;
  uStack_540 = uStack_438;
  uStack_53c = uStack_434;
  uStack_538 = uStack_430;
  uStack_534 = uStack_42c;
  uStack_550 = uStack_448;
  uStack_54c = uStack_444;
  uStack_548 = uStack_440;
  uStack_544 = uStack_43c;
  local_558 = local_450;
                    /* try { // try from 00165e59 to 00166024 has its CatchHandler @ 00166314 */
  uStack_560 = uVar6;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h044ef7089f501803E
            (&local_460,local_4f8,"file1");
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h303782eb8d86c058E
                    ("file1",&local_460);
  if (lVar4 == 0) {
    ppuVar10 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001fd4d8;
LAB_001662e6:
                    /* try { // try from 001662e6 to 001662eb has its CatchHandler @ 00166314 */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00204ef8)(ppuVar10);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h044ef7089f501803E
            (&local_460,local_4f8,"file2");
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h303782eb8d86c058E
                    ("file2",&local_460);
  if (lVar5 == 0) {
    ppuVar10 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001fd4f0;
    goto LAB_001662e6;
  }
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6dfc583ec70d37c7E
                    (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),
                     "-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
                     ,1);
  if ((cVar3 != '\0') &&
     (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6dfc583ec70d37c7E
                        (*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10),
                         "-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
                         ,1), cVar3 != '\0')) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h2e3148bc2a0eecbcE
              (&local_180,"both files cannot be standard input",0x23);
    local_450 = (uint *)CONCAT44(uStack_16c,local_170);
    local_460 = local_180;
    uStack_45c = uStack_17c;
    uStack_458 = uStack_178;
    uStack_454 = uStack_174;
    uStack_448 = 1;
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha572905631bde212E(&local_460);
    _ZN4core3ptr38drop_in_place_LT_uu_join__Settings_GT_17ha1256ac33370452fE(&local_568);
    goto LAB_001662b4;
  }
  uVar12 = CONCAT44(uStack_534,uStack_538);
  uVar8 = uVar12 ^ 0x8000000000000000;
  uVar11 = 1;
  if (uVar8 < 4) {
    uVar11 = uVar8;
  }
  switch(uVar8) {
  case 0:
    uVar7 = (ulong)(byte)local_530;
    uVar11 = (ulong)CONCAT43(uStack_52c,local_530._1_3_);
    puVar9 = (uint *)CONCAT44(uStack_524,uStack_528);
    switch(uVar8) {
    case 0:
      goto switchD_0016607f_caseD_0;
    case 2:
      goto switchD_0016607f_caseD_2;
    case 3:
      goto switchD_0016607f_caseD_3;
    }
    goto switchD_0016607f_caseD_1;
  default:
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h950c0b3c5b783c8fE
              (&local_460,CONCAT44(uStack_52c,local_530),CONCAT44(uStack_524,uStack_528));
    uVar12 = CONCAT44(uStack_45c,local_460);
    uVar7 = (ulong)(byte)uStack_458;
    uVar11 = (ulong)CONCAT43(uStack_454,uStack_458._1_3_);
    puVar9 = local_450;
    switch(uVar12 ^ 0x8000000000000000) {
    case 0:
      goto switchD_0016607f_caseD_0;
    default:
      goto switchD_0016607f_caseD_1;
    case 2:
      goto switchD_0016607f_caseD_2;
    case 3:
      goto switchD_0016607f_caseD_3;
    }
  case 2:
    uVar12 = 0x8000000000000002;
    break;
  case 3:
    uVar12 = 0x8000000000000003;
  }
  uVar8 = uVar12 ^ 0x8000000000000000;
  uVar7 = 1;
  if (uVar8 < 4) {
    uVar7 = uVar8;
  }
  puVar9 = &switchD_0016607f::switchdataD_00118b30;
  switch(uVar8) {
  case 0:
switchD_0016607f_caseD_0:
    uStack_410 = CONCAT44(uStack_514,uStack_518);
    local_408 = local_510;
    uStack_420 = CONCAT44(uStack_524,uStack_528);
    local_418 = CONCAT44(uStack_51c,local_520);
    uStack_430 = uStack_538;
    uStack_42c = uStack_534;
    local_428 = local_530;
    uStack_424 = uStack_52c;
    uStack_440 = uStack_548;
    uStack_43c = uStack_544;
    uStack_438 = uStack_540;
    uStack_434 = uStack_53c;
    local_450 = local_558;
    uStack_448 = uStack_550;
    uStack_444 = uStack_54c;
    local_460 = (undefined4)local_568;
    uStack_45c = local_568._4_4_;
    uStack_458 = (undefined4)uStack_560;
    uStack_454 = uStack_560._4_4_;
                    /* try { // try from 001660df to 001661cc has its CatchHandler @ 0016630d */
    uVar6 = _ZN7uu_join4exec17h240f3fcdcfc58a54E
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),
                       *(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10),&local_460,
                       uVar7 & 0xff);
    break;
  default:
switchD_0016607f_caseD_1:
    uVar11 = uVar11 << 8 | uVar7 & 0xff;
    uVar6 = *(undefined8 *)(lVar4 + 8);
    local_500 = *(undefined8 *)(lVar4 + 0x10);
    local_508 = *(undefined8 *)(lVar5 + 8);
    uVar1 = *(undefined8 *)(lVar5 + 0x10);
    local_470 = CONCAT44(uStack_514,uStack_518);
    uStack_468 = local_510;
    local_480 = CONCAT44(uStack_524,uStack_528);
    uStack_478 = CONCAT44(uStack_51c,local_520);
    local_490 = uStack_538;
    uStack_48c = uStack_534;
    uStack_488 = local_530;
    uStack_484 = uStack_52c;
    local_4a0 = uStack_548;
    uStack_49c = uStack_544;
    uStack_498 = uStack_540;
    uStack_494 = uStack_53c;
    local_4b0 = (undefined4)local_558;
    uStack_4ac = local_558._4_4_;
    uStack_4a8 = uStack_550;
    uStack_4a4 = uStack_54c;
    local_4c0 = (undefined4)local_568;
    uStack_4bc = local_568._4_4_;
    uStack_4b8 = (undefined4)uStack_560;
    uStack_4b4 = uStack_560._4_4_;
                    /* try { // try from 0016624d to 00166261 has its CatchHandler @ 001662f3 */
    _ZN6memchr6memmem13FinderBuilder25build_forward_with_ranker17he3705527259d3c49E
              (&local_460,1,uVar11,puVar9);
    (*(code *)PTR_memcpy_00204da0)(&local_180,&local_460,0x120);
                    /* try { // try from 00166280 to 001662a2 has its CatchHandler @ 001662ee */
    uVar6 = _ZN7uu_join4exec17h3f5682ee62539478E
                      (uVar6,local_500,local_508,uVar1,&local_4c0,&local_180);
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h58ee7191efc6e1ebE(uVar12,uVar11);
    break;
  case 2:
switchD_0016607f_caseD_2:
    uStack_410 = CONCAT44(uStack_514,uStack_518);
    local_408 = local_510;
    uStack_420 = CONCAT44(uStack_524,uStack_528);
    local_418 = CONCAT44(uStack_51c,local_520);
    uStack_430 = uStack_538;
    uStack_42c = uStack_534;
    local_428 = local_530;
    uStack_424 = uStack_52c;
    uStack_440 = uStack_548;
    uStack_43c = uStack_544;
    uStack_438 = uStack_540;
    uStack_434 = uStack_53c;
    local_450 = local_558;
    uStack_448 = uStack_550;
    uStack_444 = uStack_54c;
    local_460 = (undefined4)local_568;
    uStack_45c = local_568._4_4_;
    uStack_458 = (undefined4)uStack_560;
    uStack_454 = uStack_560._4_4_;
    uVar6 = _ZN7uu_join4exec17hdc95ee4ff91a8f17E
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),
                       *(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10),&local_460);
    break;
  case 3:
switchD_0016607f_caseD_3:
    uStack_410 = CONCAT44(uStack_514,uStack_518);
    local_408 = local_510;
    uStack_420 = CONCAT44(uStack_524,uStack_528);
    local_418 = CONCAT44(uStack_51c,local_520);
    uStack_430 = uStack_538;
    uStack_42c = uStack_534;
    local_428 = local_530;
    uStack_424 = uStack_52c;
    uStack_440 = uStack_548;
    uStack_43c = uStack_544;
    uStack_438 = uStack_540;
    uStack_434 = uStack_53c;
    local_450 = local_558;
    uStack_448 = uStack_550;
    uStack_444 = uStack_54c;
    local_460 = (undefined4)local_568;
    uStack_45c = local_568._4_4_;
    uStack_458 = (undefined4)uStack_560;
    uStack_454 = uStack_560._4_4_;
    uVar6 = _ZN7uu_join4exec17hfcb69fdd78287944E
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),
                       *(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10),&local_460);
  }
LAB_001662b4:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hbafc4eb677249fa1E
            (local_4f8);
  return uVar6;
}