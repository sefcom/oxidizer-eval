undefined  [16]
_ZN9uu_factor6uumain6uumain17hfa81754fb7791d86E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined auVar3 [16];
  undefined uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined extraout_DL;
  undefined auVar8 [16];
  undefined8 local_3f0;
  uint local_3e8;
  undefined8 *local_3e0;
  undefined8 *local_3d8;
  undefined local_3d0 [16];
  undefined8 **local_3c0;
  code *local_3b8;
  undefined local_3b0 [16];
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined ***local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined ***local_358;
  undefined8 *local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined local_320 [40];
  undefined ***local_2f8;
  undefined8 *puStack_2f0;
  undefined ***local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  
  (*(code *)PTR__ZN9uu_factor6uu_app17habe15ffc97b29e55E_0024d298)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h9ae4a6fed9ca7f05E
            (local_3b0,&local_2f8,param_1,param_2);
  local_328 = local_380;
  local_338 = local_390;
  uStack_334 = uStack_38c;
  uStack_330 = uStack_388;
  uStack_32c = uStack_384;
  local_348 = local_3a0;
  uStack_344 = uStack_39c;
  uStack_340 = uStack_398;
  uStack_33c = uStack_394;
  local_358 = (undefined ***)local_3b0._0_8_;
  local_350 = (undefined8 *)local_3b0._8_8_;
                    /* try { // try from 00193433 to 0019346e has its CatchHandler @ 001938f0 */
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0024d2b0
          )(&local_358,
            *(undefined8 *)PTR__ZN9uu_factor7options9EXPONENTS17h64e0a670b6588ba1E_0024d2a8,
            *(undefined8 *)(PTR__ZN9uu_factor7options9EXPONENTS17h64e0a670b6588ba1E_0024d2a8 + 8));
  local_368 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0024d2b8)();
  uVar5 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_0024d2c0)(&local_368);
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h96046ded03714191E
            (local_320,uVar5);
  uVar5 = *(undefined8 *)PTR__ZN9uu_factor7options6NUMBER17h74c352ca63a4ac2aE_0024d2c8;
  uVar1 = *(undefined8 *)(PTR__ZN9uu_factor7options6NUMBER17h74c352ca63a4ac2aE_0024d2c8 + 8);
                    /* try { // try from 0019347d to 001934b2 has its CatchHandler @ 001938ee */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h04d0d319357c8bcdE
            (&local_2f8,&local_358,uVar5,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17ha872be5b6fe72ea4E
            (local_3b0,uVar5,uVar1,&local_2f8);
  if ((undefined8 ***)local_3b0._0_8_ == (undefined8 ***)0x0) {
                    /* try { // try from 00193543 to 0019355e has its CatchHandler @ 001938ee */
    local_360 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_0024d2d0)();
    local_3f0 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_0024d2d8)(&local_360);
    local_3e8 = CONCAT31(local_3e8._1_3_,extraout_DL) & 0xffffff01;
    local_370 = (undefined ***)0x8000000000000001;
                    /* try { // try from 0019359f to 001935a3 has its CatchHandler @ 001938e9 */
    while (_ZN82__LT_std__io__Lines_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h462867bd822800e6E
                     (local_3b0,&local_3f0), uVar5 = local_3b0._0_8_,
          (undefined ***)local_3b0._0_8_ != local_370) {
      if ((undefined *)local_3b0._0_8_ == &DAT_8000000000000000) {
        local_3d8 = (undefined8 *)local_3b0._8_8_;
                    /* try { // try from 001937d9 to 001938b6 has its CatchHandler @ 001938cb */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0024d278)(1);
        local_3d0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024d258)();
        local_3b8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc900c5a3cc04ff1bE;
        local_2f8 = (undefined ***)&DAT_00244290;
        puStack_2f0 = (undefined8 *)0x2;
        local_2d8 = 0;
        local_2e8 = (undefined ***)&local_3c0;
        uStack_2e0 = 1;
        local_3c0 = (undefined8 **)local_3d0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024d260)(&local_2f8);
        local_3d0._0_8_ = &local_3d8;
        local_3d0._8_8_ =
             PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_0024d2e0
        ;
        local_2f8 = (undefined ***)&PTR_DAT_00244308;
        puStack_2f0 = (undefined **)0x2;
        local_2d8 = 0;
        uStack_2e0 = 1;
        local_2e8 = (undefined ***)local_3d0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024d260)(&local_2f8);
                    /* try { // try from 001938bc to 001938c0 has its CatchHandler @ 001938c9 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h841ca31e3edd53b8E(local_3d8);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = &local_2f8;
        auVar8 = auVar8 << 0x40;
LAB_00193663:
                    /* try { // try from 0019366c to 00193670 has its CatchHandler @ 001938ee */
        _ZN4core3ptr68drop_in_place_LT_std__io__Lines_LT_std__io__stdio__StdinLock_GT__GT_17ha0918034fbbd1511E
                  (local_3f0,local_3e8);
        goto LAB_00193671;
      }
      ppuVar2 = (undefined **)CONCAT44(uStack_39c,local_3a0);
      local_3e0 = (undefined8 *)local_3b0._8_8_;
      _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h4cdc88adb24f0186E
                (&local_2e8,local_3b0._8_8_,ppuVar2);
      local_2f8 = (undefined ***)0x0;
      uStack_2c0 = CONCAT62(uStack_2c0._2_6_,1);
      puStack_2f0 = ppuVar2;
      while( true ) {
        auVar8 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hb6030f760f76d8dcE(&local_2f8);
        if (auVar8._0_8_ == 0) break;
                    /* try { // try from 0019361d to 0019362c has its CatchHandler @ 001938f5 */
        auVar8 = _ZN9uu_factor17print_factors_str17h9017d6fa399a3f46E
                           (auVar8._0_8_,auVar8._8_8_,local_320,uVar4);
        if (auVar8._0_8_ != 0) {
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9cf4137fd0897025E
                    (uVar5,local_3e0);
          goto LAB_00193663;
        }
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9cf4137fd0897025E(uVar5,local_3e0);
    }
                    /* try { // try from 00193699 to 001936af has its CatchHandler @ 001938ee */
    _ZN4core3ptr68drop_in_place_LT_std__io__Lines_LT_std__io__stdio__StdinLock_GT__GT_17ha0918034fbbd1511E
              (local_3f0,local_3e8);
LAB_001936a3:
    pppuVar7 = (undefined ***)
               _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h8312d51ea439d633E
                         (local_320);
    if (pppuVar7 == (undefined ***)0x0) {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h1a76c4325b0cc1e6E
                (0);
    }
    else {
      local_3c0 = pppuVar7;
                    /* try { // try from 001936be to 0019378b has its CatchHandler @ 001938da */
      local_3b0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024d258)();
      local_3d0._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc900c5a3cc04ff1bE;
      local_2f8 = (undefined ***)&DAT_00244290;
      puStack_2f0 = (undefined8 *)0x2;
      local_2d8 = 0;
      local_2e8 = (undefined ***)local_3d0;
      uStack_2e0 = 1;
      local_3d0._0_8_ = local_3b0;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024d260)(&local_2f8);
      local_3b0._0_8_ = &local_3c0;
      local_3b0._8_8_ =
           PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_0024d2e0
      ;
      local_2f8 = (undefined ***)&DAT_002442b0;
      puStack_2f0 = (undefined **)0x2;
      local_2d8 = 0;
      uStack_2e0 = 1;
      local_2e8 = (undefined ***)local_3b0;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024d260)(&local_2f8);
                    /* try { // try from 00193791 to 0019379e has its CatchHandler @ 001938ee */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h841ca31e3edd53b8E(local_3c0);
    }
                    /* try { // try from 0019379f to 001937ab has its CatchHandler @ 001938f0 */
    _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17hf35f94f31999e0ceE
              (local_320);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2845e6efb7fbf4e2E
              (&local_358);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = &local_2f8;
    auVar8 = auVar3 << 0x40;
  }
  else {
    local_2e8 = (undefined ***)CONCAT44(uStack_39c,local_3a0);
    uStack_2e0 = CONCAT44(uStack_394,uStack_398);
    local_2d8 = CONCAT44(uStack_38c,local_390);
    local_2c8 = local_380;
    uStack_2c0 = uStack_378;
    local_2f8 = (undefined ***)local_3b0._0_8_;
    puStack_2f0 = (undefined8 *)local_3b0._8_8_;
    do {
                    /* try { // try from 00193510 to 00193532 has its CatchHandler @ 00193915 */
      lVar6 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5fb02f6ad9487adaE
                        (&local_2f8);
      if (lVar6 == 0) goto LAB_001936a3;
      auVar8 = _ZN9uu_factor17print_factors_str17h9017d6fa399a3f46E
                         (*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10),local_320,uVar4);
    } while (auVar8._0_8_ == 0);
LAB_00193671:
                    /* try { // try from 00193671 to 0019367d has its CatchHandler @ 001938f0 */
    _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17hf35f94f31999e0ceE
              (local_320);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2845e6efb7fbf4e2E
              (&local_358);
  }
  return auVar8;
}