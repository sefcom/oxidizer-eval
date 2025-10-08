void _ZN9alacritty7display7Display12make_current17h1def9f222502e6f9E(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  ulong uVar8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  char *local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined local_488 [16];
  undefined local_478 [16];
  undefined8 ***local_468;
  undefined *local_460;
  undefined8 **local_458;
  undefined8 ***local_450;
  undefined *local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  char *local_418;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  long local_3e8 [2];
  long local_3d8;
  undefined **local_3a8;
  undefined8 local_3a0;
  undefined8 ****local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined local_1e0 [456];
  
  lVar1 = param_1 + 0x2a8;
  cVar7 = (*(code *)
            PTR__ZN101__LT_glutin__context__PossiblyCurrentContext_u20_as_u20_glutin__context__PossiblyCurrentGlContext_GT_10is_current17hfbaab1a9cf077597E_009dfe60
          )(lVar1);
  if (cVar7 == '\0') {
    _ZN101__LT_glutin__context__PossiblyCurrentContext_u20_as_u20_glutin__context__PossiblyCurrentGlContext_GT_12make_current17h603c03aea39bb24aE
              (local_3e8,lVar1,param_1 + 0x560);
    if ((local_3e8[0] == 2) || (local_3d8 != 0x11)) {
      if ((int)local_3e8[0] == 2) {
        return;
      }
      _ZN4core3ptr41drop_in_place_LT_glutin__error__Error_GT_17h7a096d9b46c3b785E(local_3e8);
      return;
    }
                    /* try { // try from 0054c343 to 0054c40d has its CatchHandler @ 0054c6b2 */
    uVar8 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar8) {
      local_468 = (undefined8 ***)
                  _ZN9alacritty7display6window6Window2id17h395f89524db74bebE(param_1 + 800);
      local_450 = &local_468;
      local_448 = 
      PTR__ZN60__LT_winit__window__WindowId_u20_as_u20_core__fmt__Debug_GT_3fmt17h23f84c224ab71ac2E_009dea30
      ;
      local_3a8 = &PTR_s_Context_lost_for_window_00982550;
      local_3a0 = 1;
      local_388 = 0;
      local_398 = &local_450;
      local_390 = 1;
      local_490 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                            (&PTR_s_alacritty_src_display_mod_rs_00982580);
      local_4b0 = "alacritty::display";
      uStack_4a8 = 0x12;
      local_4a0 = "alacritty::display";
      local_498 = 0x12;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_3a8,3,&local_4b0);
    }
    _ZN4core3ptr41drop_in_place_LT_glutin__error__Error_GT_17h7a096d9b46c3b785E(local_3e8);
  }
  else {
    cVar7 = _ZN9alacritty8renderer8Renderer17was_context_reset17h1958bb6f6d16285bE
                      (*(undefined4 *)(param_1 + 0x2a0));
    if (cVar7 == '\0') {
      return;
    }
  }
  local_488 = (*(code *)
                PTR__ZN84__LT_glutin__context__NotCurrentContext_u20_as_u20_glutin__display__GetGlDisplay_GT_7display17h65e5dd4d2e691e41E_009dfe70
              )(lVar1);
                    /* try { // try from 0054c42e to 0054c436 has its CatchHandler @ 0054c6ca */
  local_478 = (*(code *)
                PTR__ZN82__LT_glutin__context__NotCurrentContext_u20_as_u20_glutin__config__GetGlConfig_GT_6config17hde59c67359acb4caE_009dfe78
              )(lVar1);
                    /* try { // try from 0054c448 to 0054c4b9 has its CatchHandler @ 0054c6de */
  (*(code *)
    PTR__ZN86__LT_winit__window__Window_u20_as_u20_raw_window_handle__borrowed__HasWindowHandle_GT_13window_handle17ha8ca16578ae5c78cE_009dfe10
  )(&local_3a8,param_1 + 0x340);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h93d24170a6c75764E
            (&local_4b0,&local_3a8,&PTR_DAT_00982478);
  local_428 = (undefined4)local_4b0;
  uStack_424 = local_4b0._4_4_;
  uStack_420 = (undefined4)uStack_4a8;
  uStack_41c = uStack_4a8._4_4_;
  local_418 = local_4a0;
  _ZN9alacritty8renderer8platform17create_gl_context17h408088c937a1fb7fE
            (&local_3a8,local_488,local_478,&local_428);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hdfe2b77486f2a738E(&local_450,&local_3a8);
  lVar2 = param_1 + 0xe0;
                    /* try { // try from 0054c4c1 to 0054c4d0 has its CatchHandler @ 0054c6cf */
  _ZN4core3ptr50drop_in_place_LT_alacritty__renderer__Renderer_GT_17hcd88fd9ce432a1cdE(lVar2);
  _ZN4core3ptr55drop_in_place_LT_glutin__context__NotCurrentContext_GT_17hd5aa18dc977016dbE(lVar1);
  local_408 = local_448;
  puVar3 = local_408;
  uStack_400 = uStack_440;
  uVar4 = uStack_400;
  local_3f8 = local_438;
  uVar5 = local_3f8;
  uStack_3f0 = uStack_430;
  uVar6 = uStack_3f0;
  *(ulong *)(param_1 + 0x2a8) = (ulong)((uint)local_450 & 1);
  local_408._0_4_ = SUB84(local_448,0);
  local_408._4_4_ = (undefined4)((ulong)local_448 >> 0x20);
  uStack_400._0_4_ = (undefined4)uStack_440;
  uStack_400._4_4_ = (undefined4)((ulong)uStack_440 >> 0x20);
  local_3f8._0_4_ = (undefined4)local_438;
  local_3f8._4_4_ = (undefined4)((ulong)local_438 >> 0x20);
  uStack_3f0._0_4_ = (undefined4)uStack_430;
  uStack_3f0._4_4_ = (undefined4)((ulong)uStack_430 >> 0x20);
  *(undefined4 *)(param_1 + 0x2b0) = (undefined4)local_408;
  *(undefined4 *)(param_1 + 0x2b4) = local_408._4_4_;
  *(undefined4 *)(param_1 + 0x2b8) = (undefined4)uStack_400;
  *(undefined4 *)(param_1 + 700) = uStack_400._4_4_;
  *(undefined4 *)(param_1 + 0x2c0) = (undefined4)local_3f8;
  *(undefined4 *)(param_1 + 0x2c4) = local_3f8._4_4_;
  *(undefined4 *)(param_1 + 0x2c8) = (undefined4)uStack_3f0;
  *(undefined4 *)(param_1 + 0x2cc) = uStack_3f0._4_4_;
                    /* try { // try from 0054c522 to 0054c57d has its CatchHandler @ 0054c6e0 */
  local_408 = puVar3;
  uStack_400 = uVar4;
  local_3f8 = uVar5;
  uStack_3f0 = uVar6;
  _ZN101__LT_glutin__context__PossiblyCurrentContext_u20_as_u20_glutin__context__PossiblyCurrentGlContext_GT_12make_current17h603c03aea39bb24aE
            (&local_3a8,lVar1,param_1 + 0x560);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17he18683c3aeadddaeE
            (&local_3a8,"failed to reativate context after reset.",0x28,
             &PTR_s_alacritty_src_display_mod_rs_009825b0);
  _ZN9alacritty8renderer8Renderer3new17h55b7130c64977f8cE
            (&local_3a8,lVar1,*(undefined *)(param_1 + 0x837));
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h23508c4f2ac2861fE(local_1e0,&local_3a8);
  (*(code *)PTR_memcpy_009de0b0)(lVar2,local_1e0,0x1c8);
                    /* try { // try from 0054c59b to 0054c67c has its CatchHandler @ 0054c6e0 */
  _ZN9alacritty8renderer8Renderer6resize17h83e3b437aa0cd7e9E(lVar2,param_1 + 0x798);
  _ZN9alacritty7display7Display17reset_glyph_cache17h8f02d6c622bdd6abE(param_1);
  *(undefined *)(param_1 + 0x48) = 1;
  uVar8 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (3 < uVar8) {
    local_458 = (undefined8 **)
                _ZN9alacritty7display6window6Window2id17h395f89524db74bebE(param_1 + 800);
    local_468 = &local_458;
    local_460 = 
    PTR__ZN60__LT_winit__window__WindowId_u20_as_u20_core__fmt__Debug_GT_3fmt17h23f84c224ab71ac2E_009dea30
    ;
    local_3a8 = &PTR_s_Recovered_window_from_gpu_reset_00982560;
    local_3a0 = 2;
    local_388 = 0;
    local_398 = &local_468;
    local_390 = 1;
    local_490 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                          (&PTR_s_alacritty_src_display_mod_rs_009825e0);
    local_4b0 = "alacritty::display";
    uStack_4a8 = 0x12;
    local_4a0 = "alacritty::display";
    local_498 = 0x12;
    _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_3a8,4,&local_4b0);
  }
                    /* try { // try from 0054c67d to 0054c686 has its CatchHandler @ 0054c6ca */
  _ZN4core3ptr43drop_in_place_LT_glutin__config__Config_GT_17h906d309ffa857007E(local_478);
  _ZN4core3ptr45drop_in_place_LT_glutin__display__Display_GT_17h28e1ec1d671b8241E(local_488);
  return;
}