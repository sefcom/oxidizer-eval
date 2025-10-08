long _ZN6uu_pwd6uumain6uumain17h7e973018fc311786E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  byte local_348 [8];
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  long local_310;
  long local_308;
  undefined8 local_300;
  long local_2f8;
  long local_2f0;
  undefined8 local_2e8;
  undefined local_2e0 [8];
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
  
  (*(code *)PTR__ZN6uu_pwd6uu_app17h1da5d5fec9c2ec70E_001deaa0)(local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h147bdea5e2f421dbE
            (local_348,local_2e0,param_1,param_2);
  local_2b0 = local_318;
  local_2c0 = local_328;
  uStack_2bc = uStack_324;
  uStack_2b8 = uStack_320;
  uStack_2b4 = uStack_31c;
  local_2d0 = local_338;
  uStack_2cc = uStack_334;
  uStack_2c8 = uStack_330;
  uStack_2c4 = uStack_32c;
  local_2d8 = local_340;
                    /* try { // try from 0014ec1b to 0014ecc9 has its CatchHandler @ 0014ed04 */
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001deab0
          )(local_2e0,"physicalNotFoundTimedOut",8);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001deab0
            )(local_2e0,"logical",7);
    if (cVar1 == '\0') {
      _ZN3std3env3var17h145d7c51e5c220dfE(local_348);
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h4661446f646e0a60E
                (local_348);
      if ((local_348[0] & 1) != 0) goto LAB_0014ec6a;
    }
    (*(code *)PTR__ZN6uu_pwd12logical_path17ha7064184a6fb3e0eE_001deac0)(local_348);
  }
  else {
LAB_0014ec6a:
    (*(code *)PTR__ZN6uu_pwd13physical_path17hc6deef78d56e1cc2E_001deab8)(local_348);
  }
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h397e8ca74eaab133E
            (&local_310,local_348);
  lVar3 = local_308;
  if (local_310 != -0x8000000000000000) {
    local_2f8 = local_310;
    local_2f0 = local_308;
    local_2e8 = local_300;
    uVar2 = _ZN6uucore4mods7display16println_verbatim17h8dd0391446490347E(&local_2f8);
    lVar3 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h43ceecaad6eb81d8E
                      (uVar2);
    if (lVar3 == 0) {
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h776974c4eaeedfc7E
                (local_2e0);
      return 0;
    }
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h776974c4eaeedfc7E
            (local_2e0);
  return lVar3;
}