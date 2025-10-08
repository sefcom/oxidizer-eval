undefined8 _ZN5uu_df6uumain6uumain17h219d096a97f03177E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *local_470;
  undefined8 *local_468;
  undefined8 *local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 **local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 *local_428;
  undefined8 *local_420;
  undefined8 *local_418;
  undefined8 *local_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 *local_3b0 [2];
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long local_328 [8];
  undefined8 *local_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  
  (*(code *)PTR__ZN5uu_df6uu_app17h7dd88faa65059b5cE_00209f00)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hdff312c40bc5334bE
            (&local_408,&local_2e8,param_1,param_2);
  local_380 = local_3d8;
  local_390 = uStack_3e8;
  uStack_38c = uStack_3e4;
  uStack_388 = (undefined4)uStack_3e0;
  uStack_384 = uStack_3e0._4_4_;
  local_3a0 = uStack_3f8;
  uStack_39c = uStack_3f4;
  uStack_398 = uStack_3f0;
  uStack_394 = uStack_3ec;
  local_3b0[0] = local_408;
                    /* try { // try from 00160c53 to 00160cc0 has its CatchHandler @ 0016100b */
  (*(code *)PTR__ZN5uu_df7Options4from17h8b6ce45144534520E_00209f10)(&local_2e8,local_3b0);
  local_458 = puStack_2e0;
  plVar2 = local_458;
  uStack_450 = puStack_2d8;
  plVar3 = uStack_450;
  local_448 = (undefined8 **)CONCAT44(uStack_2cc,local_2d0);
  uStack_440 = uStack_2c8;
  uVar4 = uStack_440;
  local_458._0_4_ = SUB84(puStack_2e0,0);
  local_458._4_4_ = (undefined4)((ulong)puStack_2e0 >> 0x20);
  uStack_450._0_4_ = SUB84(puStack_2d8,0);
  uStack_450._4_4_ = (undefined4)((ulong)puStack_2d8 >> 0x20);
  uStack_440._0_4_ = (undefined4)uStack_2c8;
  uStack_440._4_4_ = (undefined4)((ulong)uStack_2c8 >> 0x20);
  local_458 = plVar2;
  uStack_450 = plVar3;
  uStack_440 = uVar4;
  if (local_2e8 == (long *)0x8000000000000000) {
    local_348 = (undefined4)local_458;
    uStack_344 = local_458._4_4_;
    uStack_340 = (undefined4)uStack_450;
    uStack_33c = uStack_450._4_4_;
    local_338 = local_2d0;
    uStack_334 = uStack_2cc;
    uStack_330 = (undefined4)uStack_440;
    uStack_32c = uStack_440._4_4_;
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4aae9c6e7d3a8f03E(&local_348);
  }
  else {
    local_3c0 = local_2a0;
    uStack_3bc = uStack_29c;
    uStack_3b8 = uStack_298;
    uStack_3b4 = uStack_294;
    local_3d0 = local_2b0;
    uStack_3c8 = uStack_2a8;
    uStack_3e0 = local_2c0;
    local_3d8 = uStack_2b8;
    local_348 = (undefined4)local_458;
    uStack_344 = local_458._4_4_;
    uStack_340 = (undefined4)uStack_450;
    uStack_33c = uStack_450._4_4_;
    local_338 = local_2d0;
    uStack_334 = uStack_2cc;
    uStack_330 = (undefined4)uStack_440;
    uStack_32c = uStack_440._4_4_;
    local_400 = (undefined4)local_458;
    uStack_3fc = local_458._4_4_;
    uStack_3f8 = (undefined4)uStack_450;
    uStack_3f4 = uStack_450._4_4_;
    uStack_3f0 = local_2d0;
    uStack_3ec = uStack_2cc;
    uStack_3e8 = (undefined4)uStack_440;
    uStack_3e4 = uStack_440._4_4_;
    local_408 = local_2e8;
    uVar4 = *(undefined8 *)PTR__ZN5uu_df9OPT_PATHS17hc6f4fee98f1fa4a8E_00209f18;
    uVar1 = *(undefined8 *)(PTR__ZN5uu_df9OPT_PATHS17hc6f4fee98f1fa4a8E_00209f18 + 8);
                    /* try { // try from 00160d3a to 00160d8c has its CatchHandler @ 00161010 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h1be3b76b5e4259b7E
              (&local_2e8,local_3b0,uVar4,uVar1);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h9666b4fb430f9123E
              (local_328,uVar4,uVar1,&local_2e8);
    if (local_328[0] == 0) {
                    /* try { // try from 00160dd6 to 00160eba has its CatchHandler @ 00161010 */
      (*(code *)PTR__ZN5uu_df19get_all_filesystems17ha7950162b929c2f8E_00209f20)
                (&local_378,&local_408);
      if (local_378 == (long *)0x8000000000000000) {
        uVar4 = _ZN5uu_df6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h4bee578f8c35ee3dE();
      }
      else {
        local_470 = local_378;
        local_468 = local_370;
        local_460 = local_368;
        if (local_368 != (long *)0x0) {
          local_418 = local_368;
          local_428 = local_378;
          local_420 = local_370;
          goto LAB_00160ea0;
        }
                    /* try { // try from 00160f7e to 00160fc5 has its CatchHandler @ 00160fd8 */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h5e212f3fc67d7e91E
                  (&local_458,"no file systems processed: No such file or directory: \n",0x19);
        puStack_2d8 = local_448;
        local_2e8 = local_458;
        puStack_2e0 = uStack_450;
        local_2d0 = 1;
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9b3314f0e2696c29E(&local_2e8);
        _ZN4core3ptr73drop_in_place_LT_alloc__vec__Vec_LT_uu_df__filesystem__Filesystem_GT__GT_17h60c6be51676db6a7E
                  (&local_470);
      }
    }
    else {
      _ZN4core4iter6traits8iterator8Iterator7collect17h29c077bce706520cE(&local_458,local_328);
      plVar2 = uStack_450;
                    /* try { // try from 00160d97 to 00160dcd has its CatchHandler @ 00160ff9 */
      _ZN5uu_df21get_named_filesystems17h04ac4719102a6bd6E
                (&local_360,uStack_450,local_448,&local_408);
      if (local_360 == (long *)0x8000000000000000) {
        uVar4 = _ZN5uu_df6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h4bee578f8c35ee3dE();
      }
      else {
        local_2e8 = local_360;
        puStack_2e0 = local_358;
        puStack_2d8 = local_350;
        if (local_350 != (long *)0x0) {
          local_418 = local_350;
          local_428 = local_360;
          local_420 = local_358;
          _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17he20e0cbd0c056ce4E
                    (local_458,plVar2);
LAB_00160ea0:
          (*(code *)PTR__ZN5uu_df5table5Table3new17h1ab1638dbdc475f0E_00209f28)
                    (&local_2e8,&local_408,&local_428);
          local_468 = (undefined8 *)
                      PTR__ZN58__LT_uu_df__table__Table_u20_as_u20_core__fmt__Display_GT_3fmt17h34165fdb5bafaf68E_00209f30
          ;
          local_458 = (long *)&DAT_00202118;
          uStack_450 = (long *)0x2;
          local_438 = 0;
          local_448 = &local_470;
          uStack_440 = 1;
                    /* try { // try from 00160efd to 00160f07 has its CatchHandler @ 00160fe7 */
          local_470 = (long *)&local_2e8;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209f38)(&local_458);
          _ZN4core3ptr40drop_in_place_LT_uu_df__table__Table_GT_17h3f6dd34f640bd290E(&local_2e8);
          _ZN4core3ptr35drop_in_place_LT_uu_df__Options_GT_17h907ddf1f87b71eb9E(&local_408);
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h1612bae07920f9e3E
                    (local_3b0);
          return 0;
        }
        _ZN4core3ptr73drop_in_place_LT_alloc__vec__Vec_LT_uu_df__filesystem__Filesystem_GT__GT_17h60c6be51676db6a7E
                  (&local_2e8);
        uVar4 = 0;
      }
      _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17he20e0cbd0c056ce4E
                (local_458,plVar2);
    }
    _ZN4core3ptr35drop_in_place_LT_uu_df__Options_GT_17h907ddf1f87b71eb9E(&local_408);
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h1612bae07920f9e3E
            (local_3b0);
  return uVar4;
}