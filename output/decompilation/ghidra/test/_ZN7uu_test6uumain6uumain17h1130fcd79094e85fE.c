undefined  [16] _ZN7uu_test6uumain6uumain17h1130fcd79094e85fE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined auVar13 [16];
  undefined8 local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined7 uStack_3c8;
  undefined uStack_3c1;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  uint uStack_3b8;
  undefined4 uStack_3b4;
  long local_3b0;
  undefined8 local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_388;
  undefined8 local_380;
  long local_378;
  undefined4 local_370;
  undefined4 uStack_36c;
  uint uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined local_358;
  undefined7 uStack_357;
  uint local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_2f8;
  uint uStack_2f0;
  undefined4 uStack_2ec;
  undefined local_2e8;
  undefined4 uStack_2e7;
  undefined4 uStack_2e3;
  undefined3 uStack_2df;
  undefined4 uStack_2dc;
  
  local_388 = param_1;
  local_380 = param_2;
  _ZN104__LT_core__iter__adapters__cloned__Cloned_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb56eb10b01392dc9E
            (&local_370,&local_388);
  uVar2 = CONCAT44(uStack_36c,local_370);
  uVar3 = CONCAT44(uStack_364,uStack_368);
  lVar9 = CONCAT44(uStack_35c,uStack_360);
                    /* try { // try from 0015321a to 00153239 has its CatchHandler @ 00153609 */
  auVar13 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e61a0)();
  uVar11 = auVar13._0_8_;
  _ZN4core4iter6traits8iterator8Iterator7collect17hfd648d74c24416deE(&local_3c0,local_388,local_380)
  ;
  local_2f8 = (ulong)local_2f8._4_4_ << 0x20;
  uVar8 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(&local_2f8);
                    /* try { // try from 00153252 to 001532ed has its CatchHandler @ 001535f8 */
  cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17ha65fb3c87ba1c23cE
                    (uVar11,auVar13._8_8_,uVar8);
  uVar6 = uStack_3b4;
  uVar5 = uStack_3b8;
  if (cVar7 == '\0') {
LAB_001533c5:
    local_2e8 = (undefined)local_3b0;
    uStack_2e7 = (undefined4)((ulong)local_3b0 >> 8);
    uStack_2e3._0_3_ = (undefined3)((ulong)local_3b0 >> 0x28);
    local_2f8 = CONCAT44(uStack_3bc,local_3c0);
    uStack_2f0 = uStack_3b8;
    uStack_2ec = uStack_3b4;
                    /* try { // try from 001533df to 001534f8 has its CatchHandler @ 00153607 */
    (*(code *)PTR__ZN7uu_test6parser5parse17h797e9c3d2d2b1396E_001e61c8)(&local_370,&local_2f8);
    if (CONCAT44(uStack_36c,local_370) == 7) {
      local_338 = uStack_368;
      uStack_334 = uStack_364;
      uStack_330 = uStack_360;
      uStack_32c = uStack_35c;
      _ZN7uu_test6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h785697f62eea0848E
                (&local_2f8,&local_338);
      uVar8 = CONCAT17(local_2e8,CONCAT43(uStack_2ec,uStack_2f0._1_3_));
      uStack_3d0 = uStack_2e7;
      uStack_3cc = uStack_2e3;
      local_3d8._0_4_ = (undefined4)CONCAT43(uStack_2ec,uStack_2f0._1_3_);
      local_3d8._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
      local_3a8 = CONCAT44(local_3d8._4_4_,(undefined4)local_3d8);
      uStack_3a0 = uStack_2e7;
      uStack_39c = uStack_2e3;
      local_3d8 = uVar8;
      if (local_2f8 == 7) {
        if ((uStack_2f0 & 1) == 0) {
          auVar13 = (*(code *)
                      PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_001e61d0
                    )(1);
        }
        else {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar11;
          auVar13 = auVar4 << 0x40;
        }
        goto LAB_001535b2;
      }
                    /* try { // try from 0015359b to 001535df has its CatchHandler @ 00153607 */
      uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h798b4c0ab9e6ff0aE(&local_2f8);
    }
    else {
      local_3d8 = CONCAT17((undefined)uStack_360,CONCAT43(uStack_364,uStack_368._1_3_));
      uStack_3d0 = (undefined4)CONCAT43(uStack_35c,uStack_360._1_3_);
      uStack_3cc._0_3_ = (undefined3)((uint)uStack_35c >> 8);
      uStack_3cc = CONCAT13(local_358,(undefined3)uStack_3cc);
      uStack_3a0 = uStack_3d0;
      uStack_39c = CONCAT13(local_358,(undefined3)uStack_3cc);
      uStack_2df = (undefined3)uStack_357;
      uStack_2dc = (undefined4)((uint7)uStack_357 >> 0x18);
      uStack_2ec = uStack_364;
      local_2e8 = (undefined)uStack_360;
      uStack_2e7 = uStack_3d0;
      uStack_2e3 = uStack_39c;
      uStack_2f0 = uStack_368;
      local_3a8 = local_3d8;
      uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h798b4c0ab9e6ff0aE(&local_2f8);
    }
    auVar13._8_8_ =
         &
         PTR__ZN4core3ptr47drop_in_place_LT_uu_test__error__ParseError_GT_17h4cc2703bf67eef6bE_001df700
    ;
    auVar13._0_8_ = uVar8;
  }
  else {
    uVar11 = 0x8000000000000000;
    uVar12 = uVar11;
    if (local_3b0 != 0) {
      if (local_3b0 == 1) {
        uVar8 = *(undefined8 *)(CONCAT44(uStack_3b4,uStack_3b8) + 8);
        uVar1 = *(undefined8 *)(CONCAT44(uStack_3b4,uStack_3b8) + 0x10);
        local_378 = lVar9;
        cVar7 = _ZN82__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17h8faf1e7c8b6674ffE
                          (uVar8,uVar1,"--help",6);
        if ((cVar7 != '\0') ||
           (cVar7 = _ZN82__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17h8faf1e7c8b6674ffE
                              (uVar8,uVar1,
                               "--version/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
                               ,9), cVar7 != '\0')) {
          (*(code *)PTR__ZN7uu_test6uu_app17hdf268f15ca51f7b3E_001e61c0)(&local_2f8);
          uStack_3c8 = (undefined7)local_378;
          uStack_3c1 = (undefined)((ulong)local_378 >> 0x38);
          _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h3430921a0960eea7E
                    (&local_338,&local_3c0);
          _ZN4core4iter6traits8iterator8Iterator5chain17he887cc830149c6f6E
                    (&local_370,&local_3d8,&local_338);
          _ZN12clap_builder7builder7command7Command16get_matches_from17h6ed546cd803a2e7dE
                    (&local_338,&local_2f8,&local_370);
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h83d3c5c3bb5cfafbE
                    (&local_338);
          return ZEXT816(0x8000000000000000) << 0x40;
        }
      }
      lVar10 = CONCAT44(uVar6,uVar5);
      local_3b0 = local_3b0 + -1;
      uVar12 = *(ulong *)(lVar10 + local_3b0 * 0x18);
      lVar9 = *(long *)(lVar10 + 8 + local_3b0 * 0x18);
      if ((lVar9 != 0 && uVar12 != 0x8000000000000000) &&
         (cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h264aa89bb7f54a18E
                            (lVar9,*(undefined8 *)(lVar10 + local_3b0 * 0x18 + 0x10),"]",1),
         cVar7 != '\0')) {
        _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17ha5b50a9372fc615eE
                  (uVar12,lVar9);
        goto LAB_001533c5;
      }
    }
                    /* try { // try from 00153506 to 00153550 has its CatchHandler @ 001535e8 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17had9e1c129a015e7bE
              (&local_370,"missing \']\'",0xb);
    local_2e8 = (undefined)uStack_360;
    uStack_2e7 = (undefined4)(CONCAT44(uStack_35c,uStack_360) >> 8);
    uStack_2f0 = uStack_368;
    uStack_2ec = uStack_364;
    uStack_2e3 = CONCAT13(2,(int3)((uint)uStack_35c >> 8));
    uStack_2df = 0;
    uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfd3520a0cacb99bbE(&local_2f8);
    _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17ha5b50a9372fc615eE
              (uVar12,lVar9);
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17he507668ecf5fa430E
              (&local_3c0);
    auVar13._8_8_ =
         &
         PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7d4a5690edf4446dE_001df788
    ;
    auVar13._0_8_ = uVar8;
  }
LAB_001535b2:
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17ha51acf210beffed0E(uVar2,uVar3);
  return auVar13;
}