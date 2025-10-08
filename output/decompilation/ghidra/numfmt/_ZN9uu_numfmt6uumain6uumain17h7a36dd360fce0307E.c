undefined  [16]
_ZN9uu_numfmt6uumain6uumain17h7a36dd360fce0307E(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  long lVar3;
  undefined4 extraout_EAX;
  undefined8 uVar4;
  undefined4 extraout_var;
  undefined extraout_DL;
  undefined auVar5 [16];
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 local_448;
  long local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined8 local_410;
  uint local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  long local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 local_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 local_3c0;
  long local_320 [8];
  long local_2e0;
  uint local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined local_2b8 [672];
  
  (*(code *)PTR__ZN9uu_numfmt6uu_app17h17d783a9d7220ae7E_00209838)(&local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hfb908c4e8fd8a90bE
            (&local_3f0,&local_2e0,param_1,param_2);
  local_410 = local_3c0;
  local_420 = (undefined4)local_3d0;
  uStack_41c = local_3d0._4_4_;
  uStack_418 = uStack_3c8;
  uStack_414 = uStack_3c4;
  local_430 = local_3e0;
  uStack_42c = uStack_3dc;
  uStack_428 = uStack_3d8;
  uStack_424 = uStack_3d4;
  local_440 = local_3f0;
  local_438 = local_3e8;
                    /* try { // try from 00163938 to 0016399a has its CatchHandler @ 00163b38 */
  (*(code *)PTR__ZN9uu_numfmt13parse_options17hdd4028f9a896523fE_00209848)(&local_2e0,&local_440);
  lVar3 = local_2e0;
  if (local_2e0 != 2) {
    auVar2._12_4_ = uStack_2d4;
    auVar2._8_4_ = local_2d8;
    local_458 = uStack_2d0;
    uStack_454 = uStack_2cc;
    uStack_450 = (undefined4)local_2c8;
    uStack_44c = local_2c8._4_4_;
    local_448 = local_2c0;
    (*(code *)PTR_memcpy_002097a8)(&uStack_3c8,local_2b8,0xa8);
    local_408 = local_458;
    uStack_404 = uStack_454;
    uStack_400 = uStack_450;
    uStack_3fc = uStack_44c;
    local_3e0 = local_458;
    uStack_3dc = uStack_454;
    uStack_3d8 = uStack_450;
    uStack_3d4 = uStack_44c;
    local_3d0 = local_448;
    local_3f0 = lVar3;
                    /* try { // try from 00163a15 to 00163a7c has its CatchHandler @ 00163b3d */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h471fa3c8de9cc35dE
              (&local_2e0,&local_440);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h7285758572399059E(local_320,&local_2e0);
    if (local_320[0] == 0) {
      (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00209850)();
      local_458 = extraout_EAX;
      uStack_454 = extraout_var;
      local_2e0 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_00209858)
                            (&local_458);
      local_2d8 = CONCAT31(local_2d8._1_3_,extraout_DL) & 0xffffff01;
                    /* try { // try from 00163a8f to 00163aa0 has its CatchHandler @ 00163b0f */
      auVar5 = _ZN9uu_numfmt13handle_buffer17h8d59c98e3da551b3E(&local_2e0,&local_3f0);
                    /* try { // try from 00163ab6 to 00163aba has its CatchHandler @ 00163b3d */
      _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h74753e38be762355E
                (local_2e0,local_2d8);
      auVar2 = auVar5;
    }
    else {
      auVar5 = _ZN9uu_numfmt11handle_args17h88f782532eeab52aE(local_320,&local_3f0);
      auVar2._0_8_ = auVar5._0_8_;
    }
    if (auVar2._0_8_ == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar2._8_8_;
      auVar5 = auVar5 << 0x40;
    }
    else {
                    /* try { // try from 00163ac0 to 00163ae3 has its CatchHandler @ 00163b28 */
      local_2e0 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00209860)();
      uVar4 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_00209868
              )(&local_2e0);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h35336489fa14421aE(uVar4);
    }
    _ZN4core3ptr54drop_in_place_LT_uu_numfmt__options__NumfmtOptions_GT_17h46b9f219212e0ff3E
              (&local_3f0);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2f0f0406eae3d8c2E
              (&local_440);
    return auVar5;
  }
  local_408 = local_2d8;
  uStack_404 = uStack_2d4;
  uStack_400 = uStack_2d0;
  uStack_3fc = uStack_2cc;
  local_3f8 = local_2c8;
  local_2e0 = 1;
  uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb6e44097f5c9c613E(&local_2e0);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2f0f0406eae3d8c2E
            (&local_440);
  auVar1._8_8_ = &
                 PTR__ZN4core3ptr51drop_in_place_LT_uu_numfmt__errors__NumfmtError_GT_17h6a827ff1ba94f797E_00201800
  ;
  auVar1._0_8_ = uVar4;
  return auVar1;
}