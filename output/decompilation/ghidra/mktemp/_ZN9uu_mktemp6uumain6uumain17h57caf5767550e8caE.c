undefined  [16]
_ZN9uu_mktemp6uumain6uumain17h57caf5767550e8caE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined local_3b8 [8];
  long local_3b0;
  long local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined uStack_358;
  char cStack_357;
  char cStack_356;
  long local_350;
  undefined8 local_348;
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
  undefined8 local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  
  _ZN4core4iter6traits8iterator8Iterator7collect17hd83c665600655c8fE(local_3b8,param_1,param_2);
                    /* try { // try from 0015dfd4 to 0015e009 has its CatchHandler @ 0015e494 */
  (*(code *)PTR__ZN9uu_mktemp6uu_app17hf890987c6ac202a5E_001fff20)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hb2bf9d3bff290aa8E
            (&local_428,&local_2f8,local_3b0,local_3a8);
  local_308 = local_3f8;
  local_318 = local_408;
  uStack_314 = uStack_404;
  uStack_310 = uStack_400;
  uStack_30c = uStack_3fc;
  local_328 = (undefined4)local_418;
  uStack_324 = local_418._4_4_;
  uStack_320 = uStack_410;
  uStack_31c = uStack_40c;
  local_338 = local_428;
  uStack_334 = uStack_424;
  uStack_330 = uStack_420;
  uStack_32c = uStack_41c;
                    /* try { // try from 0015e0f1 to 0015e106 has its CatchHandler @ 0015e469 */
  (*(code *)PTR__ZN9uu_mktemp7Options4from17h9e8f44a051439882E_001fff28)(&local_3a0,&local_338);
                    /* try { // try from 0015e107 to 0015e154 has its CatchHandler @ 0015e4ac */
  _ZN3std3env3var17hd1d7290f1c0b217fE(&local_2f8);
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h3eea05ffe5343f6cE
            (&local_2f8);
  if ((((byte)local_2f8 & 1) == 0) &&
     (cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_001fff38
              )(&local_338,
                *(undefined8 *)PTR__ZN9uu_mktemp12ARG_TEMPLATE17hfee3cbf22394565cE_001fff30,
                *(undefined8 *)(PTR__ZN9uu_mktemp12ARG_TEMPLATE17hfee3cbf22394565cE_001fff30 + 8)),
     cVar4 != '\0')) {
    if ((local_3a8 == 0) || (local_3b0 + local_3a8 * 0x18 == 0x18)) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ffdd0)
                (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001f82c0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_3b0 = local_3b0 + local_3a8 * 0x18;
    cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h81f4ba8d19a066abE
                      (*(undefined8 *)(local_3b0 + -0x10),*(undefined8 *)(local_3b0 + -8),
                       CONCAT44(uStack_394,uStack_398),CONCAT44(uStack_38c,local_390));
    if (cVar4 != '\0') goto LAB_0015e1a0;
    local_2f8 = -0x7ffffffffffffffa;
                    /* try { // try from 0015e429 to 0015e457 has its CatchHandler @ 0015e4ac */
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h926c3f51c79b10e8E(&local_2f8);
    _ZN4core3ptr39drop_in_place_LT_uu_mktemp__Options_GT_17h3eaafb388e86958cE(&local_3a0);
LAB_0015e292:
    auVar6._8_8_ = &
                   PTR__ZN4core3ptr43drop_in_place_LT_uu_mktemp__MkTempError_GT_17h5ed7a83c0a0dcbe6E_001f82f8
    ;
    auVar6._0_8_ = uVar5;
  }
  else {
LAB_0015e1a0:
    local_2b8 = local_360;
    local_2c8 = local_370;
    uStack_2c4 = uStack_36c;
    uStack_2c0 = uStack_368;
    uStack_2bc = uStack_364;
    uStack_2d0 = CONCAT44(uStack_374,uStack_378);
    local_2e8 = local_390;
    uStack_2e4 = uStack_38c;
    uStack_2e0 = uStack_388;
    uStack_2dc = uStack_384;
    local_2f8 = CONCAT44(uStack_39c,local_3a0);
    uStack_2f0 = CONCAT44(uStack_394,uStack_398);
                    /* try { // try from 0015e20a to 0015e28e has its CatchHandler @ 0015e48f */
    (*(code *)PTR__ZN9uu_mktemp6Params4from17h79f2486a494e973aE_001fff40)(&local_428,&local_2f8);
    lVar2 = CONCAT44(uStack_424,local_428);
    lVar3 = CONCAT44(uStack_41c,uStack_420);
    if (lVar2 == -0x8000000000000000) {
      local_2e8 = uStack_410;
      uStack_2e4 = uStack_40c;
      uStack_2e0 = local_408;
      uStack_2dc = uStack_404;
      uStack_2f0 = local_418;
      uStack_2d0 = local_3f8;
      local_2f8 = lVar3;
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h926c3f51c79b10e8E(&local_2f8);
      goto LAB_0015e292;
    }
    local_438 = local_3f0;
    uStack_430 = uStack_3e8;
    local_428 = uStack_410;
    uStack_424 = uStack_40c;
    uStack_420 = local_408;
    uStack_41c = uStack_404;
    local_440 = local_3f8;
    if (cStack_357 == '\0') {
      (*(code *)PTR__ZN9uu_mktemp4exec17heedcd9fa9b859fddE_001fff58)
                (&local_2f8,lVar3,local_418,CONCAT44(uStack_404,local_408),
                 CONCAT44(uStack_3fc,uStack_400),local_3e0,local_3f0,uStack_3e8,uStack_358);
    }
    else {
                    /* try { // try from 0015e2f1 to 0015e359 has its CatchHandler @ 0015e46b */
      (*(code *)PTR__ZN9uu_mktemp8dry_exec17h79e853eb482345aeE_001fff50)(&local_2f8,lVar3);
    }
    uVar5 = CONCAT44(uStack_2e4,local_2e8);
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = uStack_2f0;
    if (cStack_356 == '\0') {
      if (local_2f8 != -0x8000000000000000) goto LAB_0015e395;
    }
    else {
      if (local_2f8 != -0x8000000000000000) {
LAB_0015e395:
        local_350 = local_2f8;
        local_348 = uStack_2f0;
                    /* try { // try from 0015e3ad to 0015e3c1 has its CatchHandler @ 0015e46b */
        local_340 = uVar5;
        uVar5 = _ZN6uucore4mods7display16println_verbatim17h83517c5b48aaf591E(&local_350);
        uVar5 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hff3b8e8518f7a10fE
                          (uVar5);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f07e27e74b22b47E(&local_440);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f07e27e74b22b47E(&local_428);
        _ZN4core3mem4drop17hefa9b82e173370e7E(lVar2,lVar3);
                    /* try { // try from 0015e3e4 to 0015e3f0 has its CatchHandler @ 0015e494 */
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17ha3cfcef4e4d23239E
                  (&local_338);
        auVar6._8_8_ = &
                       PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h788463024e1f2c0cE_001f8040
        ;
        auVar6._0_8_ = uVar5;
        goto LAB_0015e3f8;
      }
      auVar6 = _ZN9uu_mktemp6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17hc70eeb2c2d7c4ce4E
                         (uStack_2f0,uVar5);
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f07e27e74b22b47E(&local_440);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f07e27e74b22b47E(&local_428);
    _ZN4core3mem4drop17hefa9b82e173370e7E(lVar2,lVar3);
  }
                    /* try { // try from 0015e386 to 0015e392 has its CatchHandler @ 0015e494 */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17ha3cfcef4e4d23239E
            (&local_338);
LAB_0015e3f8:
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17hc2a7ab734109fc31E
            (local_3b8);
  return auVar6;
}