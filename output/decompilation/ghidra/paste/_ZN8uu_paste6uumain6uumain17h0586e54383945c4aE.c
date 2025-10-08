undefined  [16]
_ZN8uu_paste6uumain6uumain17h0586e54383945c4aE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined uVar2;
  char cVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined local_320 [16];
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
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
  
  (*(code *)PTR__ZN8uu_paste6uu_app17hcf547b4b95fcc990E_001e52a8)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h91a5e3ed0fb42002E
            (&local_360,&local_2e8,param_1,param_2);
  local_300 = local_340;
  uStack_2fc = uStack_33c;
  uStack_2f8 = uStack_338;
  uStack_2f4 = uStack_334;
  local_310 = local_350;
  uStack_30c = uStack_34c;
  uStack_308 = uStack_348;
  uStack_304 = uStack_344;
                    /* try { // try from 001521e2 to 0015229b has its CatchHandler @ 00152340 */
  uVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e52b8
          )(local_320,"serial",6);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hd6c560e218986f8aE
            (&local_2e8,local_320);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h649468f8bdc4c194E(&local_2e8);
  if (lVar4 == 0) {
    ppuVar5 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001de230;
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hfe70aa5b22204a80E
              (&local_2e8,local_320);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h0a91321be2d51ed5E(&local_360,&local_2e8);
    if (CONCAT44(uStack_35c,local_360) != 0) {
      local_2b8 = local_330;
      uStack_2b4 = uStack_32c;
      uStack_2b0 = uStack_328;
      uStack_2ac = uStack_324;
      local_2c8 = local_340;
      uStack_2c4 = uStack_33c;
      uStack_2c0 = uStack_338;
      uStack_2bc = uStack_334;
      uStack_2d0 = uStack_348;
      uStack_2cc = uStack_344;
      local_2e8 = local_360;
      uStack_2e4 = uStack_35c;
      uStack_2e0 = uStack_358;
      uStack_2dc = uStack_354;
      _ZN4core4iter6traits8iterator8Iterator7collect17h99bc6ca4579173b5E(&local_360,&local_2e8);
                    /* try { // try from 0015229c to 001522b2 has its CatchHandler @ 00152331 */
      cVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e52b8
              )(local_320,"zero-terminatedError flushing stdout: ",0xf);
      local_2e8 = local_360;
      uStack_2e4 = uStack_35c;
      uStack_2e0 = uStack_358;
      uStack_2dc = uStack_354;
      uVar6 = 10;
      if (cVar3 != '\0') {
        uVar6 = 0;
      }
                    /* try { // try from 001522e3 to 001522f3 has its CatchHandler @ 0015232f */
      auVar7 = (*(code *)PTR__ZN8uu_paste5paste17hd569a65ca9908b3dE_001e52c0)
                         (&local_2e8,uVar2,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),
                          uVar6);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h318e8695e56b4d8aE
                (local_320);
      return auVar7;
    }
    ppuVar5 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001de248;
  }
                    /* try { // try from 00152327 to 0015232c has its CatchHandler @ 00152340 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001e52c8)(ppuVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}