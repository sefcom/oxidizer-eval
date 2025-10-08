undefined8 _ZN8uu_sleep6uumain6uumain17hc9e3360cce9e3e34E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  long local_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined8 local_360;
  long local_358 [2];
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined local_2e0 [712];
  
  (*(code *)PTR__ZN8uu_sleep6uu_app17hdc95f04f3718f62fE_002043b8)(local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h7caece52df62770eE
            (&local_398,local_2e0,param_1,param_2);
  local_338 = uStack_378;
  uStack_334 = uStack_374;
  uStack_330 = uStack_370;
  uStack_32c = uStack_36c;
  local_348 = uStack_388;
  uStack_344 = uStack_384;
  uStack_340 = uStack_380;
  uStack_33c = uStack_37c;
  local_358[0] = local_398;
                    /* try { // try from 0015e811 to 0015e890 has its CatchHandler @ 0015e904 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h6cb5961f83c4efaaE
            (local_2e0,local_358);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h3c075337a848cb76E(&local_398,local_2e0);
  if (local_398 == 0) {
                    /* try { // try from 0015e8c9 to 0015e8cd has its CatchHandler @ 0015e904 */
    uVar1 = _ZN8uu_sleep6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h956a527a0747d9a7E();
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hb43f2142a76103deE
              (local_358);
  }
  else {
    local_2e8 = local_360;
    local_2f8 = uStack_370;
    uStack_2f4 = uStack_36c;
    uStack_2f0 = local_368;
    uStack_2ec = uStack_364;
    local_308 = uStack_380;
    uStack_304 = uStack_37c;
    uStack_300 = uStack_378;
    uStack_2fc = uStack_374;
    local_320 = local_398;
    local_318 = local_390;
    uStack_314 = uStack_38c;
    uStack_310 = uStack_388;
    uStack_30c = uStack_384;
    _ZN4core4iter6traits8iterator8Iterator7collect17hb2a1de42d0a33a0dE(&local_3b0,&local_320);
                    /* try { // try from 0015e89b to 0015e8a3 has its CatchHandler @ 0015e8f2 */
    uVar1 = (*(code *)PTR__ZN8uu_sleep5sleep17hed540e60219cbc17E_002043c8)(local_3a8,local_3a0);
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hd5e71cccc40a16fdE
              (local_3b0,local_3a8);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hb43f2142a76103deE
              (local_358);
  }
  return uVar1;
}