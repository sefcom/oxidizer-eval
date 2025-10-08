undefined  [16] _ZN7uu_fold6uumain6uumain17h5496c35893a2376aE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined uVar3;
  undefined uVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined auVar9 [16];
  undefined local_3e8 [8];
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined local_3d0 [16];
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined *local_388;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  long local_338 [8];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined *local_2e8;
  long local_2e0;
  undefined **local_2d8;
  undefined *local_2d0;
  
  _ZN6uucore4Args13collect_lossy17h7598d3357d355182E(local_3e8,param_1,param_2);
                    /* try { // try from 0015628b to 00156298 has its CatchHandler @ 0015661a */
  (*(code *)PTR__ZN7uu_fold15handle_obsolete17hddaf49443b83bcdbE_001ed230)
            (&local_2f8,local_3e0,local_3d8);
  local_388 = local_2e8;
  local_398 = (undefined4)local_2f8;
  uStack_394 = local_2f8._4_4_;
  uStack_390 = (undefined4)uStack_2f0;
  uStack_38c = uStack_2f0._4_4_;
                    /* try { // try from 001562d3 to 00156321 has its CatchHandler @ 0015662f */
  (*(code *)PTR__ZN7uu_fold6uu_app17h371d51ec06c336aeE_001ed238)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h1b5d670a45ea75f5E
            (&local_378,&local_2f8,&local_398);
  local_3a0 = local_348;
  local_3b0 = local_358;
  uStack_3ac = uStack_354;
  uStack_3a8 = uStack_350;
  uStack_3a4 = uStack_34c;
  local_3c0 = (undefined4)local_368;
  uStack_3bc = local_368._4_4_;
  uStack_3b8 = uStack_360;
  uStack_3b4 = uStack_35c;
                    /* try { // try from 00156361 to 001563cb has its CatchHandler @ 00156637 */
  uVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ed248
          )(local_3d0,&DAT_001181e4,5);
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ed248
          )(local_3d0,&DAT_001181e9,6);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf4aa48645510e5a3E
            (&local_2f8,local_3d0);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h971e6acbc41fbb1fE(&local_2f8);
  if (lVar5 == 0) {
    ppuVar8 = (undefined **)&DAT_00000050;
    bVar2 = false;
    ppuVar7 = local_2d8;
    lVar5 = local_2e0;
    if (local_2e0 != -0x8000000000000000) goto LAB_00156411;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001ed0f0
    )(&local_2f8,lVar5);
    bVar2 = true;
    ppuVar7 = uStack_2f0;
    local_2d0 = local_2e8;
    lVar5 = local_2f8;
LAB_00156411:
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
              (&local_2f8,ppuVar7,local_2d0);
    ppuVar8 = uStack_2f0;
    if ((char)local_2f8 != '\0') {
                    /* try { // try from 00156436 to 00156440 has its CatchHandler @ 001565f5 */
      lVar6 = _ZN7uu_fold6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17hf2c0ba6e75d1f2c8E
                        (ppuVar7,local_2d0,local_2f8._1_1_);
      if (lVar6 != 0) {
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h372e82d18bc090f0E(lVar5,ppuVar7);
                    /* try { // try from 00156456 to 00156462 has its CatchHandler @ 0015662f */
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8c2663bbf235871eE
                  (local_3d0);
        auVar9._8_8_ = &
                       PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hbb9028378b0ba43dE_001e5f18
        ;
        auVar9._0_8_ = lVar6;
        goto LAB_0015659f;
      }
      ppuVar8 = &
                PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hbb9028378b0ba43dE_001e5f18
      ;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h372e82d18bc090f0E(lVar5,ppuVar7);
  }
                    /* try { // try from 0015648b to 001564d4 has its CatchHandler @ 00156637 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hf2f1c6d98face94aE
            (&local_2f8,local_3d0);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h27dba348ee30906bE(local_338,&local_2f8);
  if (local_338[0] == 0) {
    ppuVar7 = (undefined **)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
    if (ppuVar7 == (undefined **)0x0) {
                    /* try { // try from 001565d3 to 001565e2 has its CatchHandler @ 00156637 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001ed1c0)(8,0x18);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
                    /* try { // try from 00156502 to 0015651d has its CatchHandler @ 001565e5 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hdd3f2159a20b86daE
              (&local_2f8,&DAT_001181e3,1);
    local_368 = local_2e8;
    local_378 = (undefined4)local_2f8;
    uStack_374 = local_2f8._4_4_;
    uStack_370 = (undefined4)uStack_2f0;
    uStack_36c = uStack_2f0._4_4_;
    ppuVar7[2] = local_2e8;
    *(undefined4 *)ppuVar7 = (undefined4)local_2f8;
    *(undefined4 *)((long)ppuVar7 + 4) = local_2f8._4_4_;
    *(undefined4 *)(ppuVar7 + 1) = (undefined4)uStack_2f0;
    *(undefined4 *)((long)ppuVar7 + 0xc) = uStack_2f0._4_4_;
    local_2f8 = 1;
    local_2e8 = (undefined *)0x1;
    uStack_2f0 = ppuVar7;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h860c854e7760da52E(&local_2f8,local_338);
  }
                    /* try { // try from 0015656a to 0015657f has its CatchHandler @ 00156605 */
  auVar9 = (*(code *)PTR__ZN7uu_fold4fold17h8107b1fccb5c9bf8E_001ed250)
                     (uStack_2f0,local_2e8,uVar3,uVar4,ppuVar8);
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h57ac378a3c8b4349E
            (&local_2f8);
                    /* try { // try from 00156595 to 0015659e has its CatchHandler @ 0015662f */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8c2663bbf235871eE
            (local_3d0);
LAB_0015659f:
  if (bVar2) {
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h6132633c6a0c61e7E
              (local_2e0,local_2d8);
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h57ac378a3c8b4349E
            (local_3e8);
  return auVar9;
}