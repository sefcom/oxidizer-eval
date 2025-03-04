undefined8 _ZN11uu_basename6uumain6uumain17hafa1ff2c988de7cbE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined local_411;
  undefined8 ***local_410;
  undefined8 ***local_408;
  undefined8 ***pppuStack_400;
  undefined8 ***local_3f8;
  undefined8 ***pppuStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined local_3b0 [8];
  long local_3a8;
  long local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 ***local_378;
  undefined8 ***local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined local_328 [16];
  undefined *local_318;
  undefined8 **local_310 [3];
  undefined8 ***local_2f8;
  undefined8 ***pppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  
  _ZN6uucore4Args13collect_lossy17h23c2a3e3ca25697aE(&local_340,param_1,param_2);
                    /* try { // try from 00163294 to 001632a1 has its CatchHandler @ 0016380d */
  (*(code *)PTR__ZN11uu_basename6uu_app17h0b657963404f564aE_002122f0)(&local_2f8);
  local_388 = local_330;
  local_398 = (undefined8 ****)CONCAT44(uStack_33c,local_340);
  uStack_390 = (undefined *)CONCAT44(uStack_334,uStack_338);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17he6bf499b6a746767E
            (&local_3f8,&local_2f8,&local_398);
  if ((undefined8 ****)local_3f8 == (undefined8 ****)0x8000000000000000) {
    uVar5 = (*(code *)
              PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_002122f8
            )();
    return uVar5;
  }
  local_348 = local_3c8;
  local_358 = local_3d8;
  uStack_354 = uStack_3d4;
  uStack_350 = uStack_3d0;
  uStack_34c = uStack_3cc;
  local_368 = (undefined4)local_3e8;
  uStack_364 = local_3e8._4_4_;
  uStack_360 = (undefined4)uStack_3e0;
  uStack_35c = uStack_3e0._4_4_;
  local_378 = local_3f8;
  local_370 = pppuStack_3f0;
                    /* try { // try from 0016334b to 0016342b has its CatchHandler @ 0016382e */
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00212308
          )(&local_378,*(undefined8 *)PTR__ZN11uu_basename7options4ZERO17h4ed660ca995a2601E_00212300
            ,*(undefined8 *)(PTR__ZN11uu_basename7options4ZERO17h4ed660ca995a2601E_00212300 + 8));
  local_411 = 10;
  if (cVar4 != '\0') {
    local_411 = 0;
  }
  uVar5 = *(undefined8 *)PTR__ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E_00212310;
  uVar1 = *(undefined8 *)(PTR__ZN11uu_basename7options4NAME17h2a13bbd3253d77d4E_00212310 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h78ff5d19ca8609fdE
            (&local_2f8,&local_378,uVar5,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h9a0d3a6d2e9de983E
            (&local_3f8,uVar5,uVar1,&local_2f8);
  if ((undefined8 ****)local_3f8 == (undefined8 ****)0x0) {
    local_3d8 = 0;
    uStack_3d4 = 0;
    uStack_3d0 = 0;
    uStack_3cc = 0;
    uVar8 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_00212318
                  ,0);
    uVar9 = (undefined4)
            ((ulong)
             PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_00212318
            >> 0x20);
    uStack_2e0._0_4_ = 0;
    uStack_2e0._4_4_ = 0;
    pcVar6 = _ZN4core3ops8function6FnOnce9call_once17h1749e4eba30ca774E;
    local_3c0 = 0;
    pppuStack_2f0 =
         (undefined8 ***)
         PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_00212318
    ;
  }
  else {
    pcVar6 = (code *)local_3f8;
    pppuStack_2f0 = pppuStack_3f0;
    uVar5 = local_3c8;
    uVar8 = (undefined4)local_3e8;
    uVar9 = local_3e8._4_4_;
    uStack_2e0._0_4_ = (undefined4)uStack_3e0;
    uStack_2e0._4_4_ = uStack_3e0._4_4_;
  }
  uStack_2e8 = (undefined8 ****)CONCAT44(uVar9,uVar8);
  uStack_2d8 = CONCAT44(uStack_3d4,local_3d8);
  local_2f8 = (undefined8 ***)pcVar6;
  uStack_2d0 = uStack_3d0;
  uStack_2cc = uStack_3cc;
  local_2c8 = uVar5;
  local_2c0 = local_3c0;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h2380b6632f2686ccE
            (local_3b0,&local_2f8);
  if (local_3a0 == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4f222ef6d9974619E(&local_3f8)
    ;
    uStack_2e8 = (undefined8 ****)local_3e8;
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h75d2f99a8ee9caddE(&local_2f8);
LAB_00163554:
                    /* try { // try from 00163557 to 00163560 has its CatchHandler @ 0016382e */
    _ZN4core3ptr69drop_in_place_LT_alloc__vec__Vec_LT__RF_alloc__string__String_GT__GT_17h800e991a5f8ef942E
              (local_3b0);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hce81d941c7def3f2E
              (&local_378);
    return uVar5;
  }
  uVar5 = *(undefined8 *)PTR__ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E_00212320;
  uVar1 = *(undefined8 *)(PTR__ZN11uu_basename7options6SUFFIX17h153db8b06c29f268E_00212320 + 8);
                    /* try { // try from 00163446 to 00163553 has its CatchHandler @ 0016381f */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b765cbc81459d91E
            (&local_2f8,&local_378,uVar5,uVar1);
  lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hb9e5bc066166ebb5E
                    (uVar5,uVar1,&local_2f8);
  if ((lVar7 == 0) &&
     (cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00212308
              )(&local_378,
                *(undefined8 *)PTR__ZN11uu_basename7options8MULTIPLE17h83f341c200c46a09E_00212328,
                *(undefined8 *)
                 (PTR__ZN11uu_basename7options8MULTIPLE17h83f341c200c46a09E_00212328 + 8)),
     cVar4 == '\0')) {
    if (local_3a0 != 1) {
      if (local_3a0 != 2) {
        if (local_3a0 == 0) {
          local_2f8 = (undefined8 ***)&PTR_DAT_0020c2b0;
          pppuStack_2f0 = (undefined8 ***)0x1;
          uStack_2e8 = (undefined8 ****)0x8;
          uStack_2e0 = 0;
          uStack_2d8 = 0;
          (*(code *)PTR__ZN4core9panicking9panic_fmt17he12d0d7468628bb4E_00212188)
                    (&local_2f8,&PTR_DAT_0020c378);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        pppuStack_3f0 = *(undefined8 ****)(*(long *)(local_3a8 + 0x10) + 8);
        local_3e8 = *(undefined **)(*(long *)(local_3a8 + 0x10) + 0x10);
        local_3f8 = (undefined8 ****)0x0;
        uStack_3e0 = (undefined *)CONCAT71(uStack_3e0._1_7_,1);
        local_398 = &local_3f8;
        uStack_390 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_00212350
        ;
        local_2f8 = (undefined8 ***)&PTR_DAT_0020c2c0;
        pppuStack_2f0 = (undefined8 ***)0x1;
        uStack_2d8 = 0;
        uStack_2e0 = 1;
                    /* try { // try from 00163746 to 00163800 has its CatchHandler @ 0016381f */
        uStack_2e8 = (undefined8 ****)&local_398;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hccb2c5237b9a5f11E(local_328,&local_2f8);
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
        uStack_2e8 = (undefined8 ****)local_318;
        uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h75d2f99a8ee9caddE(&local_2f8);
        goto LAB_00163554;
      }
      local_3a0 = 1;
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE_00212330
      )(&local_410,*(undefined8 *)(local_3a8 + 8));
      goto LAB_00163589;
    }
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b765cbc81459d91E
              (&local_2f8,&local_378,uVar5,uVar1);
    lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hb9e5bc066166ebb5E
                      (uVar5,uVar1,&local_2f8);
    if (lVar7 != 0) {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE_00212330
      )(&local_2f8,lVar7);
      local_3f8 = pppuStack_2f0;
      pppuStack_3f0 = uStack_2e8;
      if ((undefined8 ****)local_2f8 != (undefined8 ****)0x8000000000000000) {
        local_408 = pppuStack_2f0;
        pppuStack_400 = uStack_2e8;
        local_410 = local_2f8;
        goto LAB_00163589;
      }
    }
  }
  local_410 = (undefined8 ****)0x0;
  local_408 = (undefined8 ***)&DAT_00000001;
  pppuStack_400 = (undefined8 ****)0x0;
LAB_00163589:
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h89482ec4a8f60c59E
            (&local_398,local_3b0);
  lVar7 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5b9010a19a1a5647E
                    (&local_398);
  puVar3 = PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_00212340;
  puVar2 = 
  PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17h6643b2132dca5a5bE_00212338
  ;
  if (lVar7 != 0) {
    do {
                    /* try { // try from 001635f2 to 001635fa has its CatchHandler @ 00163845 */
      (*(code *)PTR__ZN11uu_basename8basename17h5fea76ad93274f11E_00212348)
                (local_310,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),local_408,
                 pppuStack_400);
      pppuStack_3f0 =
           (undefined8 ***)
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
      ;
      local_3e8 = &local_411;
      uStack_3e0 = puVar2;
      local_2f8 = (undefined8 ***)&DAT_00113768;
      pppuStack_2f0 = (undefined8 ****)0x2;
      uStack_2d8 = 0;
      uStack_2e8 = &local_3f8;
      uStack_2e0._0_4_ = 2;
      uStack_2e0._4_4_ = 0;
      local_3f8 = local_310;
                    /* try { // try from 00163654 to 00163658 has its CatchHandler @ 00163833 */
      (*(code *)puVar3)(&local_2f8);
                    /* try { // try from 00163659 to 00163660 has its CatchHandler @ 00163845 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hec0dbaa5dc26e973E(local_310);
      lVar7 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5b9010a19a1a5647E
                        (&local_398);
    } while (lVar7 != 0);
  }
                    /* try { // try from 00163672 to 0016367e has its CatchHandler @ 00163808 */
  _ZN4core3ptr85drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_alloc__string__String_GT__GT_17h44d76e55d49ad863E
            (&local_398);
                    /* try { // try from 0016367f to 00163688 has its CatchHandler @ 00163803 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hec0dbaa5dc26e973E(&local_410);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hce81d941c7def3f2E
            (&local_378);
  return 0;
}