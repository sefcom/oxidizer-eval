void _ZN9alacritty8renderer4text5gles213Gles2Renderer3new17h5d58c9a3ee6f4e47E
               (undefined8 *param_1,ulong param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined local_78 [16];
  undefined8 local_68;
  uint local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar9 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (2 < uVar9) {
    local_d8 = &PTR_s_Using_OpenGL_ES_2_0_renderer_00983db8;
    uStack_d0 = 1;
    uStack_cc = 0;
    local_c8 = 8;
    uStack_c4 = 0;
    local_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    local_80 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                         (&PTR_s_alacritty_src_renderer_text_gles_00983de8);
    local_a0 = &DAT_001f7ab0;
    uStack_98 = 0x20;
    local_90 = &DAT_001f7ab0;
    uStack_88 = 0x20;
    _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_d8,3,&local_a0);
  }
  if ((char)(param_2 & 0xffffffff) == '\0') {
    uVar8 = 0;
  }
  else {
    cVar7 = _ZN9alacritty8renderer12GlExtensions8contains17h085256d27559bf27E
                      ("GL_EXT_blend_func_extended",0x1a);
    uVar8 = (uint)CONCAT71((int7)((param_2 & 0xffffffff) >> 8),1);
    if (cVar7 == '\0') {
      uVar8 = _ZN9alacritty8renderer12GlExtensions8contains17h085256d27559bf27E
                        ("GL_ARB_blend_func_extended",0x1a);
    }
  }
  if ((char)param_3 != '\0') {
    uVar9 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar9) {
      local_d8 = &PTR_s_Running_on_OpenGL_ES_context_00983dc8;
      uStack_d0 = 1;
      uStack_cc = 0;
      local_c8 = 8;
      uStack_c4 = 0;
      local_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      local_80 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s_alacritty_src_renderer_text_gles_00983e00);
      local_a0 = &DAT_001f7ab0;
      uStack_98 = 0x20;
      local_90 = &DAT_001f7ab0;
      uStack_88 = 0x20;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_d8,3,&local_a0);
    }
  }
  if ((char)uVar8 != '\0') {
    uVar9 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar9) {
      local_d8 = &PTR_s_Using_dual_source_blending_00983dd8;
      uStack_d0 = 1;
      uStack_cc = 0;
      local_c8 = 8;
      uStack_c4 = 0;
      local_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      local_80 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s_alacritty_src_renderer_text_gles_00983e18);
      local_a0 = &DAT_001f7ab0;
      uStack_98 = 0x20;
      local_90 = &DAT_001f7ab0;
      uStack_88 = 0x20;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_d8,3,&local_a0);
    }
  }
  _ZN9alacritty8renderer4text5gles217TextShaderProgram3new17hb8d7a57899d23c48E
            (&local_d8,uVar8 & 0xff);
  uVar5 = uStack_d0;
  local_58 = CONCAT44(local_c8,uStack_cc);
  if (local_d8 == (undefined **)0x4) {
    local_e4 = 0;
    local_e0 = 0;
    local_dc = 0;
    local_60 = uVar8;
    local_5c = param_3;
    local_50 = param_1;
                    /* try { // try from 00568012 to 0056802c has its CatchHandler @ 0056840c */
    local_78 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                         (0x17ffa,2,2,&PTR_s_alacritty_src_renderer_text_gles_00983e30);
    local_68 = 0;
    iVar12 = 0;
    for (sVar11 = 0; sVar11 != 0x3fff; sVar11 = sVar11 + 1) {
                    /* try { // try from 00568061 to 005680dc has its CatchHandler @ 00568411 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4f07dbb9e4bb57d1E
                (local_78,iVar12,&PTR_s_alacritty_src_renderer_text_gles_00983e48);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4f07dbb9e4bb57d1E
                (local_78,iVar12 + 1,&PTR_s_alacritty_src_renderer_text_gles_00983e60);
      iVar13 = iVar12 + 3;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4f07dbb9e4bb57d1E
                (local_78,iVar13,&PTR_s_alacritty_src_renderer_text_gles_00983e78);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4f07dbb9e4bb57d1E
                (local_78,iVar12 + 1,&PTR_s_alacritty_src_renderer_text_gles_00983e90);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4f07dbb9e4bb57d1E
                (local_78,iVar12 + 2,&PTR_s_alacritty_src_renderer_text_gles_00983ea8);
      iVar12 = iVar12 + 4;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4f07dbb9e4bb57d1E
                (local_78,iVar13,&PTR_s_alacritty_src_renderer_text_gles_00983ec0);
    }
    (*(code *)_ZN9alacritty2gl7storage6Enable17hc33911a3f611e19cE_0)(0xbe2);
    (*(code *)_ZN9alacritty2gl7storage9DepthMask17h5bafd1e2e308f05cE_0)(0);
    (*(code *)_ZN9alacritty2gl7storage15GenVertexArrays17h4e7aa93504329e19E_0)(1,&local_e4);
    (*(code *)_ZN9alacritty2gl7storage10GenBuffers17h4563f51a284cec65E_0)(1,&local_dc);
    (*(code *)_ZN9alacritty2gl7storage10GenBuffers17h4563f51a284cec65E_0)(1,&local_e0);
    (*(code *)_ZN9alacritty2gl7storage15BindVertexArray17h3d998acb574d7edfE_0)(local_e4);
    (*(code *)_ZN9alacritty2gl7storage10BindBuffer17h43fb2d60276f0a9bE_0)(0x8893,local_dc);
    (*(code *)_ZN9alacritty2gl7storage10BufferData17hb67d49aaaf64b9deE_0)
              (0x8893,local_78._0_8_ * 2,local_78._8_8_,0x88e4);
    (*(code *)_ZN9alacritty2gl7storage10BindBuffer17h43fb2d60276f0a9bE_0)(0x8892,local_e0);
    (*(code *)_ZN9alacritty2gl7storage10BufferData17hb67d49aaaf64b9deE_0)(0x8892,0x17ffa0,0,0x88e0);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0)
              (0,2,0x1402,0,0x18,0);
    (*(code *)_ZN9alacritty2gl7storage23EnableVertexAttribArray17h9890488787db9662E_0)(0);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0)
              (1,2,0x1402,0,0x18,4);
    (*(code *)_ZN9alacritty2gl7storage23EnableVertexAttribArray17h9890488787db9662E_0)(1);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0)
              (2,2,0x1406,0,0x18,8);
    (*(code *)_ZN9alacritty2gl7storage23EnableVertexAttribArray17h9890488787db9662E_0)(2);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0)
              (3,4,0x1401,0,0x18,0x10);
    (*(code *)_ZN9alacritty2gl7storage23EnableVertexAttribArray17h9890488787db9662E_0)(3);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0)
              (4,4,0x1401,0,0x18,0x14);
    (*(code *)_ZN9alacritty2gl7storage23EnableVertexAttribArray17h9890488787db9662E_0)(4);
    (*(code *)_ZN9alacritty2gl7storage15BindVertexArray17h3d998acb574d7edfE_0)(0);
    (*(code *)_ZN9alacritty2gl7storage10BindBuffer17h43fb2d60276f0a9bE_0)(0x8893,0);
    (*(code *)_ZN9alacritty2gl7storage10BindBuffer17h43fb2d60276f0a9bE_0)(0x8892,0);
    uVar4 = local_dc;
    uVar3 = local_e0;
    uVar2 = local_e4;
    puVar10 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(4,0x1c,0);
    if (puVar10 == (undefined4 *)0x0) {
                    /* try { // try from 005683db to 005683ea has its CatchHandler @ 0056843c */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_009de8b0)(4,0x1c);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
                    /* try { // try from 005682d6 to 005682ea has its CatchHandler @ 005683ff */
    _ZN9alacritty8renderer4text5atlas5Atlas3new17hbd21f71ac8ef989eE(&local_d8,(undefined)local_5c);
    puVar10[3] = uStack_cc;
    puVar10[4] = local_c8;
    puVar10[5] = uStack_c4;
    puVar10[6] = local_c0;
    *puVar10 = (undefined4)local_d8;
    puVar10[1] = local_d8._4_4_;
    puVar10[2] = uStack_d0;
    puVar10[3] = uStack_cc;
    local_48 = 1;
    local_38 = 1;
                    /* try { // try from 0056831e to 00568327 has its CatchHandler @ 005683ed */
    uStack_40 = puVar10;
    _ZN9alacritty8renderer4text5gles25Batch3new17h4d382938e71c57f0E(&local_a0);
    local_c8 = (undefined4)local_38;
    uStack_c4 = (undefined4)((ulong)local_38 >> 0x20);
    local_d8 = (undefined **)local_48;
    uStack_d0 = (undefined4)uStack_40;
    uStack_cc = uStack_40._4_4_;
    local_c0 = SUB84(local_a0,0);
    uStack_bc = (undefined4)((ulong)local_a0 >> 0x20);
    uStack_b8 = uStack_98;
    uVar6 = uStack_b8;
    local_b0 = (undefined4)local_90;
    uStack_ac = local_90._4_4_;
    uStack_a8 = (undefined4)uStack_88;
    uStack_a4 = uStack_88._4_4_;
    local_50[6] = uStack_88;
    uStack_b8._0_4_ = (undefined4)uStack_98;
    uStack_b8._4_4_ = (undefined4)((ulong)uStack_98 >> 0x20);
    *(undefined4 *)(local_50 + 4) = (undefined4)uStack_b8;
    *(undefined4 *)((long)local_50 + 0x24) = uStack_b8._4_4_;
    *(undefined4 *)(local_50 + 5) = (undefined4)local_90;
    *(undefined4 *)((long)local_50 + 0x2c) = local_90._4_4_;
    local_50[2] = local_38;
    local_50[3] = local_a0;
    *(undefined4 *)local_50 = (undefined4)local_48;
    *(undefined4 *)((long)local_50 + 4) = local_48._4_4_;
    *(undefined4 *)(local_50 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((long)local_50 + 0xc) = uStack_40._4_4_;
    local_50[7] = 0;
    *(undefined4 *)(local_50 + 8) = uVar5;
    *(undefined8 *)((long)local_50 + 0x44) = local_58;
    *(undefined4 *)((long)local_50 + 0x4c) = uVar2;
    *(undefined4 *)(local_50 + 10) = uVar3;
    *(undefined4 *)((long)local_50 + 0x54) = uVar4;
    *(undefined4 *)(local_50 + 0xb) = 0;
    *(char *)((long)local_50 + 0x5c) = (char)local_60;
    uStack_b8 = uVar6;
    _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u16_GT__GT_17hbd38f3de4748e35fE
              (local_78._0_8_,local_78._8_8_);
  }
  else {
    *(undefined4 *)((long)param_1 + 0x24) = uStack_bc;
    *(ulong *)((long)param_1 + 0x1c) = CONCAT44(local_c0,uStack_c4);
    param_1[1] = local_d8;
    *(undefined4 *)(param_1 + 2) = uStack_d0;
    *(undefined8 *)((long)param_1 + 0x14) = local_58;
    *param_1 = 0x8000000000000000;
  }
  return;
}