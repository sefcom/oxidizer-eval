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
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  undefined local_3d0 [16];
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
  undefined8 local_368;
  undefined8 uStack_360;
  undefined **local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined local_338 [8];
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
  
  (*(code *)PTR_uu_app_00450fb0)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_418,&local_2f8,param_1,param_2);
  if (CONCAT44(uStack_414,local_418) == -0x8000000000000000) {
    auVar10 = (*(code *)PTR_from_00450fb8)();
    return auVar10;
  }
  local_3b0 = uStack_3f8;
  uStack_3ac = uStack_3f4;
  uStack_3a8 = uStack_3f0;
  uStack_3a4 = uStack_3ec;
  local_3c0 = (undefined4)uStack_408;
  uStack_3bc = uStack_408._4_4_;
  uStack_3b8 = uStack_400;
  uStack_3b4 = uStack_3fc;
  uVar8 = *(undefined8 *)PTR_ARG_FILES_00450fc0;
  uVar1 = *(undefined8 *)(PTR_ARG_FILES_00450fc0 + 8);
                    /* try { // try from 00273401 to 0027348f has its CatchHandler @ 0027382d */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2f8,local_3d0,uVar8,uVar1);
  clap_builder::parser::error::MatchesError::unwrap(&local_418,uVar8,uVar1,&local_2f8);
  if (CONCAT44(uStack_414,local_418) == 0) {
                    /* try { // try from 002735cd to 002735d1 has its CatchHandler @ 0027382d */
    uVar8 = uumain::___closure__();
    ppuVar9 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0040e368;
    goto LAB_0027378e;
  }
  local_300 = local_3e0;
  local_310 = uStack_3f0;
  uStack_30c = uStack_3ec;
  uStack_308 = local_3e8;
  uStack_304 = uStack_3e4;
  local_320 = uStack_400;
  uStack_31c = uStack_3fc;
  uStack_318 = uStack_3f8;
  uStack_314 = uStack_3f4;
  local_330 = uStack_410;
  uStack_32c = uStack_40c;
  uStack_328 = (undefined4)uStack_408;
  uStack_324 = uStack_408._4_4_;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_380,local_338);
                    /* try { // try from 0027349e to 0027353e has its CatchHandler @ 00273832 */
  uVar4 = (*(code *)PTR_get_flag_00450fd0)
                    (local_3d0,*(undefined8 *)PTR_NO_DEREF_00450fc8,
                     *(undefined8 *)(PTR_NO_DEREF_00450fc8 + 8));
  uVar8 = *(undefined8 *)PTR_REFERENCE_00450fd8;
  uVar1 = *(undefined8 *)(PTR_REFERENCE_00450fd8 + 8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2f8,local_3d0,uVar8,uVar1);
  lVar6 = clap_builder::parser::error::MatchesError::unwrap(uVar8,uVar1,&local_2f8);
  uVar8 = *(undefined8 *)PTR_TIMESTAMP_00450fe0;
  uVar1 = *(undefined8 *)(PTR_TIMESTAMP_00450fe0 + 8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2f8,local_3d0,uVar8,uVar1);
  lVar7 = clap_builder::parser::error::MatchesError::unwrap(uVar8,uVar1,&local_2f8);
  if (lVar6 == 0) {
    if (lVar7 == 0) {
      local_438 = -0x7fffffffffffffff;
      goto LAB_00273558;
    }
                    /* try { // try from 002735f2 to 002735ff has its CatchHandler @ 00273832 */
    (*(code *)PTR_parse_timestamp_00451000)
              (&local_2f8,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
    if (CONCAT44(uStack_2f4,local_2f8) == 0) {
      uStack_430 = CONCAT44(uStack_2ec,uStack_2f0);
      local_428 = (undefined **)CONCAT44(local_428._4_4_,local_2e8._0_4_);
      local_438 = -0x8000000000000000;
      goto LAB_00273558;
    }
    uVar8 = CONCAT44(uStack_2ec,uStack_2f0);
    ppuVar9 = local_2e8;
  }
  else {
    (*(code *)PTR_to_owned_00450fe8)
              (&local_2f8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    local_428 = local_2e8;
    local_438 = CONCAT44(uStack_2f4,local_2f8);
    uStack_430 = CONCAT44(uStack_2ec,uStack_2f0);
LAB_00273558:
    uVar2 = *(ulong *)PTR_DATE_00450ff0;
    uVar8 = *(undefined8 *)(PTR_DATE_00450ff0 + 8);
                    /* try { // try from 00273566 to 002735aa has its CatchHandler @ 00273820 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_2f8,local_3d0,uVar2,uVar8);
    lVar6 = clap_builder::parser::error::MatchesError::unwrap(uVar2,uVar8,&local_2f8);
    if (lVar6 == 0) {
      local_398 = 0x8000000000000000;
    }
    else {
      (*(code *)PTR_clone_00450ff8)(&local_2f8,lVar6);
      local_388 = local_2e8;
      local_398 = CONCAT44(uStack_2f4,local_2f8);
      uStack_390 = uStack_2f0;
      uStack_38c = uStack_2ec;
    }
                    /* try { // try from 0027363a to 00273644 has its CatchHandler @ 002737fc */
    uVar5 = (*(code *)PTR_get_flag_00450fd0)
                      (local_3d0,*(undefined8 *)PTR_NO_CREATE_00451008,
                       *(undefined8 *)(PTR_NO_CREATE_00451008 + 8));
    local_358 = local_428;
    local_368 = local_438;
    uStack_360 = uStack_430;
    uStack_408 = local_388;
    local_418 = (undefined4)local_398;
    uStack_414 = local_398._4_4_;
    uStack_410 = uStack_390;
    uStack_40c = uStack_38c;
                    /* try { // try from 0027367a to 00273684 has its CatchHandler @ 002737e0 */
    local_2c5 = (*(code *)PTR_determine_atime_mtime_change_00451010)(local_3d0);
    local_2e0 = local_368;
    uStack_2d8 = uStack_360;
    local_2d0 = local_358;
    local_2f8 = local_418;
    uStack_2f4 = uStack_414;
    uStack_2f0 = uStack_410;
    uStack_2ec = uStack_40c;
    local_2e8 = uStack_408;
    local_2c6 = 0;
                    /* try { // try from 002736ed to 00273702 has its CatchHandler @ 0027380e */
    local_2c8 = uVar5;
    local_2c7 = uVar4;
    (*(code *)PTR_touch_00451018)(&local_368,local_378,local_370,&local_2f8);
    if (local_368 == -0x7ffffffffffffffc) {
                    /* try { // try from 00273711 to 0027371d has its CatchHandler @ 002737de */
      core::ptr::drop_in_place<uu_touch::Options>(&local_2f8);
                    /* try { // try from 0027371e to 0027372a has its CatchHandler @ 0027382d */
      core::ptr::drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>(local_380);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_3d0);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar2;
      return auVar10 << 0x40;
    }
    uStack_3f8 = local_348;
    uStack_3f4 = uStack_344;
    uStack_3f0 = uStack_340;
    uStack_3ec = uStack_33c;
    uStack_408 = local_358;
    uStack_400 = uStack_350;
    uStack_3fc = uStack_34c;
    local_418 = (undefined4)local_368;
    uStack_414 = local_368._4_4_;
    uStack_410 = (undefined4)uStack_360;
    uStack_40c = uStack_360._4_4_;
                    /* try { // try from 00273760 to 00273769 has its CatchHandler @ 0027380e */
    uVar8 = ::alloc::boxed::Box<T>::new(&local_418);
                    /* try { // try from 0027376a to 00273779 has its CatchHandler @ 002737de */
    core::ptr::drop_in_place<uu_touch::Options>(&local_2f8);
    ppuVar9 = &PTR_drop_in_place<uu_touch_error_TouchError>_0040e2a0;
  }
                    /* try { // try from 00273781 to 0027378d has its CatchHandler @ 0027382d */
  core::ptr::drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>(local_380);
LAB_0027378e:
  auVar3._8_8_ = ppuVar9;
  auVar3._0_8_ = uVar8;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_3d0);
  return auVar3;
}