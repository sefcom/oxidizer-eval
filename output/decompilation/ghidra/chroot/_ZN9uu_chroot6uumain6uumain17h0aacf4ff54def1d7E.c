undefined  [16]
_ZN9uu_chroot6uumain6uumain17h0aacf4ff54def1d7E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined auVar2 [16];
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  bool bVar10;
  undefined auVar11 [16];
  undefined8 local_488;
  undefined8 local_480;
  undefined8 *local_478;
  long local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined8 uStack_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  int local_428;
  uint local_424;
  undefined8 local_420;
  undefined8 local_418;
  ulong local_410;
  undefined8 local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 local_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  long local_3a8 [2];
  char *local_398;
  undefined8 local_390;
  ulong local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 local_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 local_354;
  undefined local_350 [16];
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  long local_70 [8];
  
  (*(code *)PTR__ZN9uu_chroot6uu_app17haf893327f4e12c40E_00201788)(&local_338);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h7b09a53eea8f1d9cE
            (&local_410,&local_338,param_1,param_2);
  local_364 = local_3ec;
  uStack_360 = uStack_3e8;
  uStack_35c = uStack_3e4;
  uStack_358 = uStack_3e0;
  local_354 = local_3dc;
  local_388 = local_410;
  local_380 = local_408;
  local_378 = uStack_400;
                    /* try { // try from 0016206b to 00162077 has its CatchHandler @ 00162652 */
  _ZN3std3env3var17h41c864fdddd31a28E(local_3a8);
                    /* try { // try from 00162078 to 0016208d has its CatchHandler @ 0016264d */
  (*(code *)PTR__ZN9uu_chroot7Options4from17hdf9aee44d298ba74E_00201790)(&local_338,&local_388);
  auVar11._8_8_ = puStack_328;
  auVar11._0_8_ = uStack_330;
  if (local_338 == (undefined *)0x8000000000000000) goto LAB_00162561;
  local_3b8 = local_2e0;
  uStack_3b0 = uStack_2d8;
  uVar5 = uStack_3b0;
  local_3c8 = local_2f0;
  uStack_3c4 = uStack_2ec;
  uStack_3c0 = uStack_2e8;
  uStack_3bc = uStack_2e4;
  local_3d8 = local_300;
  uStack_3d4 = uStack_2fc;
  uStack_3d0 = uStack_2f8;
  uStack_3cc = uStack_2f4;
  uStack_3e8 = local_310;
  uStack_3e4 = uStack_30c;
  uStack_3e0 = uStack_308;
  local_3dc = uStack_304;
  uStack_3f8 = (undefined4)local_320;
  uStack_3f4 = local_320._4_4_;
  uStack_3f0 = (undefined4)uStack_318;
  local_3ec = uStack_318._4_4_;
  local_410 = (ulong)local_338;
  local_408 = uStack_330;
  uStack_400 = SUB84(puStack_328,0);
  uStack_3fc = (undefined4)((ulong)puStack_328 >> 0x20);
  uStack_3b0._0_1_ = (char)uStack_2d8;
  bVar10 = (char)uStack_3b0 == '\0';
  puVar7 = puStack_328;
  uStack_3b0 = uVar5;
  if (bVar10) {
LAB_001621c5:
                    /* try { // try from 001621c5 to 0016236b has its CatchHandler @ 00162657 */
    cVar3 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00201798)(local_408,puVar7);
    if (cVar3 == '\0') {
      local_468 = (undefined4)local_408;
      uStack_464 = local_408._4_4_;
      uStack_460 = CONCAT44(uStack_3fc,uStack_400);
      local_440 = &local_468;
      uStack_438 = 
      PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_002017a0
      ;
      local_338 = &DAT_001195b0;
      uStack_330 = 1;
      uStack_318 = 0;
      puStack_328 = &local_440;
      local_320 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h3cb555ed11a172a6E(local_350,&local_338);
      local_320 = local_340;
      local_338 = (undefined *)CONCAT44(local_338._4_4_,10);
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h809e1f80a24b1dbfE(&local_338);
      auVar11._8_8_ =
           &
           PTR__ZN4core3ptr50drop_in_place_LT_uu_chroot__error__ChrootError_GT_17he253192c57828560E_001f9fa0
      ;
      auVar11._0_8_ = uVar5;
    }
    else {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h4ae8d85311f4ede3E
                (&local_338,&local_388);
      _ZN12clap_builder6parser5error12MatchesError6unwrap17h07bb346b5edcec3eE(local_70,&local_338);
      if (local_70[0] == 0) {
        local_480 = 0;
        local_478 = (undefined8 *)&DAT_00000008;
        local_470 = 0;
LAB_00162396:
        puVar4 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x20);
        if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 001625ea to 001625f9 has its CatchHandler @ 0016265c */
          (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00201698)(8,0x20);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        pcVar8 = local_398;
        if (local_3a8[0] != 0) {
          pcVar8 = "/bin/sh";
          local_390 = 7;
        }
        *puVar4 = pcVar8;
        puVar4[1] = local_390;
        puVar4[2] = "-i";
        puVar4[3] = 2;
        local_488 = 2;
        lVar9 = 1;
        bVar10 = true;
        uVar5 = local_390;
      }
      else {
        _ZN4core4iter6traits8iterator8Iterator7collect17ha950634a5ae1a641E(&local_480,local_70);
        if (local_470 == 0) goto LAB_00162396;
        local_488 = local_480;
        lVar9 = local_470 + -1;
        pcVar8 = (char *)*local_478;
        bVar10 = false;
        puVar4 = local_478;
        uVar5 = local_478[1];
      }
                    /* try { // try from 00162410 to 00162440 has its CatchHandler @ 00162634 */
      auVar11 = (*(code *)PTR__ZN9uu_chroot11set_context17h8c46b364c6a89d00E_002017a8)(&local_410);
      if (auVar11._0_8_ == 0) {
        _ZN3std7process7Command3new17h55e42c3aed214011E(&local_338,pcVar8,uVar5);
                    /* try { // try from 00162441 to 00162467 has its CatchHandler @ 00162610 */
        _ZN3std7process7Command4args17hc2e5c5130a361ad9E(&local_338,puVar4 + 2,lVar9);
        (*(code *)PTR__ZN3std7process7Command6status17h6e1e3c5811681da5E_002017b0)
                  (&local_428,&local_338);
        if (local_428 != 1) {
                    /* try { // try from 001624b8 to 001624c4 has its CatchHandler @ 00162634 */
          _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h22d060a4ddfe511dE(&local_338);
          if (local_424 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = -(uint)((local_424 & 0x7f) != 0) | local_424 >> 8 & 0xff;
          }
                    /* try { // try from 00162595 to 0016259a has its CatchHandler @ 00162634 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_002017b8)(uVar6);
          _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17had99761f1957d131E
                    (local_488,puVar4);
          if (bVar10) {
            _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17had99761f1957d131E
                      (local_480,local_478);
          }
          _ZN4core3ptr39drop_in_place_LT_uu_chroot__Options_GT_17hd6ad415c82bbebccE(&local_410);
          _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h6c87ce4b6abe1f1aE
                    (local_3a8);
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8b65a92f21add762E
                    (&local_388);
          auVar2._8_8_ = 0;
          auVar2._0_8_ = puVar7;
          return auVar2 << 0x40;
        }
        local_418 = local_420;
        cVar3 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_420);
        if (cVar3 == '\0') {
                    /* try { // try from 001624e4 to 001624ed has its CatchHandler @ 001625fe */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc2694177795286e6E
                    (&local_440,*puVar4,puVar4[1]);
          local_448 = local_430;
          local_458 = (undefined4)local_440;
          uStack_454 = local_440._4_4_;
          uStack_450 = (undefined4)uStack_438;
          uStack_44c = uStack_438._4_4_;
          local_468 = 2;
        }
        else {
                    /* try { // try from 0016248f to 00162498 has its CatchHandler @ 001625fe */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc2694177795286e6E
                    (&local_440,*puVar4,puVar4[1]);
          local_448 = local_430;
          local_458 = (undefined4)local_440;
          uStack_454 = local_440._4_4_;
          uStack_450 = (undefined4)uStack_438;
          uStack_44c = uStack_438._4_4_;
          local_468 = 1;
        }
        uStack_460 = local_420;
                    /* try { // try from 00162510 to 00162519 has its CatchHandler @ 001625fc */
        uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h809e1f80a24b1dbfE(&local_468);
                    /* try { // try from 0016251a to 00162529 has its CatchHandler @ 00162634 */
        _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h22d060a4ddfe511dE(&local_338);
        auVar11._8_8_ =
             &
             PTR__ZN4core3ptr50drop_in_place_LT_uu_chroot__error__ChrootError_GT_17he253192c57828560E_001f9fa0
        ;
        auVar11._0_8_ = uVar5;
      }
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17had99761f1957d131E
                (local_488,puVar4);
      if (bVar10) {
        _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17had99761f1957d131E
                  (local_480,local_478);
      }
    }
  }
  else {
                    /* try { // try from 0016212f to 00162155 has its CatchHandler @ 00162657 */
    _ZN6uucore8features2fs12canonicalize17hd1e02c1cbeb0770fE(&local_338,&local_410);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8e19656dab11eb84E(&local_468,&local_338);
    uVar5 = uStack_460;
                    /* try { // try from 00162160 to 00162170 has its CatchHandler @ 00162622 */
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00201500)
              (&local_338,uStack_460,CONCAT44(uStack_454,local_458));
    if ((((ulong)local_338 & 1) == 0) &&
       (cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hcb8977ebfc05cc90E
                          (uStack_330,puStack_328,"/",1), cVar3 != '\0')) {
      _ZN4core3mem4drop17hd7797c8ae89fe810E(CONCAT44(uStack_464,local_468),uVar5);
      puVar7 = (undefined8 *)CONCAT44(uStack_3fc,uStack_400);
      goto LAB_001621c5;
    }
    _ZN4core3mem4drop17hd7797c8ae89fe810E(CONCAT44(uStack_464,local_468),uVar5);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc2694177795286e6E
              (&local_468,"option --skip-chdir only permitted if NEWROOT is old \'/\'",0x38);
    local_338 = (undefined *)CONCAT44(uStack_464,local_468);
    local_320 = CONCAT44(local_320._4_4_,0x7d);
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37ad0db9ff8eec9cE(&local_338);
    auVar11._8_8_ =
         &
         PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h154c01b780e3fd6dE_001fa028
    ;
    auVar11._0_8_ = uVar5;
  }
  _ZN4core3ptr39drop_in_place_LT_uu_chroot__Options_GT_17hd6ad415c82bbebccE(&local_410);
LAB_00162561:
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h6c87ce4b6abe1f1aE
            (local_3a8);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8b65a92f21add762E
            (&local_388);
  return auVar11;
}