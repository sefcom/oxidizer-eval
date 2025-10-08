void _ZN4just6parser6Parser14parse_sequence17h30bb3b312b01651eE(byte *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_140;
  byte local_130;
  undefined4 uStack_12f;
  undefined4 uStack_12b;
  undefined4 uStack_127;
  undefined4 uStack_123;
  undefined4 uStack_11f;
  undefined4 uStack_11b;
  undefined4 uStack_117;
  undefined4 uStack_113;
  undefined4 uStack_10f;
  undefined4 uStack_10b;
  undefined4 uStack_107;
  undefined4 uStack_103;
  undefined3 uStack_ff;
  undefined4 uStack_fc;
  undefined local_f8;
  undefined7 uStack_f7;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  _ZN4just6parser6Parser7presume17he2055272497a907bE(&local_130,param_2,0x1c);
  if ((byte)local_e8 == 0x25) {
    local_1a0 = 0;
    uStack_198 = 8;
    local_190 = 0;
    do {
                    /* try { // try from 0037ead0 to 0037ebb1 has its CatchHandler @ 0037edb6 */
      cVar8 = _ZN4just6parser6Parser7next_is17hc7c4171067e02951E(param_2,0x1d);
      if (cVar8 != '\0') break;
      _ZN4just6parser6Parser16parse_expression17h8b701a5fe27dff96E(&local_130,param_2);
      lVar1 = CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,local_130));
      uVar2 = CONCAT35((undefined3)uStack_123,CONCAT41(uStack_127,uStack_12b._3_1_));
      uVar3 = CONCAT35((undefined3)uStack_11b,CONCAT41(uStack_11f,uStack_123._3_1_));
      uVar4 = CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,uStack_11b._3_1_));
      uVar5 = CONCAT35((undefined3)uStack_10b,CONCAT41(uStack_10f,uStack_113._3_1_));
      uVar6 = CONCAT35((undefined3)uStack_103,CONCAT41(uStack_107,uStack_10b._3_1_));
      uVar7 = CONCAT31(uStack_ff,uStack_103._3_1_);
      uStack_160 = CONCAT44(uStack_fc,uVar7);
      uStack_140 = uStack_e0;
      local_188._0_4_ = (undefined4)CONCAT41(uStack_127,uStack_12b._3_1_);
      local_188._4_4_ = (undefined4)((ulong)uVar2 >> 0x20);
      uStack_180._0_4_ = (undefined4)CONCAT41(uStack_11f,uStack_123._3_1_);
      uStack_180._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
      local_178._0_4_ = (undefined4)CONCAT41(uStack_117,uStack_11b._3_1_);
      local_178._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
      uStack_170._0_4_ = (undefined4)CONCAT41(uStack_10f,uStack_113._3_1_);
      uStack_170._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
      local_168._0_4_ = (undefined4)CONCAT41(uStack_107,uStack_10b._3_1_);
      local_168._4_4_ = (undefined4)((ulong)uVar6 >> 0x20);
      local_188 = uVar2;
      uStack_180 = uVar3;
      local_178 = uVar4;
      uStack_170 = uVar5;
      local_168 = uVar6;
      if (lVar1 == 0x12) {
        *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_e4,local_e8);
        *(undefined8 *)(param_1 + 0x48) = uStack_e0;
        *(ulong *)(param_1 + 0x30) = CONCAT71(uStack_f7,local_f8);
        *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_ec,uStack_f0);
        *(undefined4 *)(param_1 + 0x20) = (undefined4)local_168;
        *(undefined4 *)(param_1 + 0x24) = local_168._4_4_;
        *(undefined4 *)(param_1 + 0x28) = uVar7;
        *(undefined4 *)(param_1 + 0x2c) = uStack_fc;
        *(undefined4 *)(param_1 + 0x10) = (undefined4)local_178;
        *(undefined4 *)(param_1 + 0x14) = local_178._4_4_;
        *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_170;
        *(undefined4 *)(param_1 + 0x1c) = uStack_170._4_4_;
        *(undefined4 *)param_1 = (undefined4)local_188;
        *(undefined4 *)(param_1 + 4) = local_188._4_4_;
        *(undefined4 *)(param_1 + 8) = (undefined4)uStack_180;
        *(undefined4 *)(param_1 + 0xc) = uStack_180._4_4_;
        goto LAB_0037ed98;
      }
      local_38 = local_b8;
      local_48 = local_c8;
      uStack_40 = uStack_c0;
      local_58 = local_d8;
      uStack_50 = uStack_d0;
      uStack_60 = uStack_e0;
      local_158 = (undefined4)CONCAT71(uStack_f7,local_f8);
      uStack_154 = (undefined4)((uint7)uStack_f7 >> 0x18);
      local_78 = local_158;
      uStack_74 = uStack_154;
      uStack_70 = uStack_f0;
      uStack_6c = uStack_ec;
      local_88 = (undefined4)local_168;
      uStack_84 = local_168._4_4_;
      uStack_7c = uStack_fc;
      local_98 = (undefined4)local_178;
      uStack_94 = local_178._4_4_;
      uStack_90 = (undefined4)uStack_170;
      uStack_8c = uStack_170._4_4_;
      local_a8 = (undefined4)local_188;
      uStack_a4 = local_188._4_4_;
      uStack_a0 = (undefined4)uStack_180;
      uStack_9c = uStack_180._4_4_;
      local_b0 = lVar1;
      uStack_80 = uVar7;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he19d83f3939ac21cE
                (&local_1a0,&local_b0,&PTR_DAT_00530910);
      _ZN4just6parser6Parser8accepted17h762a87b5f98dff30E(&local_130,param_2,0xf);
      if ((byte)local_e8 != 0x25) {
        *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_ec,uStack_f0);
        *(ulong *)(param_1 + 0x31) = CONCAT17(local_f8,CONCAT43(uStack_fc,uStack_ff));
        *(ulong *)(param_1 + 0x39) = CONCAT17((byte)uStack_f0,uStack_f7);
        *(undefined4 *)(param_1 + 0x21) = uStack_10f;
        *(undefined4 *)(param_1 + 0x25) = uStack_10b;
        *(undefined4 *)(param_1 + 0x29) = uStack_107;
        *(undefined4 *)(param_1 + 0x2d) = uStack_103;
        *(undefined4 *)(param_1 + 0x11) = uStack_11f;
        *(undefined4 *)(param_1 + 0x15) = uStack_11b;
        *(undefined4 *)(param_1 + 0x19) = uStack_117;
        *(undefined4 *)(param_1 + 0x1d) = uStack_113;
        *(undefined4 *)(param_1 + 1) = uStack_12f;
        *(undefined4 *)(param_1 + 5) = uStack_12b;
        *(undefined4 *)(param_1 + 9) = uStack_127;
        *(undefined4 *)(param_1 + 0xd) = uStack_123;
        *(uint *)(param_1 + 0x49) = CONCAT13((undefined)uStack_e4,local_e8._1_3_);
        *(undefined4 *)(param_1 + 0x4c) = uStack_e4;
        *param_1 = local_130;
        param_1[0x48] = (byte)local_e8;
        goto LAB_0037ed98;
      }
    } while ((local_130 & 1) != 0);
                    /* try { // try from 0037ebd0 to 0037ebe1 has its CatchHandler @ 0037edb4 */
    _ZN4just6parser6Parser6expect17h35e1151927597ac7E(&local_130,param_2,0x1d);
    if ((byte)local_e8 == 0x25) {
      *(undefined8 *)(param_1 + 0x10) = local_190;
      *(undefined8 *)param_1 = local_1a0;
      *(undefined8 *)(param_1 + 8) = uStack_198;
      param_1[0x48] = 0x25;
    }
    else {
      local_188._0_3_ = (undefined3)((uint)uStack_f0 >> 8);
      local_188._0_7_ = CONCAT43(uStack_ec,(undefined3)local_188);
      uVar2 = local_188;
      *(undefined4 *)(param_1 + 0x4c) = uStack_e4;
      *(uint *)(param_1 + 0x49) = CONCAT13((undefined)uStack_e4,local_e8._1_3_);
      *(undefined4 *)(param_1 + 0x44) = uStack_ec;
      *(undefined4 *)(param_1 + 0x41) = (undefined4)local_188;
      *(ulong *)param_1 = CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,local_130));
      *(uint *)(param_1 + 8) = CONCAT31((undefined3)uStack_127,uStack_12b._3_1_);
      *(uint *)(param_1 + 0xc) = CONCAT31((undefined3)uStack_123,uStack_127._3_1_);
      *(uint *)(param_1 + 0x10) = CONCAT31((undefined3)uStack_11f,uStack_123._3_1_);
      *(uint *)(param_1 + 0x14) = CONCAT31((undefined3)uStack_11b,uStack_11f._3_1_);
      *(uint *)(param_1 + 0x18) = CONCAT31((undefined3)uStack_117,uStack_11b._3_1_);
      *(uint *)(param_1 + 0x1c) = CONCAT31((undefined3)uStack_113,uStack_117._3_1_);
      *(uint *)(param_1 + 0x20) = CONCAT31((undefined3)uStack_10f,uStack_113._3_1_);
      *(uint *)(param_1 + 0x24) = CONCAT31((undefined3)uStack_10b,uStack_10f._3_1_);
      *(uint *)(param_1 + 0x28) = CONCAT31((undefined3)uStack_107,uStack_10b._3_1_);
      *(uint *)(param_1 + 0x2c) = CONCAT31((undefined3)uStack_103,uStack_107._3_1_);
      *(uint *)(param_1 + 0x30) = CONCAT31(uStack_ff,uStack_103._3_1_);
      *(undefined4 *)(param_1 + 0x34) = uStack_fc;
      *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_f7,local_f8);
      param_1[0x40] = (byte)uStack_f0;
      param_1[0x48] = (byte)local_e8;
      local_188 = uVar2;
LAB_0037ed98:
      _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_just__expression__Expression_GT__GT_17hd865f9e8bf24b460E
                (&local_1a0);
    }
  }
  else {
    local_188._0_3_ = (undefined3)((uint)uStack_f0 >> 8);
    local_188._0_7_ = CONCAT43(uStack_ec,(undefined3)local_188);
    *(undefined4 *)(param_1 + 0x4c) = uStack_e4;
    *(uint *)(param_1 + 0x49) = CONCAT13((undefined)uStack_e4,local_e8._1_3_);
    *(undefined4 *)(param_1 + 0x44) = uStack_ec;
    *(undefined4 *)(param_1 + 0x41) = (undefined4)local_188;
    *(ulong *)param_1 = CONCAT35((undefined3)uStack_12b,CONCAT41(uStack_12f,local_130));
    *(ulong *)(param_1 + 8) = CONCAT35((undefined3)uStack_123,CONCAT41(uStack_127,uStack_12b._3_1_))
    ;
    *(ulong *)(param_1 + 0x10) =
         CONCAT35((undefined3)uStack_11b,CONCAT41(uStack_11f,uStack_123._3_1_));
    *(ulong *)(param_1 + 0x18) =
         CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,uStack_11b._3_1_));
    *(ulong *)(param_1 + 0x20) =
         CONCAT35((undefined3)uStack_10b,CONCAT41(uStack_10f,uStack_113._3_1_));
    *(ulong *)(param_1 + 0x28) =
         CONCAT35((undefined3)uStack_103,CONCAT41(uStack_107,uStack_10b._3_1_));
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_fc,CONCAT31(uStack_ff,uStack_103._3_1_));
    *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_f7,local_f8);
    param_1[0x40] = (byte)uStack_f0;
    param_1[0x48] = (byte)local_e8;
  }
  return;
}