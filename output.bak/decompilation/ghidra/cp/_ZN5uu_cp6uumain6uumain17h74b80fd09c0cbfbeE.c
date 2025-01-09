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
  bool bVar18;
  undefined auVar19 [16];
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
  (*(code *)PTR_uu_app_002bbeb8)(ppuVar17);
  clap_builder::builder::command::Command::try_get_matches_from(&local_330,ppuVar17,param_1,param_2)
  ;
  if (CONCAT44(uStack_32c,local_330) == -0x8000000000000000) {
    lVar1 = CONCAT44(uStack_324,uStack_328);
                    /* try { // try from 001a68cc to 001a68d9 has its CatchHandler @ 001a7006 */
    (*(code *)PTR_uu_app_002bbeb8)(&local_2f8);
    if (*(char *)(lVar1 + 0xd5) == '\f') {
                    /* try { // try from 001a6b17 to 001a6b32 has its CatchHandler @ 001a6fef */
      lVar14 = (*(code *)PTR_print_help_002bbed8)(&local_2f8);
      if (lVar14 != 0) {
        auVar19 = (*(code *)PTR_from_002bbee0)(lVar14);
                    /* try { // try from 001a6b33 to 001a6b45 has its CatchHandler @ 001a7006 */
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(&local_2f8);
        core::ptr::drop_in_place<clap_builder::error::Error>(lVar1);
        return auVar19;
      }
    }
    else {
      if (*(char *)(lVar1 + 0xd5) != '\x0e') {
                    /* try { // try from 001a6b6f to 001a6b76 has its CatchHandler @ 001a6fef */
        uVar15 = ::alloc::boxed::Box<T>::new(lVar1);
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(&local_2f8);
        auVar3._8_8_ = &PTR_drop_in_place<uucore_mods_error_ClapErrorWrapper>_002b22d0;
        auVar3._0_8_ = uVar15;
        return auVar3;
      }
                    /* try { // try from 001a68f7 to 001a690f has its CatchHandler @ 001a6fef */
      (*(code *)PTR_render_version_002bbec0)(&local_390,&local_2f8);
      pcStack_3c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_4b8 = &DAT_0011e7f0;
      uStack_4b0 = 1;
      local_498 = 0;
      local_4a8 = &local_3c8;
      uStack_4a0 = 1;
      local_3c8 = &local_390;
                    /* try { // try from 001a695a to 001a6962 has its CatchHandler @ 001a6fc8 */
      (*(code *)PTR__print_002bbec8)(&local_4b8);
                    /* try { // try from 001a6963 to 001a696f has its CatchHandler @ 001a6fef */
      core::ptr::drop_in_place<alloc::string::String>(&local_390);
    }
                    /* try { // try from 001a6b53 to 001a6b5f has its CatchHandler @ 001a7006 */
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(&local_2f8);
    core::ptr::drop_in_place<clap_builder::error::Error>(lVar1);
LAB_001a6ebb:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = ppuVar17;
    auVar19 = auVar4 << 0x40;
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
                    /* try { // try from 001a69b5 to 001a6a4a has its CatchHandler @ 001a7013 */
    (*(code *)PTR_from_matches_002bbed0)(&local_2f8,&local_3c8);
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
      ppuVar17 = &PTR_drop_in_place<uu_cp_Error>_002b2378;
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
                    /* try { // try from 001a6b93 to 001a6ca3 has its CatchHandler @ 001a6fdd */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many
                  (&local_2f8,&local_3c8,
                   "pathsUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTOTYPEENOPROTOOPTEPROTONOSUPPORTESOCKTNOSUPPORTEOPNOTSUPPEPFNOSUPPORTEAFNOSUPPORTEADDRINUSEEADDRNOTAVAILENETUNREACHENETRESETECONNABORTEDECONNRESETENOBUFSEISCONNESHUTDOWNETOOMANYREFSETIMEDOUTECONNREFUSEDEHOSTDOWNEHOSTUNREACHEINPROGRESSESTALEEUCLEANENOTNAMENAVAILEISNAMEREMOTEIOEDQUOTENOMEDIUMEMEDIUMTYPEECANCELEDENOKEYEKEYEXPIREDEKEYREVOKEDEKEYREJECTEDEOWNERDEADENOTRECOVERABLEERFKILLEHWPOISON"
                   ,5);
        pppuVar16 = (undefined ***)&local_2f8;
        clap_builder::parser::error::MatchesError::unwrap
                  (&local_4b8,
                   "pathsUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTOTYPEENOPROTOOPTEPROTONOSUPPORTESOCKTNOSUPPORTEOPNOTSUPPEPFNOSUPPORTEAFNOSUPPORTEADDRINUSEEADDRNOTAVAILENETUNREACHENETRESETECONNABORTEDECONNRESETENOBUFSEISCONNESHUTDOWNETOOMANYREFSETIMEDOUTECONNREFUSEDEHOSTDOWNEHOSTUNREACHEINPROGRESSESTALEEUCLEANENOTNAMENAVAILEISNAMEREMOTEIOEDQUOTENOMEDIUMEMEDIUMTYPEECANCELEDENOKEYEKEYEXPIREDEKEYREVOKEDEKEYREJECTEDEOWNERDEADENOTRECOVERABLEERFKILLEHWPOISON"
                   ,5);
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
        bVar18 = local_448 == (undefined **)0x8000000000000000;
        if (bVar18) {
          local_448 = (undefined **)0x0;
        }
        if (bVar18) {
          pppuVar16 = (undefined ***)(undefined **)0x0;
          local_440 = 8;
        }
        local_438 = pppuVar16;
        (*(code *)PTR_parse_path_args_002bbee8)(&local_2f8,&local_448,&local_390);
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
                    /* try { // try from 001a6d1f to 001a6d2f has its CatchHandler @ 001a6f58 */
          local_408 = local_4b8;
          local_3f8 = local_4a8;
          local_3d8 = uStack_490;
          (*(code *)PTR_copy_002bbef0)
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
                    /* try { // try from 001a6d82 to 001a6e60 has its CatchHandler @ 001a6f77 */
              local_418 = (*(code *)PTR_util_name_002bbe98)();
              ppuVar17 = (undefined **)local_418;
              local_338 = _<&T_as_core::fmt::Display>::fmt;
              local_448 = (undefined **)&DAT_002b2220;
              local_440 = 2;
              local_428 = 0;
              local_438 = &local_340;
              local_430 = 1;
              local_340 = ppuVar17;
              (*(code *)PTR__eprint_002bbea0)(&local_448);
              local_418._8_8_ = PTR_fmt_002bbef8;
              local_448 = (undefined **)&DAT_002b2240;
              local_440 = 2;
              local_428 = 0;
              local_430 = 1;
              local_438 = (undefined ***)ppuVar17;
              local_418._0_8_ = &local_2f8;
              (*(code *)PTR__eprint_002bbea0)(&local_448);
            }
            (*(code *)PTR_set_exit_code_002bbf00)(1);
                    /* try { // try from 001a6e61 to 001a6e6d has its CatchHandler @ 001a6f44 */
            core::ptr::drop_in_place<uu_cp::Error>(&local_2f8);
          }
                    /* try { // try from 001a6e70 to 001a6e7c has its CatchHandler @ 001a6f53 */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_3e8);
                    /* try { // try from 001a6e7d to 001a6e89 has its CatchHandler @ 001a6f4e */
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_408);
                    /* try { // try from 001a6e8a to 001a6e96 has its CatchHandler @ 001a6f49 */
          core::ptr::drop_in_place<uu_cp::Options>(&local_390);
          if ((iVar2 == 0xd) && ((int)local_4b8 != 0xd)) {
                    /* try { // try from 001a6ea6 to 001a6ead has its CatchHandler @ 001a7013 */
            core::ptr::drop_in_place<uu_cp::Error>(&local_4b8);
          }
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                    (&local_3c8);
          goto LAB_001a6ebb;
        }
                    /* try { // try from 001a6efd to 001a6f09 has its CatchHandler @ 001a6fdd */
        uVar15 = ::alloc::boxed::Box<T>::new(&local_2f8);
        ppuVar17 = &PTR_drop_in_place<uu_cp_Error>_002b2378;
      }
      else {
                    /* try { // try from 001a6acc to 001a6b04 has its CatchHandler @ 001a6fdd */
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_4b8);
        uStack_2e8 = local_4a8;
        uStack_2f0 = (undefined4)uStack_4b0;
        uStack_2ec = uStack_4b0._4_4_;
        uStack_2e0 = 1;
        uVar15 = ::alloc::boxed::Box<T>::new(&local_2f8);
        ppuVar17 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002b2420;
      }
                    /* try { // try from 001a6f14 to 001a6f20 has its CatchHandler @ 001a7013 */
      core::ptr::drop_in_place<uu_cp::Options>(&local_390);
    }
    auVar19._8_8_ = ppuVar17;
    auVar19._0_8_ = uVar15;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3c8);
  }
  return auVar19;
}