void _ZN9alacritty7display7Display13handle_update17hcc25bf8cecd52e99E
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
               long param_6)

{
  ulong *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined *local_180;
  undefined4 *local_178;
  undefined *local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined **local_140;
  undefined8 local_138;
  undefined **local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined local_110 [208];
  byte local_40;
  uint local_3c;
  uint local_38;
  
  local_198 = param_2;
  local_190 = param_3;
  (*(code *)PTR_memcpy_009de0b0)(local_110,param_1 + 0x480,0xe0);
  *(undefined8 *)(param_1 + 0x480) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined2 *)(param_1 + 0x55c) = 0;
  local_1d8 = *(undefined4 *)(param_1 + 0x7b0);
  uVar8 = *(undefined4 *)(param_1 + 0x7b4);
  local_1d4 = uVar8;
  _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hfb46f52e27157af0E(param_1 + 0x834);
  *(undefined *)(param_1 + 0x835) = 1;
                    /* try { // try from 0054cbbf to 0054cca6 has its CatchHandler @ 0054cec0 */
  local_1d8 = _ZN9alacritty7display7Display16update_font_size17h86a7d3c64310d9e8E
                        (param_1 + 0x5f8,*(undefined4 *)(param_6 + 300),
                         *(undefined *)(param_6 + 0x12d),local_110);
  local_1d4 = uVar8;
  uVar6 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (2 < uVar6) {
    local_180 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f32_GT_3fmt17ha5084164000ea822E_009dfe58
    ;
    local_178 = &local_1d4;
    local_170 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f32_GT_3fmt17ha5084164000ea822E_009dfe58
    ;
    local_140 = &PTR_s_Cell_size__x_00982408;
    local_138 = 2;
    local_120 = 0;
    local_130 = &local_188;
    local_128 = 2;
    local_188 = (undefined *)&local_1d8;
    local_148 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                          (&PTR_s_alacritty_src_display_mod_rs_00982620);
    local_168 = "alacritty::display";
    local_160 = 0x12;
    local_158 = "alacritty::display";
    local_150 = 0x12;
    _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_140,3,&local_168);
  }
  *(undefined *)(param_1 + 0x48) = 1;
  puVar2 = PTR_floorf_009dfe38;
  if ((local_40 & 1) == 0) {
    local_1cc = *(float *)(param_1 + 0x7a8);
    local_1d0 = *(float *)(param_1 + 0x7ac);
  }
  else {
    local_1cc = (float)local_3c;
    local_1d0 = (float)local_38;
  }
  local_1c8 = (float)*(double *)(param_1 + 0x338);
  local_1c4 = (*(code *)PTR_floorf_009dfe38)((float)*(ushort *)(param_6 + 0x1a8) * local_1c8);
  uVar8 = (*(code *)puVar2)((float)*(ushort *)(param_6 + 0x1aa) * local_1c8);
  _ZN9alacritty7display8SizeInfo3new17hc493ea048056a091E
            (local_1cc,local_1d0,local_1d8,local_1d4,local_1c4,uVar8,&local_1c0,
             *(undefined *)(param_6 + 0x1ac));
  lVar7 = *(long *)(param_5 + 0x1100);
  uVar4 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_3get17h75792986f4a34d45E(param_4);
                    /* try { // try from 0054cd6d to 0054ce57 has its CatchHandler @ 0054cec0 */
  lVar5 = _ZN4core6option15Option_LT_T_GT_6map_or17h79f8debf1d8849b2E(uVar4,&local_1c0);
  uVar6 = lVar5 + lVar7;
  lVar7 = 0;
  if (uVar6 <= local_1c0) {
    lVar7 = local_1c0 - uVar6;
  }
  uVar6 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(lVar7,1);
  local_1c0 = uVar6;
  if (*(char *)(param_6 + 0x1af) != '\0') {
    _ZN9alacritty7display6window6Window21set_resize_increments17hf3788ac180acdeb0E
              (local_1d8,*(undefined8 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x348));
  }
  puVar1 = (ulong *)(param_1 + 0x798);
  if ((*puVar1 != uVar6) || (*(long *)(param_1 + 0x7a0) != CONCAT44(uStack_1b4,iStack_1b8))) {
    uVar4 = CONCAT44(uStack_1b4,iStack_1b8);
    fVar9 = 0.0;
    if (0.0 <= fStack_1a8) {
      fVar9 = fStack_1a8;
    }
    fVar11 = DAT_001ee034;
    if (fVar9 <= DAT_001ee034) {
      fVar11 = fVar9;
    }
    fVar9 = 0.0;
    if (0.0 <= fStack_1a4) {
      fVar9 = fStack_1a4;
    }
    fVar10 = DAT_001ee034;
    if (fVar9 <= DAT_001ee034) {
      fVar10 = fVar9;
    }
    (*(code *)
      PTR__ZN96__LT_alacritty_terminal__event_loop__Notifier_u20_as_u20_alacritty_terminal__event__OnResize_GT_9on_resize17hff461c3ae1dcea52E_009dfe80
    )(local_190,
      uVar6 & 0xffff |
      (ulong)(uint)(iStack_1b8 << 0x10) |
      (ulong)((int)fVar11 & 0xffff) << 0x20 | (ulong)(uint)(int)fVar10 << 0x30);
    _ZN18alacritty_terminal4term13Term_LT_T_GT_6resize17h536793f9ff690001E(local_198,uVar6,uVar4);
    _ZN9alacritty7display6damage13DamageTracker6resize17h3618c97bcb1847cfE(param_1,uVar6,uVar4);
  }
  cVar3 = _ZN78__LT_alacritty__display__SizeInfo_LT_T_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17hc9e676d2b49b5c78E
                    (&local_1c0,puVar1);
  if (cVar3 == '\0') {
    _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hfb46f52e27157af0E(param_1 + 0x834);
    *(undefined *)(param_1 + 0x834) = 1;
    *(undefined *)(param_5 + 0x1160) = 2;
  }
  *(undefined8 *)(param_1 + 0x7b8) = local_1a0;
  *(undefined4 *)(param_1 + 0x7a8) = local_1b0;
  *(undefined4 *)(param_1 + 0x7ac) = uStack_1ac;
  *(float *)(param_1 + 0x7b0) = fStack_1a8;
  *(float *)(param_1 + 0x7b4) = fStack_1a4;
  *(undefined4 *)puVar1 = (undefined4)local_1c0;
  *(undefined4 *)(param_1 + 0x79c) = local_1c0._4_4_;
  *(int *)(param_1 + 0x7a0) = iStack_1b8;
  *(undefined4 *)(param_1 + 0x7a4) = uStack_1b4;
  _ZN4core3ptr54drop_in_place_LT_alacritty__display__DisplayUpdate_GT_17h6af71f2fb5d8a7e2E
            (local_110);
  return;
}