void _ZN9alacritty3cli13ParsedOptions15override_config17hf97b5b294eb97d07E
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined local_c8 [16];
  long local_b8;
  long *local_b0;
  code *local_a8;
  undefined *local_a0;
  code *local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar1 = PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0;
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      while( true ) {
        local_b8 = *(long *)(param_1 + 8) + uVar4 * 0x38;
        _ZN57__LT_toml__value__Value_u20_as_u20_core__clone__Clone_GT_5clone17hd28dc0176ce4bcf3E
                  (&local_68,*(long *)(param_1 + 8) + uVar4 * 0x38 + 0x18);
        auVar5 = _ZN89__LT_alacritty__config__ui_config__UiConfig_u20_as_u20_alacritty_config__SerdeReplace_GT_7replace17h710cd057184921b4E
                           (param_2,&local_68);
        if (auVar5._0_8_ == 0) break;
        local_c8 = auVar5;
                    /* try { // try from 00534536 to 0053460a has its CatchHandler @ 00534638 */
        lVar2 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE(puVar1,0);
        if (lVar2 != 0) {
          local_b0 = &local_b8;
          local_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h83f1bbefb10239b3E;
          local_98 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h52a3e481c4252974E
          ;
          local_68 = &PTR_s_Unable_to_override_option___009816a0;
          local_60 = 2;
          local_48 = 0;
          local_58 = &local_b0;
          local_50 = 2;
          local_a0 = local_c8;
          local_70 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                               (&PTR_s_alacritty_src_cli_rs_009816c0);
          local_90 = "alacritty_log_window_config";
          local_88 = 0x1b;
          local_80 = "alacritty::cli";
          local_78 = 0xe;
          _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_68,1,&local_90);
        }
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_11swap_remove17h6ef130c9db4ae6feE(&local_68,param_1,uVar4);
        _ZN4core3ptr71drop_in_place_LT__LP_alloc__string__String_C_toml__value__Value_RP__GT_17h616ff561afa8a74fE
                  (&local_68);
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h3d4788587f1a236cE
                  (local_c8._0_8_,local_c8._8_8_);
        uVar3 = *(ulong *)(param_1 + 0x10);
        if (uVar3 <= uVar4) {
          return;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}