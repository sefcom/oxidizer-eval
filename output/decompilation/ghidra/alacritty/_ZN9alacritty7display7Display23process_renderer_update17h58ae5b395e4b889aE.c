void _ZN9alacritty7display7Display23process_renderer_update17h58ae5b395e4b889aE(long param_1)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  ulong uVar5;
  int iVar6;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined *local_80;
  undefined4 *local_78;
  undefined *local_70;
  char *local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined4 **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  bVar2 = *(byte *)(param_1 + 0x834);
  bVar3 = *(byte *)(param_1 + 0x835);
  *(undefined *)(param_1 + 0x834) = 2;
  if (bVar2 != 2) {
    if ((bVar2 & 1) != 0) {
      fVar1 = *(float *)(param_1 + 0x7a8);
      iVar6 = (int)(long)fVar1;
      if (fVar1 < 0.0) {
        iVar6 = 0;
      }
      if (DAT_001edbc8 < fVar1) {
        iVar6 = -1;
      }
      if (iVar6 == 0) {
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)
                  (&PTR_s_alacritty_src_display_mod_rs_00982638);
LAB_0054d15a:
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)
                  (&PTR_s_alacritty_src_display_mod_rs_00982650);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar1 = *(float *)(param_1 + 0x7ac);
      iVar6 = (int)(long)fVar1;
      if (fVar1 < 0.0) {
        iVar6 = 0;
      }
      if (DAT_001edbc8 < fVar1) {
        iVar6 = -1;
      }
      if (iVar6 == 0) goto LAB_0054d15a;
      _ZN89__LT_glutin__surface__Surface_LT_T_GT__u20_as_u20_glutin__surface__GlSurface_LT_T_GT__GT_6resize17h22ed3e05cf1fbc09E
                (param_1 + 0x560,*(undefined8 *)(param_1 + 0x2a8));
    }
    _ZN9alacritty7display7Display12make_current17h1def9f222502e6f9E(param_1);
    if ((bVar3 & 1) != 0) {
      _ZN9alacritty7display7Display17reset_glyph_cache17h8f02d6c622bdd6abE(param_1);
    }
    _ZN9alacritty8renderer8Renderer6resize17h83e3b437aa0cd7e9E(param_1 + 0xe0,param_1 + 0x798);
    uVar5 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar5) {
      local_90 = *(undefined4 *)(param_1 + 0x7b8);
      local_8c = *(undefined4 *)(param_1 + 0x7bc);
      local_88 = &local_90;
      local_80 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f32_GT_3fmt17ha5084164000ea822E_009dfe58
      ;
      local_78 = &local_8c;
      local_70 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f32_GT_3fmt17ha5084164000ea822E_009dfe58
      ;
      local_40 = &PTR_s_Padding__00982428;
      local_38 = 2;
      local_20 = 0;
      local_30 = &local_88;
      local_28 = 2;
      local_48 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s_alacritty_src_display_mod_rs_00982668);
      local_68 = "alacritty::display";
      local_60 = 0x12;
      local_58 = "alacritty::display";
      local_50 = 0x12;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_40,3,&local_68);
    }
    uVar5 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar5) {
      local_90 = *(undefined4 *)(param_1 + 0x7a8);
      local_8c = *(undefined4 *)(param_1 + 0x7ac);
      local_88 = &local_90;
      local_80 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f32_GT_3fmt17ha5084164000ea822E_009dfe58
      ;
      local_78 = &local_8c;
      local_70 = 
      PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f32_GT_3fmt17ha5084164000ea822E_009dfe58
      ;
      local_40 = &PTR_s_Width____Height__00982448;
      local_38 = 2;
      local_20 = 0;
      local_30 = &local_88;
      local_28 = 2;
      local_48 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s_alacritty_src_display_mod_rs_00982680);
      local_68 = "alacritty::display";
      local_60 = 0x12;
      local_58 = "alacritty::display";
      local_50 = 0x12;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_40,3,&local_68);
    }
  }
  return;
}