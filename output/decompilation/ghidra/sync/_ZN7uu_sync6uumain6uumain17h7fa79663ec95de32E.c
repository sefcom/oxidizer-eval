long _ZN7uu_sync6uumain6uumain17h7fa79663ec95de32E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  long local_3b8;
  undefined local_3b0 [16];
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  long local_338 [8];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  
  (*(code *)PTR__ZN7uu_sync6uu_app17h8e872b0e08daa914E_001e4b48)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h251ae02ec3da6c81E
            (&local_378,&local_2f8,param_1,param_2);
  local_380 = local_348;
  local_390 = local_358;
  uStack_38c = uStack_354;
  uStack_388 = uStack_350;
  uStack_384 = uStack_34c;
  local_3a0 = local_368;
  uStack_39c = uStack_364;
  uStack_398 = uStack_360;
  uStack_394 = uStack_35c;
  uVar1 = *(undefined8 *)PTR__ZN7uu_sync9ARG_FILES17h8f9deb3d73e42b94E_001e4b58;
  uVar2 = *(undefined8 *)(PTR__ZN7uu_sync9ARG_FILES17h8f9deb3d73e42b94E_001e4b58 + 8);
                    /* try { // try from 001532d1 to 00153323 has its CatchHandler @ 00153558 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hb67b6cf2c7fbf41aE
            (&local_2f8,local_3b0,uVar1,uVar2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h843f1030ce831d97E
            (local_338,uVar1,uVar2,&local_2f8);
  if (local_338[0] == 0) {
LAB_00153348:
    local_3c8 = 0;
    uStack_3c0 = 8;
    local_3b8 = 0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h7a15e1ae6061b921E(&local_2f8,local_338);
    local_3c8 = CONCAT44(uStack_2f4,local_2f8);
    local_378 = uStack_2f0;
    uStack_374 = uStack_2ec;
    uStack_370 = (undefined4)uStack_2e8;
    uStack_36c = uStack_2e8._4_4_;
    if (local_3c8 == -0x8000000000000000) goto LAB_00153348;
    uStack_3c0 = CONCAT44(uStack_2ec,uStack_2f0);
    local_3b8 = uStack_2e8;
  }
                    /* try { // try from 00153380 to 001533e0 has its CatchHandler @ 00153556 */
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e4b68
          )(local_3b0,*(undefined8 *)PTR__ZN7uu_sync7options4DATA17hd37ca9d5acec4f06E_001e4b60,
            *(undefined8 *)(PTR__ZN7uu_sync7options4DATA17hd37ca9d5acec4f06E_001e4b60 + 8));
  lVar5 = uStack_3c0;
  if (cVar4 == '\0') {
    if (local_3b8 != 0) goto LAB_001533f2;
LAB_00153471:
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e4b68
            )(local_3b0,
              *(undefined8 *)PTR__ZN7uu_sync7options11FILE_SYSTEM17h935b9c99356008ffE_001e4b78,
              *(undefined8 *)(PTR__ZN7uu_sync7options11FILE_SYSTEM17h935b9c99356008ffE_001e4b78 + 8)
             );
    if (cVar4 == '\0') {
                    /* try { // try from 001534c5 to 001534cf has its CatchHandler @ 00153556 */
      cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e4b68
              )(local_3b0,*(undefined8 *)PTR__ZN7uu_sync7options4DATA17hd37ca9d5acec4f06E_001e4b60,
                *(undefined8 *)(PTR__ZN7uu_sync7options4DATA17hd37ca9d5acec4f06E_001e4b60 + 8));
      if (cVar4 != '\0') {
        uStack_2e8 = local_3b8;
        local_2f8 = (undefined4)local_3c8;
        uStack_2f4 = local_3c8._4_4_;
        uStack_2f0 = (undefined4)uStack_3c0;
        uStack_2ec = uStack_3c0._4_4_;
                    /* try { // try from 001534ed to 001534fa has its CatchHandler @ 00153554 */
        lVar5 = (*(code *)PTR__ZN7uu_sync9fdatasync17h72f48ba09f09a6f8E_001e4b88)(&local_2f8);
        goto LAB_001534fb;
      }
                    /* try { // try from 00153528 to 0015352d has its CatchHandler @ 00153556 */
      lVar5 = (*(code *)PTR__ZN7uu_sync4sync17hb09a7d5857265317E_001e4b90)();
      if (lVar5 != 0) goto LAB_00153464;
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h9e5e4718d202ca4fE
                (&local_3c8);
    }
    else {
      uStack_2e8 = local_3b8;
      local_2f8 = (undefined4)local_3c8;
      uStack_2f4 = local_3c8._4_4_;
      uStack_2f0 = (undefined4)uStack_3c0;
      uStack_2ec = uStack_3c0._4_4_;
                    /* try { // try from 001534a7 to 001534b4 has its CatchHandler @ 00153554 */
      lVar5 = (*(code *)PTR__ZN7uu_sync6syncfs17h401104721fb5e39dE_001e4b80)(&local_2f8);
LAB_001534fb:
      if (lVar5 != 0) goto LAB_00153506;
    }
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hdfbe31c1791c8454E
              (local_3b0);
    lVar5 = 0;
  }
  else {
    if (local_3b8 != 0) {
LAB_001533f2:
      lVar3 = local_3b8 * 0x18;
      lVar6 = 0;
      do {
        uVar1 = *(undefined8 *)(lVar5 + 8 + lVar6);
        uVar2 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
                    /* try { // try from 00153423 to 00153444 has its CatchHandler @ 0015355d */
        auVar7 = _ZN3nix5fcntl4open17ha3ad4e2975573044E(uVar1,uVar2);
        if (((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) &&
           ((auVar7._8_4_ != 0xd ||
            (cVar4 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001e4b70)
                               (uVar1,uVar2), cVar4 != '\0')))) {
                    /* try { // try from 00153453 to 00153489 has its CatchHandler @ 00153556 */
          lVar5 = _ZN173__LT_nix__errno__consts__Errno_u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17heda37f322cb0a030E
                            (auVar7._8_8_ & 0xffffffff,*(undefined8 *)(lVar5 + 8 + lVar6),
                             *(undefined8 *)(lVar5 + 0x10 + lVar6));
          goto LAB_00153464;
        }
        lVar6 = lVar6 + 0x18;
      } while (lVar3 != lVar6);
      goto LAB_00153471;
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h486c3353d48c6860E
              (&local_378,
               "--data needs at least one argumenterror opening /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
               ,0x22);
    uStack_2e8 = CONCAT44(uStack_364,local_368);
    local_2f8 = local_378;
    uStack_2f4 = uStack_374;
    uStack_2f0 = uStack_370;
    uStack_2ec = uStack_36c;
    local_2e0 = 1;
    lVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0eac2a8c0ab415c7E(&local_2f8);
LAB_00153464:
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h9e5e4718d202ca4fE
              (&local_3c8);
LAB_00153506:
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hdfbe31c1791c8454E
              (local_3b0);
  }
  return lVar5;
}