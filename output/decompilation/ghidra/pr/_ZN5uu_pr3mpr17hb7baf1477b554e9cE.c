long * _ZN5uu_pr3mpr17hb7baf1477b554e9cE
                 (long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined auVar15 [16];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  long local_260;
  long local_258;
  long *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 local_118;
  long lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  
  local_260 = param_4;
  local_258 = param_3;
  if (param_3 == 0) {
    lVar13 = 0;
  }
  else {
    puVar14 = param_2;
    do {
      _ZN5uu_pr4open17hde771125822bcd7aE(&local_e8,*puVar14,puVar14[1]);
      if (local_e8 != -0x7ffffffffffffffb) {
        *param_1 = local_e8;
        param_1[1] = local_e0;
        param_1[2] = lStack_d8;
        param_1[3] = local_d0;
        return param_1;
      }
      puVar14 = puVar14 + 2;
      _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hddd4d76a723283f5E
                (local_e0,lStack_d8);
      lVar13 = local_258;
    } while (puVar14 != param_2 + param_3 * 2);
  }
  lVar5 = local_260;
  uStack_138 = param_2 + lVar13 * 2;
  lStack_130 = 0;
  lStack_128 = local_260;
  plStack_120 = &local_258;
  local_140 = param_2;
  _ZN9itertools11kmerge_impl9kmerge_by17h67f459eb51eb618eE(&local_1f8,&local_140);
  _ZN9itertools11groupbylazy3new17hacaeed45d4e07cb0E(&local_e8,&local_1f8);
  lVar13 = *(long *)(lVar5 + 0x130);
  local_278 = 0;
  local_270 = 8;
  local_268 = 0;
  local_200 = (undefined8 *)0x8000000000000002;
  local_250 = &local_e8;
  do {
                    /* try { // try from 002368d9 to 002368e0 has its CatchHandler @ 00236c89 */
    puVar14 = local_200;
    _ZN106__LT_itertools__groupbylazy__Groups_LT_K_C_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h06b0b434981690c9E
              (&local_140,&local_250);
    uVar12 = uStack_f0;
    uVar11 = local_f8;
    if (uStack_138 == puVar14) {
                    /* try { // try from 00236be9 to 00236c14 has its CatchHandler @ 00236c84 */
      auVar15 = _ZN5uu_pr10print_page17hc11615535955301dE(local_270,local_268,local_260,lVar13);
      if ((auVar15 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        *(undefined4 *)(param_1 + 1) = 0;
        *param_1 = -0x7ffffffffffffffb;
                    /* try { // try from 00236c49 to 00236c52 has its CatchHandler @ 00236c7f */
        _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_pr__FileLine_GT__GT_17hdc8372bef9543cb5E
                  (&local_278);
      }
      else {
        (*(code *)
          PTR__ZN83__LT_uu_pr__PrError_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17h216bf08d6106c8bbE_00398ba8
        )(&local_140,auVar15._8_8_);
        param_1[2] = lStack_130;
        param_1[3] = lStack_128;
        *(undefined4 *)param_1 = (undefined4)local_140;
        *(undefined4 *)((long)param_1 + 4) = local_140._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_138;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_138._4_4_;
LAB_00236b33:
                    /* try { // try from 00236b33 to 00236b3c has its CatchHandler @ 00236c7f */
        _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_pr__FileLine_GT__GT_17hdc8372bef9543cb5E
                  (&local_278);
      }
      _ZN4core3ptr499drop_in_place_LT_itertools__groupbylazy__ChunkBy_LT_usize_C_itertools__kmerge_impl__KMergeBy_LT_core__iter__adapters__flatten__FlatMap_LT_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20__LP_usize_C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__RP__GT__C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d____u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__GT_17h7838593b517c6299E
                (&local_e8);
      return param_1;
    }
    local_1b8 = local_f8;
    uStack_1b0 = uStack_f0;
    local_1c8 = local_108;
    uStack_1c0 = uStack_100;
    local_1d8 = local_118;
    uStack_1d0 = lStack_110;
    local_1e8 = lStack_128;
    uStack_1e0 = plStack_120;
    local_1f8 = uStack_138;
    uStack_1f0 = lStack_130;
    while( true ) {
      puVar14 = local_1f8;
      uVar1 = (undefined4)local_1f8;
      uVar2 = local_1f8._4_4_;
      local_248 = (undefined4)local_1f8;
      uStack_244 = local_1f8._4_4_;
      uStack_240 = (undefined4)uStack_1f0;
      uStack_23c = uStack_1f0._4_4_;
      local_218 = (undefined4)local_1c8;
      uStack_214 = local_1c8._4_4_;
      uStack_210 = (undefined4)uStack_1c0;
      uStack_20c = uStack_1c0._4_4_;
      local_228 = (undefined4)local_1d8;
      uStack_224 = local_1d8._4_4_;
      uStack_220 = (undefined4)uStack_1d0;
      uStack_21c = uStack_1d0._4_4_;
      local_238 = (undefined4)local_1e8;
      uStack_234 = local_1e8._4_4_;
      uStack_230 = (undefined4)uStack_1e0;
      uStack_22c = uStack_1e0._4_4_;
      local_1f8 = (undefined8 *)0x8000000000000001;
      uVar3 = (undefined4)uStack_1f0;
      uVar4 = uStack_1f0._4_4_;
      lVar5 = local_1e8;
      plVar6 = uStack_1e0;
      uVar7 = local_1d8;
      lVar8 = uStack_1d0;
      uVar9 = local_1c8;
      uVar10 = uStack_1c0;
      if (puVar14 == (undefined8 *)0x8000000000000001) {
                    /* try { // try from 00236993 to 002369af has its CatchHandler @ 00236cbf */
        _ZN4core3ptr64drop_in_place_LT_core__option__Option_LT_uu_pr__FileLine_GT__GT_17h51e0741277c7dedfE
                  (&local_248);
        _ZN9itertools11groupbylazy24ChunkBy_LT_K_C_I_C_F_GT_4step17h4d4a123dac3f3ecfE
                  (&local_188,uVar11,uVar12);
        puVar14 = (undefined8 *)CONCAT44(uStack_184,local_188);
        uVar1 = local_248;
        uVar2 = uStack_244;
        uVar3 = uStack_240;
        uVar4 = uStack_23c;
        local_248 = local_188;
        uStack_244 = uStack_184;
        uStack_240 = uStack_180;
        uStack_23c = uStack_17c;
        lVar5 = local_178;
        plVar6 = uStack_170;
        uVar7 = local_168;
        lVar8 = uStack_160;
        uVar9 = local_158;
        uVar10 = uStack_150;
      }
      local_188 = local_248;
      uStack_184 = uStack_244;
      uStack_180 = uStack_240;
      uStack_17c = uStack_23c;
      local_178 = lVar5;
      uStack_170 = plVar6;
      local_168 = uVar7;
      uStack_160 = lVar8;
      local_158 = uVar9;
      uStack_150 = uVar10;
      if (puVar14 == (undefined8 *)0x8000000000000001) break;
      local_178._0_4_ = (undefined4)lVar5;
      local_178._4_4_ = (undefined4)((ulong)lVar5 >> 0x20);
      uStack_170._0_4_ = SUB84(plVar6,0);
      uStack_170._4_4_ = (undefined4)((ulong)plVar6 >> 0x20);
      local_168._0_4_ = (undefined4)uVar7;
      local_168._4_4_ = (undefined4)((ulong)uVar7 >> 0x20);
      uStack_160._0_4_ = (undefined4)lVar8;
      uStack_160._4_4_ = (undefined4)((ulong)lVar8 >> 0x20);
      local_158._0_4_ = (undefined4)uVar9;
      local_158._4_4_ = (undefined4)((ulong)uVar9 >> 0x20);
      uStack_150._0_4_ = (undefined4)uVar10;
      uStack_150._4_4_ = (undefined4)((ulong)uVar10 >> 0x20);
      local_218 = (undefined4)local_158;
      uStack_214 = local_158._4_4_;
      uStack_210 = (undefined4)uStack_150;
      uStack_20c = uStack_150._4_4_;
      local_228 = (undefined4)local_168;
      uStack_224 = local_168._4_4_;
      uStack_220 = (undefined4)uStack_160;
      uStack_21c = uStack_160._4_4_;
      local_238 = (undefined4)local_178;
      uStack_234 = local_178._4_4_;
      uStack_230 = (undefined4)uStack_170;
      uStack_22c = uStack_170._4_4_;
      if (CONCAT44(uStack_244,local_248) == -0x8000000000000000) {
                    /* try { // try from 00236afc to 00236b09 has its CatchHandler @ 00236c5a */
        (*(code *)
          PTR__ZN83__LT_uu_pr__PrError_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17h216bf08d6106c8bbE_00398ba8
        )(&local_1a8,CONCAT44(uStack_23c,uStack_240));
        param_1[2] = CONCAT44(uStack_194,local_198);
        param_1[3] = CONCAT44(uStack_18c,uStack_190);
        *(undefined4 *)param_1 = local_1a8;
        *(undefined4 *)((long)param_1 + 4) = uStack_1a4;
        *(undefined4 *)(param_1 + 1) = uStack_1a0;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_19c;
LAB_00236b26:
                    /* try { // try from 00236b26 to 00236b32 has its CatchHandler @ 00236c84 */
        _ZN4core3ptr497drop_in_place_LT_itertools__groupbylazy__Group_LT_usize_C_itertools__kmerge_impl__KMergeBy_LT_core__iter__adapters__flatten__FlatMap_LT_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20__LP_usize_C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__RP__GT__C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d____u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__GT_17hcaa1782373e6839dE
                  (&local_1f8);
        goto LAB_00236b33;
      }
      if (lVar13 != lVar8) {
                    /* try { // try from 00236a6a to 00236a76 has its CatchHandler @ 00236cae */
        auVar15 = _ZN5uu_pr10print_page17hc11615535955301dE(local_270,local_268,local_260,lVar13);
        if ((auVar15 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                    /* try { // try from 00236b83 to 00236b93 has its CatchHandler @ 00236c5a */
          (*(code *)
            PTR__ZN83__LT_uu_pr__PrError_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17h216bf08d6106c8bbE_00398ba8
          )(&local_1a8,auVar15._8_8_);
          *(undefined4 *)(param_1 + 2) = local_198;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_194;
          *(undefined4 *)(param_1 + 3) = uStack_190;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_18c;
          *(undefined4 *)param_1 = local_1a8;
          *(undefined4 *)((long)param_1 + 4) = uStack_1a4;
          *(undefined4 *)(param_1 + 1) = uStack_1a0;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_19c;
          if (CONCAT44(uStack_244,local_248) == -0x8000000000000000) {
                    /* try { // try from 00236bc6 to 00236bd9 has its CatchHandler @ 00236c58 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hb9c299ee05cc620bE
                      (&uStack_240);
          }
          else {
            _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__io__error__Error_GT__GT_17hd8f32127ba2a6967E
                      (&local_248);
          }
          goto LAB_00236b26;
        }
                    /* try { // try from 00236a7f to 00236a88 has its CatchHandler @ 00236c8e */
        _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_pr__FileLine_GT__GT_17hdc8372bef9543cb5E
                  (&local_278);
        local_278 = 0;
        local_270 = 8;
        local_268 = 0;
        lVar13 = lVar8;
      }
                    /* try { // try from 00236aa4 to 00236abc has its CatchHandler @ 00236cbd */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17ha1202c8d23570234E
                (&local_278,&local_188,&PTR_DAT_00369578);
    }
                    /* try { // try from 00236ad0 to 00236adc has its CatchHandler @ 00236c89 */
    local_248 = uVar1;
    uStack_244 = uVar2;
    uStack_240 = uVar3;
    uStack_23c = uVar4;
    _ZN4core3ptr497drop_in_place_LT_itertools__groupbylazy__Group_LT_usize_C_itertools__kmerge_impl__KMergeBy_LT_core__iter__adapters__flatten__FlatMap_LT_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20__LP_usize_C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__RP__GT__C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d____u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__GT_17hcaa1782373e6839dE
              (&local_1f8);
  } while( true );
}