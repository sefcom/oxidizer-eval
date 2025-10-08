void _ZN13turborepo_lsp33report_invalid_packages_and_tasks17h03a08d83b24e6b4cE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined **ppuVar1;
  undefined uVar2;
  char cVar3;
  long lVar4;
  undefined8 extraout_RDX;
  long **pplVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined **local_310;
  undefined8 local_308;
  undefined **local_300;
  undefined **ppuStack_2f8;
  long **local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248 [3];
  undefined *local_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  long *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined ***local_1b8;
  code *pcStack_1b0;
  undefined ***local_1a8;
  code *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined **local_100;
  undefined8 uStack_f8;
  long **local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined **local_40;
  undefined8 local_38;
  
  pplVar5 = *(long ***)(param_5 + 8);
  uVar6 = *(undefined8 *)(param_5 + 0x10);
  local_60 = param_2;
  local_50 = param_2;
  _ZN4core3str21__LT_impl_u20_str_GT_10split_once17h438cc830bd5f355fE(&local_300,pplVar5,uVar6);
  ppuVar1 = local_300;
  local_58 = ppuStack_2f8;
  if (local_300 != (undefined **)0x0) {
    pplVar5 = local_2f0;
    uVar6 = local_2e8;
  }
  local_80 = (long)pplVar5;
  local_78 = uVar6;
  (*(code *)PTR__ZN13turborepo_lsp14convert_ranges17h39b7e0288b6c6720E_00a82f50)
            (&local_70,param_3,*(long *)(param_5 + 0x18) + 1,*(long *)(param_5 + 0x20) + -1);
  auVar7 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h149fda80491211aeE
                     (param_1,pplVar5,uVar6);
  uVar6 = local_58;
  lVar4 = auVar7._0_8_;
  local_48 = lVar4 + 0x18;
  if (lVar4 == 0) {
    local_48 = 0;
  }
  local_40 = local_300;
  local_38 = local_58;
  if (local_300 == (undefined **)0x0) {
    if (lVar4 != 0) {
      return;
    }
    local_1b8 = (undefined ***)&local_80;
    pcStack_1b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h577d8a992b87d8f5E;
    local_300 = &PTR_DAT_00a2f718;
    ppuStack_2f8 = (undefined **)0x2;
    uStack_2e0 = 0;
    local_2f0 = (long **)&local_1b8;
    local_2e8 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h59d275af866c4f6aE
              (&local_1d0,0,auVar7._8_8_,&local_300);
                    /* try { // try from 007870c3 to 007870db has its CatchHandler @ 0078780f */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h32d63532620108f6E
              (&local_300,&DAT_002e4258,0x12);
    local_f0 = local_2f0;
    local_100 = local_300;
    uStack_f8 = ppuStack_2f8;
    local_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_248[0] = 0x8000000000000001;
    local_2e8 = 0x8000000000000000;
    local_290 = 0x8000000000000000;
    local_300 = (undefined **)0x0;
    ppuStack_2f8 = (undefined **)0x1;
    local_2f0 = (long **)0x0;
    local_278 = 0x8000000000000000;
    local_260 = 0x8000000000000000;
    local_230 = &DAT_8000000000000005;
    local_98 = local_70;
    uStack_90 = uStack_68;
    local_a0 = 0x100000001;
    local_150 = local_298;
    local_160 = local_2a8;
    uStack_158 = uStack_2a0;
    local_170 = local_2b8;
    uStack_168 = uStack_2b0;
    local_180 = local_2c8;
    uStack_178 = uStack_2c0;
    local_190 = local_2d8;
    uStack_188 = uStack_2d0;
    local_1a0 = (code *)0x8000000000000000;
    uStack_198 = uStack_2e0;
    local_138 = local_280;
    local_148 = 0x8000000000000000;
    uStack_140 = uStack_288;
    local_1a8 = (undefined ***)local_1c0;
    local_1b8 = (undefined ***)local_1d0;
    pcStack_1b0 = (code *)uStack_1c8;
    local_120 = local_268;
    local_130 = 0x8000000000000000;
    uStack_128 = uStack_270;
    local_108 = local_250;
    local_118 = 0x8000000000000000;
    uStack_110 = uStack_258;
    local_a8 = local_1f0;
    local_b8 = local_200;
    uStack_b4 = uStack_1fc;
    uStack_b0 = uStack_1f8;
    uStack_ac = uStack_1f4;
    local_c8 = local_210;
    uStack_c4 = uStack_20c;
    uStack_c0 = uStack_208;
    uStack_bc = uStack_204;
    local_d8 = local_220;
    uStack_d4 = uStack_21c;
    uStack_d0 = uStack_218;
    uStack_cc = uStack_214;
    local_e8 = 5;
    uStack_e4 = 0x80000000;
    uStack_e0 = uStack_228;
    uStack_dc = uStack_224;
                    /* try { // try from 007872a9 to 007872c0 has its CatchHandler @ 0078780d */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6b0315878bb07ad9E(param_4,&local_1b8,&PTR_DAT_00a2f738);
  }
  else {
    auVar7 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h399cc4a57b2ec689E
                       (local_60,&local_40);
    if (auVar7._0_8_ == 0) {
      local_310 = local_300;
      local_308 = uVar6;
      local_1b8 = &local_310;
      pcStack_1b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h577d8a992b87d8f5E;
      local_1a8 = (undefined ***)&local_50;
      local_1a0 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h4889cd6ec5dd8c16E;
      local_300 = &PTR_DAT_00a2f6c8;
      ppuStack_2f8 = (undefined **)0x2;
      uStack_2e0 = 0;
      local_2f0 = (long **)&local_1b8;
      local_2e8 = 2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h59d275af866c4f6aE
                (&local_1d0,0,auVar7._8_8_,&local_300);
                    /* try { // try from 00787356 to 0078736e has its CatchHandler @ 00787838 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h32d63532620108f6E
                (&local_300,&DAT_002e41e8,0x15);
      local_f0 = local_2f0;
      local_100 = local_300;
      uStack_f8 = ppuStack_2f8;
      local_1e8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_248[0] = 0x8000000000000001;
      local_2e8 = 0x8000000000000000;
      local_290 = 0x8000000000000000;
      local_300 = (undefined **)0x0;
      ppuStack_2f8 = (undefined **)0x1;
      local_2f0 = (long **)0x0;
      local_278 = 0x8000000000000000;
      local_260 = 0x8000000000000000;
      local_230 = &DAT_8000000000000005;
      local_98 = local_70;
      uStack_90 = uStack_68;
      local_a0 = 0x100000001;
      local_150 = local_298;
      local_160 = local_2a8;
      uStack_158 = uStack_2a0;
      local_170 = local_2b8;
      uStack_168 = uStack_2b0;
      local_180 = local_2c8;
      uStack_178 = uStack_2c0;
      local_190 = local_2d8;
      uStack_188 = uStack_2d0;
      local_1a0 = (code *)0x8000000000000000;
      uStack_198 = uStack_2e0;
      local_138 = local_280;
      local_148 = 0x8000000000000000;
      uStack_140 = uStack_288;
      local_1a8 = (undefined ***)local_1c0;
      local_1b8 = (undefined ***)local_1d0;
      pcStack_1b0 = (code *)uStack_1c8;
      local_120 = local_268;
      local_130 = 0x8000000000000000;
      uStack_128 = uStack_270;
      local_108 = local_250;
      local_118 = 0x8000000000000000;
      uStack_110 = uStack_258;
      local_a8 = local_1f0;
      local_b8 = local_200;
      uStack_b4 = uStack_1fc;
      uStack_b0 = uStack_1f8;
      uStack_ac = uStack_1f4;
      local_c8 = local_210;
      uStack_c4 = uStack_20c;
      uStack_c0 = uStack_208;
      uStack_bc = uStack_204;
      local_d8 = local_220;
      uStack_d4 = uStack_21c;
      uStack_d0 = uStack_218;
      uStack_cc = uStack_214;
      local_e8 = 5;
      uStack_e4 = 0x80000000;
      uStack_e0 = uStack_228;
      uStack_dc = uStack_224;
                    /* try { // try from 0078753c to 00787553 has its CatchHandler @ 00787815 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6b0315878bb07ad9E(param_4,&local_1b8,&PTR_DAT_00a2f780)
      ;
    }
    else if (lVar4 == 0) {
      local_310 = local_300;
      local_308 = uVar6;
      local_1b8 = (undefined ***)&local_80;
      pcStack_1b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h577d8a992b87d8f5E;
      local_1a8 = &local_310;
      local_1a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h577d8a992b87d8f5E;
      local_300 = &PTR_DAT_00a2f6e8;
      ppuStack_2f8 = (undefined **)0x3;
      uStack_2e0 = 0;
      local_2f0 = (long **)&local_1b8;
      local_2e8 = 2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h59d275af866c4f6aE
                (&local_1d0,0,auVar7._8_8_,&local_300);
                    /* try { // try from 007875e2 to 007875fa has its CatchHandler @ 00787813 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h32d63532620108f6E
                (&local_300,&DAT_002e4258,0x12);
      local_f0 = local_2f0;
      local_100 = local_300;
      uStack_f8 = ppuStack_2f8;
      local_1e8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_248[0] = 0x8000000000000001;
      local_2e8 = 0x8000000000000000;
      local_290 = 0x8000000000000000;
      local_300 = (undefined **)0x0;
      ppuStack_2f8 = (undefined **)0x1;
      local_2f0 = (long **)0x0;
      local_278 = 0x8000000000000000;
      local_260 = 0x8000000000000000;
      local_230 = &DAT_8000000000000005;
      local_98 = local_70;
      uStack_90 = uStack_68;
      local_a0 = 0x100000001;
      local_150 = local_298;
      local_160 = local_2a8;
      uStack_158 = uStack_2a0;
      local_170 = local_2b8;
      uStack_168 = uStack_2b0;
      local_180 = local_2c8;
      uStack_178 = uStack_2c0;
      local_190 = local_2d8;
      uStack_188 = uStack_2d0;
      local_1a0 = (code *)0x8000000000000000;
      uStack_198 = uStack_2e0;
      local_138 = local_280;
      local_148 = 0x8000000000000000;
      uStack_140 = uStack_288;
      local_1a8 = (undefined ***)local_1c0;
      local_1b8 = (undefined ***)local_1d0;
      pcStack_1b0 = (code *)uStack_1c8;
      local_120 = local_268;
      local_130 = 0x8000000000000000;
      uStack_128 = uStack_270;
      local_108 = local_250;
      local_118 = 0x8000000000000000;
      uStack_110 = uStack_258;
      local_a8 = local_1f0;
      local_b8 = local_200;
      uStack_b4 = uStack_1fc;
      uStack_b0 = uStack_1f8;
      uStack_ac = uStack_1f4;
      local_c8 = local_210;
      uStack_c4 = uStack_20c;
      uStack_c0 = uStack_208;
      uStack_bc = uStack_204;
      local_d8 = local_220;
      uStack_d4 = uStack_21c;
      uStack_d0 = uStack_218;
      uStack_cc = uStack_214;
      local_e8 = 5;
      uStack_e4 = 0x80000000;
      uStack_e0 = uStack_228;
      uStack_dc = uStack_224;
                    /* try { // try from 007877c8 to 007877df has its CatchHandler @ 00787811 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6b0315878bb07ad9E(param_4,&local_1b8,&PTR_DAT_00a2f750)
      ;
    }
    else {
      local_300 = *(undefined ***)(lVar4 + 0x20);
      ppuStack_2f8 = local_300 + *(long *)(lVar4 + 0x28) * 3;
      local_1b8 = &local_40;
      uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17he07728a837d521afE
                        (&local_300,&local_1b8);
      cVar3 = _ZN4core6result19Result_LT_T_C_E_GT_6is_err17hbf0ec1def5a10e89E(uVar2);
      if (cVar3 != '\0') {
        return;
      }
      local_310 = ppuVar1;
      local_308 = uVar6;
      local_1b8 = (undefined ***)&local_80;
      pcStack_1b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h577d8a992b87d8f5E;
      local_1a8 = &local_310;
      local_1a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h577d8a992b87d8f5E;
      local_300 = &PTR_DAT_00a2f6e8;
      ppuStack_2f8 = (undefined **)0x3;
      uStack_2e0 = 0;
      local_2e8 = 2;
      local_2f0 = (long **)&local_1b8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h59d275af866c4f6aE
                (&local_1d0,0,extraout_RDX,&local_300);
                    /* try { // try from 00786e4d to 00786e65 has its CatchHandler @ 0078780b */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h32d63532620108f6E
                (&local_300,&DAT_002e422a,0x1d);
      local_f0 = local_2f0;
      local_100 = local_300;
      uStack_f8 = ppuStack_2f8;
      local_1e8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_248[0] = 0x8000000000000001;
      local_2e8 = 0x8000000000000000;
      local_290 = 0x8000000000000000;
      local_300 = (undefined **)0x0;
      ppuStack_2f8 = (undefined **)0x1;
      local_2f0 = (long **)0x0;
      local_278 = 0x8000000000000000;
      local_260 = 0x8000000000000000;
      local_230 = &DAT_8000000000000005;
      local_98 = local_70;
      uStack_90 = uStack_68;
      local_a0 = 0x100000001;
      local_150 = local_298;
      local_160 = local_2a8;
      uStack_158 = uStack_2a0;
      local_170 = local_2b8;
      uStack_168 = uStack_2b0;
      local_180 = local_2c8;
      uStack_178 = uStack_2c0;
      local_190 = local_2d8;
      uStack_188 = uStack_2d0;
      local_1a0 = (code *)0x8000000000000000;
      uStack_198 = uStack_2e0;
      local_138 = local_280;
      local_148 = 0x8000000000000000;
      uStack_140 = uStack_288;
      local_1a8 = (undefined ***)local_1c0;
      local_1b8 = (undefined ***)local_1d0;
      pcStack_1b0 = (code *)uStack_1c8;
      local_120 = local_268;
      local_130 = 0x8000000000000000;
      uStack_128 = uStack_270;
      local_108 = local_250;
      local_118 = 0x8000000000000000;
      uStack_110 = uStack_258;
      local_a8 = local_1f0;
      local_b8 = local_200;
      uStack_b4 = uStack_1fc;
      uStack_b0 = uStack_1f8;
      uStack_ac = uStack_1f4;
      local_c8 = local_210;
      uStack_c4 = uStack_20c;
      uStack_c0 = uStack_208;
      uStack_bc = uStack_204;
      local_d8 = local_220;
      uStack_d4 = uStack_21c;
      uStack_d0 = uStack_218;
      uStack_cc = uStack_214;
      local_e8 = 5;
      uStack_e4 = 0x80000000;
      uStack_e0 = uStack_228;
      uStack_dc = uStack_224;
                    /* try { // try from 00787033 to 0078704a has its CatchHandler @ 00787809 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6b0315878bb07ad9E(param_4,&local_1b8,&PTR_DAT_00a2f768)
      ;
    }
  }
  _ZN4core3ptr74drop_in_place_LT_core__option__Option_LT_lsp_types__NumberOrString_GT__GT_17h80b64dee79950edaE
            (local_248);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8d58f742fca223bcE(&local_300);
  return;
}