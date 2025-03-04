undefined  [16] _ZN7uu_fold6uumain6uumain17h155a94364b670395E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined uVar3;
  undefined uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 local_428;
  undefined local_418 [8];
  undefined8 local_410;
  undefined8 local_408;
  char local_400;
  undefined uStack_3ff;
  undefined2 uStack_3fe;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined local_3c0 [16];
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined local_338 [4];
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
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  
  _ZN6uucore4Args13collect_lossy17h1cee8c2280f3bcb1E(local_418,param_1,param_2);
                    /* try { // try from 001648bb to 001648c8 has its CatchHandler @ 00164cca */
  (*(code *)PTR__ZN7uu_fold15handle_obsolete17h3fddf2520a33c709E_0021e440)
            (&local_2f8,local_410,local_408);
  local_378 = CONCAT44(uStack_2e4,local_2e8);
  uStack_380 = uStack_2f0;
  uStack_37c = uStack_2ec;
  local_388 = local_2f8;
  local_428 = local_2d0;
  local_438 = local_2e0;
  uStack_434 = uStack_2dc;
  uStack_430 = uStack_2d8;
  uStack_42c = uStack_2d4;
                    /* try { // try from 00164907 to 00164979 has its CatchHandler @ 00164ccf */
  (*(code *)PTR__ZN7uu_fold6uu_app17hfa78df7319f7c039E_0021e448)(&local_2f8);
  local_358 = local_378;
  local_368 = (undefined4)local_388;
  uStack_364 = local_388._4_4_;
  uStack_360 = uStack_380;
  uStack_35c = uStack_37c;
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hea47991cc25bd6e3E
            (&local_400,&local_2f8,&local_368);
  if (CONCAT44(uStack_3fc,CONCAT22(uStack_3fe,CONCAT11(uStack_3ff,local_400))) ==
      -0x8000000000000000) {
    auVar9 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0021e450
             )();
LAB_00164980:
                    /* try { // try from 00164980 to 00164987 has its CatchHandler @ 00164cc8 */
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hed570d098e0e6bfcE
              (&local_438);
    auVar10 = auVar9;
  }
  else {
    local_3a0 = local_3e0;
    uStack_39c = uStack_3dc;
    uStack_398 = uStack_3d8;
    uStack_394 = uStack_3d4;
    local_3b0 = local_3f0;
    uStack_3ac = uStack_3ec;
    uStack_3a8 = uStack_3e8;
    uStack_3a4 = uStack_3e4;
                    /* try { // try from 001649c4 to 00164a45 has its CatchHandler @ 00164cd4 */
    uVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e458
            )(local_3c0,&DAT_00114848,5);
    uVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0021e458
            )(local_3c0,&DAT_0011484d,6);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h472e17604698523cE
              (&local_2f8,local_3c0,&DAT_00114843,5);
    lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h4339da512d61fbc5E
                      (&DAT_00114843,5,&local_2f8);
    if (lVar5 == 0) {
      lVar6 = CONCAT44(uStack_434,local_438);
      local_348 = CONCAT44(uStack_42c,uStack_430);
      uStack_340 = local_428;
      ppuVar8 = (undefined **)0x50;
      bVar2 = false;
      if (lVar6 != -0x8000000000000000) goto LAB_00164a86;
    }
    else {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE_0021e460
      )(&local_2f8,lVar5);
      local_348 = CONCAT44(uStack_2ec,uStack_2f0);
      uStack_340 = CONCAT44(uStack_2e4,local_2e8);
      bVar2 = true;
      lVar6 = local_2f8;
LAB_00164a86:
      uStack_2f0 = (undefined4)local_348;
      uStack_2ec = local_348._4_4_;
      local_2e8 = (undefined4)uStack_340;
      uStack_2e4 = uStack_340._4_4_;
                    /* try { // try from 00164aae to 00164ad9 has its CatchHandler @ 00164cb6 */
      local_2f8 = lVar6;
      (*(code *)
        PTR__ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E_0021e468
      )(&local_400,local_348,uStack_340);
      if (local_400 == '\0') {
        ppuVar8 = (undefined **)CONCAT44(uStack_3f4,uStack_3f8);
      }
      else {
        lVar6 = _ZN7uu_fold6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17hef0e7fe7c92ff8acE
                          (CONCAT44(uStack_2ec,uStack_2f0),CONCAT44(uStack_2e4,local_2e8),uStack_3ff
                          );
        if (lVar6 != 0) {
                    /* try { // try from 00164ae2 to 00164aee has its CatchHandler @ 00164cd4 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2fe101e1456ac402E(&local_2f8);
                    /* try { // try from 00164af2 to 00164afb has its CatchHandler @ 00164ccf */
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hc3e6f6c823a6e497E
                    (local_3c0);
          auVar10._8_8_ =
               &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h4638a79756ee5228E_00217fb8
          ;
          auVar10._0_8_ = lVar6;
          auVar9._8_8_ = &
                         PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h4638a79756ee5228E_00217fb8
          ;
          auVar9._0_8_ = lVar6;
          if (lVar5 == 0) goto LAB_00164c63;
          goto LAB_00164980;
        }
        ppuVar8 = &
                  PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h4638a79756ee5228E_00217fb8
        ;
      }
                    /* try { // try from 00164b1f to 00164bb8 has its CatchHandler @ 00164cd4 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2fe101e1456ac402E(&local_2f8);
    }
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hdf6edee4d4c95a38E
              (&local_2f8,local_3c0,"file",4);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h5400f4bced3243d7E
              (&local_400,"file",4,&local_2f8);
    if (CONCAT44(uStack_3fc,CONCAT22(uStack_3fe,CONCAT11(uStack_3ff,local_400))) == 0) {
      puVar7 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(0x18);
      if (puVar7 == (undefined4 *)0x0) {
                    /* try { // try from 00164c85 to 00164c94 has its CatchHandler @ 00164cd4 */
        (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E_0021e3f0)(8,0x18);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
                    /* try { // try from 00164bce to 00164bdd has its CatchHandler @ 00164c97 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hca3da16942e22ce7E
                (&local_2f8);
      local_358 = CONCAT44(uStack_2e4,local_2e8);
      local_368 = (undefined4)local_2f8;
      uStack_364 = local_2f8._4_4_;
      uStack_360 = uStack_2f0;
      uStack_35c = uStack_2ec;
      *(undefined8 *)(puVar7 + 4) = local_358;
      *puVar7 = (undefined4)local_2f8;
      puVar7[1] = local_2f8._4_4_;
      puVar7[2] = uStack_2f0;
      puVar7[3] = uStack_2ec;
      _ZN5alloc5slice4hack8into_vec17h8f55dd2e2988ff10E(&local_2f8,puVar7);
    }
    else {
      local_308 = local_3d0;
      uStack_304 = uStack_3cc;
      uStack_300 = uStack_3c8;
      uStack_2fc = uStack_3c4;
      local_318 = local_3e0;
      uStack_314 = uStack_3dc;
      uStack_310 = uStack_3d8;
      uStack_30c = uStack_3d4;
      local_328 = local_3f0;
      uStack_324 = uStack_3ec;
      uStack_320 = uStack_3e8;
      uStack_31c = uStack_3e4;
      uStack_334 = uStack_3fc;
      uStack_330 = uStack_3f8;
      uStack_32c = uStack_3f4;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h71544f9847d722f8E
                (&local_2f8,local_338);
    }
                    /* try { // try from 00164c26 to 00164c35 has its CatchHandler @ 00164ca4 */
    auVar10 = (*(code *)PTR__ZN7uu_fold4fold17h0e99b4443f72c023E_0021e470)
                        (CONCAT44(uStack_2ec,uStack_2f0),CONCAT44(uStack_2e4,local_2e8),uVar3,uVar4,
                         ppuVar8);
                    /* try { // try from 00164c36 to 00164c48 has its CatchHandler @ 00164cd4 */
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h10b4bf408cda2574E
              (&local_2f8);
                    /* try { // try from 00164c4c to 00164c55 has its CatchHandler @ 00164ccf */
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hc3e6f6c823a6e497E
              (local_3c0);
    if (bVar2) {
                    /* try { // try from 00164c5b to 00164c62 has its CatchHandler @ 00164cc8 */
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hed570d098e0e6bfcE
                (&local_438);
    }
  }
LAB_00164c63:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h10b4bf408cda2574E
            (local_418);
  return auVar10;
}