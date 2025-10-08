undefined8 _ZN10uu_pathchk6uumain6uumain17ha865b54404696b2aE(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  char local_401;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined local_3a0 [16];
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined2 local_2b8;
  
  (*(code *)PTR__ZN10uu_pathchk6uu_app17hcf6bb8f6c69b5fe1E_001e4f38)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h91d48215402f156dE
            (&local_3e8,&local_2f8,param_1,param_2);
  local_370 = local_3b8;
  local_380 = (undefined4)local_3c8;
  uStack_37c = local_3c8._4_4_;
  uStack_378 = (undefined4)uStack_3c0;
  uStack_374 = uStack_3c0._4_4_;
  local_390 = (undefined4)local_3d8;
  uStack_38c = local_3d8._4_4_;
  uStack_388 = (undefined4)uStack_3d0;
  uStack_384 = uStack_3d0._4_4_;
                    /* try { // try from 0014ff76 to 0015000d has its CatchHandler @ 001501f8 */
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e4f48
          )(local_3a0,"posix",5);
  cVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e4f48
          )(local_3a0,"posix-special",0xd);
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e4f48
          )(local_3a0,"portability",0xb);
  cVar7 = cVar2 * '\x02';
  if (cVar3 != '\0') {
    cVar7 = '\x03';
  }
  local_401 = cVar3 * '\x02' + '\x01';
  if (cVar2 != '\0') {
    local_401 = '\x03';
  }
  if (cVar1 == '\0') {
    local_401 = cVar7;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hd77336760d159f4bE
            (&local_2f8,local_3a0);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17he1c77c60a7d9017cE(&local_338,&local_2f8);
  if (CONCAT44(uStack_334,local_338) == 0) {
                    /* try { // try from 00150187 to 001501ce has its CatchHandler @ 001501f8 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h03438f36a34a2f67E
              (&local_3e8,"missing operand",0xf);
    local_2e8 = local_3d8;
    local_2e0 = 1;
    uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4c140981458fd33fE(&local_2f8);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h58206ca2068824bfE
              (local_3a0);
  }
  else {
    local_3b8 = local_308;
    uStack_3b0 = uStack_300;
    local_3c8 = local_318;
    uStack_3c0 = uStack_310;
    local_3d8 = local_328;
    uStack_3d0 = uStack_320;
    local_3e8 = local_338;
    uStack_3e4 = uStack_334;
    uStack_3e0 = uStack_330;
    uStack_3dc = uStack_32c;
    bVar8 = 1;
                    /* try { // try from 00150080 to 00150089 has its CatchHandler @ 001501fc */
    while (lVar5 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17heb84bf0f2da2d516E
                             (&local_3e8), lVar5 != 0) {
      local_400 = 0;
      local_3f8 = 8;
      local_3f0 = 0;
      uVar6 = *(undefined8 *)(lVar5 + 0x10);
      _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
                (&local_2e8,*(undefined8 *)(lVar5 + 8),uVar6);
      local_2f8 = 0;
      local_2b8 = 1;
      uStack_2f0 = uVar6;
                    /* try { // try from 001500f0 to 00150132 has its CatchHandler @ 00150201 */
      while (lVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h7d4b2239e319dfa0E(&local_2f8),
            lVar5 != 0) {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h03438f36a34a2f67E
                  (&local_350,lVar5);
        local_358 = local_340;
        local_368 = local_350;
        uStack_364 = uStack_34c;
        uStack_360 = uStack_348;
        uStack_35c = uStack_344;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h397790ff523f9e2cE(&local_400,&local_368);
      }
                    /* try { // try from 0015014a to 00150154 has its CatchHandler @ 001501fa */
      bVar4 = (*(code *)PTR__ZN10uu_pathchk10check_path17h3260b82c8fbc03b6E_001e4f50)
                        (&local_401,local_3f8,local_3f0);
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hd87479fcf43cf10eE
                (&local_400);
      bVar8 = bVar8 & bVar4;
    }
    if (bVar8 == 0) {
                    /* try { // try from 0015016e to 00150178 has its CatchHandler @ 001501f8 */
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001e4f58)(1);
    }
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h58206ca2068824bfE
              (local_3a0);
    uVar6 = 0;
  }
  return uVar6;
}