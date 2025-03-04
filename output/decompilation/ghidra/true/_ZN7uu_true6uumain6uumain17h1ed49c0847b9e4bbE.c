void _ZN7uu_true6uumain6uumain17h1ed49c0847b9e4bbE(undefined8 param_1,undefined8 param_2)

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
  
  (*(code *)PTR__ZN7uu_true6uu_app17h5a7239342bec5673E_001fb4b0)(local_2e0);
                    /* try { // try from 00159110 to 0015916a has its CatchHandler @ 0015936e */
  _ZN4core4iter6traits8iterator8Iterator7collect17hc3f97948be1e35dcE(&local_330,param_1,param_2);
  if ((undefined8 **)0x2 < local_320) {
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h2e1a3ebf44272b4cE
              (&local_330);
    goto LAB_0015930e;
  }
  local_378 = local_320;
  local_388 = (undefined *)CONCAT44(uStack_32c,local_330);
  uStack_380 = CONCAT44(uStack_324,uStack_328);
  _ZN12clap_builder7builder7command7Command24try_get_matches_from_mut17h5d77bd18c10499bfE
            (&local_318,local_2e0,&local_388);
  if (local_318 == -0x8000000000000000) {
    if (*(char *)(local_310 + 0xd5) == '\f') {
      lVar3 = (*(code *)
                PTR__ZN12clap_builder7builder7command7Command10print_help17ha75f02ad65e70b14E_001fb4c8
              )(local_2e0);
      auVar1._8_8_ = local_398._8_8_;
      auVar1._0_8_ = local_398._0_8_;
      lVar2 = local_3a8;
joined_r0x00159242:
      local_3a8 = lVar3;
      if (local_3a8 != 0) {
        local_3a0 = PTR__ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E_001fb4d0;
                    /* try { // try from 00159258 to 001592e5 has its CatchHandler @ 0015933c */
        local_398 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_001fb4d8)();
        local_350 = (undefined8 *)local_398;
        local_348 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h68fcfc60ebf28e4cE;
        local_338 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E_001fb478
        ;
        local_388 = &DAT_001f6880;
        uStack_380 = 3;
        local_368 = 0;
        local_378 = &local_350;
        local_370 = 2;
        local_340 = (undefined *)&local_3a8;
        uVar4 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17h82787f8382d2102cE_001fb4e0
                )(&local_3a0,&local_388);
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h3c6ebbb1cd20ddd4E
                  (uVar4);
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_001fb4e8)(1);
                    /* try { // try from 001592ea to 001592ee has its CatchHandler @ 0015934a */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17ha0de51bb71c1211eE(local_3a8);
        lVar2 = local_3a8;
        auVar1 = local_398;
      }
    }
    else {
      lVar2 = local_3a8;
      auVar1 = local_398;
      if (*(char *)(local_310 + 0xd5) == '\x0e') {
                    /* try { // try from 001591a4 to 001591c4 has its CatchHandler @ 0015934a */
        local_3a0 = (undefined *)
                    (*(code *)PTR__ZN3std2io5stdio6stdout17h077da66234850927E_001fb468)();
        (*(code *)
          PTR__ZN12clap_builder7builder7command7Command14render_version17h6726fbcc2d48ef38E_001fb4b8
        )(&local_350,local_2e0);
        local_398._8_8_ =
             _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
        ;
        local_388 = &DAT_001f6848;
        uStack_380 = 2;
        local_368 = 0;
        local_378 = (undefined8 **)local_398;
        local_370 = 1;
                    /* try { // try from 00159207 to 00159216 has its CatchHandler @ 00159328 */
        local_398._0_8_ = &local_350;
        lVar3 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_fmt17h0f6acf0ef7a6b873E_001fb4c0
                )(&local_3a0,&local_388);
                    /* try { // try from 00159217 to 0015923b has its CatchHandler @ 0015934a */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h82d083401deec2ebE(&local_350);
        auVar1._8_8_ = local_398._8_8_;
        auVar1._0_8_ = local_398._0_8_;
        lVar2 = local_3a8;
        goto joined_r0x00159242;
      }
    }
                    /* try { // try from 001592ef to 001592f6 has its CatchHandler @ 00159337 */
    local_3a8 = lVar2;
    local_398 = auVar1;
    _ZN4core3ptr47drop_in_place_LT_clap_builder__error__Error_GT_17h3be515c51c88d197E(local_310);
    if (local_318 == -0x8000000000000000) goto LAB_0015930e;
  }
                    /* try { // try from 00159301 to 0015930d has its CatchHandler @ 0015936e */
  _ZN4core3ptr132drop_in_place_LT_core__result__Result_LT_clap_builder__parser__matches__arg_matches__ArgMatches_C_clap_builder__error__Error_GT__GT_17he22c57e4762f4e91E
            (&local_318);
LAB_0015930e:
  _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17h47862de2e9afe612E
            (local_2e0);
  return;
}