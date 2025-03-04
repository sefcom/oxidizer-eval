undefined  [16]
_ZN11uu_hostname6uumain6uumain17hd29ed1ca8d950a5eE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  long local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  long local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  
  (*(code *)PTR__ZN11uu_hostname6uu_app17hb6e249c122554ffeE_0021bac8)(&local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h87cf345e6a930018E
            (&local_318,&local_2e0,param_1,param_2);
  if (local_318 == -0x8000000000000000) {
    auVar4 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0021bad0
             )();
    return auVar4;
  }
  local_2b0 = local_2e8;
  local_2c0 = local_2f8;
  uStack_2bc = uStack_2f4;
  uStack_2b8 = uStack_2f0;
  uStack_2b4 = uStack_2ec;
  local_2d0 = local_308;
  uStack_2cc = uStack_304;
  uStack_2c8 = uStack_300;
  uStack_2c4 = uStack_2fc;
  local_2e0 = local_318;
  local_2d8 = local_310;
  uVar3 = *(undefined8 *)PTR__ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E_0021bad8;
  uVar1 = *(undefined8 *)(PTR__ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E_0021bad8 + 8);
                    /* try { // try from 00160da1 to 00160de3 has its CatchHandler @ 00160e07 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hfe4358f699f5b9c3E
            (&local_318,&local_2e0,uVar3,uVar1);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hcb60a1c181f5a1cbE
                    (uVar3,uVar1,&local_318);
  if (lVar2 == 0) {
    auVar4 = (*(code *)PTR__ZN11uu_hostname16display_hostname17hb7e83080e266b2caE_0021bae0)
                       (&local_2e0);
  }
  else {
    uVar3 = _ZN8hostname3set17h6e7654145cf08af4E(lVar2);
    auVar4 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17ha754b84eb7781c97E
                       (uVar3);
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hb1b2c5783d635b8fE
            (&local_2e0);
  return auVar4;
}