void _ZN9uu_whoami6uumain6uumain17h6c0ddbda8c01a844E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_370;
  undefined8 local_368;
  undefined8 local_360;
  long local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  long local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  long local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  
  (*(code *)PTR__ZN9uu_whoami6uu_app17h74b0fb3ed938f565E_0020b718)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hc9ef77e42fd4ef1dE
            (&local_320,&local_2e8,param_1,param_2);
  if (local_320 == -0x8000000000000000) {
    (*(code *)
      PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0020b720
    )();
  }
  else {
    local_328 = local_2f0;
    local_338 = local_300;
    uStack_334 = uStack_2fc;
    uStack_330 = uStack_2f8;
    uStack_32c = uStack_2f4;
    local_348 = local_310;
    uStack_344 = uStack_30c;
    uStack_340 = uStack_308;
    uStack_33c = uStack_304;
    local_358 = local_320;
    local_350 = local_318;
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h61cf24ab013da276E
              (&local_358);
    (*(code *)PTR__ZN9uu_whoami6whoami17h4c4b8e85df7041a6E_0020b728)(&local_2e8);
    if (local_2e8 != -0x8000000000000000) {
      local_370 = local_2e8;
      local_368 = local_2e0;
      local_360 = local_2d8;
      uVar1 = _ZN6uucore4mods7display16println_verbatim17h0dd006cf780b5f2cE(&local_370);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h986f92b3628ea713E
                (uVar1);
    }
  }
  return;
}