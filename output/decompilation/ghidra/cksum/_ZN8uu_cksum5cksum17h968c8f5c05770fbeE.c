/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined  [16] _ZN8uu_cksum5cksum17h968c8f5c05770fbeE(long *param_1)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 ***pppuVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  ushort uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  ulong uVar14;
  long lVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined8 uVar18;
  char *unaff_R13;
  code *pcVar19;
  undefined auVar20 [16];
  undefined local_308 [8];
  undefined8 uStack_300;
  undefined8 ***local_2f8;
  code *local_2f0;
  undefined *local_2e8;
  code *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined local_2c8 [16];
  undefined8 ***local_2b8;
  undefined local_2a8 [8];
  undefined8 uStack_2a0;
  undefined8 ***local_298;
  undefined8 local_290;
  undefined8 ***local_288;
  undefined8 local_280;
  undefined2 local_26a;
  undefined8 **local_268;
  code *pcStack_260;
  undefined8 ***local_258;
  undefined ***local_248;
  code *pcStack_240;
  undefined8 ***local_238;
  undefined *local_230;
  undefined *local_228;
  code *local_220;
  undefined local_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined local_1a8;
  undefined8 **local_1a0;
  code *pcStack_198;
  undefined8 ***local_190;
  undefined8 **local_188;
  undefined **local_180;
  undefined8 ***local_178;
  long *local_170;
  code *local_168;
  undefined local_160 [16];
  ulong local_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined8 ***local_138;
  undefined8 **local_130;
  undefined8 local_128;
  undefined8 ***local_120;
  undefined local_118 [32];
  undefined local_f8 [16];
  undefined8 local_e8;
  undefined8 **local_e0;
  undefined8 uStack_d8;
  undefined8 ***local_d0;
  undefined8 **local_c8;
  undefined8 uStack_c0;
  undefined8 ***local_b8;
  undefined8 **local_b0;
  undefined8 uStack_a8;
  undefined8 ***local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 ***local_88;
  undefined8 **local_80;
  undefined8 uStack_78;
  undefined8 ***local_70;
  undefined local_68 [56];
  
                    /* try { // try from 0027f0f4 to 0027f105 has its CatchHandler @ 002803e5 */
  _ZN4core4iter6traits8iterator8Iterator7collect17hd51e304b73a29e2dE(local_160);
  if ((*(char *)((long)param_1 + 0x3a) == '\x01') && (1 < local_150)) {
                    /* try { // try from 0027f118 to 0027f11e has its CatchHandler @ 002803d0 */
    uVar11 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf9354996cb72aa80E(0);
                    /* try { // try from 0027f11f to 0027f12e has its CatchHandler @ 002803e5 */
    _ZN4core3ptr71drop_in_place_LT_alloc__vec__Vec_LT__RF_std__ffi__os_str__OsStr_GT__GT_17h6eb853ba25e83800E
              (local_160);
    auVar20._8_8_ = &DAT_004525e8;
    auVar20._0_8_ = uVar11;
  }
  else {
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h1fb92bba1baf3ed0E
              (local_118,local_160);
    auVar20 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h64ffba3b6722510bE
                        (local_118);
    if (auVar20._0_8_ != 0) {
      local_170 = param_1 + 4;
      local_178 = (undefined8 ***)((long)param_1 + 0x3b);
      local_180 = &PTR_DAT_004527f0;
      pcVar19 = (code *)PTR__ZN3std4path4Path10components17h4f3217acf0fc8653E_00496100;
      do {
        uVar18 = auVar20._8_8_;
                    /* try { // try from 0027f1cc to 0027f28a has its CatchHandler @ 0028046e */
        uVar11 = auVar20._0_8_;
        (*pcVar19)(local_308,uVar11,uVar18);
        (*pcVar19)(&local_248,"-: \n",1);
        bVar5 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17h5cac1ec2999e76daE
                          (local_308,&local_248);
        if (bVar5 == 0) {
          cVar6 = (*(code *)PTR__ZN3std4path4Path6is_dir17h9ac0db933706da51E_00496110)
                            (uVar11,uVar18);
          if (cVar6 != '\0') {
            _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h4959fc360751633bE
                      (&local_248,0x2000);
            uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hd4bad29e7eee4d0fE(&local_248);
            ppuVar16 = &
                       PTR__ZN4core3ptr88drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__util__Empty_GT__GT_17h4ce2bb6f9a456662E_004526b0
            ;
            goto LAB_0027f350;
          }
          _ZN3std2fs4File4open17h7ee72332435a5b84E(local_2c8,uVar11,uVar18);
          if (local_2c8._0_4_ == 0) {
            uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf9ffa0e11f6228ffE(local_2c8._4_4_);
            ppuVar16 = &
                       PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hac8a0d344753320aE_00452658
            ;
            goto LAB_0027f350;
          }
          local_268 = (undefined8 **)
                      _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h4e5d434c1aa53f46E
                                (local_2c8._8_8_,uVar11,uVar18);
                    /* try { // try from 0027f293 to 0027f325 has its CatchHandler @ 002803f4 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00496118)(1);
          auVar20 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00496120)();
          local_308 = (undefined  [8])local_2a8;
          uStack_300 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb73bee75b677639eE;
          local_2f8 = &local_268;
          local_2f0 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hecc426ab1f5da2ebE
          ;
          local_248 = (undefined ***)&DAT_004524d8;
          pcStack_240 = (code *)0x3;
          local_228 = (undefined *)0x0;
          local_230 = (undefined *)0x2;
          local_238 = (undefined8 ***)local_308;
          _local_2a8 = auVar20;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00496128)(&local_248);
                    /* try { // try from 0027f32e to 0027f364 has its CatchHandler @ 0028046e */
          _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h15e3a96f6f9dbf4fE
                    (local_268);
        }
        else {
          uVar12 = (*(code *)PTR__ZN3std2io5stdio5stdin17h7215cc131abb55d8E_00496108)();
          uVar12 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8a8cfe4d0220fa65E(uVar12);
          ppuVar16 = (undefined **)&DAT_00452708;
LAB_0027f350:
          _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hc4db813bde19958aE
                    (local_68,0x2000,uVar12,ppuVar16);
                    /* try { // try from 0027f365 to 0027f420 has its CatchHandler @ 0028045c */
          cVar6 = (*(code *)PTR__ZN3std4path4Path6is_dir17h9ac0db933706da51E_00496110)
                            (uVar11,uVar18);
          if (cVar6 == '\0') {
                    /* try { // try from 0027f4f9 to 0027f527 has its CatchHandler @ 0028045c */
            _ZN6uucore8features8checksum13digest_reader17hb3e7cc01e934b03fE
                      (&local_248,local_170,local_68,0,param_1[6]);
            _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h6371967b4e91eb46E
                      (local_308,&local_248);
            pcVar19 = local_2f0;
            pppuVar4 = local_2f8;
            auVar20._8_8_ = local_2f8;
            auVar20._0_8_ = uStack_300;
            if (local_308 == (undefined  [8])0x8000000000000000) {
LAB_00280132:
                    /* try { // try from 00280132 to 0028013e has its CatchHandler @ 0028038b */
              _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h35ed789f6648ed59E
                        (local_68);
                    /* try { // try from 0028013f to 0028014b has its CatchHandler @ 002803c8 */
              _ZN4core3ptr87drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_std__ffi__os_str__OsStr_GT__GT_17hbb2f4177c99bb2cbE
                        (local_118);
              goto LAB_0028014c;
            }
            local_1a0 = (undefined8 **)local_308;
            pcStack_198 = uStack_300;
            local_190 = local_2f8;
            local_168 = local_2f0;
            if (*(char *)((long)param_1 + 0x3a) == '\0') {
              local_258 = local_2f8;
              local_268 = (undefined8 **)local_308;
              pcStack_260 = uStack_300;
            }
            else {
              if (*(char *)((long)param_1 + 0x3a) != '\x02') {
                    /* try { // try from 00280181 to 00280257 has its CatchHandler @ 002803b4 */
                cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3c86d19f285204edE
                                  (param_1[2],param_1[3],"crc",3);
                if (cVar6 == '\0') {
                  cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3c86d19f285204edE
                                    (param_1[2],param_1[3],"sysv",4);
                  if (cVar6 != '\0') {
LAB_00280214:
                    uVar9 = (*(code *)
                              PTR__ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_u16_GT_8from_str17haf22888ecbeba9aaE_00496138
                            )(pcStack_198,local_190);
                    uVar8 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h2fb53f7747cb9e4eE
                                      (uVar9,&PTR_DAT_00452778);
                    local_308._0_2_ = uVar8 << 8 | uVar8 >> 8;
                    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h30fbc9471dcc217cE
                              (&local_248,local_308,2);
                    goto LAB_00280258;
                  }
                  cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3c86d19f285204edE
                                    (param_1[2],param_1[3],"bsd",3);
                  if (cVar6 != '\0') goto LAB_00280214;
                  local_238 = local_190;
                  local_248 = (undefined ***)local_1a0;
                  pcStack_240 = pcStack_198;
                    /* try { // try from 002802e6 to 00280313 has its CatchHandler @ 002803b4 */
                  _ZN58__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_hex__FromHex_GT_8from_hex17h6fda53b93a1b4a9bE
                            (local_308,&local_248);
                  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h72eff9fffdfc2e9eE
                            (&local_248,local_308,&PTR_DAT_00452760);
                  bVar1 = true;
                }
                else {
                  uVar11 = (*(code *)
                             PTR__ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_u32_GT_8from_str17hecf13f2b24d2aba7E_00496178
                           )(pcStack_198,local_190);
                  uVar10 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hf3b40991d8ebbd58E(uVar11);
                  local_308._0_4_ =
                       uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                       uVar10 << 0x18;
                  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h30fbc9471dcc217cE
                            (&local_248,local_308,4);
LAB_00280258:
                  bVar1 = false;
                }
                    /* try { // try from 0028025d to 00280290 has its CatchHandler @ 00280379 */
                local_308 = (undefined  [8])
                            (*(code *)PTR__ZN3std2io5stdio6stdout17h077da66234850927E_00496158)();
                lVar15 = (*(code *)
                           PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17he47e3670e90f933eE_00496160
                         )(local_308,pcStack_240,local_238);
                if (lVar15 == 0) {
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = pppuVar4;
                  auVar20 = auVar2 << 0x40;
                }
                else {
                  auVar20 = (*(code *)
                              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE_00496180
                            )(lVar15);
                }
                    /* try { // try from 0028029b to 002802a7 has its CatchHandler @ 002803b4 */
                _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h33f821fc08e83651E
                          (&local_248);
                if (!bVar1) {
                    /* try { // try from 002802b1 to 002802bd has its CatchHandler @ 0028033e */
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h23113bc82093f2bcE
                            (&local_1a0);
                }
                goto LAB_00280132;
              }
                    /* try { // try from 0027f5a5 to 0027f5f9 has its CatchHandler @ 00280406 */
              cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3c86d19f285204edE
                                (param_1[2],param_1[3],"crc",3);
              if (cVar6 == '\0') {
                cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3c86d19f285204edE
                                  (param_1[2],param_1[3],"sysv",4);
                if (cVar6 == '\0') {
                  cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3c86d19f285204edE
                                    (param_1[2],param_1[3],"bsd",3);
                  if (cVar6 == '\0') {
                    local_298 = DAT_004527b8;
                    local_2a8 = (undefined  [8])_DAT_004527a8;
                    uStack_2a0 = (code *)_UNK_004527b0;
                    local_238 = local_190;
                    local_248 = (undefined ***)local_1a0;
                    pcStack_240 = pcStack_198;
                    /* try { // try from 0027fdba to 0027fde0 has its CatchHandler @ 002803b6 */
                    _ZN58__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_hex__FromHex_GT_8from_hex17h6fda53b93a1b4a9bE
                              (local_308,&local_248);
                    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h72eff9fffdfc2e9eE
                              (&local_248,local_308,&PTR_DAT_004527c0);
                    /* try { // try from 0027fdf1 to 0027fe03 has its CatchHandler @ 002803a2 */
                    (*(code *)PTR__ZN13data_encoding8Encoding6encode17h8eff78e31b7db764E_00496170)
                              (&local_268,local_2a8,pcStack_240,local_238);
                    /* try { // try from 0027fe04 to 0027fe10 has its CatchHandler @ 002803b6 */
                    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h33f821fc08e83651E
                              (&local_248);
                    /* try { // try from 0027fe14 to 0027fe1d has its CatchHandler @ 00280406 */
                    _ZN4core3ptr44drop_in_place_LT_data_encoding__Encoding_GT_17ha055e00dd9a05262E
                              (local_2a8);
                    goto LAB_0027f666;
                  }
                }
              }
              local_258 = local_190;
              local_268 = local_1a0;
              pcStack_260 = pcStack_198;
            }
LAB_0027f666:
                    /* try { // try from 0027f673 to 0027fbe6 has its CatchHandler @ 0028044a */
            cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3c86d19f285204edE
                              (param_1[2],param_1[3],"sysv",4);
            if (cVar6 == '\0') {
              cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3c86d19f285204edE
                                (param_1[2],param_1[3],"bsd",3);
              if (cVar6 != '\0') {
                uVar9 = (*(code *)
                          PTR__ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_u16_GT_8from_str17haf22888ecbeba9aaE_00496138
                        )(pcStack_260,local_258);
                local_26a = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h2fb53f7747cb9e4eE
                                      (uVar9,&PTR_DAT_004527d8);
                uVar17 = param_1[6];
                if (uVar17 == 0) goto LAB_0028032e;
                if (((ulong)pcVar19 | uVar17) >> 0x20 == 0) {
                  uVar14 = ((ulong)pcVar19 & 0xffffffff) / (uVar17 & 0xffffffff);
                  uVar17 = ((ulong)pcVar19 & 0xffffffff) % (uVar17 & 0xffffffff);
                }
                else {
                  uVar14 = (ulong)pcVar19 / uVar17;
                  uVar17 = (ulong)pcVar19 % uVar17;
                }
                local_188 = (undefined8 **)((uVar14 + 1) - (ulong)(uVar17 == 0));
                local_2c8._0_8_ = "  (";
                if (bVar5 != 0) {
                  local_2c8._0_8_ = (undefined ***)0x1;
                }
                local_2c8._8_8_ = ZEXT18(bVar5 ^ 1);
                local_308 = (undefined  [8])&local_26a;
                uStack_300 = (code *)
                             PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17hc16e9a303f8fca40E_00496148
                ;
                local_2f8 = &local_188;
                local_2f0 = (code *)
                            PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE_00496140
                ;
                local_2e8 = local_2c8;
                local_2e0 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb73bee75b677639eE;
                local_2d8 = 5;
                local_2d0 = 0;
                local_248 = (undefined ***)0x2;
                local_238 = (undefined8 ***)0x1;
                local_230 = (undefined *)0x3;
                local_228 = (undefined *)0x0;
                local_220 = (code *)0x800000020;
                local_218 = 3;
                local_210 = 2;
                local_200 = 1;
                local_1f8 = 3;
                local_1f0 = 1;
                local_1e8 = 0x20;
                local_1e0 = 3;
                local_1d8 = 2;
                local_1c8 = 2;
                local_1b8 = 2;
                local_1b0 = 0x20;
                local_1a8 = 3;
                local_2a8 = (undefined  [8])&DAT_00452528;
                uStack_2a0 = (code *)0x3;
                local_288 = &local_248;
                local_280 = 3;
                local_290 = 4;
                local_298 = (undefined8 ***)local_308;
                _ZN4core6option15Option_LT_T_GT_11map_or_else17hc5f016e47121d65fE
                          (&local_c8,local_2a8);
                local_248 = (undefined ***)local_c8;
                pcStack_240 = (code *)uStack_c0;
                local_238 = local_b8;
                goto LAB_0027fbff;
              }
              cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3c86d19f285204edE
                                (param_1[2],param_1[3],"crc",3);
              if (cVar6 != '\0') {
                local_2a8 = (undefined  [8])0x155670;
                if (bVar5 != 0) {
                  local_2a8 = (undefined  [8])0x1;
                }
                uStack_2a0 = (code *)(ulong)(bVar5 ^ 1);
                local_248 = (undefined ***)&local_268;
                pcStack_240 = 
                _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
                ;
                local_238 = (undefined8 ***)&local_168;
                local_230 = 
                PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE_00496140
                ;
                local_228 = local_2a8;
                local_220 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb73bee75b677639eE;
                local_308 = (undefined  [8])&DAT_00452528;
                uStack_300 = (code *)0x3;
                local_2e8 = (undefined *)0x0;
                local_2f8 = &local_248;
                local_2f0 = (code *)0x3;
                _ZN4core6option15Option_LT_T_GT_11map_or_else17hc5f016e47121d65fE
                          (&local_b0,local_308);
                local_248 = (undefined ***)local_b0;
                pcStack_240 = (code *)uStack_a8;
                local_238 = local_a0;
                goto LAB_0027fbff;
              }
              bVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3c86d19f285204edE
                                (param_1[2],param_1[3],"blake2b",7);
              if ((bVar5 & *(char *)(param_1 + 7) != '\0') == 0) {
                if (*(char *)(param_1 + 7) != '\0') {
                    /* try { // try from 0027fe38 to 0027fe3f has its CatchHandler @ 0028044a */
                  _ZN5alloc3str21__LT_impl_u20_str_GT_18to_ascii_uppercase17h60b631a23b970e6aE
                            (local_308,param_1[2],param_1[3]);
                  local_2c8._8_8_ =
                       _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
                  ;
                  local_248 = (undefined ***)&DAT_00452588;
                  pcStack_240 = (code *)0x2;
                  local_228 = (undefined *)0x0;
                  local_238 = (undefined8 ***)local_2c8;
                  local_230 = (undefined *)0x1;
                    /* try { // try from 0027fe91 to 0027fea2 has its CatchHandler @ 00280367 */
                  local_2c8._0_8_ = local_308;
                  _ZN4core6option15Option_LT_T_GT_11map_or_else17hc5f016e47121d65fE
                            (local_2a8,&local_248);
                    /* try { // try from 0027fea3 to 0027feaa has its CatchHandler @ 00280355 */
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h23113bc82093f2bcE
                            (local_308);
                  _local_308 = _local_2a8;
                  local_2f8 = local_298;
                  local_2a8 = (undefined  [8])&local_268;
                  uStack_2a0 = 
                  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
                  ;
                  local_248 = (undefined ***)&PTR_s_____00452578;
                  pcStack_240 = (code *)0x1;
                  local_228 = (undefined *)0x0;
                  local_238 = (undefined8 ***)local_2a8;
                  local_230 = (undefined *)0x1;
                    /* try { // try from 0027ff1b to 0027ff2f has its CatchHandler @ 00280343 */
                  _ZN4core6option15Option_LT_T_GT_11map_or_else17hc5f016e47121d65fE
                            (&local_130,&local_248);
                  uStack_2a0 = (code *)local_128;
                  local_2a8 = (undefined  [8])local_130;
                  local_298 = local_120;
                  goto LAB_0028003a;
                }
                local_2a8 = (undefined  [8])0x155eb3;
                if (*(char *)((long)param_1 + 0x39) == '\0') {
                  local_2a8 = (undefined  [8])0x155670;
                }
                uStack_2a0 = (code *)0x1;
                local_308 = (undefined  [8])&local_268;
                uStack_300 = 
                _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
                ;
                local_2f8 = (undefined8 ***)local_2a8;
                local_2f0 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb73bee75b677639eE;
                local_248 = (undefined ***)&DAT_004525a8;
                pcStack_240 = (code *)0x2;
                local_228 = (undefined *)0x0;
                local_230 = (undefined *)0x2;
                    /* try { // try from 002800d5 to 002800e9 has its CatchHandler @ 0028044a */
                local_238 = (undefined8 ***)local_308;
                _ZN4core6option15Option_LT_T_GT_11map_or_else17hc5f016e47121d65fE
                          (&local_80,&local_248);
                local_248 = (undefined ***)local_80;
                pcStack_240 = (code *)uStack_78;
                local_238 = local_70;
                bVar5 = 1;
                goto LAB_0027fc0c;
              }
              if (*param_1 == 0) {
                    /* try { // try from 0027ff67 to 0027ff7f has its CatchHandler @ 0028044a */
                _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h30fbc9471dcc217cE
                          (&local_248,"BLAKE2b (",9);
                local_2f8 = local_238;
                local_308 = (undefined  [8])local_248;
                uStack_300 = pcStack_240;
              }
              else {
                local_2a8 = (undefined  [8])(param_1[1] << 3);
                local_308 = (undefined  [8])local_2a8;
                uStack_300 = (code *)
                             PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE_00496140
                ;
                local_248 = (undefined ***)&PTR_DAT_00452558;
                pcStack_240 = (code *)0x2;
                local_228 = (undefined *)0x0;
                local_230 = (undefined *)0x1;
                local_238 = (undefined8 ***)local_308;
                _ZN4core6option15Option_LT_T_GT_11map_or_else17hc5f016e47121d65fE
                          (&local_98,&local_248);
                local_308._4_4_ = uStack_94;
                local_308._0_4_ = local_98;
                uStack_300 = (code *)CONCAT44(uStack_8c,uStack_90);
                local_2f8 = local_88;
              }
              local_2a8 = (undefined  [8])&local_268;
              uStack_2a0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
              ;
              local_248 = (undefined ***)&PTR_s_____00452578;
              pcStack_240 = (code *)0x1;
              local_228 = (undefined *)0x0;
              local_238 = (undefined8 ***)local_2a8;
              local_230 = (undefined *)0x1;
                    /* try { // try from 0027fff3 to 00280007 has its CatchHandler @ 00280390 */
              _ZN4core6option15Option_LT_T_GT_11map_or_else17hc5f016e47121d65fE
                        (&local_148,&local_248);
              uStack_2a0 = (code *)local_140;
              local_2a8 = (undefined  [8])local_148;
              local_298 = local_138;
LAB_0028003a:
              bVar5 = 1;
              local_238 = local_2f8;
              local_2c8 = _local_308;
            }
            else {
              uVar9 = (*(code *)
                        PTR__ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_u16_GT_8from_str17haf22888ecbeba9aaE_00496138
                      )(pcStack_260,local_258);
              uVar7 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h2fb53f7747cb9e4eE
                                (uVar9,&PTR_DAT_00452808);
              local_188 = (undefined8 **)CONCAT62(local_188._2_6_,uVar7);
              uVar17 = param_1[6];
              if (uVar17 == 0) {
                local_180 = &PTR_DAT_00452820;
LAB_0028032e:
                    /* try { // try from 0028032e to 0028033b has its CatchHandler @ 002803ed */
                (*(code *)
                  PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17haded503194f0bf6eE_00496188
                )(local_180);
                    /* WARNING: Does not return */
                pcVar19 = (code *)invalidInstructionException();
                (*pcVar19)();
              }
              if (((ulong)pcVar19 | uVar17) >> 0x20 == 0) {
                uVar14 = ((ulong)pcVar19 & 0xffffffff) / (uVar17 & 0xffffffff);
                uVar17 = ((ulong)pcVar19 & 0xffffffff) % (uVar17 & 0xffffffff);
              }
              else {
                uVar14 = (ulong)pcVar19 / uVar17;
                uVar17 = (ulong)pcVar19 % uVar17;
              }
              local_2c8._0_8_ = (uVar14 + 1) - (ulong)(uVar17 == 0);
              local_2a8 = (undefined  [8])0x155670;
              if (bVar5 != 0) {
                local_2a8 = (undefined  [8])0x1;
              }
              uStack_2a0 = (code *)(ulong)(bVar5 ^ 1);
              local_248 = (undefined ***)&local_188;
              pcStack_240 = (code *)
                            PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17hc16e9a303f8fca40E_00496148
              ;
              local_238 = (undefined8 ***)local_2c8;
              local_230 = 
              PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE_00496140
              ;
              local_228 = local_2a8;
              local_220 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb73bee75b677639eE;
              local_308 = (undefined  [8])&DAT_00452528;
              uStack_300 = (code *)0x3;
              local_2e8 = (undefined *)0x0;
              local_2f8 = &local_248;
              local_2f0 = (code *)0x3;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17hc5f016e47121d65fE(&local_e0,local_308)
              ;
              local_248 = (undefined ***)local_e0;
              pcStack_240 = (code *)uStack_d8;
              local_238 = local_d0;
LAB_0027fbff:
              bVar5 = bVar5 ^ 1;
LAB_0027fc0c:
              local_2c8._8_8_ = pcStack_240;
              local_2c8._0_8_ = local_248;
              uStack_2a0 = (code *)0x1;
              local_2a8 = (undefined  [8])0x0;
              local_298 = (undefined ****)0x0;
            }
            local_2b8 = local_238;
            local_308 = (undefined  [8])local_2c8;
            uStack_300 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_248 = (undefined ***)&DAT_00154f40;
            pcStack_240 = (code *)0x1;
            local_228 = (undefined *)0x0;
            local_230 = (undefined *)0x1;
                    /* try { // try from 0027fc8d to 0027fd41 has its CatchHandler @ 00280431 */
            local_238 = (undefined8 ***)local_308;
            (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_00496150)(&local_248);
            if (bVar5 != 0) {
              local_248 = (undefined ***)
                          (*(code *)PTR__ZN3std2io5stdio6stdout17h077da66234850927E_00496158)();
              uVar11 = (*(code *)
                         PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17he47e3670e90f933eE_00496160
                       )(&local_248,uVar11,uVar18);
              _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h62fbe6402467233aE
                        (uVar11);
            }
            local_308 = (undefined  [8])local_2a8;
            uStack_300 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_2f8 = local_178;
            local_2f0 = (code *)
                        PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17h6643b2132dca5a5bE_00496168
            ;
            local_248 = (undefined ***)&DAT_00155720;
            pcStack_240 = (code *)0x2;
            local_228 = (undefined *)0x0;
            local_230 = (undefined *)0x2;
            local_238 = (undefined8 ***)local_308;
            (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_00496150)(&local_248);
                    /* try { // try from 0027fd42 to 0027fd4b has its CatchHandler @ 002803ef */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h23113bc82093f2bcE(local_2a8);
                    /* try { // try from 0027fd4c to 0027fd55 has its CatchHandler @ 0028044a */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h23113bc82093f2bcE(local_2c8);
                    /* try { // try from 0027fd59 to 0027fd65 has its CatchHandler @ 00280406 */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h23113bc82093f2bcE(&local_268)
            ;
                    /* try { // try from 0027fd66 to 0027fd72 has its CatchHandler @ 0028046e */
            _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h35ed789f6648ed59E
                      (local_68);
            pcVar19 = (code *)PTR__ZN3std4path4Path10components17h4f3217acf0fc8653E_00496100;
          }
          else {
            uStack_2a0 = (code *)
                         PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E_00496130
            ;
            local_248 = (undefined ***)&DAT_00452508;
            pcStack_240 = (code *)0x2;
            local_228 = (undefined *)0x0;
            local_238 = (undefined8 ***)local_2a8;
            local_230 = (undefined *)0x1;
            local_2a8 = (undefined  [8])local_308;
            _local_308 = auVar20;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17hc5f016e47121d65fE(local_f8,&local_248);
            local_230 = (undefined *)CONCAT44(local_230._4_4_,1);
            local_238 = (undefined8 ***)local_e8;
            pppuVar13 = (undefined ***)
                        _ZN5alloc5boxed12Box_LT_T_GT_3new17h7e187ac5f822efadE(&local_248);
            local_2c8._8_8_ =
                 &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h5c1858a7a0943e3eE_00452870
            ;
            local_2c8._0_8_ = pppuVar13;
            uVar9 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17h1158ea86a5f2627dE
                              (pppuVar13);
                    /* try { // try from 0027f43a to 0027f4c6 has its CatchHandler @ 0028041d */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00496118)(uVar9);
            _local_2a8 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00496120)();
            local_308 = (undefined  [8])local_2a8;
            uStack_300 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb73bee75b677639eE;
            local_2f8 = (undefined8 ***)local_2c8;
            local_2f0 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h412ef4f961bd2408E
            ;
            local_248 = (undefined ***)&DAT_004524d8;
            pcStack_240 = (code *)0x3;
            local_228 = (undefined *)0x0;
            local_230 = (undefined *)0x2;
            local_238 = (undefined8 ***)local_308;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00496128)(&local_248);
                    /* try { // try from 0027f4d1 to 0027f4d5 has its CatchHandler @ 0028045c */
            _ZN4core3ptr118drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Sync_u2b_core__marker__Send_GT__GT_17h88065cc496e49ab5E
                      (local_2c8._0_8_,local_2c8._8_8_);
                    /* try { // try from 0027f4d6 to 0027f4e2 has its CatchHandler @ 0028046e */
            _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h35ed789f6648ed59E
                      (local_68);
          }
        }
        unaff_R13 = "-: \n";
        auVar20 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h64ffba3b6722510bE
                            (local_118);
      } while (auVar20._0_8_ != 0);
    }
                    /* try { // try from 00280117 to 00280128 has its CatchHandler @ 002803c8 */
    _ZN4core3ptr87drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_std__ffi__os_str__OsStr_GT__GT_17hbb2f4177c99bb2cbE
              (local_118);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_R13;
    auVar20 = auVar3 << 0x40;
  }
LAB_0028014c:
  _ZN4core3ptr38drop_in_place_LT_uu_cksum__Options_GT_17h97266c7ff74129edE(param_1[4],param_1[5]);
  return auVar20;
}