undefined  [16] _ZN6uu_tac6uumain6uumain17h2485790ee37c4198E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined uVar4;
  undefined uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  char *pcVar9;
  undefined auVar10 [16];
  undefined local_3b0 [16];
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined local_2f8 [8];
  undefined8 local_2f0;
  undefined8 local_2e8;
  
  (*(code *)PTR__ZN6uu_tac6uu_app17h578904e159ae3f9fE_00406680)(local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h4ad0fc13a933eb50E
            (&local_378,local_2f8,param_1,param_2);
  if (CONCAT44(uStack_374,local_378) == -0x8000000000000000) {
    auVar10 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00406688
              )();
    return auVar10;
  }
  local_390 = local_358;
  uStack_38c = uStack_354;
  uStack_388 = uStack_350;
  uStack_384 = uStack_34c;
  local_3a0 = local_368;
  uStack_39c = uStack_364;
  uStack_398 = uStack_360;
  uStack_394 = uStack_35c;
                    /* try { // try from 00252dd1 to 00252f25 has its CatchHandler @ 00252fa2 */
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00406698
          )(local_3b0,*(undefined8 *)PTR__ZN6uu_tac7options6BEFORE17h5ea3e93d3c7a2a31E_00406690,
            *(undefined8 *)(PTR__ZN6uu_tac7options6BEFORE17h5ea3e93d3c7a2a31E_00406690 + 8));
  uVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00406698
          )(local_3b0,*(undefined8 *)PTR__ZN6uu_tac7options5REGEX17hba9800e3ae0d6749E_004066a0,
            *(undefined8 *)(PTR__ZN6uu_tac7options5REGEX17hba9800e3ae0d6749E_004066a0 + 8));
  uVar1 = *(undefined8 *)PTR__ZN6uu_tac7options9SEPARATOR17h4e8a4f2b5dbc5554E_004066a8;
  uVar2 = *(undefined8 *)(PTR__ZN6uu_tac7options9SEPARATOR17h4e8a4f2b5dbc5554E_004066a8 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hb332f6936fb5da9fE
            (local_2f8,local_3b0,uVar1,uVar2);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he549b6506d706f45E
                    (uVar1,uVar2,local_2f8);
  if (lVar6 == 0) {
    pcVar9 = "\n";
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x10);
    if (lVar8 == 0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = *(char **)(lVar6 + 8);
    }
  }
  uVar1 = *(undefined8 *)PTR__ZN6uu_tac7options4FILE17ha26efb49879adcc6E_004066b0;
  uVar2 = *(undefined8 *)(PTR__ZN6uu_tac7options4FILE17ha26efb49879adcc6E_004066b0 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h6b583678377047feE
            (local_2f8,local_3b0,uVar1,uVar2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hbb9b448b81998103E
            (&local_378,uVar1,uVar2,local_2f8);
  if (CONCAT44(uStack_374,local_378) == 0) {
    puVar7 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE();
    if (puVar7 == (undefined8 *)0x0) {
                    /* try { // try from 00252f7e to 00252f8d has its CatchHandler @ 00252fa2 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E_004066c0)(8,0x10);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *puVar7 = &DAT_00163ca2;
    puVar7[1] = 1;
    _ZN5alloc5slice4hack8into_vec17h3dd85526ca90bde5E(local_2f8,puVar7,1);
  }
  else {
    local_308 = local_348;
    uStack_304 = uStack_344;
    uStack_300 = uStack_340;
    uStack_2fc = uStack_33c;
    local_318 = local_358;
    uStack_314 = uStack_354;
    uStack_310 = uStack_350;
    uStack_30c = uStack_34c;
    local_328 = local_368;
    uStack_324 = uStack_364;
    uStack_320 = uStack_360;
    uStack_31c = uStack_35c;
    local_338 = local_378;
    uStack_334 = uStack_374;
    uStack_330 = uStack_370;
    uStack_32c = uStack_36c;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h72f0db188805d051E
              (local_2f8,&local_338);
  }
                    /* try { // try from 00252f36 to 00252f48 has its CatchHandler @ 00252f90 */
  auVar10 = (*(code *)PTR__ZN6uu_tac3tac17h3cfa8e66554e074dE_004066b8)
                      (local_2f0,local_2e8,uVar4,uVar5,pcVar9,lVar8 + (ulong)(lVar8 == 0));
                    /* try { // try from 00252f49 to 00252f5b has its CatchHandler @ 00252fa2 */
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h3b403ca4fc6daa2dE(local_2f8);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hf06510748f9f349fE
            (local_3b0);
  return auVar10;
}