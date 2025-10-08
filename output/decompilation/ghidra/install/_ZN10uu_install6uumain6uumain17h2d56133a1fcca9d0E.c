undefined  [16]
_ZN10uu_install6uumain6uumain17h2d56133a1fcca9d0E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  long local_328 [8];
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined8 uStack_288;
  
  (*(code *)PTR__ZN10uu_install6uu_app17hc6c3e3f673447f2bE_00209848)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hd427396a7f455570E
            (&local_3c8,&local_2e8,param_1,param_2);
  local_340 = local_3a8;
  uStack_33c = uStack_3a4;
  uStack_338 = uStack_3a0;
  uStack_334 = uStack_39c;
  local_350 = (undefined4)local_3b8;
  uStack_34c = local_3b8._4_4_;
  uStack_348 = uStack_3b0;
  uStack_344 = uStack_3ac;
  local_360 = local_3c8;
  local_358 = local_3c0;
  uVar1 = *(undefined8 *)PTR__ZN10uu_install9ARG_FILES17h2be6c31939077ab6E_00209858;
  uVar2 = *(undefined8 *)(PTR__ZN10uu_install9ARG_FILES17h2be6c31939077ab6E_00209858 + 8);
                    /* try { // try from 0015c39f to 0015c3f4 has its CatchHandler @ 0015c5a0 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hd70ddb265ed347cbE
            (&local_2e8,&local_360,uVar1,uVar2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hb67e080e0d2b698aE
            (local_328,uVar1,uVar2,&local_2e8);
  if (local_328[0] == 0) {
    local_3e0 = 0;
    uStack_3dc = 0;
    uStack_3d8 = 8;
    uStack_3d0 = 0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h7a16aa648906ae80E(&local_2e8,local_328);
    local_3e0 = local_2e8;
    uStack_3dc = uStack_2e4;
    uStack_3d8 = CONCAT44(uStack_2dc,uStack_2e0);
    uStack_3d0 = uStack_2d8;
  }
                    /* try { // try from 0015c42c to 0015c45f has its CatchHandler @ 0015c591 */
  auVar3 = (*(code *)PTR__ZN10uu_install19check_unimplemented17h25e1c8c3cc575803E_00209860)
                     (&local_360);
  if (auVar3._0_8_ == 0) {
    (*(code *)PTR__ZN10uu_install8behavior17h7987ba58edb264aeE_00209868)(&local_2e8,&local_360);
    auVar3._4_4_ = uStack_2dc;
    auVar3._0_4_ = uStack_2e0;
    auVar3._8_8_ = uStack_2d8;
    if (CONCAT44(uStack_2e4,local_2e8) != -0x8000000000000000) {
      local_370 = local_290;
      uStack_368 = uStack_288;
      uVar1 = uStack_368;
      local_380 = local_2a0;
      uStack_37c = uStack_29c;
      uStack_378 = uStack_298;
      uStack_374 = uStack_294;
      local_390 = local_2b0;
      uStack_38c = uStack_2ac;
      uStack_388 = uStack_2a8;
      uStack_384 = uStack_2a4;
      uStack_3a0 = local_2c0;
      uStack_39c = uStack_2bc;
      local_398 = uStack_2b8;
      uStack_394 = uStack_2b4;
      uStack_3b0 = local_2d0;
      uStack_3ac = uStack_2cc;
      local_3a8 = uStack_2c8;
      uStack_3a4 = uStack_2c4;
      local_3b8 = uStack_2d8;
      uStack_368._0_1_ = (char)uStack_288;
      uStack_368 = uVar1;
      if ((char)uStack_368 == '\x01') {
        uStack_2d8 = uStack_3d0;
        local_2e8 = local_3e0;
        uStack_2e4 = uStack_3dc;
        uStack_2e0 = (undefined4)uStack_3d8;
        uStack_2dc = uStack_3d8._4_4_;
                    /* try { // try from 0015c4ff to 0015c511 has its CatchHandler @ 0015c582 */
        auVar3 = (*(code *)PTR__ZN10uu_install8standard17h1ae3025b0f01e4c2E_00209870)
                           (&local_2e8,&local_3c8);
        _ZN4core3ptr41drop_in_place_LT_uu_install__Behavior_GT_17h21b8ea035c937e2eE(&local_3c8);
        goto LAB_0015c553;
      }
                    /* try { // try from 0015c52e to 0015c538 has its CatchHandler @ 0015c573 */
      auVar3 = (*(code *)PTR__ZN10uu_install9directory17h0671663bd4f8b2dbE_00209878)
                         (uStack_3d8,uStack_3d0,&local_3c8);
      _ZN4core3ptr41drop_in_place_LT_uu_install__Behavior_GT_17h21b8ea035c937e2eE(&local_3c8);
    }
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hc646f9cd9b7a0504E
            (&local_3e0);
LAB_0015c553:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h277369f93a623746E
            (&local_360);
  return auVar3;
}