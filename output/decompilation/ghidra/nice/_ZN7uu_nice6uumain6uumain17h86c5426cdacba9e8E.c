undefined  [16] _ZN7uu_nice6uumain6uumain17h86c5426cdacba9e8E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined auVar12 [16];
  int local_404;
  undefined local_400 [16];
  undefined local_3f0 [16];
  long local_3e0;
  undefined **local_3d8;
  code *pcStack_3d0;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 local_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined ***local_398;
  code *local_390;
  undefined *local_388;
  undefined **local_380;
  code *local_378;
  undefined4 local_370;
  undefined4 local_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined ***local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined ***local_320;
  undefined local_318 [32];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 ***local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  _ZN7uu_nice21standardize_nice_args17ha446c24066e6006dE(local_318,param_1,param_2);
                    /* try { // try from 00152742 to 0015274f has its CatchHandler @ 00152ef9 */
  (*(code *)PTR__ZN7uu_nice6uu_app17h9be1c328dcb05353E_001e1900)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h957c5b32311c2989E
            (&local_3d8,&local_2f8,local_318);
  local_35c = uStack_3b4;
  uStack_358 = uStack_3b0;
  uStack_354 = uStack_3ac;
  uStack_350 = uStack_3a8;
  local_34c = local_3a4;
  local_380 = local_3d8;
  local_378 = pcStack_3d0;
  local_370 = (undefined4)local_3c8;
                    /* try { // try from 001527d5 to 00152832 has its CatchHandler @ 00152f31 */
  (*(code *)
    PTR__ZN3nix5errno43__LT_impl_u20_nix__errno__consts__Errno_GT_5clear17h624c875a22ccd2d1E_001e1908
  )();
  iVar5 = (*(code *)PTR_getpriority_001e1910)(0,0);
  local_404 = iVar5;
  ppuVar7 = (undefined **)(*(code *)PTR___errno_location_001e1918)();
  uVar11 = (ulong)*(uint *)ppuVar7 << 0x20 | 2;
  _ZN3std2io5error14repr_bitpacked11decode_repr17h9f1fc6dea12f3e72E(&local_2f8,uVar11);
  if ((char)local_2f8 != '\0') {
                    /* try { // try from 00152e82 to 00152e8e has its CatchHandler @ 00152f36 */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001e1978)
              (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001daf40);
    goto LAB_00152ec0;
  }
  if (local_2f8._4_4_ == 0) {
                    /* try { // try from 00152917 to 00152bff has its CatchHandler @ 00152f31 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5c0b8fe645a553e5E(uVar11);
    uVar8 = *(undefined8 *)PTR__ZN7uu_nice7options10ADJUSTMENT17h1e587a7ee185f87dE_001e1928;
    uVar1 = *(undefined8 *)(PTR__ZN7uu_nice7options10ADJUSTMENT17h1e587a7ee185f87dE_001e1928 + 8);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h1fe75eb626fa2790E
              (&local_2f8,&local_380,uVar8,uVar1);
    puVar9 = (undefined *)
             _ZN12clap_builder6parser5error12MatchesError6unwrap17haddbc4ced1b44624E
                       (uVar8,uVar1,&local_2f8);
    if (puVar9 == (undefined *)0x0) {
      cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001e1938
              )(&local_380,
                *(undefined8 *)PTR__ZN7uu_nice7options7COMMAND17h4229ca6852529be8E_001e1930,
                *(undefined8 *)(PTR__ZN7uu_nice7options7COMMAND17h4229ca6852529be8E_001e1930 + 8));
      iVar6 = 10;
      if (cVar4 != '\0') {
LAB_00152b52:
        local_404 = iVar5 + iVar6;
        iVar5 = (*(code *)PTR_setpriority_001e1950)(0,0,local_404);
        if (iVar5 == -1) {
          local_398 = (undefined ***)
                      PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001e1968;
                    /* try { // try from 00152da9 to 00152dae has its CatchHandler @ 00152f31 */
          local_3f0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e18e0)();
          local_400._0_8_ = (ulong)*(uint *)ppuVar7 << 0x20 | 2;
          local_3d8 = (undefined **)local_3f0;
          pcStack_3d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h43d45138044c2afeE;
          local_3c8 = (undefined ***)local_400;
          uStack_3c0 = SUB84(PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001e1920
                             ,0);
          uStack_3bc = (undefined4)
                       ((ulong)
                        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001e1920
                       >> 0x20);
          local_2f8 = (undefined **)&DAT_001daf00;
          uStack_2f0 = (code *)0x2;
          local_2d8 = 0;
          uStack_2e0 = 2;
                    /* try { // try from 00152e2f to 00152e4e has its CatchHandler @ 00152ec2 */
          local_2e8 = (undefined8 ***)&local_3d8;
          lVar10 = (*(code *)
                     PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_001e1970
                   )(&local_398,&local_2f8);
          if (lVar10 != 0) {
            _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h74030e7c43287adcE
                      (lVar10);
                    /* try { // try from 00152e54 to 00152e63 has its CatchHandler @ 00152f31 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5c0b8fe645a553e5E
                      (local_400._0_8_);
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001e1960)(0x7d);
            goto LAB_00152e64;
          }
                    /* try { // try from 00152e6c to 00152e72 has its CatchHandler @ 00152ec2 */
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h74030e7c43287adcE
                    (0);
                    /* try { // try from 00152e78 to 00152e7c has its CatchHandler @ 00152f31 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5c0b8fe645a553e5E
                    (local_400._0_8_);
        }
        uVar8 = *(undefined8 *)PTR__ZN7uu_nice7options7COMMAND17h4229ca6852529be8E_001e1930;
        uVar1 = *(undefined8 *)(PTR__ZN7uu_nice7options7COMMAND17h4229ca6852529be8E_001e1930 + 8);
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hf7158cb6cc1c6b5dE
                  (&local_2f8,&local_380,uVar8,uVar1);
        _ZN12clap_builder6parser5error12MatchesError6unwrap17h3283cf699de599eeE
                  (&local_3d8,uVar8,uVar1,&local_2f8);
        if (local_3d8 == (undefined **)0x0) {
                    /* try { // try from 00152e91 to 00152e9d has its CatchHandler @ 00152f31 */
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001e1978)
                    (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001dafe0);
LAB_00152ec0:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        local_2c8 = uStack_3a8;
        uStack_2c4 = local_3a4;
        uStack_2c0 = uStack_3a0;
        uStack_2bc = uStack_39c;
        local_2d8 = CONCAT44(uStack_3b4,uStack_3b8);
        uStack_2d0 = uStack_3b0;
        uStack_2cc = uStack_3ac;
        local_2e8 = (undefined8 ***)local_3c8;
        uStack_2e0 = CONCAT44(uStack_3bc,uStack_3c0);
        local_2f8 = local_3d8;
        uStack_2f0 = pcStack_3d0;
        _ZN4core4iter6traits8iterator8Iterator7collect17hca13c6b89a368b3cE(local_3f0,&local_2f8);
                    /* try { // try from 00152c11 to 00152c1a has its CatchHandler @ 00152ee0 */
        _ZN4core4iter6traits8iterator8Iterator7collect17hac1c030636c1b29aE
                  (&local_3d8,local_3f0._8_8_,local_3e0 * 0x10 + local_3f0._8_8_);
                    /* try { // try from 00152c1b to 00152cb2 has its CatchHandler @ 00152ef4 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8c30812ad29a1869E(&local_3d8);
        if (local_3c8 == (undefined ***)0x0) {
                    /* try { // try from 00152eaf to 00152ebf has its CatchHandler @ 00152ef4 */
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001e1720)
                    (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001db010);
          goto LAB_00152ec0;
        }
        (*(code *)PTR_execvp_001e1958)(*(undefined8 *)pcStack_3d0);
        local_400 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e18e0)();
        local_390 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h43d45138044c2afeE;
        local_2f8 = (undefined **)&DAT_001dae58;
        uStack_2f0 = (code *)0x2;
        local_2d8 = 0;
        uStack_2e0 = 1;
        local_398 = (undefined ***)local_400;
        local_2e8 = &local_398;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e18e8)(&local_2f8);
        local_398 = (undefined ***)((ulong)*(uint *)ppuVar7 << 0x20 | 2);
        local_400._8_8_ =
             PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001e1920
        ;
        local_2f8 = &PTR_s_execvp__BlackRedGreenYellowMagen_001daf20;
        uStack_2f0 = (code *)0x2;
        local_2d8 = 0;
        uStack_2e0 = 1;
                    /* try { // try from 00152d0e to 00152d1b has its CatchHandler @ 00152ed1 */
        local_400._0_8_ = &local_398;
        local_2e8 = (undefined8 ***)local_400;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e18e8)(&local_2f8);
                    /* try { // try from 00152d21 to 00152d6f has its CatchHandler @ 00152ef4 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5c0b8fe645a553e5E(local_398);
        uVar11 = (ulong)*(uint *)ppuVar7 << 0x20 | 2;
        _ZN3std2io5error14repr_bitpacked11decode_repr17h9f1fc6dea12f3e72E(&local_2f8,uVar11);
        if ((char)local_2f8 != '\0') {
                    /* try { // try from 00152ea0 to 00152eac has its CatchHandler @ 00152f0b */
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001e1978)
                    (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001db028);
          goto LAB_00152ec0;
        }
        uVar3 = local_2f8._4_4_;
        ppuVar7 = (undefined **)(ulong)local_2f8._4_4_;
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5c0b8fe645a553e5E(uVar11);
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001e1960)
                  (uVar3 == 2 | 0x7e);
        _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h3f99d563eaf87d88E
                  (local_3d8,pcStack_3d0);
        _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_alloc__ffi__c_str__CString_GT__GT_17h75819d6d89b7c13fE
                  (local_3f0);
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h479001d9968fc37fE
                  (&local_380);
        uVar8 = 0;
        goto LAB_00152904;
      }
      local_3d8 = (undefined **)&local_404;
      pcStack_3d0 = (code *)
                    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_001e17d0
      ;
      local_2f8 = (undefined **)&DAT_001dae78;
      uStack_2f0 = (code *)0x2;
      local_2d8 = 0;
      uStack_2e0 = 1;
      local_2e8 = (undefined8 ***)&local_3d8;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e1948)(&local_2f8);
LAB_00152e64:
      uVar8 = 0;
    }
    else {
      local_388 = puVar9;
      cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001e1938
              )(&local_380,
                *(undefined8 *)PTR__ZN7uu_nice7options7COMMAND17h4229ca6852529be8E_001e1930,
                *(undefined8 *)(PTR__ZN7uu_nice7options7COMMAND17h4229ca6852529be8E_001e1930 + 8));
      if (cVar4 != '\0') {
        uVar11 = _ZN4core3num21__LT_impl_u20_i32_GT_16from_ascii_radix17h8c416a74051ba1e6E
                           (*(undefined8 *)(puVar9 + 8),*(undefined8 *)(puVar9 + 0x10));
        if ((uVar11 & 1) == 0) {
          iVar6 = (int)(uVar11 >> 0x20);
          goto LAB_00152b52;
        }
        local_3f0[0] = (char)(uVar11 >> 8);
        local_3d8 = &local_388;
        pcStack_3d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb7ecbd9d79ddfc84E;
        local_3c8 = (undefined ***)local_3f0;
        uStack_3c0 = SUB84(PTR__ZN70__LT_core__num__error__ParseIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h3e61086f3d7b9af4E_001e1940
                           ,0);
        uStack_3bc = (undefined4)
                     ((ulong)
                      PTR__ZN70__LT_core__num__error__ParseIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h3e61086f3d7b9af4E_001e1940
                     >> 0x20);
        local_2f8 = &PTR_s____is_not_a_valid_number____warn_001daee0;
        uStack_2f0 = (code *)0x2;
        local_2d8 = 0;
        uStack_2e0 = 2;
        local_2e8 = (undefined8 ***)&local_3d8;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h187a8924d1beca49E(&local_330,&local_2f8);
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x7d);
        local_2f8 = (undefined **)CONCAT44(uStack_32c,local_330);
        uStack_2f0 = (code *)CONCAT44(uStack_324,uStack_328);
        local_2e8 = (undefined8 ***)local_320;
        uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h10d0a70c4624870fE(&local_2f8);
        goto LAB_001528ea;
      }
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h2a17592469341a2bE
                (&local_3d8,"A command must be given with an adjustment.",0x2b);
      local_2e8 = (undefined8 ***)CONCAT44(local_3c8._4_4_,(undefined4)local_3c8);
      local_2f8 = local_3d8;
      uStack_2f0 = pcStack_3d0;
      uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x7d);
      uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h10d0a70c4624870fE(&local_2f8);
      ppuVar7 = &
                PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h87e2ee7ef03bd553E_001daf78
      ;
    }
  }
  else {
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5c0b8fe645a553e5E(uVar11);
    local_3f0._0_8_ = (ulong)*(uint *)ppuVar7 << 0x20 | 2;
    local_3d8 = (undefined **)local_3f0;
    pcStack_3d0 = (code *)
                  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001e1920
    ;
    local_2f8 = &PTR_s_getpriority__001daed0;
    uStack_2f0 = (code *)0x1;
    local_2d8 = 0;
    uStack_2e0 = 1;
                    /* try { // try from 00152893 to 001528a7 has its CatchHandler @ 00152ee5 */
    local_2e8 = (undefined8 ***)&local_3d8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h187a8924d1beca49E(&local_348,&local_2f8);
                    /* try { // try from 001528ad to 001528e9 has its CatchHandler @ 00152f31 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5c0b8fe645a553e5E(local_3f0._0_8_);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x7d);
    local_2f8 = (undefined **)CONCAT44(uStack_344,local_348);
    uStack_2f0 = (code *)CONCAT44(uStack_33c,uStack_340);
    local_2e8 = (undefined8 ***)local_338;
    uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h10d0a70c4624870fE(&local_2f8);
LAB_001528ea:
    ppuVar7 = &
              PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h87e2ee7ef03bd553E_001db060
    ;
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h479001d9968fc37fE
            (&local_380);
LAB_00152904:
  auVar12._8_8_ = ppuVar7;
  auVar12._0_8_ = uVar8;
  return auVar12;
}