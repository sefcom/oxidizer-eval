undefined  [16] _ZN6uu_cut6uumain6uumain17had17db8be8afe5d0E(void)

{
  undefined uVar1;
  undefined uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined auVar14 [16];
  long local_4b8;
  long lStack_4b0;
  long local_4a8;
  long lStack_4a0;
  undefined **local_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined local_488;
  undefined7 uStack_487;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  long lStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 *local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  long lStack_420;
  long local_410;
  long local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 *local_3d0;
  undefined **local_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  long local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 *local_378;
  undefined8 local_370;
  undefined local_368 [24];
  undefined8 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  long local_330;
  long local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  long lStack_2b0;
  
  uVar4 = _ZN4core4iter6traits8iterator8Iterator3map17h1884fc5b1cb6b08eE();
  _ZN4core4iter6traits8iterator8Iterator7collect17h302c5a2113f97498E(local_368,uVar4);
                    /* try { // try from 0015fba6 to 0015fbb3 has its CatchHandler @ 00160532 */
  (*(code *)PTR__ZN6uu_cut6uu_app17h38d211b96a5c967dE_001ffce0)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h46fc889720c13b83E
            (&local_468,&local_2f8,local_368);
  local_3d0 = local_438;
  local_3e0 = (undefined4)local_448;
  uStack_3dc = local_448._4_4_;
  uStack_3d8 = (undefined4)uStack_440;
  uStack_3d4 = uStack_440._4_4_;
  local_3f0 = (undefined4)local_458;
  uStack_3ec = local_458._4_4_;
  uStack_3e8 = (undefined4)uStack_450;
  uStack_3e4 = uStack_450._4_4_;
  local_400 = local_468;
  local_3f8 = uStack_460;
                    /* try { // try from 0015fc34 to 0015fc83 has its CatchHandler @ 0016054a */
  uVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffcf0
          )(&local_400,"complement",10);
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffcf0
          )(&local_400,"only-delimited",0xe);
  (*(code *)PTR__ZN6uu_cut14get_delimiters17hcb390251ab0b3ea3E_001ffcf8)(&local_2f8,&local_400);
  lVar9 = (long)uStack_2f0;
  if ((int)local_2f8 == 1) {
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hdd10918ebed38779E
              (&local_400);
    goto LAB_0016034c;
  }
  local_3c8 = local_2e8;
  local_410 = uStack_2e0;
  local_408 = (long)uStack_2d8;
                    /* try { // try from 0015fce0 to 0016005c has its CatchHandler @ 0016054a */
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffcf0
          )(&local_400,"zero-terminated",0xf);
  uVar11 = 10;
  if (cVar3 != '\0') {
    uVar11 = 0;
  }
  (*(code *)
    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches10indices_of17h172437770ffa9ae0E_001ffd00
  )(&local_3a8,&local_400,"bytes",5);
  (*(code *)
    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches10indices_of17h172437770ffa9ae0E_001ffd00
  )(&local_4b8,&local_400,"characters",10);
  (*(code *)
    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches10indices_of17h172437770ffa9ae0E_001ffd00
  )(&local_468,&local_400,"fields",6);
  local_2e8 = (undefined **)local_398;
  local_2f8 = (code *)CONCAT44(uStack_3a4,local_3a8);
  uStack_2f0 = (undefined *)CONCAT44(uStack_39c,uStack_3a0);
  uStack_2e0 = local_4b8;
  uStack_2d8 = (undefined **)lStack_4b0;
  uStack_2d0 = local_4a8;
  local_2b8 = local_458;
  local_340 = local_3a8;
  uStack_33c = uStack_3a4;
  uStack_338 = uStack_3a0;
  uStack_334 = uStack_39c;
  local_310 = (int)local_468;
  uStack_30c = local_468._4_4_;
  uStack_308 = (undefined4)uStack_460;
  uStack_304 = uStack_460._4_4_;
  local_300 = local_458;
  local_330 = local_398;
  local_328 = local_4b8;
  local_320 = lStack_4b0;
  local_318 = local_4a8;
  local_350 = 0;
  local_348 = 3;
  lVar5 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h1d1c3f14b2218463E
                    (&local_350);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0429bf5ed6033f41E
            (&local_2f8,&local_400,"bytes",5);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00aa4d22a6f6b799E
                    ("bytes",5,&local_2f8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0429bf5ed6033f41E
            (&local_2f8,&local_400,"characters",10);
  lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00aa4d22a6f6b799E
                    ("characters",10,&local_2f8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0429bf5ed6033f41E
            (&local_2f8,&local_400,"fields",6);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00aa4d22a6f6b799E
                    ("fields",6,&local_2f8);
  if (lVar5 == 0) goto LAB_00160112;
  if (lVar5 == 1) {
    if (lVar6 == 0) {
      if (lVar7 == 0) {
        if (lVar8 != 0) {
          (*(code *)PTR__ZN6uu_cut14list_to_ranges17ha2a167a13e4b3412E_001ffd08)
                    (&local_2f8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),uVar1);
          if ((int)local_2f8 == 1) goto LAB_00160073;
          uStack_480 = (undefined4)uStack_2f0;
          uStack_47c = uStack_2f0._4_4_;
          uStack_478 = (undefined4)local_2e8;
          uStack_474 = local_2e8._4_4_;
          local_498 = local_3c8;
          uStack_490 = CONCAT31(uStack_490._1_3_,uVar2);
          local_4b8 = 2;
          lStack_4a0 = lVar9;
          goto LAB_00160097;
        }
LAB_00160112:
                    /* try { // try from 00160112 to 0016012a has its CatchHandler @ 0016054a */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h66af3a33255a12b8E
                  (&local_2f8,
                   "invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)",0x49)
        ;
        goto LAB_0016012b;
      }
      if (lVar8 != 0) goto LAB_00160112;
      (*(code *)PTR__ZN6uu_cut14list_to_ranges17ha2a167a13e4b3412E_001ffd08)
                (&local_2f8,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),uVar1);
      if ((int)local_2f8 != 1) {
        uStack_480 = (undefined4)uStack_2f0;
        uStack_47c = uStack_2f0._4_4_;
        uStack_478 = (undefined4)local_2e8;
        uStack_474 = local_2e8._4_4_;
        uStack_490 = CONCAT31(uStack_490._1_3_,2);
        local_4b8 = 1;
        goto LAB_00160097;
      }
LAB_00160073:
      lStack_4a0 = uStack_2e0;
      lStack_4b0 = (long)uStack_2f0;
      local_4a8 = (long)local_2e8;
      goto LAB_0016014e;
    }
    if (lVar7 != 0 || lVar8 != 0) goto LAB_00160112;
    (*(code *)PTR__ZN6uu_cut14list_to_ranges17ha2a167a13e4b3412E_001ffd08)
              (&local_2f8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10),uVar1);
    if ((int)local_2f8 == 1) goto LAB_00160073;
    uStack_480 = (undefined4)uStack_2f0;
    uStack_47c = uStack_2f0._4_4_;
    uStack_478 = (undefined4)local_2e8;
    uStack_474 = local_2e8._4_4_;
    uStack_490 = CONCAT31(uStack_490._1_3_,2);
    local_4b8 = 0;
LAB_00160097:
    lStack_4b0 = local_410;
    local_4a8 = local_408;
    local_488 = uVar11;
    lStack_470 = uStack_2e0;
    if (local_4b8 == 0) {
                    /* try { // try from 00160364 to 00160476 has its CatchHandler @ 001604e9 */
      cVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001ffd10
              )(&local_400,"delimiter",9);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffcf0
                )(&local_400,"whitespace-delimited",0x14);
        if (cVar3 == '\0') {
          cVar3 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffcf0
                  )(&local_400,"only-delimited",0xe);
          goto LAB_0016045a;
        }
LAB_00160425:
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h66af3a33255a12b8E
                  (&local_2f8,
                   "invalid input: The \'-w\' option only usable if printing a sequence of fields",
                   0x4b);
      }
      else {
LAB_00160386:
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h66af3a33255a12b8E
                  (&local_2f8,
                   "invalid input: The \'--delimiter\' (\'-d\') option only usable if printing a sequence of fields"
                   ,0x5b);
      }
LAB_00160477:
      uStack_450 = (long)local_2e8;
      uStack_460 = (long)local_2f8;
      local_458 = (long)uStack_2f0;
      local_468 = 3;
      _ZN4core3ptr33drop_in_place_LT_uu_cut__Mode_GT_17h43444cf76aa506afE(&local_4b8);
    }
    else {
      if (local_4b8 == 1) {
                    /* try { // try from 001600af to 0016010c has its CatchHandler @ 001604e9 */
        cVar3 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001ffd10
                )(&local_400,"delimiter",9);
        if (cVar3 != '\0') goto LAB_00160386;
        cVar3 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffcf0
                )(&local_400,"whitespace-delimited",0x14);
        if (cVar3 != '\0') goto LAB_00160425;
        cVar3 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ffcf0
                )(&local_400,"only-delimited",0xe);
LAB_0016045a:
        if (cVar3 != '\0') {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h66af3a33255a12b8E
                    (&local_2f8,
                     "invalid input: The \'--only-delimited\' (\'-s\') option only usable if printing a sequence of fields"
                     ,0x60);
          goto LAB_00160477;
        }
      }
      local_428 = CONCAT44(uStack_474,uStack_478);
      lStack_420 = lStack_470;
      local_458 = local_4a8;
      uStack_450 = lStack_4a0;
      local_448 = local_498;
      uStack_440 = CONCAT44(uStack_48c,uStack_490);
      local_438 = (undefined8 *)CONCAT71(uStack_487,local_488);
      uStack_430 = CONCAT44(uStack_47c,uStack_480);
      local_468 = local_4b8;
      uStack_460 = lStack_4b0;
    }
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h66af3a33255a12b8E
              (&local_2f8,
               "invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)"
               ,0x56);
LAB_0016012b:
    lStack_4a0 = (long)local_2e8;
    lStack_4b0 = (long)local_2f8;
    local_4a8 = (long)uStack_2f0;
LAB_0016014e:
    local_4b8 = 3;
    local_428 = CONCAT44(uStack_474,uStack_478);
    lStack_420 = lStack_470;
    local_438 = (undefined8 *)CONCAT71(uStack_487,local_488);
    uStack_430 = CONCAT44(uStack_47c,uStack_480);
    local_448 = local_498;
    uStack_440 = CONCAT44(uStack_48c,uStack_490);
    local_458 = local_4a8;
    uStack_450 = lStack_4a0;
    local_468 = 3;
    uStack_460 = lStack_4b0;
  }
                    /* try { // try from 0016019d to 0016025d has its CatchHandler @ 0016050a */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h9159c1f91113d300E
            (&local_2f8,&local_400);
  puVar10 = &local_2f8;
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hd1322662bf5dcdddE(&local_3a8);
  local_2f8 = (code *)CONCAT44(uStack_3a4,local_3a8);
  if (local_2f8 == (code *)0x0) {
    local_388 = 0;
    uStack_384 = 0;
    uStack_380 = 0;
    uStack_37c = 0;
    uVar12 = SUB84(PTR__ZN94__LT_clap_builder__parser__matches__arg_matches__Indices_u20_as_u20_core__default__Default_GT_7default5EMPTY17hd2def35c205c14f3E_001ffd18
                   ,0);
    uVar13 = (undefined4)
             ((ulong)
              PTR__ZN94__LT_clap_builder__parser__matches__arg_matches__Indices_u20_as_u20_core__default__Default_GT_7default5EMPTY17hd2def35c205c14f3E_001ffd18
             >> 0x20);
    uStack_390 = 0;
    uStack_38c = 0;
    local_2f8 = _ZN4core3ops8function6FnOnce9call_once17h4bed63b4620333e2E;
    local_370 = 0;
    uStack_2f0 = 
    PTR__ZN94__LT_clap_builder__parser__matches__arg_matches__Indices_u20_as_u20_core__default__Default_GT_7default5EMPTY17hd2def35c205c14f3E_001ffd18
    ;
  }
  else {
    uStack_2f0 = (undefined *)CONCAT44(uStack_39c,uStack_3a0);
    puVar10 = local_378;
    uVar12 = (undefined4)local_398;
    uVar13 = local_398._4_4_;
  }
  local_2e8 = (undefined **)CONCAT44(uVar13,uVar12);
  uStack_2d8 = (undefined **)CONCAT44(uStack_384,local_388);
  uStack_2d0 = CONCAT44(uStack_37c,uStack_380);
  local_2c8 = puVar10;
  uStack_2c0 = local_370;
  uStack_2e0._0_4_ = uStack_390;
  uStack_2e0._4_4_ = uStack_38c;
  _ZN4core4iter6traits8iterator8Iterator7collect17hb0606489a4b1f7f0E(&local_3c0,&local_2f8);
  if ((int)local_468 == 3) {
    local_2e8 = (undefined **)uStack_450;
    local_2f8 = (code *)uStack_460;
    uStack_2f0 = (undefined *)local_458;
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
                    /* try { // try from 0016028a to 00160296 has its CatchHandler @ 001604f8 */
    lVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc4b90325c9150444E(&local_2f8);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17ha61bc3c7502dfb92E
              (&local_3c0);
  }
  else {
    local_2b8 = local_428;
    lStack_2b0 = lStack_420;
    local_2c8 = local_438;
    uStack_2c0 = uStack_430;
    uStack_2d8 = local_448;
    uStack_2d0 = uStack_440;
    local_2e8 = (undefined **)local_458;
    uStack_2e0 = uStack_450;
    local_2f8 = (code *)local_468;
    uStack_2f0 = (undefined *)uStack_460;
    local_398 = local_3b0;
    local_3a8 = local_3c0;
    uStack_3a4 = uStack_3bc;
    uStack_3a0 = uStack_3b8;
    uStack_39c = uStack_3b4;
                    /* try { // try from 00160316 to 0016032b has its CatchHandler @ 001604f3 */
    (*(code *)PTR__ZN6uu_cut9cut_files17h785d6e985a8c4fa3E_001ffd20)(&local_3a8,&local_2f8);
    _ZN4core3ptr33drop_in_place_LT_uu_cut__Mode_GT_17h43444cf76aa506afE(&local_468);
    lVar9 = 0;
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hdd10918ebed38779E
            (&local_400);
  local_2e8 = &
              PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h8102c6478ef9205aE_001f8440
  ;
LAB_0016034c:
  auVar14._8_8_ = local_2e8;
  auVar14._0_8_ = lVar9;
  return auVar14;
}