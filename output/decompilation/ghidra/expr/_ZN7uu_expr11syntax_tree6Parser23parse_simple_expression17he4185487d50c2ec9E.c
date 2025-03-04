void _ZN7uu_expr11syntax_tree6Parser23parse_simple_expression17he4185487d50c2ec9E
               (undefined8 *param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined local_c8 [4];
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a0;
  undefined local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _ZN7uu_expr11syntax_tree6Parser4next17he96b47f70d6fcb97E(&local_118);
  uVar2 = CONCAT44(uStack_10c,uStack_110);
  uVar3 = CONCAT44(uStack_104,uStack_108);
  if (CONCAT44(uStack_114,local_118) != 7) {
    uVar4 = CONCAT44(uStack_fc,uStack_100);
    param_1[1] = CONCAT44(uStack_114,local_118);
    param_1[2] = uVar2;
    param_1[3] = uVar3;
LAB_00230619:
    param_1[4] = uVar4;
    *param_1 = 1;
    return;
  }
  uVar4 = 5;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbdc352e98c6a24ecE
                    (uVar2,uVar3,"match");
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbdc352e98c6a24ecE
                      (uVar2,uVar3,"substr",6);
    if (cVar1 != '\0') {
      _ZN7uu_expr11syntax_tree6Parser16parse_expression17h377c49be8e7a7acdE(&local_118,param_2);
      local_e8 = CONCAT44(uStack_10c,uStack_110);
      uStack_e0 = CONCAT44(uStack_104,uStack_108);
      local_d8 = CONCAT44(uStack_fc,uStack_100);
      uStack_d0 = uStack_f8;
      uVar2 = uStack_d0;
      if (CONCAT44(uStack_114,local_118) != 0) goto LAB_0023080f;
      uStack_d0._0_4_ = (undefined4)uStack_f8;
      uStack_d0._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
      local_58 = uStack_100;
      uStack_54 = uStack_fc;
      uStack_50 = (undefined4)uStack_d0;
      uStack_4c = uStack_d0._4_4_;
      local_68 = uStack_110;
      uStack_64 = uStack_10c;
      uStack_60 = uStack_108;
      uStack_5c = uStack_104;
      uStack_d0 = uVar2;
                    /* try { // try from 0023068c to 00230696 has its CatchHandler @ 00230c99 */
      _ZN7uu_expr11syntax_tree6Parser16parse_expression17h377c49be8e7a7acdE(&local_118,param_2);
      uStack_d0 = uStack_f8;
      uVar2 = uStack_d0;
      if (CONCAT44(uStack_114,local_118) == 0) {
        uStack_d0._0_4_ = (undefined4)uStack_f8;
        uStack_d0._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
        local_88 = uStack_100;
        uStack_84 = uStack_fc;
        uStack_80 = (undefined4)uStack_d0;
        uStack_7c = uStack_d0._4_4_;
        local_98 = uStack_110;
        uStack_94 = uStack_10c;
        uStack_90 = uStack_108;
        uStack_8c = uStack_104;
        uStack_d0 = uVar2;
                    /* try { // try from 002308f5 to 002308ff has its CatchHandler @ 00230c4f */
        _ZN7uu_expr11syntax_tree6Parser16parse_expression17h377c49be8e7a7acdE(&local_118);
        uVar6 = SUB81(param_2,0);
        local_c8 = (undefined  [4])uStack_110;
        uStack_c4 = uStack_10c;
        uStack_c0._0_4_ = uStack_108;
        uStack_c0._4_4_ = uStack_104;
        local_b8._0_4_ = uStack_100;
        local_b8._4_4_ = uStack_fc;
        uStack_d0 = uStack_f8;
        uVar2 = uStack_d0;
        if (CONCAT44(uStack_114,local_118) == 0) {
          uStack_b0 = uStack_f8;
          uStack_108 = local_58;
          uStack_104 = uStack_54;
          uStack_100 = uStack_50;
          uStack_fc = uStack_4c;
          local_118 = local_68;
          uStack_114 = uStack_64;
          uStack_110 = uStack_60;
          uStack_10c = uStack_5c;
                    /* try { // try from 00230ab8 to 00230abf has its CatchHandler @ 00230c15 */
          uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d53b81a55fa9d0dE(&local_118);
          uStack_108 = local_88;
          uStack_104 = uStack_84;
          uStack_100 = uStack_80;
          uStack_fc = uStack_7c;
          local_118 = local_98;
          uStack_114 = uStack_94;
          uStack_110 = uStack_90;
          uStack_10c = uStack_8c;
          local_70 = uVar2;
                    /* try { // try from 00230ae4 to 00230aeb has its CatchHandler @ 00230bf5 */
          uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d53b81a55fa9d0dE(&local_118);
          uStack_108 = (undefined4)local_b8;
          uStack_104 = local_b8._4_4_;
          uStack_100 = (undefined4)uStack_b0;
          uStack_fc = uStack_b0._4_4_;
          local_118 = local_c8;
          uStack_114 = uStack_c4;
          uStack_110 = (undefined4)uStack_c0;
          uStack_10c = uStack_c0._4_4_;
          local_c8[2] = uVar6;
          local_e8 = uVar3;
          local_c8[1] = (char)&local_118;
                    /* try { // try from 00230b07 to 00230b0e has its CatchHandler @ 00230be3 */
          uStack_b0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d53b81a55fa9d0dE();
          local_c8[0] = 2;
          local_b8 = uVar3;
          uStack_c0 = uVar2;
          goto LAB_00230b17;
        }
        uStack_d0._0_4_ = (undefined4)uStack_f8;
        uStack_d0._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
        *(undefined4 *)(param_1 + 3) = uStack_100;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_fc;
        *(undefined4 *)(param_1 + 4) = (undefined4)uStack_d0;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_d0._4_4_;
        *(undefined4 *)(param_1 + 1) = uStack_110;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_10c;
        *(undefined4 *)(param_1 + 2) = uStack_108;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_104;
        *param_1 = 1;
                    /* try { // try from 00230938 to 00230944 has its CatchHandler @ 00230c99 */
        uStack_d0 = uVar2;
        _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17h0f29fe394da86370E
                  (&local_98);
      }
      else {
        param_1[3] = CONCAT44(uStack_fc,uStack_100);
        param_1[4] = uStack_f8;
        *(undefined4 *)(param_1 + 1) = uStack_110;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_10c;
        *(undefined4 *)(param_1 + 2) = uStack_108;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_104;
        *param_1 = 1;
      }
      puVar7 = &local_68;
      goto LAB_0023094d;
    }
    uVar4 = 5;
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbdc352e98c6a24ecE
                      (uVar2,uVar3,"index");
    if (cVar1 == '\0') {
      uVar4 = 6;
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbdc352e98c6a24ecE
                        (uVar2,uVar3,"length");
      if (cVar1 == '\0') {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbdc352e98c6a24ecE
                          (uVar2,uVar3,"+",1);
        if (cVar1 == '\0') {
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbdc352e98c6a24ecE
                            (uVar2,uVar3,"(",1);
          if (cVar1 != '\0') {
            _ZN7uu_expr11syntax_tree6Parser16parse_expression17h377c49be8e7a7acdE
                      (&local_118,param_2);
            local_e8 = CONCAT44(uStack_10c,uStack_110);
            uStack_e0 = CONCAT44(uStack_104,uStack_108);
            local_d8 = CONCAT44(uStack_fc,uStack_100);
            uStack_d0 = uStack_f8;
            if (CONCAT44(uStack_114,local_118) == 0) {
              local_b8 = CONCAT44(uStack_fc,uStack_100);
              uStack_b0 = uStack_f8;
              _local_c8 = CONCAT44(uStack_10c,uStack_110);
              uStack_c0 = CONCAT44(uStack_104,uStack_108);
                    /* try { // try from 002309b4 to 002309e7 has its CatchHandler @ 00230bd1 */
              _ZN7uu_expr11syntax_tree6Parser4next17he96b47f70d6fcb97E(&local_118,param_2);
              if (CONCAT44(uStack_114,local_118) == 7) {
                cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbdc352e98c6a24ecE
                                  (CONCAT44(uStack_10c,uStack_110),CONCAT44(uStack_104,uStack_108),
                                   ")",1);
                if (cVar1 != '\0') {
                  local_a0 = stack0xffffffffffffff3b;
                  local_9c = uStack_c4._3_1_;
                  goto LAB_00230b17;
                }
                uVar8 = param_2[2] - 1;
                if ((ulong)param_2[1] <= uVar8) {
                    /* WARNING: Subroutine does not return */
                  _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                            (uVar8,param_2[1],&PTR_s_src_uu_expr_src_syntax_tree_rs_002a32b0);
                }
                    /* try { // try from 00230b8c to 00230bd0 has its CatchHandler @ 00230bd1 */
                _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hd7cff6a23e23a786E
                          (&local_118,*(undefined8 *)(*param_2 + uVar8 * 0x10),
                           *(undefined8 *)(*param_2 + 8 + uVar8 * 0x10));
                param_1[4] = CONCAT44(uStack_104,uStack_108);
                *(undefined4 *)(param_1 + 2) = local_118;
                *(undefined4 *)((long)param_1 + 0x14) = uStack_114;
                *(undefined4 *)(param_1 + 3) = uStack_110;
                *(undefined4 *)((long)param_1 + 0x1c) = uStack_10c;
                uVar2 = 6;
                lVar5 = 8;
              }
              else {
                uVar2 = CONCAT44(uStack_fc,uStack_100);
                param_1[1] = CONCAT44(uStack_114,local_118);
                param_1[2] = CONCAT44(uStack_10c,uStack_110);
                param_1[3] = CONCAT44(uStack_104,uStack_108);
                lVar5 = 0x20;
              }
              *(undefined8 *)((long)param_1 + lVar5) = uVar2;
              *param_1 = 1;
              puVar7 = (undefined4 *)local_c8;
              goto LAB_0023094d;
            }
            goto LAB_0023080f;
          }
        }
        else {
          _ZN7uu_expr11syntax_tree6Parser4next17he96b47f70d6fcb97E(&local_118,param_2);
          uVar2 = CONCAT44(uStack_10c,uStack_110);
          uVar3 = CONCAT44(uStack_104,uStack_108);
          if (CONCAT44(uStack_114,local_118) != 7) {
            uVar4 = CONCAT44(uStack_fc,uStack_100);
            param_1[1] = CONCAT44(uStack_114,local_118);
            param_1[2] = uVar2;
            param_1[3] = uVar3;
            goto LAB_00230619;
          }
        }
        local_c8[1] = (char)&local_118;
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hd7cff6a23e23a786E
                  (&local_118,uVar2,uVar3);
        local_c8[2] = (undefined)uVar2;
        uStack_c0 = CONCAT44(uStack_114,local_118);
        local_b8 = CONCAT44(uStack_10c,uStack_110);
        uStack_b0 = CONCAT44(uStack_104,uStack_108);
        local_c8[0] = 0;
LAB_00230b17:
        *(undefined *)(param_1 + 1) = local_c8[0];
        *(undefined *)((long)param_1 + 9) = local_c8[1];
        *(undefined *)((long)param_1 + 10) = local_c8[2];
        *(undefined4 *)((long)param_1 + 0xb) = local_a0;
        *(undefined *)((long)param_1 + 0xf) = local_9c;
        param_1[2] = uStack_c0;
        param_1[3] = local_b8;
        param_1[4] = uStack_b0;
        *param_1 = 0;
        return;
      }
      _ZN7uu_expr11syntax_tree6Parser16parse_expression17h377c49be8e7a7acdE(&local_118);
      local_c8[2] = SUB81(param_2,0);
      local_e8 = CONCAT44(uStack_10c,uStack_110);
      uStack_e0 = CONCAT44(uStack_104,uStack_108);
      local_d8 = CONCAT44(uStack_fc,uStack_100);
      uStack_d0 = uStack_f8;
      uVar2 = uStack_d0;
      if (CONCAT44(uStack_114,local_118) == 0) {
        uStack_d0._0_4_ = (undefined4)uStack_f8;
        uStack_d0._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
        local_38 = uStack_100;
        uStack_34 = uStack_fc;
        uStack_30 = (undefined4)uStack_d0;
        uStack_2c = uStack_d0._4_4_;
        local_48 = uStack_110;
        uStack_44 = uStack_10c;
        uStack_40 = uStack_108;
        uStack_3c = uStack_104;
        local_c8[1] = SUB81(&local_48,0);
        uStack_d0 = uVar2;
        local_b8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d53b81a55fa9d0dE();
        local_c8[0] = 3;
        uStack_b0 = uVar4;
        uStack_c0 = local_b8;
        goto LAB_00230b17;
      }
LAB_0023080f:
      param_1[3] = local_d8;
      param_1[4] = uStack_d0;
      param_1[1] = local_e8;
      param_1[2] = uStack_e0;
      *param_1 = 1;
      return;
    }
    _ZN7uu_expr11syntax_tree6Parser16parse_expression17h377c49be8e7a7acdE(&local_118,param_2);
    local_e8 = CONCAT44(uStack_10c,uStack_110);
    uStack_e0 = CONCAT44(uStack_104,uStack_108);
    local_d8 = CONCAT44(uStack_fc,uStack_100);
    uStack_d0 = uStack_f8;
    uVar2 = uStack_d0;
    if (CONCAT44(uStack_114,local_118) != 0) goto LAB_0023080f;
    uStack_d0._0_4_ = (undefined4)uStack_f8;
    uStack_d0._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
    local_88 = uStack_100;
    uStack_84 = uStack_fc;
    uStack_80 = (undefined4)uStack_d0;
    uStack_7c = uStack_d0._4_4_;
    local_98 = uStack_110;
    uStack_94 = uStack_10c;
    uStack_90 = uStack_108;
    uStack_8c = uStack_104;
    uStack_d0 = uVar2;
                    /* try { // try from 00230737 to 00230741 has its CatchHandler @ 00230c69 */
    _ZN7uu_expr11syntax_tree6Parser16parse_expression17h377c49be8e7a7acdE(&local_118,param_2);
    local_c8 = (undefined  [4])uStack_110;
    uStack_c4 = uStack_10c;
    uStack_c0._0_4_ = uStack_108;
    uStack_c0._4_4_ = uStack_104;
    local_d8 = CONCAT44(uStack_fc,uStack_100);
    uStack_d0 = uStack_f8;
    local_e8._0_4_ = local_c8;
    local_e8._4_4_ = uStack_c4;
    uStack_e0._0_4_ = (undefined4)uStack_c0;
    uStack_e0._4_4_ = uStack_c0._4_4_;
    if (CONCAT44(uStack_114,local_118) == 0) {
      uStack_b0 = uStack_f8;
      uStack_108 = local_88;
      uStack_104 = uStack_84;
      uStack_100 = uStack_80;
      uStack_fc = uStack_7c;
      local_118 = local_98;
      uStack_114 = uStack_94;
      uStack_110 = uStack_90;
      uStack_10c = uStack_8c;
      local_b8 = local_d8;
                    /* try { // try from 0023078e to 00230795 has its CatchHandler @ 00230c40 */
      uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d53b81a55fa9d0dE(&local_118);
      uStack_108 = (undefined4)local_b8;
      uStack_104 = local_b8._4_4_;
      uStack_100 = (undefined4)uStack_b0;
      uStack_fc = uStack_b0._4_4_;
      local_118 = local_c8;
      uStack_114 = uStack_c4;
      uStack_110 = (undefined4)uStack_c0;
      uStack_10c = uStack_c0._4_4_;
      local_e8 = uVar2;
                    /* try { // try from 002307b1 to 002307b8 has its CatchHandler @ 00230c31 */
      local_b8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d53b81a55fa9d0dE(&local_118);
      local_c8[1] = 2;
      local_c8[2] = 1;
      local_c8[0] = 1;
      uStack_b0 = uVar4;
      uStack_c0 = uVar2;
      goto LAB_00230b17;
    }
  }
  else {
    _ZN7uu_expr11syntax_tree6Parser16parse_expression17h377c49be8e7a7acdE(&local_118,param_2);
    local_e8 = CONCAT44(uStack_10c,uStack_110);
    uStack_e0 = CONCAT44(uStack_104,uStack_108);
    local_d8 = CONCAT44(uStack_fc,uStack_100);
    uStack_d0 = uStack_f8;
    uVar2 = uStack_d0;
    if (CONCAT44(uStack_114,local_118) != 0) goto LAB_0023080f;
    uStack_d0._0_4_ = (undefined4)uStack_f8;
    uStack_d0._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
    local_88 = uStack_100;
    uStack_84 = uStack_fc;
    uStack_80 = (undefined4)uStack_d0;
    uStack_7c = uStack_d0._4_4_;
    local_98 = uStack_110;
    uStack_94 = uStack_10c;
    uStack_90 = uStack_108;
    uStack_8c = uStack_104;
    uStack_d0 = uVar2;
                    /* try { // try from 002305b8 to 002305c2 has its CatchHandler @ 00230cab */
    _ZN7uu_expr11syntax_tree6Parser16parse_expression17h377c49be8e7a7acdE(&local_118);
    local_e8._0_4_ = uStack_110;
    local_e8._4_4_ = uStack_10c;
    uStack_e0._0_4_ = uStack_108;
    uStack_e0._4_4_ = uStack_104;
    local_d8 = CONCAT44(uStack_fc,uStack_100);
    uStack_d0 = uStack_f8;
    if (CONCAT44(uStack_114,local_118) == 0) {
      uStack_b0 = uStack_f8;
      uStack_108 = local_88;
      uStack_104 = uStack_84;
      uStack_100 = uStack_80;
      uStack_fc = uStack_7c;
      local_118 = local_98;
      uStack_114 = uStack_94;
      uStack_110 = uStack_90;
      uStack_10c = uStack_8c;
      local_b8 = local_d8;
      local_c8 = (undefined  [4])(undefined4)local_e8;
      uStack_c4 = local_e8._4_4_;
      uStack_c0._0_4_ = (undefined4)uStack_e0;
      uStack_c0._4_4_ = uStack_e0._4_4_;
                    /* try { // try from 0023085a to 00230861 has its CatchHandler @ 00230c8a */
      uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d53b81a55fa9d0dE(&local_118);
      uStack_108 = (undefined4)local_b8;
      uStack_104 = local_b8._4_4_;
      uStack_100 = (undefined4)uStack_b0;
      uStack_fc = uStack_b0._4_4_;
      local_118 = local_c8;
      uStack_114 = uStack_c4;
      uStack_110 = (undefined4)uStack_c0;
      uStack_10c = uStack_c0._4_4_;
      local_e8 = uVar2;
                    /* try { // try from 0023087d to 00230884 has its CatchHandler @ 00230c7b */
      local_b8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8d53b81a55fa9d0dE(&local_118);
      local_c8[0] = 1;
      local_c8[1] = 2;
      local_c8[2] = 0;
      uStack_b0 = uVar4;
      uStack_c0 = uVar2;
      goto LAB_00230b17;
    }
  }
  param_1[3] = local_d8;
  param_1[4] = uStack_d0;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_e8;
  *(undefined4 *)((long)param_1 + 0xc) = local_e8._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_e0;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_e0._4_4_;
  *param_1 = 1;
  puVar7 = &local_98;
LAB_0023094d:
  _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17h0f29fe394da86370E(puVar7);
  return;
}