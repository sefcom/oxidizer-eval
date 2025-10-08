void _ZN4just5lexer5Lexer14lex_line_start17hecba8e7aed370233E(ulong *param_1,long param_2)

{
  code *pcVar1;
  undefined uVar2;
  ulong *puVar8;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [12];
  undefined8 local_e0;
  ulong *local_d0;
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  char local_88;
  undefined4 local_87;
  undefined4 uStack_83;
  ulong *local_68;
  long local_60;
  ulong local_58;
  undefined local_50 [16];
  undefined local_40 [16];
  
  auVar18._8_8_ = local_e0;
  auVar18._0_8_ = param_1;
  auVar16 = _ZN4just5lexer5Lexer4rest17h4f82959a07fe6144E(param_2);
  local_d0 = auVar16._0_8_;
  auStack_c8._0_8_ = auVar16._8_8_ + (long)local_d0;
  auStack_c8._8_8_ = 0;
  auStack_b8._0_8_ = auStack_b8._0_8_ & 0xffffffffffffff00;
  auVar20 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hf62f6fd0d9e5fd48E
                      (&local_d0,auStack_b8);
  uVar13 = auVar20._0_8_;
  if (auVar20._8_4_ == 0x110000) {
    _ZN4just5lexer5Lexer4rest17h4f82959a07fe6144E(param_2);
    uVar13 = extraout_RDX;
  }
  auVar16 = _ZN4just5lexer5Lexer4rest17h4f82959a07fe6144E(param_2);
  auVar17 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                      (uVar13,auVar16._0_8_);
  local_50._8_8_ = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
              (auVar16._0_8_,auVar16._8_8_,uVar13,auVar16._8_8_,&PTR_DAT_00530458);
  }
  else {
    local_50 = auVar17;
    auVar17 = _ZN4just5lexer5Lexer4rest17h4f82959a07fe6144E(param_2);
    auVar16._8_8_ = auVar17._0_8_;
    auVar16._0_8_ = auVar17._8_8_;
    auVar17 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                        (uVar13,auVar17._0_8_);
    uVar11 = auVar17._8_8_;
    puVar8 = auVar17._0_8_;
    if (puVar8 != (ulong *)0x0) {
      lVar12 = (long)puVar8 + uVar11;
      local_40 = auVar17;
      auVar18 = _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E
                          (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      lVar9 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                        (auVar18._0_8_,auVar18._8_8_ + auVar18._0_8_);
      auStack_c8._8_8_ = 0;
      local_d0 = puVar8;
      auStack_c8._0_8_ = lVar12;
      if (lVar9 == 0) {
        auStack_b8._0_8_ = 0;
        uVar15 = 0;
      }
      else {
        auStack_b8._0_8_ = lVar9 - 1;
        auVar20 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                            (&local_d0);
        uVar15 = 0;
        if (auVar20._8_4_ != 0x110000) {
          uVar15 = auVar20._0_8_;
        }
      }
      auVar18 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                          (uVar15,puVar8,uVar11);
      local_58 = auVar18._8_8_;
      puVar10 = auVar18._0_8_;
      auVar18 = auVar17;
      if (puVar10 == (ulong *)0x0) goto LAB_003719ab;
      local_d0 = puVar8;
      auStack_c8._0_8_ = lVar12;
      uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h49829121f50a107bE(&local_d0);
      bVar3 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h31816f8f857b3b2cE
                        (uVar2,1);
      local_d0 = puVar8;
      auStack_c8._0_8_ = lVar12;
      uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h606f9253f65e4406E(&local_d0);
      bVar4 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h31816f8f857b3b2cE
                        (uVar2,1);
      uVar14 = (long)puVar10 + local_58;
      local_d0 = puVar10;
      auStack_c8._0_8_ = uVar14;
      uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h49829121f50a107bE(&local_d0);
      bVar5 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h31816f8f857b3b2cE
                        (uVar2,1);
      local_d0 = puVar10;
      auStack_c8._0_8_ = uVar14;
      uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h606f9253f65e4406E(&local_d0);
      bVar6 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h31816f8f857b3b2cE
                        (uVar2,1);
      local_d0 = (ulong *)((ulong)local_d0 & 0xffffffff00000000);
      auVar18 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(10,&local_d0);
      uVar15 = local_50._8_8_;
      uVar13 = local_50._0_8_;
      cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                        (local_50._0_8_,local_50._8_8_,auVar18._0_8_,auVar18._8_8_);
      if (cVar7 == '\0') {
        cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                          (uVar13,uVar15,&DAT_0016e55e,2);
        if ((uVar15 == 0) || (cVar7 != '\0')) goto LAB_003713b0;
        uVar13 = *(undefined8 *)(param_2 + 8);
        uVar15 = *(undefined8 *)(param_2 + 0x10);
        auVar18 = _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
        cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                          (puVar8,uVar11,auVar18._0_8_,auVar18._8_8_);
        if (cVar7 != '\0') {
LAB_00371482:
          _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
          if (extraout_RDX_00 != 0) {
            auVar18 = _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
            local_68 = auVar18._0_8_;
            local_60 = auVar18._8_8_ + (long)local_68;
            uVar11 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_68);
            if ((uVar11 & 1) != 0) {
              do {
                _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_d0,param_2);
                if (local_88 != '%') {
                  param_1[8] = local_90;
                  param_1[6] = local_a0;
                  param_1[7] = uStack_98;
                  param_1[4] = auStack_b8._8_8_;
                  param_1[5] = uStack_a8;
                  param_1[2] = auStack_c8._8_8_;
                  param_1[3] = auStack_b8._0_8_;
                  *param_1 = (ulong)local_d0;
                  param_1[1] = auStack_c8._0_8_;
                  *(undefined4 *)((long)param_1 + 0x49) = local_87;
                  *(uint *)((long)param_1 + 0x4c) = CONCAT31((undefined3)uStack_83,local_87._3_1_);
                  *(char *)(param_1 + 9) = local_88;
                  return;
                }
                uVar11 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_68);
              } while ((uVar11 & 1) != 0);
            }
            _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x24);
          }
          *(undefined *)(param_1 + 9) = 0x25;
          return;
        }
        cVar7 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17he7e5eaa90c4f1895E
                          (local_40,uVar13,uVar15);
        if (cVar7 == '\0') {
          if (*(char *)(param_2 + 0xc4) == '\0') {
            auVar19 = auVar17;
            if ((bVar3 & bVar4) == 0) {
              _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
              if (extraout_RDX_01 <= uVar11) goto LAB_0037172a;
              goto LAB_0037184c;
            }
          }
          else {
            auVar18 = _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
            cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                              (puVar8,uVar11,auVar18._0_8_,auVar18._8_8_);
            auVar19._8_8_ = local_58;
            auVar19._0_8_ = puVar10;
            if (cVar7 != '\0') goto LAB_00371482;
            if ((bVar5 & bVar6) == 0) {
              _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
              if (uVar11 < extraout_RDX_03) {
LAB_0037184c:
                local_68 = puVar8;
                local_60 = lVar12;
                uVar11 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_68);
                if ((uVar11 & 1) != 0) {
                  do {
                    _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_d0,param_2);
                    if (local_88 != '%') {
LAB_003718ec:
                      param_1[8] = local_90;
                      param_1[6] = local_a0;
                      param_1[7] = uStack_98;
                      param_1[4] = auStack_b8._8_8_;
                      param_1[5] = uStack_a8;
                      param_1[2] = auStack_c8._8_8_;
                      param_1[3] = auStack_b8._0_8_;
                      *param_1 = (ulong)local_d0;
                      param_1[1] = auStack_c8._0_8_;
                      *(undefined4 *)((long)param_1 + 0x49) = local_87;
                      *(uint *)((long)param_1 + 0x4c) =
                           CONCAT31((undefined3)uStack_83,local_87._3_1_);
                      *(char *)(param_1 + 9) = local_88;
                      return;
                    }
                    uVar11 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E
                                       (&local_68);
                  } while ((uVar11 & 1) != 0);
                  uVar13 = *(undefined8 *)(param_2 + 8);
                  uVar15 = *(undefined8 *)(param_2 + 0x10);
                }
                auVar19 = _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
                local_d0 = (ulong *)0x8000000000000027;
                goto LAB_003718d0;
              }
              _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
              if (extraout_RDX_04 <= local_58) {
                auVar18 = _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
                cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                                  (puVar10,local_58,auVar18._0_8_,auVar18._8_8_);
                if (cVar7 == '\0') goto LAB_0037184c;
              }
LAB_0037172a:
              _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
              if (extraout_RDX_02 <= uVar11) {
                auVar18 = _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
                cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                                  (puVar8,uVar11,auVar18._0_8_,auVar18._8_8_);
                if (cVar7 == '\0') goto LAB_0037184c;
              }
              cVar7 = _ZN4just5lexer5Lexer18next_is_whitespace17h1ab180af553eaaf1E
                                (*(undefined4 *)(param_2 + 0xc0));
              if (cVar7 != '\0') {
                do {
                  _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_d0,param_2);
                  if (local_88 != '%') goto LAB_003717ed;
                  cVar7 = _ZN4just5lexer5Lexer18next_is_whitespace17h1ab180af553eaaf1E
                                    (*(undefined4 *)(param_2 + 0xc0));
                } while (cVar7 != '\0');
              }
              if (*(long *)(param_2 + 0x40) == 0) {
                auVar18 = _ZN4just5lexer5Lexer6lexeme17h6f4e5a895dbfd937E(param_2);
                _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6fed9915a4cca328E
                          (param_2,auVar18._0_8_,auVar18._8_8_,&PTR_DAT_005304a0);
                _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x19);
                if (*(char *)(param_2 + 0xc5) != '\0') {
                  *(undefined *)(param_2 + 0xc4) = 1;
                }
                goto LAB_00371415;
              }
              goto LAB_00371408;
            }
          }
          local_68 = auVar19._0_8_;
          local_60 = (long)local_68 + auVar19._8_8_;
          uVar11 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_68);
          if ((uVar11 & 1) != 0) {
            do {
              _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_d0,param_2);
              if (local_88 != '%') goto LAB_003718ec;
              uVar11 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_68);
            } while ((uVar11 & 1) != 0);
          }
          auVar17._8_8_ = auStack_b8._8_8_;
          auVar17._0_8_ = auStack_b8._0_8_;
          local_d0 = (ulong *)0x800000000000002c;
LAB_003718d0:
          auStack_c8 = auVar19;
          auStack_b8 = auVar17;
          _ZN4just5lexer5Lexer5error17h92eb8a4dd6b17c78E(param_1,param_2,&local_d0);
          return;
        }
        auVar18 = _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(uVar13,uVar15);
        cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                          (auVar18._0_8_,auVar18._8_8_,puVar8,uVar11);
        while (cVar7 == '\0') {
          _ZN4just5lexer5Lexer10lex_dedent17hd3d59812e389acd6E(param_2);
          auVar18 = _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E
                              (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
          cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                            (auVar18._0_8_,auVar18._8_8_,puVar8,uVar11);
        }
        if (uVar11 == 0) goto LAB_00371415;
        cVar7 = _ZN4just5lexer5Lexer18next_is_whitespace17h1ab180af553eaaf1E
                          (*(undefined4 *)(param_2 + 0xc0));
        if (cVar7 != '\0') {
          do {
            _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_d0,param_2);
            if (local_88 != '%') {
LAB_003717ed:
              param_1[8] = local_90;
              param_1[6] = local_a0;
              param_1[7] = uStack_98;
              param_1[4] = auStack_b8._8_8_;
              param_1[5] = uStack_a8;
              param_1[2] = auStack_c8._8_8_;
              param_1[3] = auStack_b8._0_8_;
              *param_1 = (ulong)local_d0;
              param_1[1] = auStack_c8._0_8_;
              *(undefined4 *)((long)param_1 + 0x49) = local_87;
              *(uint *)((long)param_1 + 0x4c) = CONCAT31((undefined3)uStack_83,local_87._3_1_);
              *(char *)(param_1 + 9) = local_88;
              return;
            }
            cVar7 = _ZN4just5lexer5Lexer18next_is_whitespace17h1ab180af553eaaf1E
                              (*(undefined4 *)(param_2 + 0xc0));
          } while (cVar7 != '\0');
        }
      }
      else {
LAB_003713b0:
        if (uVar11 == 0) goto LAB_00371415;
        cVar7 = _ZN4just5lexer5Lexer18next_is_whitespace17h1ab180af553eaaf1E
                          (*(undefined4 *)(param_2 + 0xc0));
        if (cVar7 != '\0') {
          do {
            _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_d0,param_2);
            if (local_88 != '%') goto LAB_003717ed;
            cVar7 = _ZN4just5lexer5Lexer18next_is_whitespace17h1ab180af553eaaf1E
                              (*(undefined4 *)(param_2 + 0xc0));
          } while (cVar7 != '\0');
        }
      }
LAB_00371408:
      _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x24);
LAB_00371415:
      *(undefined *)(param_1 + 9) = 0x25;
      return;
    }
  }
  uVar15 = auVar16._8_8_;
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
            (uVar15,auVar16._0_8_,0,uVar13,&PTR_DAT_00530470);
LAB_003719ab:
  local_e0 = auVar18._8_8_;
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
            (auVar18._0_8_,local_e0,0,uVar15,&PTR_DAT_00530488);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}