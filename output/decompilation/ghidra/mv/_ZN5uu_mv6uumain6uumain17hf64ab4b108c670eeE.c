undefined  [16] _ZN5uu_mv6uumain6uumain17hf64ab4b108c670eeE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  undefined uVar6;
  char cVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined auVar19 [16];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined **local_3e8;
  code *local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 local_3a0;
  code *local_398;
  undefined **ppuStack_390;
  undefined8 local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 local_360;
  undefined local_358 [8];
  undefined8 local_350;
  long local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  code *local_318;
  undefined local_310 [24];
  undefined local_2f8 [712];
  
  (*(code *)PTR__ZN5uu_mv6uu_app17hb7098f4f79f9c6f5E_0024a6c8)(local_2f8);
                    /* try { // try from 001799a8 to 001799d2 has its CatchHandler @ 00179f6f */
  _ZN12clap_builder7builder7command7Command24try_get_matches_from_mut17h8c3ef30f3f3d5295E
            (&local_438,local_2f8,param_1,param_2);
  puVar2 = PTR__ZN5uu_mv9ARG_FILES17he14f9154b9a463acE_0024a6d8;
  local_3a0 = local_408;
  local_3b0 = (undefined4)local_418;
  uStack_3ac = local_418._4_4_;
  uStack_3a8 = (undefined4)uStack_410;
  uStack_3a4 = uStack_410._4_4_;
  local_3c0 = (undefined4)local_428;
  uStack_3bc = local_428._4_4_;
  uStack_3b8 = (undefined4)uStack_420;
  uStack_3b4 = uStack_420._4_4_;
  local_3d0 = local_438;
  local_3c8 = uStack_430;
  uVar14 = *(undefined8 *)PTR__ZN5uu_mv9ARG_FILES17he14f9154b9a463acE_0024a6d8;
  uVar1 = *(undefined8 *)(PTR__ZN5uu_mv9ARG_FILES17he14f9154b9a463acE_0024a6d8 + 8);
                    /* try { // try from 00179a22 to 00179ad3 has its CatchHandler @ 00179f4e */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h40b8e37a44bc9878E
            (&local_438,&local_3d0,uVar14,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hb1e01cb39b52e2deE
            (&local_398,uVar14,uVar1,&local_438);
  if (local_398 == (code *)0x0) {
    local_378 = 0;
    uStack_374 = 0;
    uStack_370 = 0;
    uStack_36c = 0;
    uVar16 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_0024a6e0
                   ,0);
    uVar17 = (undefined4)
             ((ulong)
              PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_0024a6e0
             >> 0x20);
    uVar18 = 0;
    uStack_37c = 0;
    pcVar12 = _ZN4core3ops8function6FnOnce9call_once17ha5ab3eb56bb88db9E;
    local_360 = 0;
    uStack_430 = (undefined **)
                 PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_0024a6e0
    ;
  }
  else {
    pcVar12 = local_398;
    uStack_430 = ppuStack_390;
    uVar14 = local_368;
    uVar16 = (undefined4)local_388;
    uVar17 = local_388._4_4_;
    uVar18 = uStack_380;
  }
  local_428 = (code **)CONCAT44(uVar17,uVar16);
  uStack_420 = (code *)CONCAT44(uStack_37c,uVar18);
  local_418 = (undefined **)CONCAT44(uStack_374,local_378);
  uStack_410 = CONCAT44(uStack_36c,uStack_370);
  local_438 = (undefined **)pcVar12;
  local_408 = uVar14;
  local_400 = local_360;
  _ZN4core4iter6traits8iterator8Iterator7collect17h8ee1872fdf51efe2E(local_358,&local_438);
                    /* try { // try from 00179af0 to 00179b1f has its CatchHandler @ 00179f53 */
  if ((local_348 == 1) &&
     (cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_0024a6f0
              )(&local_3d0,
                *(undefined8 *)PTR__ZN5uu_mv20OPT_TARGET_DIRECTORY17h77eb98cd3bbfa9edE_0024a6e8,
                *(undefined8 *)
                 (PTR__ZN5uu_mv20OPT_TARGET_DIRECTORY17h77eb98cd3bbfa9edE_0024a6e8 + 8)),
     cVar4 == '\0')) {
    local_398 = (code *)puVar2;
    ppuStack_390 = (undefined **)
                   _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h16459f5c56ff6206E;
    local_438 = &PTR_s_The_argument__<>_____requires_at_00240570;
    uStack_430 = (undefined **)0x2;
    local_418 = (undefined **)0x0;
    uStack_420 = (code *)0x1;
                    /* try { // try from 00179ec1 to 00179ef2 has its CatchHandler @ 00179f53 */
    local_428 = &local_398;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hba77342b09338459E(local_310,&local_438);
    uVar14 = _ZN12clap_builder5error14Error_LT_F_GT_3raw17h6826e9614edca253E(local_310);
    _ZN12clap_builder5error14Error_LT_F_GT_6format17hb05558fcd316c9a7E(uVar14,local_2f8);
                    /* try { // try from 00179ef8 to 00179f01 has its CatchHandler @ 00179f04 */
    local_438 = (undefined **)uVar14;
    _ZN12clap_builder5error14Error_LT_F_GT_4exit17ha83c546345cc47c3E(&local_438);
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  cVar4 = (*(code *)PTR__ZN5uu_mv24determine_overwrite_mode17h4edbdb1a5a4f8cbcE_0024a6f8)
                    (&local_3d0);
  (*(code *)
    PTR__ZN6uucore8features14backup_control21determine_backup_mode17h09b58a9d9bda0a55E_0024a700)
            (&local_438,&local_3d0);
  ppuVar15 = uStack_430;
  pcVar12 = (code *)local_438;
  if (local_438 == (undefined **)0x0) {
                    /* try { // try from 00179b4b to 00179bd0 has its CatchHandler @ 00179f53 */
    bVar5 = (*(code *)
              PTR__ZN6uucore8features14update_control21determine_update_mode17h24daef92534aa2cdE_0024a708
            )(&local_3d0);
    if (((char)ppuVar15 == '\0') || (cVar4 != '\0' && (bVar5 & 1) == 0)) {
      (*(code *)
        PTR__ZN6uucore8features14backup_control23determine_backup_suffix17ha7b1c82b4746605aE_0024a710
      )(&local_340,&local_3d0);
      uVar14 = *(undefined8 *)PTR__ZN5uu_mv20OPT_TARGET_DIRECTORY17h77eb98cd3bbfa9edE_0024a6e8;
      uVar1 = *(undefined8 *)(PTR__ZN5uu_mv20OPT_TARGET_DIRECTORY17h77eb98cd3bbfa9edE_0024a6e8 + 8);
                    /* try { // try from 00179bdf to 00179c24 has its CatchHandler @ 00179f28 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17ha1a2491a3edcae93E
                (&local_438,&local_3d0,uVar14,uVar1);
      lVar13 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hc69077a721d63ea9E
                         (uVar14,uVar1,&local_438);
      if (lVar13 == 0) {
        local_3e0 = (code *)0x8000000000000000;
      }
      else {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h8fc533723eb1648dE
                  (&local_438,*(undefined8 *)(lVar13 + 8),*(undefined8 *)(lVar13 + 0x10));
        pcVar3 = (code *)local_438;
        local_3e8 = uStack_430;
        local_3d8 = local_428;
        if (local_438 == (undefined **)0x8000000000000000) {
          local_3e0 = (code *)0x8000000000000000;
        }
        else {
                    /* try { // try from 00179c5b to 00179c60 has its CatchHandler @ 00179f11 */
          cVar7 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0024a718)();
          if (cVar7 == '\0') {
            local_398 = (code *)0x1;
            ppuStack_390 = local_3e8;
            local_388 = local_3d8;
            uStack_380 = CONCAT31(uStack_380._1_3_,1);
                    /* try { // try from 00179e13 to 00179e54 has its CatchHandler @ 00179f11 */
            _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h3ac6065177d62defE
                      (&local_328,&local_398);
            uStack_420 = local_318;
            uStack_430 = (undefined **)CONCAT44(uStack_324,local_328);
            local_428 = (code **)CONCAT44(uStack_31c,uStack_320);
            local_438 = (undefined **)0x7;
            pcVar12 = (code *)_ZN5alloc5boxed12Box_LT_T_GT_3new17hc81506f24a7fbb8eE(&local_438);
            _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17ha3fb43353162eed4E
                      (pcVar3,local_3e8);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h304c8b815f41dee8E(&local_340)
            ;
            ppuVar15 = &
                       PTR__ZN4core3ptr42drop_in_place_LT_uu_mv__error__MvError_GT_17h9bcc29c1d55ec87aE_00240638
            ;
            goto LAB_00179b2f;
          }
          local_3e0 = pcVar3;
        }
      }
                    /* try { // try from 00179c81 to 00179d1c has its CatchHandler @ 00179f2d */
      uVar6 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0024a728
              )(&local_3d0,
                *(undefined8 *)PTR__ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hd8dfd0a13820f25cE_0024a720,
                *(undefined8 *)
                 (PTR__ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hd8dfd0a13820f25cE_0024a720 + 8));
      cVar7 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0024a728
              )(&local_3d0,*(undefined8 *)PTR__ZN5uu_mv11OPT_VERBOSE17h47157023e9bd1ebdE_0024a730,
                *(undefined8 *)(PTR__ZN5uu_mv11OPT_VERBOSE17h47157023e9bd1ebdE_0024a730 + 8));
      uVar8 = 1;
      if (cVar7 == '\0') {
        uVar8 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0024a728
                )(&local_3d0,*(undefined8 *)PTR__ZN5uu_mv9OPT_DEBUG17h2efdc9740af23c68E_0024a738,
                  *(undefined8 *)(PTR__ZN5uu_mv9OPT_DEBUG17h2efdc9740af23c68E_0024a738 + 8));
      }
      uVar9 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0024a728
              )(&local_3d0,
                *(undefined8 *)
                 PTR__ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h95889265a0210865E_0024a740,
                *(undefined8 *)
                 (PTR__ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h95889265a0210865E_0024a740 + 8));
      uVar10 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0024a728
               )(&local_3d0,*(undefined8 *)PTR__ZN5uu_mv12OPT_PROGRESS17h9d10bdda2f353b4fE_0024a748,
                 *(undefined8 *)(PTR__ZN5uu_mv12OPT_PROGRESS17h9d10bdda2f353b4fE_0024a748 + 8));
      uVar11 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0024a728
               )(&local_3d0,*(undefined8 *)PTR__ZN5uu_mv9OPT_DEBUG17h2efdc9740af23c68E_0024a738,
                 *(undefined8 *)(PTR__ZN5uu_mv9OPT_DEBUG17h2efdc9740af23c68E_0024a738 + 8));
      local_438 = (undefined **)CONCAT44(uStack_33c,local_340);
      uStack_430 = (undefined **)CONCAT44(uStack_334,uStack_338);
      local_428 = (code **)local_330;
      uStack_420 = local_3e0;
      local_418 = local_3e8;
      uStack_410 = local_3d8;
      local_408 = CONCAT35(CONCAT12(bVar5,CONCAT11((char)ppuVar15,cVar4)),
                           CONCAT14(uVar11,CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar6)))));
                    /* try { // try from 00179d8b to 00179d98 has its CatchHandler @ 00179f19 */
      auVar19 = (*(code *)PTR__ZN5uu_mv2mv17h16154d6ab76310c1E_0024a750)
                          (local_350,local_348,&local_438);
      _ZN4core3ptr35drop_in_place_LT_uu_mv__Options_GT_17h88377726de0ffeb1E(&local_438);
      _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h69bc54a3be683dd2E
                (local_358);
                    /* try { // try from 00179db6 to 00179dbf has its CatchHandler @ 00179f6f */
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hd8f8b8df2d072d85E
                (&local_3d0);
      goto LAB_00179dc0;
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h8fc533723eb1648dE
              (&local_398,
               "cannot combine --backup with -n/--no-clobber or --update=none-failUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE"
               ,0x42);
    local_428 = (code **)local_388;
    local_438 = (undefined **)local_398;
    uStack_430 = ppuStack_390;
    uStack_420 = (code *)CONCAT44(uStack_420._4_4_,1);
    pcVar12 = (code *)_ZN5alloc5boxed12Box_LT_T_GT_3new17h7fc323307b658e09E(&local_438);
    ppuVar15 = &
               PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h5476133185994ee3E_002405b0
    ;
  }
LAB_00179b2f:
  auVar19._8_8_ = ppuVar15;
  auVar19._0_8_ = pcVar12;
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h69bc54a3be683dd2E
            (local_358);
                    /* try { // try from 00179b3c to 00179b45 has its CatchHandler @ 00179f6f */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hd8f8b8df2d072d85E
            (&local_3d0);
LAB_00179dc0:
  _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17hba0c8e8bddbe54d2E
            (local_2f8);
  return auVar19;
}