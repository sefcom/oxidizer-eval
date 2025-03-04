undefined8 _ZN8uu_shred6uumain6uumain17ha4d870c4a682fe02E(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  code *pcVar2;
  char cVar3;
  undefined uVar4;
  byte bVar5;
  undefined uVar6;
  undefined uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined **ppuVar12;
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
  
  (*(code *)PTR__ZN8uu_shred6uu_app17h2fbccd128ef7bb3fE_0023cd10)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h99921733234819cbE
            (&local_3e0,&local_2f8,param_1,param_2);
  if (local_3e0 == (undefined *)0x8000000000000000) {
    uVar9 = (*(code *)
              PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0023cd18
            )();
    return uVar9;
  }
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
                    /* try { // try from 00174a36 to 00174bbf has its CatchHandler @ 00175017 */
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E_0023cd20
          )(&local_390,&DAT_00115864,4);
  if (cVar3 == '\0') {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h06f51ff0b681cc1dE(&local_3e0)
    ;
    local_2e8 = local_3d0;
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
    uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6f09ec56500fdb36E(&local_2f8);
LAB_00174bca:
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h0da6067fb215cf4fE
              (&local_390);
    return uVar9;
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h9ae0da281e336987E
            (&local_2f8,&local_390,"iterations",10);
  lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h232dbe99beeae5a0E
                     ("iterations",10,&local_2f8);
  if (lVar10 == 0) {
                    /* try { // try from 00174fed to 00175014 has its CatchHandler @ 00175017 */
    (*(code *)PTR__ZN4core9panicking5panic17h8c3a660c3523e4a4E_0023cd60)
              ("internal error: entered unreachable code",0x28,
               &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00235e60);
    goto LAB_00175015;
  }
  uVar9 = *(undefined8 *)(lVar10 + 8);
  pppuVar1 = *(undefined ****)(lVar10 + 0x10);
  (*(code *)
    PTR__ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E_0023cd28
  )(local_3a0,uVar9,pppuVar1);
  if (local_3a0[0] != '\0') {
    local_3e0 = (undefined *)0x0;
    uStack_3c8 = CONCAT71(uStack_3c8._1_7_,1);
    local_340 = (code *)
                PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_0023cd30
    ;
    local_2f8 = &PTR_s_invalid_number_of_passes__00235d80;
    uStack_2f0 = 1;
    uStack_2d8 = 0;
    local_2e8 = &local_348;
    uStack_2e0 = 1;
    uStack_3d8 = uVar9;
    local_3d0 = pppuVar1;
    local_348 = &local_3e0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h1468cc81a7d721f1E(local_310,&local_2f8);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
    local_2e8 = local_300;
    uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6f09ec56500fdb36E(&local_2f8);
    goto LAB_00174bca;
  }
  local_350 = local_3a0._8_8_;
                    /* try { // try from 00174bf9 to 00174e7c has its CatchHandler @ 00175017 */
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0023cd38
          )(&local_390,"u",1);
  uVar11 = 3;
  if (cVar3 == '\0') {
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E_0023cd20
            )(&local_390,"remove",6);
    if (cVar3 != '\0') {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h9ae0da281e336987E
                (&local_2f8,&local_390,"remove",6);
      lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h232dbe99beeae5a0E
                         ("remove",6,&local_2f8);
      if (lVar10 != 0) {
        auVar13 = _ZN4core3ops8function6FnOnce9call_once17h18758c16304d57a3E
                            (*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
        uVar9 = auVar13._8_8_;
        lVar10 = auVar13._0_8_;
        if (lVar10 != 0) {
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4e8ad70e399e9a77E
                            (lVar10,uVar9,"unlink",6);
          uVar11 = 1;
          if (cVar3 == '\0') {
            cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4e8ad70e399e9a77E
                              (lVar10,uVar9,&DAT_00115818,4);
            uVar11 = 2;
            if (cVar3 == '\0') {
              cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4e8ad70e399e9a77E
                                (lVar10,uVar9,"wipesync",8);
              uVar11 = 3;
              if (cVar3 == '\0') goto LAB_00174cec;
            }
          }
          goto LAB_00174d3c;
        }
      }
LAB_00174cec:
      local_2f8 = &PTR_s_internal_error__entered_unreacha_00235d90;
      uStack_2f0 = 1;
      local_2e8 = (undefined ***)local_3f8;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17he12d0d7468628bb4E_0023cb80)
                (&local_2f8,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00235e78);
      goto LAB_00175015;
    }
    uVar11 = 0;
  }
LAB_00174d3c:
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0023cd38
          )(&local_390,"force",5);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h9ae0da281e336987E
            (&local_2f8,&local_390,&DAT_00115860,4);
  lVar10 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h232dbe99beeae5a0E
                     (&DAT_00115860,4,&local_2f8);
  ppuVar12 = (undefined **)0x8000000000000000;
  if (lVar10 != 0) {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE_0023cd40
    )(&local_2f8,lVar10);
    local_328 = uStack_2f0;
    puStack_320 = (undefined *)local_2e8;
    ppuVar12 = local_2f8;
  }
  uStack_2f0 = local_328;
  local_2e8 = (undefined ***)puStack_320;
  local_2f8 = ppuVar12;
  auVar13 = (*(code *)PTR__ZN8uu_shred8get_size17h94b39895cde5bfc0E_0023cd48)(&local_2f8);
  local_358 = auVar13._8_8_;
  bVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0023cd38
          )(&local_390,"exact",5);
  uVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0023cd38
          )(&local_390,&DAT_00115824,4);
  uVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0023cd38
          )(&local_390,"verbose",7);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17he002fca6a0afce48E
            (&local_2f8,&local_390,&DAT_00115864,4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h31860016ec26d6aeE
            (&local_3e0,&DAT_00115864,4,&local_2f8);
  if (local_3e0 != (undefined *)0x0) {
    local_2c8 = local_3b0;
    uStack_2c0 = uStack_3a8;
    uStack_2d8 = local_3c0;
    local_2e8 = local_3d0;
    uStack_2e0 = uStack_3c8;
    while( true ) {
                    /* try { // try from 00174ee0 to 00174f23 has its CatchHandler @ 0017502d */
      lVar10 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf805dfc0e659cc7dE
                         (&local_2f8);
      if (lVar10 == 0) break;
      auVar14 = (*(code *)PTR__ZN8uu_shred9wipe_file17hcdd557f5a4f902dcE_0023cd50)
                          (*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),local_350,
                           uVar11,auVar13._0_8_,local_358,bVar5 | auVar13._0_8_ == 1,uVar6,uVar7,
                           uVar4);
      if (auVar14._0_8_ != 0) {
                    /* try { // try from 00174f33 to 00174fc7 has its CatchHandler @ 00175019 */
        local_3f0 = auVar14;
        uVar8 = (**(code **)(auVar14._8_8_ + 0x60))(auVar14._0_8_);
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_0023cd58)(uVar8);
        auVar14 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_0023ccf8)();
        local_348 = (undefined **)local_3a0;
        local_340 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc8f8012ae4a14f0eE;
        local_338 = local_3f0;
        local_330 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hd17b5a2a40f7a343E
        ;
        local_3e0 = &DAT_00235da0;
        uStack_3d8 = 3;
        local_3c0 = 0;
        local_3d0 = &local_348;
        uStack_3c8 = 2;
        local_3a0 = auVar14;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_0023cc60)(&local_3e0);
                    /* try { // try from 00174fd2 to 00174fd6 has its CatchHandler @ 0017502d */
        _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17he57c1f6784037e65E
                  (local_3f0._0_8_,local_3f0._8_8_);
      }
    }
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h0da6067fb215cf4fE
              (&local_390);
    return 0;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h0e11329e76906eaaE_0023cd68)
            (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00235e90);
LAB_00175015:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}