undefined  [16]
_ZN9uu_csplit6uumain6uumain17h6eadb50264c4f8c1E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined auVar2 [16];
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  byte extraout_DL;
  undefined **ppuVar7;
  undefined auVar8 [16];
  ulong local_4a0;
  undefined local_498 [8];
  ulong local_490;
  undefined8 local_488;
  undefined local_480 [16];
  int local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  int local_448;
  undefined4 uStack_444;
  int iStack_440;
  undefined4 uStack_43c;
  int local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  uint uStack_410;
  undefined4 uStack_40c;
  int local_398;
  undefined4 uStack_394;
  int iStack_390;
  undefined4 uStack_38c;
  int local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  uint uStack_360;
  undefined4 uStack_35c;
  undefined local_350 [104];
  undefined8 local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  int local_2d8;
  undefined4 uStack_2d4;
  
  (*(code *)PTR__ZN9uu_csplit6uu_app17h86eb726b6073e125E_0041f900)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hcae3b529826e6a0dE
            (&local_448,&local_2e8,param_1,param_2);
  if (CONCAT44(uStack_444,local_448) == -0x8000000000000000) {
    auVar8 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0041f908
             )();
    return auVar8;
  }
  local_460 = local_428;
  uStack_45c = uStack_424;
  uStack_458 = uStack_420;
  uStack_454 = uStack_41c;
  local_470 = local_438;
  uStack_46c = uStack_434;
  uStack_468 = uStack_430;
  uStack_464 = uStack_42c;
                    /* try { // try from 002613be to 00261494 has its CatchHandler @ 00261768 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hc5a9f76a4b949bc1E
            (&local_2e8,local_480,"filemode",4);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hafaa8c6d7408a0e9E
                    ("filemode",4,&local_2e8);
  if (lVar4 == 0) {
    ppuVar7 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003deca8;
LAB_0026172f:
                    /* try { // try from 0026172f to 00261734 has its CatchHandler @ 00261768 */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h0e11329e76906eaaE_0041f938)(ppuVar7);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h22bc54f1ce978fddE
            (&local_2e8,local_480,"pattern",7);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hb8cfc70c55ca00cfE
            (&local_448,"pattern",7,&local_2e8);
  if (CONCAT44(uStack_444,local_448) == 0) {
    ppuVar7 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003decc0;
    goto LAB_0026172f;
  }
  local_368 = local_418;
  uStack_364 = uStack_414;
  uStack_360 = uStack_410;
  uStack_35c = uStack_40c;
  local_378 = local_428;
  uStack_374 = uStack_424;
  uStack_370 = uStack_420;
  uStack_36c = uStack_41c;
  local_388 = local_438;
  uStack_384 = uStack_434;
  uStack_380 = uStack_430;
  uStack_37c = uStack_42c;
  local_398 = local_448;
  uStack_394 = uStack_444;
  iStack_390 = iStack_440;
  uStack_38c = uStack_43c;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17ha175ecf279fa0b9bE
            (local_498,&local_398);
                    /* try { // try from 00261495 to 002614a7 has its CatchHandler @ 00261747 */
  (*(code *)PTR__ZN9uu_csplit13CsplitOptions3new17h18a4d0e2255fb53bE_0041f910)(local_350,local_480);
                    /* try { // try from 002614b0 to 00261507 has its CatchHandler @ 0026174c */
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3b2659a33d278162E
                    (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),"-",1);
  if (cVar3 == '\0') {
                    /* try { // try from 00261538 to 002615a7 has its CatchHandler @ 0026174c */
    _ZN3std2fs4File4open17hffa7441d5a04c38cE(&local_2e8,lVar4);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hdd6233119bcf60a2E
              (&local_448,&local_2e8,lVar4);
    lVar6 = CONCAT44(uStack_444,local_448);
    if (lVar6 != 0) {
      ppuVar7 = (undefined **)CONCAT44(uStack_43c,iStack_440);
      goto LAB_002616eb;
    }
    local_4a0 = CONCAT44(local_4a0._4_4_,iStack_440);
                    /* try { // try from 002615bf to 002615e6 has its CatchHandler @ 00261739 */
    (*(code *)PTR__ZN3std2fs4File8metadata17he899a18112e6f19eE_0041f928)(&local_2e8,&local_4a0);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hde00539526dd8324E
              (&local_448,&local_2e8,lVar4);
    if (local_448 == 2) {
      lVar6 = CONCAT44(uStack_43c,iStack_440);
      ppuVar7 = (undefined **)CONCAT44(uStack_434,local_438);
    }
    else {
      if ((uStack_410 & 0xf000) == 0x8000) {
                    /* try { // try from 00261622 to 00261653 has its CatchHandler @ 00261737 */
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hc0bfa7f749c36949E
                  (&local_2e8,0x2000,local_4a0 & 0xffffffff);
        _ZN9uu_csplit6csplit17hbd1c068a297fe5d8E
                  (&local_448,local_350,local_490,local_488,&local_2e8);
        local_2e8 = CONCAT44(uStack_444,local_448);
        if (local_2e8 == 0xc) goto LAB_0026150f;
        iStack_2e0 = iStack_440;
        uStack_2dc = uStack_43c;
        local_2d8 = local_438;
        uStack_2d4 = uStack_434;
                    /* try { // try from 00261685 to 00261691 has its CatchHandler @ 0026174c */
        lVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6b837569a0db69e2E(&local_2e8);
        goto LAB_002615a8;
      }
                    /* try { // try from 00261697 to 002616d7 has its CatchHandler @ 00261739 */
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE_0041f930
      )(&local_448,lVar4);
      iStack_2e0 = local_448;
      uStack_2dc = uStack_444;
      local_2d8 = iStack_440;
      uStack_2d4 = uStack_43c;
      local_2e8 = 0xb;
      lVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6b837569a0db69e2E(&local_2e8);
      ppuVar7 = &
                PTR__ZN4core3ptr57drop_in_place_LT_uu_csplit__csplit_error__CsplitError_GT_17hc5d4aca3759c7b16E_003ded10
      ;
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h14d311f58d6bf7d5E((int)local_4a0);
  }
  else {
    local_4a0 = (*(code *)PTR__ZN3std2io5stdio5stdin17h7215cc131abb55d8E_0041f918)();
    uVar5 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h161a36d857331d7fE_0041f920)(&local_4a0);
    _ZN9uu_csplit6csplit17habea2b7448100cb7E
              (&local_448,local_350,local_490,local_488,uVar5,extraout_DL & 1);
    if (local_448 == 0xc) {
LAB_0026150f:
                    /* try { // try from 0026150f to 0026151b has its CatchHandler @ 00261747 */
      _ZN4core3ptr45drop_in_place_LT_uu_csplit__CsplitOptions_GT_17h17e4cab8b6953a0eE(local_350);
                    /* try { // try from 0026151c to 00261525 has its CatchHandler @ 00261768 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h1581f7c1aae30641E
                (local_498);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h21e213836082c314E
                (local_480);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_490;
      return auVar8 << 0x40;
    }
    local_2d8 = local_438;
    uStack_2d4 = uStack_434;
    local_2e8 = CONCAT44(uStack_444,local_448);
    iStack_2e0 = iStack_440;
    uStack_2dc = uStack_43c;
    lVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6b837569a0db69e2E(&local_2e8);
LAB_002615a8:
    ppuVar7 = &
              PTR__ZN4core3ptr57drop_in_place_LT_uu_csplit__csplit_error__CsplitError_GT_17hc5d4aca3759c7b16E_003ded10
    ;
  }
LAB_002616eb:
                    /* try { // try from 002616eb to 002616f7 has its CatchHandler @ 00261747 */
  auVar2._8_8_ = ppuVar7;
  auVar2._0_8_ = lVar6;
  _ZN4core3ptr45drop_in_place_LT_uu_csplit__CsplitOptions_GT_17h17e4cab8b6953a0eE(local_350);
                    /* try { // try from 002616f8 to 00261701 has its CatchHandler @ 00261768 */
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h1581f7c1aae30641E
            (local_498);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h21e213836082c314E
            (local_480);
  return auVar2;
}