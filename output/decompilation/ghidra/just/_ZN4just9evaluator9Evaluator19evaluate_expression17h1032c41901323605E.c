void _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E
               (char *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined7 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *extraout_RDX;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  char local_1c8;
  byte bStack_1c7;
  undefined2 uStack_1c6;
  undefined uStack_1c4;
  undefined2 uStack_1c3;
  undefined uStack_1c1;
  undefined uStack_1c0;
  undefined uStack_1bf;
  undefined2 uStack_1be;
  undefined4 uStack_1bc;
  undefined uStack_1b8;
  undefined uStack_1b7;
  undefined2 uStack_1b6;
  undefined4 uStack_1b4;
  undefined2 uStack_1b0;
  undefined5 uStack_1ae;
  undefined uStack_1a9;
  undefined2 local_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 local_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined2 local_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined6 uStack_17e;
  undefined2 local_178;
  undefined6 uStack_176;
  undefined2 uStack_170;
  undefined6 uStack_16e;
  undefined2 local_168;
  undefined6 uStack_166;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined7 uStack_148;
  undefined uStack_141;
  undefined7 uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined3 uStack_108;
  undefined4 uStack_105;
  undefined uStack_101;
  undefined7 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [8];
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  lVar7 = *param_3;
  lVar4 = 8;
  plVar8 = param_3;
  switch(lVar7) {
  case 7:
switchD_00365333_caseD_7:
    _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E
              (&local_1c8,param_2,plVar8[1]);
    if (local_1c8 != '8') goto LAB_00365f05;
    local_158._4_4_ = uStack_1bc;
    uStack_14c = uStack_1b4;
    if (CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0)) != 0) {
                    /* try { // try from 00365ed6 to 00365ee0 has its CatchHandler @ 00365f03 */
      _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E
                (param_1,param_2,plVar8[2]);
      goto LAB_00365f86;
    }
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\x01';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    goto LAB_00365f83;
  case 8:
switchD_00365333_caseD_8:
    _ZN4just9evaluator9Evaluator18evaluate_condition17hff24f5aa7f9c2ad8E
              (&local_1c8,param_2,plVar8 + 2);
    if (local_1c8 != '8') {
LAB_003663db:
      *(ulong *)(param_1 + 0x60) = CONCAT62(uStack_166,local_168);
      *(ulong *)(param_1 + 0x52) = CONCAT26(uStack_170,uStack_176);
      *(ulong *)(param_1 + 0x5a) = CONCAT26(local_168,uStack_16e);
      *(ulong *)(param_1 + 0x42) = CONCAT26(uStack_180,uStack_186);
      *(ulong *)(param_1 + 0x4a) = CONCAT26(local_178,uStack_17e);
      *(ulong *)(param_1 + 0x32) = CONCAT26(uStack_190,uStack_196);
      *(ulong *)(param_1 + 0x3a) = CONCAT26(local_188,uStack_18e);
      *(ulong *)(param_1 + 0x22) = CONCAT26(uStack_1a0,uStack_1a6);
      *(ulong *)(param_1 + 0x2a) = CONCAT26(local_198,uStack_19e);
      *(ulong *)(param_1 + 0x12) = CONCAT26(uStack_1b0,CONCAT42(uStack_1b4,uStack_1b6));
      *(ulong *)(param_1 + 0x1a) = CONCAT26(local_1a8,CONCAT15(uStack_1a9,uStack_1ae));
      *(ulong *)(param_1 + 2) =
           CONCAT17(uStack_1bf,
                    CONCAT16(uStack_1c0,
                             CONCAT15(uStack_1c1,
                                      CONCAT23(uStack_1c3,CONCAT12(uStack_1c4,uStack_1c6)))));
      *(ulong *)(param_1 + 10) =
           CONCAT17(uStack_1b7,CONCAT16(uStack_1b8,CONCAT42(uStack_1bc,uStack_1be)));
      *param_1 = local_1c8;
      param_1[1] = bStack_1c7;
      return;
    }
    if ((bStack_1c7 & 1) != 0) {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\x01';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      *param_1 = '8';
      return;
    }
    _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E
              (&local_1c8,param_2,plVar8[1]);
    if (local_1c8 == '8') {
      local_158._4_4_ = CONCAT13(uStack_1c0,local_158._4_3_);
      uStack_150 = (undefined4)
                   (CONCAT44(uStack_1bc,CONCAT22(uStack_1be,CONCAT11(uStack_1bf,uStack_1c0))) >> 8);
      uStack_1bc = CONCAT13(uStack_1b8,(int3)((uint)uStack_1bc >> 8));
      uStack_148 = (undefined7)
                   (CONCAT44(uStack_1b4,CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8))) >> 8);
      uStack_141 = (undefined)uStack_1b0;
      uStack_140 = (undefined7)(CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0)) >> 8);
      *param_1 = '\x02';
      uStack_58 = CONCAT71(uStack_148,uStack_1b8);
      local_50 = CONCAT71(uStack_140,uStack_141);
LAB_0036604d:
      *(undefined4 *)(param_1 + 1) = (undefined4)local_158;
      *(undefined4 *)(param_1 + 5) = local_158._4_4_;
      *(undefined4 *)(param_1 + 9) = uStack_150;
      *(undefined4 *)(param_1 + 0xd) = uStack_1bc;
      *(undefined8 *)(param_1 + 0x10) = uStack_58;
      *(undefined8 *)(param_1 + 0x18) = local_50;
      return;
    }
LAB_00365f05:
    uVar1 = CONCAT13(uStack_1c4,CONCAT21(uStack_1c6,bStack_1c7));
    uVar2 = CONCAT43(uStack_1bc,CONCAT21(uStack_1be,uStack_1bf));
    uStack_108 = (undefined3)(CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8)) >> 8);
    uStack_101 = (undefined)uStack_1b0;
    uStack_100 = (undefined7)(CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0)) >> 8);
    local_118._4_4_ =
         (undefined4)(CONCAT17(uStack_1c0,CONCAT16(uStack_1c1,CONCAT24(uStack_1c3,uVar1))) >> 0x20);
    uStack_110 = (undefined4)uVar2;
    uStack_10c = (undefined4)(CONCAT17(uStack_1b8,uVar2) >> 0x20);
    *(ulong *)(param_1 + 0x60) = CONCAT62(uStack_166,local_168);
    *(ulong *)(param_1 + 0x50) = CONCAT62(uStack_176,local_178);
    *(ulong *)(param_1 + 0x58) = CONCAT62(uStack_16e,uStack_170);
    *(ulong *)(param_1 + 0x40) = CONCAT62(uStack_186,local_188);
    *(ulong *)(param_1 + 0x48) = CONCAT62(uStack_17e,uStack_180);
    *(ulong *)(param_1 + 0x30) = CONCAT62(uStack_196,local_198);
    *(ulong *)(param_1 + 0x38) = CONCAT62(uStack_18e,uStack_190);
    *(ulong *)(param_1 + 0x20) = CONCAT62(uStack_1a6,local_1a8);
    *(ulong *)(param_1 + 0x28) = CONCAT62(uStack_19e,uStack_1a0);
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_1b4,CONCAT31(uStack_108,uStack_1b8));
    *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_100,uStack_101);
    *(ulong *)(param_1 + 1) = CONCAT44(local_118._4_4_,uVar1);
    *(ulong *)(param_1 + 9) = CONCAT44(uStack_10c,uStack_110);
    *param_1 = local_1c8;
    return;
  case 9:
switchD_00365333_caseD_9:
    local_158 = plVar8 + 1;
    if (*(char *)(*param_2 + 0x198) == '\0') {
      _ZN4just9evaluator9Evaluator12run_backtick17h68d1c4adb40306f8E
                (&local_1c8,param_2,plVar8[2],plVar8[3],plVar8 + 4);
      if (local_1c8 != '8') goto LAB_00365f05;
      local_48 = CONCAT22(uStack_1be,CONCAT11(uStack_1bf,uStack_1c0));
      uStack_40 = CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8));
      *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0));
      uStack_44 = uStack_1bc;
      uStack_3c = uStack_1b4;
    }
    else {
      local_118 = &local_158;
      uStack_110 = 0x2f16b0;
      uStack_10c = 0;
      local_1c8 = ' ';
      bStack_1c7 = 0xfb;
      uStack_1c6 = 0x52;
      uStack_1c4 = 0;
      uStack_1c3 = 0;
      uStack_1c1 = 0;
      uStack_1c0 = 2;
      uStack_1bf = 0;
      uStack_1be = 0;
      uStack_1bc = 0;
      local_1a8 = 0;
      uStack_1a6 = 0;
      uStack_1b8 = SUB81(&local_118,0);
      uStack_1b7 = (undefined)((ulong)&local_118 >> 8);
      uStack_1b6 = (undefined2)((ulong)&local_118 >> 0x10);
      uStack_1b4 = (undefined4)((ulong)&local_118 >> 0x20);
      uStack_1b0 = 1;
      uStack_1ae = 0;
      uStack_1a9 = 0;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
                (&local_78,0,param_3,&local_1c8);
      *(undefined8 *)(param_1 + 0x18) = local_68;
      local_48 = local_78;
      uStack_44 = uStack_74;
      uStack_40 = uStack_70;
      uStack_3c = uStack_6c;
    }
    break;
  default:
switchD_00365333_caseD_a:
                    /* WARNING: Could not recover jumptable at 0x00365343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0016a788 + *(int *)(&DAT_0016a788 + lVar7 * 4)))();
    return;
  case 0xb:
switchD_00365333_caseD_b:
    _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E
              (&local_1c8,param_2,plVar8[1]);
    if (local_1c8 != '8') goto LAB_00365f05;
    local_128 = CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0));
    local_138._0_4_ = CONCAT22(uStack_1be,CONCAT11(uStack_1bf,uStack_1c0));
    uStack_130 = CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8));
    local_138._4_4_ = uStack_1bc;
    uStack_12c = uStack_1b4;
                    /* try { // try from 0036619c to 003661a8 has its CatchHandler @ 00366223 */
    _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E
              (&local_1c8,param_2,plVar8[2]);
    uVar1 = uStack_1b4;
    if (local_1c8 != '8') goto LAB_00366231;
    uStack_101 = (undefined)uStack_1b0;
    uStack_100 = (undefined7)(CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0)) >> 8);
    uVar3 = CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8));
    local_158._4_4_ = uStack_1bc;
    uStack_14c = uStack_1b4;
    uStack_1b8 = (undefined)local_128;
    uStack_1b7 = (undefined)((ulong)local_128 >> 8);
    uStack_1b6 = (undefined2)((ulong)local_128 >> 0x10);
    uStack_1b4 = (undefined4)((ulong)local_128 >> 0x20);
    local_1c8 = (char)(undefined4)local_138;
    bStack_1c7 = (byte)((uint)(undefined4)local_138 >> 8);
    uStack_1c6 = (undefined2)((uint)(undefined4)local_138 >> 0x10);
    uStack_1c4 = (undefined)local_138._4_4_;
    uStack_1c3 = (undefined2)((uint)local_138._4_4_ >> 8);
    uStack_1c1 = (undefined)((uint)local_138._4_4_ >> 0x18);
    uStack_1c0 = (undefined)uStack_130;
    uStack_1bf = (undefined)((uint)uStack_130 >> 8);
    uStack_1be = (undefined2)((uint)uStack_130 >> 0x10);
    uStack_1bc = uStack_12c;
                    /* try { // try from 003661f6 to 00366207 has its CatchHandler @ 0036621e */
    _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17hd8bff7acee645ba5E
              (&local_118,&local_1c8,CONCAT44(uVar1,uVar3));
    *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_101,CONCAT43(uStack_105,uStack_108));
    local_f8 = (undefined4)local_118;
    uStack_f4 = local_118._4_4_;
    uStack_f0 = uStack_110;
    uStack_ec = uStack_10c;
    goto LAB_00366228;
  case 0xc:
switchD_00365333_caseD_c:
    _ZN4just9evaluator9Evaluator18evaluate_condition17hff24f5aa7f9c2ad8E
              (&local_1c8,param_2,plVar8 + 3);
    if (local_1c8 != '8') goto LAB_003663db;
    lVar4 = (ulong)((byte)~bStack_1c7 & 1) * 8 + 8;
    param_3 = extraout_RDX;
switchD_00365333_caseD_d:
    plVar8 = *(long **)((long)plVar8 + lVar4);
    lVar7 = *plVar8;
    lVar4 = 8;
    switch(lVar7) {
    case 7:
      goto switchD_00365333_caseD_7;
    case 8:
      goto switchD_00365333_caseD_8;
    case 9:
      goto switchD_00365333_caseD_9;
    default:
      goto switchD_00365333_caseD_a;
    case 0xb:
      goto switchD_00365333_caseD_b;
    case 0xc:
      goto switchD_00365333_caseD_c;
    case 0xd:
      goto switchD_00365333_caseD_d;
    case 0xe:
      goto switchD_00365333_caseD_e;
    case 0xf:
      goto switchD_00365333_caseD_f;
    case 0x10:
      goto switchD_00365333_caseD_10;
    case 0x11:
      goto switchD_00365333_caseD_11;
    }
  case 0xd:
    goto switchD_00365333_caseD_d;
  case 0xe:
switchD_00365333_caseD_e:
    if (plVar8[2] == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_138,&DAT_0016c111,1);
                    /* try { // try from 003664ff to 0036650b has its CatchHandler @ 003666f1 */
      _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E
                (&local_1c8,param_2,plVar8[1]);
      if (local_1c8 != '8') {
LAB_00366231:
        uVar1 = CONCAT13(uStack_1c4,CONCAT21(uStack_1c6,bStack_1c7));
        uVar2 = CONCAT43(uStack_1bc,CONCAT21(uStack_1be,uStack_1bf));
        uStack_108 = (undefined3)(CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8)) >> 8);
        uStack_105 = uStack_1b4;
        uStack_101 = (undefined)uStack_1b0;
        uStack_100 = (undefined7)(CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0)) >> 8);
        local_118._4_4_ =
             (undefined4)
             (CONCAT17(uStack_1c0,CONCAT16(uStack_1c1,CONCAT24(uStack_1c3,uVar1))) >> 0x20);
        uStack_110 = (undefined4)uVar2;
        uStack_10c = (undefined4)(CONCAT17(uStack_1b8,uVar2) >> 0x20);
        *(ulong *)(param_1 + 0x60) = CONCAT62(uStack_166,local_168);
        *(ulong *)(param_1 + 0x50) = CONCAT62(uStack_176,local_178);
        *(ulong *)(param_1 + 0x58) = CONCAT62(uStack_16e,uStack_170);
        *(ulong *)(param_1 + 0x40) = CONCAT62(uStack_186,local_188);
        *(ulong *)(param_1 + 0x48) = CONCAT62(uStack_17e,uStack_180);
        *(ulong *)(param_1 + 0x30) = CONCAT62(uStack_196,local_198);
        *(ulong *)(param_1 + 0x38) = CONCAT62(uStack_18e,uStack_190);
        *(ulong *)(param_1 + 0x20) = CONCAT62(uStack_1a6,local_1a8);
        *(ulong *)(param_1 + 0x28) = CONCAT62(uStack_19e,uStack_1a0);
        *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_1b4,CONCAT31(uStack_108,uStack_1b8));
        *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_100,uStack_101);
        *(undefined4 *)(param_1 + 1) = uVar1;
        *(undefined4 *)(param_1 + 5) = local_118._4_4_;
        *(undefined4 *)(param_1 + 9) = uStack_110;
        *(undefined4 *)(param_1 + 0xd) = uStack_10c;
        *param_1 = local_1c8;
        puVar6 = &local_138;
        goto LAB_00365f8e;
      }
      uStack_101 = (undefined)uStack_1b0;
      uStack_100 = (undefined7)(CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0)) >> 8);
      uVar1 = CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8));
      local_118._4_4_ = CONCAT13(uStack_1c0,local_118._4_3_);
      uStack_110._3_1_ = (undefined)uStack_1bc;
      uStack_110 = CONCAT13(uStack_110._3_1_,
                            (int3)(CONCAT22(uStack_1be,CONCAT11(uStack_1bf,uStack_1c0)) >> 8));
      uStack_10c = CONCAT13(uStack_1b8,(int3)((uint)uStack_1bc >> 8));
      uStack_108 = (undefined3)((uint)uVar1 >> 8);
      uStack_105 = uStack_1b4;
      local_158._4_4_ = uStack_1bc;
      uStack_14c = uStack_1b4;
                    /* try { // try from 0036654b to 0036655f has its CatchHandler @ 003666dd */
      _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17hd8bff7acee645ba5E
                (&local_f8,&local_138,CONCAT44(uStack_1b4,uVar1));
      *(undefined8 *)(param_1 + 0x18) = local_e8;
    }
    else {
      _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E(&local_1c8,param_2);
      if (local_1c8 != '8') goto LAB_00365f05;
      local_128 = CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0));
      local_138._0_4_ = CONCAT22(uStack_1be,CONCAT11(uStack_1bf,uStack_1c0));
      uStack_130 = CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8));
      local_138._4_4_ = uStack_1bc;
      uStack_12c = uStack_1b4;
                    /* try { // try from 0036633a to 00366346 has its CatchHandler @ 003666ec */
      _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E
                (&local_1c8,param_2,plVar8[1]);
      if (local_1c8 != '8') goto LAB_00366231;
      uStack_148 = CONCAT52(uStack_1ae,uStack_1b0);
      uStack_150 = CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8));
      local_158._4_4_ = uStack_1bc;
      uStack_14c = uStack_1b4;
      uStack_141 = uStack_1a9;
      uStack_1b8 = (undefined)local_128;
      uStack_1b7 = (undefined)((ulong)local_128 >> 8);
      uStack_1b6 = (undefined2)((ulong)local_128 >> 0x10);
      uStack_1b4 = (undefined4)((ulong)local_128 >> 0x20);
      local_1c8 = (char)(undefined4)local_138;
      bStack_1c7 = (byte)((uint)(undefined4)local_138 >> 8);
      uStack_1c6 = (undefined2)((uint)(undefined4)local_138 >> 0x10);
      uStack_1c4 = (undefined)local_138._4_4_;
      uStack_1c3 = (undefined2)((uint)local_138._4_4_ >> 8);
      uStack_1c1 = (undefined)((uint)local_138._4_4_ >> 0x18);
      uStack_1c0 = (undefined)uStack_130;
      uStack_1bf = (undefined)((uint)uStack_130 >> 8);
      uStack_1be = (undefined2)((uint)uStack_130 >> 0x10);
      uStack_1bc = uStack_12c;
                    /* try { // try from 00366388 to 003663c7 has its CatchHandler @ 003666e7 */
      _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17hd8bff7acee645ba5E
                (&local_118,&local_1c8,&DAT_0016c111,1);
      _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17hd8bff7acee645ba5E
                (&local_1c8,&local_118,CONCAT44(uStack_14c,uStack_150),
                 CONCAT17(uStack_141,uStack_148));
      *(ulong *)(param_1 + 0x18) =
           CONCAT44(uStack_1b4,CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8)));
      local_f8 = CONCAT22(uStack_1c6,CONCAT11(bStack_1c7,local_1c8));
      uStack_f4 = CONCAT13(uStack_1c1,CONCAT21(uStack_1c3,uStack_1c4));
      uStack_f0 = CONCAT22(uStack_1be,CONCAT11(uStack_1bf,uStack_1c0));
      uStack_ec = uStack_1bc;
    }
LAB_00366228:
    *(undefined4 *)(param_1 + 8) = local_f8;
    *(undefined4 *)(param_1 + 0xc) = uStack_f4;
    *(undefined4 *)(param_1 + 0x10) = uStack_f0;
    *(undefined4 *)(param_1 + 0x14) = uStack_ec;
LAB_00365f83:
    *param_1 = '8';
LAB_00365f86:
    puVar6 = &local_158;
LAB_00365f8e:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(puVar6);
    return;
  case 0xf:
switchD_00365333_caseD_f:
    _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E
              (&local_1c8,param_2,plVar8[1]);
    if (local_1c8 != '8') goto LAB_00365f05;
    local_48 = CONCAT22(uStack_1be,CONCAT11(uStack_1bf,uStack_1c0));
    uStack_40 = CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8));
    local_158._4_4_ = uStack_1bc;
    uStack_14c = uStack_1b4;
    if (CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0)) != 0) {
      *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0));
      uStack_44 = uStack_1bc;
      uStack_3c = uStack_1b4;
      break;
    }
                    /* try { // try from 00366682 to 0036668c has its CatchHandler @ 003666e2 */
    _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E(param_1,param_2,plVar8[2])
    ;
    goto LAB_00365f86;
  case 0x10:
switchD_00365333_caseD_10:
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00565d98
    )(&local_1c8,plVar8 + 1);
    *(ulong *)(param_1 + 0x18) =
         CONCAT44(uStack_1b4,CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8)));
    local_48 = CONCAT22(uStack_1c6,CONCAT11(bStack_1c7,local_1c8));
    uStack_44 = CONCAT13(uStack_1c1,CONCAT21(uStack_1c3,uStack_1c4));
    uStack_40 = CONCAT22(uStack_1be,CONCAT11(uStack_1bf,uStack_1c0));
    uStack_3c = uStack_1bc;
    break;
  case 0x11:
switchD_00365333_caseD_11:
    auVar9 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(plVar8 + 1);
    local_158._0_4_ = auVar9._0_4_;
    local_158._4_4_ = auVar9._4_4_;
    uStack_150 = auVar9._8_4_;
    uStack_14c = auVar9._12_4_;
    auVar10 = _ZN4just5scope5Scope5value17hb06d4bb986c3514eE(param_2 + 5,auVar9._0_8_);
    uVar5 = auVar10._8_8_;
    if (auVar10._0_8_ == 0) {
      puVar6 = (undefined8 *)param_2[4];
      if (puVar6 != (undefined8 *)0x0) {
        auVar9 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h62a22d89973a7e72E
                           (*puVar6,puVar6[1],auVar9._0_8_,auVar9._8_8_);
        uVar5 = auVar9._8_8_;
        if (auVar9._0_8_ != 0) {
          _ZN4just9evaluator9Evaluator19evaluate_assignment17h6f66c21b7dd7e3b7E
                    (&local_1c8,param_2,auVar9._0_8_);
          if (local_1c8 != '8') {
            *(uint *)(param_1 + 4) = CONCAT13(uStack_1c1,CONCAT21(uStack_1c3,uStack_1c4));
            *(uint *)(param_1 + 1) = CONCAT13(uStack_1c4,CONCAT21(uStack_1c6,bStack_1c7));
            *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_1a9,CONCAT52(uStack_1ae,uStack_1b0));
            *(ulong *)(param_1 + 0x20) = CONCAT62(uStack_1a6,local_1a8);
            *(ulong *)(param_1 + 0x28) = CONCAT62(uStack_19e,uStack_1a0);
            *(ulong *)(param_1 + 0x30) = CONCAT62(uStack_196,local_198);
            *(ulong *)(param_1 + 0x38) = CONCAT62(uStack_18e,uStack_190);
            *(ulong *)(param_1 + 0x40) = CONCAT62(uStack_186,local_188);
            *(ulong *)(param_1 + 0x48) = CONCAT62(uStack_17e,uStack_180);
            *(ulong *)(param_1 + 0x50) = CONCAT62(uStack_176,local_178);
            *(ulong *)(param_1 + 0x58) = CONCAT62(uStack_16e,uStack_170);
            *(ulong *)(param_1 + 0x60) = CONCAT62(uStack_166,local_168);
            *param_1 = local_1c8;
            *(ulong *)(param_1 + 8) =
                 CONCAT44(uStack_1bc,CONCAT22(uStack_1be,CONCAT11(uStack_1bf,uStack_1c0)));
            *(ulong *)(param_1 + 0x10) =
                 CONCAT44(uStack_1b4,CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8)));
            return;
          }
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                    (&local_118,
                     CONCAT44(uStack_1bc,CONCAT22(uStack_1be,CONCAT11(uStack_1bf,uStack_1c0))),
                     CONCAT44(uStack_1b4,CONCAT22(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8))));
          *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_101,CONCAT43(uStack_105,uStack_108));
          local_48 = (undefined4)local_118;
          uStack_44 = local_118._4_4_;
          uStack_40 = uStack_110;
          uStack_3c = uStack_10c;
          break;
        }
      }
      local_118 = &local_158;
      uStack_110 = 0x2f1890;
      uStack_10c = 0;
      local_1c8 = '@';
      bStack_1c7 = 0xfb;
      uStack_1c6 = 0x52;
      uStack_1c4 = 0;
      uStack_1c3 = 0;
      uStack_1c1 = 0;
      uStack_1c0 = 2;
      uStack_1bf = 0;
      uStack_1be = 0;
      uStack_1bc = 0;
      local_1a8 = 0;
      uStack_1a6 = 0;
      uStack_1b8 = SUB81(&local_118,0);
      uStack_1b7 = (undefined)((ulong)&local_118 >> 8);
      uStack_1b6 = (undefined2)((ulong)&local_118 >> 0x10);
      uStack_1b4 = (undefined4)((ulong)&local_118 >> 0x20);
      uStack_1b0 = 1;
      uStack_1ae = 0;
      uStack_1a9 = 0;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E(local_60,0,uVar5,&local_1c8)
      ;
      uStack_1c1 = local_60[0];
      uStack_1bc._0_3_ = local_60._5_3_;
      uStack_1bc._3_1_ = (undefined)uStack_58;
      *param_1 = '\x1d';
      local_158._0_4_ = CONCAT22(uStack_1c6,CONCAT11(bStack_1c7,local_1c8));
      local_158._4_4_ = CONCAT13(uStack_1c1,CONCAT21(uStack_1c3,uStack_1c4));
      uStack_150 = local_60._1_4_;
      goto LAB_0036604d;
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_48,auVar10._0_8_);
    *(undefined8 *)(param_1 + 0x18) = local_38;
  }
  *(undefined4 *)(param_1 + 8) = local_48;
  *(undefined4 *)(param_1 + 0xc) = uStack_44;
  *(undefined4 *)(param_1 + 0x10) = uStack_40;
  *(undefined4 *)(param_1 + 0x14) = uStack_3c;
  *param_1 = '8';
  return;
}