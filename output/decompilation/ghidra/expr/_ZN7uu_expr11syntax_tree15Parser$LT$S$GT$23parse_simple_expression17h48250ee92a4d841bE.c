void _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_23parse_simple_expression17h48250ee92a4d841bE
               (long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long lStack_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 local_120;
  int iStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  long local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined local_80 [8];
  int local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined local_58 [8];
  int local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_4next17hcbcc00427960fc28E(&local_178);
  lVar5 = CONCAT44(uStack_16c,iStack_170);
  lVar6 = CONCAT44(uStack_164,iStack_168);
  if (CONCAT44(uStack_174,local_178) != 0xd) {
    lVar8 = CONCAT44(uStack_15c,uStack_160);
    param_1[1] = CONCAT44(uStack_174,local_178);
    param_1[2] = lVar5;
    param_1[3] = lVar6;
LAB_0019b75d:
    param_1[4] = lVar8;
    *param_1 = -0x7ffffffffffffffb;
    return;
  }
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6aa7dedd5a5c3808E
                    (lVar5,lVar6,"match",5);
  if (cVar3 == '\0') {
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6aa7dedd5a5c3808E
                      (lVar5,lVar6,"substr",6);
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6aa7dedd5a5c3808E
                        (lVar5,lVar6,"index",5);
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6aa7dedd5a5c3808E
                          (lVar5,lVar6,"length",6);
        if (cVar3 == '\0') {
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6aa7dedd5a5c3808E
                            (lVar5,lVar6,"+",1);
          if (cVar3 == '\0') {
            cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6aa7dedd5a5c3808E
                              (lVar5,lVar6,"(",1);
            if (cVar3 != '\0') {
              _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_expression17hd5f39d703e318a8fE
                        (&local_178,param_2);
              local_f8 = CONCAT44(uStack_16c,iStack_170);
              uStack_e0 = lStack_158;
              lVar5 = uStack_e0;
              uStack_e0._0_4_ = (undefined4)lStack_158;
              uStack_e0._4_4_ = (undefined4)((ulong)lStack_158 >> 0x20);
              local_a8._0_4_ = iStack_170;
              local_a8._4_4_ = uStack_16c;
              uStack_a0._0_4_ = iStack_168;
              uStack_a0._4_4_ = uStack_164;
              local_98._0_4_ = uStack_160;
              local_98._4_4_ = uStack_15c;
              uStack_90._0_4_ = (undefined4)uStack_e0;
              uStack_90._4_4_ = uStack_e0._4_4_;
              if (CONCAT44(uStack_174,local_178) == -0x7ffffffffffffffb) goto LAB_0019b98a;
              local_50 = iStack_170;
              uStack_4c = uStack_16c;
              iStack_48 = iStack_168;
              uStack_44 = uStack_164;
              local_40 = uStack_160;
              uStack_3c = uStack_15c;
              uStack_38 = (undefined4)uStack_e0;
              uStack_34 = uStack_e0._4_4_;
              uStack_e0 = lVar5;
              (*(code *)PTR__ZN7uu_expr11syntax_tree7AstNode9evaluated17h50cae09c54c1e370E_002518c8)
                        (&local_148,local_58);
              local_a8 = uStack_140;
              lVar5 = local_a8;
              uStack_a0 = local_138;
              lVar6 = uStack_a0;
              local_98 = uStack_130;
              lVar8 = local_98;
              uStack_90 = local_128;
              lVar2 = uStack_90;
              local_a8._0_4_ = (int)uStack_140;
              local_a8._4_4_ = (undefined4)((ulong)uStack_140 >> 0x20);
              uStack_a0._0_4_ = (int)local_138;
              uStack_a0._4_4_ = (undefined4)((ulong)local_138 >> 0x20);
              local_98._0_4_ = (undefined4)uStack_130;
              local_98._4_4_ = (undefined4)((ulong)uStack_130 >> 0x20);
              uStack_90._0_4_ = (undefined4)local_128;
              uStack_90._4_4_ = (undefined4)((ulong)local_128 >> 0x20);
              if (local_148 == -0x7ffffffffffffffb) goto LAB_0019b98a;
              uStack_108 = (undefined4)local_98;
              uStack_104 = local_98._4_4_;
              uStack_100 = (undefined4)uStack_90;
              uStack_fc = uStack_90._4_4_;
              iStack_118 = (int)local_a8;
              uStack_114 = local_a8._4_4_;
              iStack_110 = (int)uStack_a0;
              uStack_10c = uStack_a0._4_4_;
              local_120 = local_148;
              local_a8 = lVar5;
              uStack_a0 = lVar6;
              local_98 = lVar8;
              uStack_90 = lVar2;
                    /* try { // try from 0019bd6f to 0019bd79 has its CatchHandler @ 0019bebd */
              _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_4next17hcbcc00427960fc28E(&local_178,param_2)
              ;
              if (CONCAT44(uStack_174,local_178) != 1) {
                iStack_f0 = iStack_170;
                uStack_ec = uStack_16c;
                local_e8._0_4_ = iStack_168;
                local_e8._4_4_ = uStack_164;
                if (local_178 != 0xd) goto LAB_0019b737;
                cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6aa7dedd5a5c3808E
                                  (CONCAT44(uStack_16c,iStack_170),CONCAT44(uStack_164,iStack_168),
                                   ")/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/expr/src/syntax_tree.rs|&<<==!=>=>-*/%:"
                                   ,1);
                if (cVar3 != '\0') {
                  lStack_b0 = CONCAT44(uStack_104,uStack_108);
                  local_c8 = local_120;
                  uStack_c0 = CONCAT44(uStack_114,iStack_118);
                  local_b8 = CONCAT44(uStack_10c,iStack_110);
                  goto LAB_0019ba34;
                }
                uVar10 = param_2[2] - 1;
                if ((ulong)param_2[1] <= uVar10) {
                    /* try { // try from 0019be9f to 0019beab has its CatchHandler @ 0019beae */
                  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002518d0)
                            (uVar10,param_2[1],&DAT_002498f0);
                  goto LAB_0019beac;
                }
                uVar7 = _ZN73__LT_alloc__string__String_u20_as_u20_core__convert__AsRef_LT_str_GT__GT_6as_ref17h0a9eb36fc0b98c5fE
                                  (*(undefined8 *)(*param_2 + 8 + uVar10 * 0x18),
                                   *(undefined8 *)(*param_2 + 0x10 + uVar10 * 0x18));
                    /* try { // try from 0019be64 to 0019be70 has its CatchHandler @ 0019beae */
                _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha1ed10b7b3735d74E
                          (&local_148,uVar7);
                param_1[4] = local_138;
                *(int *)(param_1 + 2) = (int)local_148;
                *(undefined4 *)((long)param_1 + 0x14) = local_148._4_4_;
                *(int *)(param_1 + 3) = (int)uStack_140;
                *(undefined4 *)((long)param_1 + 0x1c) = uStack_140._4_4_;
                param_1[1] = 7;
                goto LAB_0019b73f;
              }
              uVar10 = param_2[2] - 1;
              if ((ulong)param_2[1] <= uVar10) {
                    /* try { // try from 0019be90 to 0019be9c has its CatchHandler @ 0019beb0 */
                (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002518d0)
                          (uVar10,param_2[1],&DAT_00249908);
LAB_0019beac:
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              uVar7 = _ZN73__LT_alloc__string__String_u20_as_u20_core__convert__AsRef_LT_str_GT__GT_6as_ref17h0a9eb36fc0b98c5fE
                                (*(undefined8 *)(*param_2 + 8 + uVar10 * 0x18),
                                 *(undefined8 *)(*param_2 + 0x10 + uVar10 * 0x18));
                    /* try { // try from 0019bdf9 to 0019be05 has its CatchHandler @ 0019beb0 */
              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha1ed10b7b3735d74E
                        (&local_148,uVar7);
              param_1[4] = local_138;
              *(int *)(param_1 + 2) = (int)local_148;
              *(undefined4 *)((long)param_1 + 0x14) = local_148._4_4_;
              *(int *)(param_1 + 3) = (int)uStack_140;
              *(undefined4 *)((long)param_1 + 0x1c) = uStack_140._4_4_;
              param_1[1] = 6;
              *param_1 = -0x7ffffffffffffffb;
              _ZN4core3ptr39drop_in_place_LT_uu_expr__ExprError_GT_17hcc83ccc5ddfd1404E(&local_178);
              goto LAB_0019b742;
            }
          }
          else {
            _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_4next17hcbcc00427960fc28E(&local_178,param_2);
            lVar5 = CONCAT44(uStack_16c,iStack_170);
            lVar6 = CONCAT44(uStack_164,iStack_168);
            if (CONCAT44(uStack_174,local_178) != 0xd) {
              lVar8 = CONCAT44(uStack_15c,uStack_160);
              param_1[1] = CONCAT44(uStack_174,local_178);
              param_1[2] = lVar5;
              param_1[3] = lVar6;
              goto LAB_0019b75d;
            }
          }
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha1ed10b7b3735d74E
                    (&uStack_c0,lVar5,lVar6);
          local_c8 = -0x7fffffffffffffff;
LAB_0019ba34:
                    /* try { // try from 0019ba34 to 0019ba39 has its CatchHandler @ 0019bfac */
          uVar4 = (*(code *)PTR__ZN7uu_expr11syntax_tree11get_next_id17hf082ef3e5b1b606fE_002518c0)
                            ();
          param_1[2] = local_b8;
          param_1[3] = lStack_b0;
          *param_1 = local_c8;
          param_1[1] = uStack_c0;
          *(undefined4 *)(param_1 + 4) = uVar4;
          return;
        }
        _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_expression17hd5f39d703e318a8fE
                  (&local_178,param_2);
        local_148._0_4_ = iStack_170;
        local_148._4_4_ = uStack_16c;
        uStack_140._0_4_ = iStack_168;
        uStack_140._4_4_ = uStack_164;
        local_138._0_4_ = uStack_160;
        local_138._4_4_ = uStack_15c;
        uStack_130 = lStack_158;
        lVar5 = uStack_130;
        if (CONCAT44(uStack_174,local_178) != -0x7ffffffffffffffb) {
          uStack_130._0_4_ = (undefined4)lStack_158;
          uStack_130._4_4_ = (undefined4)((ulong)lStack_158 >> 0x20);
          local_78 = iStack_170;
          uStack_74 = uStack_16c;
          iStack_70 = iStack_168;
          uStack_6c = uStack_164;
          local_68 = uStack_160;
          uStack_64 = uStack_15c;
          uStack_60 = (undefined4)uStack_130;
          uStack_5c = uStack_130._4_4_;
          uStack_130 = lVar5;
          uStack_c0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h112af27c2373377fE(local_80);
          local_c8 = -0x7ffffffffffffffc;
          goto LAB_0019ba34;
        }
      }
      else {
        _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_expression17hd5f39d703e318a8fE
                  (&local_178,param_2);
        local_120 = CONCAT44(uStack_174,local_178);
        local_148._0_4_ = iStack_170;
        local_148._4_4_ = uStack_16c;
        uStack_140._0_4_ = iStack_168;
        uStack_140._4_4_ = uStack_164;
        local_138._0_4_ = uStack_160;
        local_138._4_4_ = uStack_15c;
        uStack_130 = lStack_158;
        lVar5 = uStack_130;
        if (local_120 != -0x7ffffffffffffffb) {
          uStack_130._0_4_ = (undefined4)lStack_158;
          uStack_130._4_4_ = (undefined4)((ulong)lStack_158 >> 0x20);
          uStack_108 = uStack_160;
          uStack_104 = uStack_15c;
          uStack_100 = (undefined4)uStack_130;
          uStack_fc = uStack_130._4_4_;
          iStack_118 = iStack_170;
          uStack_114 = uStack_16c;
          iStack_110 = iStack_168;
          uStack_10c = uStack_164;
          uStack_130 = lVar5;
                    /* try { // try from 0019b880 to 0019b88a has its CatchHandler @ 0019bf5b */
          _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_expression17hd5f39d703e318a8fE
                    (&local_178,param_2);
          local_148 = CONCAT44(uStack_174,local_178);
          uStack_140._0_4_ = iStack_170;
          uStack_140._4_4_ = uStack_16c;
          iStack_f0 = iStack_168;
          uStack_ec = uStack_164;
          local_e8 = CONCAT44(uStack_15c,uStack_160);
          uStack_e0 = lStack_158;
          local_f8._0_4_ = (int)uStack_140;
          local_f8._4_4_ = uStack_140._4_4_;
          if (local_148 != -0x7ffffffffffffffb) {
            local_128 = lStack_158;
            lStack_158 = CONCAT44(uStack_fc,uStack_100);
            iStack_168 = iStack_110;
            uStack_164 = uStack_10c;
            uStack_160 = uStack_108;
            uStack_15c = uStack_104;
            local_178 = (int)local_120;
            uStack_174 = local_120._4_4_;
            iStack_170 = iStack_118;
            uStack_16c = uStack_114;
            uStack_130 = local_e8;
            local_138._0_4_ = iStack_f0;
            local_138._4_4_ = uStack_ec;
                    /* try { // try from 0019b8ee to 0019b8f5 has its CatchHandler @ 0019bf35 */
            lVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h112af27c2373377fE(&local_178);
            lStack_158 = local_128;
            iStack_168 = (int)local_138;
            uStack_164 = local_138._4_4_;
            uStack_160 = (undefined4)uStack_130;
            uStack_15c = uStack_130._4_4_;
            local_178 = (int)local_148;
            uStack_174 = local_148._4_4_;
            iStack_170 = (int)uStack_140;
            uStack_16c = uStack_140._4_4_;
            local_f8 = lVar5;
                    /* try { // try from 0019b91e to 0019b925 has its CatchHandler @ 0019bf20 */
            local_b8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h112af27c2373377fE(&local_178);
            lStack_b0 = CONCAT62(lStack_b0._2_6_,0x102);
            goto LAB_0019ba18;
          }
          goto LAB_0019b727;
        }
      }
    }
    else {
      _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_expression17hd5f39d703e318a8fE
                (&local_178,param_2);
      local_f8 = CONCAT44(uStack_174,local_178);
      local_148._0_4_ = iStack_170;
      local_148._4_4_ = uStack_16c;
      uStack_140._0_4_ = iStack_168;
      uStack_140._4_4_ = uStack_164;
      local_138._0_4_ = uStack_160;
      local_138._4_4_ = uStack_15c;
      uStack_130 = lStack_158;
      lVar5 = uStack_130;
      if (local_f8 != -0x7ffffffffffffffb) {
        uStack_130._0_4_ = (undefined4)lStack_158;
        uStack_130._4_4_ = (undefined4)((ulong)lStack_158 >> 0x20);
        uStack_e0 = CONCAT44(uStack_15c,uStack_160);
        local_d8 = (undefined4)uStack_130;
        uStack_d4 = uStack_130._4_4_;
        iStack_f0 = iStack_170;
        uStack_ec = uStack_16c;
        local_e8._0_4_ = iStack_168;
        local_e8._4_4_ = uStack_164;
        uStack_130 = lVar5;
                    /* try { // try from 0019b7d6 to 0019b7e0 has its CatchHandler @ 0019bf8b */
        _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_expression17hd5f39d703e318a8fE
                  (&local_178,param_2);
        uStack_130 = lStack_158;
        lVar5 = uStack_130;
        if (CONCAT44(uStack_174,local_178) == -0x7ffffffffffffffb) {
          param_1[3] = CONCAT44(uStack_15c,uStack_160);
          param_1[4] = lStack_158;
          *(int *)(param_1 + 1) = iStack_170;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_16c;
          *(int *)(param_1 + 2) = iStack_168;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_164;
          *param_1 = -0x7ffffffffffffffb;
        }
        else {
          uStack_130._0_4_ = (undefined4)lStack_158;
          uStack_130._4_4_ = (undefined4)((ulong)lStack_158 >> 0x20);
          uStack_108 = uStack_160;
          uStack_104 = uStack_15c;
          uStack_100 = (undefined4)uStack_130;
          uStack_fc = uStack_130._4_4_;
          iStack_118 = iStack_170;
          uStack_114 = uStack_16c;
          iStack_110 = iStack_168;
          uStack_10c = uStack_164;
          uStack_130 = lVar5;
          local_120 = CONCAT44(uStack_174,local_178);
                    /* try { // try from 0019bac1 to 0019bacb has its CatchHandler @ 0019bf44 */
          _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_expression17hd5f39d703e318a8fE
                    (&local_178,param_2);
          local_148 = CONCAT44(uStack_174,local_178);
          uStack_140 = CONCAT44(uStack_16c,iStack_170);
          local_138 = CONCAT44(uStack_164,iStack_168);
          local_98 = CONCAT44(uStack_15c,uStack_160);
          uStack_90 = lStack_158;
          lVar5 = uStack_90;
          uStack_a0 = local_138;
          if (local_148 != -0x7ffffffffffffffb) {
            local_128 = lStack_158;
            lStack_158 = CONCAT44(uStack_d4,local_d8);
            iStack_168 = (int)local_e8;
            uStack_164 = local_e8._4_4_;
            uStack_160 = (undefined4)uStack_e0;
            uStack_15c = uStack_e0._4_4_;
            local_178 = (int)local_f8;
            uStack_174 = local_f8._4_4_;
            iStack_170 = iStack_f0;
            uStack_16c = uStack_ec;
            uStack_130 = local_98;
                    /* try { // try from 0019bc21 to 0019bc28 has its CatchHandler @ 0019bf03 */
            lVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h112af27c2373377fE(&local_178);
            lStack_158 = CONCAT44(uStack_fc,uStack_100);
            iStack_168 = iStack_110;
            uStack_164 = uStack_10c;
            uStack_160 = uStack_108;
            uStack_15c = uStack_104;
            local_178 = (int)local_120;
            uStack_174 = local_120._4_4_;
            iStack_170 = iStack_118;
            uStack_16c = uStack_114;
            local_88 = lVar5;
                    /* try { // try from 0019bc51 to 0019bc58 has its CatchHandler @ 0019bee3 */
            lVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h112af27c2373377fE(&local_178);
            lStack_158 = local_128;
            iStack_168 = (int)local_138;
            uStack_164 = local_138._4_4_;
            uStack_160 = (undefined4)uStack_130;
            uStack_15c = uStack_130._4_4_;
            local_178 = (int)local_148;
            uStack_174 = local_148._4_4_;
            iStack_170 = (int)uStack_140;
            uStack_16c = uStack_140._4_4_;
            local_a8 = lVar6;
                    /* try { // try from 0019bc81 to 0019bc88 has its CatchHandler @ 0019becf */
            lStack_b0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h112af27c2373377fE(&local_178);
            local_c8 = -0x7ffffffffffffffd;
            uStack_c0 = lVar5;
            local_b8 = lVar6;
            goto LAB_0019ba34;
          }
          uStack_90._0_4_ = (undefined4)lStack_158;
          uStack_90._4_4_ = (undefined4)((ulong)lStack_158 >> 0x20);
          *(undefined4 *)(param_1 + 3) = uStack_160;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_15c;
          *(undefined4 *)(param_1 + 4) = (undefined4)uStack_90;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_90._4_4_;
          *(int *)(param_1 + 1) = iStack_170;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_16c;
          *(int *)(param_1 + 2) = iStack_168;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_164;
          *param_1 = -0x7ffffffffffffffb;
                    /* try { // try from 0019bb0e to 0019bb17 has its CatchHandler @ 0019bf8b */
          local_a8 = uStack_140;
          uStack_90 = lVar5;
          _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17h702ff2a2ff59954aE
                    (&local_120);
        }
        puVar9 = &local_f8;
        goto LAB_0019bb20;
      }
    }
  }
  else {
    _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_expression17hd5f39d703e318a8fE
              (&local_178,param_2);
    local_120 = CONCAT44(uStack_174,local_178);
    local_148._0_4_ = iStack_170;
    local_148._4_4_ = uStack_16c;
    uStack_140._0_4_ = iStack_168;
    uStack_140._4_4_ = uStack_164;
    local_138._0_4_ = uStack_160;
    local_138._4_4_ = uStack_15c;
    uStack_130 = lStack_158;
    lVar5 = uStack_130;
    if (local_120 != -0x7ffffffffffffffb) {
      uStack_130._0_4_ = (undefined4)lStack_158;
      uStack_130._4_4_ = (undefined4)((ulong)lStack_158 >> 0x20);
      uStack_108 = uStack_160;
      uStack_104 = uStack_15c;
      uStack_100 = (undefined4)uStack_130;
      uStack_fc = uStack_130._4_4_;
      iStack_118 = iStack_170;
      uStack_114 = uStack_16c;
      iStack_110 = iStack_168;
      uStack_10c = uStack_164;
      uStack_130 = lVar5;
                    /* try { // try from 0019b6f5 to 0019b6ff has its CatchHandler @ 0019bf9d */
      _ZN7uu_expr11syntax_tree15Parser_LT_S_GT_16parse_expression17hd5f39d703e318a8fE
                (&local_178,param_2);
      local_148 = CONCAT44(uStack_174,local_178);
      local_f8._0_4_ = iStack_170;
      local_f8._4_4_ = uStack_16c;
      iStack_f0 = iStack_168;
      uStack_ec = uStack_164;
      local_e8 = CONCAT44(uStack_15c,uStack_160);
      uStack_e0 = lStack_158;
      if (local_148 != -0x7ffffffffffffffb) {
        local_128 = lStack_158;
        lStack_158 = CONCAT44(uStack_fc,uStack_100);
        iStack_168 = iStack_110;
        uStack_164 = uStack_10c;
        uStack_160 = uStack_108;
        uStack_15c = uStack_104;
        local_178 = (int)local_120;
        uStack_174 = local_120._4_4_;
        iStack_170 = iStack_118;
        uStack_16c = uStack_114;
        uStack_130 = local_e8;
        uStack_140._0_4_ = (int)local_f8;
        uStack_140._4_4_ = local_f8._4_4_;
        local_138._0_4_ = iStack_f0;
        local_138._4_4_ = uStack_ec;
                    /* try { // try from 0019b9d6 to 0019b9dd has its CatchHandler @ 0019bf7c */
        lVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h112af27c2373377fE(&local_178);
        lStack_158 = local_128;
        iStack_168 = (int)local_138;
        uStack_164 = local_138._4_4_;
        uStack_160 = (undefined4)uStack_130;
        uStack_15c = uStack_130._4_4_;
        local_178 = (int)local_148;
        uStack_174 = local_148._4_4_;
        iStack_170 = (int)uStack_140;
        uStack_16c = uStack_140._4_4_;
        local_f8 = lVar5;
                    /* try { // try from 0019ba06 to 0019ba0d has its CatchHandler @ 0019bf6a */
        local_b8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h112af27c2373377fE(&local_178);
        lStack_b0 = CONCAT62(lStack_b0._2_6_,2);
LAB_0019ba18:
        local_c8 = -0x7ffffffffffffffe;
        uStack_c0 = lVar5;
        goto LAB_0019ba34;
      }
LAB_0019b727:
      local_178 = (int)local_f8;
      uStack_174 = local_f8._4_4_;
      uStack_160 = (undefined4)uStack_e0;
      uStack_15c = uStack_e0._4_4_;
LAB_0019b737:
      *(int *)(param_1 + 3) = (int)local_e8;
      *(undefined4 *)((long)param_1 + 0x1c) = local_e8._4_4_;
      *(undefined4 *)(param_1 + 4) = uStack_160;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_15c;
      *(int *)(param_1 + 1) = local_178;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_174;
      *(int *)(param_1 + 2) = iStack_f0;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_ec;
LAB_0019b73f:
      *param_1 = -0x7ffffffffffffffb;
LAB_0019b742:
      puVar9 = &local_120;
LAB_0019bb20:
      _ZN4core3ptr50drop_in_place_LT_uu_expr__syntax_tree__AstNode_GT_17h702ff2a2ff59954aE(puVar9);
      return;
    }
  }
  local_a8._0_4_ = (int)local_148;
  local_a8._4_4_ = local_148._4_4_;
  uStack_a0._0_4_ = (int)uStack_140;
  uStack_a0._4_4_ = uStack_140._4_4_;
  local_98._0_4_ = (int)local_138;
  local_98._4_4_ = local_138._4_4_;
  uStack_90._0_4_ = (undefined4)uStack_130;
  uStack_90._4_4_ = uStack_130._4_4_;
LAB_0019b98a:
  *(undefined4 *)(param_1 + 3) = (undefined4)local_98;
  *(undefined4 *)((long)param_1 + 0x1c) = local_98._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)uStack_90;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_90._4_4_;
  *(int *)(param_1 + 1) = (int)local_a8;
  *(undefined4 *)((long)param_1 + 0xc) = local_a8._4_4_;
  *(int *)(param_1 + 2) = (int)uStack_a0;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_a0._4_4_;
  *param_1 = -0x7ffffffffffffffb;
  return;
}