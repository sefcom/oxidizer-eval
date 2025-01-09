undefined  [16] __rustcall uu_paste::uumain::uumain(undefined8 param_1,undefined8 param_2)

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
  
  (*(code *)PTR_uu_app_00216f30)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_3a0,&local_2e8,param_1,param_2);
  if (CONCAT44(uStack_39c,local_3a0) == -0x8000000000000000) {
    auVar7 = (*(code *)PTR_from_00216f38)();
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
  uVar2 = (*(code *)PTR_get_flag_00216f40)(local_360,"serial",6);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2e8,local_360,"delimiters",10);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap("delimiters",10,&local_2e8);
  if (lVar4 == 0) {
    ppuVar5 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00210da0;
  }
  else {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2e8,local_360,"file",4);
    clap_builder::parser::error::MatchesError::unwrap(&local_3a0,"file",4,&local_2e8);
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
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_3a0,&local_328);
                    /* try { // try from 00162e53 to 00162e69 has its CatchHandler @ 00162ee8 */
      cVar3 = (*(code *)PTR_get_flag_00216f40)
                        (local_360,
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
      auVar7 = (*(code *)PTR_paste_00216f48)
                         (&local_2e8,uVar2,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),
                          uVar6);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_360);
      return auVar7;
    }
    ppuVar5 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00210db8;
  }
                    /* try { // try from 00162ede to 00162ee3 has its CatchHandler @ 00162ef7 */
  (*(code *)PTR_unwrap_failed_00216f50)(ppuVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}