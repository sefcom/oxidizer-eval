undefined  [16]
_ZN7uu_sort5merge21merge_with_file_limit17h0ae639636cd89c71E
          (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined auVar8 [16];
  long local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  ulong local_2b8;
  long *local_2b0;
  undefined8 local_2a8;
  long local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  long local_248;
  long lStack_240;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  long local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  long local_1b8;
  long local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long local_198;
  long local_190;
  ulong local_188;
  long local_180;
  long local_178;
  long local_168;
  undefined8 local_160;
  long local_158;
  long local_150;
  long local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  long local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_50 [4];
  
  local_2b0 = param_1;
  local_2a8 = param_4;
                    /* try { // try from 001c55e7 to 001c55ee has its CatchHandler @ 001c5edf */
  uVar4 = _ZN113__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__exact_size__ExactSizeIterator_GT_3len17h78e3e0e94831f6c4E
                    (param_1[1],param_1[3]);
  uVar1 = *(ulong *)(param_2 + 0x70);
  if (uVar1 < uVar4) {
    local_198 = param_2 + 0x70;
    local_230 = 0;
    local_228 = 8;
    local_220 = 0;
    local_2c8 = 0;
    local_2c0 = 8;
    local_2b8 = 0;
    local_268 = *(undefined4 *)local_2b0;
    uStack_264 = *(undefined4 *)((long)local_2b0 + 4);
    uStack_260 = *(undefined4 *)(local_2b0 + 1);
    uStack_25c = *(undefined4 *)((long)local_2b0 + 0xc);
    local_258 = local_2b0[2];
    uStack_250 = local_2b0[3];
    local_248 = local_2b0[4];
    lStack_240 = local_2b0[5];
    local_190 = -0x7fffffffffffffff;
    uVar4 = 0;
LAB_001c56a0:
    do {
                    /* try { // try from 001c56a3 to 001c5722 has its CatchHandler @ 001c5f0f */
      _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h55f9042cb984729cE
                (local_50,&local_268);
      if (local_50[0] == local_190) goto LAB_001c5a5d;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h722223bf552c46c3E(&local_2c8,local_50);
      uVar4 = local_2b8;
      if (uVar1 <= local_2b8) {
        local_188 = local_2b8;
        if (local_2b8 != uVar1) {
          local_328 = 0;
                    /* try { // try from 001c5e45 to 001c5e68 has its CatchHandler @ 001c5f1c */
          (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00297568)
                    (0,&local_188,local_198,&local_328,&PTR_s_src_uu_sort_src_merge_rs_0028c7d0);
          goto LAB_001c5e8a;
        }
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h48a48fdffd5a02e7E
                  (&local_2a0,&local_2c8);
        _ZN7uu_sort5merge19merge_without_limit17ha3c300bc310eefedE(&local_328,&local_2a0,param_2);
        auVar8._8_8_ = CONCAT44(uStack_314,local_318);
        auVar8._0_8_ = CONCAT44(uStack_31c,uStack_320);
        if (local_328 == 3) {
          bVar3 = false;
        }
        else {
          local_1c0 = local_2d0;
          local_1d0 = (undefined4)local_2e0;
          uStack_1cc = local_2e0._4_4_;
          uStack_1c8 = (undefined4)uStack_2d8;
          uStack_1c4 = uStack_2d8._4_4_;
          local_1e0 = local_2f0;
          uStack_1dc = uStack_2ec;
          uStack_1d8 = (undefined4)uStack_2e8;
          uStack_1d4 = uStack_2e8._4_4_;
          uStack_1f0 = (undefined4)uStack_300;
          uStack_1ec = uStack_300._4_4_;
          uStack_1e8 = (undefined4)uStack_2f8;
          uStack_1e4 = uStack_2f8._4_4_;
          uStack_200 = uStack_310;
          uStack_1fc = uStack_30c;
          uStack_1f8 = (undefined4)uStack_308;
          uStack_1f4 = uStack_308._4_4_;
          local_218 = local_328;
          local_2c8 = 0;
          local_2c0 = 8;
          local_2b8 = 0;
                    /* try { // try from 001c579c to 001c5806 has its CatchHandler @ 001c5efd */
          uStack_210 = CONCAT44(uStack_31c,uStack_320);
          local_208 = CONCAT44(uStack_314,local_318);
          _ZN7uu_sort7tmp_dir13TmpDirWrapper9next_file17he098c4319062daf7E(&local_1b8,local_2a8);
          if (local_1b0 == -0x8000000000000000) {
            lVar7 = CONCAT44(uStack_1a4,local_1a8);
            lVar6 = CONCAT44(uStack_19c,uStack_1a0);
          }
          else {
            local_150 = local_1b8;
            local_148 = local_1b0;
            local_140 = local_1a8;
            uStack_13c = uStack_1a4;
            uStack_138 = uStack_1a0;
            uStack_134 = uStack_19c;
            (*(code *)
              PTR__ZN90__LT_uu_sort__merge__WriteablePlainTmpFile_u20_as_u20_uu_sort__merge__WriteableTmpFile_GT_6create17h64c37076d2e0d4deE_00297098
            )(&local_328,&local_150);
            lVar7 = CONCAT44(uStack_31c,uStack_320);
            lVar6 = CONCAT44(uStack_314,local_318);
            if (local_328 != -0x8000000000000000) {
              uStack_288 = CONCAT44(uStack_30c,uStack_310);
              lStack_278 = (long)uStack_300;
              uStack_270 = uStack_2f8;
              lStack_280 = uStack_308;
              local_2a0 = local_328;
              uStack_2d8 = CONCAT44(uStack_1c4,uStack_1c8);
              local_2d0 = local_1c0;
              uStack_2e8 = CONCAT44(uStack_1d4,uStack_1d8);
              local_2e0 = CONCAT44(uStack_1cc,local_1d0);
              uStack_2f8 = CONCAT44(uStack_1e4,uStack_1e8);
              local_2f0 = local_1e0;
              uStack_2ec = uStack_1dc;
              uStack_308 = CONCAT44(uStack_1f4,uStack_1f8);
              uStack_300 = (undefined *)CONCAT44(uStack_1ec,uStack_1f0);
              local_318 = (undefined4)local_208;
              uStack_314 = local_208._4_4_;
              uStack_310 = uStack_200;
              uStack_30c = uStack_1fc;
              local_328 = local_218;
              uStack_320 = (undefined4)uStack_210;
              uStack_31c = uStack_210._4_4_;
              uStack_298 = lVar7;
              local_290 = lVar6;
              uVar5 = _ZN90__LT_uu_sort__merge__WriteablePlainTmpFile_u20_as_u20_uu_sort__merge__WriteableTmpFile_GT_8as_write17ha76be3287c2f2bddE
                                (&local_2a0);
                    /* try { // try from 001c58aa to 001c58ba has its CatchHandler @ 001c5ee9 */
              auVar8 = _ZN7uu_sort5merge10FileMerger12write_all_to17h3cdf5e6a2cb467f4E
                                 (&local_328,param_2,uVar5);
              if (auVar8._0_8_ == 0) {
                uStack_2f8 = uStack_270;
                uStack_308 = lStack_280;
                uStack_300 = (undefined *)lStack_278;
                local_318 = (undefined4)local_290;
                uStack_314 = local_290._4_4_;
                uStack_310 = (undefined4)uStack_288;
                uStack_30c = uStack_288._4_4_;
                local_328 = local_2a0;
                uStack_320 = (undefined4)uStack_298;
                uStack_31c = uStack_298._4_4_;
                    /* try { // try from 001c58fb to 001c5962 has its CatchHandler @ 001c5efb */
                (*(code *)
                  PTR__ZN90__LT_uu_sort__merge__WriteablePlainTmpFile_u20_as_u20_uu_sort__merge__WriteableTmpFile_GT_16finished_writing17hce1338451b6e3b63E_002970a0
                )(&local_1b8,&local_328);
                auVar8._12_4_ = uStack_1a4;
                auVar8._8_4_ = local_1a8;
                auVar8._0_8_ = local_1b0;
                if (local_1b8 != -0x8000000000000000) {
                  local_180 = local_1b8;
                  local_178 = local_1b0;
                  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb4bc2dc398314653E
                            (&local_230,&local_180,&PTR_s_src_uu_sort_src_merge_rs_0028c7e8);
                  uVar4 = 0;
                  goto LAB_001c56a0;
                }
              }
              else {
                    /* try { // try from 001c5b8b to 001c5b9a has its CatchHandler @ 001c5ec0 */
                _ZN4core3ptr58drop_in_place_LT_uu_sort__merge__WriteablePlainTmpFile_GT_17hfc260a928aebfa87E
                          (&local_2a0);
              }
              bVar3 = true;
              goto LAB_001c5b9e;
            }
          }
          auVar8._8_8_ = lVar6;
          auVar8._0_8_ = lVar7;
          bVar3 = true;
                    /* try { // try from 001c5b7c to 001c5b88 has its CatchHandler @ 001c5f1c */
          _ZN4core3ptr47drop_in_place_LT_uu_sort__merge__FileMerger_GT_17hca51d1930952c542E
                    (&local_218);
        }
LAB_001c5b9e:
                    /* try { // try from 001c5ba1 to 001c5bad has its CatchHandler @ 001c5f14 */
        _ZN4core3ptr398drop_in_place_LT_core__iter__adapters__map__Map_LT_alloc__vec__into_iter__IntoIter_LT_uu_sort__merge__ClosedPlainTmpFile_GT__C_alloc__boxed__Box_LT_dyn_u20_core__ops__function__FnMut_LT__LP_uu_sort__merge__ClosedPlainTmpFile_C__RP__GT__u2b_Output_u20__u3d__u20_core__result__Result_LT_uu_sort__merge__PlainTmpMergeInput_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT__GT_17had869a410baf204aE
                  (&local_268);
        if (bVar3) {
                    /* try { // try from 001c5bb6 to 001c5bbf has its CatchHandler @ 001c5ed7 */
          _ZN4core3ptr169drop_in_place_LT_alloc__vec__Vec_LT_core__result__Result_LT_uu_sort__merge__PlainTmpMergeInput_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_17hfa635afc00c55704E
                    (&local_2c8);
        }
        goto LAB_001c5bc0;
      }
    } while( true );
  }
  local_328 = *local_2b0;
  uStack_320 = *(undefined4 *)(local_2b0 + 1);
  uStack_31c = *(undefined4 *)((long)local_2b0 + 0xc);
  local_318 = *(undefined4 *)(local_2b0 + 2);
  uStack_314 = *(undefined4 *)((long)local_2b0 + 0x14);
  uStack_310 = *(undefined4 *)(local_2b0 + 3);
  uStack_30c = *(undefined4 *)((long)local_2b0 + 0x1c);
  uStack_308 = local_2b0[4];
  uStack_300 = (undefined *)local_2b0[5];
                    /* try { // try from 001c5997 to 001c5a51 has its CatchHandler @ 001c5edf */
  _ZN7uu_sort5merge19merge_without_limit17h80cd809e48cc4469E(&local_110,&local_328,param_2);
  auVar8._8_8_ = local_100;
  auVar8._0_8_ = local_108;
  if (local_110 != 3) {
    local_58 = local_b8;
    local_68 = local_c8;
    uStack_64 = uStack_c4;
    uStack_60 = uStack_c0;
    uStack_5c = uStack_bc;
    local_78 = local_d8;
    uStack_74 = uStack_d4;
    uStack_70 = uStack_d0;
    uStack_6c = uStack_cc;
    local_88 = local_e8;
    uStack_84 = uStack_e4;
    uStack_80 = uStack_e0;
    uStack_7c = uStack_dc;
    local_98 = local_f8;
    uStack_94 = uStack_f4;
    uStack_90 = uStack_f0;
    uStack_8c = uStack_ec;
    local_b0 = local_110;
    local_a8 = local_108;
    local_a0 = local_100;
    auVar8 = _ZN7uu_sort5merge10FileMerger9write_all17h2b3249daabe0a644E(&local_b0,param_2,param_3);
    return auVar8;
  }
  goto LAB_001c5bcd;
LAB_001c5a5d:
                    /* try { // try from 001c5a60 to 001c5aac has its CatchHandler @ 001c5f14 */
  _ZN4core3ptr398drop_in_place_LT_core__iter__adapters__map__Map_LT_alloc__vec__into_iter__IntoIter_LT_uu_sort__merge__ClosedPlainTmpFile_GT__C_alloc__boxed__Box_LT_dyn_u20_core__ops__function__FnMut_LT__LP_uu_sort__merge__ClosedPlainTmpFile_C__RP__GT__u2b_Output_u20__u3d__u20_core__result__Result_LT_uu_sort__merge__PlainTmpMergeInput_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT__GT_17had869a410baf204aE
            (&local_268);
  if (uVar4 == 0) {
    bVar3 = true;
LAB_001c5bf2:
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hf75d9570fff832c0E
              (&local_218,&local_230);
                    /* try { // try from 001c5c07 to 001c5c0b has its CatchHandler @ 001c5ea8 */
    uStack_308 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h68503a33d47fff4bE();
    local_318 = (undefined4)local_208;
    uStack_314 = local_208._4_4_;
    uStack_310 = uStack_200;
    uStack_30c = uStack_1fc;
    local_328 = local_218;
    uStack_320 = (undefined4)uStack_210;
    uStack_31c = uStack_210._4_4_;
    uStack_300 = &DAT_0028c790;
                    /* try { // try from 001c5c3a to 001c5c53 has its CatchHandler @ 001c5f14 */
    auVar8 = _ZN7uu_sort5merge21merge_with_file_limit17h0ae639636cd89c71E
                       (&local_328,param_2,param_3,local_2a8);
    if (!bVar3) {
      return auVar8;
    }
                    /* try { // try from 001c5c66 to 001c5c6f has its CatchHandler @ 001c5ed7 */
    _ZN4core3ptr169drop_in_place_LT_alloc__vec__Vec_LT_core__result__Result_LT_uu_sort__merge__PlainTmpMergeInput_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_17hfa635afc00c55704E
              (&local_2c8);
    return auVar8;
  }
  if (uVar1 <= uVar4) {
                    /* try { // try from 001c5e6e to 001c5e89 has its CatchHandler @ 001c5f14 */
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_002970c8)
              ("assertion failed: batch.len() < settings.merge_batch_size",0x39,
               &PTR_s_src_uu_sort_src_merge_rs_0028c760);
LAB_001c5e8a:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h48a48fdffd5a02e7E
            (&local_2a0,&local_2c8);
  _ZN7uu_sort5merge19merge_without_limit17ha3c300bc310eefedE(&local_328,&local_2a0,param_2);
  auVar8._8_8_ = CONCAT44(uStack_314,local_318);
  auVar8._0_8_ = CONCAT44(uStack_31c,uStack_320);
  if (local_328 != 3) {
    local_1c0 = local_2d0;
    local_1d0 = (undefined4)local_2e0;
    uStack_1cc = local_2e0._4_4_;
    uStack_1c8 = (undefined4)uStack_2d8;
    uStack_1c4 = uStack_2d8._4_4_;
    local_1e0 = local_2f0;
    uStack_1dc = uStack_2ec;
    uStack_1d8 = (undefined4)uStack_2e8;
    uStack_1d4 = uStack_2e8._4_4_;
    uStack_1f0 = (undefined4)uStack_300;
    uStack_1ec = uStack_300._4_4_;
    uStack_1e8 = (undefined4)uStack_2f8;
    uStack_1e4 = uStack_2f8._4_4_;
    uStack_200 = uStack_310;
    uStack_1fc = uStack_30c;
    uStack_1f8 = (undefined4)uStack_308;
    uStack_1f4 = uStack_308._4_4_;
    local_218 = local_328;
                    /* try { // try from 001c5b1f to 001c5b33 has its CatchHandler @ 001c5ec2 */
    uStack_210 = CONCAT44(uStack_31c,uStack_320);
    local_208 = CONCAT44(uStack_314,local_318);
    _ZN7uu_sort7tmp_dir13TmpDirWrapper9next_file17he098c4319062daf7E(&local_268,local_2a8);
    lVar6 = uStack_250;
    lVar7 = local_258;
    if (CONCAT44(uStack_25c,uStack_260) != -0x8000000000000000) {
      local_130 = CONCAT44(uStack_264,local_268);
      local_120 = (undefined4)local_258;
      uStack_11c = local_258._4_4_;
      uStack_118 = (undefined4)uStack_250;
      uStack_114 = uStack_250._4_4_;
                    /* try { // try from 001c5c9d to 001c5caf has its CatchHandler @ 001c5ec2 */
      local_128 = CONCAT44(uStack_25c,uStack_260);
      (*(code *)
        PTR__ZN90__LT_uu_sort__merge__WriteablePlainTmpFile_u20_as_u20_uu_sort__merge__WriteableTmpFile_GT_6create17h64c37076d2e0d4deE_00297098
      )(&local_328,&local_130);
      lVar7 = CONCAT44(uStack_31c,uStack_320);
      lVar6 = CONCAT44(uStack_314,local_318);
      if (local_328 != -0x8000000000000000) {
        uStack_288 = CONCAT44(uStack_30c,uStack_310);
        lStack_278 = (long)uStack_300;
        uStack_270 = uStack_2f8;
        lStack_280 = uStack_308;
        local_2a0 = local_328;
        uStack_2d8 = CONCAT44(uStack_1c4,uStack_1c8);
        local_2d0 = local_1c0;
        uStack_2e8 = CONCAT44(uStack_1d4,uStack_1d8);
        local_2e0 = CONCAT44(uStack_1cc,local_1d0);
        uStack_2f8 = CONCAT44(uStack_1e4,uStack_1e8);
        local_2f0 = local_1e0;
        uStack_2ec = uStack_1dc;
        uStack_308 = CONCAT44(uStack_1f4,uStack_1f8);
        uStack_300 = (undefined *)CONCAT44(uStack_1ec,uStack_1f0);
        local_318 = (undefined4)local_208;
        uStack_314 = local_208._4_4_;
        uStack_310 = uStack_200;
        uStack_30c = uStack_1fc;
        local_328 = local_218;
        uStack_320 = (undefined4)uStack_210;
        uStack_31c = uStack_210._4_4_;
        uStack_298 = lVar7;
        local_290 = lVar6;
        uVar5 = _ZN90__LT_uu_sort__merge__WriteablePlainTmpFile_u20_as_u20_uu_sort__merge__WriteableTmpFile_GT_8as_write17ha76be3287c2f2bddE
                          (&local_2a0);
                    /* try { // try from 001c5d66 to 001c5d76 has its CatchHandler @ 001c5e96 */
        auVar8 = _ZN7uu_sort5merge10FileMerger12write_all_to17h3cdf5e6a2cb467f4E
                           (&local_328,param_2,uVar5);
        if (auVar8._0_8_ == 0) {
          uStack_2f8 = uStack_270;
          uStack_308 = lStack_280;
          uStack_300 = (undefined *)lStack_278;
          local_318 = (undefined4)local_290;
          uStack_314 = local_290._4_4_;
          uStack_310 = (undefined4)uStack_288;
          uStack_30c = uStack_288._4_4_;
          local_328 = local_2a0;
          uStack_320 = (undefined4)uStack_298;
          uStack_31c = uStack_298._4_4_;
                    /* try { // try from 001c5dc8 to 001c5e2f has its CatchHandler @ 001c5e8c */
          (*(code *)
            PTR__ZN90__LT_uu_sort__merge__WriteablePlainTmpFile_u20_as_u20_uu_sort__merge__WriteableTmpFile_GT_16finished_writing17hce1338451b6e3b63E_002970a0
          )(&local_268,&local_328);
          local_168 = CONCAT44(uStack_264,local_268);
          local_160 = CONCAT44(uStack_25c,uStack_260);
          auVar8._8_8_ = local_258;
          auVar8._0_8_ = local_160;
          if (local_168 != -0x8000000000000000) {
            local_158 = local_258;
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb4bc2dc398314653E
                      (&local_230,&local_168,&PTR_s_src_uu_sort_src_merge_rs_0028c778);
            bVar3 = false;
            goto LAB_001c5bf2;
          }
        }
        else {
                    /* try { // try from 001c5d7f to 001c5d8e has its CatchHandler @ 001c5e91 */
          _ZN4core3ptr58drop_in_place_LT_uu_sort__merge__WriteablePlainTmpFile_GT_17hfc260a928aebfa87E
                    (&local_2a0);
        }
        goto LAB_001c5bc0;
      }
    }
    auVar8._8_8_ = lVar6;
    auVar8._0_8_ = lVar7;
                    /* try { // try from 001c5cc7 to 001c5cd3 has its CatchHandler @ 001c5f14 */
    _ZN4core3ptr47drop_in_place_LT_uu_sort__merge__FileMerger_GT_17hca51d1930952c542E(&local_218);
  }
LAB_001c5bc0:
  _ZN4core3ptr78drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__merge__ClosedPlainTmpFile_GT__GT_17hd5e30e780995eb35E
            (&local_230);
LAB_001c5bcd:
  _ZN4core3ptr36drop_in_place_LT_uu_sort__Output_GT_17h7def0b71731a8447E(param_3);
  return auVar8;
}