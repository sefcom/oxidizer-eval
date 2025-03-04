undefined8 _ZN6uu_yes6uumain6uumain17he4deec29abaffafaE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined *local_378;
  undefined *local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined *local_340;
  undefined *local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_310;
  undefined local_300 [16];
  undefined8 local_2f0;
  undefined **local_2e8;
  undefined8 uStack_2e0;
  undefined **local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  
  (*(code *)PTR__ZN6uu_yes6uu_app17he708a882494a8d90E_0020d178)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h51599a0d987ab008E
            (&local_340,&local_2e8,param_1,param_2);
  if (local_340 == (undefined *)0x8000000000000000) {
    uVar3 = (*(code *)
              PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0020d180
            )();
  }
  else {
    local_348 = local_310;
    local_358 = local_320;
    uStack_354 = uStack_31c;
    uStack_350 = uStack_318;
    uStack_34c = uStack_314;
    local_368 = local_330;
    uStack_364 = uStack_32c;
    uStack_360 = uStack_328;
    uStack_35c = uStack_324;
    local_378 = local_340;
    local_370 = local_338;
                    /* try { // try from 0015f159 to 0015f16c has its CatchHandler @ 0015f366 */
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17h3a638e61ba07e311E(&local_2e8,0x4000,0)
    ;
    if (local_2e8 != (undefined **)0x0) {
                    /* try { // try from 0015f319 to 0015f31e has its CatchHandler @ 0015f366 */
      (*(code *)PTR__ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE_0020d0b8)
                (uStack_2e0,local_2d8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_390 = uStack_2e0;
    local_388 = local_2d8;
    local_380 = 0;
                    /* try { // try from 0015f19f to 0015f207 has its CatchHandler @ 0015f36b */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hc595b2c710ec455bE
              (&local_2e8,&local_378,"STRING",6);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17hba7e4e218909a01cE
              (&local_340,"STRING",6,&local_2e8);
    _ZN6uu_yes16args_into_buffer17h5651e8584f7e9c37E(&local_390,&local_340);
    (*(code *)PTR__ZN6uu_yes14prepare_buffer17h0a69ad01ffb7db57E_0020d188)(&local_390);
    lVar4 = (*(code *)PTR__ZN6uu_yes4exec17h637ae1cf8fadb89aE_0020d190)(local_388,local_380);
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      cVar2 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(lVar4);
      if (cVar2 == '\v') {
                    /* try { // try from 0015f21c to 0015f223 has its CatchHandler @ 0015f321 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h780ea2ea521668c8E(lVar4);
        uVar3 = 0;
      }
      else {
        local_338 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E_0020d0f8
        ;
        local_2e8 = &PTR_s_standard_output__00207298;
        uStack_2e0 = 1;
        local_2c8 = 0;
        local_2d0 = 1;
                    /* try { // try from 0015f28a to 0015f2d6 has its CatchHandler @ 0015f326 */
        local_398 = lVar4;
        local_340 = (undefined *)&local_398;
        local_2d8 = &local_340;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h7da0a100012a1276E(local_300,&local_2e8);
        local_2d0 = CONCAT44(local_2d0._4_4_,1);
        local_2d8 = (undefined **)local_2f0;
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h870e02c9a3198622E(&local_2e8);
                    /* try { // try from 0015f2de to 0015f2e2 has its CatchHandler @ 0015f321 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h780ea2ea521668c8E(local_398);
      }
    }
                    /* try { // try from 0015f2e5 to 0015f2ee has its CatchHandler @ 0015f345 */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hd7cda70099a3c641E(&local_390);
                    /* try { // try from 0015f2ef to 0015f2f8 has its CatchHandler @ 0015f340 */
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8b51fc743cc5a57fE
              (&local_378);
  }
  return uVar3;
}