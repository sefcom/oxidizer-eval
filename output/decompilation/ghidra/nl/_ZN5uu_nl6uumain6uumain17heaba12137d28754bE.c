long _ZN5uu_nl6uumain6uumain17heaba12137d28754bE(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *local_448;
  undefined8 uStack_440;
  undefined8 **local_438;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined local_3d8 [16];
  undefined *local_3c8;
  code *local_3c0;
  long local_3b8;
  undefined8 *local_3b0;
  code *local_3a8;
  undefined local_3a0 [8];
  undefined8 local_398;
  long local_390;
  undefined *local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 **local_340;
  long local_338 [8];
  undefined local_2f8 [96];
  undefined8 local_298;
  
  (*(code *)PTR__ZN5uu_nl6uu_app17h74b291b671810a4fE_00368298)(local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h308df5a65a1239bbE
            (&local_428,local_2f8,param_1,param_2);
  local_358 = local_3f8;
  local_368 = (undefined4)local_408;
  uStack_364 = local_408._4_4_;
  uStack_360 = uStack_400;
  uStack_35c = uStack_3fc;
  local_378 = (undefined4)local_418;
  uStack_374 = local_418._4_4_;
  uStack_370 = (undefined4)uStack_410;
  uStack_36c = uStack_410._4_4_;
  local_388 = (undefined *)local_428;
  local_380 = uStack_420;
                    /* try { // try from 00211dcf to 00211ddc has its CatchHandler @ 002122f5 */
  (*(code *)
    PTR__ZN58__LT_uu_nl__Settings_u20_as_u20_core__default__Default_GT_7default17h620fb6845dbefcfcE_003682a8
  )(local_2f8);
                    /* try { // try from 00211ddd to 00211dfa has its CatchHandler @ 002122e1 */
  (*(code *)PTR__ZN5uu_nl6helper13parse_options17h86152a37c7326ed9E_003682b0)
            (local_3a0,local_2f8,&local_388);
  if (local_390 != 0) {
                    /* try { // try from 00211e14 to 00211e1d has its CatchHandler @ 00212320 */
    _ZN5alloc3str17join_generic_copy17hc42ce15d8f58f76fE(&local_428,local_398);
    local_438 = local_418;
    local_448 = (undefined *)local_428;
    uStack_440 = uStack_420;
    local_3c0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_428 = &PTR_s_Invalid_arguments_supplied__00339370;
    uStack_420 = 1;
    local_408 = 0;
    local_418 = (undefined8 **)&local_3c8;
    uStack_410 = 1;
                    /* try { // try from 00211e7f to 00211e90 has its CatchHandler @ 002122ce */
    local_3c8 = (undefined *)&local_448;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h5b303b602cbb50fbE(&local_350,&local_428);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4f3d6378997aefabE
              (local_448,uStack_440);
    uStack_410 = CONCAT44(uStack_410._4_4_,1);
    local_428 = (undefined **)CONCAT44(uStack_34c,local_350);
    uStack_420 = CONCAT44(uStack_344,uStack_348);
    local_418 = local_340;
                    /* try { // try from 00211ec1 to 00211eca has its CatchHandler @ 00212320 */
    lVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h45e38ec569034dd2E(&local_428);
LAB_00211ed5:
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7229cc5435748ab6E
              (local_3a0);
                    /* try { // try from 00211ee2 to 00211eee has its CatchHandler @ 002122f5 */
    _ZN4core3ptr36drop_in_place_LT_uu_nl__Settings_GT_17hc93d56db49570a85E(local_2f8);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hc82f089ed33143c7E
              (&local_388);
    return lVar2;
  }
                    /* try { // try from 00211f07 to 00211f4a has its CatchHandler @ 00212320 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h13ac86c527bd7718E
            (&local_428,&local_388);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h9bb00a1a35a07b0bE(local_338,&local_428);
  if (local_338[0] == 0) {
    pcVar3 = (code *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
    if (pcVar3 == (code *)0x0) {
                    /* try { // try from 002122af to 002122be has its CatchHandler @ 00212320 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00368240)(8,0x18);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
                    /* try { // try from 00211fae to 00211fc6 has its CatchHandler @ 002122c1 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h07fd9f5272f024a0E
              (&local_428,"-: Is a directory\nutf8",1);
    *(undefined8 ***)(pcVar3 + 0x10) = local_418;
    *(undefined4 *)pcVar3 = (undefined4)local_428;
    *(undefined4 *)(pcVar3 + 4) = local_428._4_4_;
    *(undefined4 *)(pcVar3 + 8) = (undefined4)uStack_420;
    *(undefined4 *)(pcVar3 + 0xc) = uStack_420._4_4_;
    local_3c8 = &DAT_00000001;
    local_3b8 = 1;
    uStack_440 = local_298;
    pcVar6 = pcVar3 + 0x18;
    local_3c0 = pcVar3;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h7da7d97a1a0221bbE(&local_3c8,local_338);
    local_448 = (undefined *)0x1;
    uStack_440 = local_298;
    local_438 = (undefined8 **)0x0;
    if (local_3b8 == 0) goto LAB_00212226;
    pcVar6 = local_3c0 + local_3b8 * 0x18;
  }
  local_438 = (undefined8 **)0x0;
  local_448 = (undefined *)0x1;
  pcVar3 = local_3c0;
  do {
    pcVar4 = pcVar3 + 0x18;
    lVar2 = *(long *)(pcVar3 + 8);
    uVar5 = *(undefined8 *)(pcVar3 + 0x10);
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hce4c57ff4d671deaE
                      (lVar2,uVar5,"-: Is a directory\nutf8",1);
    if (cVar1 == '\0') {
                    /* try { // try from 002120b0 to 002121f8 has its CatchHandler @ 0021230e */
      cVar1 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_003682c0)(lVar2,uVar5);
      if (cVar1 == '\0') {
        _ZN3std2fs4File4open17h6436d7133be25281E(&local_428,lVar2,uVar5);
        _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h5b35011457601d46E
                  (local_3d8,&local_428,pcVar3);
        lVar2 = local_3d8._0_8_;
        if (local_3d8._0_8_ == 0) {
          _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h96b71b36d765d9f6E
                    (&local_428);
                    /* try { // try from 002121f9 to 0021220b has its CatchHandler @ 002122e6 */
          lVar2 = _ZN5uu_nl2nl17h35015bef5586a627E(&local_428,&local_448,local_2f8);
          if (lVar2 == 0) {
            _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h1d8fb80c34ceb3efE
                      (&local_428);
            goto joined_r0x00212220;
          }
          _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h1d8fb80c34ceb3efE
                    (&local_428);
        }
LAB_0021229d:
        _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7229cc5435748ab6E
                  (&local_3c8);
        goto LAB_00211ed5;
      }
      local_3d8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00368278)();
      local_3b0 = (undefined8 *)local_3d8;
      local_3a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha55ed9224fb9838cE;
      local_428 = (undefined **)&DAT_003392f8;
      uStack_420 = 2;
      local_408 = 0;
      local_418 = &local_3b0;
      uStack_410 = 1;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00368280)(&local_428);
      local_3b0 = (undefined8 *)local_3d8;
      local_3a8 = (code *)
                  PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_003682c8
      ;
      local_428 = (undefined **)&DAT_00339380;
      uStack_420 = 2;
      local_408 = 0;
      local_418 = &local_3b0;
      uStack_410 = 1;
      local_3d8._0_8_ = lVar2;
      local_3d8._8_8_ = uVar5;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00368280)(&local_428);
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_003682d0)(1);
    }
    else {
                    /* try { // try from 00212056 to 00212066 has its CatchHandler @ 0021230e */
      uVar5 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_003682b8)();
      _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17haab3c02a7d96625aE
                (&local_428,uVar5);
                    /* try { // try from 00212067 to 00212079 has its CatchHandler @ 002122fa */
      lVar2 = _ZN5uu_nl2nl17h4b75da385e4f9ffbE(&local_428,&local_448,local_2f8);
      if (lVar2 != 0) {
        _ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17hb489bd126f1efd0eE
                  (local_428,uStack_420);
        goto LAB_0021229d;
      }
      _ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17hb489bd126f1efd0eE
                (local_428,uStack_420);
    }
joined_r0x00212220:
  } while ((pcVar4 != pcVar6) && (pcVar3 = pcVar4, pcVar4 != (code *)0x0));
LAB_00212226:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7229cc5435748ab6E
            (&local_3c8);
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7229cc5435748ab6E
            (local_3a0);
                    /* try { // try from 00212240 to 0021224c has its CatchHandler @ 002122f5 */
  _ZN4core3ptr36drop_in_place_LT_uu_nl__Settings_GT_17hc93d56db49570a85E(local_2f8);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hc82f089ed33143c7E
            (&local_388);
  return 0;
}