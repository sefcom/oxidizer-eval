undefined8 _ZN9uu_mkfifo6uumain6uumain17hcd654a3e885f58dbE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  long local_488;
  undefined **local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined *local_468;
  undefined local_460 [16];
  undefined *local_450;
  undefined *local_448;
  undefined8 *local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined *local_3f8;
  undefined8 local_3f0 [4];
  undefined8 *local_3d0;
  code *local_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 local_3a0;
  undefined local_398 [16];
  undefined *local_388;
  undefined local_380 [16];
  undefined8 local_370;
  undefined local_368 [16];
  undefined *local_358;
  undefined local_350 [24];
  undefined **local_338;
  undefined8 uStack_330;
  undefined8 **local_328;
  undefined8 local_320;
  undefined8 local_318;
  long local_70 [8];
  
  (*(code *)PTR__ZN9uu_mkfifo6uu_app17hfa7e86d425877003E_001e48a8)(&local_338);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hd67f5003b1befad6E
            (&local_440,&local_338,param_1,param_2);
  local_3a0 = local_410;
  local_3b0 = local_420;
  uStack_3ac = uStack_41c;
  uStack_3a8 = uStack_418;
  uStack_3a4 = uStack_414;
  local_3c0 = (undefined4)uStack_430;
  uStack_3bc = uStack_430._4_4_;
  uStack_3b8 = (undefined4)uStack_428;
  uStack_3b4 = uStack_428._4_4_;
  local_3d0 = local_440;
  local_3c8 = uStack_438;
  uVar6 = *(undefined8 *)PTR__ZN9uu_mkfifo7options4MODE17h5220e5aeeb4dad68E_001e48b8;
  uVar1 = *(undefined8 *)(PTR__ZN9uu_mkfifo7options4MODE17h5220e5aeeb4dad68E_001e48b8 + 8);
                    /* try { // try from 0015344d to 001535d5 has its CatchHandler @ 001539f7 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hc60474ede53bf308E
            (&local_338,&local_3d0,uVar6,uVar1);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hc09ea3c423f7eb26E
                    (uVar6,uVar1,&local_338);
  if (lVar5 == 0) {
    uVar2 = (*(code *)PTR__ZN6uucore8features4mode9get_umask17h22fe72fd4e3f2e99E_001e48c8)();
    uVar2 = ~uVar2 & 0x1b6;
  }
  else {
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
              (local_460,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    if (local_460[0] != '\0') {
      local_3f0[0]._0_1_ = local_460[1];
      local_440 = local_3f0;
      uStack_438 = (code *)
                   PTR__ZN70__LT_core__num__error__ParseIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h3e61086f3d7b9af4E_001e48c0
      ;
      local_338 = &PTR_s_invalid_mode__001dd9b0;
      uStack_330 = 1;
      local_318 = 0;
      local_328 = &local_440;
      local_320 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4f5725439c53c8c9E(local_398,&local_338);
      local_320 = CONCAT44(local_320._4_4_,1);
      local_328 = (undefined8 **)local_388;
      uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb985850797d25983E(&local_338);
      goto LAB_001538ab;
    }
    uVar2 = local_460._8_4_;
  }
  uVar6 = *(undefined8 *)PTR__ZN9uu_mkfifo7options4FIFO17hc33aa5a578626e41E_001e48d0;
  uVar1 = *(undefined8 *)(PTR__ZN9uu_mkfifo7options4FIFO17hc33aa5a578626e41E_001e48d0 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h4408a3996b597266E
            (&local_338,&local_3d0,uVar6,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h099c2c6036fe3e39E
            (local_70,uVar6,uVar1,&local_338);
  if (local_70[0] != 0) {
    _ZN4core4iter6traits8iterator8Iterator7collect17h944c96bc4b1444e0E(local_350,local_70);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h44e5cc6fc3ebc44fE
              (local_3f0,local_350);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6194289213b04d71E
              (&local_408,local_3f0);
    if (CONCAT44(uStack_404,local_408) != -0x8000000000000000) {
      do {
        local_468 = local_3f8;
        local_478 = local_408;
        uStack_474 = uStack_404;
        uStack_470 = uStack_400;
        uStack_46c = uStack_3fc;
                    /* try { // try from 0015364f to 0015373a has its CatchHandler @ 001539fc */
        (*(code *)
          PTR__ZN72__LT__RF_str_u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17h0590d0924c279fb9E_001e48d8
        )(&local_338,CONCAT44(uStack_3fc,uStack_400));
        auVar7 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha00486629438f698E(&local_338);
        iVar3 = (*(code *)PTR_mkfifo_001e48e0)(auVar7._0_8_,0x1b6);
        _ZN4core3ptr47drop_in_place_LT_alloc__ffi__c_str__CString_GT_17h760da8c5216c3abaE
                  (auVar7._0_8_,auVar7._8_8_);
        if (iVar3 == -1) {
          local_440 = (undefined8 *)0x0;
          uStack_438 = (code *)CONCAT44(uStack_46c,uStack_470);
          uStack_430 = (long *)local_468;
          uStack_428 = (code *)CONCAT71(uStack_428._1_7_,1);
          local_460._0_8_ = &local_440;
          local_460._8_8_ =
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e48e8
          ;
          local_338 = &PTR_s_cannot_create_fifo___File_exists_001dd9c0;
          uStack_330 = 2;
          local_318 = 0;
          local_328 = (undefined8 **)local_460;
          local_320 = 1;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h4f5725439c53c8c9E(local_380,&local_338);
          local_320 = CONCAT44(local_320._4_4_,1);
          local_328 = (undefined8 **)local_370;
          local_488 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb985850797d25983E(&local_338);
          local_480 = &
                      PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h83e1f2191dd32729E_001dda50
          ;
          uVar4 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                            (local_488);
                    /* try { // try from 00153753 to 001537dd has its CatchHandler @ 001539e4 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001e48f0)(uVar4);
          local_460 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4888)();
          local_440 = (undefined8 *)local_460;
          uStack_438 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hec44a5bec1f7ca2cE;
          uStack_428 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hd4c92501c5cc0b6eE
          ;
          local_338 = (undefined **)&DAT_001dd9e0;
          uStack_330 = 3;
          local_318 = 0;
          local_328 = &local_440;
          local_320 = 2;
          uStack_430 = &local_488;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4890)(&local_338);
                    /* try { // try from 001537e7 to 00153805 has its CatchHandler @ 001539fc */
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h91dc632a27c7bd12E
                    (local_488,local_480);
        }
        lVar5 = _ZN3std2fs15set_permissions17h22af05646ff22b25E(&local_478,uVar2);
        if (lVar5 != 0) {
          local_440 = (undefined8 *)0x0;
          uStack_438 = (code *)CONCAT44(uStack_46c,uStack_470);
          uStack_430 = (long *)local_468;
          uStack_428 = (code *)CONCAT71(uStack_428._1_7_,1);
          local_460._0_8_ = &local_440;
          local_460._8_8_ =
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e48e8
          ;
          local_448 = 
          PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001e48f8
          ;
          local_338 = &PTR_s_cannot_set_permissions_on_001dda10;
          uStack_330 = 2;
          local_318 = 0;
          local_328 = (undefined8 **)local_460;
          local_320 = 2;
                    /* try { // try from 0015395a to 001539a6 has its CatchHandler @ 001539d6 */
          local_488 = lVar5;
          local_450 = (undefined *)&local_488;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h4f5725439c53c8c9E(local_368,&local_338);
          local_320 = CONCAT44(local_320._4_4_,1);
          local_328 = (undefined8 **)local_358;
          uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb985850797d25983E(&local_338);
                    /* try { // try from 001539ae to 001539b2 has its CatchHandler @ 001539d4 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17head3503b2f14cc7eE(local_488);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3773246715216e37E
                    (CONCAT44(uStack_474,local_478),CONCAT44(uStack_46c,uStack_470));
                    /* try { // try from 001539c2 to 001539ce has its CatchHandler @ 001539f7 */
          _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h607780cb7135b8b2E
                    (local_3f0);
          goto LAB_001538ab;
        }
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h87ad4e3edb19e26aE
                  (0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3773246715216e37E
                  (CONCAT44(uStack_474,local_478),CONCAT44(uStack_46c,uStack_470));
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6194289213b04d71E
                  (&local_408,local_3f0);
      } while (CONCAT44(uStack_404,local_408) != -0x8000000000000000);
    }
                    /* try { // try from 00153842 to 0015384e has its CatchHandler @ 001539f7 */
    _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h607780cb7135b8b2E
              (local_3f0);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hdfef5a543da6423aE
              (&local_3d0);
    return 0;
  }
                    /* try { // try from 00153860 to 001538a7 has its CatchHandler @ 001539f7 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h33b801b8ce3fd3e2E
            (&local_440,"missing operand",0xf);
  local_328 = (undefined8 **)uStack_430;
  local_320 = CONCAT44(local_320._4_4_,1);
  uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb985850797d25983E(&local_338);
LAB_001538ab:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hdfef5a543da6423aE
            (&local_3d0);
  return uVar6;
}