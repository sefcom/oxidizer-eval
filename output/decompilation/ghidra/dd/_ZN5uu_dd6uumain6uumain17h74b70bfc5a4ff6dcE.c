undefined  [16] _ZN5uu_dd6uumain6uumain17h74b70bfc5a4ff6dcE(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int __fd;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined auVar6 [16];
  undefined auStack_578 [8];
  undefined8 local_570;
  undefined8 local_568;
  long local_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  int iStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  long local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined4 local_490;
  undefined3 uStack_48c;
  undefined uStack_489;
  long local_448;
  long local_440;
  undefined8 local_438;
  long lStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  long local_410;
  long local_408;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  code *local_368;
  undefined *local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  char *local_338;
  undefined8 local_330;
  code *local_328;
  undefined *local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  char *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  int iStack_2dc;
  long local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 local_260;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined local_218;
  
  (*(code *)PTR__ZN5uu_dd6uu_app17h3802aa9aab1c575cE_002666a0)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h5a01ae36fb20ce9dE
            (&local_410,&local_2e8,param_1,param_2);
  if (local_410 == -0x8000000000000000) {
    auVar6 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_002666a8
             )();
    return auVar6;
  }
  local_418 = local_3e0;
  local_428 = uStack_3f0;
  uStack_424 = uStack_3ec;
  uStack_420 = uStack_3e8;
  uStack_41c = uStack_3e4;
  local_438 = uStack_400;
  lStack_430 = lStack_3f8;
  local_448 = local_410;
  local_440 = local_408;
  local_278 = 0x8000000000000000;
  local_260 = 0x8000000000000000;
  local_2e8 = 0;
  local_2d8 = 0;
  local_2c8 = 0;
  local_2b8 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 2;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 3;
                    /* try { // try from 0018548a to 0018555d has its CatchHandler @ 001858be */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h4faa36fc29fbd10cE
            (&local_490,&local_448,"operandsESTRPIPENotFoundTimedOut",8);
  pcVar5 = "operandsESTRPIPENotFoundTimedOut";
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hfc48cb779f9cdf25E
            (&local_328,"operandsESTRPIPENotFoundTimedOut",8,&local_490);
  local_360 = local_320;
  if (local_328 == (code *)0x0) {
    local_308 = 0;
    uStack_304 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    local_318 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_002666b0
                      ,0);
    uStack_314 = (undefined4)
                 ((ulong)
                  PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_002666b0
                 >> 0x20);
    uStack_310 = 0;
    uStack_30c = 0;
    local_328 = _ZN4core3ops8function6FnOnce9call_once17he859e2145eddfc5dE;
    local_2f0 = 0;
    local_360 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_002666b0
    ;
    local_2f8 = pcVar5;
  }
  local_368 = local_328;
  local_358 = local_318;
  uStack_354 = uStack_314;
  uStack_350 = uStack_310;
  uStack_34c = uStack_30c;
  local_348 = local_308;
  uStack_344 = uStack_304;
  uStack_340 = uStack_300;
  uStack_33c = uStack_2fc;
  local_338 = local_2f8;
  local_330 = local_2f0;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h46db0d96769f7017E
            (auStack_578,&local_368);
                    /* try { // try from 00185568 to 001855d8 has its CatchHandler @ 001858b1 */
  (*(code *)PTR__ZN5uu_dd9parseargs6Parser5parse17hd077653d220e666dE_002666b8)
            (&local_410,&local_2e8,local_570,local_568);
  local_4b8 = local_408;
  lVar1 = local_4b8;
  uStack_4b0 = uStack_400;
  uVar3 = uStack_4b0;
  local_4a8 = lStack_3f8;
  lVar4 = local_4a8;
  local_4b8._0_4_ = (undefined4)local_408;
  local_4b8._4_4_ = (undefined4)((ulong)local_408 >> 0x20);
  uStack_4b0._0_4_ = (undefined4)uStack_400;
  uStack_4b0._4_4_ = (int)((ulong)uStack_400 >> 0x20);
  local_4a8._0_4_ = (undefined4)lStack_3f8;
  local_4a8._4_4_ = (undefined4)((ulong)lStack_3f8 >> 0x20);
  local_4b8 = lVar1;
  uStack_4b0 = uVar3;
  local_4a8 = lVar4;
  if (local_410 == 3) {
    local_2d8 = lStack_3f8;
    uStack_2d0 = uStack_3f0;
    uStack_2cc = uStack_3ec;
    local_2e8 = local_408;
    uStack_2e0 = (undefined4)uStack_4b0;
    iStack_2dc = uStack_4b0._4_4_;
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5e6beab2beaebe6eE(&local_2e8);
                    /* try { // try from 001855d9 to 001855e3 has its CatchHandler @ 0018589d */
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h4a217c2992954adbE
              (auStack_578);
    auVar6._8_8_ = &
                   PTR__ZN4core3ptr49drop_in_place_LT_uu_dd__parseargs__ParseError_GT_17h868740fc12980bb5E_0025ddc8
    ;
    auVar6._0_8_ = uVar3;
  }
  else {
    local_4c8 = local_378;
    uStack_4c0 = uStack_370;
    local_4d8 = local_388;
    uStack_4d0 = uStack_380;
    local_4e8 = local_398;
    uStack_4e0 = uStack_390;
    local_4f8 = local_3a8;
    uStack_4f0 = uStack_3a0;
    local_538 = CONCAT44(uStack_3e4,uStack_3e8);
    local_508 = local_3b8;
    uStack_504 = uStack_3b4;
    uStack_500 = uStack_3b0;
    uStack_4fc = uStack_3ac;
    local_518 = local_3c8;
    uStack_514 = uStack_3c4;
    uStack_510 = uStack_3c0;
    uStack_50c = uStack_3bc;
    local_528 = local_3d8;
    uStack_520 = uStack_3d0;
    uStack_530 = local_3e0;
    local_558 = (undefined4)local_4b8;
    uStack_554 = local_4b8._4_4_;
    uStack_550 = (undefined4)uStack_4b0;
    iStack_54c = uStack_4b0._4_4_;
    local_548 = (undefined4)local_4a8;
    uStack_544 = local_4a8._4_4_;
    uStack_540 = uStack_3f0;
    uStack_53c = uStack_3ec;
    local_560 = local_410;
                    /* try { // try from 00185683 to 001856f6 has its CatchHandler @ 001858a2 */
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h4a217c2992954adbE
              (auStack_578);
    if (CONCAT44(iStack_54c,uStack_550) == -0x8000000000000000) {
      (*(code *)PTR__ZN5uu_dd5Input9new_stdin17h814376ebbe5b03eaE_002666c0)(&local_2e8,&local_560);
    }
    else {
      cVar2 = (*(code *)PTR__ZN5uu_dd7is_fifo17h9d574f34ee5f3724E_002666c8)
                        (CONCAT44(uStack_544,local_548),CONCAT44(uStack_53c,uStack_540));
      if (cVar2 == '\0') {
        (*(code *)PTR__ZN5uu_dd5Input8new_file17h22226df40ef2e7a0E_002666d8)
                  (&local_2e8,CONCAT44(uStack_544,local_548),CONCAT44(uStack_53c,uStack_540),
                   &local_560);
      }
      else {
        (*(code *)PTR__ZN5uu_dd5Input8new_fifo17h35e5c2fb1b3ef304E_002666d0)
                  (&local_2e8,CONCAT44(uStack_544,local_548),CONCAT44(uStack_53c,uStack_540),
                   &local_560);
      }
    }
    lVar1 = local_2d8;
    __fd = iStack_2dc;
    uVar3 = CONCAT44(iStack_2dc,uStack_2e0);
    lVar4 = local_2d8;
    if (local_2e8 == 0) {
      if (local_538 == -0x8000000000000000) {
                    /* try { // try from 00185720 to 001857a3 has its CatchHandler @ 0018588c */
        cVar2 = (*(code *)
                  PTR__ZN5uu_dd37is_stdout_redirected_to_seekable_file17he86a24b914264a0aE_002666e0)
                          ();
        if (cVar2 == '\0') {
          (*(code *)PTR__ZN5uu_dd6Output10new_stdout17h76c99dbdf4ef76d1E_002666f8)
                    (&local_2e8,&local_560);
        }
        else {
          (*(code *)PTR__ZN5uu_dd6Output20new_file_from_stdout17hc334670ba1ee52ecE_002666e8)
                    (&local_2e8,&local_560);
        }
      }
      else {
        cVar2 = (*(code *)PTR__ZN5uu_dd7is_fifo17h9d574f34ee5f3724E_002666c8)(uStack_530,local_528);
        if (cVar2 == '\0') {
          (*(code *)PTR__ZN5uu_dd6Output8new_file17h911369a13f3ee1abE_00266700)
                    (&local_2e8,uStack_530,local_528,&local_560);
        }
        else {
          (*(code *)PTR__ZN5uu_dd6Output8new_fifo17h5805a896b59d1442E_002666f0)
                    (&local_2e8,uStack_530,local_528,&local_560);
        }
      }
      lVar4 = local_2d8;
      if ((char)local_2e8 != '\x04') {
        uStack_48c = (undefined3)((ulong)local_2e8 >> 0x28);
        local_490 = local_2e8._1_4_;
        local_408 = lVar1;
                    /* try { // try from 00185857 to 00185874 has its CatchHandler @ 0018588a */
        uVar3 = (*(code *)PTR__ZN5uu_dd7dd_copy17h1703f8a2fff7c692E_00266708)(&local_410,&local_2e8)
        ;
        auVar6 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h80210fa1ce24478cE
                           (uVar3);
                    /* try { // try from 00185875 to 00185884 has its CatchHandler @ 0018589d */
        _ZN4core3ptr36drop_in_place_LT_uu_dd__Settings_GT_17he59f0dfde8a940ecE(&local_560);
        goto LAB_001857d6;
      }
      uVar3 = CONCAT44(iStack_2dc,uStack_2e0);
      _ZN4core3ptr33drop_in_place_LT_uu_dd__Input_GT_17hef16b694c3cf3941E(__fd);
    }
                    /* try { // try from 001857cc to 001857d5 has its CatchHandler @ 0018589d */
    auVar6._8_8_ = lVar4;
    auVar6._0_8_ = uVar3;
    _ZN4core3ptr36drop_in_place_LT_uu_dd__Settings_GT_17he59f0dfde8a940ecE(&local_560);
  }
LAB_001857d6:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17ha7bceb9b08e174b3E
            (&local_448);
  return auVar6;
}