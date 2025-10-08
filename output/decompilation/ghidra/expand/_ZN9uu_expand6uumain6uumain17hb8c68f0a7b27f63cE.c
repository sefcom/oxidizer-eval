undefined  [16]
_ZN9uu_expand6uumain6uumain17hb8c68f0a7b27f63cE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  long local_3b0 [2];
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  long local_378;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined local_2f0 [24];
  long local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  
  (*(code *)PTR__ZN9uu_expand6uu_app17hfd4b727879b62d41E_001ef0f8)(&local_2d8);
                    /* try { // try from 0015697e to 001569a0 has its CatchHandler @ 00156b1f */
  _ZN4core4iter6traits8iterator8Iterator7collect17hbb154e39e9ef545dE(local_3b0,param_1,param_2);
  (*(code *)PTR__ZN9uu_expand16expand_shortcuts17haabb6e34bcaf3b4aE_001ef100)(local_2f0,local_3b0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hcc16583f3af8584cE
            (&local_378,&local_2d8,local_2f0);
  local_390 = uStack_358;
  uStack_38c = uStack_354;
  uStack_388 = uStack_350;
  uStack_384 = uStack_34c;
  local_3a0 = uStack_368;
  uStack_39c = uStack_364;
  uStack_398 = uStack_360;
  uStack_394 = uStack_35c;
  local_3b0[0] = local_378;
                    /* try { // try from 00156a05 to 00156a6b has its CatchHandler @ 00156b10 */
  (*(code *)PTR__ZN9uu_expand7Options3new17hf73bd933e2ff5840E_001ef110)(&local_2d8,local_3b0);
  local_328 = local_2d0;
  uVar4 = local_328;
  uStack_320 = uStack_2c8;
  uVar1 = uStack_320;
  local_318 = local_2c0;
  uVar2 = local_318;
  uStack_310 = uStack_2b8;
  uVar3 = uStack_310;
  local_308 = local_2b0;
  uStack_304 = uStack_2ac;
  uStack_300 = uStack_2a8;
  uStack_2fc = uStack_2a4;
  if (local_2d8 == -0x8000000000000000) {
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he9770729fc838e7fE(&local_328);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he7a2758533e8bc12E
              (local_3b0);
    auVar5._8_8_ = &
                   PTR__ZN4core3ptr42drop_in_place_LT_uu_expand__ParseError_GT_17hdfac1b515c2c640bE_001e7ba0
    ;
    auVar5._0_8_ = uVar4;
  }
  else {
    local_330 = local_290;
    local_340 = local_2a0;
    uStack_338 = uStack_298;
    local_328._0_4_ = (undefined4)local_2d0;
    local_328._4_4_ = (undefined4)((ulong)local_2d0 >> 0x20);
    uStack_320._0_4_ = (undefined4)uStack_2c8;
    uStack_320._4_4_ = (undefined4)((ulong)uStack_2c8 >> 0x20);
    local_318._0_4_ = (undefined4)local_2c0;
    local_318._4_4_ = (undefined4)((ulong)local_2c0 >> 0x20);
    uStack_310._0_4_ = (undefined4)uStack_2b8;
    uStack_310._4_4_ = (undefined4)((ulong)uStack_2b8 >> 0x20);
    local_370 = (undefined4)local_328;
    uStack_36c = local_328._4_4_;
    uStack_368 = (undefined4)uStack_320;
    uStack_364 = uStack_320._4_4_;
    uStack_360 = (undefined4)local_318;
    uStack_35c = local_318._4_4_;
    uStack_358 = (undefined4)uStack_310;
    uStack_354 = uStack_310._4_4_;
    uStack_350 = local_2b0;
    uStack_34c = uStack_2ac;
    local_348 = uStack_2a8;
    uStack_344 = uStack_2a4;
    local_378 = local_2d8;
                    /* try { // try from 00156acb to 00156ad5 has its CatchHandler @ 00156b01 */
    local_328 = uVar4;
    uStack_320 = uVar1;
    local_318 = uVar2;
    uStack_310 = uVar3;
    auVar5 = (*(code *)PTR__ZN9uu_expand6expand17h7e07945fdad88d02E_001ef118)(&local_378);
    _ZN4core3ptr39drop_in_place_LT_uu_expand__Options_GT_17h11457f8e795be736E(&local_378);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he7a2758533e8bc12E
              (local_3b0);
  }
  return auVar5;
}