void _ZN9alacritty8renderer4text5glsl313Glsl3Renderer3new17hfee88dad790d71d0E(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined auVar8 [16];
  undefined4 local_a0;
  undefined4 local_9c;
  ulong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar6 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (2 < uVar6) {
    local_88 = &PTR_s_Using_OpenGL_3_3_renderer_00983f50;
    uStack_80 = 1;
    uStack_7c = 0;
    local_78 = 8;
    uStack_74 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_38 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                         (&PTR_s_alacritty_src_renderer_text_glsl_00983f60);
    local_58 = &DAT_001f7b50;
    local_50 = 0x20;
    local_48 = &DAT_001f7b50;
    local_40 = 0x20;
    _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_88,3,&local_58);
  }
  _ZN9alacritty8renderer4text5glsl317TextShaderProgram3new17h33d0a0950f87c578E(&local_88);
  uVar5 = uStack_80;
  local_58 = (undefined *)CONCAT44(local_78,uStack_7c);
  local_90 = uStack_74;
  if (local_88 == (undefined **)0x4) {
    local_50 = CONCAT44(local_50._4_4_,uStack_74);
    local_a0 = 0;
    local_9c = 0;
    local_98 = (ulong)local_78 << 0x20;
    (*(code *)_ZN9alacritty2gl7storage6Enable17hc33911a3f611e19cE_0)(0xbe2);
    (*(code *)_ZN9alacritty2gl7storage9BlendFunc17ha142700221b021d9E_0)(0x88f9,0x88fa);
    (*(code *)_ZN9alacritty2gl7storage9DepthMask17h5bafd1e2e308f05cE_0)(0);
    (*(code *)_ZN9alacritty2gl7storage15GenVertexArrays17h4e7aa93504329e19E_0)(1,&local_a0);
    (*(code *)_ZN9alacritty2gl7storage10GenBuffers17h4563f51a284cec65E_0)(1,&local_9c);
    (*(code *)_ZN9alacritty2gl7storage10GenBuffers17h4563f51a284cec65E_0)(1,&local_98);
    (*(code *)_ZN9alacritty2gl7storage15BindVertexArray17h3d998acb574d7edfE_0)(local_a0);
    local_88._0_4_ = _DAT_001e82b0;
    local_88._4_4_ = _UNK_001e82b4;
    uStack_80 = _UNK_001e82b8;
    uStack_7c = _UNK_001e82bc;
    local_78 = 2;
    uStack_74 = 3;
    (*(code *)_ZN9alacritty2gl7storage10BindBuffer17h43fb2d60276f0a9bE_0)(0x8893,local_9c);
    (*(code *)_ZN9alacritty2gl7storage10BufferData17hb67d49aaaf64b9deE_0)
              (0x8893,0x18,&local_88,0x88e4);
    (*(code *)_ZN9alacritty2gl7storage10BindBuffer17h43fb2d60276f0a9bE_0)
              (0x8892,local_98 & 0xffffffff);
    (*(code *)_ZN9alacritty2gl7storage10BufferData17hb67d49aaaf64b9deE_0)
              (0x8892,&DAT_00240000,0,0x88e0);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0)
              (0,2,0x1403,0,0x24,0);
    (*(code *)_ZN9alacritty2gl7storage23EnableVertexAttribArray17h9890488787db9662E_0)(0);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribDivisor17hbde0698143c4a369E_0)(0,1);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0)
              (1,4,0x1402,0,0x24,4);
    (*(code *)_ZN9alacritty2gl7storage23EnableVertexAttribArray17h9890488787db9662E_0)(1);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribDivisor17hbde0698143c4a369E_0)(1,1);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0)
              (2,4,0x1406,0,0x24,0xc);
    (*(code *)_ZN9alacritty2gl7storage23EnableVertexAttribArray17h9890488787db9662E_0)(2);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribDivisor17hbde0698143c4a369E_0)(2,1);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0)
              (3,4,0x1401,0,0x24,0x1c);
    (*(code *)_ZN9alacritty2gl7storage23EnableVertexAttribArray17h9890488787db9662E_0)(3);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribDivisor17hbde0698143c4a369E_0)(3,1);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribPointer17hdd17f62548c1ce0aE_0)
              (4,4,0x1401,0,0x24,0x20);
    (*(code *)_ZN9alacritty2gl7storage23EnableVertexAttribArray17h9890488787db9662E_0)(4);
    (*(code *)_ZN9alacritty2gl7storage19VertexAttribDivisor17hbde0698143c4a369E_0)(4,1);
    (*(code *)_ZN9alacritty2gl7storage15BindVertexArray17h3d998acb574d7edfE_0)(0);
    (*(code *)_ZN9alacritty2gl7storage10BindBuffer17h43fb2d60276f0a9bE_0)(0x8892,0);
    (*(code *)_ZN9alacritty2gl7storage10BindBuffer17h43fb2d60276f0a9bE_0)(0x8893,0);
    uVar3 = local_9c;
    uVar2 = local_a0;
    uVar4 = (undefined4)local_98;
    puVar7 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(4,0x1c,0);
    if (puVar7 == (undefined4 *)0x0) {
                    /* try { // try from 005691e1 to 005691f0 has its CatchHandler @ 0056920f */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_009de8b0)(4,0x1c);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
                    /* try { // try from 005690f9 to 00569107 has its CatchHandler @ 00569202 */
    _ZN9alacritty8renderer4text5atlas5Atlas3new17hbd21f71ac8ef989eE(&local_88,0);
    puVar7[3] = uStack_7c;
    puVar7[4] = local_78;
    puVar7[5] = uStack_74;
    puVar7[6] = (undefined4)local_70;
    *puVar7 = (undefined4)local_88;
    puVar7[1] = local_88._4_4_;
    puVar7[2] = uStack_80;
    puVar7[3] = uStack_7c;
    local_88 = (undefined **)0x1;
    uStack_80 = SUB84(puVar7,0);
    uStack_7c = (undefined4)((ulong)puVar7 >> 0x20);
    local_78 = 1;
    uStack_74 = 0;
                    /* try { // try from 00569132 to 0056914c has its CatchHandler @ 005691f3 */
    auVar8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h6d79adff25664689E
                       (0x10000,4,0x24,&PTR_s_alacritty_src_renderer_text_glsl_00983f78);
    *(undefined4 *)((long)param_1 + 0x44) = (undefined4)local_50;
    *(undefined **)((long)param_1 + 0x3c) = local_58;
    *param_1 = local_88;
    param_1[1] = CONCAT44(uStack_7c,uStack_80);
    param_1[2] = CONCAT44(uStack_74,local_78);
    *(undefined (*) [16])(param_1 + 3) = auVar8;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 7) = uVar5;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = uVar2;
    *(undefined4 *)((long)param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0xb) = uVar4;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_74;
    *(undefined **)((long)param_1 + 0x14) = local_58;
    param_1[1] = local_88;
    *(undefined4 *)(param_1 + 2) = uStack_80;
    param_1[4] = local_70;
    *param_1 = 0x8000000000000000;
  }
  return;
}