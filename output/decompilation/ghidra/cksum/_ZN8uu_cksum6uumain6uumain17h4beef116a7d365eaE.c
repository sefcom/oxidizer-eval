undefined  [16]
_ZN8uu_cksum6uumain6uumain17h4beef116a7d365eaE(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar19;
  char *pcVar20;
  undefined uVar21;
  undefined auVar22 [16];
  char *local_3e0;
  char *pcStack_3d8;
  ulong local_3d0;
  undefined local_3c8 [16];
  ulong local_3b8 [2];
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined8 local_380;
  ulong local_378;
  undefined local_370;
  undefined uStack_36f;
  undefined6 uStack_36e;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  ulong local_338;
  ulong local_330;
  ulong local_328;
  ulong local_320;
  undefined local_318 [16];
  undefined8 local_308;
  undefined local_300;
  undefined local_2ff;
  char local_2fe;
  undefined local_2fd;
  long local_70 [8];
  
  (*(code *)PTR__ZN8uu_cksum6uu_app17hd53996ddfe35d34bE_0026cf88)(&local_338);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h2db5322af81e6fb7E
            (&local_378,&local_338,param_1,param_2);
  local_388 = local_348;
  local_398 = local_358;
  uStack_394 = uStack_354;
  uStack_390 = uStack_350;
  uStack_38c = uStack_34c;
  local_3a8 = local_368;
  uStack_3a4 = uStack_364;
  uStack_3a0 = uStack_360;
  uStack_39c = uStack_35c;
  local_3b8[0] = local_378;
                    /* try { // try from 001831a8 to 001832b7 has its CatchHandler @ 00183779 */
  bVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
          )(local_3b8,"check",5);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h00790a4881c98ffcE
            (&local_338,local_3b8);
  lVar15 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h97a1c4246d79d57dE(&local_338);
  if (lVar15 == 0) {
    if (bVar6 == 0) {
      local_3e0 = "crc";
      pcStack_3d8 = (char *)0x3;
    }
    else {
      local_3e0 = (char *)0x1;
      pcStack_3d8 = (char *)0x0;
    }
  }
  else {
    local_3e0 = *(char **)(lVar15 + 8);
    pcStack_3d8 = *(char **)(lVar15 + 0x10);
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hed8e5fa650f4927bE
            (&local_338,local_3b8);
  puVar16 = (undefined8 *)
            _ZN12clap_builder6parser5error12MatchesError6unwrap17h7b7ce5a1149fe295E(&local_338);
  if (puVar16 == (undefined8 *)0x0) {
    uVar19 = 0;
LAB_0018329f:
    bVar8 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h2a9a381f3dd8b716E
                      (&local_3e0);
    uVar17 = 0xc;
    if ((bVar6 & bVar8) == 0) {
      if (bVar6 == 0) {
                    /* try { // try from 00183494 to 00183508 has its CatchHandler @ 00183779 */
        (*(code *)PTR__ZN3std3env7args_os17h5ff0cf6a45e392f2E_0026cfa8)(&local_338);
        _ZN8uu_cksum28handle_tag_text_binary_flags17h483042924fc20423E(&local_378,&local_338);
        if (local_378 == 0) {
          (*(code *)PTR__ZN6uucore8features8checksum11detect_algo17hf5ee5896e94cf2e7E_0026cfb0)
                    (&local_338,local_3e0,pcStack_3d8,uVar19,local_3d0);
          uVar5 = local_320;
          uVar4 = local_328;
          uVar3 = local_330;
          auVar22._8_8_ = local_328;
          auVar22._0_8_ = local_330;
          if (local_338 != 0) {
            local_380 = local_318._0_8_;
                    /* try { // try from 00183544 to 001835b7 has its CatchHandler @ 00183767 */
            cVar7 = (*(code *)
                      PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
                    )(local_3b8,&DAT_00111960,4);
            uVar21 = 10;
            if (cVar7 != '\0') {
              uVar21 = 0;
            }
            cVar9 = (*(code *)
                      PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
                    )(local_3b8,"raw",3);
            cVar7 = '\x01';
            if (cVar9 == '\0') {
              cVar7 = (*(code *)
                        PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
                      )(local_3b8,"base64",6);
              cVar7 = cVar7 * '\x02';
            }
            local_3c8 = (**(code **)(local_320 + 0x28))(local_328);
                    /* try { // try from 001835b8 to 001835de has its CatchHandler @ 0018373e */
            _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hd122a2a33cab93c1E
                      (&local_338,local_3b8);
            _ZN12clap_builder6parser5error12MatchesError6unwrap17hf2a0b203744d8944E
                      (local_70,&local_338);
            local_2fe = cVar7;
            local_2fd = uVar21;
            local_318 = local_3c8;
            if (local_70[0] == 0) {
              local_330 = local_3d0;
              local_328 = local_338;
              local_320 = uVar3;
              local_308 = local_380;
              local_300 = local_370;
              local_2ff = uStack_36f;
              local_338 = uVar19;
              auVar22 = _ZN8uu_cksum5cksum17h728c7b2291f86d06E(&local_338);
            }
            else {
              local_330 = local_3d0;
              local_328 = local_338;
              local_320 = uVar3;
              local_308 = local_380;
              local_300 = local_370;
              local_2ff = uStack_36f;
                    /* try { // try from 00183662 to 001836fc has its CatchHandler @ 0018373c */
              local_338 = uVar19;
              auVar22 = _ZN8uu_cksum5cksum17h336d46a627bb511aE(&local_338,local_70);
            }
            if (auVar22._0_8_ == 0) {
              _ZN4core3ptr38drop_in_place_LT_uu_cksum__Options_GT_17hb9d3c08ed2eee8cbE(uVar4,uVar5);
              _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h87286edc2ae69f70E
                        (local_3b8);
              auVar1._8_8_ = 0;
              auVar1._0_8_ = uVar4;
              return auVar1 << 0x40;
            }
                    /* try { // try from 00183708 to 00183729 has its CatchHandler @ 00183779 */
            _ZN4core3ptr38drop_in_place_LT_uu_cksum__Options_GT_17hb9d3c08ed2eee8cbE(uVar4,uVar5);
          }
        }
        else {
          auVar22[9] = uStack_36f;
          auVar22[8] = local_370;
          auVar22._10_6_ = uStack_36e;
          auVar22._0_8_ = local_378;
        }
        goto LAB_001832c2;
      }
                    /* try { // try from 001832ed to 00183416 has its CatchHandler @ 00183779 */
      cVar7 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
              )(local_3b8,&DAT_00111930,4);
      cVar9 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
              )(local_3b8,"binary",6);
      bVar6 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
              )(local_3b8,"strict",6);
      cVar10 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
               )(local_3b8,"status",6);
      uVar13 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
               )(local_3b8,&DAT_001118d8,4);
      uVar14 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
               )(local_3b8,"ignore-missing",0xe);
      cVar11 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
               )(local_3b8,"quiet",5);
      cVar12 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0026cf98
               )(local_3b8,"tag",3);
      pcVar2 = pcStack_3d8;
      uVar17 = 0xb;
      if (cVar9 == '\0' && (cVar7 == '\0' && cVar12 == '\0')) {
        pcVar20 = pcStack_3d8;
        if (pcStack_3d8 != (char *)0x0) {
          pcVar20 = local_3e0;
        }
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hd122a2a33cab93c1E
                  (&local_338,local_3b8,extraout_RDX_00,0xb);
        _ZN12clap_builder6parser5error12MatchesError6unwrap17hf2a0b203744d8944E
                  (&local_378,&local_338);
        _ZN4core6option15Option_LT_T_GT_11map_or_else17ha3d3531d4b6cb51eE(&local_338,&local_378);
        uVar3 = local_330;
        uVar18 = 0x1000000;
        if (cVar11 == '\0') {
          uVar18 = (uVar13 & 0xff | 2) << 0x18;
        }
        uVar13 = 0;
        if (cVar10 == '\0') {
          uVar13 = uVar18;
        }
                    /* try { // try from 00183460 to 00183478 has its CatchHandler @ 00183752 */
        auVar22 = _ZN6uucore8features8checksum27perform_checksum_validation17hd49b76021f528c16E
                            (local_330,local_328 * 0x10 + local_330,pcVar20,pcVar2,uVar19,local_3d0,
                             (uVar14 & 0xff) << 8 | (uint)bVar6 << 0x10 | uVar13);
        _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_clap_builder__util__id__Id_GT__GT_17h85ec7d2cdaf9b289E
                  (local_338,uVar3);
        goto LAB_001832c2;
      }
    }
  }
  else {
    cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                      (local_3e0,pcStack_3d8,"blake2b",7);
    uVar17 = 10;
    if (cVar7 != '\0') {
      (*(code *)
        PTR__ZN6uucore8features8checksum24calculate_blake2b_length17hd9514fcefba150b6E_0026cfa0)
                (&local_338,*puVar16,extraout_RDX,10);
      auVar22._8_8_ = local_328;
      auVar22._0_8_ = local_330;
      if ((local_338 & 1) != 0) goto LAB_001832c2;
      local_3d0 = local_328;
      uVar19 = local_330;
      goto LAB_0018329f;
    }
  }
  uVar17 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hd32763c273953b02E(uVar17);
  auVar22._8_8_ = &DAT_00262bb0;
  auVar22._0_8_ = uVar17;
LAB_001832c2:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h87286edc2ae69f70E
            (local_3b8);
  return auVar22;
}