void _ZN7uu_expr11syntax_tree24check_posix_regex_errors17h83c506dd31e4b1f6E
               (undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong extraout_RDX;
  bool bVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 *local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_b0 = param_3 + param_2;
  local_b8 = param_2;
  bVar3 = _ZN4core3str11validations15next_code_point17h84659763701eb288E(&local_b8);
  if (((int)extraout_RDX != 0x110000 & bVar3) == 1) {
    bVar10 = false;
    bVar4 = false;
    local_c0 = 0;
    lVar13 = 0;
    uVar8 = extraout_RDX;
    local_90 = param_1;
    do {
      iVar12 = (int)uVar8;
      if (bVar10) {
        if (iVar12 < 0x7b) {
          if (iVar12 == 0x28) {
            local_c0 = local_c0 + 1;
          }
          else {
            if (iVar12 != 0x29) goto LAB_001a51e0;
            local_80 = 9;
            if (local_c0 == 0) {
              uVar9 = 9;
LAB_001a53d6:
              *local_90 = uVar9;
              local_90[1] = local_78;
              goto LAB_001a5388;
            }
            local_c0 = local_c0 + -1;
            _ZN4core3ptr39drop_in_place_LT_uu_expr__ExprError_GT_17ha53fef2dd7d5e585E(&local_80);
          }
        }
        else if (iVar12 == 0x7b) {
          lVar13 = lVar13 + 1;
        }
        else {
          if (iVar12 != 0x7d) goto LAB_001a51e0;
          local_80 = 0xb;
          if (lVar13 == 0) {
            uVar9 = 0xb;
            goto LAB_001a53d6;
          }
          local_88 = lVar13 + -1;
          _ZN4core3ptr39drop_in_place_LT_uu_expr__ExprError_GT_17ha53fef2dd7d5e585E(&local_80);
          uVar8 = local_98;
          uVar9 = local_a0;
          lVar13 = local_98 - 1;
          auVar15 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                              (lVar13,local_a0,local_98);
          if (auVar15._0_8_ == 0) {
                    /* try { // try from 001a53ed to 001a541f has its CatchHandler @ 001a5424 */
            (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00251a98)
                      (uVar9,uVar8,0,lVar13,&PTR_s_src_uu_expr_src_syntax_tree_rs_0024a870);
LAB_001a5420:
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
                    (local_68,auVar15._0_8_);
          local_78 = 0;
          local_38 = 1;
          local_80 = 1;
                    /* try { // try from 001a518c to 001a527a has its CatchHandler @ 001a5422 */
          local_70 = auVar15._8_8_;
          auVar15 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h44b185a3022aee78E(&local_78);
          uVar9 = auVar15._8_8_;
          lVar13 = auVar15._0_8_;
          if (lVar13 == 0) {
            (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00251aa0)
                      ("splitn always returns at least one string",0x29,
                       &PTR_s_src_uu_expr_src_syntax_tree_rs_0024a888);
            goto LAB_001a5420;
          }
          if (local_80 == 0) {
            cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h697c4080279ccd7aE
                              (lVar13,uVar9,1,0);
            bVar2 = true;
            if (cVar5 == '\0') goto LAB_001a52c2;
          }
          else {
            if (local_80 == 1) {
              local_80 = 0;
              auVar14 = _ZN4core3str4iter22SplitInternal_LT_P_GT_7get_end17hc19ffeadbe7d30edE
                                  (&local_78);
            }
            else {
              local_80 = local_80 + -1;
              auVar14 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h44b185a3022aee78E
                                  (&local_78);
            }
            local_c8 = auVar14._8_8_;
            lVar11 = auVar14._0_8_;
            cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h697c4080279ccd7aE
                              (lVar13,uVar9,1,0);
            if (cVar5 == '\0') {
              if (lVar11 == 0) goto LAB_001a52c2;
            }
            else if (lVar11 == 0) {
              bVar2 = true;
              goto LAB_001a52d6;
            }
            cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h697c4080279ccd7aE
                              (lVar11,local_c8,1,0);
            if ((cVar6 == '\0') && (auVar15 = auVar14, cVar5 == '\0')) {
              uVar7 = _ZN4core3num21__LT_impl_u20_i16_GT_16from_ascii_radix17h41bd775cd1f6bef0E
                                (lVar13,uVar9);
              uVar8 = _ZN4core3num21__LT_impl_u20_i16_GT_16from_ascii_radix17h41bd775cd1f6bef0E
                                (lVar11,local_c8);
              bVar2 = true;
              if (((uVar7 & 1) == 0) && ((uVar8 & 1) == 0)) {
                bVar2 = (bool)(bVar4 | (short)(uVar8 >> 0x10) < (short)(uVar7 >> 0x10));
              }
            }
            else {
LAB_001a52c2:
              uVar8 = _ZN4core3num21__LT_impl_u20_i16_GT_16from_ascii_radix17h41bd775cd1f6bef0E
                                (auVar15._0_8_,auVar15._8_8_);
              bVar2 = bVar4;
              if ((uVar8 & 1) != 0) {
                bVar2 = true;
              }
            }
          }
LAB_001a52d6:
          bVar4 = bVar2;
          local_98 = 0;
          lVar13 = local_88;
        }
      }
      else {
LAB_001a51e0:
        if (lVar13 == 0) {
          lVar13 = 0;
        }
        else {
          if (local_98 < 0xe) {
            _ZN5alloc6string6String4push17h0ede46164189e411E(&local_a8,uVar8 & 0xffffffff);
          }
          if (((9 < iVar12 - 0x30U) && (iVar12 != 0x2c)) && (iVar12 != 0x5c)) {
            bVar4 = true;
          }
        }
      }
      auVar15 = _ZN4core3str11validations15next_code_point17h84659763701eb288E(&local_b8);
      uVar8 = auVar15._8_8_;
    } while (((auVar15 & (undefined  [16])0x1) != (undefined  [16])0x0) &&
            (bVar10 = (bool)(~bVar10 & iVar12 == 0x5c), auVar15._8_4_ != 0x110000));
    if ((local_c0 != 0 || lVar13 != 0) || (param_1 = local_90, bVar4)) {
      if (lVar13 == 0) {
        if (local_c0 == 0) {
          *local_90 = 0xc;
        }
        else {
          *local_90 = 8;
        }
      }
      else {
        *local_90 = 10;
      }
      goto LAB_001a5388;
    }
  }
  *param_1 = 0xd;
LAB_001a5388:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E(&local_a8);
  return;
}