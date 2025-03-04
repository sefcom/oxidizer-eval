undefined  [16]
_ZN9uu_unlink6uumain6uumain17h07e5eaf89cff3dc3E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
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
  
  (*(code *)PTR__ZN9uu_unlink6uu_app17hdbcae0fc1396218fE_0020e518)(&local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17ha818702dab301bbfE
            (&local_318,&local_2e0,param_1,param_2);
  if (local_318 == -0x8000000000000000) {
    auVar6 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0020e520
             )();
    return auVar6;
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
  uVar1 = *(undefined8 *)PTR__ZN9uu_unlink8OPT_PATH17h6cccbb55871a7469E_0020e528;
  uVar2 = *(undefined8 *)(PTR__ZN9uu_unlink8OPT_PATH17h6cccbb55871a7469E_0020e528 + 8);
                    /* try { // try from 00161d21 to 00161d67 has its CatchHandler @ 00161d9a */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h58b3520effad2bf6E
            (&local_318,&local_2e0,uVar1,uVar2);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h40baddc8e029e47eE
                    (uVar1,uVar2,&local_318);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    uVar5 = _ZN3std2fs11remove_file17hbd709b316fa4f879E(uVar1,uVar2);
    auVar6 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h611ae2e89287ed88E
                       (uVar5,uVar1,uVar2);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h5aacfee888f9a35cE
              (&local_2e0);
    return auVar6;
  }
                    /* try { // try from 00161d8b to 00161d97 has its CatchHandler @ 00161d9a */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h0e11329e76906eaaE_0020e530)(&DAT_00208630);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}