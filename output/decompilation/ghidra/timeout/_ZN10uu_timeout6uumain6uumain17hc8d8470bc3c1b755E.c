undefined  [16]
_ZN10uu_timeout6uumain6uumain17hc8d8470bc3c1b755E(undefined8 param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined auVar5 [16];
  long local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 local_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 local_2e4;
  long local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  
  (*(code *)PTR__ZN10uu_timeout6uu_app17hbfb08d0d02c89d09E_0021a9f8)(&local_2e0);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h41ad35f95685d978E
            (&local_360,&local_2e0,param_1,param_2);
  local_2f4 = local_33c;
  uStack_2f0 = uStack_338;
  uStack_2ec = uStack_334;
  uStack_2e8 = uStack_330;
  local_2e4 = local_32c;
  local_318 = local_360;
  local_310 = local_358;
  local_308 = local_350;
                    /* try { // try from 0016566a to 0016567c has its CatchHandler @ 00165765 */
  (*(code *)PTR__ZN10uu_timeout6Config4from17hed1b4ca69d4616c5E_0021aa00)(&local_2e0,&local_318);
  auVar5._8_8_ = local_2d0;
  auVar5._0_8_ = local_2d8;
  if (local_2e0 != -0x8000000000000000) {
    local_328 = local_2a8;
    uStack_324 = uStack_2a4;
    uStack_320 = uStack_2a0;
    uVar2 = uStack_320;
    uStack_31c = uStack_29c;
    uStack_338 = local_2b8;
    uStack_334 = uStack_2b4;
    uStack_330 = uStack_2b0;
    local_32c = uStack_2ac;
    uStack_348 = local_2c8;
    uStack_344 = uStack_2c4;
    uStack_340 = uStack_2c0;
    local_33c = uStack_2bc;
    local_360 = local_2e0;
    local_358 = local_2d8;
    local_350 = (undefined4)local_2d0;
    uStack_34c = (undefined4)((ulong)local_2d0 >> 0x20);
    uStack_320._0_1_ = (undefined)uStack_2a0;
    uVar1 = (undefined)uStack_320;
    uStack_320._1_1_ = (undefined)((uint)uStack_2a0 >> 8);
    uVar3 = uStack_320._1_1_;
    uStack_320._2_1_ = (undefined)((uint)uStack_2a0 >> 0x10);
    uVar4 = uStack_320._2_1_;
    uStack_320 = uVar2;
                    /* try { // try from 00165711 to 00165728 has its CatchHandler @ 00165756 */
    auVar5 = (*(code *)PTR__ZN10uu_timeout7timeout17he6dc1fc585e5d981E_0021aa08)
                       (local_2d8,local_2d0,CONCAT44(uStack_2c4,local_2c8),uStack_2c0,
                        CONCAT44(uStack_2a4,local_2a8),CONCAT44(uStack_2b4,local_2b8),uStack_2b0,
                        uVar1,uVar3,uVar4);
    _ZN4core3ptr39drop_in_place_LT_uu_timeout__Config_GT_17h3c83412a368ec9e4E(&local_360);
  }
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he092b279c01bbc7dE
            (&local_318);
  return auVar5;
}