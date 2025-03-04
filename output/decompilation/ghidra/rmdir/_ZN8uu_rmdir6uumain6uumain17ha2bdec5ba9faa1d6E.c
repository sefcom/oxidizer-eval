undefined8 _ZN8uu_rmdir6uumain6uumain17ha2bdec5ba9faa1d6E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined auVar8 [16];
  long local_3e8;
  undefined8 local_3e0;
  undefined *local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined local_3a0 [16];
  long local_390;
  undefined local_388;
  undefined8 *local_380;
  code *local_378;
  undefined *local_370;
  code *local_368;
  undefined **local_360;
  undefined *local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  long local_328;
  undefined8 local_320;
  long local_318;
  undefined local_310 [24];
  undefined **local_2f8;
  undefined *local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined local_2b8 [648];
  
  (*(code *)PTR__ZN8uu_rmdir6uu_app17he176cc9e026e634bE_00211328)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17ha0ea2a3464d4e142E
            (&local_3e0,&local_2f8,param_1,param_2);
  if (local_3e0 == (undefined **)0x8000000000000000) {
    uVar6 = (*(code *)
              PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00211330
            )();
  }
  else {
    local_330 = local_3b0;
    local_340 = (undefined4)local_3c0;
    uStack_33c = local_3c0._4_4_;
    uStack_338 = uStack_3b8;
    uStack_334 = uStack_3b4;
    local_350 = (undefined4)local_3d0;
    uStack_34c = local_3d0._4_4_;
    uStack_348 = (undefined4)uStack_3c8;
    uStack_344 = uStack_3c8._4_4_;
    local_360 = local_3e0;
    local_358 = local_3d8;
                    /* try { // try from 00162254 to 001622e3 has its CatchHandler @ 001626c2 */
    bVar2 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00211340
            )(&local_360,
              *(undefined8 *)
               PTR__ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17ha93be87fa7180288E_00211338,
              *(undefined8 *)
               (PTR__ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17ha93be87fa7180288E_00211338 + 8));
    uVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00211340
            )(&local_360,*(undefined8 *)PTR__ZN8uu_rmdir11OPT_PARENTS17h0a6c604b2fb79096E_00211348,
              *(undefined8 *)(PTR__ZN8uu_rmdir11OPT_PARENTS17h0a6c604b2fb79096E_00211348 + 8));
    uVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00211340
            )(&local_360,*(undefined8 *)PTR__ZN8uu_rmdir11OPT_VERBOSE17hb864c3260c03eaf9E_00211350,
              *(undefined8 *)(PTR__ZN8uu_rmdir11OPT_VERBOSE17hb864c3260c03eaf9E_00211350 + 8));
    uVar6 = *(undefined8 *)PTR__ZN8uu_rmdir8ARG_DIRS17h8c2e0b34ba0be6acE_00211358;
    uVar1 = *(undefined8 *)(PTR__ZN8uu_rmdir8ARG_DIRS17h8c2e0b34ba0be6acE_00211358 + 8);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h8886196f9c0d552dE
              (&local_2f8,&local_360,uVar6,uVar1);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h5d9125c7e93c3c34E
              (&local_3e0,uVar6,uVar1,&local_2f8);
    if (local_3e0 == (undefined **)0x0) {
      local_2d8 = 0;
      uStack_2d4 = 0;
      uStack_3b8 = 0;
      uStack_3b4 = 0;
      local_2e8 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_00211360
                        ,0);
      uStack_2e4 = (undefined4)
                   ((ulong)
                    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_00211360
                   >> 0x20);
      uStack_2e0 = 0;
      uStack_2dc = 0;
      local_3a8 = 0;
      local_2f8 = (undefined **)_ZN4core3ops8function6FnOnce9call_once17he26979695a5c46c9E;
      local_2f0 = 
      PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_00211360
      ;
    }
    else {
      local_2f8 = local_3e0;
      local_2f0 = local_3d8;
      uVar6 = local_3b0;
      local_2d8 = (undefined4)local_3c0;
      uStack_2d4 = local_3c0._4_4_;
      local_2e8 = (undefined4)local_3d0;
      uStack_2e4 = local_3d0._4_4_;
      uStack_2e0 = (undefined4)uStack_3c8;
      uStack_2dc = uStack_3c8._4_4_;
    }
    uStack_2d0 = uStack_3b8;
    uStack_2cc = uStack_3b4;
    local_2c8 = uVar6;
    local_2c0 = local_3a8;
    while( true ) {
      lVar7 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h46b42a66a7d9e16aE
                        (&local_2f8);
      if (lVar7 == 0) break;
      auVar8 = _ZN4core3ops8function5impls80__LT_impl_u20_core__ops__function__FnOnce_LT_A_GT__u20_for_u20__RF_mut_u20_F_GT_9call_once17h2f2e24cb93c40cadE
                         (local_2b8,lVar7);
      if (auVar8._0_8_ == 0) break;
      (*(code *)PTR__ZN8uu_rmdir6remove17ha1b8dea54bda3da3E_00211368)
                (&local_328,auVar8._0_8_,auVar8._8_8_,
                 (uVar5 & 0xff) << 0x10 | (uVar4 & 0xff) << 8 | (uint)bVar2);
      lVar7 = local_318;
      uVar6 = local_320;
      if (local_328 != 0) {
        local_3e8 = local_328;
        if (bVar2 == 0) {
LAB_00162404:
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00211378)(1);
          _ZN3std2io5error14repr_bitpacked11decode_repr17h079a78aa2a8bc71eE(&local_3e0,local_3e8);
          if (((char)local_3e0 == '\0') && (local_3e0._4_4_ == 0x14)) {
            cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h347ad07198e1fdd3E
                              (uVar6,lVar7,
                               "//home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/iter/traits/exact_size.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rs"
                               ,1);
            if (cVar3 != '\0') {
              auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h606ca59f5f675cfbE
                                 (lVar7 + -1,uVar6,lVar7);
              cVar3 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h6ab8b58756c51c6bE_00211380)
                                (auVar8._0_8_,auVar8._8_8_);
              if (cVar3 != '\0') {
                (*(code *)
                  PTR__ZN8uu_rmdir6uumain6uumain19points_to_directory17hdf69fcbe1fa7b8d0E_00211388)
                          (&local_3e0,auVar8._0_8_,auVar8._8_8_);
                if ((char)local_3e0 == '\0') {
                  if (local_3e0._1_1_ == '\0') goto LAB_00162590;
                }
                else {
                  _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_bool_C_std__io__error__Error_GT__GT_17he0bd217ec8b946c5E
                            ((ulong)local_3e0 & 0xff,local_3d8);
                }
                local_3a0 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00211310)();
                local_380 = (undefined8 *)local_3a0;
                local_378 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcdfc5853f8105e65E;
                local_3e0 = (undefined **)&DAT_0020b238;
                local_3d8 = (undefined *)0x2;
                local_3c0 = 0;
                local_3d0 = &local_380;
                uStack_3c8 = 1;
                (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00211248)(&local_3e0);
                local_3a0._0_8_ = 1;
                local_3a0._8_8_ = uVar6;
                local_390 = lVar7;
                local_388 = 1;
                local_380 = (undefined8 *)local_3a0;
                local_378 = (code *)
                            PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_00211390
                ;
                local_3e0 = &PTR_s_failed_to_remove___Symbolic_link_0020b2b0;
                local_3d8 = (undefined *)0x2;
                local_3c0 = 0;
                local_3d0 = &local_380;
                uStack_3c8 = 1;
                (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00211248)(&local_3e0);
                goto LAB_00162375;
              }
            }
          }
LAB_00162590:
          local_3a0 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00211310)();
          local_380 = (undefined8 *)local_3a0;
          local_378 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcdfc5853f8105e65E;
          local_3e0 = (undefined **)&DAT_0020b238;
          local_3d8 = (undefined *)0x2;
          local_3c0 = 0;
          local_3d0 = &local_380;
          uStack_3c8 = 1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00211248)(&local_3e0);
          local_3a0._0_8_ = 1;
          local_3a0._8_8_ = uVar6;
          local_390 = lVar7;
          local_388 = 1;
          (*(code *)PTR__ZN6uucore4mods5error11strip_errno17h3c5e943d825faa4aE_00211398)
                    (local_310,&local_3e8);
          local_380 = (undefined8 *)local_3a0;
          local_378 = (code *)
                      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_00211390
          ;
          local_368 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
          local_3e0 = &PTR_s_failed_to_remove___Symbolic_link_0020b2d0;
          local_3d8 = (undefined *)0x3;
          local_3c0 = 0;
          local_3d0 = &local_380;
          uStack_3c8 = 2;
                    /* try { // try from 0016267f to 00162689 has its CatchHandler @ 001626c4 */
          local_370 = local_310;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00211248)(&local_3e0);
                    /* try { // try from 0016268a to 00162691 has its CatchHandler @ 001626d6 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha0b4df7a442885b4E(local_310);
                    /* try { // try from 00162697 to 0016269b has its CatchHandler @ 001626e5 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h17481d40c2bb7c6fE(local_3e8);
        }
        else {
                    /* try { // try from 001623eb to 0016261a has its CatchHandler @ 001626d6 */
          cVar3 = (*(code *)PTR__ZN8uu_rmdir13dir_not_empty17h420749e3ec649073E_00211370)
                            (&local_3e8,local_320,local_318);
          if (cVar3 == '\0') goto LAB_00162404;
LAB_00162375:
                    /* try { // try from 0016237a to 001623c1 has its CatchHandler @ 001626e5 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h17481d40c2bb7c6fE(local_3e8);
        }
      }
    }
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h7eed3728b2821cb4E
              (&local_360);
    uVar6 = 0;
  }
  return uVar6;
}