undefined  [16] _ZN7uu_link6uumain6uumain17h45262a3ada58109aE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined auVar9 [16];
  code *local_360;
  long *local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined8 local_328;
  code *local_320;
  long *local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  code *local_2e8;
  long *local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 local_2b0;
  
  (*(code *)PTR__ZN7uu_link6uu_app17h8c6c98521a86a24eE_0020fa08)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h066c7c93d2162a47E
            (&local_360,&local_2e8,param_1,param_2);
  if (local_360 == (code *)0x8000000000000000) {
    auVar9 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0020fa10
             )();
    return auVar9;
  }
  local_2f0 = local_330;
  local_300 = local_340;
  uStack_2fc = uStack_33c;
  uStack_2f8 = uStack_338;
  uStack_2f4 = uStack_334;
  local_310 = local_350;
  uStack_30c = uStack_34c;
  uStack_308 = uStack_348;
  uStack_304 = uStack_344;
  local_320 = local_360;
  local_318 = local_358;
  uVar6 = *(undefined8 *)PTR__ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E_0020fa18;
  uVar1 = *(undefined8 *)(PTR__ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E_0020fa18 + 8);
                    /* try { // try from 00161a4b to 00161afc has its CatchHandler @ 00161bd2 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h120e9fd3de4d454fE
            (&local_2e8,&local_320,uVar6,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17had88a321cb4048baE
            (&local_360,uVar6,uVar1,&local_2e8);
  local_2e0 = local_358;
  uVar7 = local_350;
  uVar8 = uStack_34c;
  if (local_360 == (code *)0x0) {
    local_340 = 0;
    uStack_33c = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    local_360 = _ZN4core3ops8function6FnOnce9call_once17h5106bbb4b638e43aE;
    local_328 = 0;
    local_2e0 = (long *)
                PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0020fa20
    ;
    local_330 = uVar6;
    uVar7 = (int)
            PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0020fa20
    ;
    uVar8 = (int)((ulong)
                  PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0020fa20
                 >> 0x20);
  }
  local_2d8 = CONCAT44(uVar8,uVar7);
  uStack_2d0 = CONCAT44(uStack_344,uStack_348);
  local_2e8 = local_360;
  local_2c8 = local_340;
  uStack_2c4 = uStack_33c;
  uStack_2c0 = uStack_338;
  uStack_2bc = uStack_334;
  local_2b8 = local_330;
  local_2b0 = local_328;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h9d2e1812b0eb8590E
            (&local_360,&local_2e8);
  if (CONCAT44(uStack_34c,local_350) == 0) {
    puVar5 = &DAT_00209a30;
    uVar6 = 0;
  }
  else {
    if (CONCAT44(uStack_34c,local_350) != 1) {
      uVar6 = *(undefined8 *)(*local_358 + 8);
      uVar1 = *(undefined8 *)(*local_358 + 0x10);
      pcVar2 = *(code **)(local_358[1] + 8);
      uVar3 = *(undefined8 *)(local_358[1] + 0x10);
                    /* try { // try from 00161b31 to 00161b71 has its CatchHandler @ 00161bc3 */
      uVar4 = _ZN3std2fs9hard_link17h27245533caa257e4E(uVar6,uVar1,pcVar2,uVar3);
      local_2e8 = pcVar2;
      local_2e0 = (long *)uVar3;
      local_2d8 = uVar6;
      uStack_2d0 = uVar1;
      auVar9 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h28cb617c0241e7b8E
                         (uVar4,&local_2e8);
                    /* try { // try from 00161b72 to 00161b81 has its CatchHandler @ 00161bd2 */
      _ZN4core3ptr74drop_in_place_LT_alloc__vec__Vec_LT__RF_std__ffi__os_str__OsString_GT__GT_17hab158a2c4b32ba65E
                (&local_360);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h7efe79aefed125daE
                (&local_320);
      return auVar9;
    }
    puVar5 = &DAT_00209a48;
    uVar6 = 1;
  }
                    /* try { // try from 00161bb8 to 00161bc0 has its CatchHandler @ 00161bc3 */
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E_0020f918)
            (uVar6,uVar6,puVar5);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}