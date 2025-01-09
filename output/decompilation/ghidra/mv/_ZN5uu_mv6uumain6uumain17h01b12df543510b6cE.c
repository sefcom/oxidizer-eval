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
  long lVar12;
  undefined **ppuVar13;
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
  undefined8 uStack_3c8;
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
  
  (*(code *)PTR_uu_app_0028dca8)(local_2f8);
                    /* try { // try from 00192c28 to 00192c59 has its CatchHandler @ 0019323b */
  clap_builder::builder::command::Command::try_get_matches_from_mut
            (&local_478,local_2f8,param_1,param_2);
  puVar3 = PTR_ARG_FILES_0028dcb8;
  if (local_478 == (undefined **)0x8000000000000000) {
    auVar16 = (*(code *)PTR_from_0028dcb0)();
    goto LAB_0019310c;
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
  uVar14 = *(undefined8 *)PTR_ARG_FILES_0028dcb8;
  uVar1 = *(undefined8 *)(PTR_ARG_FILES_0028dcb8 + 8);
                    /* try { // try from 00192ca8 to 00192d6e has its CatchHandler @ 0019322c */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_478,&local_410,uVar14,uVar1);
  clap_builder::parser::error::MatchesError::unwrap(&local_3d8,uVar14,uVar1,&local_478);
  if (local_3d8 == (undefined **)0x0) {
    local_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    local_340 = SUB84(PTR_EMPTY_0028dcc0,0);
    uStack_33c = (undefined4)((ulong)PTR_EMPTY_0028dcc0 >> 0x20);
    uStack_338 = 0;
    uStack_3bc = 0;
    local_350 = (undefined **)core::ops::function::FnOnce::call_once;
    local_3a0 = 0;
    local_348 = (undefined **)PTR_EMPTY_0028dcc0;
  }
  else {
    local_350 = local_3d8;
    local_348 = (undefined **)uStack_3d0;
    uVar14 = local_3a8;
    local_340 = (undefined4)uStack_3c8;
    uStack_33c = uStack_3c8._4_4_;
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
                    /* try { // try from 00192d88 to 00192db7 has its CatchHandler @ 0019321a */
  if ((local_370 == 1) &&
     (cVar5 = (*(code *)PTR_contains_id_0028dcd0)
                        (&local_410,*(undefined8 *)PTR_OPT_TARGET_DIRECTORY_0028dcc8,
                         *(undefined8 *)(PTR_OPT_TARGET_DIRECTORY_0028dcc8 + 8)), cVar5 == '\0')) {
    local_3d8 = (undefined **)puVar3;
    uStack_3d0 = _<&T_as_core::fmt::Display>::fmt;
    local_478 = &PTR_s_The_argument__<>_____requires_at_00284c28;
    uStack_470 = (undefined **)0x2;
    local_458 = (undefined **)0x0;
    uStack_460 = (undefined **)0x1;
                    /* try { // try from 00193174 to 001931a7 has its CatchHandler @ 0019321a */
    local_468 = &local_3d8;
    core::option::Option<T>::map_or_else(local_310,&local_478);
    uVar14 = clap_builder::error::Error<F>::raw(6,local_310);
    local_478 = (undefined **)clap_builder::error::Error<F>::format(uVar14,local_2f8);
                    /* try { // try from 001931b0 to 001931b9 has its CatchHandler @ 001931bc */
    clap_builder::error::Error<F>::exit(&local_478);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar5 = (*(code *)PTR_determine_overwrite_mode_0028dcd8)(&local_410);
  (*(code *)PTR_determine_backup_mode_0028dce0)(&local_478,&local_410);
  ppuVar15 = uStack_470;
  ppuVar13 = local_478;
  if (local_478 == (undefined **)0x0) {
    cVar4 = (char)uStack_470;
                    /* try { // try from 00192de8 to 00192e20 has its CatchHandler @ 0019321a */
    bVar6 = (*(code *)PTR_determine_update_mode_0028dce8)(&local_410);
    if ((cVar4 == '\0') || ((cVar5 != '\0' && ((bVar6 & 1) == 0)))) {
      (*(code *)PTR_determine_backup_suffix_0028dcf0)(&local_368,&local_410);
      uVar14 = *(undefined8 *)PTR_OPT_TARGET_DIRECTORY_0028dcc8;
      uVar1 = *(undefined8 *)(PTR_OPT_TARGET_DIRECTORY_0028dcc8 + 8);
                    /* try { // try from 00192e2f to 00192e69 has its CatchHandler @ 001931e9 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_478,&local_410,uVar14,uVar1);
      lVar12 = clap_builder::parser::error::MatchesError::unwrap(uVar14,uVar1,&local_478);
      if (lVar12 == 0) {
        local_428 = (undefined **)0x8000000000000000;
      }
      else {
        core::ops::function::FnOnce::call_once(&local_478,lVar12);
        local_418 = (undefined **)local_468;
        local_428 = local_478;
        uStack_420 = (undefined4)uStack_470;
        uStack_41c = uStack_470._4_4_;
                    /* try { // try from 00192e93 to 00192f03 has its CatchHandler @ 001931c9 */
        if ((local_478 != (undefined **)0x8000000000000000) &&
           (cVar7 = (*(code *)PTR_is_dir_0028dcf8)(uStack_470,local_468), cVar7 == '\0')) {
          local_3d8 = (undefined **)0x1;
          uStack_3d0 = (code *)CONCAT44(uStack_41c,uStack_420);
          uStack_3c8 = local_418;
          uStack_3c0 = CONCAT31(uStack_3c0._1_3_,1);
          _<T_as_alloc::string::ToString>::to_string(&local_398,&local_3d8);
          uStack_460 = local_388;
          uStack_470 = (undefined **)CONCAT44(uStack_394,local_398);
          local_468 = (undefined ***)CONCAT44(uStack_38c,uStack_390);
          local_478 = (undefined **)0x8;
          ppuVar13 = (undefined **)::alloc::boxed::Box<T>::new(&local_478);
                    /* try { // try from 00192f04 to 00192f10 has its CatchHandler @ 001931e9 */
          core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&local_428);
                    /* try { // try from 00192f11 to 00192f62 has its CatchHandler @ 0019321a */
          core::ptr::drop_in_place<alloc::string::String>(&local_368);
          ppuVar15 = &PTR_drop_in_place<uu_mv_error_MvError>_00284d28;
          goto LAB_00192dc7;
        }
      }
      local_388 = local_358;
      local_398 = local_368;
      uStack_394 = uStack_364;
      uStack_390 = uStack_360;
      uStack_38c = uStack_35c;
      uStack_3c8 = local_418;
      local_3d8 = local_428;
      uStack_3d0 = (code *)CONCAT44(uStack_41c,uStack_420);
                    /* try { // try from 00192fd1 to 0019306b has its CatchHandler @ 001931fb */
      uVar8 = (*(code *)PTR_get_flag_0028dd08)
                        (&local_410,*(undefined8 *)PTR_OPT_NO_TARGET_DIRECTORY_0028dd00,
                         *(undefined8 *)(PTR_OPT_NO_TARGET_DIRECTORY_0028dd00 + 8));
      cVar7 = (*(code *)PTR_get_flag_0028dd08)
                        (&local_410,*(undefined8 *)PTR_OPT_VERBOSE_0028dd10,
                         *(undefined8 *)(PTR_OPT_VERBOSE_0028dd10 + 8));
      uVar9 = 1;
      if (cVar7 == '\0') {
        uVar9 = (*(code *)PTR_get_flag_0028dd08)
                          (&local_410,*(undefined8 *)PTR_OPT_DEBUG_0028dd18,
                           *(undefined8 *)(PTR_OPT_DEBUG_0028dd18 + 8));
      }
      uVar10 = (*(code *)PTR_get_flag_0028dd08)
                         (&local_410,*(undefined8 *)PTR_OPT_STRIP_TRAILING_SLASHES_0028dd20,
                          *(undefined8 *)(PTR_OPT_STRIP_TRAILING_SLASHES_0028dd20 + 8));
      uVar11 = (*(code *)PTR_get_flag_0028dd08)
                         (&local_410,*(undefined8 *)PTR_OPT_PROGRESS_0028dd28,
                          *(undefined8 *)(PTR_OPT_PROGRESS_0028dd28 + 8));
      uStack_444 = (*(code *)PTR_get_flag_0028dd08)
                             (&local_410,*(undefined8 *)PTR_OPT_DEBUG_0028dd18,
                              *(undefined8 *)(PTR_OPT_DEBUG_0028dd18 + 8));
      cStack_442 = cVar4;
      local_478 = (undefined **)CONCAT44(uStack_394,local_398);
      uStack_470 = (undefined **)CONCAT44(uStack_38c,uStack_390);
      local_468 = (undefined ***)local_388;
      uStack_460 = local_3d8;
      local_458 = (undefined **)uStack_3d0;
      uStack_450 = uStack_3c8;
                    /* try { // try from 001930da to 001930e4 has its CatchHandler @ 001931da */
      local_448 = uVar8;
      uStack_447 = uVar9;
      uStack_446 = uVar10;
      uStack_445 = uVar11;
      cStack_443 = cVar5;
      bStack_441 = bVar6;
      auVar16 = (*(code *)PTR_mv_0028dd30)(local_378,local_370,&local_478);
                    /* try { // try from 001930e5 to 001930f4 has its CatchHandler @ 001931d8 */
      core::ptr::drop_in_place<uu_mv::Options>(&local_478);
                    /* try { // try from 001930f5 to 00193101 has its CatchHandler @ 0019322c */
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(local_380);
                    /* try { // try from 00193102 to 0019310b has its CatchHandler @ 0019323b */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_410);
      goto LAB_0019310c;
    }
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_3d8);
    local_468 = (undefined ***)uStack_3c8;
    local_478 = local_3d8;
    uStack_470 = (undefined **)uStack_3d0;
    uStack_460 = (undefined **)CONCAT44(uStack_460._4_4_,1);
    ppuVar13 = (undefined **)::alloc::boxed::Box<T>::new(&local_478);
    ppuVar15 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00284c80;
  }
LAB_00192dc7:
                    /* try { // try from 00192dc7 to 00192dd3 has its CatchHandler @ 0019322c */
  auVar16._8_8_ = ppuVar15;
  auVar16._0_8_ = ppuVar13;
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(local_380);
                    /* try { // try from 00192dd4 to 00192ddd has its CatchHandler @ 0019323b */
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_410);
LAB_0019310c:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(local_2f8);
  return auVar16;
}