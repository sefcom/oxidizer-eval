long _ZN6uu_pwd6uumain6uumain17h6a39c40d0e3615c6E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long local_370;
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
  long local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  long local_300;
  long local_2f8;
  long local_2e8 [89];
  
  (*(code *)PTR__ZN6uu_pwd6uu_app17h4454d6573b8ab8c1E_0020d590)(local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h33e7466411a157e4E
            (&local_338,local_2e8,param_1,param_2);
  if (local_338 == -0x8000000000000000) {
    lVar2 = (*(code *)
              PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0020d598
            )();
    return lVar2;
  }
  local_340 = local_308;
  local_350 = local_318;
  uStack_34c = uStack_314;
  uStack_348 = uStack_310;
  uStack_344 = uStack_30c;
  local_360 = local_328;
  uStack_35c = uStack_324;
  uStack_358 = uStack_320;
  uStack_354 = uStack_31c;
  local_370 = local_338;
  local_368 = local_330;
                    /* try { // try from 00160224 to 001602f6 has its CatchHandler @ 0016032f */
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020d5a0
          )(&local_370,&DAT_00112990,8);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0020d5a0
            )(&local_370,"logical",7);
    if (cVar1 == '\0') {
      _ZN3std3env3var17h23d362e75506305fE(local_2e8);
      if (local_2e8[0] != 0) {
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17hb3bbf00eaa3bcc22E
                  (local_2e8);
        goto LAB_0016027f;
      }
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17hb3bbf00eaa3bcc22E
                (local_2e8);
    }
    (*(code *)PTR__ZN6uu_pwd12logical_path17h67df90d7519c7ea2E_0020d5b0)(local_2e8);
  }
  else {
LAB_0016027f:
    (*(code *)PTR__ZN6uu_pwd13physical_path17h5c5da6b14d972300E_0020d5a8)(local_2e8);
  }
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hff586d9334aa0b44E
            (&local_338,local_2e8);
  lVar2 = local_330;
  if (local_338 != -0x8000000000000000) {
    local_300 = local_338;
    local_2f8 = local_330;
    uVar3 = _ZN6uucore4mods7display16println_verbatim17he333530693d8dcfeE(&local_300);
    lVar2 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h022d8ad013205a62E
                      (uVar3);
    if (lVar2 == 0) {
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hff8689e77a915942E
                (&local_370);
      return 0;
    }
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hff8689e77a915942E
            (&local_370);
  return lVar2;
}