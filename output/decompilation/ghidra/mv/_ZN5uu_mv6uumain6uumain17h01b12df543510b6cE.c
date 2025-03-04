undefined  [16] _ZN5uu_mv6uumain6uumain17h01b12df543510b6cE(undefined8 param_1,undefined8 param_2)

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
  
  (*(code *)PTR__ZN5uu_mv6uu_app17hfdaaab3614528530E_0028dca8)(local_2f8);
                    /* try { // try from 00192c28 to 00192c59 has its CatchHandler @ 0019323b */
  _ZN12clap_builder7builder7command7Command24try_get_matches_from_mut17h2240c66d1acfe0faE
            (&local_478,local_2f8,param_1,param_2);
  puVar3 = PTR__ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E_0028dcb8;
  if (local_478 == (undefined **)0x8000000000000000) {
    auVar16 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0028dcb0
              )();
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
  uVar14 = *(undefined8 *)PTR__ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E_0028dcb8;
  uVar1 = *(undefined8 *)(PTR__ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E_0028dcb8 + 8);
                    /* try { // try from 00192ca8 to 00192d6e has its CatchHandler @ 0019322c */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hff279e0ad4a0eeacE
            (&local_478,&local_410,uVar14,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h99178e80da74aca8E
            (&local_3d8,uVar14,uVar1,&local_478);
  if (local_3d8 == (undefined **)0x0) {
    local_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    local_340 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0028dcc0
                      ,0);
    uStack_33c = (undefined4)
                 ((ulong)
                  PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0028dcc0
                 >> 0x20);
    uStack_338 = 0;
    uStack_3bc = 0;
    local_350 = (undefined **)_ZN4core3ops8function6FnOnce9call_once17ha903d9ac633000a5E;
    local_3a0 = 0;
    local_348 = (undefined **)
                PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0028dcc0
    ;
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
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h9d30ac2cc0f0b64eE
            (local_380,&local_350);
                    /* try { // try from 00192d88 to 00192db7 has its CatchHandler @ 0019321a */
  if ((local_370 == 1) &&
     (cVar5 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E_0028dcd0
              )(&local_410,
                *(undefined8 *)PTR__ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E_0028dcc8,
                *(undefined8 *)
                 (PTR__ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E_0028dcc8 + 8)),
     cVar5 == '\0')) {
    local_3d8 = (undefined **)puVar3;
    uStack_3d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h48422eefa7f5ab42E;
    local_478 = &PTR_s_The_argument__<>_____requires_at_00284c28;
    uStack_470 = (undefined **)0x2;
    local_458 = (undefined **)0x0;
    uStack_460 = (undefined **)0x1;
                    /* try { // try from 00193174 to 001931a7 has its CatchHandler @ 0019321a */
    local_468 = &local_3d8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hdb640919041b3b75E(local_310,&local_478);
    uVar14 = _ZN12clap_builder5error14Error_LT_F_GT_3raw17h04dfe7f3fdb8b31aE(6,local_310);
    local_478 = (undefined **)
                _ZN12clap_builder5error14Error_LT_F_GT_6format17hb9eed6f2ee7e65ffE(uVar14,local_2f8)
    ;
                    /* try { // try from 001931b0 to 001931b9 has its CatchHandler @ 001931bc */
    _ZN12clap_builder5error14Error_LT_F_GT_4exit17hd8209c520a8761e9E(&local_478);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar5 = (*(code *)PTR__ZN5uu_mv24determine_overwrite_mode17h2a7c21ee43665632E_0028dcd8)
                    (&local_410);
  (*(code *)
    PTR__ZN6uucore8features14backup_control21determine_backup_mode17h17e48f842769eb29E_0028dce0)
            (&local_478,&local_410);
  ppuVar15 = uStack_470;
  ppuVar13 = local_478;
  if (local_478 == (undefined **)0x0) {
    cVar4 = (char)uStack_470;
                    /* try { // try from 00192de8 to 00192e20 has its CatchHandler @ 0019321a */
    bVar6 = (*(code *)
              PTR__ZN6uucore8features14update_control21determine_update_mode17h741491f5f957cb56E_0028dce8
            )(&local_410);
    if ((cVar4 == '\0') || ((cVar5 != '\0' && ((bVar6 & 1) == 0)))) {
      (*(code *)
        PTR__ZN6uucore8features14backup_control23determine_backup_suffix17h1f59e1b98a321786E_0028dcf0
      )(&local_368,&local_410);
      uVar14 = *(undefined8 *)PTR__ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E_0028dcc8;
      uVar1 = *(undefined8 *)(PTR__ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E_0028dcc8 + 8);
                    /* try { // try from 00192e2f to 00192e69 has its CatchHandler @ 001931e9 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h4d9e7d247c306b7fE
                (&local_478,&local_410,uVar14,uVar1);
      lVar12 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h89c82ab2bd8d6091E
                         (uVar14,uVar1,&local_478);
      if (lVar12 == 0) {
        local_428 = (undefined **)0x8000000000000000;
      }
      else {
        _ZN4core3ops8function6FnOnce9call_once17h16aa1e2e39857890E(&local_478,lVar12);
        local_418 = (undefined **)local_468;
        local_428 = local_478;
        uStack_420 = (undefined4)uStack_470;
        uStack_41c = uStack_470._4_4_;
                    /* try { // try from 00192e93 to 00192f03 has its CatchHandler @ 001931c9 */
        if ((local_478 != (undefined **)0x8000000000000000) &&
           (cVar7 = (*(code *)PTR__ZN3std4path4Path6is_dir17h9ac0db933706da51E_0028dcf8)
                              (uStack_470,local_468), cVar7 == '\0')) {
          local_3d8 = (undefined **)0x1;
          uStack_3d0 = (code *)CONCAT44(uStack_41c,uStack_420);
          uStack_3c8 = local_418;
          uStack_3c0 = CONCAT31(uStack_3c0._1_3_,1);
          _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h9d67ef52ab94ff93E
                    (&local_398,&local_3d8);
          uStack_460 = local_388;
          uStack_470 = (undefined **)CONCAT44(uStack_394,local_398);
          local_468 = (undefined ***)CONCAT44(uStack_38c,uStack_390);
          local_478 = (undefined **)0x8;
          ppuVar13 = (undefined **)_ZN5alloc5boxed12Box_LT_T_GT_3new17h18b7328edc97dea9E(&local_478)
          ;
                    /* try { // try from 00192f04 to 00192f10 has its CatchHandler @ 001931e9 */
          _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17h5f4d8006a6098320E
                    (&local_428);
                    /* try { // try from 00192f11 to 00192f62 has its CatchHandler @ 0019321a */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h79d8e948a1c6aee4E(&local_368);
          ppuVar15 = &
                     PTR__ZN4core3ptr42drop_in_place_LT_uu_mv__error__MvError_GT_17h9f6bb2e589f9a16eE_00284d28
          ;
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
      uVar8 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0028dd08
              )(&local_410,
                *(undefined8 *)PTR__ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hcc24806db1a5c249E_0028dd00,
                *(undefined8 *)
                 (PTR__ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hcc24806db1a5c249E_0028dd00 + 8));
      cVar7 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0028dd08
              )(&local_410,*(undefined8 *)PTR__ZN5uu_mv11OPT_VERBOSE17h564b3b5f0c97021dE_0028dd10,
                *(undefined8 *)(PTR__ZN5uu_mv11OPT_VERBOSE17h564b3b5f0c97021dE_0028dd10 + 8));
      uVar9 = 1;
      if (cVar7 == '\0') {
        uVar9 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0028dd08
                )(&local_410,*(undefined8 *)PTR__ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE_0028dd18,
                  *(undefined8 *)(PTR__ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE_0028dd18 + 8));
      }
      uVar10 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0028dd08
               )(&local_410,
                 *(undefined8 *)
                  PTR__ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h51274aa3e0aeb94eE_0028dd20,
                 *(undefined8 *)
                  (PTR__ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h51274aa3e0aeb94eE_0028dd20 + 8));
      uVar11 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0028dd08
               )(&local_410,*(undefined8 *)PTR__ZN5uu_mv12OPT_PROGRESS17h1c7c0a4244182235E_0028dd28,
                 *(undefined8 *)(PTR__ZN5uu_mv12OPT_PROGRESS17h1c7c0a4244182235E_0028dd28 + 8));
      uStack_444 = (*(code *)
                     PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0028dd08
                   )(&local_410,*(undefined8 *)PTR__ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE_0028dd18,
                     *(undefined8 *)(PTR__ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE_0028dd18 + 8));
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
      auVar16 = (*(code *)PTR__ZN5uu_mv2mv17h15eff797ddd7e01aE_0028dd30)
                          (local_378,local_370,&local_478);
                    /* try { // try from 001930e5 to 001930f4 has its CatchHandler @ 001931d8 */
      _ZN4core3ptr35drop_in_place_LT_uu_mv__Options_GT_17h05a211bf7f3f2585E(&local_478);
                    /* try { // try from 001930f5 to 00193101 has its CatchHandler @ 0019322c */
      _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17he70af320919a676eE
                (local_380);
                    /* try { // try from 00193102 to 0019310b has its CatchHandler @ 0019323b */
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h72f2f9eded2ee180E
                (&local_410);
      goto LAB_0019310c;
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h1716e8528db7e4a4E(&local_3d8)
    ;
    local_468 = (undefined ***)uStack_3c8;
    local_478 = local_3d8;
    uStack_470 = (undefined **)uStack_3d0;
    uStack_460 = (undefined **)CONCAT44(uStack_460._4_4_,1);
    ppuVar13 = (undefined **)_ZN5alloc5boxed12Box_LT_T_GT_3new17h5f90fa1e3f4cd7b7E(&local_478);
    ppuVar15 = &
               PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hc9b9cac856c32f80E_00284c80
    ;
  }
LAB_00192dc7:
                    /* try { // try from 00192dc7 to 00192dd3 has its CatchHandler @ 0019322c */
  auVar16._8_8_ = ppuVar15;
  auVar16._0_8_ = ppuVar13;
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17he70af320919a676eE
            (local_380);
                    /* try { // try from 00192dd4 to 00192ddd has its CatchHandler @ 0019323b */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h72f2f9eded2ee180E
            (&local_410);
LAB_0019310c:
  _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17h26677e3a2ea360a6E
            (local_2f8);
  return auVar16;
}