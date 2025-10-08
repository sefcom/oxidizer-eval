undefined8 _ZN8uu_rmdir6uumain6uumain17hca85f7b438ec45e9E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
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
  undefined8 *local_370;
  code *local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined **local_348;
  undefined *local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  long local_310;
  undefined8 local_308;
  long local_300;
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
  
  (*(code *)PTR__ZN8uu_rmdir6uu_app17h41f54c0a55596ebeE_001e4ce8)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h5515b7eebfb7e895E
            (&local_3e0,&local_2f8,param_1,param_2);
  local_318 = local_3b0;
  local_328 = (undefined4)local_3c0;
  uStack_324 = local_3c0._4_4_;
  uStack_320 = uStack_3b8;
  uStack_31c = uStack_3b4;
  local_338 = (undefined4)local_3d0;
  uStack_334 = local_3d0._4_4_;
  uStack_330 = (undefined4)uStack_3c8;
  uStack_32c = uStack_3c8._4_4_;
  local_348 = local_3e0;
  local_340 = local_3d8;
                    /* try { // try from 0015273d to 001527cb has its CatchHandler @ 00152b95 */
  bVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e4d00
          )(&local_348,
            *(undefined8 *)PTR__ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17hf4e19f0806591dd6E_001e4cf8,
            *(undefined8 *)
             (PTR__ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17hf4e19f0806591dd6E_001e4cf8 + 8));
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e4d00
          )(&local_348,*(undefined8 *)PTR__ZN8uu_rmdir11OPT_PARENTS17h7b499da3e630b2c1E_001e4d08,
            *(undefined8 *)(PTR__ZN8uu_rmdir11OPT_PARENTS17h7b499da3e630b2c1E_001e4d08 + 8));
  uVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e4d00
          )(&local_348,*(undefined8 *)PTR__ZN8uu_rmdir11OPT_VERBOSE17h678d7fcdef697353E_001e4d10,
            *(undefined8 *)(PTR__ZN8uu_rmdir11OPT_VERBOSE17h678d7fcdef697353E_001e4d10 + 8));
  uVar7 = *(undefined8 *)PTR__ZN8uu_rmdir8ARG_DIRS17h6d9706b52a198fb1E_001e4d18;
  uVar1 = *(undefined8 *)(PTR__ZN8uu_rmdir8ARG_DIRS17h6d9706b52a198fb1E_001e4d18 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h324cf7d356ac5227E
            (&local_2f8,&local_348,uVar7,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hcee8fc91d516f620E
            (&local_3e0,uVar7,uVar1,&local_2f8);
  if (local_3e0 == (undefined **)0x0) {
    local_2d8 = 0;
    uStack_2d4 = 0;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    local_2e8 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001e4d20
                      ,0);
    uStack_2e4 = (undefined4)
                 ((ulong)
                  PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001e4d20
                 >> 0x20);
    uStack_2e0 = 0;
    uStack_2dc = 0;
    local_3a8 = 0;
    local_2f8 = (undefined **)_ZN4core3ops8function6FnOnce9call_once17hb2056f08bbcc1e74E;
    local_2f0 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001e4d20
    ;
  }
  else {
    local_2f8 = local_3e0;
    local_2f0 = local_3d8;
    uVar7 = local_3b0;
    local_2d8 = (undefined4)local_3c0;
    uStack_2d4 = local_3c0._4_4_;
    local_2e8 = (undefined4)local_3d0;
    uStack_2e4 = local_3d0._4_4_;
    uStack_2e0 = (undefined4)uStack_3c8;
    uStack_2dc = uStack_3c8._4_4_;
  }
  uStack_2d0 = uStack_3b8;
  uStack_2cc = uStack_3b4;
  local_2c8 = uVar7;
  local_2c0 = local_3a8;
  do {
    while( true ) {
      lVar6 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h588e08df2d05312aE
                        (&local_2f8);
      if (lVar6 == 0) {
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h564b4464c9f835e3E
                  (&local_348);
        return 0;
      }
      (*(code *)PTR__ZN8uu_rmdir6remove17h30d38ff9a4c5e87aE_001e4d28)
                (&local_310,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10),
                 (uVar5 & 0xff) << 0x10 | (uVar4 & 0xff) << 8 | (uint)bVar2);
      lVar6 = local_300;
      uVar7 = local_308;
      if (local_310 != 0) break;
                    /* try { // try from 00152860 to 00152894 has its CatchHandler @ 00152bc0 */
      _ZN4core3ptr75drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_rmdir__Error_GT__GT_17h688fabe9eba36869E
                (0);
    }
    local_3e8 = local_310;
                    /* try { // try from 001528be to 00152add has its CatchHandler @ 00152bb1 */
    if ((bVar2 == 0) ||
       (cVar3 = (*(code *)PTR__ZN8uu_rmdir13dir_not_empty17he2b023c55fd543e8E_001e4d30)
                          (&local_3e8,local_308,local_300), cVar3 == '\0')) {
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001e4d38)(1);
      _ZN3std2io5error14repr_bitpacked11decode_repr17h7600fc575e512ef9E(&local_3e0,local_3e8);
      if (((char)local_3e0 == '\0') &&
         ((local_3e0._4_4_ == 0x14 &&
          (cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h642f3f3a746ea568E
                             (uVar7,lVar6), cVar3 != '\0')))) {
        auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2f827d0587e08a73E
                           (lVar6 + -1,uVar7,lVar6);
        cVar3 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001e4d40)
                          (auVar8._0_8_,auVar8._8_8_);
        if (cVar3 != '\0') {
          (*(code *)PTR__ZN8uu_rmdir6uumain6uumain19points_to_directory17h618067cf6122ffc7E_001e4d48
          )(&local_3e0,auVar8._0_8_,auVar8._8_8_);
          if ((char)local_3e0 == '\0') {
            if (local_3e0._1_1_ == '\0') goto LAB_00152a50;
          }
          else {
            _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_bool_C_std__io__error__Error_GT__GT_17he9c0a545c6a7252dE
                      ((ulong)local_3e0 & 0xff,local_3d8);
          }
          local_3a0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4cc8)();
          local_380 = (undefined8 *)local_3a0;
          local_378 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc8f1c785ec917b8bE;
          local_3e0 = (undefined **)&DAT_001ddd80;
          local_3d8 = (undefined *)0x2;
          local_3c0 = 0;
          local_3d0 = &local_380;
          uStack_3c8 = 1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4cd0)(&local_3e0);
          local_3a0._0_8_ = 1;
          local_3a0._8_8_ = uVar7;
          local_390 = lVar6;
          local_388 = 1;
          local_380 = (undefined8 *)local_3a0;
          local_378 = (code *)
                      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e4d50
          ;
          local_3e0 = &PTR_s_failed_to_remove___Symbolic_link_001dddf8;
          local_3d8 = (undefined *)0x2;
          local_3c0 = 0;
          local_3d0 = &local_380;
          uStack_3c8 = 1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4cd0)(&local_3e0);
          goto LAB_00152b65;
        }
      }
LAB_00152a50:
      local_3a0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4cc8)();
      local_380 = (undefined8 *)local_3a0;
      local_378 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc8f1c785ec917b8bE;
      local_3e0 = (undefined **)&DAT_001ddd80;
      local_3d8 = (undefined *)0x2;
      local_3c0 = 0;
      local_3d0 = &local_380;
      uStack_3c8 = 1;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4cd0)(&local_3e0);
      local_3a0._0_8_ = 1;
      local_3a0._8_8_ = uVar7;
      local_390 = lVar6;
      local_388 = 1;
      (*(code *)PTR__ZN6uucore4mods5error11strip_errno17hd746c42590a9db7dE_001e4d58)
                (&local_360,&local_3e8);
      local_380 = (undefined8 *)local_3a0;
      local_378 = (code *)
                  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e4d50
      ;
      local_370 = &local_360;
      local_368 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_3e0 = &PTR_s_failed_to_remove___Symbolic_link_001dde18;
      local_3d8 = (undefined *)0x3;
      local_3c0 = 0;
      local_3d0 = &local_380;
      uStack_3c8 = 2;
                    /* try { // try from 00152b47 to 00152b4f has its CatchHandler @ 00152b97 */
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4cd0)(&local_3e0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hf46f9234ed73e85eE
                (local_360,local_358);
    }
LAB_00152b65:
                    /* try { // try from 00152b6a to 00152b6e has its CatchHandler @ 00152bc0 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hafa725c2412b36a2E(local_3e8);
  } while( true );
}