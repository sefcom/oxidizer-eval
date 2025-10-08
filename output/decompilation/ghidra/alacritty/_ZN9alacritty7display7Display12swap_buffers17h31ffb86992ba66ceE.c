void _ZN9alacritty7display7Display12swap_buffers17h31ffb86992ba66ceE(long param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined **local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_90;
  undefined *local_88;
  char *local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58 [16];
  
  if ((((*(int *)(param_1 + 0x560) == 8) || ((*(byte *)(param_1 + 0x2a8) & 1) != 0)) ||
      (*(int *)(param_1 + 0x588) != 6)) || (*(char *)(param_1 + 0xc0) != '\0')) {
    _ZN89__LT_glutin__surface__Surface_LT_T_GT__u20_as_u20_glutin__surface__GlSurface_LT_T_GT__GT_12swap_buffers17hd28ac391abbf1f4dE
              (local_58,param_1 + 0x560);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x7a8);
    uVar5 = 0;
    local_f8 = (int)(long)fVar1;
    if (fVar1 < 0.0) {
      local_f8 = uVar5;
    }
    fVar2 = *(float *)(param_1 + 0x7ac);
    if (DAT_001edbc8 < fVar1) {
      local_f8 = 0xffffffff;
    }
    uStack_f4 = (int)(long)fVar2;
    if (fVar2 < 0.0) {
      uStack_f4 = uVar5;
    }
    fVar1 = *(float *)(param_1 + 0x7b0);
    if (DAT_001edbc8 < fVar2) {
      uStack_f4 = 0xffffffff;
    }
    uStack_f0 = (int)(long)fVar1;
    if (fVar1 < 0.0) {
      uStack_f0 = uVar5;
    }
    fVar2 = *(float *)(param_1 + 0x7b4);
    if (DAT_001edbc8 < fVar1) {
      uStack_f0 = 0xffffffff;
    }
    uStack_ec = (int)(long)fVar2;
    if (fVar2 < 0.0) {
      uStack_ec = 0;
    }
    fVar1 = *(float *)(param_1 + 0x7b8);
    if (DAT_001edbc8 < fVar2) {
      uStack_ec = 0xffffffff;
    }
    local_e8 = (int)(long)fVar1;
    if (fVar1 < 0.0) {
      local_e8 = 0;
    }
    fVar2 = *(float *)(param_1 + 0x7bc);
    if (DAT_001edbc8 < fVar1) {
      local_e8 = 0xffffffff;
    }
    uStack_e4 = (int)(long)fVar2;
    if (fVar2 < 0.0) {
      uStack_e4 = uVar5;
    }
    local_108 = *(undefined8 *)(param_1 + 0x798);
    if (DAT_001edbc8 < fVar2) {
      uStack_e4 = 0xffffffff;
    }
    uStack_100 = local_108;
    _ZN9alacritty7display6damage13DamageTracker18shape_frame_damage17h7cbe9008dfbb19f8E
              (&local_c0,param_1,&local_108);
    uVar3 = local_b8;
                    /* try { // try from 0054c97a to 0054c98c has its CatchHandler @ 0054c9ad */
    _ZN6glutin3api3egl7surface16Surface_LT_T_GT_24swap_buffers_with_damage17hcfdce5be1c237eedE
              (local_58,*(undefined8 *)(param_1 + 0x570),*(undefined8 *)(param_1 + 0x580),
               param_1 + 0x2b0,local_b8,local_b0);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_glutin__surface__Rect_GT__GT_17h23eaac4cc5abca69E
              (local_c0,uVar3);
  }
  if (local_58[0] != 2) {
                    /* try { // try from 0054c7a2 to 0054c85c has its CatchHandler @ 0054c9c5 */
    uVar4 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (3 < uVar4) {
      local_88 = 
      PTR__ZN59__LT_glutin__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h6356b3d53669c523E_009dfe30
      ;
      local_c0 = &PTR_s_error_calling_swap_buffers__009825f8;
      local_b8 = 1;
      local_a0 = 0;
      local_b0 = &local_90;
      local_a8 = 1;
      local_90 = (undefined *)&local_108;
      local_60 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s_alacritty_src_display_mod_rs_00982608);
      local_80 = "alacritty::display";
      local_78 = 0x12;
      local_70 = "alacritty::display";
      local_68 = 0x12;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_c0,4,&local_80);
    }
    _ZN4core3ptr41drop_in_place_LT_glutin__error__Error_GT_17h7a096d9b46c3b785E(&local_108);
  }
  return;
}