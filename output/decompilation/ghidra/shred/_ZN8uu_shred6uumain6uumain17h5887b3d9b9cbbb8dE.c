undefined8 _ZN8uu_shred6uumain6uumain17h5887b3d9b9cbbb8dE(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined uVar5;
  byte bVar6;
  undefined uVar7;
  undefined uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined local_3f8 [8];
  undefined local_3f0 [16];
  undefined *local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined local_3a0 [16];
  undefined *local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined **local_348;
  code *local_340;
  undefined *local_338;
  code *local_330;
  undefined8 local_328;
  undefined *puStack_320;
  undefined local_310 [16];
  undefined ***local_300;
  undefined **local_2f8;
  undefined8 uStack_2f0;
  undefined ***local_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  
  (*(code *)PTR__ZN8uu_shred6uu_app17hd2dcc3f31ff24fbdE_00200ca8)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hb2603a8aac55f96bE
            (&local_3e0,&local_2f8,param_1,param_2);
  local_360 = local_3b0;
  local_370 = (undefined4)local_3c0;
  uStack_36c = local_3c0._4_4_;
  uStack_368 = uStack_3b8;
  uStack_364 = uStack_3b4;
  local_380 = (undefined4)local_3d0;
  uStack_37c = local_3d0._4_4_;
  uStack_378 = (undefined4)uStack_3c8;
  uStack_374 = uStack_3c8._4_4_;
  local_390 = local_3e0;
  local_388 = uStack_3d8;
                    /* try { // try from 0015d3df to 0015d573 has its CatchHandler @ 0015d9d4 */
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00200cb8
          )(&local_390,"file",4);
  if (cVar4 == '\0') {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf24d55a9f5c3adefE
              (&local_3e0,"missing file operand",0x14);
    local_2e8 = local_3d0;
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
    uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0cbabd4dbd3f10ddE(&local_2f8);
LAB_0015d57e:
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h5e7a0c77e1447be5E
              (&local_390);
    return uVar11;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h092ce364be16c0e0E
            (&local_2f8,&local_390,"iterations",10);
  lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd0a37637593e9037E
                     ("iterations",10,&local_2f8);
  if (lVar10 == 0) {
                    /* try { // try from 0015d994 to 0015d9bb has its CatchHandler @ 0015d9d4 */
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_00200cf0)
              (&DAT_00118482,0x28,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001f91f8);
    goto LAB_0015d9bc;
  }
  uVar11 = *(undefined8 *)(lVar10 + 8);
  pppuVar1 = *(undefined ****)(lVar10 + 0x10);
  _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
            (local_3a0,uVar11,pppuVar1);
  if (local_3a0[0] != '\0') {
    local_3e0 = (undefined *)0x0;
    uStack_3c8 = CONCAT71(uStack_3c8._1_7_,1);
    local_340 = (code *)
                PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00200cc0
    ;
    local_2f8 = &PTR_s_invalid_number_of_passes__001f9120;
    uStack_2f0 = 1;
    uStack_2d8 = 0;
    local_2e8 = &local_348;
    uStack_2e0 = 1;
    uStack_3d8 = uVar11;
    local_3d0 = pppuVar1;
    local_348 = &local_3e0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h8c2fdc05c5d844dcE(local_310,&local_2f8);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
    local_2e8 = local_300;
    uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0cbabd4dbd3f10ddE(&local_2f8);
    goto LAB_0015d57e;
  }
  local_350 = local_3a0._8_8_;
                    /* try { // try from 0015d5a0 to 0015d807 has its CatchHandler @ 0015d9d4 */
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200cc8
          )(&local_390,"u",1);
  uVar12 = 3;
  if (cVar4 == '\0') {
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00200cb8
            )(&local_390,"remove",6);
    if (cVar4 == '\0') {
      uVar12 = 0;
    }
    else {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h092ce364be16c0e0E
                (&local_2f8,&local_390,"remove",6);
      lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd0a37637593e9037E
                         ("remove",6,&local_2f8);
      if (lVar10 == 0) {
LAB_0015d683:
        local_2f8 = &PTR_s_internal_error__entered_unreacha_001f9130;
        uStack_2f0 = 1;
        local_2e8 = (undefined ***)local_3f8;
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00200b78)
                  (&local_2f8,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001f9210);
        goto LAB_0015d9bc;
      }
      uVar11 = *(undefined8 *)(lVar10 + 8);
      uVar2 = *(undefined8 *)(lVar10 + 0x10);
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h0fae521c240e2ca1E
                        (uVar11,uVar2,"unlink",6);
      uVar12 = 1;
      if (cVar4 == '\0') {
        cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h0fae521c240e2ca1E
                          (uVar11,uVar2,&DAT_001188a8,4);
        uVar12 = 2;
        if (cVar4 == '\0') {
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h0fae521c240e2ca1E
                            (uVar11,uVar2,"wipesync",8);
          uVar12 = 3;
          if (cVar4 == '\0') goto LAB_0015d683;
        }
      }
    }
  }
  uVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200cc8
          )(&local_390,"force",5);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h092ce364be16c0e0E
            (&local_2f8,&local_390,"size",4);
  lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd0a37637593e9037E
                     ("size",4,&local_2f8);
  if (lVar10 == 0) {
    local_2f8 = (undefined **)0x8000000000000000;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00200cd0
    )(&local_2f8,lVar10);
    local_328 = uStack_2f0;
    puStack_320 = (undefined *)local_2e8;
  }
  uStack_2f0 = local_328;
  local_2e8 = (undefined ***)puStack_320;
  auVar13 = (*(code *)PTR__ZN8uu_shred8get_size17hc596c7d8cb6dc047E_00200cd8)(&local_2f8);
  local_358 = auVar13._8_8_;
  bVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200cc8
          )(&local_390,"exact",5);
  uVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200cc8
          )(&local_390,&DAT_001188b8,4);
  uVar8 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00200cc8
          )(&local_390,"verboseError flushing stdout: ",7);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h8bd62655a1af8d38E
            (&local_2f8,&local_390);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h33ee07f20d67fd13E(&local_3e0,&local_2f8);
  if (local_3e0 != (undefined *)0x0) {
    local_2c8 = local_3b0;
    uStack_2c0 = uStack_3a8;
    uStack_2d8 = local_3c0;
    local_2e8 = local_3d0;
    uStack_2e0 = uStack_3c8;
    while( true ) {
      lVar10 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17heca40172de734678E
                         (&local_2f8);
      if (lVar10 == 0) break;
      auVar14 = (*(code *)PTR__ZN8uu_shred9wipe_file17h03ce7ff5299acd49E_00200ce0)
                          (*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),local_350,
                           uVar12,auVar13._0_8_,local_358,bVar6 | auVar13._0_8_ == 1,uVar7,uVar8,
                           uVar5);
      if (auVar14._0_8_ == 0) {
                    /* try { // try from 0015d870 to 0015d8bd has its CatchHandler @ 0015d9d2 */
        _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h18201937fcef5433E
                  (0,auVar14._8_8_);
      }
      else {
                    /* try { // try from 0015d8cd to 0015d961 has its CatchHandler @ 0015d9be */
        local_3f0 = auVar14;
        uVar9 = (**(code **)(auVar14._8_8_ + 0x58))(auVar14._0_8_);
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00200ce8)(uVar9);
        auVar14 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00200c88)();
        local_348 = (undefined **)local_3a0;
        local_340 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h70866de6320419bfE;
        local_338 = local_3f0;
        local_330 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h8d46ecfbc1450336E
        ;
        local_3e0 = &DAT_001f9140;
        uStack_3d8 = 3;
        local_3c0 = 0;
        local_3d0 = &local_348;
        uStack_3c8 = 2;
        local_3a0 = auVar14;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00200c90)(&local_3e0);
                    /* try { // try from 0015d96c to 0015d970 has its CatchHandler @ 0015d9d2 */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h2f42d0ed9674364bE
                  (local_3f0._0_8_,local_3f0._8_8_);
      }
    }
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h5e7a0c77e1447be5E
              (&local_390);
    return 0;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00200cf8)
            (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001f9228);
LAB_0015d9bc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}