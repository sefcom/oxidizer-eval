undefined  [16] __rustcall uu_df::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined auVar5 [16];
  undefined local_450 [8];
  undefined8 local_448;
  long local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  long local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  long local_418;
  long local_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  long local_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  long local_360 [2];
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
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  
  (*(code *)PTR_uu_app_00246820)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_3b8,&local_2e8,param_1,param_2);
  if (local_3b8 == -0x8000000000000000) {
    auVar5 = (*(code *)PTR_from_00246828)();
    return auVar5;
  }
  local_340 = uStack_398;
  uStack_33c = uStack_394;
  uStack_338 = uStack_390;
  uStack_334 = uStack_38c;
  local_350 = uStack_3a8;
  uStack_34c = uStack_3a4;
  uStack_348 = uStack_3a0;
  uStack_344 = uStack_39c;
  local_360[0] = local_3b8;
                    /* try { // try from 00173f5b to 00173fc0 has its CatchHandler @ 00174349 */
  (*(code *)PTR_from_00246830)(&local_2e8,local_360);
  if (CONCAT44(uStack_2e4,local_2e8) == -0x8000000000000000) {
    core::ops::function::FnOnce::call_once(&local_3f8);
    uStack_430._0_4_ = (undefined4)uStack_3f0;
    uStack_430._4_4_ = uStack_3f0._4_4_;
    local_428 = (long)local_3e8;
    uStack_420 = (undefined4)uStack_3e0;
    uStack_41c = uStack_3e0._4_4_;
    local_2d8 = (long)local_3e8;
    uStack_2d0 = (undefined4)uStack_3e0;
    uStack_2cc = uStack_3e0._4_4_;
    local_2e8 = (undefined4)local_3f8;
    uStack_2e4 = local_3f8._4_4_;
    uStack_2e0 = (undefined4)uStack_3f0;
    uStack_2dc = uStack_3f0._4_4_;
    uVar3 = ::alloc::boxed::Box<T>::new(&local_2e8);
    ppuVar4 = &PTR_drop_in_place<uu_df_DfError>_0023f820;
  }
  else {
    uStack_390 = local_2c0;
    uStack_38c = uStack_2bc;
    local_388 = uStack_2b8;
    uStack_384 = uStack_2b4;
    local_380 = local_2b0;
    uStack_37c = uStack_2ac;
    uStack_378 = uStack_2a8;
    uStack_374 = uStack_2a4;
    local_370 = local_2a0;
    uStack_36c = uStack_29c;
    uStack_368 = uStack_298;
    uStack_364 = uStack_294;
    local_438._0_4_ = uStack_2e0;
    local_438._4_4_ = uStack_2dc;
    uStack_430._0_4_ = (undefined4)local_2d8;
    uStack_430._4_4_ = local_2d8._4_4_;
    local_3b0 = uStack_2e0;
    uStack_3ac = uStack_2dc;
    uStack_3a8 = (undefined4)local_2d8;
    uStack_3a4 = local_2d8._4_4_;
    uStack_3a0 = uStack_2d0;
    uStack_39c = uStack_2cc;
    uStack_398 = uStack_2c8;
    uStack_394 = uStack_2c4;
    uVar3 = *(undefined8 *)PTR_OPT_PATHS_00246838;
    uVar1 = *(ulong *)(PTR_OPT_PATHS_00246838 + 8);
                    /* try { // try from 00174032 to 001740bc has its CatchHandler @ 0017434e */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2e8,local_360,uVar3,uVar1);
    clap_builder::parser::error::MatchesError::unwrap(&local_3f8,uVar3,uVar1,&local_2e8);
    if (local_3f8 == (undefined *)0x0) {
                    /* try { // try from 0017410d to 00174200 has its CatchHandler @ 0017434e */
      (*(code *)PTR_get_all_filesystems_00246840)(&local_2e8,&local_3b8);
      local_418 = CONCAT44(uStack_2e4,local_2e8);
      if (local_418 == -0x8000000000000000) {
        uVar3 = uumain::___closure__();
      }
      else {
        local_440 = local_2d8;
        if (local_2d8 != 0) {
          local_408 = local_2d8;
          goto LAB_001741c5;
        }
                    /* try { // try from 0017429a to 001742d5 has its CatchHandler @ 00174319 */
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_438);
        local_2d8 = local_428;
        local_2e8 = (undefined4)local_438;
        uStack_2e4 = local_438._4_4_;
        uStack_2e0 = (undefined4)uStack_430;
        uStack_2dc = uStack_430._4_4_;
        uStack_2d0 = 1;
        uVar3 = ::alloc::boxed::Box<T>::new(&local_2e8);
                    /* try { // try from 001742d6 to 001742e2 has its CatchHandler @ 0017434e */
        core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(local_450);
      }
      ppuVar4 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0023f6b0;
    }
    else {
      local_2f8 = local_3c8;
      uStack_2f4 = uStack_3c4;
      uStack_2f0 = uStack_3c0;
      uStack_2ec = uStack_3bc;
      local_308 = (undefined4)local_3d8;
      uStack_304 = local_3d8._4_4_;
      uStack_300 = uStack_3d0;
      uStack_2fc = uStack_3cc;
      local_318 = (undefined4)local_3e8;
      uStack_314 = local_3e8._4_4_;
      uStack_310 = (undefined4)uStack_3e0;
      uStack_30c = uStack_3e0._4_4_;
      local_328 = (undefined4)local_3f8;
      uStack_324 = local_3f8._4_4_;
      uStack_320 = (undefined4)uStack_3f0;
      uStack_31c = uStack_3f0._4_4_;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (local_450,&local_328);
                    /* try { // try from 001740c7 to 001740fd has its CatchHandler @ 0017433a */
      get_named_filesystems(&local_2e8,local_448,local_440,&local_3b8);
      local_418 = CONCAT44(uStack_2e4,local_2e8);
      if (local_418 == -0x8000000000000000) {
        uVar3 = uumain::___closure__();
        ppuVar4 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0023f6b0;
      }
      else {
        local_428 = local_2d8;
        uStack_430._0_4_ = uStack_2e0;
        uStack_430._4_4_ = uStack_2dc;
        if (local_2d8 != 0) {
          local_408 = local_2d8;
          core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(local_450);
LAB_001741c5:
          local_3e8 = (undefined8 *)local_408;
          local_3f8 = (undefined *)local_418;
          (*(code *)PTR_new_00246848)(&local_2e8,&local_3b8,&local_3f8);
          uStack_430 = PTR_fmt_00246850;
          local_3f8 = &DAT_0023f7a8;
          uStack_3f0 = 2;
          local_3d8 = 0;
          local_3e8 = &local_438;
          uStack_3e0 = 1;
                    /* try { // try from 00174246 to 00174250 has its CatchHandler @ 00174328 */
          local_438 = &local_2e8;
          (*(code *)PTR__print_00246858)(&local_3f8);
                    /* try { // try from 00174251 to 0017425d has its CatchHandler @ 0017434e */
          core::ptr::drop_in_place<uu_df::table::Table>(&local_2e8);
                    /* try { // try from 0017425e to 0017426a has its CatchHandler @ 00174349 */
          core::ptr::drop_in_place<uu_df::Options>(&local_3b8);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                    (local_360);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar1;
          return auVar5 << 0x40;
        }
                    /* try { // try from 0017427f to 00174288 has its CatchHandler @ 0017433a */
        core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(&local_438);
        ppuVar4 = (undefined **)0x0;
        uVar3 = 0;
      }
                    /* try { // try from 0017428e to 00174297 has its CatchHandler @ 0017434e */
      core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(local_450);
    }
                    /* try { // try from 001742ea to 001742f6 has its CatchHandler @ 00174349 */
    core::ptr::drop_in_place<uu_df::Options>(&local_3b8);
  }
  auVar2._8_8_ = ppuVar4;
  auVar2._0_8_ = uVar3;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_360);
  return auVar2;
}