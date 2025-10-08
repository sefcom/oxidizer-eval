void _ZN4just10subcommand10Subcommand6format17heea1de6da7464e03E
               (char *param_1,long param_2,long param_3,long param_4)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  long local_2a8;
  undefined local_2a0;
  undefined local_29f;
  undefined local_29e;
  undefined local_29d;
  undefined local_29c;
  undefined local_29b;
  undefined local_29a;
  undefined local_299;
  undefined4 local_298;
  undefined4 local_294;
  long local_290;
  char *local_288;
  undefined8 local_280;
  undefined local_278;
  undefined4 uStack_277;
  undefined4 uStack_273;
  char cStack_26f;
  undefined6 uStack_26e;
  code *local_268;
  int *local_260;
  code *local_258;
  undefined *local_250;
  undefined *local_248;
  undefined local_240 [8];
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined local_218;
  undefined7 uStack_217;
  undefined uStack_210;
  undefined uStack_20f;
  undefined6 uStack_20e;
  undefined local_208;
  undefined7 uStack_207;
  undefined uStack_200;
  undefined7 uStack_1ff;
  undefined local_1f8;
  undefined7 uStack_1f7;
  undefined uStack_1f0;
  undefined7 uStack_1ef;
  undefined local_1e8;
  undefined7 uStack_1e7;
  undefined uStack_1e0;
  undefined7 uStack_1df;
  undefined local_1d8;
  undefined4 uStack_1d7;
  undefined4 uStack_1d3;
  undefined4 uStack_1cf;
  undefined4 uStack_1cb;
  undefined7 uStack_1c7;
  long local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  char *local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulong local_e0;
  int local_d8;
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
  ulong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_2a8 = param_4;
                    /* try { // try from 0038ddea to 0038de2f has its CatchHandler @ 0038e47c */
  auVar6 = _ZN4just11compilation11Compilation8root_src17hcd87e6a66a75a8d2E(param_4);
  uVar3 = _ZN4just11compilation11Compilation8root_ast17hde4a084de7e3435aE(local_2a8);
  if ((*(char *)(param_2 + 0x1a4) == '\0') && (*(char *)(local_2a8 + 0x1eb) == '\0')) {
    param_1[0] = '6';
    param_1[1] = '\0';
  }
  else {
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hdc955df6c1091189E
              (local_240,uVar3);
    local_288 = param_1;
    cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                      (local_238,local_230,auVar6._0_8_,auVar6._8_8_);
    if (cVar2 == '\0') {
      if (*(char *)(param_2 + 0x197) == '\0') {
                    /* try { // try from 0038e2a9 to 0038e3d9 has its CatchHandler @ 0038e47a */
        lVar5 = _ZN3std2fs5write17h00d17955715bd664E(param_3,local_240);
        pcVar1 = local_288;
        if (lVar5 != 0) {
          _ZN4just10subcommand10Subcommand6format28__u7b__u7b_closure_u7d__u7d_17h8517ab58bea0b597E
                    (&local_228,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),lVar5);
          uVar3 = CONCAT17((undefined)uStack_220,CONCAT43(uStack_224,local_228._1_3_));
          lVar5 = CONCAT17(local_218,CONCAT43(uStack_21c,uStack_220._1_3_));
          local_168 = uStack_1d7;
          uStack_164 = uStack_1d3;
          uStack_160 = uStack_1cf;
          local_1b8 = uVar3;
          uStack_1b0 = lVar5;
          if ((char)local_228 != '8') {
            *(ulong *)(pcVar1 + 0x60) = CONCAT71(uStack_1c7,uStack_1cb._3_1_);
            *(ulong *)(pcVar1 + 0x51) = CONCAT44(uStack_1d3,uStack_1d7);
            *(ulong *)(pcVar1 + 0x59) = CONCAT44(uStack_1cb,uStack_1cf);
            *(ulong *)(pcVar1 + 0x41) = CONCAT17(uStack_1e0,uStack_1e7);
            *(ulong *)(pcVar1 + 0x49) = CONCAT17(local_1d8,uStack_1df);
            local_1b8._0_4_ = (undefined4)CONCAT43(uStack_224,local_228._1_3_);
            local_1b8._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
            uStack_1b0._0_4_ = (undefined4)CONCAT43(uStack_21c,uStack_220._1_3_);
            uStack_1b0._4_4_ = (undefined4)((ulong)lVar5 >> 0x20);
            *(ulong *)(pcVar1 + 0x31) = CONCAT17(uStack_1f0,uStack_1f7);
            *(ulong *)(pcVar1 + 0x39) = CONCAT17(local_1e8,uStack_1ef);
            *(ulong *)(pcVar1 + 0x21) = CONCAT17(uStack_200,uStack_207);
            *(ulong *)(pcVar1 + 0x29) = CONCAT17(local_1f8,uStack_1ff);
            *(ulong *)(pcVar1 + 0x11) = CONCAT17(uStack_210,uStack_217);
            *(ulong *)(pcVar1 + 0x19) = CONCAT17(local_208,CONCAT61(uStack_20e,uStack_20f));
            *(undefined4 *)(pcVar1 + 1) = (undefined4)local_1b8;
            *(undefined4 *)(pcVar1 + 5) = local_1b8._4_4_;
            *(undefined4 *)(pcVar1 + 9) = (undefined4)uStack_1b0;
            *(undefined4 *)(pcVar1 + 0xd) = uStack_1b0._4_4_;
            *pcVar1 = (char)local_228;
            goto LAB_0038e28e;
          }
        }
        if (*(char *)(param_2 + 0x1a7) != '\0') {
          local_1b8 = *(undefined8 *)(param_3 + 8);
          uStack_1b0 = *(long *)(param_3 + 0x10);
          local_280 = &local_1b8;
          local_278 = SUB81(PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00566ad8
                            ,0);
          uStack_277 = (undefined4)
                       ((ulong)
                        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00566ad8
                       >> 8);
          uStack_273._0_3_ =
               (undefined3)
               ((ulong)
                PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00566ad8
               >> 0x28);
          local_228 = 0x531158;
          uStack_224 = 0;
          uStack_220 = 2;
          uStack_21c = 0;
          local_208 = 0;
          uStack_207 = 0;
          local_218 = SUB81(&local_280,0);
          uStack_217 = (undefined7)((ulong)&local_280 >> 8);
          uStack_210 = 1;
          uStack_20f = 0;
          uStack_20e = 0;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48)(&local_228);
        }
        *pcVar1 = '8';
      }
      else {
        if (*(char *)(param_2 + 0x1a7) != '\0') {
          local_228 = 2;
          uStack_224 = 0;
          uStack_210 = 1;
          uStack_20f = 2;
                    /* try { // try from 0038dea8 to 0038dec8 has its CatchHandler @ 0038e475 */
          local_290 = param_2;
          _ZN7similar4text14TextDiffConfig10diff_lines17hbe364afe4ea52021E
                    (&local_1b8,&local_228,auVar6._0_8_);
          if (local_1a8 != 0) {
            local_1c0 = uStack_1b0 + local_1a8 * 0x28;
            local_290 = local_290 + 0x184;
            lVar5 = uStack_1b0;
            do {
              lVar4 = lVar5 + 0x28;
              _ZN7similar4text17TextDiff_LT_T_GT_12iter_changes17h6c2aeb8528ab18a4E
                        (&local_98,&local_1b8,lVar5);
              uStack_1cb._3_1_ = (undefined)local_38;
              uStack_1c7 = (undefined7)((ulong)local_38 >> 8);
              local_1d8 = (undefined)local_48;
              uStack_1d7 = (undefined4)((ulong)local_48 >> 8);
              uStack_1d3._0_3_ = (undefined3)((ulong)local_48 >> 0x28);
              uStack_1d3._3_1_ = (undefined)uStack_40;
              uStack_1cf = (undefined4)((ulong)uStack_40 >> 8);
              uStack_1cb._0_3_ = (undefined3)((ulong)uStack_40 >> 0x28);
              local_1e8 = (undefined)local_58;
              uStack_1e7 = (undefined7)((ulong)local_58 >> 8);
              uStack_1e0 = (undefined)uStack_50;
              uStack_1df = (undefined7)((ulong)uStack_50 >> 8);
              local_1f8 = (undefined)local_68;
              uStack_1f7 = (undefined7)((ulong)local_68 >> 8);
              uStack_1f0 = (undefined)uStack_60;
              uStack_1ef = (undefined7)((ulong)uStack_60 >> 8);
              local_208 = (undefined)local_78;
              uStack_207 = (undefined7)((ulong)local_78 >> 8);
              uStack_200 = (undefined)uStack_70;
              uStack_1ff = (undefined7)((ulong)uStack_70 >> 8);
              local_218 = (undefined)local_88;
              uStack_217 = (undefined7)((ulong)local_88 >> 8);
              uStack_210 = (undefined)uStack_80;
              uStack_20f = (undefined)((ulong)uStack_80 >> 8);
              uStack_20e = (undefined6)((ulong)uStack_80 >> 0x10);
              local_228 = local_98;
              uStack_224 = uStack_94;
              uStack_220 = uStack_90;
              uStack_21c = uStack_8c;
                    /* try { // try from 0038dfc0 to 0038e280 has its CatchHandler @ 0038e481 */
              while (_ZN106__LT_similar__iter__ChangesIter_LT_Old_C_New_C_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0cc5ddc1a1cad602E
                               (&local_110,&local_228), local_110 != 2) {
                local_a8 = local_e0;
                local_b8 = local_f0;
                uStack_b4 = uStack_ec;
                uStack_b0 = uStack_e8;
                uStack_ac = uStack_e4;
                local_c8 = local_100;
                uStack_c4 = uStack_fc;
                uStack_c0 = uStack_f8;
                uStack_bc = uStack_f4;
                local_d8 = local_110;
                uStack_d4 = uStack_10c;
                uStack_d0 = uStack_108;
                uStack_cc = uStack_104;
                if ((local_e0 & 0xff) == 0) {
                  _ZN4just5color5Color6stdout17h99dee7c87aa8c485E(&local_280,local_290);
                  local_150 = &DAT_0016e4f0;
                  if (cStack_26f != '\x02') goto LAB_0038e147;
LAB_0038e180:
                  local_2b8 = 0;
                  local_2b0 = 10;
                  local_2a0 = 0;
                  local_2ac = 10;
                  local_29f = 0;
                  local_280._3_1_ = 0;
                  local_29d = 0;
                  local_29c = 0;
                  local_29b = 0;
                  local_29a = 0;
                  local_299 = 0;
                }
                else {
                  if (((uint)local_e0 & 0xff) == 1) {
                    _ZN4just5color5Color6stdout17h99dee7c87aa8c485E();
                    uStack_277 = 1;
                    local_150 = "-";
                  }
                  else {
                    _ZN4just5color5Color6stdout17h99dee7c87aa8c485E();
                    uStack_277 = 2;
                    local_150 = 
                    "+*src/parser.rs`Parser::next()` called after end of token stream`Parser::advance()` advanced past end of token streamPresumed next token would have kind Presumed next token would have lexeme \"\", but found \"Presumed next token would be Parse completed with \x18\x18\x0e\x18!\x18\x18!\x18\x1f\x18\x18\x10\x18\x18\x13\x18\x18\x14\x02\x05Module\x18\x0e\x15\x0e\x0fAliasAssignmentxError getting current directory: unicode decode errorsignal handlerwarning: I/O error reading from signal pipe: src/positional.rssrc/ran.rsRun recipe ``? y===> Running recipe `#### ] evaluated_lines was emptybad shebang line: # ]\n@ &&{{  }}src/recipe_resolver.rsPRELUDEsrc/search.rs.config"
                    ;
                  }
                  local_280._1_1_ = 0;
                  uStack_273 = 10;
                  local_280._2_1_ = 0;
                  local_280._3_1_ = 0;
                  local_280._4_1_ = 0;
                  local_280._5_1_ = 0;
                  local_280._6_1_ = 0;
                  local_280._7_1_ = 0;
                  local_278 = 0;
                  if (cStack_26f == '\x02') goto LAB_0038e180;
LAB_0038e147:
                  if ((cStack_26f == '\x01') && (((byte)local_280 & 1) == 0)) goto LAB_0038e180;
                  local_2b8 = CONCAT17(local_278,
                                       CONCAT16(local_280._7_1_,
                                                CONCAT15(local_280._6_1_,
                                                         CONCAT14(local_280._5_1_,
                                                                  CONCAT13(local_280._4_1_,
                                                                           CONCAT12(local_280._3_1_,
                                                                                    CONCAT11(
                                                  local_280._2_1_,local_280._1_1_)))))));
                  local_2b0 = uStack_277;
                  local_299 = local_278;
                  local_2a0 = local_280._1_1_;
                  local_29f = local_280._2_1_;
                  local_29d = local_280._4_1_;
                  local_29c = local_280._5_1_;
                  local_29b = local_280._6_1_;
                  local_29a = local_280._7_1_;
                  local_2ac = uStack_273;
                }
                local_148 = 1;
                local_278 = SUB81(PTR__ZN62__LT_ansi_term__ansi__Prefix_u20_as_u20_core__fmt__Display_GT_3fmt17h4f4d4a1a10975a1cE_00566498
                                  ,0);
                uStack_277 = (undefined4)
                             ((ulong)
                              PTR__ZN62__LT_ansi_term__ansi__Prefix_u20_as_u20_core__fmt__Display_GT_3fmt17h4f4d4a1a10975a1cE_00566498
                             >> 8);
                uStack_273._0_3_ =
                     (undefined3)
                     ((ulong)
                      PTR__ZN62__LT_ansi_term__ansi__Prefix_u20_as_u20_core__fmt__Display_GT_3fmt17h4f4d4a1a10975a1cE_00566498
                     >> 0x28);
                uStack_273._3_1_ = SUB81(&local_150,0);
                cStack_26f = (char)((ulong)&local_150 >> 8);
                uStack_26e = (undefined6)((ulong)&local_150 >> 0x10);
                local_268 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
                local_260 = &local_d8;
                local_258 = 
                _ZN7similar5types14text_additions84__LT_impl_u20_core__fmt__Display_u20_for_u20_similar__types__Change_LT__RF_T_GT__GT_3fmt17h16a5774e4f0c32ccE
                ;
                local_250 = &local_2a0;
                local_248 = 
                PTR__ZN62__LT_ansi_term__ansi__Suffix_u20_as_u20_core__fmt__Display_GT_3fmt17hcf6335302746b9aeE_00566af8
                ;
                local_140 = &DAT_0019e550;
                local_138 = 4;
                local_120 = 0;
                local_128 = 4;
                local_29e = local_280._3_1_;
                local_298 = local_2b0;
                local_294 = local_2ac;
                local_280 = &local_2b8;
                local_130 = &local_280;
                (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_140);
              }
              lVar5 = lVar4;
            } while (lVar4 != local_1c0);
          }
          _ZN4core3ptr55drop_in_place_LT_similar__text__TextDiff_LT_str_GT__GT_17h10f8d906ab3b0a95E
                    (&local_1b8);
        }
        *local_288 = '\x18';
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(local_240);
      }
      _ZN4core3ptr51drop_in_place_LT_just__compilation__Compilation_GT_17hcea2292c76e0cd86E
                (local_2a8);
      return;
    }
    *local_288 = '8';
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(local_240);
  }
LAB_0038e28e:
  _ZN4core3ptr51drop_in_place_LT_just__compilation__Compilation_GT_17hcea2292c76e0cd86E(local_2a8);
  return;
}