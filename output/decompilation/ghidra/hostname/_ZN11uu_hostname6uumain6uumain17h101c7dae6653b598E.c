undefined8 _ZN11uu_hostname6uumain6uumain17h101c7dae6653b598E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_318;
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
  undefined8 local_2e0;
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
  
  (*(code *)PTR__ZN11uu_hostname6uu_app17hbac75410cf2297c2E_001eb738)(&local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h8864a067f6a4a499E
            (&local_318,&local_2e0,param_1,param_2);
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
  uVar3 = *(undefined8 *)PTR__ZN11uu_hostname8OPT_HOST17h449c299a70740049E_001eb748;
  uVar1 = *(undefined8 *)(PTR__ZN11uu_hostname8OPT_HOST17h449c299a70740049E_001eb748 + 8);
                    /* try { // try from 001511f3 to 0015123f has its CatchHandler @ 00151263 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h30336fc30241893dE
            (&local_318,&local_2e0,uVar3,uVar1);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h2f6d677897803212E
                    (uVar3,uVar1,&local_318);
  if (lVar2 == 0) {
    uVar3 = (*(code *)PTR__ZN11uu_hostname16display_hostname17h96c3f430138717a0E_001eb750)
                      (&local_2e0);
  }
  else {
    uVar3 = _ZN8hostname3set17h8f209346690fd4b1E(lVar2);
    uVar3 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hee0302ee3c19f076E
                      (uVar3);
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hb284bcbef01399f6E
            (&local_2e0);
  return uVar3;
}