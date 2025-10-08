int * _ZN7uu_expr11syntax_tree7AstNode4eval17h7294554a61514edeE(int *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined uVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong unaff_R12;
  undefined **ppuVar15;
  undefined auVar16 [16];
  uint local_2b8;
  int iStack_2b4;
  uint uStack_2b0;
  int iStack_2ac;
  undefined8 local_2a8;
  int iStack_2a0;
  int iStack_29c;
  ulong local_298;
  int *local_290;
  undefined8 local_288;
  long *local_280;
  long local_278;
  undefined8 local_270 [2];
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  ulong local_220;
  undefined8 uStack_218;
  ulong local_210;
  uint local_208;
  int iStack_204;
  uint uStack_200;
  int iStack_1fc;
  int local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  ulong local_1e8;
  undefined8 local_1d8;
  ulong uStack_1d0;
  ulong local_1c8;
  ulong uStack_1c0;
  ulong local_1b8;
  uint local_1a8;
  int iStack_1a4;
  uint uStack_1a0;
  int iStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  undefined8 local_188;
  long local_178;
  uint local_170;
  undefined4 uStack_16c;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  ulong local_150;
  ulong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulong local_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  uint local_88;
  int iStack_84;
  uint uStack_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  ulong local_68;
  undefined local_58 [40];
  
  local_290 = param_1;
  plVar8 = (long *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8);
  if (plVar8 == (long *)0x0) {
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00251890)(8);
    goto LAB_001a5783;
  }
  unaff_R12 = 0x8000000000000000;
  *plVar8 = param_2;
  local_288 = 1;
  local_270[0] = 0;
  local_260 = 0;
  local_278 = 0;
  plVar2 = (long *)*plVar8;
  uVar10 = 1;
  local_280 = plVar8;
  local_178 = param_2;
  switch(*plVar2) {
  case -0x7fffffffffffffff:
    uVar1 = *(undefined4 *)(plVar2 + 4);
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00251a58
    )(&local_2b8,plVar2 + 1);
    local_238 = local_2a8;
    local_248 = CONCAT44(iStack_2b4,local_2b8);
    uStack_240 = CONCAT44(iStack_2ac,uStack_2b0);
    uStack_250 = 0x8000000000000000;
    local_258 = 0;
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE
              (&local_2b8,local_270,uVar1,&local_258);
    break;
  case -0x7ffffffffffffffe:
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17h99c8b623889323eaE
              (&local_1d8,local_270,*(undefined4 *)(plVar2[2] + 0x20));
                    /* try { // try from 001a5d2a to 001a5d36 has its CatchHandler @ 001a60e3 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17h99c8b623889323eaE
              (&local_2b8,local_270,*(undefined4 *)(plVar2[1] + 0x20));
    plVar12 = plVar2 + 1;
    local_238 = local_1b8;
    local_248 = local_1c8;
    uStack_240 = uStack_1c0;
    local_258 = local_1d8;
    uVar13 = local_258;
    uStack_250 = uStack_1d0;
    local_210 = local_298;
    local_220 = local_2a8;
    uStack_218 = CONCAT44(iStack_29c,iStack_2a0);
    local_230 = CONCAT44(iStack_2b4,local_2b8);
    uStack_228 = CONCAT44(iStack_2ac,uStack_2b0);
    local_258._0_4_ = (int)local_1d8;
    local_258 = uVar13;
    if (((int)local_258 == 2) || (local_230 == 2)) {
      _ZN4core3ptr246drop_in_place_LT__LP_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__C_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__RP__GT_17hbde778e28d7a7b9eE
                (&local_258);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3d6e35a0706b285eE
                (&local_288,plVar2,&PTR_s_src_uu_expr_src_syntax_tree_rs_0024a8a0);
      ppuVar15 = &PTR_s_src_uu_expr_src_syntax_tree_rs_0024a8d0;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3d6e35a0706b285eE
                (&local_288,plVar2[2],&PTR_s_src_uu_expr_src_syntax_tree_rs_0024a8b8);
LAB_001a5e75:
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3d6e35a0706b285eE(&local_288,*plVar12,ppuVar15);
    }
    else {
      local_98 = local_1b8;
      local_a8 = local_1c8;
      uStack_a0 = uStack_1c0;
      local_b8 = local_1d8;
      uStack_b0 = uStack_1d0;
      local_88 = local_2b8;
      iStack_84 = iStack_2b4;
      uStack_80 = uStack_2b0;
      iStack_7c = iStack_2ac;
      uStack_74 = local_2a8._4_4_;
      iStack_70 = iStack_2a0;
      iStack_6c = iStack_29c;
      local_68 = local_298;
                    /* try { // try from 001a5df4 to 001a5e84 has its CatchHandler @ 001a6114 */
      local_78 = (int)local_2a8;
      _ZN7uu_expr11syntax_tree5BinOp4eval17h135374f3f8bf6168E
                (local_58,*(undefined4 *)(plVar2 + 3),*(undefined *)((long)plVar2 + 0x19),&local_88,
                 &local_b8);
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE
                (&local_258,local_270,*(undefined4 *)(plVar2 + 4),local_58);
      _ZN4core3ptr128drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h00a86d471ef57dacE
                (&local_258);
    }
    goto LAB_001a5783;
  case -0x7ffffffffffffffd:
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17h99c8b623889323eaE
              (&local_170,local_270,*(undefined4 *)(plVar2[1] + 0x20));
                    /* try { // try from 001a58b6 to 001a58c7 has its CatchHandler @ 001a60de */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17h99c8b623889323eaE
              (&local_1d8,local_270,*(undefined4 *)(plVar2[2] + 0x20));
                    /* try { // try from 001a58cf to 001a58db has its CatchHandler @ 001a60f5 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17h99c8b623889323eaE
              (&local_2b8,local_270,*(undefined4 *)(plVar2[3] + 0x20));
    plVar12 = plVar2 + 3;
    local_238 = local_150;
    local_258 = CONCAT44(uStack_16c,local_170);
    local_248 = local_160;
    uStack_240 = uStack_158;
    uStack_250 = uStack_168;
    local_210 = local_1b8;
    local_220 = local_1c8;
    uStack_218 = uStack_1c0;
    local_230 = local_1d8;
    uStack_228 = uStack_1d0;
    local_1e8 = local_298;
    local_1f8 = (int)local_2a8;
    iStack_1f4 = local_2a8._4_4_;
    iStack_1f0 = iStack_2a0;
    iStack_1ec = iStack_29c;
    local_208 = local_2b8;
    iStack_204 = iStack_2b4;
    uStack_200 = uStack_2b0;
    iStack_1fc = iStack_2ac;
    if (((local_258 == 2) || (local_1d8 == 2)) || (CONCAT44(iStack_2b4,local_2b8) == 2)) {
      _ZN4core3ptr356drop_in_place_LT__LP_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__C_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__C_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__RP__GT_17hd016b3437cc63792E
                (&local_258);
                    /* try { // try from 001a5a80 to 001a5ac4 has its CatchHandler @ 001a6114 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3d6e35a0706b285eE
                (&local_288,plVar2,&PTR_s_src_uu_expr_src_syntax_tree_rs_0024a8e8);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3d6e35a0706b285eE
                (&local_288,plVar2[1],&PTR_s_src_uu_expr_src_syntax_tree_rs_0024a900);
      ppuVar15 = &PTR_s_src_uu_expr_src_syntax_tree_rs_0024a930;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3d6e35a0706b285eE
                (&local_288,plVar2[2],&PTR_s_src_uu_expr_src_syntax_tree_rs_0024a918);
      goto LAB_001a5e75;
    }
    local_108 = uStack_158;
    uVar6 = local_108;
    uStack_100 = local_150;
    uVar7 = uStack_100;
    local_118 = uStack_168;
    uVar13 = local_118;
    uStack_110 = local_160;
    uVar4 = uStack_110;
    local_148 = local_1d8;
    uStack_140 = uStack_1d0;
    local_138 = local_1c8;
    uStack_130 = uStack_1c0;
    local_128 = local_1b8;
    local_1a8 = local_2b8;
    iStack_1a4 = iStack_2b4;
    uStack_1a0 = uStack_2b0;
    iStack_19c = iStack_2ac;
    local_198 = (int)local_2a8;
    iStack_194 = local_2a8._4_4_;
    iStack_190 = iStack_2a0;
    iStack_18c = iStack_29c;
    local_188 = local_298;
    if ((local_170 & 1) == 0) {
                    /* try { // try from 001a59e6 to 001a59fb has its CatchHandler @ 001a60a3 */
      (*(code *)PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920)
                (&local_1d8,&local_118);
      if ((local_148 & 1) == 0) {
                    /* try { // try from 001a5a0a to 001a5a1b has its CatchHandler @ 001a6084 */
        _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_bigint17hfc488cc1793399d6E
                  (&local_258,&uStack_140);
        uVar13 = uStack_240;
        if ((int)local_258 == 1) {
          _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_uu_expr__ExprError_GT__GT_17h5a4f09785cad4f22E
                    (&local_258);
joined_r0x001a5af4:
          lVar5 = 0;
        }
        else {
          local_2b8 = (uint)local_248;
          iStack_2b4 = local_248._4_4_;
          uStack_2b0 = (uint)uStack_240;
          iStack_2ac = uStack_240._4_4_;
          local_2a8 = local_238;
          if (uStack_250 == 0x8000000000000000) goto joined_r0x001a5af4;
          uStack_240 = local_238;
          uVar4 = local_248;
          local_248 = uVar13;
          local_258 = uStack_250;
          uStack_250 = uVar4;
          auVar16 = _ZN7uu_expr11syntax_tree7AstNode4eval28__u7b__u7b_closure_u7d__u7d_17h888a71dbbdbd1e88E
                              (&local_258);
          lVar5 = 0;
          if ((auVar16 & (undefined  [16])0x1) != (undefined  [16])0x0) {
            lVar5 = auVar16._8_8_;
          }
        }
        if ((local_1a8 & 1) != 0) {
          local_188._4_4_ = (int)(local_188 >> 0x20);
          local_290[6] = iStack_190;
          local_290[7] = iStack_18c;
          local_290[8] = (int)local_188;
          local_290[9] = local_188._4_4_;
          local_290[2] = uStack_1a0;
          local_290[3] = iStack_19c;
          local_290[4] = local_198;
          local_290[5] = iStack_194;
          local_290[0] = 1;
          local_290[1] = 0;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E(&local_1d8);
          goto LAB_001a6041;
        }
                    /* try { // try from 001a5afa to 001a5bb4 has its CatchHandler @ 001a60cc */
        _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_bigint17hfc488cc1793399d6E
                  (&local_258,&uStack_1a0);
        uVar13 = uStack_240;
        if ((int)local_258 == 1) {
          _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_uu_expr__ExprError_GT__GT_17h5a4f09785cad4f22E
                    (&local_258);
LAB_001a5b73:
          uStack_250 = 0x8000000000000000;
          local_248 = 0;
          uStack_240 = 1;
          local_238 = 0;
          local_258 = 0;
          _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE
                    (&local_2b8,local_270,*(undefined4 *)(plVar2 + 4),&local_258);
        }
        else {
          local_2b8 = (uint)local_248;
          iStack_2b4 = local_248._4_4_;
          uStack_2b0 = (uint)uStack_240;
          iStack_2ac = uStack_240._4_4_;
          local_2a8 = local_238;
          if (uStack_250 == 0x8000000000000000) goto LAB_001a5b73;
          uStack_240 = local_238;
          uVar4 = local_248;
          local_248 = uVar13;
          local_258 = uStack_250;
          uStack_250 = uVar4;
          auVar16 = _ZN7uu_expr11syntax_tree7AstNode4eval28__u7b__u7b_closure_u7d__u7d_17h888a71dbbdbd1e88E
                              (&local_258);
          uStack_240 = auVar16._8_8_;
          if (((auVar16 & (undefined  [16])0x1) == (undefined  [16])0x0) ||
             (lVar5 == 0 || uStack_240 == 0)) goto LAB_001a5b73;
          local_248 = lVar5 + -1;
          uStack_250 = local_1c8 + uStack_1d0;
          local_258 = uStack_1d0;
                    /* try { // try from 001a5f4f to 001a5f9d has its CatchHandler @ 001a60cc */
          _ZN4core4iter6traits8iterator8Iterator7collect17hda526cf35d7f87d0E(&local_d0,&local_258);
          local_238 = local_c0;
          local_248 = CONCAT44(uStack_cc,local_d0);
          uStack_240 = CONCAT44(uStack_c4,uStack_c8);
          uStack_250 = 0x8000000000000000;
          local_258 = 0;
          _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE
                    (&local_2b8,local_270,*(undefined4 *)(plVar2 + 4),&local_258);
        }
        _ZN4core3ptr128drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h00a86d471ef57dacE
                  (&local_2b8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E(&local_1d8);
        goto LAB_001a5783;
      }
      local_290[6] = (int)uStack_130;
      local_290[7] = uStack_130._4_4_;
      local_290[8] = (int)local_128;
      local_290[9] = local_128._4_4_;
      local_290[2] = (int)uStack_140;
      local_290[3] = uStack_140._4_4_;
      local_290[4] = (int)local_138;
      local_290[5] = local_138._4_4_;
      local_290[0] = 1;
      local_290[1] = 0;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E(&local_1d8);
      puVar14 = (ulong *)&local_1a8;
    }
    else {
      local_118._0_4_ = (int)uStack_168;
      local_118._4_4_ = (int)(uStack_168 >> 0x20);
      uStack_110._0_4_ = (int)local_160;
      uStack_110._4_4_ = (int)(local_160 >> 0x20);
      local_108._0_4_ = (int)uStack_158;
      local_108._4_4_ = (int)(uStack_158 >> 0x20);
      uStack_100._0_4_ = (int)local_150;
      uStack_100._4_4_ = (int)(local_150 >> 0x20);
      local_290[6] = (int)local_108;
      local_290[7] = local_108._4_4_;
      local_290[8] = (int)uStack_100;
      local_290[9] = uStack_100._4_4_;
      local_290[2] = (int)local_118;
      local_290[3] = local_118._4_4_;
      local_290[4] = (int)uStack_110;
      local_290[5] = uStack_110._4_4_;
      local_290[0] = 1;
      local_290[1] = 0;
      local_118 = uVar13;
      uStack_110 = uVar4;
      local_108 = uVar6;
      uStack_100 = uVar7;
      _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT_17h0c833a88cc9a87cfE
                (&local_1a8);
      puVar14 = &local_148;
    }
    _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT_17h0c833a88cc9a87cfE
              (puVar14);
    goto LAB_001a6041;
  case -0x7ffffffffffffffc:
                    /* try { // try from 001a5bd6 to 001a5c54 has its CatchHandler @ 001a6114 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17h99c8b623889323eaE
              (&local_258,local_270,*(undefined4 *)(plVar2[1] + 0x20));
    if (local_258 == 2) {
      _ZN4core3ptr128drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h00a86d471ef57dacE
                (&local_258);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3d6e35a0706b285eE
                (&local_288,plVar2,&PTR_s_src_uu_expr_src_syntax_tree_rs_0024a948);
      plVar12 = plVar2 + 1;
      ppuVar15 = &PTR_s_src_uu_expr_src_syntax_tree_rs_0024a960;
      goto LAB_001a5e75;
    }
    local_e8 = (uint)uStack_240;
    uStack_e4 = uStack_240._4_4_;
    uStack_e0 = (undefined4)local_238;
    uStack_dc = local_238._4_4_;
    local_f8 = (int)uStack_250;
    iStack_f4 = uStack_250._4_4_;
    iStack_f0 = (uint)local_248;
    iStack_ec = local_248._4_4_;
    if ((local_258 & 1) == 0) {
      (*(code *)PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920)
                (&local_258,&local_f8);
                    /* try { // try from 001a5c62 to 001a5c66 has its CatchHandler @ 001a60c2 */
      uVar10 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                         (uStack_250,local_248 + uStack_250);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E(&local_258);
      uVar1 = *(undefined4 *)(plVar2 + 4);
                    /* try { // try from 001a5c78 to 001a5d22 has its CatchHandler @ 001a6114 */
      (*(code *)
        PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
      )(&local_2b8,uVar10);
      uStack_240 = local_2a8;
      local_238 = CONCAT44(iStack_29c,iStack_2a0);
      uStack_250 = CONCAT44(iStack_2b4,local_2b8);
      local_248 = CONCAT44(iStack_2ac,uStack_2b0);
      local_258 = 0;
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE
                (&local_2b8,local_270,uVar1,&local_258);
      break;
    }
    *(ulong *)(local_290 + 6) = uStack_240;
    *(ulong *)(local_290 + 8) = local_238;
    local_290[2] = (int)uStack_250;
    local_290[3] = uStack_250._4_4_;
    local_290[4] = (uint)local_248;
    local_290[5] = local_248._4_4_;
    local_290[0] = 1;
    local_290[1] = 0;
LAB_001a6041:
                    /* try { // try from 001a6041 to 001a604a has its CatchHandler @ 001a607c */
    _ZN4core3ptr154drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_u32_C_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h5aab3143cda1a591E
              (local_270);
    goto LAB_001a6051;
  default:
    uVar1 = *(undefined4 *)(plVar2 + 4);
    if (*plVar2 == -0x8000000000000000) {
                    /* try { // try from 001a57e1 to 001a58ae has its CatchHandler @ 001a6114 */
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00251a58
      )(&local_2b8,plVar2 + 1);
      local_1d8._0_4_ = local_2b8;
      local_1d8._4_4_ = iStack_2b4;
      uStack_1d0 = CONCAT44(iStack_2ac,uStack_2b0);
      uStack_16c._0_3_ = (undefined3)(local_2a8 >> 0x28);
      uStack_250 = 0x8000000000000000;
      uVar11 = (undefined)local_2a8;
      local_170 = local_2a8._1_4_;
    }
    else {
      uVar11 = *(undefined *)(plVar2 + 3);
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17he7c299945dfde9b2E
                (&local_2b8,plVar2[1],plVar2[2]);
      uStack_250 = CONCAT44(iStack_2b4,local_2b8);
      local_1d8._0_4_ = uStack_2b0;
      local_1d8._4_4_ = iStack_2ac;
      uStack_1d0 = local_2a8;
    }
    local_248 = CONCAT44(local_1d8._4_4_,(uint)local_1d8);
    uStack_240 = uStack_1d0;
    local_238._5_3_ = (undefined3)uStack_16c;
    local_238._0_5_ = CONCAT41(local_170,uVar11);
    local_258 = 0;
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE
              (&local_2b8,local_270,uVar1,&local_258);
  }
  _ZN4core3ptr128drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h00a86d471ef57dacE
            (&local_2b8);
LAB_001a5783:
  if (local_278 != 0) {
    uVar13 = 0;
    if ((unaff_R12 + *(ulong *)local_280[local_278 + -1]) - 1 < 4) {
      uVar13 = *(ulong *)local_280[local_278 + -1] ^ unaff_R12;
    }
    local_278 = local_278 + -1;
                    /* WARNING: Could not recover jumptable at 0x001a57d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(*(code *)((long)&switchD_001a5771::switchdataD_0011ca2c +
                              (long)(int)(&switchD_001a5771::switchdataD_0011ca2c)[uVar13]))();
    return piVar9;
  }
                    /* try { // try from 001a5ed0 to 001a5ede has its CatchHandler @ 001a6116 */
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17h99c8b623889323eaE
            (&local_258,local_270,*(undefined4 *)(local_178 + 0x20));
  if ((int)local_258 == 2) {
                    /* try { // try from 001a606d to 001a6079 has its CatchHandler @ 001a6116 */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00251a10)
              (&PTR_s_src_uu_expr_src_syntax_tree_rs_0024a978);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(ulong *)(local_290 + 8) = local_238;
  local_290[4] = (uint)local_248;
  local_290[5] = local_248._4_4_;
  local_290[6] = (uint)uStack_240;
  local_290[7] = uStack_240._4_4_;
  *local_290 = (int)local_258;
  local_290[1] = local_258._4_4_;
  local_290[2] = (int)uStack_250;
  local_290[3] = uStack_250._4_4_;
                    /* try { // try from 001a5f0c to 001a5f15 has its CatchHandler @ 001a607c */
  _ZN4core3ptr154drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_u32_C_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h5aab3143cda1a591E
            (local_270);
  plVar8 = local_280;
  uVar10 = local_288;
LAB_001a6051:
  _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u64_GT__GT_17h8b6941f1ad84c071E(uVar10,plVar8);
  return local_290;
}