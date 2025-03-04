undefined  [16]
_ZN8uu_cksum6uumain6uumain17hf3578f9fe0c3201cE(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined auVar2 [16];
  char *pcVar3;
  undefined uVar4;
  long lVar5;
  undefined uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 extraout_RDX;
  long unaff_R12;
  undefined uVar17;
  char *pcVar18;
  undefined auVar19 [16];
  char *local_3d8;
  char *pcStack_3d0;
  long local_3c8;
  undefined local_3c0 [16];
  long local_3b0;
  long local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  long local_378;
  long local_370;
  undefined8 local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  long local_338;
  undefined8 local_330;
  long local_328;
  undefined8 local_320;
  undefined auStack_318 [16];
  ulong local_308;
  undefined local_300;
  undefined local_2ff;
  char local_2fe;
  undefined local_2fd;
  long local_70 [8];
  
  (*(code *)PTR__ZN8uu_cksum6uu_app17hbfb998c9a541210bE_004961a8)(&local_338);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hb83dbc2a0c900676E
            (&local_378,&local_338,param_1,param_2);
  if (local_378 == -0x8000000000000000) {
    auVar19 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_004961b0
              )();
    return auVar19;
  }
  local_380 = local_348;
  local_390 = local_358;
  uStack_38c = uStack_354;
  uStack_388 = uStack_350;
  uStack_384 = uStack_34c;
  local_3a0 = (undefined4)local_368;
  uStack_39c = local_368._4_4_;
  uStack_398 = uStack_360;
  uStack_394 = uStack_35c;
  local_3b0 = local_378;
  local_3a8 = local_370;
                    /* try { // try from 00280786 to 002809d3 has its CatchHandler @ 00280de2 */
  bVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_004961b8
          )(&local_3b0,"check",5);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h2dbf6ab7fc702809E
            (&local_338,&local_3b0,"algorithm",9);
  lVar14 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h7eb1f01738a0eebaE
                     ("algorithm",9,&local_338);
  if (lVar14 == 0) {
    if (bVar7 == 0) {
      local_3d8 = "crc";
      pcStack_3d0 = (char *)0x3;
      _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17hc0d278d84f38de62E
                (&local_3d8,&PTR_s_bsd_00452958,3);
    }
    else {
      local_3d8 = (char *)0x1;
      pcStack_3d0 = (char *)0x0;
      cVar9 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17hc0d278d84f38de62E
                        (&local_3d8,&PTR_s_bsd_00452958,3);
      uVar16 = 0xc;
      if (cVar9 != '\0') goto LAB_002809cc;
    }
LAB_00280869:
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17ha144a8fbf7eefe4dE
              (&local_338,&local_3b0,"length",6);
    puVar15 = (undefined8 *)
              _ZN12clap_builder6parser5error12MatchesError6unwrap17h0c465a2b7c337f9cE
                        ("length",6,&local_338);
    if (puVar15 == (undefined8 *)0x0) {
      lVar14 = 0;
      local_3c8 = unaff_R12;
    }
    else {
      cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3c86d19f285204edE
                        (local_3d8,pcStack_3d0,"blake2b",7);
      uVar16 = 10;
      if (cVar9 == '\0') goto LAB_002809cc;
      (*(code *)
        PTR__ZN6uucore8features8checksum24calculate_blake2b_length17h2a821e36733dba3aE_004961c0)
                (&local_338,*puVar15,extraout_RDX,10);
      auVar19._8_8_ = local_328;
      auVar19._0_8_ = local_330;
      lVar14 = local_330;
      local_3c8 = local_328;
      if (local_338 != 0) goto LAB_002809de;
    }
    if (bVar7 == 0) {
                    /* try { // try from 00280a00 to 00280a90 has its CatchHandler @ 00280de2 */
      (*(code *)PTR__ZN8uu_cksum28handle_tag_text_binary_flags17h54d38c67ed693625E_004961c8)
                (&local_338,&local_3b0);
      auVar19._8_8_ = local_330;
      auVar19._0_8_ = local_338;
      if (local_338 == 0) {
        uVar4 = (undefined)local_330;
        uVar6 = local_330._1_1_;
        (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hbb2f85fa7c8cfc19E_004961d0)
                  (&local_338,local_3d8,pcStack_3d0,lVar14,local_3c8);
        lVar5 = local_330;
        auVar19._8_8_ = local_328;
        auVar19._0_8_ = local_330;
        if (local_338 != 0) {
          uStack_360 = (undefined4)local_320;
          uStack_35c = local_320._4_4_;
          local_358 = auStack_318._0_4_;
          uStack_354 = auStack_318._4_4_;
          local_378 = local_338;
          local_370 = local_330;
          local_368 = local_328;
                    /* try { // try from 00280b86 to 00280bfb has its CatchHandler @ 00280dc8 */
          cVar9 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_004961b8
                  )(&local_3b0,"zero",4);
          uVar17 = 10;
          if (cVar9 != '\0') {
            uVar17 = 0;
          }
          cVar10 = (*(code *)
                     PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_004961b8
                   )(&local_3b0,"raw",3);
          cVar9 = '\x01';
          if (cVar10 == '\0') {
            cVar9 = (*(code *)
                      PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_004961b8
                    )(&local_3b0,"base64",6);
            cVar9 = cVar9 * '\x02';
          }
          local_3c0 = _ZN86__LT_alloc__boxed__Box_LT_F_C_A_GT__u20_as_u20_core__ops__function__Fn_LT_Args_GT__GT_4call17h265c500e1079a618E
                                (&local_368);
          uVar1 = CONCAT44(uStack_354,local_358);
                    /* try { // try from 00280c04 to 00280c42 has its CatchHandler @ 00280da2 */
          _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h30811e089b0b91d0E
                    (&local_338,&local_3b0,"filemode",4);
          _ZN12clap_builder6parser5error12MatchesError6unwrap17h1d7ac479b1fc21b9E
                    (local_70,"filemode",4,&local_338);
          local_308 = uVar1;
          local_2fe = cVar9;
          local_2fd = uVar17;
          auStack_318 = local_3c0;
          if (local_70[0] == 0) {
            local_330 = local_3c8;
            local_328 = local_338;
            local_320 = lVar5;
            local_300 = uVar4;
            local_2ff = uVar6;
            local_338 = lVar14;
            auVar19 = _ZN8uu_cksum5cksum17h3bc15d2c96f4f009E(&local_338);
          }
          else {
            local_330 = local_3c8;
            local_328 = local_338;
            local_320 = lVar5;
            local_300 = uVar4;
            local_2ff = uVar6;
                    /* try { // try from 00280cc1 to 00280d53 has its CatchHandler @ 00280da0 */
            local_338 = lVar14;
            auVar19 = _ZN8uu_cksum5cksum17h968c8f5c05770fbeE(&local_338,local_70);
          }
          if (auVar19._0_8_ == 0) {
            _ZN4core3ptr38drop_in_place_LT_uu_cksum__Options_GT_17h97266c7ff74129edE
                      (local_368,CONCAT44(uStack_35c,uStack_360));
            _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8b2259fb47b2f9beE
                      (&local_3b0);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar1;
            return auVar2 << 0x40;
          }
                    /* try { // try from 00280d6f to 00280d8d has its CatchHandler @ 00280de2 */
          _ZN4core3ptr38drop_in_place_LT_uu_cksum__Options_GT_17h97266c7ff74129edE
                    (local_368,CONCAT44(uStack_35c,uStack_360));
        }
      }
      goto LAB_002809de;
    }
    cVar9 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_004961b8
            )(&local_3b0,"text",4);
    cVar10 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_004961b8
             )(&local_3b0,"binary",6);
    bVar7 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_004961b8
            )(&local_3b0,"strict",6);
    bVar8 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_004961b8
            )(&local_3b0,"status",6);
    uVar11 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_004961b8
             )(&local_3b0,"warnZeroV",4);
    uVar12 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_004961b8
             )(&local_3b0,"ignore-missing",0xe);
    uVar13 = (*(code *)
               PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_004961b8
             )(&local_3b0,"quiet",5);
    pcVar3 = pcStack_3d0;
    uVar16 = 0xb;
    if (cVar9 == '\0' && cVar10 == '\0') {
      pcVar18 = pcStack_3d0;
      if (pcStack_3d0 != (char *)0x0) {
        pcVar18 = local_3d8;
      }
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h30811e089b0b91d0E
                (&local_338,&local_3b0,"filemode",4);
      _ZN12clap_builder6parser5error12MatchesError6unwrap17h1d7ac479b1fc21b9E
                (&local_378,"filemode",4,&local_338);
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h59c346ae679b8aacE(&local_338,&local_378);
                    /* try { // try from 00280adc to 00280af2 has its CatchHandler @ 00280db6 */
      auVar19 = _ZN6uucore8features8checksum27perform_checksum_validation17hcc8fa46a2280a7aeE
                          (local_330,local_328 * 0x10 + local_330,pcVar18,pcVar3,lVar14,local_3c8,
                           ((ulong)uVar11 & 0xff) << 0x28 |
                           (ulong)bVar7 << 0x20 | (ulong)bVar8 << 0x18 |
                           (ulong)((uVar12 & 0xff) << 8) | (ulong)((uVar13 & 0xff) << 0x10));
                    /* try { // try from 00280af3 to 00280b42 has its CatchHandler @ 00280de2 */
      _ZN4core3ptr71drop_in_place_LT_alloc__vec__Vec_LT__RF_std__ffi__os_str__OsStr_GT__GT_17h6eb853ba25e83800E
                (&local_338);
      goto LAB_002809de;
    }
  }
  else {
    local_3d8 = *(char **)(lVar14 + 8);
    pcStack_3d0 = *(char **)(lVar14 + 0x10);
    bVar8 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17hc0d278d84f38de62E
                      (&local_3d8,&PTR_s_bsd_00452958,3);
    uVar16 = 0xc;
    if ((bVar7 & bVar8) == 0) goto LAB_00280869;
  }
LAB_002809cc:
  uVar16 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf9354996cb72aa80E(uVar16);
  auVar19._8_8_ = &DAT_004525e8;
  auVar19._0_8_ = uVar16;
LAB_002809de:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8b2259fb47b2f9beE
            (&local_3b0);
  return auVar19;
}