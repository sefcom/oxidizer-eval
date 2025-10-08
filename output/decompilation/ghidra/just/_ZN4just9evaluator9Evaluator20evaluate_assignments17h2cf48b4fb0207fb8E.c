void _ZN4just9evaluator9Evaluator20evaluate_assignments17h2cf48b4fb0207fb8E
               (char *param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  long local_198;
  ulong local_190 [3];
  long local_178;
  ulong local_170;
  undefined8 local_168;
  long local_160;
  long local_158;
  long local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined uStack_b4;
  undefined2 uStack_b3;
  undefined uStack_b1;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined7 local_a0;
  undefined uStack_99;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_48 [2];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_d8 = 0;
  local_c8 = 0;
  local_1a8 = 0;
  uStack_1a0 = 8;
  local_198 = 0;
  local_190[2] = *param_5;
  local_178 = param_5[1];
  local_190[0] = (ulong)(local_190[2] != 0);
  local_150 = local_190[2];
  if (local_190[2] != 0) {
    local_150 = param_5[2];
  }
  local_190[1] = 0;
  local_168 = 0;
  local_f8 = param_4 + 0x280;
  lVar5 = *(long *)(param_4 + 0x280);
  uVar1 = *(undefined8 *)(param_4 + 0x288);
  local_170 = local_190[0];
  local_160 = local_190[2];
  local_158 = local_178;
  local_f0 = param_2;
  local_e8 = param_3;
  local_e0 = param_4;
  uStack_c0 = param_6;
  while( true ) {
                    /* try { // try from 00364d80 to 00364ee9 has its CatchHandler @ 00365122 */
    auVar6 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0825ba1c453e6840E
                       (local_190);
    lVar3 = auVar6._0_8_;
    if (lVar3 == 0) break;
    lVar4 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h62a22d89973a7e72E
                      (lVar5,uVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    if (lVar4 == 0) {
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00565d98
      )(&local_b8,lVar3);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2be7ee32b7c9f397E
                (&local_1a8,&local_b8,&PTR_DAT_0052faf0);
    }
    else {
      local_108 = *(undefined8 *)(lVar4 + 0xc0);
      local_148 = *(undefined8 *)(lVar4 + 0x80);
      uStack_140 = *(undefined8 *)(lVar4 + 0x88);
      local_138 = *(undefined8 *)(lVar4 + 0x90);
      uStack_130 = *(undefined8 *)(lVar4 + 0x98);
      local_128 = *(undefined8 *)(lVar4 + 0xa0);
      uStack_120 = *(undefined4 *)(lVar4 + 0xa8);
      uStack_11c = *(undefined4 *)(lVar4 + 0xac);
      local_118 = *(undefined4 *)(lVar4 + 0xb0);
      uStack_114 = *(undefined4 *)(lVar4 + 0xb4);
      uStack_110 = *(undefined8 *)(lVar4 + 0xb8);
      uVar2 = *(undefined2 *)(lVar4 + 0xcd);
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00565d98
      )(local_48,auVar6._8_8_);
      uStack_58 = 0;
      local_60 = local_108;
      local_70 = local_118;
      uStack_6c = uStack_114;
      uStack_68 = (undefined4)uStack_110;
      uStack_64 = uStack_110._4_4_;
      local_80 = (undefined4)local_128;
      uStack_7c = local_128._4_4_;
      uStack_78 = uStack_120;
      uStack_74 = uStack_11c;
      local_90 = (undefined4)local_138;
      uStack_8c = local_138._4_4_;
      uStack_88 = (undefined4)uStack_130;
      uStack_84 = uStack_130._4_4_;
      local_a0 = (undefined7)local_148;
      uStack_99 = (undefined)((ulong)local_148 >> 0x38);
      uStack_98 = uStack_140;
      uStack_54 = (uint)CONCAT12(uStack_54._3_1_,uVar2) << 8;
      local_b8 = local_48[0];
      uStack_b4 = (undefined)local_48[1];
      uStack_b3 = (undefined2)((uint)local_48[1] >> 8);
      uStack_b1 = (undefined)((uint)local_48[1] >> 0x18);
      uStack_b0 = uStack_40;
      uStack_ac = uStack_3c;
      uStack_a8 = (undefined4)local_38;
      uStack_a4 = (undefined4)((ulong)local_38 >> 0x20);
      _ZN4just5scope5Scope4bind17h2017080dbe33bcdeE(&local_d8,&local_b8);
    }
  }
  if (local_198 == 0) {
    uStack_110 = local_c8;
    local_108 = uStack_c0;
    uStack_120 = (undefined4)local_d8;
    uStack_11c = local_d8._4_4_;
    local_118 = uStack_d0;
    uStack_114 = uStack_cc;
    local_128 = local_f8;
    local_148 = local_f0;
    uStack_140 = local_e8;
    local_138 = local_e0;
    uStack_130 = param_7;
    local_100 = 0;
    local_150 = lVar5;
    if (lVar5 != 0) {
      local_150 = *(long *)(local_e0 + 0x290);
    }
    local_190[0] = (ulong)(lVar5 != 0);
    local_190[1] = 0;
    local_168 = 0;
    local_190[2] = lVar5;
    local_178 = uVar1;
    local_170 = local_190[0];
    local_160 = lVar5;
    local_158 = uVar1;
    do {
                    /* try { // try from 00365030 to 0036504b has its CatchHandler @ 00365103 */
      lVar5 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6442f8fd74f44bbcE
                        (local_190);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x18) = uStack_110;
        *(undefined8 *)(param_1 + 0x20) = local_108;
        *(undefined4 *)(param_1 + 8) = uStack_120;
        *(undefined4 *)(param_1 + 0xc) = uStack_11c;
        *(undefined4 *)(param_1 + 0x10) = local_118;
        *(undefined4 *)(param_1 + 0x14) = uStack_114;
        *param_1 = '8';
        goto LAB_003650e2;
      }
      _ZN4just9evaluator9Evaluator19evaluate_assignment17h6f66c21b7dd7e3b7E(&local_b8,&local_148);
    } while ((char)local_b8 == '8');
    *(uint *)(param_1 + 4) = CONCAT13(uStack_b1,CONCAT21(uStack_b3,uStack_b4));
    *(uint *)(param_1 + 1) = CONCAT13(uStack_b4,local_b8._1_3_);
    *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_99,local_a0);
    *(undefined8 *)(param_1 + 0x20) = uStack_98;
    *(undefined4 *)(param_1 + 0x28) = local_90;
    *(undefined4 *)(param_1 + 0x2c) = uStack_8c;
    *(undefined4 *)(param_1 + 0x30) = uStack_88;
    *(undefined4 *)(param_1 + 0x34) = uStack_84;
    *(undefined4 *)(param_1 + 0x38) = local_80;
    *(undefined4 *)(param_1 + 0x3c) = uStack_7c;
    *(undefined4 *)(param_1 + 0x40) = uStack_78;
    *(undefined4 *)(param_1 + 0x44) = uStack_74;
    *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_6c,local_70);
    *(ulong *)(param_1 + 0x50) = CONCAT44(uStack_64,uStack_68);
    *(undefined4 *)(param_1 + 0x58) = (undefined4)local_60;
    *(undefined4 *)(param_1 + 0x5c) = local_60._4_4_;
    *(undefined4 *)(param_1 + 0x60) = uStack_58;
    *(int *)(param_1 + 100) = uStack_54;
    *param_1 = (char)local_b8;
    *(undefined4 *)(param_1 + 8) = uStack_b0;
    *(undefined4 *)(param_1 + 0xc) = uStack_ac;
    *(undefined4 *)(param_1 + 0x10) = uStack_a8;
    *(undefined4 *)(param_1 + 0x14) = uStack_a4;
                    /* try { // try from 003650bb to 003650c4 has its CatchHandler @ 003650fe */
    _ZN4core3ptr47drop_in_place_LT_just__evaluator__Evaluator_GT_17he8a263daf6e01e97E(&local_148);
LAB_003650e2:
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h766f1f48926327acE
              (&local_1a8);
  }
  else {
    uStack_a4._3_1_ = (undefined)local_198;
    local_a0 = (undefined7)((ulong)local_198 >> 8);
    uStack_b1 = (undefined)local_1a8;
    uStack_b0 = (undefined4)((ulong)local_1a8 >> 8);
    uStack_ac._0_3_ = (undefined3)((ulong)local_1a8 >> 0x28);
    uStack_ac._3_1_ = (undefined)uStack_1a0;
    uStack_a8 = (undefined4)((ulong)uStack_1a0 >> 8);
    uStack_a4._0_3_ = (undefined3)((ulong)uStack_1a0 >> 0x28);
    *param_1 = '3';
    *(undefined4 *)(param_1 + 1) = local_b8;
    *(uint *)(param_1 + 5) = CONCAT13(uStack_b1,CONCAT21(uStack_b3,uStack_b4));
    *(undefined4 *)(param_1 + 9) = uStack_b0;
    *(undefined4 *)(param_1 + 0xd) = uStack_ac;
    *(undefined8 *)(param_1 + 0x10) = uStack_1a0;
    *(long *)(param_1 + 0x18) = local_198;
    _ZN4core3ptr39drop_in_place_LT_just__scope__Scope_GT_17h7ff7b84fe4911a9fE(&local_d8);
  }
  return;
}