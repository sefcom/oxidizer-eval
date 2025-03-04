undefined  [16]
_ZN8uu_touch6uumain6uumain17h705f09c8dae5a0adE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined uVar4;
  undefined uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined auVar10 [16];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined **local_428;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  long local_3d0 [2];
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined **local_388;
  undefined local_380 [8];
  undefined8 local_378;
  undefined8 local_370;
  long local_368;
  undefined8 uStack_360;
  undefined **local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  long local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined **local_2e8;
  long local_2e0;
  undefined8 uStack_2d8;
  undefined **local_2d0;
  undefined local_2c8;
  undefined local_2c7;
  undefined local_2c6;
  undefined local_2c5;
  
  (*(code *)PTR__ZN8uu_touch6uu_app17h6cafa39b57a66b7bE_00450b28)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h839733911ffe4e3dE
            (&local_418,&local_2f8,param_1,param_2);
  if (local_418 == -0x8000000000000000) {
    auVar10 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00450b30
              )();
    return auVar10;
  }
  local_3b0 = uStack_3f8;
  uStack_3ac = uStack_3f4;
  uStack_3a8 = (undefined4)uStack_3f0;
  uStack_3a4 = uStack_3f0._4_4_;
  local_3c0 = (undefined4)uStack_408;
  uStack_3bc = uStack_408._4_4_;
  uStack_3b8 = uStack_400;
  uStack_3b4 = uStack_3fc;
  local_3d0[0] = local_418;
  uVar8 = *(undefined8 *)PTR__ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE_00450b38;
  uVar1 = *(undefined8 *)(PTR__ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE_00450b38 + 8);
                    /* try { // try from 00273b51 to 00273bdf has its CatchHandler @ 00273f85 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h219e52a321966872E
            (&local_2f8,local_3d0,uVar8,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h253c999d17ec96d2E
            (&local_418,uVar8,uVar1,&local_2f8);
  if (local_418 == 0) {
                    /* try { // try from 00273d1d to 00273d21 has its CatchHandler @ 00273f85 */
    uVar8 = _ZN8uu_touch6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h649caa4cf9839cd8E();
    ppuVar9 = &
              PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h6636723d34c45d3fE_0040e0e8
    ;
    goto LAB_00273ee6;
  }
  local_300 = local_3e0;
  local_310 = (undefined4)uStack_3f0;
  uStack_30c = uStack_3f0._4_4_;
  uStack_308 = local_3e8;
  uStack_304 = uStack_3e4;
  local_320 = uStack_400;
  uStack_31c = uStack_3fc;
  uStack_318 = uStack_3f8;
  uStack_314 = uStack_3f4;
  local_338 = local_418;
  local_330 = uStack_410;
  uStack_32c = uStack_40c;
  uStack_328 = (undefined4)uStack_408;
  uStack_324 = uStack_408._4_4_;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17he495c32affd9a0b5E
            (local_380,&local_338);
                    /* try { // try from 00273bee to 00273c8e has its CatchHandler @ 00273f8a */
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00450b48
          )(local_3d0,*(undefined8 *)PTR__ZN8uu_touch7options8NO_DEREF17h87e2d6a561434778E_00450b40,
            *(undefined8 *)(PTR__ZN8uu_touch7options8NO_DEREF17h87e2d6a561434778E_00450b40 + 8));
  uVar8 = *(undefined8 *)PTR__ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE_00450b50;
  uVar1 = *(undefined8 *)
           (PTR__ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE_00450b50 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17haaca2baeff626b88E
            (&local_2f8,local_3d0,uVar8,uVar1);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17ha8b85f67119db88bE
                    (uVar8,uVar1,&local_2f8);
  uVar8 = *(undefined8 *)PTR__ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E_00450b58;
  uVar1 = *(undefined8 *)
           (PTR__ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E_00450b58 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h153b4a940d494604E
            (&local_2f8,local_3d0,uVar8,uVar1);
  lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17ha8b85f67119db88bE
                    (uVar8,uVar1,&local_2f8);
  if (lVar6 == 0) {
    if (lVar7 == 0) {
      local_438 = -0x7fffffffffffffff;
      goto LAB_00273ca8;
    }
                    /* try { // try from 00273d42 to 00273d4f has its CatchHandler @ 00273f8a */
    (*(code *)PTR__ZN8uu_touch15parse_timestamp17h96cd6cd8bd424ce5E_00450b78)
              (&local_2f8,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
    if (CONCAT44(uStack_2f4,local_2f8) == 0) {
      uStack_430 = CONCAT44(uStack_2ec,uStack_2f0);
      local_428 = (undefined **)CONCAT44(local_428._4_4_,local_2e8._0_4_);
      local_438 = -0x8000000000000000;
      goto LAB_00273ca8;
    }
    uVar8 = CONCAT44(uStack_2ec,uStack_2f0);
    ppuVar9 = local_2e8;
  }
  else {
    (*(code *)PTR__ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E_00450b60)
              (&local_2f8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    local_428 = local_2e8;
    local_438 = CONCAT44(uStack_2f4,local_2f8);
    uStack_430 = CONCAT44(uStack_2ec,uStack_2f0);
LAB_00273ca8:
    uVar2 = *(ulong *)PTR__ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E_00450b68;
    uVar8 = *(undefined8 *)(PTR__ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E_00450b68 + 8);
                    /* try { // try from 00273cb6 to 00273cfa has its CatchHandler @ 00273f78 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h153b4a940d494604E
              (&local_2f8,local_3d0,uVar2,uVar8);
    lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17ha8b85f67119db88bE
                      (uVar2,uVar8,&local_2f8);
    if (lVar6 == 0) {
      local_398 = 0x8000000000000000;
    }
    else {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE_00450b70
      )(&local_2f8,lVar6);
      local_388 = local_2e8;
      local_398 = CONCAT44(uStack_2f4,local_2f8);
      uStack_390 = uStack_2f0;
      uStack_38c = uStack_2ec;
    }
                    /* try { // try from 00273d8a to 00273d94 has its CatchHandler @ 00273f54 */
    uVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00450b48
            )(local_3d0,
              *(undefined8 *)PTR__ZN8uu_touch7options9NO_CREATE17hab80ce86436bd515E_00450b80,
              *(undefined8 *)(PTR__ZN8uu_touch7options9NO_CREATE17hab80ce86436bd515E_00450b80 + 8));
    local_358 = local_428;
    local_368 = local_438;
    uStack_360 = uStack_430;
    uStack_408 = local_388;
    local_418._0_4_ = (undefined4)local_398;
    local_418._4_4_ = local_398._4_4_;
    uStack_410 = uStack_390;
    uStack_40c = uStack_38c;
                    /* try { // try from 00273dca to 00273dd4 has its CatchHandler @ 00273f38 */
    local_2c5 = (*(code *)
                  PTR__ZN8uu_touch28determine_atime_mtime_change17hda9df64dc3778c17E_00450b88)
                          (local_3d0);
    local_2e0 = local_368;
    uStack_2d8 = uStack_360;
    local_2d0 = local_358;
    local_2f8 = (undefined4)local_418;
    uStack_2f4 = local_418._4_4_;
    uStack_2f0 = uStack_410;
    uStack_2ec = uStack_40c;
    local_2e8 = uStack_408;
    local_2c6 = 0;
                    /* try { // try from 00273e3d to 00273e52 has its CatchHandler @ 00273f66 */
    local_2c8 = uVar5;
    local_2c7 = uVar4;
    (*(code *)PTR__ZN8uu_touch5touch17h8e2a06923358d7c5E_00450b90)
              (&local_368,local_378,local_370,&local_2f8);
    if (local_368 == -0x7ffffffffffffffc) {
                    /* try { // try from 00273e64 to 00273e70 has its CatchHandler @ 00273f36 */
      _ZN4core3ptr38drop_in_place_LT_uu_touch__Options_GT_17hb83ab5f2538670c9E(&local_2f8);
                    /* try { // try from 00273e71 to 00273e7d has its CatchHandler @ 00273f85 */
      _ZN4core3ptr63drop_in_place_LT_alloc__vec__Vec_LT_uu_touch__InputFile_GT__GT_17hca9fb99717cd0aa2E
                (local_380);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h082071c536512932E
                (local_3d0);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar2;
      return auVar10 << 0x40;
    }
    uStack_3f0 = local_340;
    uStack_400 = local_350;
    uStack_3fc = uStack_34c;
    uStack_3f8 = uStack_348;
    uStack_3f4 = uStack_344;
    uStack_410 = (undefined4)uStack_360;
    uStack_40c = uStack_360._4_4_;
    uStack_408 = local_358;
    local_418 = local_368;
                    /* try { // try from 00273eb8 to 00273ec1 has its CatchHandler @ 00273f66 */
    uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5aa8999775824872E(&local_418);
                    /* try { // try from 00273ec2 to 00273ed1 has its CatchHandler @ 00273f36 */
    _ZN4core3ptr38drop_in_place_LT_uu_touch__Options_GT_17hb83ab5f2538670c9E(&local_2f8);
    ppuVar9 = &
              PTR__ZN4core3ptr48drop_in_place_LT_uu_touch__error__TouchError_GT_17h012286908c1ad9e8E_0040e020
    ;
  }
                    /* try { // try from 00273ed9 to 00273ee5 has its CatchHandler @ 00273f85 */
  _ZN4core3ptr63drop_in_place_LT_alloc__vec__Vec_LT_uu_touch__InputFile_GT__GT_17hca9fb99717cd0aa2E
            (local_380);
LAB_00273ee6:
  auVar3._8_8_ = ppuVar9;
  auVar3._0_8_ = uVar8;
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h082071c536512932E
            (local_3d0);
  return auVar3;
}