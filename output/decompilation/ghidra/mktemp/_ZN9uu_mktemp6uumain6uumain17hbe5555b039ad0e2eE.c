undefined  [16]
_ZN9uu_mktemp6uumain6uumain17hbe5555b039ad0e2eE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auStack_478 [8];
  long local_470;
  long local_468;
  long local_460;
  long local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  long local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 local_3e8;
  undefined uStack_3e0;
  char cStack_3df;
  char cStack_3de;
  long local_3d8;
  long lStack_3d0;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 local_390;
  long local_388;
  long lStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long local_348;
  undefined8 uStack_340;
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
  long local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  long local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  
  _ZN4core4iter6traits8iterator8Iterator7collect17he8be1adec482e7f0E(auStack_478,param_1,param_2);
                    /* try { // try from 0017297b to 001729a0 has its CatchHandler @ 00172f06 */
  (*(code *)PTR__ZN9uu_mktemp6uu_app17h678f679507a186e9E_0023ae60)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h5fc7b7c71f2359a5E
            (&local_3d8,&local_2e8,auStack_478);
  if (local_3d8 == -0x8000000000000000) {
    if (*(char *)(lStack_3d0 + 0xd5) == '\x05') {
      _ZN12clap_builder4util8flat_map20FlatMap_LT_K_C_V_GT_4iter17h134ffb24717c5ed1E
                (&local_2e8,lStack_3d0 + 0x20);
      local_418 = (undefined4)local_2d8;
      uStack_414 = local_2d8._4_4_;
      uStack_410 = (undefined4)uStack_2d0;
      uStack_40c = uStack_2d0._4_4_;
      local_428 = local_2e8;
      uStack_420 = uStack_2e0;
                    /* try { // try from 001729fc to 00172a5f has its CatchHandler @ 00172ed6 */
      uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h2d42ac3e53677c18E(&local_428);
      cVar3 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h01b87041e6942a90E
                        (uVar2);
      if (cVar3 != '\0') {
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h7ba27a2dd62ae859E
                  (&local_428,"too many templates",0x12);
        local_2d8 = CONCAT44(uStack_414,local_418);
        local_2e8 = local_428;
        uStack_2e0 = uStack_420;
        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,1);
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d52bc748f976a23E(&local_2e8);
                    /* try { // try from 00172a60 to 00172a6a has its CatchHandler @ 00172f06 */
        _ZN4core3ptr47drop_in_place_LT_clap_builder__error__Error_GT_17h678970666a3c3523E
                  (lStack_3d0);
        auVar5._8_8_ = &
                       PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h9d886ac50fc673b4E_00233eb0
        ;
        auVar5._0_8_ = uVar4;
        goto LAB_00172e09;
      }
    }
                    /* try { // try from 00172aff to 00172b07 has its CatchHandler @ 00172ed4 */
    auVar5 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0023ae70
             )(lStack_3d0);
    goto LAB_00172e09;
  }
  local_368 = local_3b8;
  uStack_364 = uStack_3b4;
  uStack_360 = uStack_3b0;
  uStack_35c = uStack_3ac;
  local_378 = (undefined4)local_3c8;
  uStack_374 = local_3c8._4_4_;
  uStack_370 = uStack_3c0;
  uStack_36c = uStack_3bc;
  local_388 = local_3d8;
  lStack_380 = lStack_3d0;
                    /* try { // try from 00172ab9 to 00172acb has its CatchHandler @ 00172ee3 */
  (*(code *)PTR__ZN9uu_mktemp7Options4from17h443dd3893f930365E_0023ae68)(&local_428,&local_388);
                    /* try { // try from 00172acc to 00172afc has its CatchHandler @ 00172eea */
  _ZN3std3env3var17h511154690abe6389E(&local_2e8,"POSIXLY_CORRECT",0xf);
  if (local_2e8 == 0) {
                    /* try { // try from 00172b13 to 00172b6f has its CatchHandler @ 00172eea */
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17he26e00ff24602776E
              (&local_2e8);
    cVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E_0023ae80
            )(&local_388,*(undefined8 *)PTR__ZN9uu_mktemp12ARG_TEMPLATE17h5ec0554c879217e7E_0023ae78
              ,*(undefined8 *)(PTR__ZN9uu_mktemp12ARG_TEMPLATE17h5ec0554c879217e7E_0023ae78 + 8));
    if (cVar3 == '\0') goto LAB_00172b78;
    if (local_468 == 0) {
                    /* try { // try from 00172e50 to 00172e5c has its CatchHandler @ 00172eea */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h0e11329e76906eaaE_0023aea0)
                (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00233db8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar3 = _ZN98__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_std__ffi__os_str__OsStr_GT__GT_2eq17ha5f536083d339933E
                      (*(undefined8 *)(local_470 + -0x10 + local_468 * 0x18),
                       *(undefined8 *)(local_470 + -8 + local_468 * 0x18),uStack_420,
                       CONCAT44(uStack_414,local_418));
    if (cVar3 != '\0') goto LAB_00172b78;
    uStack_2d0 = 0x8000000000000006;
                    /* try { // try from 00172e31 to 00172e3d has its CatchHandler @ 00172eea */
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h81fafefccffeca47E(&local_2e8);
                    /* try { // try from 00172e3e to 00172e4a has its CatchHandler @ 00172ee3 */
    _ZN4core3ptr39drop_in_place_LT_uu_mktemp__Options_GT_17he84430dd8faf4926E(&local_428);
  }
  else {
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17he26e00ff24602776E
              (&local_2e8);
LAB_00172b78:
    local_2a8 = local_3e8;
    local_2b8 = local_3f8;
    uStack_2b4 = uStack_3f4;
    uStack_2b0 = uStack_3f0;
    uStack_2ac = uStack_3ec;
    local_2c8 = local_408;
    uStack_2c4 = uStack_404;
    uStack_2c0 = uStack_400;
    uStack_2bc = uStack_3fc;
    local_2d8 = CONCAT44(uStack_414,local_418);
    uStack_2d0 = CONCAT44(uStack_40c,uStack_410);
    local_2e8 = local_428;
    uStack_2e0 = uStack_420;
                    /* try { // try from 00172bdb to 00172c50 has its CatchHandler @ 00172ee5 */
    (*(code *)PTR__ZN9uu_mktemp6Params4from17h08dfed7a01f28665E_0023ae88)(&local_3d8,&local_2e8);
    if (local_3d8 != -0x8000000000000000) {
      local_318 = local_3a0;
      uStack_314 = uStack_39c;
      uStack_310 = uStack_398;
      uStack_30c = uStack_394;
      local_328 = uStack_3b0;
      uStack_324 = uStack_3ac;
      uStack_320 = local_3a8;
      uStack_31c = uStack_3a4;
      local_338 = uStack_3c0;
      uStack_334 = uStack_3bc;
      uStack_330 = local_3b8;
      uStack_32c = uStack_3b4;
      local_348 = lStack_3d0;
      uStack_340 = local_3c8;
      local_458 = lStack_3d0;
      uStack_450 = local_3c8;
      local_448 = uStack_3c0;
      uStack_444 = uStack_3bc;
      uStack_440 = local_3b8;
      uStack_43c = uStack_3b4;
      local_460 = local_3d8;
      if (cStack_3df == '\0') {
        (*(code *)PTR__ZN9uu_mktemp4exec17h4964a5bb0e6c4200E_0023ae98)
                  (&local_2e8,lStack_3d0,local_3c8,CONCAT44(uStack_3b4,local_3b8),
                   CONCAT44(uStack_3ac,uStack_3b0),local_390,CONCAT44(uStack_39c,local_3a0),
                   CONCAT44(uStack_394,uStack_398),uStack_3e0);
      }
      else {
                    /* try { // try from 00172cfe to 00172d62 has its CatchHandler @ 00172eae */
        (*(code *)PTR__ZN9uu_mktemp8dry_exec17h0a7898737835babcE_0023ae90)(&local_2e8);
      }
      auVar5._8_8_ = local_2d8;
      auVar5._0_8_ = uStack_2e0;
      if (cStack_3de == '\0') {
        if (local_2e8 != -0x8000000000000000) goto LAB_00172daf;
      }
      else {
        if (local_2e8 != -0x8000000000000000) {
LAB_00172daf:
          local_300 = local_2e8;
          local_2f8 = uStack_2e0;
          uStack_2f0 = local_2d8;
                    /* try { // try from 00172dc0 to 00172dd4 has its CatchHandler @ 00172e73 */
          uVar4 = _ZN6uucore4mods7display16println_verbatim17h5bcfcd3708f9694aE(&local_300);
          auVar5 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hc85311bdbf48fb6aE
                             (uVar4);
                    /* try { // try from 00172dd5 to 00172de7 has its CatchHandler @ 00172e6e */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17heaa044c2009f3939E(&local_3d8);
                    /* try { // try from 00172de8 to 00172df1 has its CatchHandler @ 00172e69 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17heaa044c2009f3939E(&local_448);
                    /* try { // try from 00172df2 to 00172dfb has its CatchHandler @ 00172e64 */
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ae21e0dc128195bE(&local_460);
                    /* try { // try from 00172dfc to 00172e08 has its CatchHandler @ 00172e5f */
          _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h83a686a69d3d6469E
                    (&local_388);
          goto LAB_00172e09;
        }
        auVar5 = _ZN9uu_mktemp6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h6fe6f02797a60696E
                           (uStack_2e0,local_2d8);
      }
                    /* try { // try from 00172d7f to 00172d8b has its CatchHandler @ 00172e6e */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17heaa044c2009f3939E(&local_3d8);
                    /* try { // try from 00172d8c to 00172d95 has its CatchHandler @ 00172e69 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17heaa044c2009f3939E(&local_448);
                    /* try { // try from 00172d96 to 00172d9f has its CatchHandler @ 00172e64 */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ae21e0dc128195bE(&local_460);
                    /* try { // try from 00172da0 to 00172dac has its CatchHandler @ 00172e5f */
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h83a686a69d3d6469E
                (&local_388);
      goto LAB_00172e09;
    }
    local_328 = uStack_3b0;
    uStack_324 = uStack_3ac;
    uStack_320 = local_3a8;
    uStack_31c = uStack_3a4;
    local_338 = uStack_3c0;
    uStack_334 = uStack_3bc;
    uStack_330 = local_3b8;
    uStack_32c = uStack_3b4;
    local_348 = lStack_3d0;
    uStack_340 = local_3c8;
    local_2c8 = uStack_3b0;
    uStack_2c4 = uStack_3ac;
    uStack_2c0 = local_3a8;
    uStack_2bc = uStack_3a4;
    local_2d8 = CONCAT44(uStack_3bc,uStack_3c0);
    uStack_2d0 = CONCAT44(uStack_3b4,local_3b8);
    local_2e8 = lStack_3d0;
    uStack_2e0 = local_3c8;
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h81fafefccffeca47E(&local_2e8);
  }
                    /* try { // try from 00172c54 to 00172c60 has its CatchHandler @ 00172f06 */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h83a686a69d3d6469E
            (&local_388);
  auVar5._8_8_ = &
                 PTR__ZN4core3ptr43drop_in_place_LT_uu_mktemp__MkTempError_GT_17hecb1e86de2c593eaE_00233e08
  ;
  auVar5._0_8_ = uVar4;
LAB_00172e09:
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17hb8a32b81c806225fE
            (auStack_478);
  return auVar5;
}