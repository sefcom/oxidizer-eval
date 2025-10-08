void _ZN4just6recipe15Recipe_LT_D_GT_10run_script17hf7776548fb8d2f66E
               (int *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined7 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined3 uVar6;
  int iVar7;
  undefined uVar8;
  char cVar9;
  long *plVar10;
  long lVar11;
  undefined uVar12;
  undefined *puVar13;
  uint extraout_EDX;
  uint uVar14;
  long lVar15;
  uint uVar16;
  char *pcVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined8 uVar29;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined7 uStack_360;
  undefined uStack_359;
  undefined7 uStack_358;
  int local_348;
  undefined4 uStack_344;
  byte bStack_340;
  undefined uStack_33f;
  undefined uStack_33e;
  undefined uStack_33d;
  undefined uStack_33c;
  undefined uStack_33b;
  undefined uStack_33a;
  byte bStack_339;
  undefined local_338;
  char cStack_337;
  undefined uStack_336;
  int iStack_335;
  undefined uStack_331;
  int iStack_330;
  undefined4 uStack_32c;
  int iStack_328;
  int iStack_324;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  long local_2d8;
  long local_2d0;
  char local_2c8;
  undefined uStack_2c7;
  undefined2 uStack_2c6;
  undefined uStack_2c4;
  undefined uStack_2c3;
  undefined2 uStack_2c2;
  int iStack_2c0;
  uint uStack_2bc;
  byte bStack_2b8;
  undefined uStack_2b7;
  undefined2 uStack_2b6;
  int iStack_2b4;
  undefined uStack_2b0;
  int iStack_2af;
  undefined4 uStack_2ab;
  int iStack_2a7;
  undefined4 uStack_2a3;
  undefined4 uStack_29f;
  undefined4 uStack_29b;
  undefined4 uStack_297;
  undefined4 uStack_293;
  int iStack_28f;
  undefined4 uStack_28b;
  undefined7 uStack_287;
  undefined uStack_280;
  undefined7 uStack_27f;
  undefined uStack_278;
  undefined4 local_277;
  undefined4 uStack_273;
  undefined4 uStack_26f;
  undefined4 uStack_26b;
  undefined7 uStack_267;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  int local_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  int local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined local_80 [24];
  undefined local_68 [8];
  undefined4 uStack_60;
  undefined8 local_58;
  long local_50 [4];
  
  local_2e0 = 0;
  local_2d8 = 8;
  local_2d0 = 0;
  lVar11 = *(long *)(param_2 + 8);
  local_1c0 = *(long *)(param_2 + 0x10);
  local_1c8 = param_2;
  local_98 = param_5;
  local_90 = param_6;
  local_88 = param_4;
  if (local_1c0 != 0) {
    lVar22 = local_1c0 << 5;
    lVar21 = 0;
    do {
                    /* try { // try from 00384b0f to 00384b74 has its CatchHandler @ 003859f7 */
      _ZN4just9evaluator9Evaluator13evaluate_line17hdd6d3ca4461d16bfE
                (&local_2c8,param_7,*(undefined8 *)(lVar11 + 8 + lVar21),
                 *(undefined8 *)(lVar11 + 0x10 + lVar21));
      if (local_2c8 != '8') goto LAB_003851c6;
      iStack_1a0 = iStack_2af;
      iStack_19c = CONCAT13(iStack_19c._3_1_,(undefined3)uStack_2ab);
      uVar25 = CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,bStack_2b8));
      uStack_1b4._3_1_ = (undefined)iStack_2c0;
      iStack_1b0 = (int)(CONCAT44(uStack_2bc,iStack_2c0) >> 8);
      uStack_1ac = CONCAT13(bStack_2b8,(int3)(uStack_2bc >> 8));
      uStack_1a8 = (undefined4)(CONCAT44(iStack_2b4,uVar25) >> 8);
      uVar26 = uStack_1a8;
      uStack_1a4._0_3_ = (undefined3)((uint)iStack_2b4 >> 8);
      uStack_1a4 = CONCAT13(uStack_2b0,(undefined3)uStack_1a4);
      uStack_1a8._0_3_ = (undefined3)((uint)uVar25 >> 8);
      uStack_60 = CONCAT31((undefined3)uStack_1a8,bStack_2b8);
      local_58 = CONCAT35((undefined3)uStack_2ab,CONCAT41(iStack_2af,uStack_2b0));
      uStack_1a8 = uVar26;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2be7ee32b7c9f397E
                (&local_2e0,local_68,&PTR_DAT_00530c40);
      lVar21 = lVar21 + 0x20;
    } while (lVar22 != lVar21);
  }
  lVar22 = local_2d8;
  lVar21 = *param_3;
  if ((*(char *)(lVar21 + 0x1a7) != '\0') &&
     (((*(char *)(lVar21 + 0x198) != '\0' || (*(char *)(local_1c8 + 0xfd) == '\x01')) &&
      (local_2d0 != 0)))) {
    lVar20 = local_2d0 * 0x18;
    lVar15 = 0;
    do {
      local_2c8 = *(char *)(lVar21 + 0x184);
      uStack_2b7 = *(undefined *)(lVar21 + 0x195);
      uStack_2c7 = 1;
      uStack_2c2 = 0;
      uStack_2c6 = 0;
      uStack_2c4 = 0;
      uStack_2c3 = 0;
      iStack_2c0 = *(int *)(lVar21 + 0x180) << 8;
      uStack_2bc = CONCAT31(10,(char)((uint)*(int *)(lVar21 + 0x180) >> 0x18));
      bStack_2b8 = 0;
      pcVar17 = &local_2c8;
      (*(code *)PTR__ZN4just5color5Color6stderr17h04afff4548ac818eE_00565e38)(&local_348);
      uVar16 = (uint)pcVar17;
      if (cStack_337 == '\0') {
LAB_00384c71:
        iStack_1a0 = (int)CONCAT43(uStack_344,local_348._1_3_);
        iStack_19c = (int)(CONCAT17(bStack_340,CONCAT43(uStack_344,local_348._1_3_)) >> 0x20);
        uVar14 = (uint)CONCAT12(uStack_33c,CONCAT11(uStack_33d,uStack_33e));
        uVar16 = (uint)CONCAT12(local_338,CONCAT11(bStack_339,uStack_33a));
        uVar8 = uStack_33f;
        uVar12 = uStack_33b;
      }
      else {
        iStack_1a0 = 0;
        iStack_19c = 0;
        uVar8 = 10;
        uVar14 = extraout_EDX;
        if (cStack_337 == '\x01') {
          uVar12 = 10;
          if ((char)local_348 == '\x01') goto LAB_00384c71;
        }
        else {
          uVar12 = 10;
        }
      }
      uVar29 = *(undefined8 *)(lVar22 + 8 + lVar15);
      uVar1 = *(undefined8 *)(lVar22 + 0x10 + lVar15);
      uStack_198._0_3_ = CONCAT21((short)uVar14,uVar8);
      uStack_198._0_4_ = CONCAT13((char)(uVar14 >> 0x10),(undefined3)uStack_198);
      uStack_198._0_5_ = CONCAT14(uVar12,(undefined4)uStack_198);
      uStack_198._0_7_ = CONCAT25((short)uVar16,(undefined5)uStack_198);
      uStack_198 = CONCAT17((char)(uVar16 >> 0x10),(undefined7)uStack_198);
      local_1b8 = 0;
      uStack_1b4 = 0x80000000;
      iStack_1b0 = (int)uVar29;
      uStack_1ac = (uint)((ulong)uVar29 >> 0x20);
      uStack_1a8 = (undefined4)uVar1;
      uStack_1a4 = (undefined4)((ulong)uVar1 >> 0x20);
      uStack_370 = 
      PTR__ZN87__LT_ansi_term__display__ANSIGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h246055d15162f7c1E_00566ae0
      ;
      local_2c8 = -0x28;
      uStack_2c7 = 0xdb;
      uStack_2c6 = 0x52;
      uStack_2c4 = 0;
      uStack_2c3 = 0;
      uStack_2c2 = 0;
      iStack_2c0 = 2;
      uStack_2bc = 0;
      iStack_2a7 = 0;
      uStack_2a3 = uStack_2a3 & 0xff000000;
      bStack_2b8 = (byte)&local_378;
      uStack_2b7 = (undefined)((ulong)&local_378 >> 8);
      uStack_2b6 = (undefined2)((ulong)&local_378 >> 0x10);
      iStack_2b4 = (int)((ulong)&local_378 >> 0x20);
      uStack_2b0 = 1;
      iStack_2af = 0;
      uStack_2ab = 0;
      local_378 = &local_1b8;
                    /* try { // try from 00384d6a to 00384d72 has its CatchHandler @ 003859e5 */
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48)(&local_2c8);
      _ZN4core3ptr69drop_in_place_LT_ansi_term__display__ANSIGenericString_LT_str_GT__GT_17h67f49c18e7cd0b03E
                (&local_1b8);
      lVar15 = lVar15 + 0x18;
    } while (lVar20 != lVar15);
  }
  lVar22 = local_1c8;
  if (*(char *)(lVar21 + 0x198) != '\0') {
    *(undefined *)param_1 = 0x38;
    goto LAB_00385241;
  }
  local_a0 = local_1c8 + 0xd8;
                    /* try { // try from 00384daf to 00384f8e has its CatchHandler @ 003859e3 */
  plVar10 = (long *)_ZN4just13attribute_set12AttributeSet3get17h29ad4fd4e40977f3E(local_a0,0x10);
  if ((plVar10 == (long *)0x0) || (*plVar10 + 0x7fffffffffffffffU < 0x14)) {
    if (local_2d0 == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_2c8,"evaluated_lines was empty",0x19);
      param_1[4] = iStack_2c0;
      param_1[5] = uStack_2bc;
      param_1[6] = CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,bStack_2b8));
      param_1[7] = iStack_2b4;
      *(undefined *)param_1 = 0x1d;
      *(ulong *)(param_1 + 2) =
           CONCAT26(uStack_2c2,
                    CONCAT15(uStack_2c3,
                             CONCAT14(uStack_2c4,CONCAT22(uStack_2c6,CONCAT11(uStack_2c7,local_2c8))
                                     )));
      goto LAB_00385241;
    }
    local_1e8 = local_2d8;
    _ZN4just7shebang7Shebang3new17he57eb4f1ce7ed327E
              (local_50,*(undefined8 *)(local_2d8 + 8),*(undefined8 *)(local_2d8 + 0x10));
    if (local_50[0] != 0) {
      uStack_331 = (undefined)local_50[2];
      iStack_330 = (int)((ulong)local_50[2] >> 8);
      uStack_32c._0_3_ = (undefined3)((ulong)local_50[2] >> 0x28);
      uStack_32c._3_1_ = (undefined)local_50[3];
      iStack_328 = (int)((ulong)local_50[3] >> 8);
      iStack_324._0_3_ = (undefined3)((ulong)local_50[3] >> 0x28);
      uStack_344._3_1_ = (undefined)local_50[0];
      bStack_340 = (byte)((ulong)local_50[0] >> 8);
      uStack_33f = (undefined)((ulong)local_50[0] >> 0x10);
      uStack_33e = (undefined)((ulong)local_50[0] >> 0x18);
      uStack_33d = (undefined)((ulong)local_50[0] >> 0x20);
      uStack_33c = (undefined)((ulong)local_50[0] >> 0x28);
      uStack_33b = (undefined)((ulong)local_50[0] >> 0x30);
      uStack_33a = (undefined)((ulong)local_50[0] >> 0x38);
      bStack_339 = (byte)local_50[1];
      local_338 = (undefined)((ulong)local_50[1] >> 8);
      cStack_337 = (char)((ulong)local_50[1] >> 0x10);
      uStack_336 = (undefined)((ulong)local_50[1] >> 0x18);
      iStack_335 = (int)((ulong)local_50[1] >> 0x20);
LAB_00384f53:
      local_c8 = CONCAT35((undefined3)uStack_32c,CONCAT41(iStack_330,uStack_331));
      local_c0 = CONCAT35((undefined3)iStack_324,CONCAT41(iStack_328,uStack_32c._3_1_));
      local_d8 = CONCAT44(CONCAT13(uStack_33a,CONCAT12(uStack_33b,CONCAT11(uStack_33c,uStack_33d))),
                          CONCAT13(uStack_33e,
                                   CONCAT12(uStack_33f,CONCAT11(bStack_340,uStack_344._3_1_))));
      uStack_d0 = (undefined1 *)
                  CONCAT44(iStack_335,
                           CONCAT13(uStack_336,CONCAT12(cStack_337,CONCAT11(local_338,bStack_339))))
      ;
      goto LAB_00384f7a;
    }
    _ZN4just6recipe15Recipe_LT_D_GT_10run_script28__u7b__u7b_closure_u7d__u7d_17hcc2d4e154cae4a5bE
              (&local_2c8,&local_1e8);
    iVar23 = CONCAT13(uStack_2c4,CONCAT21(uStack_2c6,uStack_2c7));
    uStack_344 = (uint)(CONCAT17((undefined)iStack_2c0,
                                 CONCAT25(uStack_2c2,CONCAT14(uStack_2c3,iVar23))) >> 0x20);
    bStack_340 = (byte)((uint)iStack_2c0 >> 8);
    uStack_33f = (undefined)((uint)iStack_2c0 >> 0x10);
    uStack_33e = (undefined)((uint)iStack_2c0 >> 0x18);
    uStack_33d = (undefined)uStack_2bc;
    uStack_33c = (undefined)(uStack_2bc >> 8);
    uStack_33b = (undefined)(uStack_2bc >> 0x10);
    uStack_33a = (undefined)(uStack_2bc >> 0x18);
    bStack_339 = bStack_2b8;
    local_338 = uStack_2b7;
    cStack_337 = (char)uStack_2b6;
    uStack_336 = (undefined)((ushort)uStack_2b6 >> 8);
    iStack_335 = iStack_2b4;
    uStack_331 = uStack_2b0;
    iStack_330 = iStack_2af;
    uStack_32c = uStack_2ab;
    iStack_328 = iStack_2a7;
    iStack_324 = CONCAT13(iStack_324._3_1_,(undefined3)uStack_2a3);
    local_1b8 = (int)CONCAT41(uStack_29f,uStack_2a3._3_1_);
    uStack_1b4 = (uint)(CONCAT35((undefined3)uStack_29b,CONCAT41(uStack_29f,uStack_2a3._3_1_)) >>
                       0x20);
    iStack_1b0 = (int)CONCAT41(uStack_297,uStack_29b._3_1_);
    uStack_1ac = (uint)(CONCAT35((undefined3)uStack_293,CONCAT41(uStack_297,uStack_29b._3_1_)) >>
                       0x20);
    uStack_1a8 = (undefined4)CONCAT41(iStack_28f,uStack_293._3_1_);
    uStack_1a4 = (undefined4)
                 (CONCAT35((undefined3)uStack_28b,CONCAT41(iStack_28f,uStack_293._3_1_)) >> 0x20);
    iStack_1a0 = (int)CONCAT71(uStack_287,uStack_28b._3_1_);
    iStack_19c = (int)((uint7)uStack_287 >> 0x18);
    uStack_198 = CONCAT71(uStack_27f,uStack_280);
    uStack_190 = CONCAT35((undefined3)uStack_273,CONCAT41(local_277,uStack_278));
    local_188 = CONCAT35((undefined3)uStack_26b,CONCAT41(uStack_26f,uStack_273._3_1_));
    uStack_180 = CONCAT71(uStack_267,uStack_26b._3_1_);
    local_348 = iVar23;
    if (local_2c8 == '8') goto LAB_00384f53;
    uStack_358 = CONCAT34((undefined3)uStack_2a3,iStack_2a7);
    local_378 = (int *)CONCAT44(uStack_344,iVar23);
    iVar24 = CONCAT13(uStack_33d,(int3)((uint)iStack_2c0 >> 8));
    puVar13 = (undefined *)
              CONCAT17(bStack_2b8,
                       CONCAT16(uStack_33a,CONCAT15(uStack_33b,CONCAT14(uStack_33c,iVar24))));
    local_368 = CONCAT17(uStack_2b0,CONCAT43(iStack_2b4,CONCAT21(uStack_2b6,uStack_2b7)));
    uStack_360 = (undefined7)CONCAT44(uStack_2ab,iStack_2af);
    *(undefined8 *)(param_1 + 0x16) = local_188;
    *(undefined8 *)(param_1 + 0x18) = uStack_180;
    *(undefined8 *)(param_1 + 0x12) = uStack_198;
    *(undefined8 *)(param_1 + 0x14) = uStack_190;
    *(ulong *)(param_1 + 0xe) = CONCAT44(uStack_1a4,uStack_1a8);
    *(ulong *)(param_1 + 0x10) = CONCAT44(iStack_19c,iStack_1a0);
    *(ulong *)(param_1 + 10) = CONCAT44(uStack_1b4,local_1b8);
    *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_1ac,iStack_1b0);
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_358,uStack_2ab._3_1_);
    uStack_370._4_4_ = (uint)((ulong)puVar13 >> 0x20);
    *(undefined8 *)((long)param_1 + 0x11) = local_368;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_2ab._3_1_,uStack_360);
    uVar16 = uStack_344;
    uVar14 = uStack_370._4_4_;
    uStack_370 = puVar13;
    uStack_359 = uStack_2ab._3_1_;
  }
  else {
    plVar19 = (long *)0x0;
    if (*(long *)(param_3[2] + 0xd8) != -0x8000000000000000) {
      plVar19 = (long *)(param_3[2] + 0xd8);
    }
    uStack_d0 = (undefined1 *)plVar10;
    if (*plVar10 == -0x8000000000000000) {
      uStack_d0 = (undefined1 *)plVar19;
    }
    if ((long *)uStack_d0 == (long *)0x0) {
      _ZN4just11interpreter11Interpreter26default_script_interpreter17h895623f6a8e849dfE();
      uStack_d0 = 
      _ZN4just11interpreter11Interpreter26default_script_interpreter8INSTANCE17h2296fe7f4ab02c14E;
    }
    local_d8 = 0;
LAB_00384f7a:
    _ZN4just17execution_context16ExecutionContext7tempdir17h39cbfc80d5808fcaE
              (&local_2c8,param_3,lVar22);
    if (local_2c8 == '8') {
      local_a8 = CONCAT35((undefined3)uStack_2ab,CONCAT41(iStack_2af,uStack_2b0));
      uStack_1a4 = CONCAT13(uStack_2b0,(undefined3)uStack_1a4);
      iStack_1a0 = iStack_2af;
      iStack_19c = CONCAT13(iStack_19c._3_1_,(undefined3)uStack_2ab);
      uStack_b0 = CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,bStack_2b8));
      local_b8 = iStack_2c0;
      uStack_b4 = uStack_2bc;
      iStack_ac = iStack_2b4;
                    /* try { // try from 00384fd7 to 00384fe4 has its CatchHandler @ 003859bd */
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00566a18
      )(&local_1e8,CONCAT44(uStack_2bc,iStack_2c0),CONCAT44(iStack_2b4,uStack_b0));
      lVar20 = *(long *)(lVar22 + 0xd8);
      uVar29 = *(undefined8 *)(lVar22 + 0xe0);
      local_2c8 = lVar20 != 0;
      lVar15 = lVar20;
      if ((bool)local_2c8) {
        lVar15 = *(long *)(lVar22 + 0xe8);
      }
      uStack_2c7 = 0;
      uStack_2c6 = 0;
      uStack_2c4 = 0;
      uStack_2c3 = 0;
      uStack_2c2 = 0;
      iStack_2c0 = 0;
      uStack_2bc = 0;
      bStack_2b8 = (byte)lVar20;
      uStack_2b7 = (undefined)((ulong)lVar20 >> 8);
      uStack_2b6 = (undefined2)((ulong)lVar20 >> 0x10);
      iStack_2b4 = (int)((ulong)lVar20 >> 0x20);
      uStack_2b0 = (undefined)uVar29;
      iStack_2af = (int)((ulong)uVar29 >> 8);
      uStack_2ab._0_3_ = (undefined3)((ulong)uVar29 >> 0x28);
      uStack_2ab = CONCAT13(local_2c8,(undefined3)uStack_2ab);
      iStack_2a7 = 0;
      uStack_2a3 = 0;
      uStack_29f = 0;
      uStack_29b = (uint)bStack_2b8 << 0x18;
      uStack_297 = (undefined4)((ulong)lVar20 >> 8);
      uStack_293._0_3_ = (undefined3)((ulong)lVar20 >> 0x28);
      uStack_293 = CONCAT13(uStack_2b0,(undefined3)uStack_293);
      uStack_28b._3_1_ = (undefined)lVar15;
      uStack_28b = CONCAT13(uStack_28b._3_1_,(undefined3)uStack_2ab);
      uStack_287 = (undefined7)((ulong)lVar15 >> 8);
                    /* try { // try from 0038505b to 003850f6 has its CatchHandler @ 003859c4 */
      iStack_28f = iStack_2af;
      auVar27 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h5e811dad93d39452E(&local_2c8);
      local_1d0 = lVar22 + 0x90;
      auVar28 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)();
      _ZN4just8executor8Executor15script_filename17he1d781f6fc31137aE
                (&local_2c8,&local_d8,auVar28._0_8_,auVar28._8_8_,auVar27._0_8_,auVar27._8_8_);
      _ZN3std4path7PathBuf4push17h48e66e1b6229fa08E(&local_1e8,&local_2c8);
      lVar20 = local_1c0;
      _ZN4just8executor8Executor6script17h9615beeece302e47E
                (local_80,local_d8,uStack_d0,lVar11,local_1c0,local_2d8,local_2d0);
      uVar16 = (uint)lVar20;
      if (*(char *)(lVar21 + 0x1a7) == '\x03') {
        local_2c8 = *(char *)(lVar21 + 0x184);
        uStack_2b7 = *(undefined *)(lVar21 + 0x195);
        uStack_2c7 = 0;
        uStack_2c6 = 0;
        uStack_2c4 = 0;
        uStack_2c3 = 0;
        uStack_2c2 = 0;
        iStack_2c0 = 0x400;
        uStack_2bc = 0xa00;
        bStack_2b8 = 0;
        piVar18 = &local_348;
        (*(code *)PTR__ZN4just5color5Color6stderr17h04afff4548ac818eE_00565e38)(piVar18,&local_2c8);
        uVar14 = (uint)piVar18;
        if (cStack_337 == '\0') {
LAB_0038518c:
          iStack_1a0 = (int)CONCAT43(uStack_344,local_348._1_3_);
          iStack_19c = (int)(CONCAT17(bStack_340,CONCAT43(uStack_344,local_348._1_3_)) >> 0x20);
          uVar14 = (uint)CONCAT12(uStack_33c,CONCAT11(uStack_33d,uStack_33e));
          uVar16 = (uint)CONCAT12(local_338,CONCAT11(bStack_339,uStack_33a));
          uVar8 = uStack_33f;
          uVar12 = uStack_33b;
        }
        else {
          iStack_1a0 = 0;
          iStack_19c = 0;
          uVar8 = 10;
          if (cStack_337 == '\x01') {
            uVar12 = 10;
            if ((char)local_348 == '\x01') goto LAB_0038518c;
          }
          else {
            uVar12 = 10;
          }
        }
        uStack_198._0_3_ = CONCAT21((short)uVar14,uVar8);
        uStack_198._0_4_ = CONCAT13((char)(uVar14 >> 0x10),(undefined3)uStack_198);
        uStack_198._0_5_ = CONCAT14(uVar12,(undefined4)uStack_198);
        uStack_198._0_7_ = CONCAT25((short)uVar16,(undefined5)uStack_198);
        uStack_198 = CONCAT17((char)(uVar16 >> 0x10),(undefined7)uStack_198);
        local_1b8 = 0;
        uStack_1b4 = 0x80000000;
        iStack_1b0 = (int)local_80._8_8_;
        uStack_1ac = SUB84(local_80._8_8_,4);
        uStack_1a8 = (undefined4)local_80._16_8_;
        uStack_1a4 = SUB84(local_80._16_8_,4);
        local_378 = &local_1b8;
        uStack_370 = 
        PTR__ZN87__LT_ansi_term__display__ANSIGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h246055d15162f7c1E_00566ae0
        ;
        local_2c8 = -0x28;
        uStack_2c7 = 0xdb;
        uStack_2c6 = 0x52;
        uStack_2c4 = 0;
        uStack_2c3 = 0;
        uStack_2c2 = 0;
        iStack_2c0 = 2;
        uStack_2bc = 0;
        iStack_2a7 = 0;
        uStack_2a3 = uStack_2a3 & 0xff000000;
        bStack_2b8 = (byte)&local_378;
        uStack_2b7 = (undefined)((ulong)&local_378 >> 8);
        uStack_2b6 = (undefined2)((ulong)&local_378 >> 0x10);
        iStack_2b4 = (int)((ulong)&local_378 >> 0x20);
        uStack_2b0 = 1;
        iStack_2af = 0;
        uStack_2ab = 0;
                    /* try { // try from 00385399 to 003853a6 has its CatchHandler @ 0038597d */
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48)(&local_2c8);
        _ZN4core3ptr69drop_in_place_LT_ansi_term__display__ANSIGenericString_LT_str_GT__GT_17h67f49c18e7cd0b03E
                  (&local_1b8);
      }
                    /* try { // try from 003853b4 to 003854aa has its CatchHandler @ 003859c2 */
      lVar11 = _ZN3std2fs5write17h00d17955715bd664E(&local_1e8,local_80);
      if (lVar11 == 0) {
LAB_00385468:
        auVar27 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(local_1d0)
        ;
        uVar29 = auVar27._8_8_;
        lVar11 = param_3[2];
        _ZN4just6recipe15Recipe_LT_D_GT_17working_directory17hac15927441629eafE
                  (&local_378,lVar22,lVar11,param_3[3]);
        puVar13 = uStack_370;
        if (local_378 == (int *)&DAT_8000000000000000) {
          puVar13 = (undefined *)0x0;
        }
                    /* try { // try from 003854ca to 003854f8 has its CatchHandler @ 0038599c */
        _ZN4just8executor8Executor7command17ha6f1d0ee763617d4E
                  (&local_2c8,&local_d8,lVar21,local_1e0,local_1d8,auVar27._0_8_,uVar29,puVar13,
                   local_368);
        uVar25 = (undefined4)((ulong)uVar29 >> 0x20);
        local_2e8 = local_260;
        iVar24 = CONCAT22(uStack_2c6,CONCAT11(uStack_2c7,local_2c8));
        lVar21 = CONCAT26(uStack_2c2,CONCAT15(uStack_2c3,CONCAT14(uStack_2c4,iVar24)));
        local_348 = iStack_2c0;
        uStack_344 = uStack_2bc;
        bStack_340 = bStack_2b8;
        uStack_33f = uStack_2b7;
        uStack_33e = (undefined)uStack_2b6;
        uStack_33d = (undefined)((ushort)uStack_2b6 >> 8);
        uStack_33c = (undefined)iStack_2b4;
        uStack_33b = (undefined)((uint)iStack_2b4 >> 8);
        uStack_33a = (undefined)((uint)iStack_2b4 >> 0x10);
        bStack_339 = (byte)((uint)iStack_2b4 >> 0x18);
        uVar29 = CONCAT35((undefined3)uStack_2ab,CONCAT41(iStack_2af,uStack_2b0));
        local_338 = uStack_2b0;
        cStack_337 = (char)iStack_2af;
        uStack_336 = (undefined)((uint)iStack_2af >> 8);
        iStack_335 = (int)((ulong)uVar29 >> 0x18);
        iVar7 = iStack_335;
        uStack_331 = (undefined)((uint)uStack_2ab >> 0x10);
        iStack_330 = (int)CONCAT41(iStack_2a7,uStack_2ab._3_1_);
        uStack_32c = (int)(CONCAT35((undefined3)uStack_2a3,CONCAT41(iStack_2a7,uStack_2ab._3_1_)) >>
                          0x20);
        uVar1 = CONCAT35((undefined3)uStack_293,CONCAT41(uStack_297,uStack_29b._3_1_));
        iStack_328 = (int)CONCAT41(uStack_29f,uStack_2a3._3_1_);
        iStack_324 = (int)(CONCAT35((undefined3)uStack_29b,CONCAT41(uStack_29f,uStack_2a3._3_1_)) >>
                          0x20);
        uVar3 = CONCAT35((undefined3)uStack_28b,CONCAT41(iStack_28f,uStack_293._3_1_));
        uVar4 = CONCAT71(uStack_287,uStack_28b._3_1_);
        uStack_300 = CONCAT35((undefined3)uStack_273,CONCAT41(local_277,uStack_278));
        uVar5 = CONCAT35((undefined3)uStack_26b,CONCAT41(uStack_26f,uStack_273._3_1_));
        uStack_2f0 = CONCAT71(uStack_267,uStack_26b._3_1_);
        iStack_335._1_3_ = (undefined3)((ulong)uVar29 >> 0x20);
        uStack_320._0_4_ = (int)CONCAT41(uStack_297,uStack_29b._3_1_);
        uStack_320._4_4_ = (int)((ulong)uVar1 >> 0x20);
        local_318._0_4_ = (int)CONCAT41(iStack_28f,uStack_293._3_1_);
        local_318._4_4_ = (int)((ulong)uVar3 >> 0x20);
        uStack_310._0_4_ = (int)uVar4;
        uStack_310._4_4_ = (int)((uint7)uStack_287 >> 0x18);
        iVar23 = (int)CONCAT41(iStack_2af,uStack_2b0);
        iStack_335 = iVar7;
        uStack_320 = uVar1;
        local_318 = uVar3;
        uStack_310 = uVar4;
        local_2f8 = uVar5;
        if (lVar21 == -0x8000000000000000) {
          *(undefined8 *)(param_1 + 0x18) = local_260;
          *(undefined8 *)(param_1 + 0x14) = uVar5;
          *(undefined8 *)(param_1 + 0x16) = uStack_2f0;
          *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_27f,uStack_280);
          *(undefined8 *)(param_1 + 0x12) = uStack_300;
          param_1[0xc] = (int)local_318;
          param_1[0xd] = local_318._4_4_;
          param_1[0xe] = (int)uStack_310;
          param_1[0xf] = uStack_310._4_4_;
          param_1[8] = iStack_328;
          param_1[9] = iStack_324;
          param_1[10] = (int)uStack_320;
          param_1[0xb] = uStack_320._4_4_;
          param_1[4] = iVar23;
          param_1[5] = CONCAT13(uStack_331,iStack_335._1_3_);
          param_1[6] = iStack_330;
          param_1[7] = uStack_32c;
          *param_1 = iStack_2c0;
          param_1[1] = uStack_2bc;
          param_1[2] = CONCAT13(uStack_33d,CONCAT12(uStack_33e,CONCAT11(uStack_2b7,bStack_2b8)));
          param_1[3] = iStack_2b4;
          _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h35203c2827c71cb0E
                    (&local_378);
        }
        else {
          local_e8 = local_1f8;
          uStack_e0 = uStack_1f0;
          local_f8 = local_208;
          uStack_f0 = uStack_200;
          local_108 = local_218;
          uStack_100 = uStack_210;
          local_118 = local_228;
          uStack_110 = uStack_220;
          local_128 = local_238;
          uStack_120 = uStack_230;
          local_138 = local_248;
          uStack_130 = uStack_240;
          local_148 = local_258;
          uStack_140 = uStack_250;
          uStack_1a8 = CONCAT13(uStack_33d,CONCAT12(uStack_33e,CONCAT11(uStack_2b7,bStack_2b8)));
          iStack_19c = CONCAT13(uStack_331,iStack_335._1_3_);
          iStack_1b0 = iStack_2c0;
          uStack_1ac = uStack_2bc;
          uStack_1a4 = (undefined4)
                       (CONCAT17(bStack_339,
                                 CONCAT16(uStack_33a,
                                          CONCAT15(uStack_33b,CONCAT14(uStack_33c,uStack_1a8)))) >>
                       0x20);
          uStack_198 = CONCAT44(uStack_32c,iStack_330);
          uStack_190 = CONCAT44(iStack_324,iStack_328);
          local_188 = CONCAT44(uStack_320._4_4_,(int)uStack_320);
          uStack_180 = CONCAT44(local_318._4_4_,(int)local_318);
          local_178 = CONCAT44(uStack_310._4_4_,(int)uStack_310);
          local_2f8._0_4_ = (undefined4)CONCAT41(uStack_26f,uStack_273._3_1_);
          local_2f8._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
          uStack_2f0._4_4_ = (undefined4)((uint7)uStack_267 >> 0x18);
          uStack_160 = (undefined4)local_2f8;
          uStack_15c = local_2f8._4_4_;
          uStack_158 = (undefined4)uStack_2f0;
          uStack_154 = uStack_2f0._4_4_;
          local_150 = local_260;
          uStack_1b4 = (uint)((ulong)lVar21 >> 0x20);
          local_1b8 = iVar24;
          iStack_1a0 = iVar23;
          local_168 = uStack_300;
          _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h35203c2827c71cb0E
                    (&local_378);
                    /* try { // try from 003856d5 to 00385739 has its CatchHandler @ 003859ab */
          if ((*(char *)(lVar11 + 0x1e9) != '\0') ||
             (cVar9 = _ZN4just13attribute_set12AttributeSet8contains17hc7aae4e0e93c2d03E
                                (local_a0,0xe), cVar9 != '\0')) {
            _ZN3std7process7Command4args17hc5540de655bfe19aE(&local_1b8,local_98,local_90);
          }
          (*(code *)
            PTR__ZN71__LT_std__process__Command_u20_as_u20_just__command_ext__CommandExt_GT_6export17hbded0bf5acb950b5E_00566a40
          )(&local_1b8,lVar11 + 0xa8,param_3[1],local_88,lVar11 + 0x238);
          (*(code *)PTR_memcpy_00565e28)(&local_2c8,&local_1b8,0xe0);
                    /* try { // try from 00385758 to 00385765 has its CatchHandler @ 0038597b */
          (*(code *)
            PTR__ZN71__LT_std__process__Command_u20_as_u20_just__command_ext__CommandExt_GT_12status_guard17h0e09d4f2af31801dE_00566a60
          )(&local_348,&local_2c8);
          iVar23 = CONCAT13(uStack_33d,CONCAT12(uStack_33e,CONCAT11(uStack_33f,bStack_340)));
          uVar16 = CONCAT13(bStack_339,CONCAT12(uStack_33a,CONCAT11(uStack_33b,uStack_33c)));
          local_378 = (int *)CONCAT44(uStack_344,local_348);
          uStack_370 = (undefined *)CONCAT44(uVar16,iVar23);
          puVar13 = uStack_370;
          if (local_348 == 1) {
            local_348 = iVar23;
            uStack_344 = uVar16;
                    /* try { // try from 00385787 to 00385794 has its CatchHandler @ 0038596c */
            auVar27 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                                (local_1d0);
                    /* try { // try from 00385795 to 003857b2 has its CatchHandler @ 00385957 */
            _ZN4just8executor8Executor5error17hb67514b2f69537b4E
                      (&local_2c8,&local_d8,puVar13,auVar27._0_8_,auVar27._8_8_);
            *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_267,uStack_26b._3_1_);
            *(ulong *)(param_1 + 0x14) =
                 CONCAT35((undefined3)uStack_273,CONCAT41(local_277,uStack_278));
            *(ulong *)(param_1 + 0x16) =
                 CONCAT35((undefined3)uStack_26b,CONCAT41(uStack_26f,uStack_273._3_1_));
            *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_287,uStack_28b._3_1_);
            *(ulong *)(param_1 + 0x12) = CONCAT71(uStack_27f,uStack_280);
            *(ulong *)(param_1 + 0xc) =
                 CONCAT35((undefined3)uStack_293,CONCAT41(uStack_297,uStack_29b._3_1_));
            *(ulong *)(param_1 + 0xe) =
                 CONCAT35((undefined3)uStack_28b,CONCAT41(iStack_28f,uStack_293._3_1_));
            *(ulong *)(param_1 + 8) =
                 CONCAT35((undefined3)uStack_2a3,CONCAT41(iStack_2a7,uStack_2ab._3_1_));
            *(ulong *)(param_1 + 10) =
                 CONCAT35((undefined3)uStack_29b,CONCAT41(uStack_29f,uStack_2a3._3_1_));
            *(ulong *)(param_1 + 4) =
                 CONCAT44(iStack_2b4,CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,bStack_2b8)));
            *(ulong *)(param_1 + 6) =
                 CONCAT35((undefined3)uStack_2ab,CONCAT41(iStack_2af,uStack_2b0));
            *param_1 = CONCAT22(uStack_2c6,CONCAT11(uStack_2c7,local_2c8));
            param_1[1] = CONCAT22(uStack_2c2,CONCAT11(uStack_2c3,uStack_2c4));
            param_1[2] = iStack_2c0;
            param_1[3] = uStack_2bc;
          }
          else {
            iVar23 = CONCAT13((undefined)iStack_335,
                              CONCAT12(uStack_336,CONCAT11(cStack_337,local_338)));
                    /* try { // try from 0038587c to 00385894 has its CatchHandler @ 00385959 */
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h968c8b1a26c3c1b4E
                      (&local_2c8,(uStack_344 & 0x7f) == 0,uStack_344 >> 8 & 0xff,lVar22,uStack_344,
                       lVar22,CONCAT44(uVar25,*(undefined4 *)(lVar11 + 0x1e8)));
            if (local_2c8 != '8') {
              *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_267,uStack_26b._3_1_);
              *(ulong *)((long)param_1 + 0x51) = CONCAT44(uStack_273,local_277);
              *(ulong *)((long)param_1 + 0x59) = CONCAT44(uStack_26b,uStack_26f);
              *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_280,uStack_287);
              *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_278,uStack_27f);
              iVar23 = CONCAT13(uStack_2c4,CONCAT21(uStack_2c6,uStack_2c7));
              uVar16 = CONCAT13((undefined)iStack_2c0,CONCAT21(uStack_2c2,uStack_2c3));
              iVar24 = CONCAT13((undefined)uStack_2bc,iStack_2c0._1_3_);
              uVar14 = CONCAT13(bStack_2b8,uStack_2bc._1_3_);
              uVar25 = CONCAT13((undefined)iStack_2b4,CONCAT21(uStack_2b6,uStack_2b7));
              uVar26 = CONCAT13(uStack_2b0,iStack_2b4._1_3_);
              goto LAB_003858ff;
            }
            if (iVar23 == 0) {
              *(undefined *)param_1 = 0x38;
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_1e8);
              _ZN4core3ptr43drop_in_place_LT_tempfile__dir__TempDir_GT_17h1eb013ff5fec252bE
                        (&local_b8);
              goto LAB_00385241;
            }
            *(undefined *)param_1 = 0x1e;
            param_1[1] = iVar23;
          }
        }
      }
      else {
        _ZN4just17execution_context16ExecutionContext7tempdir28__u7b__u7b_closure_u7d__u7d_17h73d903d964048742E
                  (&local_2c8,lVar22,lVar11);
        iVar23 = CONCAT13(uStack_2c4,CONCAT21(uStack_2c6,uStack_2c7));
        uStack_1b4 = (uint)(CONCAT17((undefined)iStack_2c0,
                                     CONCAT25(uStack_2c2,CONCAT14(uStack_2c3,iVar23))) >> 0x20);
        iStack_1b0 = (int)CONCAT43(uStack_2bc,iStack_2c0._1_3_);
        uStack_1ac = (uint)(CONCAT17(bStack_2b8,CONCAT43(uStack_2bc,iStack_2c0._1_3_)) >> 0x20);
        uVar2 = CONCAT43(iStack_2b4,CONCAT21(uStack_2b6,uStack_2b7));
        uStack_1a8 = (undefined4)uVar2;
        uStack_1a4 = (undefined4)(CONCAT17(uStack_2b0,uVar2) >> 0x20);
        iStack_1a0 = iStack_2af;
        iStack_19c = uStack_2ab;
        uStack_198 = CONCAT44(uStack_2a3,iStack_2a7);
        uStack_190 = CONCAT44(uStack_29b,uStack_29f);
        local_188 = CONCAT44(uStack_293,uStack_297);
        uStack_180 = CONCAT44(uStack_28b,iStack_28f);
        local_178 = CONCAT17(uStack_280,uStack_287);
        local_168 = CONCAT44(uStack_273,local_277);
        uStack_160 = uStack_26f;
        uStack_15c = uStack_26b;
        uStack_158 = (undefined4)uStack_267;
        uStack_154._0_3_ = (undefined3)((uint7)uStack_267 >> 0x20);
        local_1b8 = iVar23;
        if (local_2c8 == '8') goto LAB_00385468;
        *(ulong *)(param_1 + 0x18) =
             CONCAT35((undefined3)uStack_154,CONCAT41(uStack_158,uStack_26b._3_1_));
        *(undefined8 *)((long)param_1 + 0x51) = local_168;
        *(ulong *)((long)param_1 + 0x59) = CONCAT44(uStack_26b,uStack_26f);
        *(undefined8 *)((long)param_1 + 0x41) = local_178;
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_278,uStack_27f);
        uVar16 = uStack_1b4;
        iVar24 = iStack_1b0;
        uVar14 = uStack_1ac;
        uVar25 = uStack_1a8;
        uVar26 = uStack_1a4;
LAB_003858ff:
        *(undefined4 *)((long)param_1 + 0x31) = uStack_297;
        *(undefined4 *)((long)param_1 + 0x35) = uStack_293;
        *(int *)((long)param_1 + 0x39) = iStack_28f;
        *(undefined4 *)((long)param_1 + 0x3d) = uStack_28b;
        *(int *)((long)param_1 + 0x21) = iStack_2a7;
        *(uint *)((long)param_1 + 0x25) = uStack_2a3;
        *(undefined4 *)((long)param_1 + 0x29) = uStack_29f;
        *(int *)((long)param_1 + 0x2d) = uStack_29b;
        *(undefined4 *)((long)param_1 + 0x11) = uVar25;
        *(undefined4 *)((long)param_1 + 0x15) = uVar26;
        *(int *)((long)param_1 + 0x19) = iStack_2af;
        *(int *)((long)param_1 + 0x1d) = uStack_2ab;
        *(int *)((long)param_1 + 1) = iVar23;
        *(uint *)((long)param_1 + 5) = uVar16;
        *(int *)((long)param_1 + 9) = iVar24;
        *(uint *)((long)param_1 + 0xd) = uVar14;
        *(char *)param_1 = local_2c8;
      }
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_1e8);
                    /* try { // try from 0038591e to 00385951 has its CatchHandler @ 003859e3 */
      _ZN4core3ptr43drop_in_place_LT_tempfile__dir__TempDir_GT_17h1eb013ff5fec252bE(&local_b8);
      goto LAB_00385241;
    }
LAB_003851c6:
    iVar23 = CONCAT13(uStack_2c4,CONCAT21(uStack_2c6,uStack_2c7));
    uStack_1a8 = (undefined4)
                 (CONCAT44(iStack_2b4,CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,bStack_2b8))) >> 8);
    uVar6 = (undefined3)((uint)iStack_2b4 >> 8);
    uStack_1a4 = CONCAT13(uStack_2b0,uVar6);
    iStack_1a0 = iStack_2af;
    iStack_19c = CONCAT13(iStack_19c._3_1_,(undefined3)uStack_2ab);
    uStack_1b4 = (uint)(CONCAT17((undefined)iStack_2c0,
                                 CONCAT25(uStack_2c2,CONCAT14(uStack_2c3,iVar23))) >> 0x20);
    iStack_1b0 = (int)CONCAT43(uStack_2bc,iStack_2c0._1_3_);
    uStack_1ac = (uint)(CONCAT17(bStack_2b8,CONCAT43(uStack_2bc,iStack_2c0._1_3_)) >> 0x20);
    *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_267,uStack_26b._3_1_);
    *(ulong *)(param_1 + 0x14) = CONCAT35((undefined3)uStack_273,CONCAT41(local_277,uStack_278));
    *(ulong *)(param_1 + 0x16) =
         CONCAT35((undefined3)uStack_26b,CONCAT41(uStack_26f,uStack_273._3_1_));
    *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_287,uStack_28b._3_1_);
    *(ulong *)(param_1 + 0x12) = CONCAT71(uStack_27f,uStack_280);
    *(ulong *)(param_1 + 0xc) =
         CONCAT35((undefined3)uStack_293,CONCAT41(uStack_297,uStack_29b._3_1_));
    *(ulong *)(param_1 + 0xe) =
         CONCAT35((undefined3)uStack_28b,CONCAT41(iStack_28f,uStack_293._3_1_));
    *(ulong *)(param_1 + 8) = CONCAT35((undefined3)uStack_2a3,CONCAT41(iStack_2a7,uStack_2ab._3_1_))
    ;
    *(ulong *)(param_1 + 10) =
         CONCAT35((undefined3)uStack_29b,CONCAT41(uStack_29f,uStack_2a3._3_1_));
    *(ulong *)(param_1 + 4) = CONCAT35(uVar6,CONCAT41(uStack_1a8,bStack_2b8));
    *(ulong *)(param_1 + 6) = CONCAT35((undefined3)uStack_2ab,CONCAT41(iStack_2af,uStack_2b0));
    uVar16 = uStack_1b4;
    iVar24 = iStack_1b0;
    uVar14 = uStack_1ac;
    local_1b8 = iVar23;
  }
  *(int *)((long)param_1 + 1) = iVar23;
  *(uint *)((long)param_1 + 5) = uVar16;
  *(int *)((long)param_1 + 9) = iVar24;
  *(uint *)((long)param_1 + 0xd) = uVar14;
  *(char *)param_1 = local_2c8;
LAB_00385241:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h766f1f48926327acE
            (&local_2e0);
  _ZN4core3ptr47drop_in_place_LT_just__evaluator__Evaluator_GT_17he8a263daf6e01e97E(param_7);
  return;
}