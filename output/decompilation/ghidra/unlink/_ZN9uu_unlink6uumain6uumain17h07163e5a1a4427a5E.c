undefined8 _ZN9uu_unlink6uumain6uumain17h07163e5a1a4427a5E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  
  (*(code *)PTR__ZN9uu_unlink6uu_app17h899c20ea912880cfE_001e2078)(&local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h88a7c844973a900cE
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
  uVar5 = *(undefined8 *)PTR__ZN9uu_unlink8OPT_PATH17ha9557250b548e51fE_001e2088;
  uVar1 = *(undefined8 *)(PTR__ZN9uu_unlink8OPT_PATH17ha9557250b548e51fE_001e2088 + 8);
                    /* try { // try from 00151c13 to 00151c59 has its CatchHandler @ 00151c8d */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0b7feb4c0c219a3aE
            (&local_318,&local_2e0,uVar5,uVar1);
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h250f400218296885E
                    (uVar5,uVar1,&local_318);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 8);
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    uVar4 = _ZN3std2fs11remove_file17h5f33a0d9389a4fbaE(uVar5,uVar1);
    uVar5 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hfcc3e6e004d30068E
                      (uVar4,uVar5,uVar1);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hda93590babb6a1d7E
              (&local_2e0);
    return uVar5;
  }
                    /* try { // try from 00151c7e to 00151c8a has its CatchHandler @ 00151c8d */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001e2090)(&DAT_001db290);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}