undefined8 _ZN7uu_link6uumain6uumain17h1a8ce8d116eb834eE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined local_330 [16];
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
  undefined *local_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  
  (*(code *)PTR__ZN7uu_link6uu_app17h418310be0040ada0E_001e2e70)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h13d565a3a5c67bbfE
            (&local_370,&local_2f8,param_1,param_2);
  local_300 = local_340;
  local_310 = local_350;
  uStack_30c = uStack_34c;
  uStack_308 = uStack_348;
  uStack_304 = uStack_344;
  local_320 = local_360;
  uStack_31c = uStack_35c;
  uStack_318 = uStack_358;
  uStack_314 = uStack_354;
  uVar7 = *(undefined8 *)PTR__ZN7uu_link7options5FILES17hf2424eaf39b3eae1E_001e2e80;
  uVar1 = *(undefined8 *)(PTR__ZN7uu_link7options5FILES17hf2424eaf39b3eae1E_001e2e80 + 8);
                    /* try { // try from 0015204d to 00152116 has its CatchHandler @ 001521e3 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hdbb453eb36b18045E
            (&local_2f8,local_330,uVar7,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hc7956110ac9be2e8E
            (&local_370,uVar7,uVar1,&local_2f8);
  if (CONCAT44(uStack_36c,local_370) == 0) {
    local_2f8 = _ZN4core3ops8function6FnOnce9call_once17hf4ee4ccd9a4a864dE;
    uStack_2f0 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001e2e88
    ;
    local_2e8 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_001e2e88
    ;
    uStack_2e0 = 0;
    uStack_2d0 = 0;
    uStack_2c0 = 0;
  }
  else {
    local_2e8 = (undefined *)CONCAT44(uStack_35c,local_360);
    uStack_2e0 = CONCAT44(uStack_354,uStack_358);
    uStack_2d0 = CONCAT44(uStack_344,uStack_348);
    local_2c8 = local_340;
    uStack_2c0 = uStack_338;
    local_2f8 = (code *)CONCAT44(uStack_36c,local_370);
    uStack_2f0 = (undefined *)CONCAT44(uStack_364,uStack_368);
  }
  _ZN4core4iter6traits8iterator8Iterator7collect17he6a5d57ffcfdab58E(&local_370,&local_2f8);
  plVar5 = (long *)CONCAT44(uStack_364,uStack_368);
  if (CONCAT44(uStack_35c,local_360) == 0) {
    puVar8 = &DAT_001dc040;
    uVar7 = 0;
  }
  else {
    if (CONCAT44(uStack_35c,local_360) != 1) {
      uVar7 = *(undefined8 *)(*plVar5 + 8);
      uVar1 = *(undefined8 *)(*plVar5 + 0x10);
      uVar2 = *(undefined8 *)(plVar5[1] + 8);
      uVar3 = *(undefined8 *)(plVar5[1] + 0x10);
                    /* try { // try from 0015214b to 0015218b has its CatchHandler @ 001521e8 */
      uVar6 = _ZN3std2fs9hard_link17h2f74410233768cf7E(uVar7,uVar1,uVar2,uVar3);
      local_2f8 = (code *)uVar2;
      uStack_2f0 = (undefined *)uVar3;
      local_2e8 = (undefined *)uVar7;
      uStack_2e0 = uVar1;
      uVar7 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hc3ad62926789bbd2E
                        (uVar6,&local_2f8);
      _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h7c77565432162c2cE
                (CONCAT44(uStack_36c,local_370),plVar5);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8ab534aea64d6c27E
                (local_330);
      return uVar7;
    }
    puVar8 = &DAT_001dc058;
    uVar7 = 1;
  }
                    /* try { // try from 001521d8 to 001521e0 has its CatchHandler @ 001521e8 */
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001e2d50)
            (uVar7,uVar7,puVar8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}