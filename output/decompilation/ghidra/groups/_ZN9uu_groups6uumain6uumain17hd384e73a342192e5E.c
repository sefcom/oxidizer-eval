undefined8 _ZN9uu_groups6uumain6uumain17hd384e73a342192e5E(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 *local_4f8;
  code *pcStack_4f0;
  undefined8 *local_4e8;
  undefined *local_4e0;
  undefined8 local_4d8;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined *local_4b8;
  undefined local_4a8 [16];
  undefined8 *local_498;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined *local_478;
  code *local_470;
  undefined *local_460;
  long local_458;
  undefined8 *puStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined *local_438;
  undefined local_430 [8];
  undefined8 local_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined local_390 [16];
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined local_358 [32];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  long local_70 [8];
  
  (*(code *)PTR__ZN9uu_groups6uu_app17he4594228214da6d4E_001e8968)(&local_338);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h1c0fb712ff2f6afeE
            (&local_418,&local_338,param_1,param_2);
  local_370 = local_3f8;
  uStack_36c = uStack_3f4;
  uStack_368 = uStack_3f0;
  uStack_364 = uStack_3ec;
  local_380 = (undefined4)local_408;
  uStack_37c = local_408._4_4_;
  uStack_378 = uStack_400;
  uStack_374 = uStack_3fc;
                    /* try { // try from 00155374 to 001553c7 has its CatchHandler @ 0015595e */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hc0c0f3908f36d32eE
            (&local_338,local_390);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h29fb37b6f35ebb81E(local_70,&local_338);
  if (local_70[0] != 0) {
    _ZN4core4iter6traits8iterator8Iterator7collect17ha737becd1ce606a3E(&local_338,local_70);
    local_460 = local_338;
    local_418 = (undefined4)uStack_330;
    uStack_414 = uStack_330._4_4_;
    uStack_410 = (undefined4)uStack_328;
    uStack_40c = uStack_328._4_4_;
    if (local_338 != (undefined *)0x8000000000000000) {
      local_458 = uStack_330;
      puStack_450 = uStack_328;
      if (uStack_328 != (undefined8 **)0x0) {
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h61f0d1cd8d127d0bE
                  (local_358,&local_460);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h881f37c21302990cE
                  (&local_448,local_358);
        puVar1 = 
        PTR__ZN102__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT__RF_str_GT__GT_6locate17h4bb3a5c7c498e57dE_001e8988
        ;
        if (CONCAT44(uStack_444,local_448) != -0x8000000000000000) {
          do {
            local_4b8 = local_438;
            local_4c8 = local_448;
            uStack_4c4 = uStack_444;
            uStack_4c0 = uStack_440;
            uStack_4bc = uStack_43c;
                    /* try { // try from 00155689 to 0015568d has its CatchHandler @ 00155963 */
            (*(code *)puVar1)(&local_418,CONCAT44(uStack_43c,uStack_440));
            if (CONCAT44(uStack_414,local_418) == -0x8000000000000000) {
              local_478 = local_4b8;
              local_488 = (undefined4 *)CONCAT44(uStack_4c4,local_4c8);
              uStack_480 = (code *)CONCAT44(uStack_4bc,uStack_4c0);
                    /* try { // try from 001556b3 to 00155744 has its CatchHandler @ 00155997 */
              (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001e8990)(1);
              auVar5 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e8948)();
              local_4f8 = (undefined8 *)local_4a8;
              pcStack_4f0 = 
              _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd5ec53a6e88e5b08E;
              local_4e8 = &local_488;
              local_4e0 = 
              PTR__ZN61__LT_uu_groups__GroupsError_u20_as_u20_core__fmt__Display_GT_3fmt17hd998d0f2fe9171d6E_001e8998
              ;
              local_338 = &DAT_001e17a0;
              uStack_330 = 3;
              local_318 = 0;
              uStack_320 = 2;
              uStack_328 = &local_4f8;
              local_4a8 = auVar5;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e8950)(&local_338);
              _ZN4core3ptr43drop_in_place_LT_uu_groups__GroupsError_GT_17hb6a578406184b27cE
                        (&local_488);
                    /* try { // try from 0015574f to 00155756 has its CatchHandler @ 00155947 */
              _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_uucore__features__entries__Passwd_C_std__io__error__Error_GT__GT_17heee72112ecf77919E
                        (&local_418);
            }
            else {
              local_2c8 = local_3a8;
              uStack_2c0 = uStack_3a0;
              local_2d8 = local_3b8;
              uStack_2d0 = uStack_3b0;
              local_2e8 = local_3c8;
              uStack_2e0 = uStack_3c0;
              local_2f8 = local_3d8;
              uStack_2f0 = uStack_3d0;
              local_308 = local_3e8;
              uStack_304 = uStack_3e4;
              uStack_300 = uStack_3e0;
              uStack_2fc = uStack_3dc;
              local_318 = CONCAT44(uStack_3f4,local_3f8);
              uStack_310 = uStack_3f0;
              uStack_30c = uStack_3ec;
              uStack_328 = (undefined8 **)local_408;
              uStack_320 = CONCAT44(uStack_3fc,uStack_400);
              local_338 = (undefined *)CONCAT44(uStack_414,local_418);
              uStack_330 = CONCAT44(uStack_40c,uStack_410);
                    /* try { // try from 001557e9 to 001557f9 has its CatchHandler @ 001558fe */
              (*(code *)
                PTR__ZN6uucore8features7entries6Passwd10belongs_to17h86a03abed7028785E_001e89a0)
                        (&local_4f8,&local_338);
              pcVar2 = pcStack_4f0;
                    /* try { // try from 0015580f to 0015581e has its CatchHandler @ 00155908 */
              _ZN4core4iter6traits8iterator8Iterator7collect17h2a37e036c85de82eE
                        (local_430,pcStack_4f0,pcStack_4f0 + (long)local_4e8 * 4);
              _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u32_GT__GT_17h45a91fa7e12fd058E
                        (local_4f8,pcVar2);
                    /* try { // try from 0015583b to 00155845 has its CatchHandler @ 00155903 */
              _ZN5alloc3str17join_generic_copy17h65d40f3639046fb8E(&local_4f8,local_428,local_420);
              local_498 = local_4e8;
              local_4a8._0_8_ = local_4f8;
              local_4a8._8_8_ = pcStack_4f0;
              local_488 = &local_4c8;
              uStack_480 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
              ;
              local_478 = local_4a8;
              local_470 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
              ;
              local_4f8 = (undefined8 *)&DAT_001e1770;
              pcStack_4f0 = (code *)0x3;
              local_4d8 = 0;
              local_4e8 = &local_488;
              local_4e0 = (undefined *)0x2;
                    /* try { // try from 001558b4 to 001558bc has its CatchHandler @ 00155919 */
              (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e8980)(&local_4f8);
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h89c1341a341191feE
                        (local_4a8._0_8_,local_4a8._8_8_);
              _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h51d18d21b2c0e218E
                        (local_430);
              _ZN4core3ptr54drop_in_place_LT_uucore__features__entries__Passwd_GT_17h6dbe57604f11a767E
                        (&local_338);
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h89c1341a341191feE
                        (CONCAT44(uStack_4c4,local_4c8),CONCAT44(uStack_4bc,uStack_4c0));
            }
            _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h881f37c21302990cE
                      (&local_448,local_358);
          } while (CONCAT44(uStack_444,local_448) != -0x8000000000000000);
        }
                    /* try { // try from 001555c7 to 001555d3 has its CatchHandler @ 001558c2 */
        _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17hb41b6572950f633bE
                  (local_358);
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h7f195760c4d450b4E
                  (local_390);
        return 0;
      }
      goto LAB_0015540d;
    }
  }
  local_460 = (undefined *)0x0;
  local_458 = 8;
  puStack_450 = (undefined8 *)0x0;
LAB_0015540d:
                    /* try { // try from 0015540d to 00155458 has its CatchHandler @ 0015594c */
  (*(code *)PTR__ZN6uucore8features7entries14get_groups_gnu17hafb36095cbadaa6cE_001e8978)
            (&local_338,0);
  lVar3 = uStack_330;
  puVar1 = local_338;
  if (local_338 == (undefined *)0x8000000000000000) {
    _ZN4core3ptr99drop_in_place_LT_core__result__Result_LT_alloc__vec__Vec_LT_u32_GT__C_std__io__error__Error_GT__GT_17h391048e49a02e523E
              (0x8000000000000000,uStack_330);
    local_338 = (undefined *)0x8000000000000000;
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7722da9b537c65ecE(&local_338);
  }
  else {
                    /* try { // try from 0015546d to 00155477 has its CatchHandler @ 001558ee */
    _ZN4core4iter6traits8iterator8Iterator7collect17h2a37e036c85de82eE
              (&local_4f8,uStack_330,uStack_330 + (long)uStack_328 * 4);
                    /* try { // try from 00155482 to 0015548e has its CatchHandler @ 001558e1 */
    _ZN5alloc3str17join_generic_copy17h65d40f3639046fb8E(&local_338,pcStack_4f0,local_4e8);
    local_408 = uStack_328;
    local_418 = (undefined4)local_338;
    uStack_414 = local_338._4_4_;
    uStack_410 = (undefined4)uStack_330;
    uStack_40c = uStack_330._4_4_;
    uStack_480 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_338 = &DAT_001e1718;
    uStack_330 = 2;
    local_318 = 0;
    uStack_328 = (undefined8 **)&local_488;
    uStack_320 = 1;
                    /* try { // try from 00155500 to 0015550d has its CatchHandler @ 001558c7 */
    local_488 = &local_418;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001e8980)(&local_338);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h89c1341a341191feE
              (CONCAT44(uStack_414,local_418),CONCAT44(uStack_40c,uStack_410));
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h51d18d21b2c0e218E
              (&local_4f8);
    _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u32_GT__GT_17h45a91fa7e12fd058E(puVar1,lVar3);
    uVar4 = 0;
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h51d18d21b2c0e218E
            (&local_460);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h7f195760c4d450b4E
            (local_390);
  return uVar4;
}