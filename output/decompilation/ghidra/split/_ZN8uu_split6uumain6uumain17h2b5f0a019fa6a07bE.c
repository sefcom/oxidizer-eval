undefined  [16]
_ZN8uu_split6uumain6uumain17h2b5f0a019fa6a07bE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined auVar3 [16];
  int *local_478;
  undefined *local_470;
  int local_468;
  undefined4 uStack_464;
  int iStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 local_428;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  long local_3f8 [2];
  int local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined local_3c0 [16];
  undefined8 local_3b0;
  undefined local_3a8 [16];
  undefined8 local_398;
  long local_390;
  int local_388;
  undefined4 uStack_384;
  int iStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined *local_2e8;
  undefined8 uStack_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  
  _ZN8uu_split15handle_obsolete17he1565c7d7191f1a3E(&local_2e8,param_1,param_2);
  local_408 = local_2d8;
  local_418 = local_2e8;
  uStack_410 = uStack_2e0;
  local_428 = local_2c0;
  local_438 = (undefined4)local_2d0;
  uStack_434 = local_2d0._4_4_;
  uStack_430 = (undefined4)uStack_2c8;
  uStack_42c = uStack_2c8._4_4_;
                    /* try { // try from 00175f97 to 00175ffe has its CatchHandler @ 00176361 */
  (*(code *)PTR__ZN8uu_split6uu_app17h157e905e8df93f6dE_0024d028)(&local_2e8);
  local_458 = local_408;
  local_468 = (int)local_418;
  uStack_464 = local_418._4_4_;
  iStack_460 = (int)uStack_410;
  uStack_45c = uStack_410._4_4_;
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hc3c3da3cda774606E
            (&local_390,&local_2e8,&local_468);
  if (local_390 == -0x8000000000000000) {
    auVar3 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0024d030
             )();
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h6adab7ef9c77512aE
              (&local_438);
    return auVar3;
  }
  local_3c8 = local_360;
  local_3d8 = uStack_370;
  uStack_3d4 = uStack_36c;
  uStack_3d0 = uStack_368;
  uStack_3cc = uStack_364;
  local_3e8 = iStack_380;
  uStack_3e4 = uStack_37c;
  uStack_3e0 = uStack_378;
  uStack_3dc = uStack_374;
  local_3f8[0] = local_390;
                    /* try { // try from 00176054 to 0017606e has its CatchHandler @ 0017634d */
  (*(code *)PTR__ZN8uu_split8Settings4from17h19dd94bcd15a49c5E_0024d038)
            (&local_390,local_3f8,&local_438);
  if (local_390 != 2) {
    (*(code *)PTR_memcpy_0024cfc0)(&local_2e8,&local_390,0xa8);
                    /* try { // try from 001761b2 to 001761ba has its CatchHandler @ 001762e9 */
    auVar3 = (*(code *)PTR__ZN8uu_split5split17h3b6295d78012e56bE_0024d048)(&local_2e8);
                    /* try { // try from 001761c4 to 001761d0 has its CatchHandler @ 00176319 */
    _ZN4core3ptr39drop_in_place_LT_uu_split__Settings_GT_17h17e116cdac8f5958E(&local_2e8);
    goto LAB_001762af;
  }
  lVar2 = 0;
  if (CONCAT44(uStack_384,local_388) - 4U < 5) {
    lVar2 = CONCAT44(uStack_384,local_388) + -3;
  }
  local_478 = &local_468;
  if (lVar2 == 0) {
    if (local_388 == 3) goto LAB_001760c4;
  }
  else if ((lVar2 == 1) && (iStack_380 == 1)) {
LAB_001760c4:
    local_458 = CONCAT44(uStack_374,uStack_378);
    uStack_450 = uStack_370;
    uStack_44c = uStack_36c;
    local_468 = local_388;
    uStack_464 = uStack_384;
    iStack_460 = iStack_380;
    uStack_45c = uStack_37c;
    local_470 = 
    PTR__ZN62__LT_uu_split__SettingsError_u20_as_u20_core__fmt__Display_GT_3fmt17hd067355b054e5acaE_0024d040
    ;
    local_2e8 = &DAT_00118130;
    uStack_2e0 = 1;
    uStack_2c8 = 0;
    local_2d0 = 1;
                    /* try { // try from 0017612c to 00176178 has its CatchHandler @ 001762da */
    local_2d8 = (undefined *)&local_478;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h11882c33e7a1a822E(local_3c0,&local_2e8);
    local_2d0 = CONCAT44(local_2d0._4_4_,1);
    local_2d8 = (undefined *)local_3b0;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h051d8dae61dc6094E(&local_2e8);
                    /* try { // try from 0017617e to 00176187 has its CatchHandler @ 00176319 */
    _ZN4core3ptr44drop_in_place_LT_uu_split__SettingsError_GT_17h59a67ae88e993ca1E(&local_468);
    auVar3._8_8_ = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h97b1e0e1e9d50c8aE_002454c8
    ;
    auVar3._0_8_ = uVar1;
    goto LAB_001762af;
  }
  local_458 = CONCAT44(uStack_374,uStack_378);
  uStack_450 = uStack_370;
  uStack_44c = uStack_36c;
  local_468 = local_388;
  uStack_464 = uStack_384;
  iStack_460 = iStack_380;
  uStack_45c = uStack_37c;
  local_470 = 
  PTR__ZN62__LT_uu_split__SettingsError_u20_as_u20_core__fmt__Display_GT_3fmt17hd067355b054e5acaE_0024d040
  ;
  local_2e8 = &DAT_00118130;
  uStack_2e0 = 1;
  uStack_2c8 = 0;
  local_2d0 = 1;
                    /* try { // try from 0017624a to 00176296 has its CatchHandler @ 001762fe */
  local_2d8 = (undefined *)&local_478;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h11882c33e7a1a822E(local_3a8,&local_2e8);
  local_2d0 = CONCAT44(local_2d0._4_4_,1);
  local_2d8 = (undefined *)local_398;
  uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h051d8dae61dc6094E(&local_2e8);
                    /* try { // try from 0017629c to 001762a5 has its CatchHandler @ 00176319 */
  _ZN4core3ptr44drop_in_place_LT_uu_split__SettingsError_GT_17h59a67ae88e993ca1E(&local_468);
  auVar3._8_8_ = &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h97b1e0e1e9d50c8aE_00245570
  ;
  auVar3._0_8_ = uVar1;
LAB_001762af:
                    /* try { // try from 001762af to 001762bb has its CatchHandler @ 00176314 */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h3ed3539edef33f20E
            (local_3f8);
                    /* try { // try from 001762bc to 001762c5 has its CatchHandler @ 0017630f */
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h6adab7ef9c77512aE
            (&local_438);
  return auVar3;
}