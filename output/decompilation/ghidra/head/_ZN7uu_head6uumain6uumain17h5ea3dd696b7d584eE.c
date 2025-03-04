undefined  [16] _ZN7uu_head6uumain6uumain17h5ea3dd696b7d584eE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 local_350;
  int local_348;
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
  undefined8 local_318;
  undefined local_310 [16];
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  int local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  
  (*(code *)PTR__ZN7uu_head6uu_app17h3a0d0603aeae9cb6E_00230c38)(&local_2d8);
                    /* try { // try from 0016c98e to 0016c99b has its CatchHandler @ 0016cb03 */
  _ZN7uu_head11arg_iterate17h2f4030183cfe2e94E(&local_368,param_1,param_2);
  auVar2._8_8_ = local_358;
  auVar2._0_8_ = CONCAT44(uStack_35c,uStack_360);
  if (CONCAT44(uStack_364,local_368) == 0) {
    _ZN12clap_builder7builder7command7Command20try_get_matches_from17hadd186c33093956eE
              (&local_348,&local_2d8,CONCAT44(uStack_35c,uStack_360),local_358);
    if (CONCAT44(uStack_344,local_348) == -0x8000000000000000) {
      auVar2 = (*(code *)
                 PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00230c40
               )();
    }
    else {
      local_2e0 = local_318;
      local_2f0 = local_328;
      uStack_2ec = uStack_324;
      uStack_2e8 = uStack_320;
      uStack_2e4 = uStack_31c;
      local_300 = local_338;
      uStack_2fc = uStack_334;
      uStack_2f8 = uStack_330;
      uStack_2f4 = uStack_32c;
                    /* try { // try from 0016ca2c to 0016ca71 has its CatchHandler @ 0016caf4 */
      (*(code *)PTR__ZN7uu_head11HeadOptions8get_from17h1adb6e5857002fb6E_00230c48)
                (&local_2d8,local_310);
      if (local_2d8 == 4) {
        local_368 = uStack_2d0;
        uStack_364 = uStack_2cc;
        uStack_360 = uStack_2c8;
        uStack_35c = uStack_2c4;
        local_350 = 1;
        uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hec34c9cb33ab5596E(&local_368);
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h7f3766ce6d351c3bE
                  (local_310);
        auVar2._8_8_ = &
                       PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h77b9ed1e486c1ea2E_0022a490
        ;
        auVar2._0_8_ = uVar1;
      }
      else {
        local_328 = local_2b8;
        uStack_324 = uStack_2b4;
        uStack_320 = uStack_2b0;
        uStack_31c = uStack_2ac;
        local_338 = uStack_2c8;
        uStack_334 = uStack_2c4;
        uStack_330 = uStack_2c0;
        uStack_32c = uStack_2bc;
        local_348 = local_2d8;
        uStack_344 = uStack_2d4;
        uStack_340 = uStack_2d0;
        uStack_33c = uStack_2cc;
                    /* try { // try from 0016caaf to 0016cab9 has its CatchHandler @ 0016cae5 */
        auVar2 = (*(code *)PTR__ZN7uu_head7uu_head17h50c9b533b8c9e19eE_00230c50)(&local_348);
                    /* try { // try from 0016caba to 0016cac9 has its CatchHandler @ 0016caf4 */
        _ZN4core3ptr41drop_in_place_LT_uu_head__HeadOptions_GT_17hf8ca7b2a25e80601E(&local_348);
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h7f3766ce6d351c3bE
                  (local_310);
      }
    }
  }
  else {
    _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17h9d9eab11aa1d8814E
              (&local_2d8);
  }
  return auVar2;
}