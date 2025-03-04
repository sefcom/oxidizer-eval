undefined  [16]
_ZN8uu_sleep6uumain6uumain17hb48cd8deb42f88c8E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_3b0 [8];
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
  
  (*(code *)PTR__ZN8uu_sleep6uu_app17h7f221250c3adad43E_0021ab10)(local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hbd40256cc2cf125eE
            (&local_398,local_2e0,param_1,param_2);
  if (local_398 == -0x8000000000000000) {
    auVar2 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0021ab18
             )();
  }
  else {
    local_338 = uStack_378;
    uStack_334 = uStack_374;
    uStack_330 = uStack_370;
    uStack_32c = uStack_36c;
    local_348 = uStack_388;
    uStack_344 = uStack_384;
    uStack_340 = uStack_380;
    uStack_33c = uStack_37c;
    local_358[0] = local_398;
                    /* try { // try from 001622ae to 00162341 has its CatchHandler @ 001623a9 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hf38ba5ff74f42866E
              (local_2e0,local_358,"NUMBER",6);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17hea6b78228c129aa9E
              (&local_398,"NUMBER",6,local_2e0);
    if (local_398 == 0) {
                    /* try { // try from 0016236e to 00162372 has its CatchHandler @ 001623a9 */
      uVar1 = _ZN8uu_sleep6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h73c29d1253cb1db0E();
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hc32700fa5920fcddE
                (local_358);
      auVar2._8_8_ = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h8de536e73c7780c0E_00214390
      ;
      auVar2._0_8_ = uVar1;
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
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h0792a09e5940ffc1E
                (local_3b0,&local_320);
                    /* try { // try from 0016234c to 00162351 has its CatchHandler @ 0016239a */
      auVar2 = (*(code *)PTR__ZN8uu_sleep5sleep17h137a23986a4540a5E_0021ab20)(local_3a8,local_3a0);
                    /* try { // try from 00162352 to 00162361 has its CatchHandler @ 001623a9 */
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h46204c2f7a452ad4E
                (local_3b0);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hc32700fa5920fcddE
                (local_358);
    }
  }
  return auVar2;
}