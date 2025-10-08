undefined  [16]
_ZN11uu_printenv6uumain6uumain17h8fd3ece72bc2d10bE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  undefined **ppuVar6;
  char cVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined auVar10 [16];
  undefined8 local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 local_468;
  undefined8 **local_458;
  code *pcStack_450;
  undefined **local_448;
  undefined8 **local_440;
  code *local_438;
  undefined **ppuStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  code *local_408;
  undefined **ppuStack_400;
  undefined8 **local_3f8;
  code *local_3f0;
  undefined8 local_3e8;
  char *local_3d0;
  undefined8 local_3c8;
  undefined8 **local_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined local_370 [56];
  long local_338 [8];
  undefined8 **local_2f8;
  code *local_2f0;
  undefined **ppuStack_2e8;
  code *local_2e0;
  undefined8 *local_2d8;
  code *local_2d0;
  
  (*(code *)PTR__ZN11uu_printenv6uu_app17h7bc4be2a87c56121E_001d9fb0)(&local_2f8);
  _ZN12clap_builder7builder7command7Command16get_matches_from17ha278466ca55fe929E
            (local_370,&local_2f8,param_1,param_2);
  uVar1 = *(undefined8 *)PTR__ZN11uu_printenv13ARG_VARIABLES17h20ba644c57b19753E_001d9fb8;
  uVar2 = *(undefined8 *)(PTR__ZN11uu_printenv13ARG_VARIABLES17h20ba644c57b19753E_001d9fb8 + 8);
                    /* try { // try from 0014a0af to 0014a0ff has its CatchHandler @ 0014a520 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h1ee5d1d1c1217de9E
            (&local_2f8,local_370,uVar1,uVar2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h5ba7c6976e7b2469E
            (local_338,uVar1,uVar2,&local_2f8);
  if (local_338[0] == 0) {
LAB_0014a124:
    local_440 = (undefined8 ***)0x0;
    local_438 = (code *)&DAT_00000008;
    ppuStack_430 = (code **)0x0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17hc257ffbfa865b358E(&local_2f8,local_338);
    local_408 = local_2f0;
    ppuStack_400 = ppuStack_2e8;
    if (local_2f8 == (undefined8 **)&DAT_8000000000000000) goto LAB_0014a124;
    local_438 = local_2f0;
    ppuStack_430 = ppuStack_2e8;
    local_440 = local_2f8;
  }
                    /* try { // try from 0014a15e to 0014a16b has its CatchHandler @ 0014a4f6 */
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001d9fc8
          )(local_370,*(undefined8 *)PTR__ZN11uu_printenv8OPT_NULL17h717858802ed57abbE_001d9fc0,
            *(undefined8 *)(PTR__ZN11uu_printenv8OPT_NULL17h717858802ed57abbE_001d9fc0 + 8));
  local_3d0 = "\n";
  if (cVar7 != '\0') {
    local_3d0 = "";
  }
  local_3c8 = 1;
  if ((code **)ppuStack_430 == (code **)0x0) {
                    /* try { // try from 0014a200 to 0014a20d has its CatchHandler @ 0014a4f6 */
    (*(code *)PTR__ZN3std3env4vars17h43d0a176db605fd6E_001d9fd8)(&local_390);
    puVar3 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001d9fe0;
    local_418 = local_380;
    uStack_410 = uStack_378;
    local_428 = local_390;
    uStack_424 = uStack_38c;
    uStack_420 = uStack_388;
    uStack_41c = uStack_384;
    puVar9 = (undefined4 *)&DAT_001d3ac0;
    while( true ) {
                    /* try { // try from 0014a260 to 0014a272 has its CatchHandler @ 0014a566 */
      (*(code *)
        PTR__ZN73__LT_std__env__Vars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h404dd3a585398847E_001d9fe8
      )(&local_3c0,&local_428);
      if (local_3c0 == (undefined8 **)&DAT_8000000000000000) break;
      pcStack_450 = (code *)CONCAT44(uStack_3b4,uStack_3b8);
      local_458 = local_3c0;
      local_468 = local_398;
      local_478._0_4_ = local_3a8;
      local_478._4_4_ = uStack_3a4;
      uStack_470 = uStack_3a0;
      uStack_46c = uStack_39c;
      local_2f8 = &local_458;
      local_2f0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_2e0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_2d8 = &local_3d0;
      local_2d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdd05f0457f66b036E;
      local_408 = (code *)&DAT_001d3ac0;
      ppuStack_400 = (code **)0x3;
      local_3e8 = 0;
      local_3f8 = &local_2f8;
      local_3f0 = (code *)0x3;
      ppuStack_2e8 = (undefined **)&local_478;
                    /* try { // try from 0014a32c to 0014a331 has its CatchHandler @ 0014a544 */
      (*(code *)puVar3)(&local_408);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc5c724ad2d0f8cdE
                (CONCAT44(local_478._4_4_,(undefined4)local_478),CONCAT44(uStack_46c,uStack_470));
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc5c724ad2d0f8cdE
                (local_458,pcStack_450);
    }
                    /* try { // try from 0014a354 to 0014a35d has its CatchHandler @ 0014a4f6 */
    _ZN4core3ptr35drop_in_place_LT_std__env__Vars_GT_17h9afda0f4e6330cc3E(&local_428);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h8942d9781f61ec34E
              (&local_440);
  }
  else {
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h6ab0d41d54ad23b7E
              (&local_428,&local_440);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h375a3d63b869af12E
              (&local_458,&local_428);
    if (local_458 == (undefined8 **)&DAT_8000000000000000) {
      bVar8 = false;
    }
    else {
      bVar8 = false;
      do {
        ppuVar6 = local_448;
        pcVar5 = pcStack_450;
        ppuVar4 = local_458;
                    /* try { // try from 0014a3ed to 0014a3f7 has its CatchHandler @ 0014a52a */
        cVar7 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                          (pcStack_450,local_448);
        if (cVar7 == '\0') {
          local_2f8 = ppuVar4;
          local_2f0 = pcVar5;
          ppuStack_2e8 = ppuVar6;
                    /* try { // try from 0014a414 to 0014a428 has its CatchHandler @ 0014a525 */
          _ZN3std3env3var17h6ab100885101925dE(&local_3c0,&local_2f8);
          if (local_3c0 == (undefined8 **)&DAT_00000001) {
            _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17hf97566c2d50e25beE
                      (&local_3c0);
            goto LAB_0014a3bb;
          }
          local_468 = CONCAT44(uStack_3a4,local_3a8);
          local_478._0_4_ = uStack_3b8;
          local_478._4_4_ = uStack_3b4;
          uStack_470 = uStack_3b0;
          uStack_46c = uStack_3ac;
          ppuStack_400 = (undefined **)
                         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
          ;
          local_3f8 = (undefined8 **)&local_3d0;
          local_3f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdd05f0457f66b036E;
          local_2f8 = (undefined8 **)&DAT_00116010;
          local_2f0 = (code *)0x2;
          local_2d8 = (char **)0x0;
          ppuStack_2e8 = &local_408;
          local_2e0 = (code *)0x2;
                    /* try { // try from 0014a4d3 to 0014a4e0 has its CatchHandler @ 0014a4fb */
          local_408 = (code *)&local_478;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001d9fe0)(&local_2f8);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc5c724ad2d0f8cdE
                    (CONCAT44(local_478._4_4_,(undefined4)local_478),CONCAT44(uStack_46c,uStack_470)
                    );
        }
        else {
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc5c724ad2d0f8cdE
                    (ppuVar4,pcVar5);
LAB_0014a3bb:
          bVar8 = true;
        }
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h375a3d63b869af12E
                  (&local_458,&local_428);
      } while (local_458 != (undefined8 **)&DAT_8000000000000000);
    }
                    /* try { // try from 0014a1d6 to 0014a1f4 has its CatchHandler @ 0014a4f4 */
    puVar9 = &local_428;
    _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h523f585653073797E
              (&local_428);
    if (bVar8) {
      auVar10 = (*(code *)
                  PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_001d9fd0
                )(1);
      goto LAB_0014a36a;
    }
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = puVar9;
  auVar10 = auVar10 << 0x40;
LAB_0014a36a:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h641dbfcaab556ab2E
            (local_370);
  return auVar10;
}