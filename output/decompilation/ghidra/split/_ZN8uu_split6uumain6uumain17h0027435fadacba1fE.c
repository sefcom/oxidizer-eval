undefined  [16]
_ZN8uu_split6uumain6uumain17h0027435fadacba1fE(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auVar5 [16];
  int *local_458;
  undefined *local_450;
  int local_448;
  undefined4 uStack_444;
  int iStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  undefined local_3f8 [16];
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
  int local_390 [2];
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
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined *local_2d8;
  long local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  
  _ZN8uu_split15handle_obsolete17hff2fd928c2a7a858E(&local_2e8,param_1,param_2);
  uVar2 = local_2c8;
  lVar1 = local_2d0;
  local_408 = local_2d8;
  local_418 = (undefined4)local_2e8;
  uStack_414 = local_2e8._4_4_;
  uStack_410 = (undefined4)uStack_2e0;
  uStack_40c = uStack_2e0._4_4_;
                    /* try { // try from 00160e73 to 00160e80 has its CatchHandler @ 001611c0 */
  (*(code *)PTR__ZN8uu_split6uu_app17h4bc5bb72ff3a6c94E_00211e00)(&local_2e8);
                    /* try { // try from 00160e81 to 00160eb8 has its CatchHandler @ 001611e0 */
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h690c9a28c22d83f7E
            (local_390,&local_2e8,&local_418);
  local_3c8 = local_360;
  local_3d8 = uStack_370;
  uStack_3d4 = uStack_36c;
  uStack_3d0 = uStack_368;
  uStack_3cc = uStack_364;
  local_3e8 = iStack_380;
  uStack_3e4 = uStack_37c;
  uStack_3e0 = uStack_378;
  uStack_3dc = uStack_374;
  uVar3 = 0;
  if (lVar1 != -0x8000000000000000) {
    uVar3 = uVar2;
  }
                    /* try { // try from 00160f0e to 00160f23 has its CatchHandler @ 001611ab */
  (*(code *)PTR__ZN8uu_split8Settings4from17hea7ff87a16a6485dE_00211e10)
            (local_390,local_3f8,uVar3,local_2c0);
  if (local_390[0] != 2) {
    (*(code *)PTR_memcpy_00211da8)(&local_2e8,local_390,0xa8);
                    /* try { // try from 00161066 to 0016106e has its CatchHandler @ 0016118a */
    auVar5 = (*(code *)PTR__ZN8uu_split5split17h209135f55e0a4504E_00211e20)(&local_2e8);
    _ZN4core3ptr39drop_in_place_LT_uu_split__Settings_GT_17h4ed21db3b97856ffE(local_390);
    goto LAB_0016115e;
  }
  lVar4 = 0;
  if (CONCAT44(uStack_384,local_388) - 4U < 5) {
    lVar4 = CONCAT44(uStack_384,local_388) + -3;
  }
  if (lVar4 == 0) {
    if (local_388 != 3) goto LAB_00161090;
  }
  else if ((lVar4 != 1) || (iStack_380 != 1)) {
LAB_00161090:
    local_438 = uStack_378;
    uStack_434 = uStack_374;
    uStack_430 = uStack_370;
    uStack_42c = uStack_36c;
    local_448 = local_388;
    uStack_444 = uStack_384;
    iStack_440 = iStack_380;
    uStack_43c = uStack_37c;
    local_458 = &local_448;
    local_450 = 
    PTR__ZN62__LT_uu_split__SettingsError_u20_as_u20_core__fmt__Display_GT_3fmt17h76b66ede8e82a9c4E_00211e18
    ;
    local_2e8 = &DAT_0011adf0;
    uStack_2e0 = 1;
    local_2c8 = 0;
    local_2d0 = 1;
                    /* try { // try from 001610fd to 00161149 has its CatchHandler @ 0016119c */
    local_2d8 = (undefined *)&local_458;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h8e0a26a11368ccdeE(local_3a8,&local_2e8);
    local_2d0 = CONCAT44(local_2d0._4_4_,1);
    local_2d8 = (undefined *)local_398;
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc5c45df65d430fe3E(&local_2e8);
    _ZN4core3ptr44drop_in_place_LT_uu_split__SettingsError_GT_17h1099a2ec031296e3E(&local_448);
    auVar5._8_8_ = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h49b5ff45ef8163fdE_00209b28
    ;
    auVar5._0_8_ = uVar3;
    goto LAB_0016115e;
  }
  local_438 = uStack_378;
  uStack_434 = uStack_374;
  uStack_430 = uStack_370;
  uStack_42c = uStack_36c;
  local_448 = local_388;
  uStack_444 = uStack_384;
  iStack_440 = iStack_380;
  uStack_43c = uStack_37c;
  local_458 = &local_448;
  local_450 = 
  PTR__ZN62__LT_uu_split__SettingsError_u20_as_u20_core__fmt__Display_GT_3fmt17h76b66ede8e82a9c4E_00211e18
  ;
  local_2e8 = &DAT_0011adf0;
  uStack_2e0 = 1;
  local_2c8 = 0;
  local_2d0 = 1;
                    /* try { // try from 00160fe2 to 0016102e has its CatchHandler @ 00161188 */
  local_2d8 = (undefined *)&local_458;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h8e0a26a11368ccdeE(local_3c0,&local_2e8);
  local_2d0 = CONCAT44(local_2d0._4_4_,1);
  local_2d8 = (undefined *)local_3b0;
  uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc5c45df65d430fe3E(&local_2e8);
  _ZN4core3ptr44drop_in_place_LT_uu_split__SettingsError_GT_17h1099a2ec031296e3E(&local_448);
  auVar5._8_8_ = &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h49b5ff45ef8163fdE_00209aa0
  ;
  auVar5._0_8_ = uVar3;
LAB_0016115e:
                    /* try { // try from 0016115e to 00161167 has its CatchHandler @ 001611e0 */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h0ea189ec09692b6aE
            (local_3f8);
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h1a464790a9ce899aE
            (lVar1,uVar2);
  return auVar5;
}