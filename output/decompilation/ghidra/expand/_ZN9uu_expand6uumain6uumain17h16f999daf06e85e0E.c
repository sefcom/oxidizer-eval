undefined  [16]
_ZN9uu_expand6uumain6uumain17h16f999daf06e85e0E(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined local_3a8 [40];
  undefined8 uStack_380;
  long local_378 [2];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  long local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined local_2f0 [24];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  
  (*(code *)PTR__ZN9uu_expand6uu_app17h244b390e8990c65cE_00220a98)(&local_2d8);
                    /* try { // try from 00165e9e to 00165ebc has its CatchHandler @ 00166078 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h086b5f75690f53ffE(local_3a8,param_1,param_2);
  (*(code *)PTR__ZN9uu_expand16expand_shortcuts17h240214fc3584f89fE_00220aa0)(local_2f0,local_3a8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h05a6dc49d88ad115E
            (&local_340,&local_2d8,local_2f0);
  if (local_340 == -0x8000000000000000) {
    auVar6 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00220aa8
             )();
  }
  else {
    local_358 = uStack_320;
    uStack_354 = uStack_31c;
    uStack_350 = uStack_318;
    uStack_34c = uStack_314;
    local_368 = uStack_330;
    uStack_364 = uStack_32c;
    uStack_360 = uStack_328;
    uStack_35c = uStack_324;
    local_378[0] = local_340;
                    /* try { // try from 00165f2f to 00165f41 has its CatchHandler @ 00166069 */
    (*(code *)PTR__ZN9uu_expand7Options3new17h6622e02df3c5f858E_00220ab0)(&local_2d8,local_378);
    uVar4 = uStack_2b4;
    uVar3 = uStack_2b8;
    uVar2 = uStack_2c4;
    uVar1 = uStack_2c8;
    uStack_380 = uStack_2a8;
    uVar5 = uStack_380;
    uStack_380._0_4_ = (undefined4)uStack_2a8;
    uStack_380._4_4_ = (undefined4)((ulong)uStack_2a8 >> 0x20);
    uStack_380 = uVar5;
    if (CONCAT44(uStack_2d4,local_2d8) == -0x8000000000000000) {
      uStack_2b8 = local_2b0;
      uStack_2b4 = uStack_2ac;
      local_2b0 = (undefined4)uStack_380;
      uStack_2ac = uStack_380._4_4_;
      uStack_2c8 = local_2c0;
      uStack_2c4 = uStack_2bc;
      local_2c0 = uVar3;
      uStack_2bc = uVar4;
      local_2d8 = uStack_2d0;
      uStack_2d4 = uStack_2cc;
      uStack_2d0 = uVar1;
      uStack_2cc = uVar2;
                    /* try { // try from 00165f9b to 00165fa7 has its CatchHandler @ 0016605a */
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2b01c22c7ee70f11E(&local_2d8);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h45d799d7e0b060eeE
                (local_378);
      auVar6._8_8_ = &
                     PTR__ZN4core3ptr42drop_in_place_LT_uu_expand__ParseError_GT_17h76292d2a90cddb65E_0021a438
      ;
      auVar6._0_8_ = uVar5;
    }
    else {
      local_2f8 = local_290;
      local_308 = local_2a0;
      uStack_300 = uStack_298;
      local_338 = uStack_2d0;
      uStack_334 = uStack_2cc;
      uStack_330 = uStack_2c8;
      uStack_32c = uStack_2c4;
      uStack_328 = local_2c0;
      uStack_324 = uStack_2bc;
      uStack_320 = uStack_2b8;
      uStack_31c = uStack_2b4;
      uStack_318 = local_2b0;
      uStack_314 = uStack_2ac;
      local_310 = (undefined4)uStack_380;
      uStack_30c = uStack_380._4_4_;
                    /* try { // try from 00166006 to 00166010 has its CatchHandler @ 00166041 */
      auVar6 = (*(code *)PTR__ZN9uu_expand6expand17h37655ff09ea44da5E_00220ab8)(&local_340);
                    /* try { // try from 00166011 to 00166020 has its CatchHandler @ 0016603c */
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h45d799d7e0b060eeE
                (local_378);
      _ZN4core3ptr39drop_in_place_LT_uu_expand__Options_GT_17h9eade95a289b1eaaE(&local_340);
    }
  }
  return auVar6;
}