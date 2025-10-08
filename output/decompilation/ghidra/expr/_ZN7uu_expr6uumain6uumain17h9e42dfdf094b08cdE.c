undefined  [16] _ZN7uu_expr6uumain6uumain17h9e42dfdf094b08cdE(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined8 **ppuVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined auVar6 [16];
  undefined local_3c0 [16];
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined local_398 [8];
  long local_390;
  long local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 local_370;
  undefined8 *local_368;
  code *local_360;
  undefined8 uStack_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  long local_340;
  long local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  code *local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 *local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  
  _ZN4core4iter6traits8iterator8Iterator4skip17h532d866c75ac3d55E(&local_2e8,param_1,param_2);
  _ZN4core4iter6traits8iterator8Iterator7collect17h7531a1f7ea66db80E(local_398,&local_2e8);
  if (local_388 == 0) {
LAB_0019c67a:
    local_330 = 0;
    local_340 = local_390;
    local_338 = local_388;
    _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_5parse17hd9457b01c74b6ec9E(&local_2e8,&local_340);
    local_328 = local_2e0;
    uStack_320 = uStack_2d8;
    ppuVar2 = uStack_320;
    local_318 = (undefined4)local_2d0;
    uStack_314 = local_2d0._4_4_;
    uStack_310 = (undefined4)uStack_2c8;
    uStack_30c = uStack_2c8._4_4_;
    if (local_2e8 == (undefined4 *)0x8000000000000005) {
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf89efcdcdc160bb6E(&local_328);
      auVar6._8_8_ = &
                     PTR__ZN4core3ptr39drop_in_place_LT_uu_expr__ExprError_GT_17hcc83ccc5ddfd1404E_00249bb8
      ;
      auVar6._0_8_ = uVar4;
      goto LAB_0019c84f;
    }
    uStack_320._0_4_ = SUB84(uStack_2d8,0);
    uStack_320._4_4_ = (undefined4)((ulong)uStack_2d8 >> 0x20);
    local_3a8 = (undefined4)local_2d0;
    uStack_3a4 = local_2d0._4_4_;
    uStack_3a0 = (undefined4)uStack_2c8;
    uStack_39c = uStack_2c8._4_4_;
    local_3c0._8_8_ = local_2e0;
    uStack_3b0 = (undefined4)uStack_320;
    uStack_3ac = uStack_320._4_4_;
    local_3c0._0_8_ = local_2e8;
                    /* try { // try from 0019c721 to 0019c760 has its CatchHandler @ 0019c8db */
    uStack_320 = ppuVar2;
    (*(code *)PTR__ZN7uu_expr11syntax_tree7AstNode4eval17h7294554a61514edeE_00251918)
              (&local_368,local_3c0);
    local_308 = local_360;
    uStack_300 = uStack_358;
    local_2f8 = local_350;
    uStack_2f4 = uStack_34c;
    uStack_2f0 = uStack_348;
    uStack_2ec = uStack_344;
    if ((int)local_368 == 1) {
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf89efcdcdc160bb6E(&local_308);
                    /* try { // try from 0019c761 to 0019c76d has its CatchHandler @ 0019c8f0 */
      _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17h702ff2a2ff59954aE
                (local_3c0);
      auVar6._8_8_ = &
                     PTR__ZN4core3ptr39drop_in_place_LT_uu_expr__ExprError_GT_17hcc83ccc5ddfd1404E_00249bb8
      ;
      auVar6._0_8_ = uVar4;
      goto LAB_0019c84f;
    }
                    /* try { // try from 0019c77a to 0019c78f has its CatchHandler @ 0019c8db */
    (*(code *)PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920)
              (&local_380,&local_308);
                    /* try { // try from 0019c790 to 0019c7f6 has its CatchHandler @ 0019c8b7 */
    puVar5 = local_3c0;
    _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17h702ff2a2ff59954aE(puVar5);
    local_3c0._8_8_ =
         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_2e8 = (undefined4 *)&DAT_00249b20;
    local_2e0 = 2;
    uStack_2c8 = 0;
    local_2d0 = 1;
    local_3c0._0_8_ = &local_380;
    uStack_2d8 = (undefined8 **)puVar5;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00251910)(&local_2e8);
    local_2d0 = local_370;
    local_2e0 = CONCAT44(uStack_37c,local_380);
    uStack_2d8 = (undefined8 **)CONCAT44(uStack_374,uStack_378);
    local_2e8 = (undefined4 *)&DAT_8000000000000000;
                    /* try { // try from 0019c819 to 0019c826 has its CatchHandler @ 0019c883 */
    cVar3 = (*(code *)PTR__ZN7uu_expr11syntax_tree9is_truthy17hefcaac958900f87aE_00251928)
                      (&local_2e8);
    _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17h85a38dbf46701223E
              (&local_2e8);
    if (cVar3 == '\0') {
                    /* try { // try from 0019c83e to 0019c848 has its CatchHandler @ 0019c86e */
      auVar6 = (*(code *)
                 PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_00251930
               )(1);
      goto LAB_0019c84f;
    }
  }
  else {
    if (local_388 != 1) {
      uVar4 = *(undefined8 *)(local_390 + 8);
      puVar5 = *(undefined **)(local_390 + 0x10);
LAB_0019c658:
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6aa7dedd5a5c3808E
                        (uVar4,puVar5,
                         "--/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
                         ,2);
      if (cVar3 != '\0') {
        local_388 = local_388 + -1;
        local_390 = local_390 + 0x18;
      }
      goto LAB_0019c67a;
    }
    uVar4 = *(undefined8 *)(local_390 + 8);
    puVar5 = *(undefined **)(local_390 + 0x10);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6aa7dedd5a5c3808E
                      (uVar4,puVar5,"--help",6);
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6aa7dedd5a5c3808E
                        (uVar4,puVar5,"--version",9);
      if (cVar3 == '\0') goto LAB_0019c658;
      local_3c0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002518e0)();
      local_368 = (undefined8 *)local_3c0;
      local_360 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h547d29ebb03039dbE;
      local_2e8 = (undefined4 *)&DAT_00249b78;
      local_2e0 = 2;
      uStack_2c8 = 0;
      uStack_2d8 = &local_368;
      local_2d0 = 1;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00251910)(&local_2e8);
    }
    else {
                    /* try { // try from 0019c57f to 0019c58c has its CatchHandler @ 0019c8f0 */
      (*(code *)PTR__ZN7uu_expr6uu_app17h86f9ff8623407d10E_00251900)(&local_2e8);
                    /* try { // try from 0019c58d to 0019c5a2 has its CatchHandler @ 0019c8a5 */
      uVar4 = (*(code *)
                PTR__ZN12clap_builder7builder7command7Command10print_help17h99ccf3e1a23a10fdE_00251908
              )(&local_2e8);
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hf3d4d63b65b78e3dE
                (uVar4);
                    /* try { // try from 0019c5a3 to 0019c6f2 has its CatchHandler @ 0019c8f0 */
      _ZN4core3ptr60drop_in_place_LT_clap_builder__builder__command__Command_GT_17hf06aedbb9ada27c4E
                (&local_2e8);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = puVar5;
  auVar6 = auVar1 << 0x40;
LAB_0019c84f:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h71ec3d093eeba3f8E
            (local_398);
  return auVar6;
}