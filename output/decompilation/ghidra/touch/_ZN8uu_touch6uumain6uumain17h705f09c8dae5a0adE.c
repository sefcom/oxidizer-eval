undefined  [16] __rustcall uu_touch::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined uVar4;
  undefined uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined auVar10 [16];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined **local_428;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  long local_3d0 [2];
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined **local_388;
  undefined local_380 [8];
  undefined8 local_378;
  undefined8 local_370;
  long local_368;
  undefined8 uStack_360;
  undefined **local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  long local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined **local_2e8;
  long local_2e0;
  undefined8 uStack_2d8;
  undefined **local_2d0;
  undefined local_2c8;
  undefined local_2c7;
  undefined local_2c6;
  undefined local_2c5;
  
  (*(code *)PTR_uu_app_00450b28)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_418,&local_2f8,param_1,param_2);
  if (local_418 == -0x8000000000000000) {
    auVar10 = (*(code *)PTR_from_00450b30)();
    return auVar10;
  }
  local_3b0 = uStack_3f8;
  uStack_3ac = uStack_3f4;
  uStack_3a8 = (undefined4)uStack_3f0;
  uStack_3a4 = uStack_3f0._4_4_;
  local_3c0 = (undefined4)uStack_408;
  uStack_3bc = uStack_408._4_4_;
  uStack_3b8 = uStack_400;
  uStack_3b4 = uStack_3fc;
  local_3d0[0] = local_418;
  uVar8 = *(undefined8 *)PTR_ARG_FILES_00450b38;
  uVar1 = *(undefined8 *)(PTR_ARG_FILES_00450b38 + 8);
                    /* try { // try from 00273b51 to 00273bdf has its CatchHandler @ 00273f85 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2f8,local_3d0,uVar8,uVar1);
  clap_builder::parser::error::MatchesError::unwrap(&local_418,uVar8,uVar1,&local_2f8);
  if (local_418 == 0) {
                    /* try { // try from 00273d1d to 00273d21 has its CatchHandler @ 00273f85 */
    uVar8 = uumain::___closure__();
    ppuVar9 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0040e0e8;
    goto LAB_00273ee6;
  }
  local_300 = local_3e0;
  local_310 = (undefined4)uStack_3f0;
  uStack_30c = uStack_3f0._4_4_;
  uStack_308 = local_3e8;
  uStack_304 = uStack_3e4;
  local_320 = uStack_400;
  uStack_31c = uStack_3fc;
  uStack_318 = uStack_3f8;
  uStack_314 = uStack_3f4;
  local_338 = local_418;
  local_330 = uStack_410;
  uStack_32c = uStack_40c;
  uStack_328 = (undefined4)uStack_408;
  uStack_324 = uStack_408._4_4_;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_380,&local_338);
                    /* try { // try from 00273bee to 00273c8e has its CatchHandler @ 00273f8a */
  uVar4 = (*(code *)PTR_get_flag_00450b48)
                    (local_3d0,*(undefined8 *)PTR_NO_DEREF_00450b40,
                     *(undefined8 *)(PTR_NO_DEREF_00450b40 + 8));
  uVar8 = *(undefined8 *)PTR_REFERENCE_00450b50;
  uVar1 = *(undefined8 *)(PTR_REFERENCE_00450b50 + 8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2f8,local_3d0,uVar8,uVar1);
  lVar6 = clap_builder::parser::error::MatchesError::unwrap(uVar8,uVar1,&local_2f8);
  uVar8 = *(undefined8 *)PTR_TIMESTAMP_00450b58;
  uVar1 = *(undefined8 *)(PTR_TIMESTAMP_00450b58 + 8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2f8,local_3d0,uVar8,uVar1);
  lVar7 = clap_builder::parser::error::MatchesError::unwrap(uVar8,uVar1,&local_2f8);
  if (lVar6 == 0) {
    if (lVar7 == 0) {
      local_438 = -0x7fffffffffffffff;
      goto LAB_00273ca8;
    }
                    /* try { // try from 00273d42 to 00273d4f has its CatchHandler @ 00273f8a */
    (*(code *)PTR_parse_timestamp_00450b78)
              (&local_2f8,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
    if (CONCAT44(uStack_2f4,local_2f8) == 0) {
      uStack_430 = CONCAT44(uStack_2ec,uStack_2f0);
      local_428 = (undefined **)CONCAT44(local_428._4_4_,local_2e8._0_4_);
      local_438 = -0x8000000000000000;
      goto LAB_00273ca8;
    }
    uVar8 = CONCAT44(uStack_2ec,uStack_2f0);
    ppuVar9 = local_2e8;
  }
  else {
    (*(code *)PTR_to_owned_00450b60)
              (&local_2f8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    local_428 = local_2e8;
    local_438 = CONCAT44(uStack_2f4,local_2f8);
    uStack_430 = CONCAT44(uStack_2ec,uStack_2f0);
LAB_00273ca8:
    uVar2 = *(ulong *)PTR_DATE_00450b68;
    uVar8 = *(undefined8 *)(PTR_DATE_00450b68 + 8);
                    /* try { // try from 00273cb6 to 00273cfa has its CatchHandler @ 00273f78 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_2f8,local_3d0,uVar2,uVar8);
    lVar6 = clap_builder::parser::error::MatchesError::unwrap(uVar2,uVar8,&local_2f8);
    if (lVar6 == 0) {
      local_398 = 0x8000000000000000;
    }
    else {
      (*(code *)PTR_clone_00450b70)(&local_2f8,lVar6);
      local_388 = local_2e8;
      local_398 = CONCAT44(uStack_2f4,local_2f8);
      uStack_390 = uStack_2f0;
      uStack_38c = uStack_2ec;
    }
                    /* try { // try from 00273d8a to 00273d94 has its CatchHandler @ 00273f54 */
    uVar5 = (*(code *)PTR_get_flag_00450b48)
                      (local_3d0,*(undefined8 *)PTR_NO_CREATE_00450b80,
                       *(undefined8 *)(PTR_NO_CREATE_00450b80 + 8));
    local_358 = local_428;
    local_368 = local_438;
    uStack_360 = uStack_430;
    uStack_408 = local_388;
    local_418._0_4_ = (undefined4)local_398;
    local_418._4_4_ = local_398._4_4_;
    uStack_410 = uStack_390;
    uStack_40c = uStack_38c;
                    /* try { // try from 00273dca to 00273dd4 has its CatchHandler @ 00273f38 */
    local_2c5 = (*(code *)PTR_determine_atime_mtime_change_00450b88)(local_3d0);
    local_2e0 = local_368;
    uStack_2d8 = uStack_360;
    local_2d0 = local_358;
    local_2f8 = (undefined4)local_418;
    uStack_2f4 = local_418._4_4_;
    uStack_2f0 = uStack_410;
    uStack_2ec = uStack_40c;
    local_2e8 = uStack_408;
    local_2c6 = 0;
                    /* try { // try from 00273e3d to 00273e52 has its CatchHandler @ 00273f66 */
    local_2c8 = uVar5;
    local_2c7 = uVar4;
    (*(code *)PTR_touch_00450b90)(&local_368,local_378,local_370,&local_2f8);
    if (local_368 == -0x7ffffffffffffffc) {
                    /* try { // try from 00273e64 to 00273e70 has its CatchHandler @ 00273f36 */
      core::ptr::drop_in_place<uu_touch::Options>(&local_2f8);
                    /* try { // try from 00273e71 to 00273e7d has its CatchHandler @ 00273f85 */
      core::ptr::drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>(local_380);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_3d0);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar2;
      return auVar10 << 0x40;
    }
    uStack_3f0 = local_340;
    uStack_400 = local_350;
    uStack_3fc = uStack_34c;
    uStack_3f8 = uStack_348;
    uStack_3f4 = uStack_344;
    uStack_410 = (undefined4)uStack_360;
    uStack_40c = uStack_360._4_4_;
    uStack_408 = local_358;
    local_418 = local_368;
                    /* try { // try from 00273eb8 to 00273ec1 has its CatchHandler @ 00273f66 */
    uVar8 = ::alloc::boxed::Box<T>::new(&local_418);
                    /* try { // try from 00273ec2 to 00273ed1 has its CatchHandler @ 00273f36 */
    core::ptr::drop_in_place<uu_touch::Options>(&local_2f8);
    ppuVar9 = &PTR_drop_in_place<uu_touch_error_TouchError>_0040e020;
  }
                    /* try { // try from 00273ed9 to 00273ee5 has its CatchHandler @ 00273f85 */
  core::ptr::drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>(local_380);
LAB_00273ee6:
  auVar3._8_8_ = ppuVar9;
  auVar3._0_8_ = uVar8;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_3d0);
  return auVar3;
}