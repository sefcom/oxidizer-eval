undefined8 _ZN8uu_tsort6uumain6uumain17h97be15f1635ca8bcE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined auVar9 [16];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined2 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
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
  undefined local_310 [8];
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  long local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  
  (*(code *)PTR__ZN8uu_tsort6uu_app17ha4d420519a23c26aE_001f1c68)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h2712c152c76f907cE
            (&local_3b8,&local_2f8,param_1,param_2);
  local_318 = local_388;
  local_328 = local_398;
  uStack_324 = uStack_394;
  uStack_320 = uStack_390;
  uStack_31c = uStack_38c;
  local_338 = uStack_3a8;
  uStack_334 = uStack_3a4;
  uStack_330 = (undefined4)uStack_3a0;
  uStack_32c = uStack_3a0._4_4_;
  local_348 = local_3b8;
  local_340 = uStack_3b0;
                    /* try { // try from 00157a4f to 00157b70 has its CatchHandler @ 00157d69 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h8ad808f2a71a8300E
            (&local_2f8,&local_348);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3cd29ce795df9bc3E(&local_2f8);
  if (lVar5 == 0) {
                    /* try { // try from 00157d16 to 00157d2e has its CatchHandler @ 00157d69 */
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_001f1b60)
              (&DAT_001183b5,0x19,&PTR_DAT_001ea788);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar6 = *(undefined8 *)(lVar5 + 8);
  uVar7 = *(undefined8 *)(lVar5 + 0x10);
  cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h02730a1c6542e747E
                    (uVar6,uVar7,&DAT_001183ce,1);
  if (cVar4 == '\0') {
    cVar4 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001f1c88)(uVar6,uVar7);
    if (cVar4 != '\0') {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001f1c90
      )(&local_3b8,lVar5);
      local_2f0 = (undefined4)local_3b8;
      uStack_2ec = local_3b8._4_4_;
      uStack_2e8 = (undefined4)uStack_3b0;
      uStack_2e4 = uStack_3b0._4_4_;
      local_2f8 = 0;
      uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h24dc63cecfcf9104E(&local_2f8);
      goto LAB_00157cf1;
    }
    _ZN3std2fs14read_to_string17h6cd40b6ea36e7f45E(&local_2f8,uVar6,uVar7);
    uVar6 = CONCAT44(uStack_2ec,local_2f0);
    if (local_2f8 == -0x8000000000000000) {
      uVar7 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001f1c80
              )(uVar6);
      goto LAB_00157cf1;
    }
  }
  else {
    uVar6 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001f1c78)();
    _ZN3std2io14read_to_string17h15b27336b722ccbcE(&local_2f8,uVar6);
    uVar6 = CONCAT44(uStack_2ec,local_2f0);
    if (local_2f8 == -0x8000000000000000) {
      uVar7 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001f1c80
              )(uVar6);
      goto LAB_00157cf1;
    }
  }
  lVar3 = local_2f8;
  uVar7 = CONCAT44(uStack_2e4,uStack_2e8);
                    /* try { // try from 00157b84 to 00157ba9 has its CatchHandler @ 00157d38 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001f1c90
  )(&local_3b8,lVar5);
  (*(code *)PTR__ZN8uu_tsort5Graph3new17ha5caf065ef75f119E_001f1c98)(&local_2f8,&local_3b8);
  _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h57d6bad6f545cdc0E
            (&uStack_3a8,uVar6,uVar7);
  local_3b8 = 0;
  local_380 = 1;
                    /* try { // try from 00157bcf to 00157bdd has its CatchHandler @ 00157d33 */
  _ZN4core4iter6traits8iterator8Iterator7collect17he88e1f753b28c06eE(&local_378,&local_3b8);
  puVar2 = PTR__ZN8uu_tsort5Graph8add_edge17h4310416a4e0d07eaE_001f1ca0;
  local_360 = local_370;
  local_358 = local_368;
  local_350 = 2;
  while( true ) {
                    /* try { // try from 00157c10 to 00157c36 has its CatchHandler @ 00157d3d */
    auVar9 = _ZN93__LT_core__slice__iter__Chunks_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha79187def6c19531E
                       (&local_360);
    puVar8 = auVar9._0_8_;
    if (puVar8 == (undefined8 *)0x0) {
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hfa5c966e6cbf810bE
                (local_378,local_370);
                    /* try { // try from 00157c46 to 00157c53 has its CatchHandler @ 00157d33 */
      (*(code *)PTR__ZN8uu_tsort5Graph9run_tsort17h43715d18696d47b7E_001f1ca8)(&local_2f8);
      _ZN4core3ptr36drop_in_place_LT_uu_tsort__Graph_GT_17h0753526b15370295E(&local_2f8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h67140223e6ae7745E(lVar3,uVar6);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hbfd76ed7452bcb59E
                (&local_348);
      return 0;
    }
    if (auVar9._8_8_ != 2) break;
    (*(code *)puVar2)(&local_2f8,*puVar8,puVar8[1],puVar8[2],puVar8[3]);
  }
                    /* try { // try from 00157c82 to 00157cbf has its CatchHandler @ 00157d31 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001f1c90
  )(local_310,lVar5);
  uStack_3a0 = local_300;
  uStack_3a8 = uStack_308;
  uStack_3a4 = uStack_304;
  local_3b8 = 1;
  uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h24dc63cecfcf9104E(&local_3b8);
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hfa5c966e6cbf810bE
            (local_378,local_370);
  _ZN4core3ptr36drop_in_place_LT_uu_tsort__Graph_GT_17h0753526b15370295E(&local_2f8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h67140223e6ae7745E(lVar3,uVar6);
LAB_00157cf1:
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hbfd76ed7452bcb59E
            (&local_348);
  return uVar7;
}