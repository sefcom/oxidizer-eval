undefined  [16] __rustcall uu_mv::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined auVar16 [16];
  undefined **local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined local_448;
  undefined uStack_447;
  undefined uStack_446;
  undefined uStack_445;
  undefined uStack_444;
  char cStack_443;
  char cStack_442;
  byte bStack_441;
  undefined **local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined **local_418;
  undefined **local_410;
  undefined **local_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined **local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined **local_388;
  undefined local_380 [8];
  undefined8 local_378;
  long local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined **local_358;
  undefined **local_350;
  undefined **local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 local_320;
  undefined8 local_318;
  undefined local_310 [24];
  undefined local_2f8 [712];
  
  (*(code *)PTR_uu_app_0028cf08)(local_2f8);
                    /* try { // try from 001929f8 to 00192a29 has its CatchHandler @ 00193009 */
  clap_builder::builder::command::Command::try_get_matches_from_mut
            (&local_478,local_2f8,param_1,param_2);
  puVar3 = PTR_ARG_FILES_0028cf18;
  if (local_478 == (undefined **)0x8000000000000000) {
    auVar16 = (*(code *)PTR_from_0028cf10)();
    goto LAB_00192c1f;
  }
  local_3f0 = (undefined4)local_458;
  uStack_3ec = local_458._4_4_;
  uStack_3e8 = (undefined4)uStack_450;
  uStack_3e4 = uStack_450._4_4_;
  local_400 = (undefined4)local_468;
  uStack_3fc = local_468._4_4_;
  uStack_3f8 = (undefined4)uStack_460;
  uStack_3f4 = uStack_460._4_4_;
  local_410 = local_478;
  local_408 = uStack_470;
  uVar14 = *(undefined8 *)PTR_ARG_FILES_0028cf18;
  uVar1 = *(undefined8 *)(PTR_ARG_FILES_0028cf18 + 8);
                    /* try { // try from 00192a78 to 00192b3e has its CatchHandler @ 00192ffa */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_478,&local_410,uVar14,uVar1);
  clap_builder::parser::error::MatchesError::unwrap(&local_3d8,uVar14,uVar1,&local_478);
  if (local_3d8 == (undefined **)0x0) {
    local_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    local_340 = SUB84(PTR_EMPTY_0028cf20,0);
    uStack_33c = (undefined4)((ulong)PTR_EMPTY_0028cf20 >> 0x20);
    uStack_338 = 0;
    uStack_3bc = 0;
    local_350 = (undefined **)core::ops::function::FnOnce::call_once;
    local_3a0 = 0;
    local_348 = (undefined **)PTR_EMPTY_0028cf20;
  }
  else {
    local_350 = local_3d8;
    local_348 = (undefined **)uStack_3d0;
    uVar14 = local_3a8;
    local_340 = (undefined4)local_3c8;
    uStack_33c = local_3c8._4_4_;
    uStack_338 = uStack_3c0;
  }
  uStack_334 = uStack_3bc;
  local_330 = local_3b8;
  uStack_32c = uStack_3b4;
  uStack_328 = uStack_3b0;
  uStack_324 = uStack_3ac;
  local_320 = uVar14;
  local_318 = local_3a0;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_380,&local_350);
                    /* try { // try from 00192b58 to 00192bfd has its CatchHandler @ 00192fe8 */
  if ((local_370 == 1) &&
     (cVar5 = (*(code *)PTR_contains_id_0028cf30)
                        (&local_410,*(undefined8 *)PTR_OPT_TARGET_DIRECTORY_0028cf28,
                         *(undefined8 *)(PTR_OPT_TARGET_DIRECTORY_0028cf28 + 8)), cVar5 == '\0')) {
    local_3d8 = (undefined **)puVar3;
    uStack_3d0 = _<&T_as_core::fmt::Display>::fmt;
    local_478 = &PTR_s_The_argument__<>_____requires_at_00283e98;
    uStack_470 = (undefined **)0x2;
    local_458 = (undefined **)0x0;
    uStack_460 = (undefined **)0x1;
                    /* try { // try from 00192f42 to 00192f75 has its CatchHandler @ 00192fe8 */
    local_468 = &local_3d8;
    core::option::Option<T>::map_or_else(local_310,&local_478);
    uVar14 = clap_builder::error::Error<F>::raw(6,local_310);
    local_478 = (undefined **)clap_builder::error::Error<F>::format(uVar14,local_2f8);
                    /* try { // try from 00192f7e to 00192f87 has its CatchHandler @ 00192f8a */
    clap_builder::error::Error<F>::exit(&local_478);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar5 = (*(code *)PTR_determine_overwrite_mode_0028cf38)(&local_410);
  (*(code *)PTR_determine_backup_mode_0028cf40)(&local_478,&local_410);
  ppuVar15 = uStack_470;
  ppuVar12 = local_478;
  if (local_478 == (undefined **)0x0) {
    cVar4 = (char)uStack_470;
    bVar6 = (*(code *)PTR_determine_update_mode_0028cf48)(&local_410);
    if ((cVar4 == '\0') || ((cVar5 != '\0' && ((bVar6 | 2) != 3)))) {
                    /* try { // try from 00192c44 to 00192c56 has its CatchHandler @ 00192fe8 */
      (*(code *)PTR_determine_backup_suffix_0028cf50)(&local_368,&local_410);
      uVar14 = *(undefined8 *)PTR_OPT_TARGET_DIRECTORY_0028cf28;
      uVar1 = *(undefined8 *)(PTR_OPT_TARGET_DIRECTORY_0028cf28 + 8);
                    /* try { // try from 00192c65 to 00192c9f has its CatchHandler @ 00192fb7 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_478,&local_410,uVar14,uVar1);
      lVar13 = clap_builder::parser::error::MatchesError::unwrap(uVar14,uVar1,&local_478);
      if (lVar13 == 0) {
        local_428 = (undefined **)0x8000000000000000;
      }
      else {
        core::ops::function::FnOnce::call_once(&local_478,lVar13);
        local_418 = (undefined **)local_468;
        local_428 = local_478;
        uStack_420 = (undefined4)uStack_470;
        uStack_41c = uStack_470._4_4_;
                    /* try { // try from 00192cc9 to 00192d39 has its CatchHandler @ 00192f97 */
        if ((local_478 != (undefined **)0x8000000000000000) &&
           (cVar7 = (*(code *)PTR_is_dir_0028cf58)(uStack_470,local_468), cVar7 == '\0')) {
          local_3d8 = (undefined **)0x1;
          uStack_3d0 = (code *)CONCAT44(uStack_41c,uStack_420);
          local_3c8 = local_418;
          uStack_3c0 = CONCAT31(uStack_3c0._1_3_,1);
          _<T_as_alloc::string::ToString>::to_string(&local_398,&local_3d8);
          uStack_460 = local_388;
          uStack_470 = (undefined **)CONCAT44(uStack_394,local_398);
          local_468 = (undefined ***)CONCAT44(uStack_38c,uStack_390);
          local_478 = (undefined **)0x8;
          ppuVar12 = (undefined **)::alloc::boxed::Box<T>::new(&local_478);
                    /* try { // try from 00192d3a to 00192d46 has its CatchHandler @ 00192fb7 */
          core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&local_428);
                    /* try { // try from 00192d47 to 00192d53 has its CatchHandler @ 00192fe8 */
          core::ptr::drop_in_place<alloc::string::String>(&local_368);
          ppuVar15 = &PTR_drop_in_place<uu_mv_error_MvError>_00283f98;
          goto LAB_00192c08;
        }
      }
      local_388 = local_358;
      local_398 = local_368;
      uStack_394 = uStack_364;
      uStack_390 = uStack_360;
      uStack_38c = uStack_35c;
      local_3c8 = local_418;
      local_3d8 = local_428;
      uStack_3d0 = (code *)CONCAT44(uStack_41c,uStack_420);
                    /* try { // try from 00192dbf to 00192e59 has its CatchHandler @ 00192fc9 */
      uVar8 = (*(code *)PTR_get_flag_0028cf68)
                        (&local_410,*(undefined8 *)PTR_OPT_NO_TARGET_DIRECTORY_0028cf60,
                         *(undefined8 *)(PTR_OPT_NO_TARGET_DIRECTORY_0028cf60 + 8));
      cVar7 = (*(code *)PTR_get_flag_0028cf68)
                        (&local_410,*(undefined8 *)PTR_OPT_VERBOSE_0028cf70,
                         *(undefined8 *)(PTR_OPT_VERBOSE_0028cf70 + 8));
      uVar9 = 1;
      if (cVar7 == '\0') {
        uVar9 = (*(code *)PTR_get_flag_0028cf68)
                          (&local_410,*(undefined8 *)PTR_OPT_DEBUG_0028cf78,
                           *(undefined8 *)(PTR_OPT_DEBUG_0028cf78 + 8));
      }
      uVar10 = (*(code *)PTR_get_flag_0028cf68)
                         (&local_410,*(undefined8 *)PTR_OPT_STRIP_TRAILING_SLASHES_0028cf80,
                          *(undefined8 *)(PTR_OPT_STRIP_TRAILING_SLASHES_0028cf80 + 8));
      uVar11 = (*(code *)PTR_get_flag_0028cf68)
                         (&local_410,*(undefined8 *)PTR_OPT_PROGRESS_0028cf88,
                          *(undefined8 *)(PTR_OPT_PROGRESS_0028cf88 + 8));
      uStack_444 = (*(code *)PTR_get_flag_0028cf68)
                             (&local_410,*(undefined8 *)PTR_OPT_DEBUG_0028cf78,
                              *(undefined8 *)(PTR_OPT_DEBUG_0028cf78 + 8));
      cStack_442 = cVar4;
      local_478 = (undefined **)CONCAT44(uStack_394,local_398);
      uStack_470 = (undefined **)CONCAT44(uStack_38c,uStack_390);
      local_468 = (undefined ***)local_388;
      uStack_460 = local_3d8;
      local_458 = (undefined **)uStack_3d0;
      uStack_450 = local_3c8;
                    /* try { // try from 00192ec8 to 00192ed2 has its CatchHandler @ 00192fa8 */
      local_448 = uVar8;
      uStack_447 = uVar9;
      uStack_446 = uVar10;
      uStack_445 = uVar11;
      cStack_443 = cVar5;
      bStack_441 = bVar6;
      auVar16 = (*(code *)PTR_mv_0028cf90)(local_378,local_370,&local_478);
                    /* try { // try from 00192ed3 to 00192ee2 has its CatchHandler @ 00192fa6 */
      core::ptr::drop_in_place<uu_mv::Options>(&local_478);
                    /* try { // try from 00192ee3 to 00192eef has its CatchHandler @ 00192ffa */
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(local_380);
                    /* try { // try from 00192ef0 to 00192ef9 has its CatchHandler @ 00193009 */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_410);
      goto LAB_00192c1f;
    }
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_3d8);
    local_468 = (undefined ***)local_3c8;
    local_478 = local_3d8;
    uStack_470 = (undefined **)uStack_3d0;
    uStack_460 = (undefined **)CONCAT44(uStack_460._4_4_,1);
    ppuVar12 = (undefined **)::alloc::boxed::Box<T>::new(&local_478);
    ppuVar15 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00283ef0;
  }
LAB_00192c08:
                    /* try { // try from 00192c08 to 00192c14 has its CatchHandler @ 00192ffa */
  auVar16._8_8_ = ppuVar15;
  auVar16._0_8_ = ppuVar12;
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(local_380);
                    /* try { // try from 00192c15 to 00192c1e has its CatchHandler @ 00193009 */
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_410);
LAB_00192c1f:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(local_2f8);
  return auVar16;
}