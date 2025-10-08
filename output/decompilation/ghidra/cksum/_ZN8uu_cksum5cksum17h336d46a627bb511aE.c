undefined  [16] _ZN8uu_cksum5cksum17h336d46a627bb511aE(byte *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  code *pcVar6;
  undefined ***pppuVar7;
  byte bVar8;
  char cVar9;
  ushort uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 **ppuVar15;
  ulong uVar16;
  long lVar17;
  undefined **ppuVar18;
  ulong uVar19;
  undefined8 ***pppuVar20;
  byte *pbVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined auVar25 [16];
  undefined2 local_24a;
  undefined8 **local_248;
  code *pcStack_240;
  undefined ***local_238;
  undefined *local_230;
  undefined *local_228;
  code *local_220;
  undefined8 local_218;
  undefined2 local_210;
  undefined local_208 [8];
  undefined8 uStack_200;
  undefined ***local_1f8;
  undefined local_1f0 [8];
  undefined8 local_1e8;
  undefined ***local_1e0;
  code *local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined local_1c0 [16];
  undefined ***local_1b0;
  code *local_1a8;
  undefined **local_1a0;
  code *local_198;
  undefined ***local_190;
  undefined **local_188;
  byte *local_180;
  undefined **local_178;
  code *local_170;
  undefined8 local_168;
  undefined8 local_160;
  ulong local_158;
  undefined ***local_150;
  byte *local_148;
  code *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined ***local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined ***local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined ***local_f8;
  undefined **local_f0;
  undefined *local_e8;
  undefined ***local_e0;
  undefined **local_d8;
  undefined *local_d0;
  undefined ***local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  byte local_a8 [32];
  undefined local_88 [16];
  undefined8 local_78;
  byte local_70 [64];
  
                    /* try { // try from 00180ac4 to 00180ad0 has its CatchHandler @ 00181bad */
  _ZN4core4iter6traits8iterator8Iterator7collect17hb1e4d7e773409482E(&local_168);
  if ((param_1[0x3a] == 1) && (1 < local_158)) {
                    /* try { // try from 00180ae3 to 00180ae9 has its CatchHandler @ 00181b8e */
    uVar13 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hd32763c273953b02E(0);
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_clap_builder__util__id__Id_GT__GT_17h85ec7d2cdaf9b289E
              (local_168,local_160);
    auVar25._8_8_ = &DAT_00262bb0;
    auVar25._0_8_ = uVar13;
  }
  else {
    pbVar21 = local_a8;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h60d9513257eb0eb1E
              (pbVar21,&local_168);
    auVar25 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h41a86bffa5c54210E
                        (pbVar21);
    if (auVar25._0_8_ != 0) {
      local_148 = param_1 + 0x20;
      local_150 = (undefined ***)(param_1 + 0x3b);
      local_178 = &PTR_DAT_00262db0;
      pcVar22 = (code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_0026cef0;
      local_180 = param_1;
      do {
        uVar13 = auVar25._8_8_;
        uVar23 = auVar25._0_8_;
        (*pcVar22)(local_70,uVar23,uVar13);
        (*pcVar22)(&local_248,"-: \n",1);
        bVar8 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd9623c64792f17b1E
                          (local_70,&local_248);
        if (bVar8 == 0) {
          cVar9 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0026cf10)
                            (uVar23,uVar13);
          if (cVar9 != '\0') {
            _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h6c2e0349894caf53E
                      (&local_248);
            uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h61ab867a00341c2eE(&local_248);
            ppuVar18 = &
                       PTR__ZN4core3ptr88drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__util__Empty_GT__GT_17he637d467c56005e0E_00262c70
            ;
            goto LAB_00180dd0;
          }
          _ZN3std2fs4File4open17h95d1ebc71d5bc123E(local_1c0,uVar23,uVar13);
          if (local_1c0._0_4_ != 1) {
            uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc90a017c3b0970d3E(local_1c0._4_4_);
            ppuVar18 = &
                       PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h5b4bf2643c180949E_00262c18
            ;
            goto LAB_00180dd0;
          }
          local_1a0 = (undefined **)
                      _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h33d0ae6f12f8c95dE
                                (local_1c0._8_8_,uVar23,uVar13);
                    /* try { // try from 00180d1c to 00180da4 has its CatchHandler @ 00181bba */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0026cf18)(1);
          auVar25 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0026cf20)();
          local_1f0 = (undefined  [8])local_208;
          local_1e8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hadc6a92ef31a9059E;
          local_1e0 = &local_1a0;
          local_1d8 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9646482404df5651E
          ;
          local_248 = (undefined8 **)&DAT_00262aa0;
          pcStack_240 = (code *)0x3;
          local_228 = (undefined *)0x0;
          local_238 = (undefined ***)local_1f0;
          local_230 = (undefined *)0x2;
          _local_208 = auVar25;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0026cf28)(&local_248);
                    /* try { // try from 00180dad to 00180dda has its CatchHandler @ 00181c43 */
          _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h1d37b627a49668b5E
                    (local_1a0);
        }
        else {
          uVar14 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_0026cf08)();
          uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7c06c1b4b16eb5aeE(uVar14);
          ppuVar18 = (undefined **)&DAT_00262cc8;
LAB_00180dd0:
          _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hd73f6c9a7bc8eff2E
                    (local_70,uVar14,ppuVar18);
                    /* try { // try from 00180ddb to 00180e7d has its CatchHandler @ 00181c29 */
          cVar9 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0026cf10)
                            (uVar23,uVar13);
          if (cVar9 == '\0') {
            _ZN6uucore8features8checksum13digest_reader17h0b96abc958d00050E
                      (&local_248,local_148,local_70,*(undefined8 *)(param_1 + 0x30));
            _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17ha82d747ca18b9e26E
                      (local_1f0,&local_248);
            pppuVar7 = local_1e0;
            local_1a8 = local_1e8;
            local_140 = local_1d8;
            local_170 = local_1d8;
            if (param_1[0x3a] == 0) {
              local_1a0 = (undefined **)local_1f0;
              local_198 = local_1e8;
              local_190 = local_1e0;
            }
            else {
              local_188 = (undefined **)local_1f0;
              if (param_1[0x3a] != 2) {
                uVar13 = *(undefined8 *)(param_1 + 0x10);
                uVar23 = *(undefined8 *)(param_1 + 0x18);
                cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                                  (uVar13,uVar23,"crc",3);
                pcVar22 = local_1a8;
                if (cVar9 == '\0') {
                  cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                                    (uVar13,uVar23,&DAT_00111980,4);
                  pcVar22 = local_1a8;
                  if ((cVar9 != '\0') ||
                     (cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                                        (uVar13,uVar23,"bsd",3), cVar9 != '\0')) {
                    uVar11 = _ZN4core3num21__LT_impl_u20_u16_GT_16from_ascii_radix17h81be443e3f8b1a62E
                                       (pcVar22,pppuVar7);
                    uVar10 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8faa357aa9b57c0dE
                                       (uVar11,&PTR_DAT_00262d38);
                    local_1f0._0_2_ = uVar10 << 8 | uVar10 >> 8;
                    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9b02c4bb569ef277E
                              (&local_248,local_1f0,2);
                    goto LAB_00181a34;
                  }
                  local_248 = (undefined8 **)local_188;
                  pcStack_240 = pcVar22;
                  local_238 = pppuVar7;
                    /* try { // try from 00181ab7 to 00181add has its CatchHandler @ 00181b38 */
                  _ZN58__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_hex__FromHex_GT_8from_hex17h607a63c4883149c8E
                            (local_1f0,&local_248);
                  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hda5e567a9340eba8E
                            (&local_248,local_1f0,&PTR_DAT_00262d20);
                  bVar2 = false;
                }
                else {
                  uVar13 = _ZN4core3num21__LT_impl_u20_u32_GT_16from_ascii_radix17h825576ac29f90020E
                                     (local_1a8,pppuVar7);
                    /* try { // try from 00181995 to 00181a33 has its CatchHandler @ 00181b38 */
                  uVar12 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h68c8f15cbe1eda69E(uVar13);
                  local_1f0._0_4_ =
                       uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                       uVar12 << 0x18;
                  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9b02c4bb569ef277E
                            (&local_248,local_1f0,4);
LAB_00181a34:
                  bVar2 = true;
                }
                    /* try { // try from 00181a37 to 00181a67 has its CatchHandler @ 00181b3d */
                local_1f0 = (undefined  [8])
                            (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0026cf40)();
                pcVar6 = pcStack_240;
                lVar17 = (*(code *)
                           PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hda8b04bbc47966cdE_0026cf48
                         )(local_1f0,pcStack_240,local_238);
                if (lVar17 == 0) {
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = pppuVar7;
                  auVar25 = auVar3 << 0x40;
                }
                else {
                  auVar25 = (*(code *)
                              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0026cf58
                            )(lVar17);
                }
                _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hff252e251e10954dE
                          (local_248,pcVar6);
                if (bVar2) {
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4b980c8c114e5aceE
                            (local_188,pcVar22);
                }
                    /* try { // try from 0018191d to 00181929 has its CatchHandler @ 00181b72 */
                _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h9ab3152754514e37E
                          (local_70);
                    /* try { // try from 0018192a to 00181936 has its CatchHandler @ 00181bab */
                _ZN4core3ptr87drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_std__ffi__os_str__OsStr_GT__GT_17h51ccac9fcb54742fE
                          (local_a8);
                goto LAB_00181937;
              }
              uVar14 = *(undefined8 *)(param_1 + 0x10);
              uVar1 = *(undefined8 *)(param_1 + 0x18);
              cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                                (uVar14,uVar1,"crc",3);
              if ((((cVar9 == '\0') &&
                   (cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                                      (uVar14,uVar1,"crc32b",6), cVar9 == '\0')) &&
                  (cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                                     (uVar14,uVar1,&DAT_00111980,4), cVar9 == '\0')) &&
                 (cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                                    (uVar14,uVar1,"bsd",3), cVar9 == '\0')) {
                local_1f8 = (undefined ***)DAT_00262d78;
                local_208._4_4_ = _UNK_00262d6c;
                local_208._0_4_ = _DAT_00262d68;
                uStack_200 = (undefined *)CONCAT44(_UNK_00262d74,_UNK_00262d70);
                local_248 = (undefined8 **)local_188;
                pcStack_240 = local_1a8;
                local_238 = pppuVar7;
                    /* try { // try from 00181620 to 00181646 has its CatchHandler @ 00181b77 */
                _ZN58__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_hex__FromHex_GT_8from_hex17h607a63c4883149c8E
                          (local_1f0,&local_248);
                _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hda5e567a9340eba8E
                          (&local_248,local_1f0,&PTR_DAT_00262d80);
                param_1 = local_180;
                pcVar22 = pcStack_240;
                    /* try { // try from 00181651 to 0018166e has its CatchHandler @ 00181b26 */
                (*(code *)PTR__ZN13data_encoding8Encoding6encode17hb65c8f60a01607f2E_0026cf50)
                          (&local_1a0,local_208,pcStack_240,local_238);
                _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hff252e251e10954dE
                          (local_248,pcVar22);
                _ZN4core3ptr44drop_in_place_LT_data_encoding__Encoding_GT_17hc9f4fcfbce7e8f5cE
                          (local_208,uStack_200);
              }
              else {
                local_1a0 = local_188;
                local_198 = local_1a8;
                local_190 = pppuVar7;
                param_1 = local_180;
              }
            }
            uVar14 = *(undefined8 *)(param_1 + 0x10);
            uVar1 = *(undefined8 *)(param_1 + 0x18);
            cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                              (uVar14,uVar1,&DAT_00111980,4);
            if (cVar9 == '\0') {
              cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                                (uVar14,uVar1,"bsd",3);
              if (cVar9 != '\0') {
                uVar11 = _ZN4core3num21__LT_impl_u20_u16_GT_16from_ascii_radix17h81be443e3f8b1a62E
                                   (local_198,local_190);
                local_24a = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8faa357aa9b57c0dE
                                      (uVar11,&PTR_DAT_00262d98);
                uVar19 = *(ulong *)(param_1 + 0x30);
                if (uVar19 == 0) goto LAB_00181af4;
                if (((ulong)local_170 | uVar19) >> 0x20 == 0) {
                  uVar16 = ((ulong)local_170 & 0xffffffff) / (uVar19 & 0xffffffff);
                  uVar19 = ((ulong)local_170 & 0xffffffff) % (uVar19 & 0xffffffff);
                }
                else {
                  uVar16 = (ulong)local_170 / uVar19;
                  uVar19 = (ulong)local_170 % uVar19;
                }
                local_1e0 = (undefined ***)&local_248;
                local_1c0._0_8_ = (uVar16 + 1) - (ulong)(uVar19 == 0);
                local_208 = (undefined  [8])0x112ac7;
                if (bVar8 != 0) {
                  local_208 = (undefined  [8])0x1;
                }
                bVar8 = bVar8 ^ 1;
                uStack_200 = (undefined *)(ulong)bVar8;
                local_248 = (undefined8 **)&local_24a;
                pcStack_240 = (code *)
                              PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_0026cf38
                ;
                local_238 = (undefined ***)local_1c0;
                local_230 = 
                PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0026ce08
                ;
                local_228 = local_208;
                local_220 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hadc6a92ef31a9059E;
                local_218 = 0;
                local_210 = 5;
                local_1f0 = (undefined  [8])&DAT_00262af0;
                local_1e8 = (code *)0x3;
                local_1d0 = &DAT_00112f38;
                local_1c8 = 3;
                local_1d8 = (code *)0x4;
                _ZN4core6option15Option_LT_T_GT_11map_or_else17h02fb2c4bf8d27115E
                          (&local_120,local_1f0);
                pppuVar20 = (undefined8 ***)local_110;
                uVar14 = local_118;
                puVar24 = local_120;
                goto LAB_00181481;
              }
              cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                                (uVar14,uVar1,"crc",3);
              if ((cVar9 != '\0') ||
                 (cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                                    (uVar14,uVar1,"crc32b",6), cVar9 != '\0')) {
                local_208 = (undefined  [8])0x112ac7;
                if (bVar8 != 0) {
                  local_208 = (undefined  [8])0x1;
                }
                bVar8 = bVar8 ^ 1;
                uStack_200 = (undefined *)(ulong)bVar8;
                local_248 = &local_1a0;
                pcStack_240 = 
                _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                ;
                local_238 = (undefined ***)&local_140;
                local_230 = 
                PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0026ce08
                ;
                local_228 = local_208;
                local_220 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hadc6a92ef31a9059E;
                local_1f0 = (undefined  [8])&DAT_00262af0;
                local_1e8 = (code *)0x3;
                local_1d0 = (undefined *)0x0;
                local_1e0 = (undefined ***)&local_248;
                local_1d8 = (code *)0x3;
                _ZN4core6option15Option_LT_T_GT_11map_or_else17h02fb2c4bf8d27115E
                          (&local_108,local_1f0);
                pppuVar20 = (undefined8 ***)local_f8;
                uVar14 = local_100;
                puVar24 = local_108;
                goto LAB_00181481;
              }
              cVar9 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2a332431da5eb7c8E
                                (uVar14,uVar1,"blake2b",7);
              if (cVar9 == '\0') {
                if ((param_1[0x38] & 1) == 0) goto LAB_001817a3;
                    /* try { // try from 00181699 to 001816a8 has its CatchHandler @ 00181bcc */
                _ZN5alloc3str21__LT_impl_u20_str_GT_18to_ascii_uppercase17h035e9d4252a297afE
                          (local_1f0,uVar14,uVar1);
                local_1c0._0_8_ = local_1f0;
                local_1c0._8_8_ =
                     _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                ;
                local_248 = (undefined8 **)&DAT_00262b50;
                pcStack_240 = (code *)0x2;
                local_228 = (undefined *)0x0;
                local_238 = (undefined ***)local_1c0;
                local_230 = (undefined *)0x1;
                    /* try { // try from 001816f9 to 0018170a has its CatchHandler @ 00181b14 */
                _ZN4core6option15Option_LT_T_GT_11map_or_else17h02fb2c4bf8d27115E
                          (local_208,&local_248);
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4b980c8c114e5aceE
                          (local_1f0,local_1e8);
                pppuVar20 = (undefined8 ***)local_1f8;
                auVar5 = _local_208;
                local_1f0 = (undefined  [8])&local_1a0;
                local_1e8 = 
                _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                ;
                local_248 = (undefined8 **)&PTR_DAT_00262b40;
                pcStack_240 = (code *)0x1;
                local_228 = (undefined *)0x0;
                local_238 = (undefined ***)local_1f0;
                local_230 = (undefined *)0x1;
                    /* try { // try from 00181773 to 00181782 has its CatchHandler @ 00181b06 */
                _ZN4core6option15Option_LT_T_GT_11map_or_else17h02fb2c4bf8d27115E
                          (&local_d8,&local_248);
                bVar8 = 1;
                uStack_200 = local_d0;
                local_208 = (undefined  [8])local_d8;
                local_1f8 = local_c8;
              }
              else {
                if ((param_1[0x38] & 1) == 0) {
LAB_001817a3:
                  local_208 = (undefined  [8])0x112ac7;
                  if (param_1[0x39] != 0) {
                    local_208 = (undefined  [8])&DAT_00112f33;
                  }
                  uStack_200 = (undefined *)0x1;
                  local_1f0 = (undefined  [8])&local_1a0;
                  local_1e8 = 
                  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                  ;
                  local_1e0 = (undefined ***)local_208;
                  local_1d8 = 
                  _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hadc6a92ef31a9059E;
                  local_248 = (undefined8 **)&DAT_00262b70;
                  pcStack_240 = (code *)0x2;
                  local_228 = (undefined *)0x0;
                  local_238 = (undefined ***)local_1f0;
                  local_230 = (undefined *)0x2;
                    /* try { // try from 0018182b to 00181877 has its CatchHandler @ 00181bcc */
                  _ZN4core6option15Option_LT_T_GT_11map_or_else17h02fb2c4bf8d27115E
                            (&local_c0,&local_248);
                  bVar8 = 1;
                  pppuVar20 = (undefined8 ***)local_b0;
                  uVar14 = local_b8;
                  puVar24 = local_c0;
                  goto LAB_00181481;
                }
                if ((*param_1 & 1) == 0) {
                  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9b02c4bb569ef277E
                            (&local_248,"BLAKE2b (",9);
                  pppuVar20 = (undefined8 ***)local_238;
                  local_1e8 = pcStack_240;
                  local_1f0 = (undefined  [8])local_248;
                }
                else {
                  local_1c0._0_8_ = *(long *)(param_1 + 8) << 3;
                  local_208 = (undefined  [8])local_1c0;
                  uStack_200 = 
                  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0026ce08
                  ;
                  local_248 = (undefined8 **)&PTR_DAT_00262b20;
                  pcStack_240 = (code *)0x2;
                  local_228 = (undefined *)0x0;
                  local_238 = (undefined ***)local_208;
                  local_230 = (undefined *)0x1;
                    /* try { // try from 001815c6 to 001815d4 has its CatchHandler @ 00181bcc */
                  _ZN4core6option15Option_LT_T_GT_11map_or_else17h02fb2c4bf8d27115E
                            (local_1f0,&local_248);
                  pppuVar20 = (undefined8 ***)local_1e0;
                }
                auVar5._8_8_ = local_1e8;
                auVar5._0_8_ = local_1f0;
                local_1f0 = (undefined  [8])&local_1a0;
                local_1e8 = 
                _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
                ;
                local_248 = (undefined8 **)&PTR_DAT_00262b40;
                pcStack_240 = (code *)0x1;
                local_228 = (undefined *)0x0;
                local_238 = (undefined ***)local_1f0;
                local_230 = (undefined *)0x1;
                    /* try { // try from 001818d1 to 001818e2 has its CatchHandler @ 00181b04 */
                _ZN4core6option15Option_LT_T_GT_11map_or_else17h02fb2c4bf8d27115E
                          (&local_f0,&local_248);
                bVar8 = 1;
                uStack_200 = local_e8;
                local_208 = (undefined  [8])local_f0;
                local_1f8 = local_e0;
              }
            }
            else {
              uVar11 = _ZN4core3num21__LT_impl_u20_u16_GT_16from_ascii_radix17h81be443e3f8b1a62E
                                 (local_198,local_190);
                    /* try { // try from 001810c8 to 00181463 has its CatchHandler @ 00181bcc */
              local_24a = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8faa357aa9b57c0dE
                                    (uVar11,&PTR_DAT_00262dc8);
              uVar19 = *(ulong *)(param_1 + 0x30);
              if (uVar19 == 0) {
                local_178 = &PTR_DAT_00262de0;
LAB_00181af4:
                    /* try { // try from 00181af4 to 00181b01 has its CatchHandler @ 00181bb5 */
                (*(code *)
                  PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_0026cf60
                )(local_178);
                    /* WARNING: Does not return */
                pcVar22 = (code *)invalidInstructionException();
                (*pcVar22)();
              }
              if (((ulong)local_170 | uVar19) >> 0x20 == 0) {
                uVar16 = ((ulong)local_170 & 0xffffffff) / (uVar19 & 0xffffffff);
                uVar19 = ((ulong)local_170 & 0xffffffff) % (uVar19 & 0xffffffff);
              }
              else {
                uVar16 = (ulong)local_170 / uVar19;
                uVar19 = (ulong)local_170 % uVar19;
              }
              local_1e0 = (undefined ***)&local_248;
              local_1c0._0_8_ = (uVar16 + 1) - (ulong)(uVar19 == 0);
              local_208 = (undefined  [8])0x112ac7;
              if (bVar8 != 0) {
                local_208 = (undefined  [8])0x1;
              }
              bVar8 = bVar8 ^ 1;
              uStack_200 = (undefined *)(ulong)bVar8;
              local_248 = (undefined8 **)&local_24a;
              pcStack_240 = (code *)
                            PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_0026cf38
              ;
              local_238 = (undefined ***)local_1c0;
              local_230 = 
              PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0026ce08
              ;
              local_228 = local_208;
              local_220 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hadc6a92ef31a9059E;
              local_1f0 = (undefined  [8])&DAT_00262af0;
              local_1e8 = (code *)0x3;
              local_1d0 = (undefined *)0x0;
              local_1d8 = (code *)0x3;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17h02fb2c4bf8d27115E
                        (&local_138,local_1f0);
              pppuVar20 = (undefined8 ***)local_128;
              uVar14 = local_130;
              puVar24 = local_138;
LAB_00181481:
              auVar5._8_8_ = uVar14;
              auVar5._0_8_ = puVar24;
              uStack_200 = &DAT_00000001;
              local_208 = (undefined  [8])(undefined8 **)0x0;
              local_1f8 = (undefined ***)(undefined8 ***)0x0;
            }
            local_1f0 = (undefined  [8])local_1c0;
            local_1e8 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_248 = (undefined8 **)&DAT_00111620;
            pcStack_240 = (code *)0x1;
            local_228 = (undefined *)0x0;
            local_230 = (undefined *)0x1;
                    /* try { // try from 001814f6 to 0018152e has its CatchHandler @ 00181beb */
            local_238 = (undefined ***)local_1f0;
            local_1b0 = (undefined ***)pppuVar20;
            local_1c0 = auVar5;
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0026cf00)(&local_248);
            if (bVar8 != 0) {
              local_248 = (undefined8 **)
                          (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0026cf40)();
              uVar13 = (*(code *)
                         PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hda8b04bbc47966cdE_0026cf48
                       )(&local_248,uVar23,uVar13);
              _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h64b7c03b50095bd4E
                        (uVar13);
            }
            local_1f0 = (undefined  [8])local_208;
            local_1e8 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_1e0 = local_150;
            local_1d8 = (code *)
                        PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_0026cef8
            ;
            local_248 = (undefined8 **)&DAT_00112b38;
            pcStack_240 = (code *)0x2;
            local_228 = (undefined *)0x0;
            local_230 = (undefined *)0x2;
            local_238 = (undefined ***)local_1f0;
                    /* try { // try from 00180bd7 to 00180bdf has its CatchHandler @ 00181beb */
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0026cf00)(&local_248);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4b980c8c114e5aceE
                      (local_208,uStack_200);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4b980c8c114e5aceE
                      (local_1c0._0_8_,local_1c0._8_8_);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4b980c8c114e5aceE
                      (local_1a0,local_198);
            param_1 = local_180;
            pcVar22 = (code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_0026cef0;
          }
          else {
            local_208 = (undefined  [8])local_1f0;
            uStack_200 = 
            PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0026cf30
            ;
            local_248 = (undefined8 **)&DAT_00262ad0;
            pcStack_240 = (code *)0x2;
            local_228 = (undefined *)0x0;
            local_238 = (undefined ***)local_208;
            local_230 = (undefined *)0x1;
            _local_1f0 = auVar25;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h02fb2c4bf8d27115E(local_88,&local_248);
            local_230 = (undefined *)CONCAT44(local_230._4_4_,1);
            local_238 = (undefined ***)local_78;
            ppuVar15 = (undefined8 **)
                       _ZN5alloc5boxed12Box_LT_T_GT_3new17hcaa67f2931b5f70dE(&local_248);
            local_1c0._8_8_ =
                 &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h6075d86f64d9bc9bE_002629e8
            ;
            local_1c0._0_8_ = ppuVar15;
            uVar11 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                               (ppuVar15);
                    /* try { // try from 00180e9d to 00180f22 has its CatchHandler @ 00181bd1 */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0026cf18)(uVar11)
            ;
            _local_208 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0026cf20)();
            local_1f0 = (undefined  [8])local_208;
            local_1e8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hadc6a92ef31a9059E;
            local_1e0 = (undefined ***)local_1c0;
            local_1d8 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hafd8bcb1828bb3dcE
            ;
            local_248 = (undefined8 **)&DAT_00262aa0;
            pcStack_240 = (code *)0x3;
            local_228 = (undefined *)0x0;
            local_238 = (undefined ***)local_1f0;
            local_230 = (undefined *)0x2;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0026cf28)(&local_248);
                    /* try { // try from 00180f33 to 00180f67 has its CatchHandler @ 00181c29 */
            _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hed70c0ec5ef0fd6fE
                      (local_1c0._0_8_,local_1c0._8_8_);
          }
                    /* try { // try from 00180c30 to 00180d13 has its CatchHandler @ 00181c43 */
          _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h9ab3152754514e37E
                    (local_70);
        }
        pbVar21 = local_70;
        auVar25 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h41a86bffa5c54210E
                            (local_a8);
      } while (auVar25._0_8_ != 0);
    }
                    /* try { // try from 00181903 to 0018190f has its CatchHandler @ 00181bab */
    _ZN4core3ptr87drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_std__ffi__os_str__OsStr_GT__GT_17h51ccac9fcb54742fE
              (local_a8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = pbVar21;
    auVar25 = auVar4 << 0x40;
  }
LAB_00181937:
  _ZN4core3ptr38drop_in_place_LT_uu_cksum__Options_GT_17hb9d3c08ed2eee8cbE
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return auVar25;
}