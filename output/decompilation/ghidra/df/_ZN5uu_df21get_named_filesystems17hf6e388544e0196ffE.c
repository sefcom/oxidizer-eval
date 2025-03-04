void _ZN5uu_df21get_named_filesystems17hf6e388544e0196ffE
               (undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined local_390 [16];
  undefined8 local_380;
  undefined **local_378;
  undefined local_370 [16];
  undefined8 *local_360;
  code *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined local_338 [8];
  undefined8 local_330;
  long local_328;
  undefined8 *local_320;
  long local_318;
  long local_310;
  undefined8 *local_308;
  code *pcStack_300;
  undefined8 *local_2f8;
  code *local_2f0;
  undefined8 local_2e8;
  undefined *local_258;
  undefined8 local_250;
  undefined8 **local_248;
  undefined local_240 [16];
  undefined8 local_230;
  undefined *local_228;
  undefined8 uStack_220;
  undefined8 **local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined local_138 [32];
  undefined local_118 [232];
  
  (*(code *)PTR__ZN6uucore8features5fsext12read_fs_list17h424e364609cbd5d3E_00245b38)(&local_228);
  if (local_228 == (undefined *)0x8000000000000000) {
    param_1[1] = uStack_220;
    param_1[2] = local_218;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_258 = local_228;
    local_250 = uStack_220;
    local_248 = local_218;
    (*(code *)PTR__ZN5uu_df17filter_mount_list17h552d57bf732d9983E_00245b40)
              (&local_308,&local_258,param_4);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hde82d0e33efa5e10E
              (local_138,&local_308);
    _ZN5alloc3vec16in_place_collect108__LT_impl_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__u20_for_u20_alloc__vec__Vec_LT_T_GT__GT_9from_iter17hfc330947ec3cd1ffE
              (local_338,local_138);
    local_350 = 0;
    uStack_348 = 8;
    local_340 = 0;
    if (local_328 == 0) {
                    /* try { // try from 00173661 to 001736a8 has its CatchHandler @ 001737ad */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h7a10e08ff6fcd418E
                (&local_308);
      local_218 = (undefined8 **)local_2f8;
      local_210 = CONCAT44(local_210._4_4_,1);
      local_390._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17h373238094c284474E(&local_228);
      local_390._8_8_ =
           &
           PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h1ae1cfaf92546e70E_0023ea20
      ;
      uVar1 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17h1158ea86a5f2627dE
                        (local_390._0_8_);
                    /* try { // try from 001736c2 to 0017375a has its CatchHandler @ 00173799 */
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00245b50)(uVar1);
      local_370 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00245b58)();
      local_308 = (undefined8 *)local_370;
      pcStack_300 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h06ebc9b14758de04E;
      local_2f8 = (undefined8 *)local_390;
      local_2f0 = 
      _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h05b4d573785fe419E
      ;
      local_228 = &DAT_0023e998;
      uStack_220 = 3;
      local_208 = 0;
      local_210 = 2;
      local_218 = &local_308;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00245b60)(&local_228);
                    /* try { // try from 00173765 to 00173769 has its CatchHandler @ 001737ad */
      _ZN4core3ptr118drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Sync_u2b_core__marker__Send_GT__GT_17hd39dd5b85cce0eefE
                (local_390._0_8_,local_390._8_8_);
      param_1[2] = local_340;
      *(undefined4 *)param_1 = (undefined4)local_350;
      *(undefined4 *)((long)param_1 + 4) = local_350._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_348;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_348._4_4_;
    }
    else {
      local_310 = param_2 + param_3 * 8;
      local_320 = param_1;
      local_318 = param_2;
      puVar2 = (undefined8 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he6b535fc67a2ed40E
                         (&local_318);
      if (puVar2 != (undefined8 *)0x0) {
        do {
          _ZN5uu_df10filesystem10Filesystem9from_path17h5b49a475fd8fdd25E
                    (&local_228,local_330,local_328,puVar2);
          if (local_228 == (undefined *)0x8000000000000000) {
            uVar3 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h241aa1449fb23990E
                              (*puVar2);
            _ZN3std2fs8metadata17h2a3b352190f658b7E(&local_308,uVar3);
            if (local_308 == (undefined8 *)0x2) {
              _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4224ce639deb08cE
                        (2,pcStack_300);
              local_370 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h241aa1449fb23990E
                                    (*puVar2);
              local_390._0_8_ = local_370;
              local_390._8_8_ =
                   PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E_00245b48
              ;
              local_308 = (undefined8 *)&DAT_0023e9c8;
              pcStack_300 = (code *)0x2;
              local_2e8 = 0;
              local_2f8 = (undefined8 *)local_390;
              local_2f0 = (code *)0x1;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17h4b6e538973bc8efdE
                        (local_240,&local_308);
              local_2f0 = (code *)CONCAT44(local_2f0._4_4_,1);
              local_2f8 = (undefined8 *)local_230;
              local_380 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h373238094c284474E(&local_308);
              local_378 = &
                          PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h1ae1cfaf92546e70E_0023ea20
              ;
              uVar1 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17h1158ea86a5f2627dE
                                (local_380);
                    /* try { // try from 001734ac to 00173538 has its CatchHandler @ 001737af */
              (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00245b50)
                        (uVar1);
              local_390 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00245b58)();
              local_370._0_8_ = local_390;
              local_370._8_8_ =
                   _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h06ebc9b14758de04E;
              local_360 = &local_380;
              local_358 = 
              _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h05b4d573785fe419E
              ;
              local_308 = (undefined8 *)&DAT_0023e998;
              pcStack_300 = (code *)0x3;
              local_2e8 = 0;
              local_2f8 = (undefined8 *)local_370;
              local_2f0 = (code *)0x2;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00245b60)(&local_308);
                    /* try { // try from 00173543 to 0017358b has its CatchHandler @ 001737d7 */
              _ZN4core3ptr118drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Sync_u2b_core__marker__Send_GT__GT_17hd39dd5b85cce0eefE
                        (local_380,local_378);
            }
            else {
              _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4224ce639deb08cE
                        (local_308,pcStack_300);
              _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h7a10e08ff6fcd418E
                        (local_370);
              local_2f8 = local_360;
              local_308 = (undefined8 *)local_370._0_8_;
              pcStack_300 = (code *)local_370._8_8_;
              local_2f0 = (code *)CONCAT44(local_2f0._4_4_,1);
              local_380 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h373238094c284474E(&local_308);
              local_378 = &
                          PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h1ae1cfaf92546e70E_0023ea20
              ;
              uVar1 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17h1158ea86a5f2627dE
                                (local_380);
                    /* try { // try from 001735a5 to 00173631 has its CatchHandler @ 001737c3 */
              (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00245b50)
                        (uVar1);
              auVar4 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00245b58)();
              local_370._0_8_ = local_390;
              local_370._8_8_ =
                   _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h06ebc9b14758de04E;
              local_360 = &local_380;
              local_358 = 
              _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h05b4d573785fe419E
              ;
              local_308 = (undefined8 *)&DAT_0023e998;
              pcStack_300 = (code *)0x3;
              local_2e8 = 0;
              local_2f8 = (undefined8 *)local_370;
              local_2f0 = (code *)0x2;
              local_390 = auVar4;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00245b60)(&local_308);
                    /* try { // try from 0017363c to 00173640 has its CatchHandler @ 001737d7 */
              _ZN4core3ptr118drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Sync_u2b_core__marker__Send_GT__GT_17hd39dd5b85cce0eefE
                        (local_380,local_378);
            }
          }
          else {
            (*(code *)PTR_memcpy_00245ae0)(local_118,&local_228,0xe8);
                    /* try { // try from 00173371 to 00173492 has its CatchHandler @ 001737d7 */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17ha04b626b2435bc8eE(&local_350,local_118);
          }
          puVar2 = (undefined8 *)
                   _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he6b535fc67a2ed40E
                             (&local_318);
        } while (puVar2 != (undefined8 *)0x0);
      }
      local_320[2] = local_340;
      *(undefined4 *)local_320 = (undefined4)local_350;
      *(undefined4 *)((long)local_320 + 4) = local_350._4_4_;
      *(undefined4 *)(local_320 + 1) = (undefined4)uStack_348;
      *(undefined4 *)((long)local_320 + 0xc) = uStack_348._4_4_;
    }
    _ZN4core3ptr78drop_in_place_LT_alloc__vec__Vec_LT_uucore__features__fsext__MountInfo_GT__GT_17he92feecb328c252cE
              (local_338);
  }
  return;
}