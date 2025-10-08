void _ZN4just8justfile8Justfile10run_recipe17h13dd814e0c2e2885E
               (char *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
               ulong param_6,undefined8 param_7,long param_8,undefined8 *param_9,undefined8 param_10
               )

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  byte extraout_DL;
  undefined auVar7 [16];
  char local_1a8;
  uint local_1a7;
  undefined uStack_1a3;
  undefined2 uStack_1a2;
  undefined local_1a0;
  undefined4 uStack_19f;
  undefined uStack_19b;
  undefined2 uStack_19a;
  undefined uStack_198;
  undefined4 uStack_197;
  undefined4 uStack_193;
  undefined4 uStack_18f;
  undefined4 uStack_18b;
  undefined4 uStack_187;
  undefined4 uStack_183;
  undefined uStack_17f;
  undefined2 uStack_17e;
  undefined4 uStack_17c;
  undefined uStack_178;
  undefined uStack_177;
  undefined2 uStack_176;
  undefined4 uStack_174;
  undefined local_170;
  undefined4 uStack_16f;
  undefined4 uStack_16b;
  undefined local_167;
  undefined6 uStack_166;
  undefined uStack_160;
  undefined uStack_15f;
  undefined6 uStack_15e;
  undefined uStack_158;
  undefined local_157;
  undefined6 uStack_156;
  undefined uStack_150;
  undefined uStack_14f;
  undefined6 uStack_14e;
  undefined uStack_148;
  undefined uStack_147;
  undefined6 uStack_146;
  long local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined7 uStack_d8;
  undefined4 local_d1;
  undefined4 uStack_cd;
  uint uStack_c9;
  undefined4 uStack_c5;
  undefined7 uStack_c0;
  undefined uStack_b9;
  undefined8 *local_b8;
  undefined local_b0;
  ulong local_a0;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined local_74;
  undefined8 local_70;
  undefined8 local_60;
  undefined local_58 [8];
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_140 = _ZN4just3ran3Ran5mutex17heea021f2ce4a14a7E(param_7,param_8,param_2,param_3);
                    /* try { // try from 0036eecf to 0036eee2 has its CatchHandler @ 0036f493 */
  _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17hb47545a45a83d034E(&local_1a8,local_140 + 0x10);
  lVar5 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h269726c6fb11b939E(&local_1a8);
  if (*(char *)(lVar5 + 5) != '\0') {
    *param_1 = '8';
    goto LAB_0036f3bc;
  }
  if (*(char *)(param_4 + 0x1a5) == '\0') {
    _ZN4just6recipe15Recipe_LT_D_GT_7confirm17hf942a5381005005cE(&local_1a8,param_8);
    if (local_1a8 != '8') {
      *(ulong *)(param_1 + 0x60) = CONCAT62(uStack_146,CONCAT11(uStack_147,uStack_148));
      *(ulong *)(param_1 + 0x52) = CONCAT17(uStack_14f,CONCAT16(uStack_150,uStack_156));
      *(ulong *)(param_1 + 0x5a) = CONCAT17(uStack_147,CONCAT16(uStack_148,uStack_14e));
      *(ulong *)(param_1 + 0x42) = CONCAT17(uStack_15f,CONCAT16(uStack_160,uStack_166));
      *(ulong *)(param_1 + 0x4a) = CONCAT17(local_157,CONCAT16(uStack_158,uStack_15e));
      *(ulong *)(param_1 + 0x32) =
           CONCAT17((undefined)uStack_16f,CONCAT16(local_170,CONCAT42(uStack_174,uStack_176)));
      *(ulong *)(param_1 + 0x3a) = CONCAT17(local_167,CONCAT43(uStack_16b,uStack_16f._1_3_));
      *(ulong *)(param_1 + 0x22) = CONCAT17(uStack_17f,CONCAT43(uStack_183,uStack_187._1_3_));
      *(ulong *)(param_1 + 0x2a) =
           CONCAT17(uStack_177,CONCAT16(uStack_178,CONCAT42(uStack_17c,uStack_17e)));
      *(ulong *)(param_1 + 0x12) =
           CONCAT17((undefined)uStack_18f,CONCAT43(uStack_193,uStack_197._1_3_));
      *(ulong *)(param_1 + 0x1a) =
           CONCAT17((undefined)uStack_187,CONCAT43(uStack_18b,uStack_18f._1_3_));
      *(uint *)(param_1 + 2) = CONCAT13(uStack_1a3,local_1a7._1_3_);
      *(uint *)(param_1 + 6) = CONCAT13((undefined)uStack_19f,CONCAT12(local_1a0,uStack_1a2));
      *(uint *)(param_1 + 10) = CONCAT13(uStack_19b,uStack_19f._1_3_);
      *(uint *)(param_1 + 0xe) = CONCAT13((undefined)uStack_197,CONCAT12(uStack_198,uStack_19a));
      *param_1 = local_1a8;
      param_1[1] = (char)local_1a7;
      goto LAB_0036f3bc;
    }
    if ((local_1a7 & 1) == 0) {
      auVar7 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                         (param_8 + 0x90);
      *param_1 = '&';
      *(undefined (*) [16])(param_1 + 8) = auVar7;
      goto LAB_0036f3bc;
    }
  }
                    /* try { // try from 0036ef0c to 0036ef99 has its CatchHandler @ 0036f4e4 */
  auVar7 = _ZN4just6recipe6Recipe11module_path17h2114682f44294136E(param_8);
  puVar6 = (undefined8 *)
           _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17hd770162b19fb0ee2E
                     (*param_9,param_9[1],auVar7._0_8_,auVar7._8_8_);
  if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 0036f447 to 0036f45f has its CatchHandler @ 0036f4e4 */
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_005660a8)
              (&DAT_00171190,0x23,&PTR_s_src_justfile_rs_______00530280);
LAB_0036f475:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_128 = *puVar6;
  uStack_120 = param_10;
  local_a0 = param_6 & 0xff;
  local_138 = param_4;
  uStack_130 = param_5;
  _ZN4just9evaluator9Evaluator19evaluate_parameters17ha5b7a1a22f5cd100E
            (&local_1a8,&local_138,local_a0,param_2,param_3,*(undefined8 *)(param_8 + 0x50),
             *(undefined8 *)(param_8 + 0x58),puVar6[1]);
  if (local_1a8 != '8') {
    uStack_c5 = uStack_174;
    uStack_c0 = (undefined7)(CONCAT35((undefined3)uStack_16b,CONCAT41(uStack_16f,local_170)) >> 8);
    uStack_d8 = (undefined7)CONCAT44(uStack_183,uStack_187);
    local_d1 = CONCAT31(CONCAT21(uStack_17e,uStack_17f),uStack_183._3_1_);
    uStack_cd = uStack_17c;
    uStack_c9 = CONCAT31((int3)(CONCAT22(uStack_176,CONCAT11(uStack_177,uStack_178)) >> 8),
                         uStack_178);
    uStack_e8 = uStack_197;
    uStack_e4 = uStack_193;
    uStack_e0 = uStack_18f;
    uStack_dc = uStack_18b;
    local_f8 = local_1a7;
    uStack_f4 = (undefined4)
                (CONCAT17(local_1a0,CONCAT25(uStack_1a2,CONCAT14(uStack_1a3,local_1a7))) >> 0x20);
    uStack_f0 = uStack_19f;
    uStack_ec = (undefined4)
                (CONCAT17(uStack_198,CONCAT25(uStack_19a,CONCAT14(uStack_19b,uStack_19f))) >> 0x20);
    *(ulong *)(param_1 + 0x60) = CONCAT62(uStack_146,CONCAT11(uStack_147,uStack_148));
    *(ulong *)(param_1 + 0x50) = CONCAT62(uStack_156,CONCAT11(local_157,uStack_158));
    *(ulong *)(param_1 + 0x58) = CONCAT62(uStack_14e,CONCAT11(uStack_14f,uStack_150));
    *(ulong *)(param_1 + 0x40) = CONCAT62(uStack_166,CONCAT11(local_167,uStack_16b._3_1_));
    *(ulong *)(param_1 + 0x48) = CONCAT62(uStack_15e,CONCAT11(uStack_15f,uStack_160));
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_174,uStack_c9);
    *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_c0,local_170);
    *(ulong *)(param_1 + 0x21) = CONCAT17(uStack_183._3_1_,uStack_d8);
    *(ulong *)(param_1 + 0x29) =
         CONCAT17(uStack_178,CONCAT43(uStack_17c,CONCAT21(uStack_17e,uStack_17f)));
    *(ulong *)(param_1 + 0x11) = CONCAT44(uStack_193,uStack_197);
    *(ulong *)(param_1 + 0x19) = CONCAT44(uStack_18b,uStack_18f);
    *(uint *)(param_1 + 1) = local_1a7;
    *(undefined4 *)(param_1 + 5) = uStack_f4;
    *(undefined4 *)(param_1 + 9) = uStack_19f;
    *(undefined4 *)(param_1 + 0xd) = uStack_ec;
    *param_1 = local_1a8;
    goto LAB_0036f3bc;
  }
  local_108 = CONCAT35((undefined3)uStack_16b,CONCAT41(uStack_16f,local_170));
  uStack_50 = CONCAT35((undefined3)uStack_193,CONCAT41(uStack_197,uStack_198));
  local_48 = CONCAT35((undefined3)uStack_18b,CONCAT41(uStack_18f,uStack_193._3_1_));
  uStack_40 = CONCAT35((undefined3)uStack_183,CONCAT41(uStack_187,uStack_18b._3_1_));
  local_118 = CONCAT22(uStack_17e,CONCAT11(uStack_17f,uStack_183._3_1_));
  uStack_110 = CONCAT22(uStack_176,CONCAT11(uStack_177,uStack_178));
  uStack_c5 = uStack_174;
  uStack_114 = uStack_17c;
  uStack_10c = uStack_174;
  local_98[0] = 0;
  local_88 = 0;
  local_80 = local_58;
  uStack_d8 = 0;
  local_d1 = 0;
  uStack_cd = 0;
  uStack_c9 = uStack_110 & 0xffffff00;
  local_f8 = (uint)local_138;
  uStack_f4 = local_138._4_4_;
  uStack_f0 = (undefined4)uStack_130;
  uStack_ec = uStack_130._4_4_;
  uStack_e8 = (undefined4)local_128;
  uStack_e4 = local_128._4_4_;
  uStack_e0 = (undefined4)uStack_120;
  uStack_dc = uStack_120._4_4_;
  local_b0 = 1;
  uStack_c0 = 0;
  uStack_b9 = 0;
  local_b8 = local_98;
  uVar1 = *(ulong *)(param_8 + 0xf0);
  lVar2 = *(long *)(param_8 + 0x20);
  uVar3 = *(ulong *)(param_8 + 0x28);
                    /* try { // try from 0036f081 to 0036f120 has its CatchHandler @ 0036f4ab */
  auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hd2d1f379cc75c597E
                     (uVar1,lVar2,uVar3);
  _ZN4just8justfile8Justfile16run_dependencies17h985cd0506c66477fE
            (&local_1a8,param_4,&local_138,auVar7._0_8_,auVar7._8_8_,param_5,&local_f8,param_7,
             param_8,param_9,param_10);
  if (local_1a8 == '8') {
    _ZN4just6recipe15Recipe_LT_D_GT_3run17hef557c87b94c38c2E
              (&local_1a8,param_8,&local_138,local_98,CONCAT44(uStack_10c,uStack_110),local_108,
               local_a0);
    if (local_1a8 != '8') goto LAB_0036f33d;
    if (uVar3 < uVar1) {
                    /* try { // try from 0036f462 to 0036f474 has its CatchHandler @ 0036f4ab */
      (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_00566048)
                (uVar1,uVar3,&PTR_DAT_005302b0);
      goto LAB_0036f475;
    }
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_60 = 0;
                    /* try { // try from 0036f16c to 0036f1b2 has its CatchHandler @ 0036f477 */
    _ZN4just8justfile8Justfile16run_dependencies17h985cd0506c66477fE
              (&local_1a8,param_4,&local_138,lVar2 + uVar1 * 0x20,uVar3 - uVar1,param_5,&local_f8,
               &local_78,param_8,param_9,param_10);
    if (local_1a8 == '8') {
                    /* try { // try from 0036f1c0 to 0036f1cc has its CatchHandler @ 0036f4ab */
      _ZN4core3ptr35drop_in_place_LT_just__ran__Ran_GT_17h351cc0e2f6e1536fE(&local_78);
      *(undefined *)(lVar5 + 5) = 1;
      *param_1 = '8';
                    /* try { // try from 0036f1da to 0036f1e6 has its CatchHandler @ 0036f48e */
      _ZN4core3ptr47drop_in_place_LT_just__evaluator__Evaluator_GT_17he8a263daf6e01e97E(&local_f8);
                    /* try { // try from 0036f1e7 to 0036f1f3 has its CatchHandler @ 0036f489 */
      _ZN4core3ptr39drop_in_place_LT_just__scope__Scope_GT_17h7ff7b84fe4911a9fE(local_98);
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h766f1f48926327acE
                (&local_118);
                    /* try { // try from 0036f201 to 0036f24a has its CatchHandler @ 0036f4e4 */
      _ZN4core3ptr39drop_in_place_LT_just__scope__Scope_GT_17h7ff7b84fe4911a9fE(local_58);
      goto LAB_0036f3bc;
    }
    *(ulong *)(param_1 + 0x60) = CONCAT62(uStack_146,CONCAT11(uStack_147,uStack_148));
    *(ulong *)(param_1 + 0x51) = CONCAT17(uStack_150,CONCAT61(uStack_156,local_157));
    *(ulong *)(param_1 + 0x59) = CONCAT17(uStack_148,CONCAT61(uStack_14e,uStack_14f));
    *(ulong *)(param_1 + 0x41) = CONCAT17(uStack_160,CONCAT61(uStack_166,local_167));
    *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_158,CONCAT61(uStack_15e,uStack_15f));
    *(uint *)(param_1 + 0x31) = CONCAT13((undefined)uStack_174,CONCAT21(uStack_176,uStack_177));
    *(uint *)(param_1 + 0x35) = CONCAT13(local_170,uStack_174._1_3_);
    *(undefined4 *)(param_1 + 0x39) = uStack_16f;
    *(undefined4 *)(param_1 + 0x3d) = uStack_16b;
    *(undefined4 *)(param_1 + 0x21) = uStack_187;
    *(undefined4 *)(param_1 + 0x25) = uStack_183;
    *(uint *)(param_1 + 0x29) = CONCAT13((undefined)uStack_17c,CONCAT21(uStack_17e,uStack_17f));
    *(uint *)(param_1 + 0x2d) = CONCAT13(uStack_178,uStack_17c._1_3_);
    *(undefined4 *)(param_1 + 0x11) = uStack_197;
    *(undefined4 *)(param_1 + 0x15) = uStack_193;
    *(undefined4 *)(param_1 + 0x19) = uStack_18f;
    *(undefined4 *)(param_1 + 0x1d) = uStack_18b;
    *(uint *)(param_1 + 1) = local_1a7;
    *(uint *)(param_1 + 5) = CONCAT13(local_1a0,CONCAT21(uStack_1a2,uStack_1a3));
    *(undefined4 *)(param_1 + 9) = uStack_19f;
    *(uint *)(param_1 + 0xd) = CONCAT13(uStack_198,CONCAT21(uStack_19a,uStack_19b));
    *param_1 = local_1a8;
                    /* try { // try from 0036f435 to 0036f441 has its CatchHandler @ 0036f4ab */
    _ZN4core3ptr35drop_in_place_LT_just__ran__Ran_GT_17h351cc0e2f6e1536fE(&local_78);
  }
  else {
LAB_0036f33d:
    *(ulong *)(param_1 + 0x60) = CONCAT62(uStack_146,CONCAT11(uStack_147,uStack_148));
    *(ulong *)(param_1 + 0x51) = CONCAT17(uStack_150,CONCAT61(uStack_156,local_157));
    *(ulong *)(param_1 + 0x59) = CONCAT17(uStack_148,CONCAT61(uStack_14e,uStack_14f));
    *(ulong *)(param_1 + 0x41) = CONCAT17(uStack_160,CONCAT61(uStack_166,local_167));
    *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_158,CONCAT61(uStack_15e,uStack_15f));
    *(ulong *)(param_1 + 0x31) =
         CONCAT17(local_170,CONCAT43(uStack_174,CONCAT21(uStack_176,uStack_177)));
    *(ulong *)(param_1 + 0x39) = CONCAT44(uStack_16b,uStack_16f);
    *(ulong *)(param_1 + 0x21) = CONCAT44(uStack_183,uStack_187);
    *(ulong *)(param_1 + 0x29) =
         CONCAT17(uStack_178,CONCAT43(uStack_17c,CONCAT21(uStack_17e,uStack_17f)));
    *(ulong *)(param_1 + 0x11) = CONCAT44(uStack_193,uStack_197);
    *(ulong *)(param_1 + 0x19) = CONCAT44(uStack_18b,uStack_18f);
    *(uint *)(param_1 + 1) = local_1a7;
    *(uint *)(param_1 + 5) = CONCAT13(local_1a0,CONCAT21(uStack_1a2,uStack_1a3));
    *(undefined4 *)(param_1 + 9) = uStack_19f;
    *(uint *)(param_1 + 0xd) = CONCAT13(uStack_198,CONCAT21(uStack_19a,uStack_19b));
    *param_1 = local_1a8;
  }
                    /* try { // try from 0036f388 to 0036f394 has its CatchHandler @ 0036f48e */
  _ZN4core3ptr47drop_in_place_LT_just__evaluator__Evaluator_GT_17he8a263daf6e01e97E(&local_f8);
                    /* try { // try from 0036f395 to 0036f3a1 has its CatchHandler @ 0036f489 */
  _ZN4core3ptr39drop_in_place_LT_just__scope__Scope_GT_17h7ff7b84fe4911a9fE(local_98);
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h766f1f48926327acE
            (&local_118);
                    /* try { // try from 0036f3af to 0036f3bb has its CatchHandler @ 0036f4e4 */
  _ZN4core3ptr39drop_in_place_LT_just__scope__Scope_GT_17h7ff7b84fe4911a9fE(local_58);
LAB_0036f3bc:
                    /* try { // try from 0036f3bc to 0036f3ca has its CatchHandler @ 0036f493 */
  _ZN4core3ptr100drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_just__signal_handler__SignalHandler_GT__GT_17hf98ecd4a30a182c6E
            (lVar5,extraout_DL & 1);
  _ZN4core3ptr88drop_in_place_LT_alloc__sync__Arc_LT_std__sync__poison__mutex__Mutex_LT_bool_GT__GT__GT_17hc5f130d1b842e4bbE
            (&local_140);
  return;
}