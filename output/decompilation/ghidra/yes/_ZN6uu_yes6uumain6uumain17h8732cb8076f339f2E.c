undefined  [16] _ZN6uu_yes6uumain6uumain17h8732cb8076f339f2E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  long local_398;
  undefined local_390 [16];
  undefined8 local_380;
  undefined *local_378;
  undefined *local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined *local_338;
  undefined *local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined local_300 [16];
  undefined8 local_2f0;
  undefined **local_2e8;
  undefined8 uStack_2e0;
  undefined **local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  
  (*(code *)PTR__ZN6uu_yes6uu_app17hcee173fc3d8be0c3E_001de220)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hf82f2adb0a259b23E
            (&local_378,&local_2e8,param_1,param_2);
  local_308 = local_348;
  local_318 = local_358;
  uStack_314 = uStack_354;
  uStack_310 = uStack_350;
  uStack_30c = uStack_34c;
  local_328 = local_368;
  uStack_324 = uStack_364;
  uStack_320 = uStack_360;
  uStack_31c = uStack_35c;
  local_338 = local_378;
  local_330 = local_370;
                    /* try { // try from 0014ee98 to 0014eeb2 has its CatchHandler @ 0014f026 */
  local_390 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h1ceed272221759b5E
                        (0x4000,1,1,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001d7578);
  local_380 = 0;
                    /* try { // try from 0014eec6 to 0014ef16 has its CatchHandler @ 0014f02b */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hc2a64651b1963b22E
            (&local_2e8,&local_338);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h6b5378762c9d68feE(&local_378,&local_2e8);
  _ZN6uu_yes16args_into_buffer17h6f2b697e93c64beeE(local_390,&local_378);
  (*(code *)PTR__ZN6uu_yes14prepare_buffer17h5c585cb06c9101a3E_001de230)(local_390);
  lVar2 = (*(code *)PTR__ZN6uu_yes4exec17h60fe677fd5670f3cE_001de238)(local_390._8_8_,local_380);
  if (lVar2 != 0) {
    cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar2);
    if (cVar1 != '\v') {
      local_370 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001de240
      ;
      local_2e8 = &PTR_s_standard_output__001d7568;
      uStack_2e0 = 1;
      local_2c8 = 0;
      local_2d0 = 1;
                    /* try { // try from 0014ef8d to 0014efd9 has its CatchHandler @ 0014f018 */
      local_398 = lVar2;
      local_378 = (undefined *)&local_398;
      local_2d8 = &local_378;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hcc8954c994f2ca54E(local_300,&local_2e8);
      local_2d0 = CONCAT44(local_2d0._4_4_,1);
      local_2d8 = (undefined **)local_2f0;
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he942781fd10892b0E(&local_2e8);
                    /* try { // try from 0014efe1 to 0014efe5 has its CatchHandler @ 0014f016 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc0a2e018ac593d01E(local_398);
      goto LAB_0014efe6;
    }
                    /* try { // try from 0014ef2b to 0014ef32 has its CatchHandler @ 0014f016 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc0a2e018ac593d01E(lVar2);
  }
  uVar3 = 0;
LAB_0014efe6:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h303ad51536bec5f4E
            (local_390._0_8_,local_390._8_8_);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2904ed0a969b5ac9E
            (&local_338);
  auVar4._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h4886d2400b072343E_001d75b0
  ;
  auVar4._0_8_ = uVar3;
  return auVar4;
}