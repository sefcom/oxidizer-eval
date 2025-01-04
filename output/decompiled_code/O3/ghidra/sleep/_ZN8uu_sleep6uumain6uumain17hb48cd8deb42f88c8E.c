undefined  [16] __rustcall uu_sleep::uumain::uumain(undefined8 param_1,undefined8 param_2)

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
  
  (*(code *)PTR_uu_app_0021ab10)(local_2e0);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_398,local_2e0,param_1,param_2);
  if (local_398 == -0x8000000000000000) {
    auVar2 = (*(code *)PTR_from_0021ab18)();
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
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (local_2e0,local_358,"NUMBER",6);
    clap_builder::parser::error::MatchesError::unwrap(&local_398,"NUMBER",6,local_2e0);
    if (local_398 == 0) {
                    /* try { // try from 0016236e to 00162372 has its CatchHandler @ 001623a9 */
      uVar1 = uumain::___closure__();
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_358);
      auVar2._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00214390;
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
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (local_3b0,&local_320);
                    /* try { // try from 0016234c to 00162351 has its CatchHandler @ 0016239a */
      auVar2 = (*(code *)PTR_sleep_0021ab20)(local_3a8,local_3a0);
                    /* try { // try from 00162352 to 00162361 has its CatchHandler @ 001623a9 */
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(local_3b0);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_358);
    }
  }
  return auVar2;
}