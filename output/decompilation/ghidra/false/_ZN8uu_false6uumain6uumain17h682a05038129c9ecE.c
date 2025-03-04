void _ZN8uu_false6uumain6uumain17h682a05038129c9ecE(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_3a8;
  undefined *local_3a0;
  undefined local_398 [16];
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 **local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 *local_350;
  code *local_348;
  undefined *local_340;
  undefined *local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 **local_320;
  long local_318;
  long local_310;
  undefined local_2e0 [712];
  
  (*(code *)PTR__ZN8uu_false6uu_app17he23c4502b9c9f7a3E_001fb4a0)(local_2e0);
                    /* try { // try from 00159100 to 00159165 has its CatchHandler @ 0015935e */
  (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_001fb4a8)(1);
  _ZN4core4iter6traits8iterator8Iterator7collect17h9b9ce22406bfecc3E(&local_330,param_1,param_2);
  if ((undefined8 **)0x2 < local_320) {
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h514a86a3e4597d5fE
              (&local_330);
    goto LAB_001592fe;
  }
  local_378 = local_320;
  local_388 = (undefined *)CONCAT44(uStack_32c,local_330);
  uStack_380 = CONCAT44(uStack_324,uStack_328);
  _ZN12clap_builder7builder7command7Command24try_get_matches_from_mut17h75727dabc051cc1aE
            (&local_318,local_2e0,&local_388);
  if (local_318 == -0x8000000000000000) {
    if (*(char *)(local_310 + 0xd5) == '\f') {
      lVar3 = (*(code *)
                PTR__ZN12clap_builder7builder7command7Command10print_help17ha75f02ad65e70b14E_001fb4c0
              )(local_2e0);
      auVar1._8_8_ = local_398._8_8_;
      auVar1._0_8_ = local_398._0_8_;
      lVar2 = local_3a8;
joined_r0x0015923d:
      local_3a8 = lVar3;
      if (local_3a8 != 0) {
        local_3a0 = PTR__ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E_001fb4c8;
                    /* try { // try from 00159253 to 001592d5 has its CatchHandler @ 0015932c */
        local_398 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_001fb4d0)();
        local_350 = (undefined8 *)local_398;
        local_348 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0080870d4dd86d34E;
        local_338 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E_001fb468
        ;
        local_388 = &DAT_001f6870;
        uStack_380 = 3;
        local_368 = 0;
        local_378 = &local_350;
        local_370 = 2;
        local_340 = (undefined *)&local_3a8;
        uVar4 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17h82787f8382d2102cE_001fb4d8
                )(&local_3a0,&local_388);
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h83941425b2f571b0E
                  (uVar4);
                    /* try { // try from 001592da to 001592de has its CatchHandler @ 0015933a */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hba36a569e01be34cE(local_3a8);
        lVar2 = local_3a8;
        auVar1 = local_398;
      }
    }
    else {
      lVar2 = local_3a8;
      auVar1 = local_398;
      if (*(char *)(local_310 + 0xd5) == '\x0e') {
                    /* try { // try from 0015919f to 001591bf has its CatchHandler @ 0015933a */
        local_3a0 = (undefined *)
                    (*(code *)PTR__ZN3std2io5stdio6stdout17h077da66234850927E_001fb458)();
        (*(code *)
          PTR__ZN12clap_builder7builder7command7Command14render_version17h6726fbcc2d48ef38E_001fb4b0
        )(&local_350,local_2e0);
        local_398._8_8_ =
             _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
        ;
        local_388 = &DAT_001f6838;
        uStack_380 = 2;
        local_368 = 0;
        local_378 = (undefined8 **)local_398;
        local_370 = 1;
                    /* try { // try from 00159202 to 00159211 has its CatchHandler @ 00159318 */
        local_398._0_8_ = &local_350;
        lVar3 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_fmt17h0f6acf0ef7a6b873E_001fb4b8
                )(&local_3a0,&local_388);
                    /* try { // try from 00159212 to 00159236 has its CatchHandler @ 0015933a */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h27e7d2eb95319d2dE(&local_350);
        auVar1._8_8_ = local_398._8_8_;
        auVar1._0_8_ = local_398._0_8_;
        lVar2 = local_3a8;
        goto joined_r0x0015923d;
      }
    }
                    /* try { // try from 001592df to 001592e6 has its CatchHandler @ 00159327 */
    local_3a8 = lVar2;
    local_398 = auVar1;
    _ZN4core3ptr47drop_in_place_LT_clap_builder__error__Error_GT_17hd4fa2428a646d037E(local_310);
    if (local_318 == -0x8000000000000000) goto LAB_001592fe;
  }
                    /* try { // try from 001592f1 to 001592fd has its CatchHandler @ 0015935e */
  _ZN4core3ptr132drop_in_place_LT_core__result__Result_LT_clap_builder__parser__matches__arg_matches__ArgMatches_C_clap_builder__error__Error_GT__GT_17h0569a97e1311b44dE
            (&local_318);
LAB_001592fe:
  _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17h3e277424525feb1aE
            (local_2e0);
  return;
}