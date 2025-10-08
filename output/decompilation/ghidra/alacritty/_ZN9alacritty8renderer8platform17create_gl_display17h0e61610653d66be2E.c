void _ZN9alacritty8renderer8platform17create_gl_display17h0e61610653d66be2E
               (long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long local_c0;
  long local_b8;
  char *local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined **local_88;
  long local_80;
  undefined **local_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  undefined *local_48;
  code *local_40;
  undefined local_38 [24];
  
  local_a8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h314575a5fb231377E();
  local_b0 = (char *)(param_3 & 0xffffffff ^ 3);
  local_a0 = "";
  (*(code *)PTR__ZN6glutin7display7Display3new17h7fa93ffe55699b54E_009dffb8)
            (&local_88,param_2,&local_b0);
  if (local_88 == (undefined **)0x2) {
    local_c0 = local_80;
    local_b8 = (long)local_78;
                    /* try { // try from 0056127c to 005612a9 has its CatchHandler @ 005613ac */
    uVar1 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar1) {
      (*(code *)
        PTR__ZN71__LT_glutin__display__Display_u20_as_u20_glutin__display__GlDisplay_GT_14version_string17h0b7915697facbe8dE_009dffc0
      )(local_38,&local_c0);
      local_40 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_88 = &PTR_s_Using_00983828;
      local_80 = 1;
      lStack_68 = 0;
      local_78 = &local_48;
      local_70 = 1;
      local_48 = local_38;
                    /* try { // try from 005612f5 to 0056133d has its CatchHandler @ 0056139a */
      local_90 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s_alacritty_src_renderer_platform__00983868);
      local_b0 = "alacritty::renderer::platform";
      local_a8 = 0x1d;
      local_a0 = "alacritty::renderer::platform";
      local_98 = 0x1d;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_88,3,&local_b0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_38);
      local_80 = local_c0;
      local_78 = (undefined **)local_b8;
    }
    param_1[1] = local_80;
    param_1[2] = (long)local_78;
    *param_1 = 2;
  }
  else {
    param_1[7] = local_50;
    param_1[5] = local_60;
    param_1[6] = lStack_58;
    param_1[3] = local_70;
    param_1[4] = lStack_68;
    *param_1 = (long)local_88;
    param_1[1] = local_80;
    param_1[2] = (long)local_78;
  }
  return;
}