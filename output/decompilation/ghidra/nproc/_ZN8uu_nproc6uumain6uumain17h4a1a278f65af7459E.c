undefined8 _ZN8uu_nproc6uumain6uumain17h4a1a278f65af7459E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined local_3b9;
  undefined8 local_3b8;
  ulong local_3b0;
  undefined8 **local_3a8;
  undefined *local_3a0;
  undefined8 local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  ulong local_370;
  undefined8 ***local_368;
  undefined *local_360;
  undefined *local_358;
  undefined *local_350;
  undefined8 *local_348;
  ulong local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined local_310 [16];
  undefined8 ***local_300;
  undefined *local_2f8;
  undefined8 uStack_2f0;
  undefined8 ***local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined2 local_2b8;
  
  (*(code *)PTR__ZN8uu_nproc6uu_app17h998d5466ee0e9d18E_001e7498)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h921b74ea6c524359E
            (&local_3a8,&local_2f8,param_1,param_2);
  local_318 = local_378;
  local_328 = local_388;
  uStack_324 = uStack_384;
  uStack_320 = uStack_380;
  uStack_31c = uStack_37c;
  local_338 = (undefined4)local_398;
  uStack_334 = local_398._4_4_;
  uStack_330 = uStack_390;
  uStack_32c = uStack_38c;
  local_348 = local_3a8;
  local_340 = (ulong)local_3a0;
  uVar5 = *(undefined8 *)PTR__ZN8uu_nproc10OPT_IGNORE17hf0766fb2b3a81c60E_001e74a8;
  uVar1 = *(undefined8 *)(PTR__ZN8uu_nproc10OPT_IGNORE17hf0766fb2b3a81c60E_001e74a8 + 8);
                    /* try { // try from 00152f20 to 00153056 has its CatchHandler @ 001532ca */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h95ab5b0ca4aa2ec6E
            (&local_2f8,&local_348,uVar5,uVar1);
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h2a4d2283a7d2bd2dE
                    (uVar5,uVar1,&local_2f8);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 8);
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    uVar4 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h9b6c1414a16cc981E(uVar5,uVar1);
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(&local_3b8,uVar4);
    uVar7 = local_3b0;
    if ((char)local_3b8 != '\0') {
      local_3b9 = local_3b8._1_1_;
      local_3a8 = (undefined8 **)0x0;
      uStack_390 = CONCAT31(uStack_390._1_3_,1);
      local_360 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e74b0
      ;
      local_358 = &local_3b9;
      local_350 = 
      PTR__ZN70__LT_core__num__error__ParseIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h3e61086f3d7b9af4E_001e74b8
      ;
      local_2f8 = &DAT_001e05c0;
      uStack_2f0 = 2;
      local_2d8 = 0;
      local_2e8 = &local_368;
      local_2e0 = 2;
      local_3a0 = (undefined *)uVar5;
      local_398 = uVar1;
      local_368 = &local_3a8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h9eac71f25a1b1f9cE(local_310,&local_2f8);
      local_2e0 = CONCAT44(local_2e0._4_4_,1);
      local_2e8 = local_300;
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4c07f6ade996acd8E(&local_2f8);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hfa10aaf80f68f5e8E
                (&local_348);
      return uVar5;
    }
  }
                    /* try { // try from 0015307f to 0015314c has its CatchHandler @ 001532ca */
  _ZN3std3env3var17h97f3f43dada70122E(&local_2f8,"OMP_THREAD_LIMIT",0x10);
  if (((ulong)local_2f8 & 1) == 0) {
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
              (&local_3a8,local_2e8,local_2e0);
    uVar8 = 0xffffffffffffffff;
    if ((char)local_3a8 == '\0') {
      uVar8 = -(ulong)(local_3a0 == (undefined *)0x0) | (ulong)local_3a0;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5fada63a69b03a54E
              (uStack_2f0,local_2e8);
  }
  else {
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h8978e4c3daa9748bE
              (&local_2f8);
    uVar8 = 0xffffffffffffffff;
  }
  cVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e74c8
          )(&local_348,*(undefined8 *)PTR__ZN8uu_nproc7OPT_ALL17hde320e20e68328b9E_001e74c0,
            *(undefined8 *)(PTR__ZN8uu_nproc7OPT_ALL17hde320e20e68328b9E_001e74c0 + 8));
  if (cVar2 == '\0') {
    _ZN3std3env3var17h97f3f43dada70122E(&local_3a8,"OMP_NUM_THREADSError flushing stdout: ",0xf);
    if (local_3a8 == (undefined8 **)0x1) {
                    /* try { // try from 00153158 to 0015315d has its CatchHandler @ 001532a4 */
      puVar6 = (undefined8 *)
               (*(code *)PTR__ZN8uu_nproc21available_parallelism17h7e39191f6c9c795bE_001e74d8)();
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h8978e4c3daa9748bE
                (&local_3a8);
    }
    else {
      local_370 = (ulong)local_3a0;
      _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
                (&local_2e8,local_398,CONCAT44(uStack_38c,uStack_390));
      local_2f8 = (undefined *)0x0;
      local_2b8 = 0;
                    /* try { // try from 001531b5 to 001531f2 has its CatchHandler @ 001532a9 */
      lVar3 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hc3094b99fa4c8f31E(&local_2f8);
      if (lVar3 == 0) {
        puVar6 = (undefined8 *)
                 (*(code *)PTR__ZN8uu_nproc21available_parallelism17h7e39191f6c9c795bE_001e74d8)();
      }
      else {
        _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                  (&local_368,lVar3);
        puVar6 = (undefined8 *)local_360;
        if ((undefined8 *)local_360 == (undefined8 *)0x0 || (char)local_368 != '\0') {
          puVar6 = (undefined8 *)
                   (*(code *)PTR__ZN8uu_nproc21available_parallelism17h7e39191f6c9c795bE_001e74d8)()
          ;
        }
      }
      local_3b8 = puVar6;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5fada63a69b03a54E
                (local_370,local_398);
    }
  }
  else {
    puVar6 = (undefined8 *)(*(code *)PTR__ZN8uu_nproc12num_cpus_all17hd72076020a4f12e1E_001e74d0)();
  }
  uVar8 = _ZN4core3cmp3Ord3min17hd8378816db811468E(uVar8,puVar6);
  local_3b8 = (undefined8 *)0x1;
  if (uVar7 <= uVar8 && (undefined8 *)(uVar8 - uVar7) != (undefined8 *)0x0) {
    local_3b8 = (undefined8 *)(uVar8 - uVar7);
  }
  local_3a8 = (undefined8 **)&local_3b8;
  local_3a0 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001e74e0
  ;
  local_2f8 = &DAT_001e0568;
  uStack_2f0 = 2;
  local_2d8 = 0;
  local_2e0 = 1;
                    /* try { // try from 00153275 to 00153282 has its CatchHandler @ 001532ca */
  local_2e8 = &local_3a8;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e74e8)(&local_2f8);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hfa10aaf80f68f5e8E
            (&local_348);
  return 0;
}