undefined  [16]
_ZN9uu_factor6uumain6uumain17h8a5b39c1daa0c762E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined uVar3;
  undefined8 uVar4;
  long lVar5;
  code **ppcVar6;
  undefined extraout_DL;
  undefined auVar7 [16];
  undefined8 local_408;
  uint local_400;
  undefined local_3f8 [16];
  undefined *local_3e8;
  code *local_3e0;
  code **local_3d8;
  code *local_3d0;
  undefined *local_3c8;
  undefined local_3c0 [16];
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 local_390;
  undefined8 uStack_388;
  code **local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 *local_368;
  code *local_360;
  undefined ***local_358;
  undefined *local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined local_320 [40];
  undefined ***local_2f8;
  undefined *puStack_2f0;
  code **local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined local_2b8 [648];
  
  (*(code *)PTR__ZN9uu_factor6uu_app17h680fb957320d0cf8E_002934b0)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h356928954ce19a97E
            (local_3c0,&local_2f8,param_1,param_2);
  if ((code ***)local_3c0._0_8_ == (code ***)0x8000000000000000) {
    auVar7 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_002934b8
             )();
  }
  else {
    local_328 = local_390;
    local_338 = local_3a0;
    uStack_334 = uStack_39c;
    uStack_330 = uStack_398;
    uStack_32c = uStack_394;
    local_348 = local_3b0;
    uStack_344 = uStack_3ac;
    uStack_340 = uStack_3a8;
    uStack_33c = uStack_3a4;
    local_358 = (undefined ***)local_3c0._0_8_;
    local_350 = (undefined *)local_3c0._8_8_;
                    /* try { // try from 001a465a to 001a469a has its CatchHandler @ 001a4b1e */
    uVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002934c8
            )(&local_358,
              *(undefined8 *)PTR__ZN9uu_factor7options9EXPONENTS17he776d04d341a4ac5E_002934c0,
              *(undefined8 *)(PTR__ZN9uu_factor7options9EXPONENTS17he776d04d341a4ac5E_002934c0 + 8))
    ;
    local_378 = (*(code *)PTR__ZN3std2io5stdio6stdout17h077da66234850927E_002934d0)();
    uVar4 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E_002934d8)(&local_378);
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h65001697dc742481E
              (local_320,0x1000,uVar4);
    uVar4 = *(undefined8 *)PTR__ZN9uu_factor7options6NUMBER17hef2df56071e79773E_002934e0;
    uVar1 = *(undefined8 *)(PTR__ZN9uu_factor7options6NUMBER17hef2df56071e79773E_002934e0 + 8);
                    /* try { // try from 001a46a9 to 001a46de has its CatchHandler @ 001a4b1c */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17ha0ed1229838b49f0E
              (&local_2f8,&local_358,uVar4,uVar1);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h077ff7a07b830d8bE
              (local_3c0,uVar4,uVar1,&local_2f8);
    if ((code ***)local_3c0._0_8_ == (code ***)0x0) {
                    /* try { // try from 001a4763 to 001a477e has its CatchHandler @ 001a4b1c */
      local_370 = (*(code *)PTR__ZN3std2io5stdio5stdin17h7215cc131abb55d8E_002934e8)();
      local_408 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h161a36d857331d7fE_002934f0)
                            (&local_370);
      local_400 = CONCAT31(local_400._1_3_,extraout_DL) & 0xffffff01;
      local_380 = (code **)0x8000000000000001;
                    /* try { // try from 001a47c3 to 001a47c7 has its CatchHandler @ 001a4b17 */
      while (_ZN82__LT_std__io__Lines_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcbb0d6e1edcb0826E
                       (&local_3d8,&local_408), puVar2 = local_3c8, local_3d8 != local_380) {
        if (local_3d8 == (code **)0x8000000000000000) {
          local_3e0 = local_3d0;
                    /* try { // try from 001a49f9 to 001a4ae4 has its CatchHandler @ 001a4af7 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00293490)(1);
          local_3f8 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00293470)();
          local_368 = (undefined8 *)local_3f8;
          local_360 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h60e20a2526965720E;
          local_2f8 = (undefined ***)&DAT_0028af30;
          puStack_2f0 = (undefined *)0x2;
          local_2d8 = 0;
          local_2e8 = (code **)&local_368;
          uStack_2e0 = 1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00293478)(&local_2f8);
          local_3f8._0_8_ = &local_3e0;
          local_3f8._8_8_ =
               PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E_002934f8
          ;
          local_2f8 = (undefined ***)&DAT_0028afa8;
          puStack_2f0 = (undefined *)0x2;
          local_2d8 = 0;
          local_2e8 = (code **)local_3f8;
          uStack_2e0 = 1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00293478)(&local_2f8);
                    /* try { // try from 001a4aea to 001a4aee has its CatchHandler @ 001a4b06 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hfc16f546d6f9e628E(local_3e0);
          auVar7 = ZEXT816(0x8000000000000000) << 0x40;
LAB_001a488e:
                    /* try { // try from 001a4896 to 001a489a has its CatchHandler @ 001a4b1c */
          _ZN4core3ptr68drop_in_place_LT_std__io__Lines_LT_std__io__stdio__StdinLock_GT__GT_17h55ca6e1999776e14E
                    (local_408,local_400);
          goto LAB_001a489b;
        }
        local_3f8._0_8_ = local_3d8;
        local_3f8._8_8_ = local_3d0;
        local_3e8 = local_3c8;
        _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17hf2619fac8d2a8106E
                  (&local_2e8,local_3d0,local_3c8);
        local_2f8 = (code ***)0x0;
        puStack_2f0 = puVar2;
        uStack_2c0 = CONCAT62(uStack_2c0._2_6_,1);
        while( true ) {
                    /* try { // try from 001a4840 to 001a485f has its CatchHandler @ 001a4b28 */
          auVar7 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h40e02e54eaed34f1E
                             (&local_2f8,local_2b8);
          if (auVar7._0_8_ == 0) break;
          auVar7 = _ZN9uu_factor17print_factors_str17he132e712a0bda753E
                             (auVar7._0_8_,auVar7._8_8_,local_320,uVar3);
          if (auVar7._0_8_ != 0) {
                    /* try { // try from 001a4881 to 001a488d has its CatchHandler @ 001a4b06 */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0c60f8fdd24455a3E(local_3f8);
            goto LAB_001a488e;
          }
        }
                    /* try { // try from 001a486a to 001a4873 has its CatchHandler @ 001a4b17 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0c60f8fdd24455a3E(local_3f8);
      }
                    /* try { // try from 001a48c2 to 001a48d8 has its CatchHandler @ 001a4b1c */
      _ZN4core3ptr68drop_in_place_LT_std__io__Lines_LT_std__io__stdio__StdinLock_GT__GT_17h55ca6e1999776e14E
                (local_408,local_400);
LAB_001a48cc:
      ppcVar6 = (code **)_ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17hea36ead84b054e88E
                                   (local_320);
      if (ppcVar6 != (code **)0x0) {
        local_3d8 = ppcVar6;
                    /* try { // try from 001a48e7 to 001a49b4 has its CatchHandler @ 001a4b08 */
        local_3c0 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00293470)();
        local_3f8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h60e20a2526965720E;
        local_2f8 = (undefined ***)&DAT_0028af30;
        puStack_2f0 = (undefined *)0x2;
        local_2d8 = 0;
        local_2e8 = (code **)local_3f8;
        uStack_2e0 = 1;
        local_3f8._0_8_ = local_3c0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00293478)(&local_2f8);
        local_3c0._0_8_ = &local_3d8;
        local_3c0._8_8_ =
             PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E_002934f8
        ;
        local_2f8 = (undefined ***)&DAT_0028af50;
        puStack_2f0 = (undefined *)0x2;
        local_2d8 = 0;
        uStack_2e0 = 1;
        local_2e8 = (code **)local_3c0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00293478)(&local_2f8);
                    /* try { // try from 001a49ba to 001a49be has its CatchHandler @ 001a4b1c */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hfc16f546d6f9e628E(local_3d8);
      }
                    /* try { // try from 001a49bf to 001a49cb has its CatchHandler @ 001a4b1e */
      _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17h7af400aa75a34036E
                (local_320);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h6f0186b4e8ff4b47E
                (&local_358);
      auVar7 = ZEXT816(0x8000000000000000) << 0x40;
    }
    else {
      local_2e8 = (code **)CONCAT44(uStack_3ac,local_3b0);
      uStack_2e0 = CONCAT44(uStack_3a4,uStack_3a8);
      local_2d8 = CONCAT44(uStack_39c,local_3a0);
      local_2c8 = local_390;
      uStack_2c0 = uStack_388;
      local_2f8 = (undefined ***)local_3c0._0_8_;
      puStack_2f0 = (undefined *)local_3c0._8_8_;
      do {
                    /* try { // try from 001a4730 to 001a4752 has its CatchHandler @ 001a4b23 */
        lVar5 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9e00d23760fea2f1E
                          (&local_2f8);
        if (lVar5 == 0) goto LAB_001a48cc;
        auVar7 = _ZN9uu_factor17print_factors_str17he132e712a0bda753E
                           (*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10),local_320,uVar3
                           );
      } while (auVar7._0_8_ == 0);
LAB_001a489b:
                    /* try { // try from 001a489b to 001a48a7 has its CatchHandler @ 001a4b1e */
      _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17h7af400aa75a34036E
                (local_320);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h6f0186b4e8ff4b47E
                (&local_358);
    }
  }
  return auVar7;
}