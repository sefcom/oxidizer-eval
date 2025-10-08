long _ZN9uu_csplit6uumain6uumain17h622bcb8a2660cea2E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  byte extraout_DL;
  undefined **ppuVar5;
  int local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  undefined local_3d8 [8];
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  long local_350 [2];
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  int local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  
  (*(code *)PTR__ZN9uu_csplit6uu_app17h42f8ce6b5616d423E_00371208)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17ha98054be1a4393c6E
            (&local_3b8,&local_2e8,param_1,param_2);
  local_320 = local_388;
  local_330 = local_398;
  uStack_32c = uStack_394;
  uStack_328 = (undefined4)uStack_390;
  uStack_324 = uStack_390._4_4_;
  local_340 = local_3a8;
  uStack_33c = uStack_3a4;
  uStack_338 = uStack_3a0;
  uStack_334 = uStack_39c;
  local_350[0] = local_3b8;
                    /* try { // try from 002193dd to 00219486 has its CatchHandler @ 0021975b */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h8df2d62e1575d4aaE
            (&local_2e8,local_350);
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he433efa232898a78E(&local_2e8);
  if (lVar3 == 0) {
    ppuVar5 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341d90;
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hb1657544231e952dE
              (&local_2e8,local_350);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h1e5e9e31acc0be39E(&local_3b8,&local_2e8);
    if (local_3b8 != 0) {
      local_2b8 = (undefined4)local_388;
      uStack_2b4 = local_388._4_4_;
      uStack_2b0 = (undefined4)uStack_380;
      uStack_2ac = uStack_380._4_4_;
      local_2c8 = CONCAT44(uStack_394,local_398);
      uStack_2c0 = (undefined4)uStack_390;
      uStack_2bc = uStack_390._4_4_;
      local_2d8 = local_3a8;
      uStack_2d4 = uStack_3a4;
      uStack_2d0 = uStack_3a0;
      uStack_2cc = uStack_39c;
      local_2e8 = (int)local_3b8;
      uStack_2e4 = local_3b8._4_4_;
      uStack_2e0 = uStack_3b0;
      uStack_2dc = uStack_3ac;
      _ZN4core4iter6traits8iterator8Iterator7collect17hecc4a77bdb42bbe4E(local_3d8,&local_2e8);
                    /* try { // try from 00219487 to 002194f0 has its CatchHandler @ 0021973d */
      (*(code *)PTR__ZN9uu_csplit13CsplitOptions3new17hcbcb732a44184854E_00371218)
                (&local_2e8,local_350);
      local_2f8 = CONCAT44(uStack_2bc,uStack_2c0);
      local_318 = CONCAT44(uStack_2dc,uStack_2e0);
      uStack_310 = CONCAT44(uStack_2d4,local_2d8);
      local_308 = uStack_2d0;
      uStack_304 = uStack_2cc;
      uStack_300 = (undefined4)local_2c8;
      uStack_2fc = local_2c8._4_4_;
      if (CONCAT44(uStack_2e4,local_2e8) == -0x8000000000000000) {
        lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2f10a7c0150c2495E(&local_318);
      }
      else {
        local_358 = local_288;
        local_388 = CONCAT44(uStack_2b4,local_2b8);
        uStack_380 = CONCAT44(uStack_2ac,uStack_2b0);
        local_368 = local_298;
        uStack_364 = uStack_294;
        uStack_360 = uStack_290;
        uStack_35c = uStack_28c;
        local_378 = local_2a8;
        uStack_370 = uStack_2a0;
        uStack_3b0 = uStack_2e0;
        uStack_3ac = uStack_2dc;
        local_3a8 = local_2d8;
        uStack_3a4 = uStack_2d4;
        uStack_3a0 = uStack_2d0;
        uStack_39c = uStack_2cc;
        local_398 = (undefined4)local_2c8;
        uStack_394 = local_2c8._4_4_;
        local_3b8 = CONCAT44(uStack_2e4,local_2e8);
        uStack_390 = local_2f8;
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h38f9f743da6120deE
                          (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),
                           "-cannot open  for readingError flushing stdout: ",1);
        if (cVar2 == '\0') {
          _ZN3std2fs4File4open17he7ad27c5ba7152e8E(&local_2e8,lVar3);
          _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h8d2f9b30ba986471E
                    (&local_400,&local_2e8,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10))
          ;
          lVar3 = CONCAT44(uStack_3fc,local_400);
          if (lVar3 == 0) {
            _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hd51d46b7da96853cE
                      (&local_2e8,uStack_3f8);
            _ZN9uu_csplit6csplit17h417fd27a890efb75E
                      (&local_400,&local_3b8,local_3d0,local_3c8,&local_2e8);
            if (local_400 == 0xd) goto LAB_0021968e;
            local_2c8 = local_3e0;
            local_2d8 = local_3f0;
            uStack_2d4 = uStack_3ec;
            uStack_2d0 = uStack_3e8;
            uStack_2cc = uStack_3e4;
            local_2e8 = local_400;
            uStack_2e4 = uStack_3fc;
            uStack_2e0 = uStack_3f8;
            uStack_2dc = uStack_3f4;
                    /* try { // try from 002196da to 002196e6 has its CatchHandler @ 00219742 */
            lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2f10a7c0150c2495E(&local_2e8);
          }
        }
        else {
                    /* try { // try from 0021958d to 00219686 has its CatchHandler @ 00219742 */
          local_3c0 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00371220)();
          uVar4 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_00371228)
                            (&local_3c0);
          _ZN9uu_csplit6csplit17hd8fd0c4dd6790b44E
                    (&local_400,&local_3b8,local_3d0,local_3c8,uVar4,extraout_DL & 1);
          if (local_400 == 0xd) {
LAB_0021968e:
            _ZN4core3ptr45drop_in_place_LT_uu_csplit__CsplitOptions_GT_17h93e4a6c4ee8a35f8E
                      (&local_3b8);
            _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hd5017c74ad85d1e7E
                      (local_3d8);
            _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h0355794e45a04e25E
                      (local_350);
            return 0;
          }
          local_2c8 = local_3e0;
          local_2d8 = local_3f0;
          uStack_2d4 = uStack_3ec;
          uStack_2d0 = uStack_3e8;
          uStack_2cc = uStack_3e4;
          local_2e8 = local_400;
          uStack_2e4 = uStack_3fc;
          uStack_2e0 = uStack_3f8;
          uStack_2dc = uStack_3f4;
          lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2f10a7c0150c2495E(&local_2e8);
        }
        _ZN4core3ptr45drop_in_place_LT_uu_csplit__CsplitOptions_GT_17h93e4a6c4ee8a35f8E(&local_3b8);
      }
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hd5017c74ad85d1e7E
                (local_3d8);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h0355794e45a04e25E
                (local_350);
      return lVar3;
    }
    ppuVar5 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341da8;
  }
                    /* try { // try from 00219735 to 0021973a has its CatchHandler @ 0021975b */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00371230)(ppuVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}