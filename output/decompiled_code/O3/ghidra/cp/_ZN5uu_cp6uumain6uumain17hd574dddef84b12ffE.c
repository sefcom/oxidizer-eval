undefined  [16] __rustcall uu_cp::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  char cVar13;
  long lVar14;
  undefined8 uVar15;
  undefined ***pppuVar16;
  undefined8 extraout_RDX;
  undefined **ppuVar17;
  undefined auVar18 [16];
  undefined *local_4b8;
  undefined8 uStack_4b0;
  undefined ***local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  ulong uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined **local_448;
  undefined8 local_440;
  undefined ***local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined local_418 [16];
  undefined *local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  undefined **local_3c8;
  code *pcStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined *local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  ulong local_348;
  undefined **local_340;
  code *local_338;
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
  undefined *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  ulong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  
  ppuVar17 = &local_2f8;
  (*(code *)PTR_uu_app_002bb7b0)(ppuVar17);
  clap_builder::builder::command::Command::try_get_matches_from(&local_330,ppuVar17,param_1,param_2)
  ;
  if (CONCAT44(uStack_32c,local_330) == -0x8000000000000000) {
    lVar1 = CONCAT44(uStack_324,uStack_328);
                    /* try { // try from 001a67ec to 001a67f9 has its CatchHandler @ 001a6f26 */
    (*(code *)PTR_uu_app_002bb7b0)(&local_2f8);
    if (*(char *)(lVar1 + 0xd5) == '\f') {
                    /* try { // try from 001a6a37 to 001a6a52 has its CatchHandler @ 001a6f0f */
      lVar14 = (*(code *)PTR_print_help_002bb7d0)(&local_2f8);
      if (lVar14 != 0) {
        auVar18 = (*(code *)PTR_from_002bb7d8)(lVar14);
                    /* try { // try from 001a6a53 to 001a6a65 has its CatchHandler @ 001a6f26 */
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(&local_2f8);
        core::ptr::drop_in_place<clap_builder::error::Error>(lVar1);
        return auVar18;
      }
    }
    else {
      if (*(char *)(lVar1 + 0xd5) != '\x0e') {
                    /* try { // try from 001a6a8f to 001a6a96 has its CatchHandler @ 001a6f0f */
        uVar15 = ::alloc::boxed::Box<T>::new(lVar1);
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(&local_2f8);
        auVar3._8_8_ = &PTR_drop_in_place<uucore_mods_error_ClapErrorWrapper>_002b1c20;
        auVar3._0_8_ = uVar15;
        return auVar3;
      }
                    /* try { // try from 001a6817 to 001a682f has its CatchHandler @ 001a6f0f */
      (*(code *)PTR_render_version_002bb7b8)(&local_390,&local_2f8);
      pcStack_3c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_4b8 = &DAT_0011e8a0;
      uStack_4b0 = 1;
      local_498 = 0;
      local_4a8 = &local_3c8;
      uStack_4a0 = 1;
      local_3c8 = &local_390;
                    /* try { // try from 001a687a to 001a6882 has its CatchHandler @ 001a6ee8 */
      (*(code *)PTR__print_002bb7c0)(&local_4b8);
                    /* try { // try from 001a6883 to 001a688f has its CatchHandler @ 001a6f0f */
      core::ptr::drop_in_place<alloc::string::String>(&local_390);
    }
                    /* try { // try from 001a6a73 to 001a6a7f has its CatchHandler @ 001a6f26 */
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(&local_2f8);
    core::ptr::drop_in_place<clap_builder::error::Error>(lVar1);
LAB_001a6ddb:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = ppuVar17;
    auVar18 = auVar4 << 0x40;
  }
  else {
    local_398 = local_300;
    local_3a8 = local_310;
    uStack_3a4 = uStack_30c;
    uStack_3a0 = uStack_308;
    uStack_39c = uStack_304;
    local_3b8 = local_320;
    uStack_3b4 = uStack_31c;
    uStack_3b0 = uStack_318;
    uStack_3ac = uStack_314;
                    /* try { // try from 001a68d5 to 001a696a has its CatchHandler @ 001a6f33 */
    (*(code *)PTR_from_matches_002bb7c8)(&local_2f8,&local_3c8);
    uVar12 = local_2b0;
    uVar11 = uStack_2c4;
    uVar10 = uStack_2c8;
    uVar9 = uStack_2d4;
    uVar8 = uStack_2d8;
    local_4b8 = (undefined *)CONCAT44(uStack_2ec,uStack_2f0);
    uStack_4b0 = uStack_2e8;
    uVar15 = uStack_4b0;
    local_4a8 = (undefined ***)CONCAT44(uStack_2dc,uStack_2e0);
    uStack_4a0._0_4_ = uStack_2d8;
    uStack_4a0._4_4_ = uStack_2d4;
    local_498._0_4_ = local_2d0;
    local_498._4_4_ = uStack_2cc;
    uStack_490 = CONCAT44(uStack_2c4,uStack_2c8);
    local_488 = local_2c0;
    uVar5 = local_488;
    uStack_480 = uStack_2b8;
    uVar7 = uStack_480;
    uStack_4b0._0_4_ = (undefined4)uStack_2e8;
    uStack_4b0._4_4_ = (undefined4)((ulong)uStack_2e8 >> 0x20);
    local_488._0_4_ = (undefined4)local_2c0;
    local_488._4_4_ = (undefined4)((ulong)local_2c0 >> 0x20);
    uVar6 = local_488._4_4_;
    uStack_480._0_4_ = (undefined4)uStack_2b8;
    uStack_480._4_4_ = (undefined4)((ulong)uStack_2b8 >> 0x20);
    uStack_4b0 = uVar15;
    local_488 = uVar5;
    uStack_480 = uVar7;
    if (local_2f8 == (undefined *)0x8000000000000000) {
      uStack_2c8 = (undefined4)local_488;
      uStack_2c4 = local_488._4_4_;
      local_2c0 = uStack_2b8;
      uStack_2d8 = local_2d0;
      uStack_2d4 = uStack_2cc;
      local_2d0 = uVar10;
      uStack_2cc = uVar11;
      uStack_2e8 = CONCAT44(uStack_2dc,uStack_2e0);
      uStack_2e0 = uVar8;
      uStack_2dc = uVar9;
      uStack_2f0 = (undefined4)uStack_4b0;
      uStack_2ec = uStack_4b0._4_4_;
      uVar15 = ::alloc::boxed::Box<T>::new(&local_2f8);
      ppuVar17 = &PTR_drop_in_place<uu_cp_Error>_002b1cc8;
    }
    else {
      local_358 = (undefined4)local_488;
      uStack_354 = local_488._4_4_;
      uStack_350 = (undefined4)uStack_480;
      uStack_34c = uStack_480._4_4_;
      local_388 = uStack_2f0;
      uStack_384 = uStack_2ec;
      uStack_380 = (undefined4)uStack_4b0;
      uStack_37c = uStack_4b0._4_4_;
      local_378 = uStack_2e0;
      uStack_374 = uStack_2dc;
      uStack_370 = uStack_2d8;
      uStack_36c = uStack_2d4;
      local_368 = local_2d0;
      uStack_364 = uStack_2cc;
      uStack_360 = uStack_2c8;
      uStack_35c = uStack_2c4;
      local_390 = local_2f8;
      local_348 = local_2b0;
      cVar13 = _<uu_cp::OverwriteMode_as_core::cmp::PartialEq>::eq(uVar6);
      if ((cVar13 == '\0') || ((uVar12 & 0xff00000000) == 0)) {
                    /* try { // try from 001a6ab3 to 001a6bc3 has its CatchHandler @ 001a6efd */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many
                  (&local_2f8,&local_3c8,&DAT_0011ec58,5);
        pppuVar16 = (undefined ***)&local_2f8;
        clap_builder::parser::error::MatchesError::unwrap(&local_4b8,&DAT_0011ec58,5);
        if (local_4b8 == (undefined *)0x0) {
          local_448 = (undefined **)0x8000000000000000;
          local_440 = extraout_RDX;
        }
        else {
          local_298 = local_458;
          uStack_290 = uStack_450;
          local_2a8 = local_468;
          uStack_2a0 = uStack_460;
          uStack_2b8 = local_478;
          local_2b0 = uStack_470;
          uStack_2c8 = (undefined4)local_488;
          uStack_2c4 = local_488._4_4_;
          local_2c0 = uStack_480;
          uStack_2d8 = (undefined4)local_498;
          uStack_2d4 = local_498._4_4_;
          local_2d0 = (undefined4)uStack_490;
          uStack_2cc = uStack_490._4_4_;
          uStack_2e8 = local_4a8;
          uStack_2e0 = (undefined4)uStack_4a0;
          uStack_2dc = uStack_4a0._4_4_;
          local_2f8 = local_4b8;
          uStack_2f0 = (undefined4)uStack_4b0;
          uStack_2ec = uStack_4b0._4_4_;
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::
          from_iter(&local_448);
          pppuVar16 = local_438;
        }
        local_438 = pppuVar16;
        if (local_448 == (undefined **)0x8000000000000000) {
          local_438 = (undefined ***)(undefined **)0x0;
        }
        if (local_448 == (undefined **)0x8000000000000000) {
          local_448 = (undefined **)0x0;
          local_440 = 8;
        }
        (*(code *)PTR_parse_path_args_002bb7e0)(&local_2f8,&local_448,&local_390);
        local_4b8 = (undefined *)CONCAT44(uStack_2ec,uStack_2f0);
        uStack_4b0 = uStack_2e8;
        local_4a8 = (undefined ***)CONCAT44(uStack_2dc,uStack_2e0);
        uStack_4a0._0_4_ = uStack_2d8;
        uStack_4a0._4_4_ = uStack_2d4;
        uStack_490 = CONCAT44(uStack_2c4,uStack_2c8);
        local_498._0_4_ = local_2d0;
        local_498._4_4_ = uStack_2cc;
        if (local_2f8 == (undefined *)0xd) {
          uStack_400 = uStack_2e8;
          local_3e8 = uStack_2d8;
          uStack_3e4 = uStack_2d4;
          uStack_3e0 = local_2d0;
          uStack_3dc = uStack_2cc;
                    /* try { // try from 001a6c3f to 001a6c4f has its CatchHandler @ 001a6e78 */
          local_408 = local_4b8;
          local_3f8 = local_4a8;
          local_3d8 = uStack_490;
          (*(code *)PTR_copy_002bb7e8)
                    (&local_4b8,uStack_2e8,local_4a8,CONCAT44(uStack_2cc,local_2d0),uStack_490,
                     &local_390);
          iVar2 = (int)local_4b8;
          if (local_4b8 != (undefined *)0xd) {
            local_2f8 = local_4b8;
            uStack_2f0 = (undefined4)uStack_4b0;
            uStack_2ec = uStack_4b0._4_4_;
            uStack_2c8 = (undefined4)local_488;
            uStack_2c4 = local_488._4_4_;
            local_2c0 = uStack_480;
            uStack_2d8 = (undefined4)local_498;
            uStack_2d4 = local_498._4_4_;
            local_2d0 = (undefined4)uStack_490;
            uStack_2cc = uStack_490._4_4_;
            uStack_2e8 = local_4a8;
            uStack_2e0 = (undefined4)uStack_4a0;
            uStack_2dc = uStack_4a0._4_4_;
            if (iVar2 != 5) {
                    /* try { // try from 001a6ca2 to 001a6d80 has its CatchHandler @ 001a6e97 */
              local_418 = (*(code *)PTR_util_name_002bb790)();
              ppuVar17 = (undefined **)local_418;
              local_338 = _<&T_as_core::fmt::Display>::fmt;
              local_448 = (undefined **)&DAT_002b1b88;
              local_440 = 2;
              local_428 = 0;
              local_438 = &local_340;
              local_430 = 1;
              local_340 = ppuVar17;
              (*(code *)PTR__eprint_002bb798)(&local_448);
              local_418._8_8_ = PTR_fmt_002bb7f0;
              local_448 = (undefined **)&DAT_002b1ba8;
              local_440 = 2;
              local_428 = 0;
              local_430 = 1;
              local_438 = (undefined ***)ppuVar17;
              local_418._0_8_ = &local_2f8;
              (*(code *)PTR__eprint_002bb798)(&local_448);
            }
            (*(code *)PTR_set_exit_code_002bb7f8)(1);
                    /* try { // try from 001a6d81 to 001a6d8d has its CatchHandler @ 001a6e64 */
            core::ptr::drop_in_place<uu_cp::Error>(&local_2f8);
          }
                    /* try { // try from 001a6d90 to 001a6d9c has its CatchHandler @ 001a6e73 */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_3e8);
                    /* try { // try from 001a6d9d to 001a6da9 has its CatchHandler @ 001a6e6e */
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_408);
                    /* try { // try from 001a6daa to 001a6db6 has its CatchHandler @ 001a6e69 */
          core::ptr::drop_in_place<uu_cp::Options>(&local_390);
          if ((iVar2 == 0xd) && ((int)local_4b8 != 0xd)) {
                    /* try { // try from 001a6dc6 to 001a6dcd has its CatchHandler @ 001a6f33 */
            core::ptr::drop_in_place<uu_cp::Error>(&local_4b8);
          }
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                    (&local_3c8);
          goto LAB_001a6ddb;
        }
                    /* try { // try from 001a6e1d to 001a6e29 has its CatchHandler @ 001a6efd */
        uVar15 = ::alloc::boxed::Box<T>::new(&local_2f8);
        ppuVar17 = &PTR_drop_in_place<uu_cp_Error>_002b1cc8;
      }
      else {
                    /* try { // try from 001a69ec to 001a6a24 has its CatchHandler @ 001a6efd */
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_4b8);
        uStack_2e8 = local_4a8;
        uStack_2f0 = (undefined4)uStack_4b0;
        uStack_2ec = uStack_4b0._4_4_;
        uStack_2e0 = 1;
        uVar15 = ::alloc::boxed::Box<T>::new(&local_2f8);
        ppuVar17 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002b1d70;
      }
                    /* try { // try from 001a6e34 to 001a6e40 has its CatchHandler @ 001a6f33 */
      core::ptr::drop_in_place<uu_cp::Options>(&local_390);
    }
    auVar18._8_8_ = ppuVar17;
    auVar18._0_8_ = uVar15;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3c8);
  }
  return auVar18;
}