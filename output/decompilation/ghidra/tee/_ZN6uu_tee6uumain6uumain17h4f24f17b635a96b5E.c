undefined  [16] _ZN6uu_tee6uumain6uumain17h4f24f17b635a96b5E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined uVar4;
  undefined uVar5;
  char cVar6;
  long lVar7;
  undefined uVar8;
  undefined4 *puVar9;
  undefined auVar10 [16];
  undefined8 local_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 uStack_380;
  undefined local_378 [16];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  
  puVar9 = &local_2e8;
  (*(code *)PTR__ZN6uu_tee6uu_app17hd12bc0652bb3e89dE_002235e8)(puVar9);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h11c1e228193462c3E
            (&local_340,puVar9,param_1,param_2);
  if (CONCAT44(uStack_33c,local_340) == -0x8000000000000000) {
    auVar10 = (*(code *)
                PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_002235f0
              )();
    return auVar10;
  }
  local_358 = local_320;
  uStack_354 = uStack_31c;
  uStack_350 = uStack_318;
  uStack_34c = uStack_314;
  local_368 = local_330;
  uStack_364 = uStack_32c;
  uStack_360 = uStack_328;
  uStack_35c = uStack_324;
                    /* try { // try from 00166a6c to 00166b21 has its CatchHandler @ 00166d47 */
  uVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002235f8
          )(local_378,&DAT_0010b3b3,6);
  uVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002235f8
          )(local_378,&DAT_0010b3b9,0x11);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h5619aa58ea2d0a49E
            (&local_2e8,local_378);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h12e60ca066924c5fE
            (&local_340,"file",4,&local_2e8);
  if (CONCAT44(uStack_33c,local_340) == 0) {
    local_390 = 0;
    uStack_388 = 8;
    uStack_384 = 0;
    uStack_380 = 0;
  }
  else {
    local_2b8 = local_310;
    uStack_2b4 = uStack_30c;
    uStack_2b0 = uStack_308;
    uStack_2ac = uStack_304;
    local_2c8 = local_320;
    uStack_2c4 = uStack_31c;
    uStack_2c0 = uStack_318;
    uStack_2bc = uStack_314;
    uStack_2d0 = uStack_328;
    uStack_2cc = uStack_324;
    local_2e8 = local_340;
    uStack_2e4 = uStack_33c;
    uStack_2e0 = uStack_338;
    uStack_2dc = uStack_334;
    _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h4a98ffca8b57971dE
              (&local_300,&local_2e8);
    uStack_388 = local_2f8;
    uStack_384 = uStack_2f4;
    uStack_380 = CONCAT44(uStack_2ec,uStack_2f0);
    local_390 = local_300;
  }
                    /* try { // try from 00166b59 to 00166c43 has its CatchHandler @ 00166d38 */
  cVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002235f8
          )(local_378,&DAT_0010b3ca,0x12);
  if (cVar6 == '\0') {
    cVar6 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E_00223600
            )(local_378,&DAT_0010b391,0xc);
    uVar8 = 4;
    if (cVar6 == '\0') goto LAB_00166c4e;
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17had8f468e20909500E
              (&local_2e8,local_378);
    lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5d8204b5c404fdeeE
                      (&DAT_0010b391,0xc,&local_2e8);
    if (lVar7 != 0) {
      uVar1 = *(undefined8 *)(lVar7 + 8);
      puVar9 = *(undefined4 **)(lVar7 + 0x10);
      cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf4afa01266150c3cE
                        (uVar1,puVar9,&DAT_0010aaf4);
      if (cVar6 == '\0') {
        cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf4afa01266150c3cE
                          (uVar1,puVar9,&DAT_0010b39d,0xb);
        uVar8 = 1;
        if (cVar6 == '\0') {
          cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf4afa01266150c3cE
                            (uVar1,puVar9,
                             "exitERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG"
                             ,4);
          uVar8 = 2;
          if (cVar6 == '\0') {
            cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf4afa01266150c3cE
                              (uVar1,puVar9,&DAT_0010b3a8,0xb);
            uVar8 = 3;
            if (cVar6 == '\0') {
                    /* try { // try from 00166cdd to 00166cf5 has its CatchHandler @ 00166d38 */
              (*(code *)PTR__ZN4core9panicking5panic17h8c3a660c3523e4a4E_00223618)
                        ("internal error: entered unreachable codeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE"
                         ,0x28,&PTR_DAT_0021d090);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
        }
      }
      else {
        uVar8 = 0;
      }
      goto LAB_00166c4e;
    }
  }
  uVar8 = 1;
LAB_00166c4e:
  uVar3 = uStack_2d0;
  local_2e8 = (undefined4)local_390;
  uStack_2e4 = local_390._4_4_;
  uStack_2e0 = uStack_388;
  uStack_2dc = uStack_384;
  local_2d8 = uStack_380;
  uStack_2d0._3_1_ = SUB41(uVar3,3);
  uStack_2d0._0_3_ = CONCAT12(uVar8,CONCAT11(uVar5,uVar4));
                    /* try { // try from 00166c7e to 00166c8b has its CatchHandler @ 00166d26 */
  lVar7 = (*(code *)PTR__ZN6uu_tee3tee17hda7657f7329b70fcE_00223608)(&local_2e8);
  if (lVar7 == 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = puVar9;
    auVar10 = auVar10 << 0x40;
  }
  else {
                    /* try { // try from 00166c94 to 00166c9e has its CatchHandler @ 00166cf8 */
    auVar10 = (*(code *)
                PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E_00223610
              )(1);
  }
                    /* try { // try from 00166caa to 00166cb6 has its CatchHandler @ 00166d0f */
  _ZN4core3ptr36drop_in_place_LT_uu_tee__Options_GT_17h96fa9444c1876fc5E(&local_2e8);
                    /* try { // try from 00166cb7 to 00166cc0 has its CatchHandler @ 00166d0a */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h706c76a15fabed08E
            (local_378);
  _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc4231765db700f47E
            (lVar7);
  return auVar10;
}