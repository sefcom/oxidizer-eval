undefined  [16] _ZN7uu_expr6uumain6uumain17he332773eb3dd795fE(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  code *local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined local_358 [16];
  undefined8 local_348;
  code *local_340;
  code *local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  code *local_2e8;
  code *pcStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  
  (*(code *)PTR__ZN7uu_expr6uu_app17hc20cc991bc2caa88E_002a7690)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h3341692c1e135144E
            (&local_3b8,&local_2e8,param_1,param_2);
  if (local_3b8 == (code *)0x8000000000000000) {
    auVar6 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_002a7698
             )();
    return auVar6;
  }
  local_320 = local_398;
  uStack_31c = uStack_394;
  uStack_318 = uStack_390;
  uStack_314 = uStack_38c;
  local_330 = local_3a8;
  uStack_32c = uStack_3a4;
  uStack_328 = uStack_3a0;
  uStack_324 = uStack_39c;
  local_340 = local_3b8;
  local_338 = uStack_3b0;
                    /* try { // try from 001b91f9 to 001b9285 has its CatchHandler @ 001b953b */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h49af73bbc3b34feaE
            (&local_2e8,&local_340,&DAT_00110713,10);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hf35f627069fc413dE
            (&local_3b8,&DAT_00110713,10,&local_2e8);
  if (local_3b8 == (code *)0x0) {
    local_3f0 = 0;
    local_3e8 = 8;
    uStack_3e0 = 0;
  }
  else {
    local_2b8 = local_388;
    uStack_2b4 = uStack_384;
    uStack_2b0 = uStack_380;
    uStack_2ac = uStack_37c;
    local_2c8 = CONCAT44(uStack_394,local_398);
    uStack_2c0 = uStack_390;
    uStack_2bc = uStack_38c;
    local_2d8 = (code **)CONCAT44(uStack_3a4,local_3a8);
    uStack_2d0 = CONCAT44(uStack_39c,uStack_3a0);
    local_2e8 = local_3b8;
    pcStack_2e0 = uStack_3b0;
    _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h9b1781b5ffa40da4E
              (&local_3d8,&local_2e8);
    local_3e8 = uStack_3d0;
    uStack_3e0 = uStack_3c8;
    local_3f0 = local_3d8;
  }
                    /* try { // try from 001b92c8 to 001b9321 has its CatchHandler @ 001b952c */
  (*(code *)PTR__ZN7uu_expr11syntax_tree7AstNode5parse17h8fc5e56b2d3adf65E_002a76a0)
            (&local_2e8,local_3e8,uStack_3e0);
  local_3d8 = pcStack_2e0;
  pcVar1 = local_3d8;
  uStack_3d0 = local_2d8;
  uVar5 = uStack_3d0;
  uStack_3c8 = uStack_2d0;
  uVar2 = uStack_3c8;
  uStack_3c0 = local_2c8;
  uVar3 = uStack_3c0;
  local_3d8._0_4_ = SUB84(pcStack_2e0,0);
  local_3d8._4_4_ = (undefined4)((ulong)pcStack_2e0 >> 0x20);
  uStack_3d0._0_4_ = SUB84(local_2d8,0);
  uStack_3d0._4_4_ = (undefined4)((ulong)local_2d8 >> 0x20);
  uStack_3c8._0_4_ = (undefined4)uStack_2d0;
  uStack_3c8._4_4_ = (undefined4)((ulong)uStack_2d0 >> 0x20);
  uStack_3c0._0_4_ = (undefined4)local_2c8;
  uStack_3c0._4_4_ = (undefined4)((ulong)local_2c8 >> 0x20);
  local_3d8 = pcVar1;
  uStack_3d0 = uVar5;
  uStack_3c8 = uVar2;
  uStack_3c0 = uVar3;
  if (local_2e8 == (code *)0x0) {
    local_368 = (undefined4)uStack_3c8;
    uStack_364 = uStack_3c8._4_4_;
    uStack_360 = (undefined4)uStack_3c0;
    uStack_35c = uStack_3c0._4_4_;
    local_378 = (undefined4)local_3d8;
    uStack_374 = local_3d8._4_4_;
    uStack_370 = (undefined4)uStack_3d0;
    uStack_36c = uStack_3d0._4_4_;
                    /* try { // try from 001b9344 to 001b93a8 has its CatchHandler @ 001b951a */
    (*(code *)PTR__ZN7uu_expr11syntax_tree7AstNode4eval17h0e7cef87b1c8bd3fE_002a76a8)
              (&local_3b8,&local_378);
    local_308 = (undefined4)uStack_3b0;
    uStack_304 = uStack_3b0._4_4_;
    uStack_300 = local_3a8;
    uStack_2fc = uStack_3a4;
    local_2f8 = uStack_3a0;
    uStack_2f4 = uStack_39c;
    uStack_2f0 = local_398;
    uStack_2ec = uStack_394;
    if (local_3b8 == (code *)0x0) {
                    /* try { // try from 001b93ec to 001b9404 has its CatchHandler @ 001b951a */
      (*(code *)PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h2669c68487e16a4dE_002a76b0)
                (local_358,&local_308);
                    /* try { // try from 001b9405 to 001b946b has its CatchHandler @ 001b9508 */
      _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17hb5763514b279a259E
                (&local_378);
      uStack_3b0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_2e8 = (code *)&DAT_0029f158;
      pcStack_2e0 = (code *)0x2;
      local_2c8 = 0;
      uStack_2d0 = 1;
      local_3b8 = (code *)local_358;
      local_2d8 = &local_3b8;
      (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_002a76b8)(&local_2e8);
      uStack_2d0 = local_348;
      local_2e8 = (code *)0x8000000000000000;
                    /* try { // try from 001b9494 to 001b94a1 has its CatchHandler @ 001b94f4 */
      cVar4 = (*(code *)PTR__ZN7uu_expr11syntax_tree9is_truthy17hbc2e5d0622d8ecb0E_002a76c0)
                        (&local_2e8);
      if (cVar4 != '\0') {
                    /* try { // try from 001b94a6 to 001b94b2 has its CatchHandler @ 001b9506 */
        _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17h03ce987334fde789E
                  (&local_2e8);
                    /* try { // try from 001b94b3 to 001b94bc has its CatchHandler @ 001b953b */
        _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h9cc8147b558a6216E
                  (&local_3f0);
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h690b48a34d1b9253E
                  (&local_340);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_358;
        return auVar6 << 0x40;
      }
                    /* try { // try from 001b94d1 to 001b94e8 has its CatchHandler @ 001b9506 */
      _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17h03ce987334fde789E
                (&local_2e8);
      auVar7 = (*(code *)
                 PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E_002a76c8
               )(1);
      goto LAB_001b93c0;
    }
    uStack_2d0 = CONCAT44(uStack_394,local_398);
    local_2e8 = uStack_3b0;
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9793020a81d80a2fE(&local_2e8);
                    /* try { // try from 001b93a9 to 001b93b8 has its CatchHandler @ 001b952c */
    _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17hb5763514b279a259E(&local_378)
    ;
  }
  else {
    uStack_2d0 = local_2c8;
    local_2e8 = pcStack_2e0;
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9793020a81d80a2fE(&local_2e8);
  }
  auVar7._8_8_ = &
                 PTR__ZN4core3ptr39drop_in_place_LT_uu_expr__ExprError_GT_17h0a2d89ce734fb1edE_0029f1e8
  ;
  auVar7._0_8_ = uVar5;
LAB_001b93c0:
                    /* try { // try from 001b93c0 to 001b93c9 has its CatchHandler @ 001b953b */
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h9cc8147b558a6216E(&local_3f0);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h690b48a34d1b9253E
            (&local_340);
  return auVar7;
}