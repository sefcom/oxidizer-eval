ulong _ZN8uu_touch6uumain6uumain17h00b61d7fc07eeb76E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  char cVar8;
  undefined uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined auVar17 [16];
  long local_458;
  ulong local_450;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  long local_428;
  undefined8 local_418;
  undefined8 uStack_410;
  long local_408;
  long local_400;
  undefined local_3f8 [8];
  undefined8 local_3f0;
  undefined8 local_3e8;
  long local_3e0 [2];
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  long local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined8 local_370;
  long local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
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
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  long local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  long local_2d0;
  undefined local_2c8;
  undefined local_2c7;
  undefined local_2c6;
  undefined local_2c5;
  
  (*(code *)PTR__ZN8uu_touch6uu_app17h87dc9501cc8a91b8E_003a9f98)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17ha75500579b5057efE
            (&local_3a8,&local_2f8,param_1,param_2);
  local_3c0 = uStack_388;
  uStack_3bc = uStack_384;
  uStack_3b8 = (undefined4)uStack_380;
  uStack_3b4 = uStack_380._4_4_;
  local_3d0 = uStack_398;
  uStack_3cc = uStack_394;
  uStack_3c8 = uStack_390;
  uStack_3c4 = uStack_38c;
  local_3e0[0] = local_3a8;
  uVar1 = *(undefined8 *)PTR__ZN8uu_touch9ARG_FILES17hfed196c0e0c7c01dE_003a9fa8;
  uVar2 = *(undefined8 *)(PTR__ZN8uu_touch9ARG_FILES17hfed196c0e0c7c01dE_003a9fa8 + 8);
                    /* try { // try from 0022a68f to 0022a72f has its CatchHandler @ 0022ad6e */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h2f81de9b8b326350E
            (&local_2f8,local_3e0,uVar1,uVar2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h7a77c11b74ac35e8E
            (&local_3a8,uVar1,uVar2,&local_2f8);
  if (local_3a8 == 0) {
                    /* try { // try from 0022a80e to 0022a812 has its CatchHandler @ 0022ad6e */
    uVar13 = _ZN8uu_touch6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17hfa7db5e5c19c49bdE();
    goto LAB_0022ac66;
  }
  local_300 = local_370;
  local_310 = (undefined4)uStack_380;
  uStack_30c = uStack_380._4_4_;
  uStack_308 = local_378;
  uStack_304 = uStack_374;
  local_320 = uStack_390;
  uStack_31c = uStack_38c;
  uStack_318 = uStack_388;
  uStack_314 = uStack_384;
  local_338 = local_3a8;
  local_330 = local_3a0;
  uStack_32c = uStack_39c;
  uStack_328 = uStack_398;
  uStack_324 = uStack_394;
  _ZN4core4iter6traits8iterator8Iterator7collect17h6af070cfaf069711E(&local_438,&local_338);
                    /* try { // try from 0022a73e to 0022a7ee has its CatchHandler @ 0022ad73 */
  uVar10 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003a9fb8
           )(local_3e0,*(undefined8 *)PTR__ZN8uu_touch7options8NO_DEREF17he84667771222874eE_003a9fb0
             ,*(undefined8 *)(PTR__ZN8uu_touch7options8NO_DEREF17he84667771222874eE_003a9fb0 + 8));
  uVar1 = *(undefined8 *)PTR__ZN8uu_touch7options7sources9REFERENCE17hab2eabe5f66d3372E_003a9fc0;
  uVar2 = *(undefined8 *)
           (PTR__ZN8uu_touch7options7sources9REFERENCE17hab2eabe5f66d3372E_003a9fc0 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h836d00c007cc38f2E
            (&local_2f8,local_3e0,uVar1,uVar2);
  lVar11 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h72b734edb63d908dE
                     (uVar1,uVar2,&local_2f8);
  uVar1 = *(undefined8 *)PTR__ZN8uu_touch7options7sources4DATE17hb220f2e2c613f32cE_003a9fc8;
  uVar2 = *(undefined8 *)(PTR__ZN8uu_touch7options7sources4DATE17hb220f2e2c613f32cE_003a9fc8 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0b60f984f29437adE
            (&local_2f8,local_3e0,uVar1,uVar2);
  lVar12 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h72b734edb63d908dE
                     (uVar1,uVar2,&local_2f8);
  lVar15 = -0x8000000000000000;
  uVar16 = (ulong)uVar10;
  if (lVar12 != 0) {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_003a9fd0
    )(&local_2f8,lVar12);
    local_400 = local_2e8;
    lVar15 = local_2f8;
    uVar16 = uStack_2f0;
  }
  lVar12 = *(long *)PTR__ZN8uu_touch7options7sources9TIMESTAMP17hb05dc1a3112e150dE_003a9fd8;
  uVar1 = *(undefined8 *)
           (PTR__ZN8uu_touch7options7sources9TIMESTAMP17hb05dc1a3112e150dE_003a9fd8 + 8);
                    /* try { // try from 0022a830 to 0022a87d has its CatchHandler @ 0022ad10 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0b60f984f29437adE
            (&local_2f8,local_3e0,lVar12,uVar1);
  auVar17 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h72b734edb63d908dE
                      (lVar12,uVar1,&local_2f8);
  local_450 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    local_458 = -0x8000000000000000;
  }
  else {
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_003a9fd0
    )(&local_2f8,auVar17._0_8_);
    local_450 = uStack_2f0;
    lVar12 = local_2e8;
    local_458 = local_2f8;
  }
  lVar7 = local_428;
  uVar13 = uVar16;
  if (lVar15 == -0x8000000000000000) {
    uVar13 = 0;
  }
  uVar14 = 0;
  if (local_458 != -0x8000000000000000) {
    uVar14 = local_450;
  }
  plVar5 = (long *)CONCAT44(uStack_42c,uStack_430);
                    /* try { // try from 0022a8d6 to 0022a9c7 has its CatchHandler @ 0022ad24 */
  cVar8 = (*(code *)PTR__ZN8uu_touch27is_first_filename_timestamp17h32f3ea922c596898E_003a9fe0)
                    (lVar11,uVar13,local_400,uVar14,lVar12,plVar5,local_428);
  if (cVar8 == '\0') {
    if (lVar11 != 0) goto LAB_0022a93b;
LAB_0022aa02:
    if (local_458 == -0x8000000000000000) {
      local_418 = -0x7fffffffffffffff;
      bVar6 = true;
    }
    else {
                    /* try { // try from 0022aa21 to 0022aa3e has its CatchHandler @ 0022ac9e */
      (*(code *)PTR__ZN8uu_touch15parse_timestamp17h36e945b547dfef75E_003a9ff0)
                (&local_2f8,local_450,lVar12);
      uVar13 = uStack_2f0;
      if ((int)local_2f8 == 1) {
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8d2cce2e40acf799E
                  (local_458,local_450);
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h601344d7e62d7c5bE
                  (lVar15,uVar16);
        _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h4a208bc490968955E
                  (CONCAT44(uStack_434,local_438),CONCAT44(uStack_42c,uStack_430));
        goto LAB_0022ac66;
      }
      uStack_410 = uStack_2f0;
      local_408 = CONCAT44(local_408._4_4_,(int)local_2e8);
      local_418 = -0x8000000000000000;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8d2cce2e40acf799E
                (local_458,local_450);
      bVar6 = false;
    }
  }
  else {
    if (lVar7 == 0) {
                    /* try { // try from 0022ac8b to 0022ac9b has its CatchHandler @ 0022ad24 */
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_003a9e10)
                (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003784a8);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (*(long *)(*plVar5 + 0x10) == 10) {
      (*(code *)PTR__ZN8uu_touch4shr217h8714b431bd575308E_003a9fe8)
                (&local_2f8,*(undefined8 *)(*plVar5 + 8),10);
    }
    else {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_003a9fd0
      )(&local_2f8);
    }
    lVar12 = local_2e8;
    uVar13 = uStack_2f0;
    lVar3 = local_2f8;
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h601344d7e62d7c5bE
              (local_458,local_450);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1206d63c58f066cfE
              (&local_2f8,plVar5 + 1,lVar7 + -1);
    _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h4a208bc490968955E
              (CONCAT44(uStack_434,local_438),plVar5);
    local_428 = local_2e8;
    local_438 = (int)local_2f8;
    uStack_434 = local_2f8._4_4_;
    uStack_430 = (undefined4)uStack_2f0;
    uStack_42c = uStack_2f0._4_4_;
    local_450 = uVar13;
    local_458 = lVar3;
    if (lVar11 == 0) goto LAB_0022aa02;
LAB_0022a93b:
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfebea16f99122a4bE
              (&local_2f8,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
    local_408 = local_2e8;
    local_418 = local_2f8;
    uStack_410 = uStack_2f0;
    bVar6 = true;
  }
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h01224e89f645deadE
            (&local_2f8,&local_438);
                    /* try { // try from 0022aac6 to 0022aad2 has its CatchHandler @ 0022acdb */
  _ZN4core4iter6traits8iterator8Iterator7collect17he9a1102dc169f52dE(local_3f8,&local_2f8);
                    /* try { // try from 0022aae1 to 0022aaf8 has its CatchHandler @ 0022accc */
  uVar9 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_003a9fb8
          )(local_3e0,*(undefined8 *)PTR__ZN8uu_touch7options9NO_CREATE17h76be8c25dbc74278E_003a9ff8
            ,*(undefined8 *)(PTR__ZN8uu_touch7options9NO_CREATE17h76be8c25dbc74278E_003a9ff8 + 8));
                    /* try { // try from 0022aaf9 to 0022ab08 has its CatchHandler @ 0022acb2 */
  local_2c5 = (*(code *)PTR__ZN8uu_touch28determine_atime_mtime_change17he34ebc95df27ae4aE_003aa000)
                        (local_3e0);
  local_2e0 = (undefined4)local_418;
  uStack_2dc = local_418._4_4_;
  uStack_2d8 = (undefined4)uStack_410;
  uStack_2d4 = uStack_410._4_4_;
  local_2d0 = local_408;
  local_2e8 = local_400;
  local_2c6 = 0;
                    /* try { // try from 0022ab6f to 0022ab8e has its CatchHandler @ 0022acef */
  local_2f8 = lVar15;
  uStack_2f0 = uVar16;
  local_2c8 = uVar9;
  local_2c7 = (char)uVar10;
  (*(code *)PTR__ZN8uu_touch5touch17h0be58da63b86e7deE_003aa008)
            (&local_368,local_3f0,local_3e8,&local_2f8);
  if (local_368 == -0x7ffffffffffffffc) {
    _ZN4core3ptr38drop_in_place_LT_uu_touch__Options_GT_17hb0e39d6893f0637eE(&local_2f8);
    _ZN4core3ptr63drop_in_place_LT_alloc__vec__Vec_LT_uu_touch__InputFile_GT__GT_17h71b89a8908b0edfbE
              (local_3f8);
    if ((local_458 != -0x8000000000000000) && (bVar6)) {
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8d2cce2e40acf799E
                (local_458,local_450);
    }
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hf089da88c992188dE
              (local_3e0);
    return 0;
  }
  uStack_380 = local_340;
  uStack_390 = local_350;
  uStack_38c = uStack_34c;
  uStack_388 = uStack_348;
  uStack_384 = uStack_344;
  local_3a0 = local_360;
  uStack_39c = uStack_35c;
  uStack_398 = uStack_358;
  uStack_394 = uStack_354;
  local_3a8 = local_368;
                    /* try { // try from 0022ac1c to 0022ac28 has its CatchHandler @ 0022acef */
  uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3ec608fb377dcd08E(&local_3a8);
  _ZN4core3ptr38drop_in_place_LT_uu_touch__Options_GT_17hb0e39d6893f0637eE(&local_2f8);
  _ZN4core3ptr63drop_in_place_LT_alloc__vec__Vec_LT_uu_touch__InputFile_GT__GT_17h71b89a8908b0edfbE
            (local_3f8);
  if ((bool)(local_458 != -0x8000000000000000 & bVar6)) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8d2cce2e40acf799E
              (local_458,local_450);
  }
LAB_0022ac66:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hf089da88c992188dE
            (local_3e0);
  return uVar13;
}