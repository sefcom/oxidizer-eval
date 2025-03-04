undefined  [16] _ZN9uu_numfmt6uumain6uumain17h8ab67a4216dca9fbE(ulong param_1,undefined8 param_2)

{
  uint extraout_EAX;
  undefined8 uVar1;
  undefined4 extraout_var;
  long lVar2;
  undefined extraout_DL;
  undefined auVar3 [16];
  undefined auVar4 [16];
  uint local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  long local_450 [2];
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined8 local_420;
  uint local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  long local_3f8;
  uint local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  long local_328 [8];
  long local_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined local_2c0 [680];
  
  (*(code *)PTR__ZN9uu_numfmt6uu_app17hfdc8a28206314692E_00239970)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h23f58464f9be56a7E
            (&local_3f8,&local_2e8,param_1,param_2);
  if (local_3f8 == -0x8000000000000000) {
    auVar3 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00239978
             )();
    return auVar3;
  }
  local_420 = local_3c8;
  local_430 = uStack_3d8;
  uStack_42c = uStack_3d4;
  uStack_428 = uStack_3d0;
  uStack_424 = uStack_3cc;
  local_440 = uStack_3e8;
  uStack_43c = uStack_3e4;
  uStack_438 = uStack_3e0;
  uStack_434 = uStack_3dc;
  local_450[0] = local_3f8;
                    /* try { // try from 001718ea to 0017194a has its CatchHandler @ 00171b0b */
  (*(code *)PTR__ZN9uu_numfmt13parse_options17h74b780a1d54305dfE_00239980)(&local_2e8,local_450);
  lVar2 = local_2e8;
  if (local_2e8 != 2) {
    local_468 = uStack_2d0;
    uStack_464 = uStack_2cc;
    uStack_460 = uStack_2c8;
    uStack_45c = uStack_2c4;
    local_478 = uStack_2e0;
    uStack_474 = uStack_2dc;
    uStack_470 = local_2d8;
    uStack_46c = uStack_2d4;
    (*(code *)PTR_memcpy_002398d8)(&uStack_3d0,local_2c0,0xa8);
    local_418 = local_478;
    uStack_414 = uStack_474;
    uStack_410 = uStack_470;
    uStack_40c = uStack_46c;
    local_3f0 = local_478;
    uStack_3ec = uStack_474;
    uStack_3e8 = uStack_470;
    uStack_3e4 = uStack_46c;
    uStack_3e0 = local_468;
    uStack_3dc = uStack_464;
    uStack_3d8 = uStack_460;
    uStack_3d4 = uStack_45c;
    local_3f8 = lVar2;
                    /* try { // try from 001719b5 to 00171a37 has its CatchHandler @ 00171af9 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hb133da43c8fa0f0eE
              (&local_2e8,local_450,"NUMBER",6);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h9995f03ceaefcc81E
              (local_328,"NUMBER",6,&local_2e8);
    if (local_328[0] == 0) {
      (*(code *)PTR__ZN3std2io5stdio5stdin17h7215cc131abb55d8E_00239988)();
      local_478 = extraout_EAX;
      uStack_474 = extraout_var;
      local_2e8 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h161a36d857331d7fE_00239990)
                            (&local_478);
      uStack_2e0 = CONCAT31(uStack_2e0._1_3_,extraout_DL) & 0xffffff01;
                    /* try { // try from 00171a4a to 00171a5e has its CatchHandler @ 00171ad0 */
      auVar4 = _ZN9uu_numfmt13handle_buffer17h9ad60b7403393a62E(&local_2e8,&local_3f8);
      param_1 = auVar4._8_8_;
      lVar2 = auVar4._0_8_;
                    /* try { // try from 00171a74 to 00171a78 has its CatchHandler @ 00171af9 */
      _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17hd8f521f94a788c9eE
                (local_2e8,uStack_2e0);
    }
    else {
      auVar4 = _ZN9uu_numfmt11handle_args17ha10f500c4512be74E(local_328,&local_3f8);
      lVar2 = auVar4._0_8_;
    }
    if (lVar2 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_1;
      auVar4 = auVar4 << 0x40;
    }
    else {
                    /* try { // try from 00171a7e to 00171aa1 has its CatchHandler @ 00171ae9 */
      local_2e8 = (*(code *)PTR__ZN3std2io5stdio6stdout17h077da66234850927E_00239998)();
      uVar1 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17h392d0be644ab70e9E_002399a0
              )(&local_2e8);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17hc9085200e0221a50E(uVar1);
    }
                    /* try { // try from 00171aa6 to 00171ab2 has its CatchHandler @ 00171b0b */
    _ZN4core3ptr54drop_in_place_LT_uu_numfmt__options__NumfmtOptions_GT_17h2da773dd799c8198E
              (&local_3f8);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h7a0abc69fd02c535E
              (local_450);
    return auVar4;
  }
  _ZN4core3ops8function6FnOnce9call_once17hf9126f76b4d13315E(&local_478);
  local_418 = local_478;
  uStack_414 = uStack_474;
  uStack_410 = uStack_470;
  uStack_40c = uStack_46c;
  local_408 = local_468;
  uStack_404 = uStack_464;
  uStack_400 = uStack_460;
  uStack_3fc = uStack_45c;
  local_2d8 = local_468;
  uStack_2d4 = uStack_464;
  uStack_2d0 = uStack_460;
  uStack_2cc = uStack_45c;
  uStack_2e0 = uStack_470;
  uStack_2dc = uStack_46c;
  uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb050645051cd6acaE(&local_2e8);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h7a0abc69fd02c535E
            (local_450);
  auVar3._8_8_ = &
                 PTR__ZN4core3ptr51drop_in_place_LT_uu_numfmt__errors__NumfmtError_GT_17h9519fa4ce8294667E_002329c0
  ;
  auVar3._0_8_ = uVar1;
  return auVar3;
}