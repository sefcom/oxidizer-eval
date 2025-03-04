long * _ZN5uu_pr3mpr17h619b4b447614e91aE(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined auVar18 [16];
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  long local_280;
  long local_278;
  long *local_270;
  undefined4 local_268;
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
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 local_158;
  long lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  
  uStack_178 = param_3 * 0x10 + param_2;
  local_280 = param_4;
  local_278 = param_3;
  local_180 = param_2;
  puVar16 = (undefined8 *)
            _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf96e6303219a00baE
                      (&local_180);
  if (puVar16 != (undefined8 *)0x0) {
    do {
      _ZN5uu_pr4open17h24aeb0fb8cb9559fE(&local_e8,*puVar16,puVar16[1]);
      if (local_e8 != -0x7ffffffffffffffb) {
        *param_1 = local_e8;
        param_1[1] = local_e0;
        param_1[2] = local_d8;
        param_1[3] = local_d0;
        return param_1;
      }
      _ZN4core3ptr67drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT_17h8e650e61c5f2ff37E
                ();
      puVar16 = (undefined8 *)
                _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf96e6303219a00baE
                          (&local_180);
      param_3 = local_278;
    } while (puVar16 != (undefined8 *)0x0);
  }
  lVar17 = local_280;
  uStack_178 = param_3 * 0x10 + param_2;
  lStack_170 = 0;
  lStack_168 = local_280;
  plStack_160 = &local_278;
  local_180 = param_2;
  _ZN9itertools11kmerge_impl9kmerge_by17hb8a7993f4fdaf3b4E(&local_1d8,&local_180);
  _ZN9itertools11groupbylazy3new17h42b2a1d7236db7b0E(&local_e8,&local_1d8);
  lVar17 = *(long *)(lVar17 + 0x130);
  local_298 = 0;
  local_290 = 8;
  local_288 = 0;
  local_1e0 = -0x7ffffffffffffffe;
  local_270 = &local_e8;
  do {
                    /* try { // try from 002c72e3 to 002c72ea has its CatchHandler @ 002c76ca */
    _ZN106__LT_itertools__groupbylazy__Groups_LT_K_C_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h98c90782a6d1a4f2E
              (&local_180,&local_270);
    if (uStack_178 == local_1e0) {
                    /* try { // try from 002c7634 to 002c765f has its CatchHandler @ 002c76c5 */
      auVar18 = _ZN5uu_pr10print_page17h6e73dbc2020375d5E(local_290,local_288,local_280,lVar17);
      if (auVar18._0_8_ == 0) {
        *(undefined4 *)(param_1 + 1) = 0;
        *param_1 = -0x7ffffffffffffffb;
                    /* try { // try from 002c7694 to 002c769d has its CatchHandler @ 002c76c0 */
        _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_pr__FileLine_GT__GT_17h05f5eb491a1c9ca3E
                  (&local_298);
      }
      else {
        _ZN83__LT_uu_pr__PrError_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17hd5738b82e658b7c8E
                  (&local_180,auVar18._8_8_);
        param_1[2] = lStack_170;
        param_1[3] = lStack_168;
        *(undefined4 *)param_1 = (undefined4)local_180;
        *(undefined4 *)((long)param_1 + 4) = local_180._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_178;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_178._4_4_;
LAB_002c75fc:
                    /* try { // try from 002c75fc to 002c7605 has its CatchHandler @ 002c76c0 */
        _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_pr__FileLine_GT__GT_17h05f5eb491a1c9ca3E
                  (&local_298);
      }
      _ZN4core3ptr499drop_in_place_LT_itertools__groupbylazy__ChunkBy_LT_usize_C_itertools__kmerge_impl__KMergeBy_LT_core__iter__adapters__flatten__FlatMap_LT_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20__LP_usize_C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__RP__GT__C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d____u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__GT_17h48898fe4a1a5cca7E
                (&local_e8);
      return param_1;
    }
    local_198 = local_138;
    uStack_190 = uStack_130;
    local_1a8 = local_148;
    uStack_1a0 = uStack_140;
    local_1b8 = local_158;
    uStack_1b0 = lStack_150;
    local_1c8 = lStack_168;
    uStack_1c0 = plStack_160;
    local_1d8 = uStack_178;
    uStack_1d0 = lStack_170;
    while( true ) {
      lVar1 = local_1d8;
      local_228 = (undefined4)local_1d8;
      uStack_224 = local_1d8._4_4_;
      uStack_220 = (undefined4)uStack_1d0;
      uStack_21c = uStack_1d0._4_4_;
      local_1f8 = (undefined4)local_1a8;
      uStack_1f4 = local_1a8._4_4_;
      uStack_1f0 = (undefined4)uStack_1a0;
      uStack_1ec = uStack_1a0._4_4_;
      local_208 = (undefined4)local_1b8;
      uStack_204 = local_1b8._4_4_;
      uStack_200 = (undefined4)uStack_1b0;
      uStack_1fc = uStack_1b0._4_4_;
      local_218 = (undefined4)local_1c8;
      uStack_214 = local_1c8._4_4_;
      uStack_210 = (undefined4)uStack_1c0;
      uStack_20c = uStack_1c0._4_4_;
      local_1d8 = -0x7fffffffffffffff;
      uVar12 = local_228;
      uVar13 = uStack_224;
      uVar14 = (undefined4)uStack_1d0;
      uVar15 = uStack_1d0._4_4_;
      uVar2 = local_268;
      uVar3 = uStack_264;
      uVar4 = uStack_260;
      uVar5 = uStack_25c;
      lVar6 = local_1c8;
      plVar7 = uStack_1c0;
      uVar8 = local_1b8;
      lVar9 = uStack_1b0;
      uVar10 = local_1a8;
      uVar11 = uStack_1a0;
      if (lVar1 == -0x7fffffffffffffff) {
                    /* try { // try from 002c73a2 to 002c73c6 has its CatchHandler @ 002c771d */
        _ZN4core3ptr64drop_in_place_LT_core__option__Option_LT_uu_pr__FileLine_GT__GT_17h6e5d49c74ea73e74E
                  (&local_228);
        _ZN9itertools11groupbylazy24ChunkBy_LT_K_C_I_C_F_GT_4step17h70e3b0161418e13dE
                  (&local_128,local_198,uStack_190);
        lVar1 = CONCAT44(uStack_124,local_128);
        uVar12 = local_128;
        uVar13 = uStack_124;
        uVar14 = uStack_120;
        uVar15 = uStack_11c;
        uVar2 = local_268;
        uVar3 = uStack_264;
        uVar4 = uStack_260;
        uVar5 = uStack_25c;
        lVar6 = local_118;
        plVar7 = uStack_110;
        uVar8 = local_108;
        lVar9 = uStack_100;
        uVar10 = local_f8;
        uVar11 = uStack_f0;
      }
      uStack_25c = uVar15;
      uStack_260 = uVar14;
      uStack_264 = uVar13;
      local_268 = uVar12;
      local_128 = local_268;
      uStack_124 = uStack_264;
      uStack_120 = uStack_260;
      uStack_11c = uStack_25c;
      local_118 = lVar6;
      uStack_110 = plVar7;
      local_108 = uVar8;
      uStack_100 = lVar9;
      local_f8 = uVar10;
      uStack_f0 = uVar11;
      if (lVar1 == -0x7fffffffffffffff) break;
      local_118._0_4_ = (undefined4)lVar6;
      local_118._4_4_ = (undefined4)((ulong)lVar6 >> 0x20);
      uStack_110._0_4_ = SUB84(plVar7,0);
      uStack_110._4_4_ = (undefined4)((ulong)plVar7 >> 0x20);
      local_108._0_4_ = (undefined4)uVar8;
      local_108._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
      uStack_100._0_4_ = (undefined4)lVar9;
      uStack_100._4_4_ = (undefined4)((ulong)lVar9 >> 0x20);
      local_f8._0_4_ = (undefined4)uVar10;
      local_f8._4_4_ = (undefined4)((ulong)uVar10 >> 0x20);
      uStack_f0._0_4_ = (undefined4)uVar11;
      uStack_f0._4_4_ = (undefined4)((ulong)uVar11 >> 0x20);
      local_238 = (undefined4)local_f8;
      uStack_234 = local_f8._4_4_;
      uStack_230 = (undefined4)uStack_f0;
      uStack_22c = uStack_f0._4_4_;
      local_248 = (undefined4)local_108;
      uStack_244 = local_108._4_4_;
      uStack_240 = (undefined4)uStack_100;
      uStack_23c = uStack_100._4_4_;
      local_258 = (undefined4)local_118;
      uStack_254 = local_118._4_4_;
      uStack_250 = (undefined4)uStack_110;
      uStack_24c = uStack_110._4_4_;
      if (CONCAT44(uStack_264,local_268) == -0x8000000000000000) {
                    /* try { // try from 002c754c to 002c75b5 has its CatchHandler @ 002c76a5 */
        _ZN83__LT_uu_pr__PrError_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17hd5738b82e658b7c8E
                  (&local_228,CONCAT44(uStack_25c,uStack_260));
        *(undefined4 *)(param_1 + 2) = local_218;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_214;
        *(undefined4 *)(param_1 + 3) = uStack_210;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_20c;
        *(undefined4 *)param_1 = local_228;
        *(undefined4 *)((long)param_1 + 4) = uStack_224;
        *(undefined4 *)(param_1 + 1) = uStack_220;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_21c;
        if (CONCAT44(uStack_264,local_268) != -0x8000000000000000) {
LAB_002c75e5:
          _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__io__error__Error_GT__GT_17he04cd6cf833c6dbeE
                    (&local_268);
        }
LAB_002c75ef:
                    /* try { // try from 002c75ef to 002c75fb has its CatchHandler @ 002c76c5 */
        _ZN4core3ptr497drop_in_place_LT_itertools__groupbylazy__Group_LT_usize_C_itertools__kmerge_impl__KMergeBy_LT_core__iter__adapters__flatten__FlatMap_LT_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20__LP_usize_C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__RP__GT__C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d____u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__GT_17h87de2da8d7ae081fE
                  (&local_1d8);
        goto LAB_002c75fc;
      }
      if (lVar17 != lVar9) {
                    /* try { // try from 002c749a to 002c74a6 has its CatchHandler @ 002c76ef */
        auVar18 = _ZN5uu_pr10print_page17h6e73dbc2020375d5E(local_290,local_288,local_280,lVar17);
        if (auVar18._0_8_ != 0) {
          _ZN83__LT_uu_pr__PrError_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17hd5738b82e658b7c8E
                    (&local_228,auVar18._8_8_);
          *(undefined4 *)(param_1 + 2) = local_218;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_214;
          *(undefined4 *)(param_1 + 3) = uStack_210;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_20c;
          *(undefined4 *)param_1 = local_228;
          *(undefined4 *)((long)param_1 + 4) = uStack_224;
          *(undefined4 *)(param_1 + 1) = uStack_220;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_21c;
          if (CONCAT44(uStack_264,local_268) != -0x8000000000000000) goto LAB_002c75e5;
                    /* try { // try from 002c75de to 002c75ee has its CatchHandler @ 002c76a3 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hb25dbb2025c82b2dE
                    (CONCAT44(uStack_25c,uStack_260));
          goto LAB_002c75ef;
        }
                    /* try { // try from 002c74ba to 002c74c3 has its CatchHandler @ 002c76cf */
        _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_pr__FileLine_GT__GT_17h05f5eb491a1c9ca3E
                  (&local_298);
        local_298 = 0;
        local_290 = 8;
        local_288 = 0;
        lVar17 = lVar9;
      }
      local_1f8 = local_238;
      uStack_1f4 = uStack_234;
      uStack_1f0 = uStack_230;
      uStack_1ec = uStack_22c;
      local_208 = local_248;
      uStack_204 = uStack_244;
      uStack_200 = uStack_240;
      uStack_1fc = uStack_23c;
      local_218 = local_258;
      uStack_214 = uStack_254;
      uStack_210 = uStack_250;
      uStack_20c = uStack_24c;
      local_228 = local_268;
      uStack_224 = uStack_264;
      uStack_220 = uStack_260;
      uStack_21c = uStack_25c;
                    /* try { // try from 002c7513 to 002c751f has its CatchHandler @ 002c771b */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17ha8dcf02c5afcbd08E(&local_298,&local_228);
    }
                    /* try { // try from 002c7530 to 002c753c has its CatchHandler @ 002c76ca */
    local_268 = uVar2;
    uStack_264 = uVar3;
    uStack_260 = uVar4;
    uStack_25c = uVar5;
    _ZN4core3ptr497drop_in_place_LT_itertools__groupbylazy__Group_LT_usize_C_itertools__kmerge_impl__KMergeBy_LT_core__iter__adapters__flatten__FlatMap_LT_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20__LP_usize_C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__RP__GT__C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d____u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__C_uu_pr__mpr___u7b__u7b_closure_u7d__u7d__GT__GT_17h87de2da8d7ae081fE
              (&local_1d8);
  } while( true );
}