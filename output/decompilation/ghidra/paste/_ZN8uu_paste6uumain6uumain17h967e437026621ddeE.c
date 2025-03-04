undefined  [16]
_ZN8uu_paste6uumain6uumain17h967e437026621ddeE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined uVar2;
  char cVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined local_360 [16];
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
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
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  
  (*(code *)PTR__ZN8uu_paste6uu_app17h87aafd5fcd701ee2E_00216f30)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h432ea8e08ddeef92E
            (&local_3a0,&local_2e8,param_1,param_2);
  if (CONCAT44(uStack_39c,local_3a0) == -0x8000000000000000) {
    auVar7 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00216f38
             )();
    return auVar7;
  }
  local_340 = local_380;
  uStack_33c = uStack_37c;
  uStack_338 = uStack_378;
  uStack_334 = uStack_374;
  local_350 = local_390;
  uStack_34c = uStack_38c;
  uStack_348 = uStack_388;
  uStack_344 = uStack_384;
                    /* try { // try from 00162d69 to 00162e52 has its CatchHandler @ 00162ef7 */
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00216f40
          )(local_360,"serial",6);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h57227010f103cd0dE
            (&local_2e8,local_360,"delimiters",10);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h0991818dee6e6288E
                    ("delimiters",10,&local_2e8);
  if (lVar4 == 0) {
    ppuVar5 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00210da0;
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hc81f2305348f416fE
              (&local_2e8,local_360,"file",4);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h7e58b49d533eae37E
              (&local_3a0,"file",4,&local_2e8);
    if (CONCAT44(uStack_39c,local_3a0) != 0) {
      local_2f8 = local_370;
      uStack_2f4 = uStack_36c;
      uStack_2f0 = uStack_368;
      uStack_2ec = uStack_364;
      local_308 = local_380;
      uStack_304 = uStack_37c;
      uStack_300 = uStack_378;
      uStack_2fc = uStack_374;
      local_318 = local_390;
      uStack_314 = uStack_38c;
      uStack_310 = uStack_388;
      uStack_30c = uStack_384;
      local_328 = local_3a0;
      uStack_324 = uStack_39c;
      uStack_320 = uStack_398;
      uStack_31c = uStack_394;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h752fd5cc24101cd6E
                (&local_3a0,&local_328);
                    /* try { // try from 00162e53 to 00162e69 has its CatchHandler @ 00162ee8 */
      cVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00216f40
              )(local_360,
                "zero-terminatedMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/iter/traits/exact_size.rscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs"
                ,0xf);
      local_2e8 = local_3a0;
      uStack_2e4 = uStack_39c;
      uStack_2e0 = uStack_398;
      uStack_2dc = uStack_394;
      uVar6 = 10;
      if (cVar3 != '\0') {
        uVar6 = 0;
      }
                    /* try { // try from 00162e9a to 00162eaa has its CatchHandler @ 00162ee6 */
      auVar7 = (*(code *)PTR__ZN8uu_paste5paste17he585c60ea6ad59b1E_00216f48)
                         (&local_2e8,uVar2,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),
                          uVar6);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hcb2544864fe14ef9E
                (local_360);
      return auVar7;
    }
    ppuVar5 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00210db8;
  }
                    /* try { // try from 00162ede to 00162ee3 has its CatchHandler @ 00162ef7 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h0e11329e76906eaaE_00216f50)(ppuVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}