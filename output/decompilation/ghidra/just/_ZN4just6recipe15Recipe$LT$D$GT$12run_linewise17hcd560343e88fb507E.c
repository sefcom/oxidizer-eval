void _ZN4just6recipe15Recipe_LT_D_GT_12run_linewise17hcd560343e88fb507E
               (char *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined auVar20 [16];
  ulong local_348;
  long local_340;
  long local_338;
  long local_330;
  long local_328;
  long local_320;
  long local_318;
  long local_310;
  undefined4 *local_308;
  undefined8 uStack_300;
  long local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  long local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  char local_2b2 [17];
  char local_2a1;
  long local_2a0;
  long local_298;
  long local_290;
  undefined4 *local_288;
  long local_280;
  long local_278;
  long local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined local_250 [8];
  undefined8 local_248;
  long local_240;
  undefined4 **local_238;
  undefined *local_230;
  char local_228;
  undefined uStack_227;
  undefined2 uStack_226;
  undefined uStack_224;
  undefined uStack_223;
  undefined2 uStack_222;
  int iStack_220;
  undefined4 uStack_21c;
  undefined uStack_218;
  undefined uStack_217;
  undefined6 uStack_216;
  long lStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  long local_140 [3];
  undefined local_128 [16];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined3 uStack_108;
  undefined4 uStack_105;
  undefined uStack_101;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  
  local_338 = *(long *)(param_2 + 8);
  local_330 = *(long *)(param_2 + 0x10) * 0x20 + local_338;
  local_348 = 0;
  lVar15 = *(long *)(param_2 + 0xc0);
  local_2d8 = param_2;
  local_268 = param_5;
  local_260 = param_6;
  local_258 = param_4;
  plVar11 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hca198ddf3f46da3dE
                              (&local_348,&local_338);
  if (*plVar11 != 0) {
    local_318 = local_2d8 + 0x90;
    lVar14 = param_3[2];
    local_328 = *param_3;
    local_278 = param_3[1];
    bVar1 = *(byte *)(local_2d8 + 0xfd);
    local_2a0 = local_2d8 + 0xd8;
    local_288 = (undefined4 *)(local_328 + 0x184);
    local_298 = lVar14 + 0xa8;
    local_270 = param_3[3];
    local_280 = lVar14 + 0x238;
    lVar15 = lVar15 + 1;
    local_310 = lVar14;
    do {
      local_2d0 = 0;
      local_2c8 = 1;
      local_2c0 = 0;
      plVar11 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hca198ddf3f46da3dE
                                  (&local_348,&local_338);
      lVar17 = *plVar11;
      if (lVar17 == 0) {
        bVar6 = 0;
      }
      else {
                    /* try { // try from 00383f0e to 00383f90 has its CatchHandler @ 00384a1c */
        bVar6 = _ZN4just4line4Line8is_quiet17h3a5d44d89007f671E
                          (*(undefined8 *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x10));
      }
      plVar11 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hca198ddf3f46da3dE
                                  (&local_348,&local_338);
      lVar17 = *plVar11;
      if (lVar17 == 0) {
        bVar7 = 0;
        if (*(char *)(lVar14 + 0x1e7) == '\x01') goto LAB_00383f71;
LAB_00383fa0:
        cVar10 = '\0';
      }
      else {
        bVar7 = _ZN4just4line4Line13is_infallible17h6abb30f774dbfe3fE
                          (*(undefined8 *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x10));
        if (*(char *)(lVar14 + 0x1e7) != '\x01') goto LAB_00383fa0;
LAB_00383f71:
        plVar11 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hca198ddf3f46da3dE
                                    (&local_348,&local_338);
        lVar17 = *plVar11;
        if (lVar17 == 0) goto LAB_00383fa0;
        cVar10 = _ZN4just4line4Line10is_comment17h9a81c927aacfe8c9E
                           (*(undefined8 *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x10));
      }
      plVar11 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hca198ddf3f46da3dE
                                  (&local_348,&local_338);
      uVar3 = local_348;
      if (*plVar11 != 0) {
        local_348 = 0;
        if (cVar10 == '\0') {
          if ((uVar3 & 1) == 0) {
            if (local_338 != local_330) {
              lVar17 = local_338;
              local_338 = local_338 + 0x20;
              goto LAB_0038403a;
            }
          }
          else {
            lVar17 = local_340;
            if (local_340 != 0) {
LAB_0038403a:
                    /* try { // try from 00384042 to 00384059 has its CatchHandler @ 003849f9 */
              _ZN4just9evaluator9Evaluator13evaluate_line17hdd6d3ca4461d16bfE
                        (&local_228,param_7,*(undefined8 *)(lVar17 + 8),
                         *(undefined8 *)(lVar17 + 0x10),0);
              if (local_228 == '8') {
                uStack_101 = (undefined)lStack_210;
                uStack_100 = (undefined4)((ulong)lStack_210 >> 8);
                uStack_fc._0_3_ = (undefined3)((ulong)lStack_210 >> 0x28);
                uStack_114._3_1_ = (undefined)iStack_220;
                uStack_110 = (undefined4)(CONCAT44(uStack_21c,iStack_220) >> 8);
                uStack_10c = CONCAT13(uStack_218,(int3)((uint)uStack_21c >> 8));
                uStack_108 = (undefined3)(CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218)) >> 8)
                ;
                uStack_105 = (undefined4)((uint6)uStack_216 >> 0x10);
                local_308 = (undefined4 *)CONCAT44(uStack_21c,iStack_220);
                uStack_300 = (undefined4 *)CONCAT44(uStack_105,CONCAT31(uStack_108,uStack_218));
                local_2f8 = lStack_210;
                    /* try { // try from 003840a1 to 003840ad has its CatchHandler @ 003849f5 */
                _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb25a112a407b21ecE
                          (&local_2d0,uStack_300,(undefined *)(lStack_210 + (long)uStack_300));
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE
                          (&local_308);
                    /* try { // try from 003840c0 to 003840c4 has its CatchHandler @ 003849f9 */
                cVar8 = _ZN4just4line4Line15is_continuation17h5ed80636f0322bb6E
                                  (*(undefined8 *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x10));
                local_320 = lVar15 + 1;
                lVar17 = local_320;
                if (cVar8 != '\0') {
                  _ZN5alloc6string6String3pop17h86cb5b5bb86d0e70E(&local_2d0);
                  plVar11 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hca198ddf3f46da3dE
                                              (&local_348,&local_338);
                  lVar17 = local_320;
                  if (*plVar11 != 0) {
                    lVar17 = lVar15 + 2;
                    do {
                      lVar15 = lVar17;
                      uVar3 = local_348 & 1;
                      local_348 = 0;
                      if (uVar3 == 0) {
                        if (local_338 == local_330) goto LAB_0038497c;
                        lVar17 = local_338;
                        local_338 = local_338 + 0x20;
                      }
                      else {
                        lVar17 = local_340;
                        if (local_340 == 0) goto LAB_0038497c;
                      }
                    /* try { // try from 00384161 to 0038417b has its CatchHandler @ 00384a1e */
                      _ZN4just9evaluator9Evaluator13evaluate_line17hdd6d3ca4461d16bfE
                                (&local_228,param_7,*(undefined8 *)(lVar17 + 8),
                                 *(undefined8 *)(lVar17 + 0x10),1);
                      if (local_228 != '8') goto LAB_003847f3;
                      uStack_101 = (undefined)lStack_210;
                      uStack_100 = (undefined4)((ulong)lStack_210 >> 8);
                      uStack_fc._0_3_ = (undefined3)((ulong)lStack_210 >> 0x28);
                      uStack_114._3_1_ = (undefined)iStack_220;
                      uStack_110 = (undefined4)(CONCAT44(uStack_21c,iStack_220) >> 8);
                      uStack_10c = CONCAT13(uStack_218,(int3)((uint)uStack_21c >> 8));
                      uStack_108 = (undefined3)
                                   (CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218)) >> 8);
                      uStack_105 = (undefined4)((uint6)uStack_216 >> 0x10);
                      local_308 = (undefined4 *)CONCAT44(uStack_21c,iStack_220);
                      uStack_300 = (undefined4 *)
                                   CONCAT44(uStack_105,CONCAT31(uStack_108,uStack_218));
                      local_2f8 = lStack_210;
                    /* try { // try from 003841c3 to 003841cf has its CatchHandler @ 00384a0d */
                      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb25a112a407b21ecE
                                (&local_2d0,uStack_300,(undefined *)(lStack_210 + (long)uStack_300))
                      ;
                      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE
                                (&local_308);
                    /* try { // try from 003841e2 to 003841e6 has its CatchHandler @ 00384a1e */
                      cVar8 = _ZN4just4line4Line15is_continuation17h5ed80636f0322bb6E
                                        (*(undefined8 *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x10))
                      ;
                      lVar17 = lVar15;
                      if (cVar8 == '\0') goto LAB_0038422d;
                      _ZN5alloc6string6String3pop17h86cb5b5bb86d0e70E(&local_2d0);
                      plVar11 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hca198ddf3f46da3dE
                                                  (&local_348,&local_338);
                      lVar17 = lVar15 + 1;
                    } while (*plVar11 != 0);
                    goto LAB_00384220;
                  }
                }
                goto LAB_0038422d;
              }
LAB_003847f3:
              local_118 = CONCAT13(uStack_224,CONCAT21(uStack_226,uStack_227));
              uStack_108 = (undefined3)(CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218)) >> 8);
              uStack_105 = (undefined4)((uint6)uStack_216 >> 0x10);
              uStack_101 = (undefined)lStack_210;
              uStack_100 = (undefined4)((ulong)lStack_210 >> 8);
              uStack_fc._0_3_ = (undefined3)((ulong)lStack_210 >> 0x28);
              uStack_114 = (undefined4)
                           (CONCAT17((undefined)iStack_220,
                                     CONCAT25(uStack_222,CONCAT14(uStack_223,local_118))) >> 0x20);
              uStack_110 = (undefined4)CONCAT43(uStack_21c,iStack_220._1_3_);
              uStack_10c = (undefined4)
                           (CONCAT17(uStack_218,CONCAT43(uStack_21c,iStack_220._1_3_)) >> 0x20);
              *(undefined8 *)(param_1 + 0x60) = local_1c8;
              *(undefined8 *)(param_1 + 0x50) = local_1d8;
              *(undefined8 *)(param_1 + 0x58) = uStack_1d0;
              *(undefined8 *)(param_1 + 0x40) = local_1e8;
              *(undefined8 *)(param_1 + 0x48) = uStack_1e0;
              *(undefined8 *)(param_1 + 0x30) = local_1f8;
              *(undefined8 *)(param_1 + 0x38) = uStack_1f0;
              *(undefined8 *)(param_1 + 0x20) = local_208;
              *(undefined8 *)(param_1 + 0x28) = uStack_200;
              *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_105,CONCAT31(uStack_108,uStack_218));
              *(long *)(param_1 + 0x18) = lStack_210;
              *(undefined4 *)(param_1 + 1) = local_118;
              *(undefined4 *)(param_1 + 5) = uStack_114;
              *(undefined4 *)(param_1 + 9) = uStack_110;
              *(undefined4 *)(param_1 + 0xd) = uStack_10c;
              *param_1 = local_228;
              goto LAB_0038486e;
            }
          }
        }
        else if ((uVar3 & 1) == 0) {
          if (local_338 != local_330) {
            lVar17 = local_338;
            local_338 = local_338 + 0x20;
            goto LAB_00384007;
          }
        }
        else {
          lVar17 = local_340;
          if (local_340 != 0) {
LAB_00384007:
                    /* try { // try from 0038400f to 00384013 has its CatchHandler @ 003849f7 */
            _ZN4just4line4Line15is_continuation17h5ed80636f0322bb6E
                      (*(undefined8 *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x10));
            local_320 = lVar15 + 1;
            goto LAB_00383ea8;
          }
        }
LAB_0038497c:
        local_348 = 0;
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)
                  (&PTR_DAT_00530c10);
LAB_00384989:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
LAB_00384220:
      local_320 = lVar15;
      lVar17 = lVar15;
      if (cVar10 == '\0') {
LAB_0038422d:
        local_320 = lVar17;
        uVar5 = local_2c0;
        uVar12 = local_2c8;
        auVar20 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                            ((uint)bVar6 + (uint)bVar7,local_2c8,local_2c0);
        lVar14 = local_310;
        lVar15 = auVar20._8_8_;
        if (auVar20._0_8_ == 0) {
                    /* try { // try from 00384961 to 00384988 has its CatchHandler @ 00384a20 */
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
                    (uVar12,uVar5,(uint)bVar6 + (uint)bVar7,uVar5,&PTR_DAT_00530c28);
          goto LAB_00384989;
        }
        if (lVar15 == 0) goto LAB_00383ea8;
        local_290 = lVar15;
        if ((*(char *)(local_328 + 0x198) == '\0') &&
           (bVar9 = *(byte *)(local_328 + 0x1a7), bVar9 < 2)) {
          if (((bVar6 ^ bVar1) & 1) == 0) {
            if (*(char *)(local_310 + 0x1ea) != '\0') {
                    /* try { // try from 00384433 to 00384444 has its CatchHandler @ 00384a1c */
              cVar10 = _ZN4just13attribute_set12AttributeSet8contains17hc7aae4e0e93c2d03E
                                 (local_2a0,0xb);
              if (cVar10 == '\0') goto LAB_0038461a;
              bVar9 = *(byte *)(local_328 + 0x1a7);
            }
            if (bVar9 != 0) goto LAB_003842a3;
          }
        }
        else {
LAB_003842a3:
          lVar15 = local_328;
          if (*(char *)(local_328 + 0x19b) == '\0') {
            uStack_218 = (undefined)*(undefined2 *)(local_288 + 4);
            uStack_217 = (undefined)((ushort)*(undefined2 *)(local_288 + 4) >> 8);
            uVar18 = *local_288;
            uVar19 = local_288[1];
            iStack_220 = local_288[2];
            uStack_21c = local_288[3];
            local_228 = (char)uVar18;
            uStack_227 = (undefined)((uint)uVar18 >> 8);
            uStack_226 = (undefined2)((uint)uVar18 >> 0x10);
            uStack_224 = (undefined)uVar19;
            uStack_223 = (undefined)((uint)uVar19 >> 8);
            uStack_222 = (undefined2)((uint)uVar19 >> 0x10);
          }
          else {
            local_228 = *(char *)(local_328 + 0x184);
            uStack_217 = *(undefined *)(local_328 + 0x195);
            uStack_227 = 1;
            uStack_222 = 0;
            uStack_226 = 0;
            uStack_224 = 0;
            uStack_223 = 0;
            iStack_220 = *(int *)(local_328 + 0x180) << 8;
            uStack_21c = CONCAT31(10,(char)((uint)*(int *)(local_328 + 0x180) >> 0x18));
            uStack_218 = 0;
          }
          (*(code *)PTR__ZN4just5color5Color6stderr17h04afff4548ac818eE_00565e38)
                    (local_2b2,&local_228);
          if (*(char *)(lVar15 + 0x1a2) == '\0') {
            cVar10 = local_2a1;
            if (local_2a1 != '\0') goto LAB_00384541;
LAB_0038455e:
            uStack_100 = (undefined4)local_2b2._1_8_;
            uStack_fc = SUB84(local_2b2._1_8_,4);
            uVar18 = (int)local_2b2._9_8_;
            uVar19 = SUB84(local_2b2._9_8_,4);
          }
          else {
                    /* try { // try from 00384347 to 003843a2 has its CatchHandler @ 00384a1c */
            (*(code *)PTR__ZN6chrono6offset5local5Local3now17h41ddf45366a21dacE_00566b80)(local_128)
            ;
            local_118 = *(undefined4 *)(local_328 + 0x68);
            uStack_114 = *(undefined4 *)(local_328 + 0x6c);
            uStack_110 = *(undefined4 *)(local_328 + 0x70);
            uStack_10c = *(undefined4 *)(local_328 + 0x74);
            uStack_108 = 8;
            uStack_105 = 0;
            uStack_101 = 0;
            uStack_100 = 0;
            uStack_fc = 0;
            uStack_f8 = uStack_f8 & 0xffffffffffffff00;
            _ZN6chrono8datetime18DateTime_LT_Tz_GT_17format_with_items17h14b63f323818dc79E
                      (&local_228,local_128,&local_118);
                    /* try { // try from 003843a3 to 003843b7 has its CatchHandler @ 003849cf */
            _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h7a0253cb9a868533E
                      (local_250,&local_228);
            cVar10 = local_2a1;
            if (local_2a1 == '\0') {
LAB_003843e8:
              local_2f0 = (undefined4)local_2b2._1_8_;
              uStack_2ec = SUB84(local_2b2._1_8_,4);
              uStack_2e8 = (int)local_2b2._9_8_;
              uStack_2e4 = SUB84(local_2b2._9_8_,4);
            }
            else {
              local_2f0 = 0;
              uStack_2ec = 0;
              uStack_2e8 = _DAT_00165e50;
              uStack_2e4 = _UNK_00165e54;
              if ((local_2a1 == '\x01') && (local_2b2[0] == '\x01')) goto LAB_003843e8;
            }
            local_308 = (undefined4 *)0x8000000000000000;
            uStack_300 = (undefined4 *)local_248;
            local_2f8 = local_240;
            local_230 = 
            PTR__ZN87__LT_ansi_term__display__ANSIGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h246055d15162f7c1E_00566ae0
            ;
            local_118 = 0x530bf0;
            uStack_114 = 0;
            uStack_110 = 2;
            uStack_10c = 0;
            uStack_f8 = 0;
            uStack_108 = SUB83(&local_238,0);
            uStack_105 = (undefined4)((ulong)&local_238 >> 0x18);
            uStack_101 = (undefined)((ulong)&local_238 >> 0x38);
            uStack_100 = 1;
            uStack_fc = 0;
                    /* try { // try from 00384501 to 0038450e has its CatchHandler @ 003849b3 */
            local_238 = &local_308;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48)(&local_118);
            _ZN4core3ptr69drop_in_place_LT_ansi_term__display__ANSIGenericString_LT_str_GT__GT_17h67f49c18e7cd0b03E
                      (&local_308);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(local_250);
            _ZN4core3ptr109drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_chrono__format__strftime__StrftimeItems_GT__GT_17h832ee16fadc7d71fE
                      (&local_228);
            if (cVar10 == '\0') goto LAB_0038455e;
LAB_00384541:
            uStack_100 = 0;
            uStack_fc = 0;
            uVar18 = _DAT_00165e50;
            uVar19 = _UNK_00165e54;
            if ((cVar10 == '\x01') && (local_2b2[0] == '\x01')) goto LAB_0038455e;
          }
          uStack_f8 = CONCAT44(uVar19,uVar18);
          local_118 = 0;
          uStack_114 = 0x80000000;
          uStack_110 = auVar20._0_4_;
          uStack_10c = auVar20._4_4_;
          uStack_108 = (undefined3)local_290;
          uStack_105 = (undefined4)((ulong)local_290 >> 0x18);
          uStack_101 = (undefined)((ulong)local_290 >> 0x38);
          uStack_300 = (undefined4 *)
                       PTR__ZN87__LT_ansi_term__display__ANSIGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h246055d15162f7c1E_00566ae0
          ;
          local_228 = -0x28;
          uStack_227 = 0xdb;
          uStack_226 = 0x52;
          uStack_224 = 0;
          uStack_223 = 0;
          uStack_222 = 0;
          iStack_220 = 2;
          uStack_21c = 0;
          local_208 = 0;
          uStack_218 = SUB81(&local_308,0);
          uStack_217 = (undefined)((ulong)&local_308 >> 8);
          uStack_216 = (undefined6)((ulong)&local_308 >> 0x10);
          lStack_210 = 1;
                    /* try { // try from 003845ff to 0038460c has its CatchHandler @ 003849e3 */
          local_308 = &local_118;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48)(&local_228);
          _ZN4core3ptr69drop_in_place_LT_ansi_term__display__ANSIGenericString_LT_str_GT__GT_17h67f49c18e7cd0b03E
                    (&local_118);
        }
LAB_0038461a:
        if (*(char *)(local_328 + 0x198) == '\0') {
                    /* try { // try from 00384628 to 0038463f has its CatchHandler @ 00384a1c */
          _ZN4just8settings8Settings13shell_command17h194009976e056ef8E
                    (&local_118,local_298,local_328);
                    /* try { // try from 00384640 to 0038473d has its CatchHandler @ 003849fb */
          _ZN4just6recipe15Recipe_LT_D_GT_17working_directory17hac15927441629eafE
                    (local_140,local_2d8,lVar14,local_270);
          lVar15 = local_328;
          if (local_140[0] != -0x8000000000000000) {
            _ZN3std7process7Command11current_dir17hb900367fa6eef4b5E(&local_118,local_140);
          }
          _ZN3std7process7Command3arg17h20b967969329bd8eE(&local_118,auVar20._0_8_,local_290);
          if ((*(char *)(lVar14 + 0x1e9) != '\0') ||
             (cVar10 = _ZN4just13attribute_set12AttributeSet8contains17hc7aae4e0e93c2d03E
                                 (local_2a0,0xe), cVar10 != '\0')) {
            uVar12 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                               (local_318);
            _ZN3std7process7Command3arg17h20b967969329bd8eE(&local_118,uVar12);
            _ZN3std7process7Command4args17hc5540de655bfe19aE(&local_118,local_268,local_260);
          }
          if (*(char *)(lVar15 + 0x1a7) == '\0') {
            _ZN3std7process7Command6stderr17h9fed92c06b70fc7eE(&local_118,1);
            _ZN3std7process7Command6stdout17h735b5e124ef77713E(&local_118,1);
          }
          (*(code *)
            PTR__ZN71__LT_std__process__Command_u20_as_u20_just__command_ext__CommandExt_GT_6export17hbded0bf5acb950b5E_00566a40
          )(&local_118,local_298,local_278,local_258);
          (*(code *)PTR_memcpy_00565e28)(&local_228,&local_118,0xe0);
                    /* try { // try from 00384757 to 00384764 has its CatchHandler @ 003849e1 */
          (*(code *)
            PTR__ZN71__LT_std__process__Command_u20_as_u20_just__command_ext__CommandExt_GT_12status_guard17h0e09d4f2af31801dE_00566a60
          )(&local_308,&local_228);
          puVar4 = uStack_300;
          iStack_220 = (undefined4)uStack_300;
          uStack_21c = uStack_300._4_4_;
          local_228 = (char)local_308;
          uStack_227 = (undefined)((ulong)local_308 >> 8);
          uStack_226 = (undefined2)((ulong)local_308 >> 0x10);
          uStack_224 = (undefined)((ulong)local_308 >> 0x20);
          uStack_223 = (undefined)((ulong)local_308 >> 0x28);
          uStack_222 = (undefined2)((ulong)local_308 >> 0x30);
          if ((int)local_308 == 1) {
            local_308 = uStack_300;
                    /* try { // try from 003848a7 to 003848b1 has its CatchHandler @ 0038498b */
            auVar20 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                                (local_318);
            *param_1 = '\x1f';
            *(undefined (*) [16])(param_1 + 8) = auVar20;
            *(undefined4 **)(param_1 + 0x18) = puVar4;
LAB_0038486e:
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_2d0)
            ;
            goto LAB_0038487b;
          }
          uVar16 = (uint)((ulong)local_308 >> 0x20);
          uVar13 = uVar16 & 0x7f;
          lVar14 = local_310;
          if (((ulong)local_308 & 0x7f00000000) == 0) {
            uVar16 = (uVar16 & 0xff00) >> 8;
            if (uVar16 != 0 && bVar7 == 0) {
              auVar20 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                                  (local_318);
              cVar10 = _ZN4just6recipe15Recipe_LT_D_GT_18print_exit_message17he133fff8607c7ca6E
                                 (local_2d8,*(undefined4 *)(local_310 + 0x1e8));
              *param_1 = '\t';
              param_1[1] = cVar10;
              *(uint *)(param_1 + 4) = uVar16;
              *(undefined (*) [16])(param_1 + 8) = auVar20;
              goto LAB_0038493b;
            }
            if (bVar7 == 0 && (int)local_2f8 != 0) {
              *param_1 = '\x1e';
              *(int *)(param_1 + 4) = (int)local_2f8;
              goto LAB_0038486e;
            }
          }
          else if (bVar7 == 0) {
                    /* try { // try from 003848c8 to 00384923 has its CatchHandler @ 0038499d */
            auVar20 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                                (local_318);
            cVar10 = '2';
            if ('\x01' < (char)((char)uVar13 + '\x01')) {
              cVar10 = ',';
            }
            *param_1 = cVar10;
            *(uint *)(param_1 + 4) = uVar13;
            *(undefined (*) [16])(param_1 + 8) = auVar20;
LAB_0038493b:
            param_1[0x18] = '\x01';
            param_1[0x19] = '\0';
            param_1[0x1a] = '\0';
            param_1[0x1b] = '\0';
            param_1[0x1c] = '\0';
            param_1[0x1d] = '\0';
            param_1[0x1e] = '\0';
            param_1[0x1f] = '\0';
            *(long *)(param_1 + 0x20) = local_320;
            goto LAB_0038486e;
          }
        }
      }
LAB_00383ea8:
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_2d0);
      plVar11 = (long *)_ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hca198ddf3f46da3dE
                                  (&local_348,&local_338);
      lVar15 = local_320;
    } while (*plVar11 != 0);
  }
  *param_1 = '8';
LAB_0038487b:
  _ZN4core3ptr47drop_in_place_LT_just__evaluator__Evaluator_GT_17he8a263daf6e01e97E(param_7);
  return;
}