undefined  [16] _ZN5uu_nl6uumain6uumain17h18a3405423ca2de4E(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined auVar3 [16];
  char cVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong unaff_R12;
  undefined auVar8 [16];
  undefined local_468 [16];
  undefined **local_458;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 *local_400;
  code *local_3f8;
  long local_3f0;
  undefined *local_3e8;
  code *local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined local_398 [8];
  undefined8 local_390;
  long local_388;
  code *local_380;
  code *local_378;
  undefined *local_370;
  ulong local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined local_2f8 [96];
  ulong local_298;
  
  (*(code *)PTR__ZN5uu_nl6uu_app17h62e86bf6f8f43d48E_004175e8)(local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h033a09a389891337E
            (&local_448,local_2f8,param_1,param_2);
  if (local_448 == (undefined **)0x8000000000000000) {
    auVar8 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_004175f0
             )();
  }
  else {
    local_340 = local_418;
    local_350 = (undefined4)local_428;
    uStack_34c = local_428._4_4_;
    uStack_348 = uStack_420;
    uStack_344 = uStack_41c;
    local_360 = (undefined4)local_438;
    uStack_35c = local_438._4_4_;
    uStack_358 = (undefined4)uStack_430;
    uStack_354 = uStack_430._4_4_;
    local_370 = (undefined *)local_448;
    local_368 = uStack_440;
                    /* try { // try from 0025a30c to 0025a319 has its CatchHandler @ 0025a86b */
    (*(code *)
      PTR__ZN58__LT_uu_nl__Settings_u20_as_u20_core__default__Default_GT_7default17h47e143bb2e6f00beE_004175f8
    )(local_2f8);
                    /* try { // try from 0025a31a to 0025a337 has its CatchHandler @ 0025a870 */
    (*(code *)PTR__ZN5uu_nl6helper13parse_options17h06a5fa1f1b26e68cE_00417600)
              (local_398,local_2f8,&local_370);
    if (local_388 == 0) {
                    /* try { // try from 0025a441 to 0025a4d9 has its CatchHandler @ 0025a875 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hd841e96b2ed2d7b8E
                (&local_448,&local_370,"fileEDOMmode",4);
      _ZN12clap_builder6parser5error12MatchesError6unwrap17h2c4cd7150173c076E
                (&local_3d8,"fileEDOMmode",4,&local_448);
      if (local_3d8 == (undefined *)0x0) {
        puVar6 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(0x18);
        if (puVar6 == (undefined4 *)0x0) {
          (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E_00417590)(8,0x18);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
                    /* try { // try from 0025a4ef to 0025a507 has its CatchHandler @ 0025a81c */
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hccf532128df738d2E
                  (&local_448,&DAT_00164fe8,1);
        local_458 = (undefined **)local_438;
        local_468._0_8_ = local_448;
        local_468._8_8_ = uStack_440;
        *(undefined8 ***)(puVar6 + 4) = local_438;
        *puVar6 = (undefined4)local_448;
        puVar6[1] = local_448._4_4_;
        puVar6[2] = (undefined4)uStack_440;
        puVar6[3] = uStack_440._4_4_;
                    /* try { // try from 0025a523 to 0025a534 has its CatchHandler @ 0025a875 */
        _ZN5alloc5slice4hack8into_vec17h6086311a78a256e6E(&local_400,puVar6,1);
      }
      else {
        local_308 = local_3a8;
        uStack_304 = uStack_3a4;
        uStack_300 = uStack_3a0;
        uStack_2fc = uStack_39c;
        local_318 = local_3b8;
        uStack_314 = uStack_3b4;
        uStack_310 = uStack_3b0;
        uStack_30c = uStack_3ac;
        local_328 = (undefined4)local_3c8;
        uStack_324 = local_3c8._4_4_;
        uStack_320 = uStack_3c0;
        uStack_31c = uStack_3bc;
        local_338 = (undefined4)local_3d8;
        uStack_334 = local_3d8._4_4_;
        uStack_330 = (undefined4)uStack_3d0;
        uStack_32c = uStack_3d0._4_4_;
        _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17he4cba287fed817eeE
                  (&local_400,&local_338);
      }
      local_3d8 = (undefined *)0x1;
      uStack_3d0 = local_298;
      local_3c8 = (undefined **)0x0;
      local_378 = local_3f8 + local_3f0 * 0x18;
      local_380 = local_3f8;
      lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h86a1599bc622aaf5E
                        (&local_380);
      if (lVar7 != 0) {
        do {
          puVar1 = *(undefined **)(lVar7 + 8);
          unaff_R12 = *(ulong *)(lVar7 + 0x10);
                    /* try { // try from 0025a5cc to 0025a5f8 has its CatchHandler @ 0025a87a */
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfc8f8342c6b12a3eE
                            (puVar1,unaff_R12,&DAT_00164fe8,1);
          if (cVar4 == '\0') {
                    /* try { // try from 0025a630 to 0025a759 has its CatchHandler @ 0025a87a */
            cVar4 = (*(code *)PTR__ZN3std4path4Path6is_dir17h9ac0db933706da51E_00417610)
                              (puVar1,unaff_R12);
            if (cVar4 == '\0') {
              _ZN3std2fs4File4open17hf1f071da76d1106bE(&local_448,puVar1,unaff_R12);
              _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h6473cf8ad0bdd484E
                        (local_468,&local_448,lVar7);
              auVar8._8_8_ = local_468._8_8_;
              auVar8._0_8_ = local_468._0_8_;
              if ((undefined *)local_468._0_8_ == (undefined *)0x0) {
                _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hc950eb83a0d53243E
                          (&local_448,0x2000,local_468._8_8_ & 0xffffffff);
                    /* try { // try from 0025a75a to 0025a771 has its CatchHandler @ 0025a848 */
                auVar8 = _ZN5uu_nl2nl17hef3517d7e99c9fcfE(&local_448,&local_3d8,local_2f8);
                if (auVar8._0_8_ == 0) {
                  _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h260c121303b9dae7E
                            (&local_448);
                  goto LAB_0025a5b0;
                }
                _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h260c121303b9dae7E
                          (&local_448);
              }
LAB_0025a7fb:
                    /* try { // try from 0025a7fb to 0025a819 has its CatchHandler @ 0025a875 */
              _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h74fac2caa12dacfcE
                        (&local_400);
              goto LAB_0025a415;
            }
            local_468 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_004175c8)();
            local_3e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he930d6131e526b78E;
            local_448 = (undefined **)&DAT_003d6d98;
            uStack_440 = 2;
            local_428 = 0;
            local_438 = (undefined8 **)&local_3e8;
            uStack_430 = 1;
            local_3e8 = local_468;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_004175d0)(&local_448);
            local_3e0 = (code *)
                        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E_00417618
            ;
            local_448 = (undefined **)&DAT_003d6e20;
            uStack_440 = 2;
            local_428 = 0;
            local_438 = (undefined8 **)&local_3e8;
            uStack_430 = 1;
            local_468._0_8_ = puVar1;
            local_468._8_8_ = unaff_R12;
            local_3e8 = local_468;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_004175d0)(&local_448);
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00417620)(1);
          }
          else {
            uVar5 = (*(code *)PTR__ZN3std2io5stdio5stdin17h7215cc131abb55d8E_00417608)();
            _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hd28ab478f7e713dfE
                      (&local_448,0x2000,uVar5);
                    /* try { // try from 0025a5f9 to 0025a610 has its CatchHandler @ 0025a857 */
            auVar8 = _ZN5uu_nl2nl17h577667c2138e41aeE(&local_448,&local_3d8,local_2f8);
            if (auVar8._0_8_ != 0) {
              _ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17h5f137f6a111fb9c8E
                        (local_448,uStack_440);
              goto LAB_0025a7fb;
            }
            _ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17h5f137f6a111fb9c8E
                      (local_448,uStack_440);
          }
LAB_0025a5b0:
          lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h86a1599bc622aaf5E
                            (&local_380);
        } while (lVar7 != 0);
      }
                    /* try { // try from 0025a787 to 0025a790 has its CatchHandler @ 0025a875 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h74fac2caa12dacfcE
                (&local_400);
                    /* try { // try from 0025a791 to 0025a79d has its CatchHandler @ 0025a870 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h74fac2caa12dacfcE
                (local_398);
                    /* try { // try from 0025a79e to 0025a7aa has its CatchHandler @ 0025a86b */
      _ZN4core3ptr36drop_in_place_LT_uu_nl__Settings_GT_17h5000854313336602E(local_2f8);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h00ca7bfe9d9c54d0E
                (&local_370);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = unaff_R12;
      auVar8 = auVar3 << 0x40;
    }
    else {
                    /* try { // try from 0025a351 to 0025a367 has its CatchHandler @ 0025a875 */
      _ZN5alloc3str17join_generic_copy17heb883ebb97bebee6E(&local_448,local_390,local_388,"\n",1);
      local_3c8 = (undefined **)local_438;
      local_3d8 = (undefined *)local_448;
      uStack_3d0 = uStack_440;
      local_400 = &local_3d8;
      local_3f8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_448 = &PTR_DAT_003d6e10;
      uStack_440 = 1;
      local_428 = 0;
      local_438 = &local_400;
      uStack_430 = 1;
                    /* try { // try from 0025a3cc to 0025a3d8 has its CatchHandler @ 0025a836 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h2afcfe8c4e1744edE(local_468,&local_448);
                    /* try { // try from 0025a3d9 to 0025a3e5 has its CatchHandler @ 0025a829 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h70d12d72ce7260f9E(&local_3d8);
      local_438 = (undefined8 **)local_458;
      local_448 = (undefined **)local_468._0_8_;
      uStack_440 = local_468._8_8_;
      uStack_430 = CONCAT44(uStack_430._4_4_,1);
                    /* try { // try from 0025a401 to 0025a40a has its CatchHandler @ 0025a875 */
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h02c3afd2888e012aE(&local_448);
      auVar8._8_8_ = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17he7ccd1696bdcdfc1E_003d6d28
      ;
      auVar8._0_8_ = uVar5;
LAB_0025a415:
                    /* try { // try from 0025a415 to 0025a421 has its CatchHandler @ 0025a870 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h74fac2caa12dacfcE
                (local_398);
                    /* try { // try from 0025a422 to 0025a42e has its CatchHandler @ 0025a86b */
      _ZN4core3ptr36drop_in_place_LT_uu_nl__Settings_GT_17h5000854313336602E(local_2f8);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h00ca7bfe9d9c54d0E
                (&local_370);
    }
  }
  return auVar8;
}