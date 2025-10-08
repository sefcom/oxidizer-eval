void _ZN9alacritty8renderer8platform17create_gl_context17h408088c937a1fb7fE
               (undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  int local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined4 local_1f8;
  undefined2 local_1f4;
  undefined local_1f2;
  undefined uStack_1f1;
  undefined uStack_1f0;
  undefined6 uStack_1ef;
  undefined local_1e9;
  int local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined local_3a;
  undefined8 local_39;
  undefined local_31;
  
  uVar6 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  local_220 = 2;
  local_210 = 0x10;
  local_1f8 = 2;
  local_1f4 = CONCAT11(3 < uVar6,1);
  local_1f2 = 2;
  uStack_1f1 = 0;
  uStack_1f0 = 4;
  lVar8 = 0x70;
  if (*param_2 != '\0') {
    lVar8 = 0x5c;
  }
  if ((*(byte *)(*(long *)(param_2 + 8) + lVar8) & 1) != 0) {
    uStack_1f1 = 3;
  }
  _ZN73__LT_glutin__context__ContextAttributes_u20_as_u20_core__clone__Clone_GT_5clone17he394f954a637a5dcE
            (&local_2a8,&local_220);
  local_1a8 = CONCAT44(uStack_2a4,local_2a8);
  uStack_1a0 = CONCAT44(uStack_29c,uStack_2a0);
  local_a4 = uStack_274;
  local_198 = *(undefined4 *)param_4;
  uStack_194 = *(undefined4 *)((long)param_4 + 4);
  uStack_190 = *(undefined4 *)(param_4 + 1);
  uStack_18c = *(undefined4 *)((long)param_4 + 0xc);
  local_188 = param_4[2];
  _ZN73__LT_glutin__context__ContextAttributes_u20_as_u20_core__clone__Clone_GT_5clone17he394f954a637a5dcE
            (&local_2a8,&local_220);
  local_6c = uStack_274;
  local_168 = *param_4;
  uStack_160 = param_4[1];
  local_158 = param_4[2];
  local_148 = local_220;
  uVar4 = local_148;
  uStack_140 = uStack_218;
  uVar5 = uStack_140;
  local_39 = CONCAT62(uStack_1ef,CONCAT11(uStack_1f0,uStack_1f1));
  local_31 = local_1e9;
  uVar7 = *param_4;
  uVar1 = param_4[1];
  local_128 = param_4[2];
  local_e8 = 0;
  local_e0 = 3;
  local_c8 = CONCAT44(uStack_194,local_198);
  uStack_c0 = CONCAT44(uStack_18c,uStack_190);
  local_d8 = local_1a8;
  uStack_d0 = uStack_1a0;
  local_b8 = local_188;
  local_b0 = 0x3030100;
  local_78 = 0x20101;
  local_148._0_4_ = (undefined4)local_220;
  local_148._4_4_ = (undefined4)((ulong)local_220 >> 0x20);
  uStack_140._0_4_ = (undefined4)uStack_218;
  uStack_140._4_4_ = (undefined4)((ulong)uStack_218 >> 0x20);
  local_138._0_4_ = (undefined4)uVar7;
  local_138._4_4_ = (undefined4)((ulong)uVar7 >> 0x20);
  uStack_130._0_4_ = (undefined4)uVar1;
  uStack_130._4_4_ = (undefined4)((ulong)uVar1 >> 0x20);
  local_58 = (undefined4)local_138;
  uStack_54 = local_138._4_4_;
  uStack_50 = (undefined4)uStack_130;
  uStack_4c = uStack_130._4_4_;
  local_68 = (undefined4)local_148;
  uStack_64 = local_148._4_4_;
  uStack_60 = (undefined4)uStack_140;
  uStack_5c = uStack_140._4_4_;
  local_40 = 0x1020100;
  local_3c = local_1f4;
  local_3a = 1;
  local_148 = uVar4;
  uStack_140 = uVar5;
  local_138 = uVar7;
  uStack_130 = uVar1;
  local_90 = local_168;
  uStack_88 = uStack_160;
  local_80 = local_158;
  local_48 = local_128;
  _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h211b113f5f8b0d20E
            (&local_2a8,&local_e8);
  if (local_2a8 == 3) {
    uVar7 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)
                      (&PTR_s_alacritty_src_renderer_platform__00983908);
                    /* catch() { ... } // from try @ 00561e10 with catch @ 00561ec9 */
                    /* try { // try from 00561efc to 00561f05 has its CatchHandler @ 00561f0e */
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_glutin__context__NotCurrentContext_C_glutin__error__Error_GT__GT_17h6d158cb2c1654f91E
              (&local_268);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar7);
  }
  local_1c8 = local_288;
  uStack_1c4 = uStack_284;
  uStack_1c0 = uStack_280;
  uStack_1bc = uStack_27c;
  local_1d8 = local_298;
  uStack_1d4 = uStack_294;
  uStack_1d0 = uStack_290;
  uStack_1cc = uStack_28c;
  local_1e8 = local_2a8;
  uStack_1e4 = uStack_2a4;
  uStack_1e0 = uStack_2a0;
  uStack_1dc = uStack_29c;
  local_228 = param_1;
  (*(code *)
    PTR__ZN71__LT_glutin__display__Display_u20_as_u20_glutin__display__GlDisplay_GT_14create_context17h0aad93cc74e20072E_009e0008
  )(&local_268,param_2,param_3,&local_1e8);
  iVar3 = local_268;
  _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h211b113f5f8b0d20E
            (&local_120,&local_e8);
  puVar2 = 
  PTR__ZN71__LT_glutin__display__Display_u20_as_u20_glutin__display__GlDisplay_GT_14create_context17h0aad93cc74e20072E_009e0008
  ;
  if ((iVar3 != 2) && (CONCAT44(uStack_11c,local_120) != 3)) {
    do {
      local_1b8 = local_f0;
      local_1c8 = local_100;
      uStack_1c4 = uStack_fc;
      uStack_1c0 = uStack_f8;
      uStack_1bc = uStack_f4;
      local_1d8 = local_110;
      uStack_1d4 = uStack_10c;
      uStack_1d0 = uStack_108;
      uStack_1cc = uStack_104;
      local_1e8 = local_120;
      uStack_1e4 = uStack_11c;
      uStack_1e0 = uStack_118;
      uStack_1dc = uStack_114;
                    /* try { // try from 00561e10 to 00561e23 has its CatchHandler @ 00561ec9 */
      (*(code *)puVar2)(&local_2a8,param_2,param_3,&local_1e8);
                    /* try { // try from 00561e24 to 00561e2b has its CatchHandler @ 00561ece */
      _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_glutin__context__NotCurrentContext_C_glutin__error__Error_GT__GT_17h6d158cb2c1654f91E
                (&local_268);
      iVar3 = local_2a8;
      local_238 = uStack_278;
      uStack_234 = uStack_274;
      uStack_230 = uStack_270;
      uStack_22c = uStack_26c;
      local_248 = local_288;
      uStack_244 = uStack_284;
      uStack_240 = uStack_280;
      uStack_23c = uStack_27c;
      local_258 = local_298;
      uStack_254 = uStack_294;
      uStack_250 = uStack_290;
      uStack_24c = uStack_28c;
      local_268 = local_2a8;
      uStack_264 = uStack_2a4;
      uStack_260 = uStack_2a0;
      uStack_25c = uStack_29c;
      _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h211b113f5f8b0d20E
                (&local_120,&local_e8);
      if (iVar3 == 2) break;
    } while (CONCAT44(uStack_11c,local_120) != 3);
  }
  local_228[6] = CONCAT44(uStack_234,local_238);
  local_228[7] = CONCAT44(uStack_22c,uStack_230);
  local_228[4] = CONCAT44(uStack_244,local_248);
  local_228[5] = CONCAT44(uStack_23c,uStack_240);
  local_228[2] = CONCAT44(uStack_254,local_258);
  local_228[3] = CONCAT44(uStack_24c,uStack_250);
  *local_228 = CONCAT44(uStack_264,local_268);
  local_228[1] = CONCAT44(uStack_25c,uStack_260);
  return;
}