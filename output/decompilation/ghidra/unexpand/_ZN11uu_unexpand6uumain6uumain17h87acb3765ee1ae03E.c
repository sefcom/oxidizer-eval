undefined  [16]
_ZN11uu_unexpand6uumain6uumain17h87acb3765ee1ae03E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auStack_398 [8];
  undefined8 local_390;
  undefined8 local_388;
  long local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  long local_328 [2];
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined local_2f0 [24];
  long local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  
  _ZN6uucore4Args14collect_ignore17h93efccc5a7b07e2aE(auStack_398,param_1,param_2);
                    /* try { // try from 00153dc8 to 00153dd5 has its CatchHandler @ 00153f69 */
  (*(code *)PTR__ZN11uu_unexpand6uu_app17h8be29c5c59f3b421E_001ee948)(&local_2d8);
                    /* try { // try from 00153de0 to 00153ded has its CatchHandler @ 00153f51 */
  (*(code *)PTR__ZN11uu_unexpand16expand_shortcuts17hf9e317c33afe99dbE_001ee950)
            (local_2f0,local_390,local_388);
                    /* try { // try from 00153dee to 00153e07 has its CatchHandler @ 00153f4f */
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h603c0fa4ddfb7af4E
            (&local_380,&local_2d8,local_2f0);
  local_2f8 = local_350;
  local_308 = (undefined4)local_360;
  uStack_304 = local_360._4_4_;
  uStack_300 = (undefined4)uStack_358;
  uStack_2fc = uStack_358._4_4_;
  local_318 = uStack_370;
  uStack_314 = uStack_36c;
  uStack_310 = (undefined4)uStack_368;
  uStack_30c = uStack_368._4_4_;
  local_328[0] = local_380;
                    /* try { // try from 00153e5c to 00153ea9 has its CatchHandler @ 00153f40 */
  (*(code *)PTR__ZN11uu_unexpand7Options3new17hf1bf0cc696905b94E_001ee960)(&local_2d8,local_328);
  local_348 = local_2d0;
  uStack_344 = uStack_2cc;
  uStack_340 = uStack_2c8;
  uStack_33c = uStack_2c4;
  local_338 = local_2c0;
  if (local_2d8 == -0x8000000000000000) {
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he39bb9a86a8b17eeE(&local_348);
                    /* try { // try from 00153eaa to 00153eb6 has its CatchHandler @ 00153f69 */
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h90d712bc54ad0d6dE
              (local_328);
    auVar2._8_8_ = &
                   PTR__ZN4core3ptr44drop_in_place_LT_uu_unexpand__ParseError_GT_17h28c0fa568c490144E_001e7400
    ;
    auVar2._0_8_ = uVar1;
  }
  else {
    local_350 = local_2a8;
    local_360 = local_2b8;
    uStack_358 = uStack_2b0;
    local_378 = local_2d0;
    uStack_374 = uStack_2cc;
    uStack_370 = uStack_2c8;
    uStack_36c = uStack_2c4;
    uStack_368 = local_2c0;
    local_380 = local_2d8;
                    /* try { // try from 00153ef3 to 00153efd has its CatchHandler @ 00153f31 */
    auVar2 = (*(code *)PTR__ZN11uu_unexpand8unexpand17he27a2d3deed158afE_001ee968)(&local_380);
    _ZN4core3ptr41drop_in_place_LT_uu_unexpand__Options_GT_17hc2ee6c18ad656a87E(&local_380);
                    /* try { // try from 00153f0e to 00153f17 has its CatchHandler @ 00153f69 */
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h90d712bc54ad0d6dE
              (local_328);
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17ha7a1000ad09f03acE
            (auStack_398);
  return auVar2;
}