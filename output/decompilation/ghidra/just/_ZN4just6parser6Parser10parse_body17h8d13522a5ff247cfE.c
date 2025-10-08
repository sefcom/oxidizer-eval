void _ZN4just6parser6Parser10parse_body17h8d13522a5ff247cfE(uint *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined4 local_200;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  long lStack_170;
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_178 = 0;
  lStack_170 = 8;
  local_168 = 0;
                    /* try { // try from 003803fb to 00380409 has its CatchHandler @ 00380a38 */
  _ZN4just6parser6Parser8accepted17h762a87b5f98dff30E(&local_1f8,param_2,0x19);
  if ((char)local_1b0 == '%') {
    if ((local_1f8 & 1) == 0) {
      local_168 = 0;
      goto LAB_0038081b;
    }
    while( true ) {
                    /* try { // try from 00380437 to 00380446 has its CatchHandler @ 00380a36 */
      _ZN4just6parser6Parser8accepted17h762a87b5f98dff30E(&local_1f8,param_2,0x11);
      if ((char)local_1b0 != '%') break;
      if ((local_1f8 & 1) != 0) {
        if (lStack_170 + local_168 * 0x20 == 0x20 || local_168 == 0) goto LAB_0038081b;
        lVar4 = local_168 + -1;
        lVar3 = local_168 * 0x20 + lStack_170 + -0x40;
        goto LAB_003809e2;
      }
      local_160 = 0;
      uStack_158 = 8;
      local_150 = 0;
      if (*(ulong *)(param_2 + 0x58) < *(ulong *)(param_2 + 0x20)) {
        uVar2 = *(undefined8 *)
                 (*(long *)(param_2 + 0x18) + 0x30 + *(ulong *)(param_2 + 0x58) * 0x48);
      }
      else {
        uVar2 = 0;
      }
                    /* try { // try from 003804a2 to 003804b1 has its CatchHandler @ 00380a34 */
      _ZN4just6parser6Parser8accepted17h762a87b5f98dff30E(&local_1f8,param_2,0x14);
      if ((char)local_1b0 != '%') {
LAB_0038083b:
        *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_1b4,local_1b8);
        *(ulong *)((long)param_1 + 0x31) =
             CONCAT17((undefined)uStack_1c0,CONCAT43(uStack_1c4,local_1c8._1_3_));
        *(ulong *)((long)param_1 + 0x39) =
             CONCAT17((char)local_1b8,CONCAT43(uStack_1bc,uStack_1c0._1_3_));
        *(uint *)((long)param_1 + 0x21) = CONCAT13((undefined)uStack_1d4,local_1d8._1_3_);
        *(uint *)((long)param_1 + 0x25) = CONCAT13((undefined)uStack_1d0,uStack_1d4._1_3_);
        *(uint *)((long)param_1 + 0x29) = CONCAT13((undefined)uStack_1cc,uStack_1d0._1_3_);
        *(uint *)((long)param_1 + 0x2d) = CONCAT13((undefined)local_1c8,uStack_1cc._1_3_);
        *(uint *)((long)param_1 + 0x11) = CONCAT13((undefined)uStack_1e4,local_1e8._1_3_);
        *(uint *)((long)param_1 + 0x15) = CONCAT13((undefined)uStack_1e0,uStack_1e4._1_3_);
        *(uint *)((long)param_1 + 0x19) = CONCAT13((undefined)uStack_1dc,uStack_1e0._1_3_);
        *(uint *)((long)param_1 + 0x1d) = CONCAT13((undefined)local_1d8,uStack_1dc._1_3_);
        *(uint *)((long)param_1 + 1) = CONCAT13((undefined)uStack_1f4,local_1f8._1_3_);
        *(uint *)((long)param_1 + 5) = CONCAT13((undefined)uStack_1f0,uStack_1f4._1_3_);
        *(uint *)((long)param_1 + 9) = CONCAT13((undefined)uStack_1ec,uStack_1f0._1_3_);
        *(uint *)((long)param_1 + 0xd) = CONCAT13((undefined)local_1e8,uStack_1ec._1_3_);
        *(uint *)((long)param_1 + 0x49) = CONCAT13((undefined)uStack_1ac,local_1b0._1_3_);
        param_1[0x13] = uStack_1ac;
        *(undefined *)param_1 = (undefined)local_1f8;
        *(char *)(param_1 + 0x12) = (char)local_1b0;
LAB_00380974:
                    /* try { // try from 00380974 to 00380980 has its CatchHandler @ 00380a38 */
        _ZN4core3ptr68drop_in_place_LT_alloc__vec__Vec_LT_just__fragment__Fragment_GT__GT_17h81de7fdfd3ee3ff6E
                  (&local_160);
        goto LAB_00380981;
      }
      if ((local_1f8 & 1) == 0) {
        while( true ) {
          _ZN4just6parser6Parser8accepted17h762a87b5f98dff30E(&local_1f8,param_2,0x14);
          if ((char)local_1b0 != '%') goto LAB_0038083b;
          if (((local_1f8 & 1) != 0) ||
             (cVar1 = _ZN4just6parser6Parser7next_is17hc7c4171067e02951E(param_2,0x11),
             cVar1 != '\0')) break;
          _ZN4just6parser6Parser6accept17hbdbbefbcb8377711E(&local_1f8,param_2,0x22);
          local_148 = local_1f8;
          uStack_144 = uStack_1f4;
          uStack_140 = uStack_1f0;
          uStack_13c = uStack_1ec;
          local_138 = local_1e8;
          uStack_134 = uStack_1e4;
          uStack_130 = uStack_1e0;
          uStack_12c = uStack_1dc;
          local_128 = local_1d8;
          uStack_124 = uStack_1d4;
          uStack_120 = uStack_1d0;
          uStack_11c = uStack_1cc;
          local_118 = local_1c8;
          uStack_114 = uStack_1c4;
          uStack_110 = uStack_1c0;
          uStack_10c = uStack_1bc;
          local_200._0_3_ = (undefined3)(local_1b8 >> 8);
          local_200._3_1_ = (undefined)uStack_1b4;
          if ((char)local_1b0 != '%') {
            param_1[0x13] = uStack_1ac;
            *(uint *)((long)param_1 + 0x49) = CONCAT13((undefined)uStack_1ac,local_1b0._1_3_);
            *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_1c4,local_1c8);
            *(ulong *)(param_1 + 0xe) = CONCAT44(uStack_1bc,uStack_1c0);
            param_1[8] = local_1d8;
            param_1[9] = uStack_1d4;
            param_1[10] = uStack_1d0;
            param_1[0xb] = uStack_1cc;
            param_1[4] = local_1e8;
            param_1[5] = uStack_1e4;
            param_1[6] = uStack_1e0;
            param_1[7] = uStack_1dc;
            *param_1 = local_1f8;
            param_1[1] = uStack_1f4;
            param_1[2] = uStack_1f0;
            param_1[3] = uStack_1ec;
            param_1[0x11] = uStack_1b4;
            *(undefined4 *)((long)param_1 + 0x41) = local_200;
            *(char *)(param_1 + 0x10) = (char)local_1b8;
            *(char *)(param_1 + 0x12) = (char)local_1b0;
            goto LAB_00380974;
          }
          if ((char)local_1b8 == '%') {
            _ZN4just6parser6Parser8accepted17h762a87b5f98dff30E(&local_1f8,param_2,0x1b);
            if ((char)local_1b0 != '%') goto LAB_0038083b;
            if ((local_1f8 & 1) == 0) {
                    /* try { // try from 003808d6 to 003808e2 has its CatchHandler @ 00380a23 */
              _ZN4just6parser6Parser16unexpected_token17hbee08644eef5d075E(&local_1f8,param_2);
              uStack_78 = local_1b0;
              uStack_74 = uStack_1ac;
              local_70 = CONCAT44(uStack_1a4,uStack_1a8);
              uStack_98 = CONCAT44(uStack_1cc,uStack_1d0);
              local_90 = CONCAT44(uStack_1c4,local_1c8);
              uStack_88 = CONCAT44(uStack_1bc,uStack_1c0);
              local_80 = CONCAT44(uStack_1b4,local_1b8);
              uStack_a8 = uStack_1e0;
              uStack_a4 = uStack_1dc;
              local_a0 = local_1d8;
              uStack_9c = uStack_1d4;
              local_b8 = CONCAT44(uStack_1ec,uStack_1f0);
              uStack_b0 = local_1e8;
              uStack_ac = uStack_1e4;
              param_1[0x10] = local_1b0;
              param_1[0x11] = uStack_1ac;
              param_1[0x12] = uStack_1a8;
              param_1[0x13] = uStack_1a4;
              *(undefined8 *)(param_1 + 0xc) = uStack_88;
              *(undefined8 *)(param_1 + 0xe) = local_80;
              *(undefined8 *)(param_1 + 8) = uStack_98;
              *(undefined8 *)(param_1 + 10) = local_90;
              param_1[4] = uStack_1e0;
              param_1[5] = uStack_1dc;
              param_1[6] = local_1d8;
              param_1[7] = uStack_1d4;
              *param_1 = uStack_1f0;
              param_1[1] = uStack_1ec;
              param_1[2] = local_1e8;
              param_1[3] = uStack_1e4;
              goto LAB_00380974;
            }
            _ZN4just6parser6Parser16parse_expression17h8b701a5fe27dff96E(&local_1f8,param_2);
            local_108 = CONCAT44(uStack_1ec,uStack_1f0);
            uStack_100 = CONCAT44(uStack_1e4,local_1e8);
            local_f8 = CONCAT44(uStack_1dc,uStack_1e0);
            uStack_f0 = CONCAT44(uStack_1d4,local_1d8);
            local_e8 = CONCAT44(uStack_1cc,uStack_1d0);
            uStack_e0 = CONCAT44(uStack_1c4,local_1c8);
            local_d8 = CONCAT44(uStack_1bc,uStack_1c0);
            uStack_d0 = CONCAT44(uStack_1b4,local_1b8);
            local_c8 = CONCAT44(uStack_1ac,local_1b0);
            if (CONCAT44(uStack_1f4,local_1f8) == 0x12) {
              *(undefined8 *)(param_1 + 0x10) = local_c8;
              *(ulong *)(param_1 + 0x12) = CONCAT44(uStack_1a4,uStack_1a8);
              *(undefined8 *)(param_1 + 0xc) = local_d8;
              *(undefined8 *)(param_1 + 0xe) = uStack_d0;
              param_1[8] = uStack_1d0;
              param_1[9] = uStack_1cc;
              param_1[10] = local_1c8;
              param_1[0xb] = uStack_1c4;
              param_1[4] = uStack_1e0;
              param_1[5] = uStack_1dc;
              param_1[6] = local_1d8;
              param_1[7] = uStack_1d4;
              *param_1 = uStack_1f0;
              param_1[1] = uStack_1ec;
              param_1[2] = local_1e8;
              param_1[3] = uStack_1e4;
              goto LAB_00380974;
            }
            local_40 = local_180;
            local_50 = local_190;
            uStack_48 = uStack_188;
            local_60 = local_1a0;
            uStack_58 = uStack_198;
            local_80 = CONCAT44(uStack_1bc,uStack_1c0);
            uStack_78 = local_1b8;
            uStack_74 = uStack_1b4;
            local_90 = CONCAT44(uStack_1cc,uStack_1d0);
            uStack_88 = CONCAT44(uStack_1c4,local_1c8);
            local_a0 = uStack_1e0;
            uStack_9c = uStack_1dc;
            uStack_98 = CONCAT44(uStack_1d4,local_1d8);
            uStack_b0 = uStack_1f0;
            uStack_ac = uStack_1ec;
            uStack_a8 = local_1e8;
            uStack_a4 = uStack_1e4;
            local_b8 = CONCAT44(uStack_1f4,local_1f8);
            local_70 = local_c8;
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8c5e03d2ce7d530cE
                      (&local_160,&local_b8,&PTR_DAT_00530988);
            _ZN4just6parser6Parser6expect17h35e1151927597ac7E(&local_1f8,param_2,0x1a);
            if ((char)local_1b0 != '%') {
              local_b8._0_7_ = CONCAT43(uStack_1b4,(int3)(local_1b8 >> 8));
              lVar3 = local_b8;
              param_1[0x13] = uStack_1ac;
              *(uint *)((long)param_1 + 0x49) = CONCAT13((undefined)uStack_1ac,local_1b0._1_3_);
              param_1[0x11] = uStack_1b4;
              *(undefined4 *)((long)param_1 + 0x41) = (undefined4)local_b8;
              *(ulong *)param_1 = CONCAT44(uStack_1f4,local_1f8);
              param_1[2] = uStack_1f0;
              param_1[3] = uStack_1ec;
              param_1[4] = local_1e8;
              param_1[5] = uStack_1e4;
              param_1[6] = uStack_1e0;
              param_1[7] = uStack_1dc;
              param_1[8] = local_1d8;
              param_1[9] = uStack_1d4;
              param_1[10] = uStack_1d0;
              param_1[0xb] = uStack_1cc;
              param_1[0xc] = local_1c8;
              param_1[0xd] = uStack_1c4;
              *(ulong *)(param_1 + 0xe) = CONCAT44(uStack_1bc,uStack_1c0);
              *(char *)(param_1 + 0x10) = (char)local_1b8;
              *(char *)(param_1 + 0x12) = (char)local_1b0;
              local_b8 = lVar3;
              goto LAB_00380974;
            }
          }
          else {
            uStack_1ac = uStack_1b4;
            local_1b0 = local_1b8;
            local_1f8 = 0x12;
            uStack_1f4 = 0;
                    /* try { // try from 00380567 to 0038074c has its CatchHandler @ 00380a3d */
            uStack_1f0 = local_148;
            uStack_1ec = uStack_144;
            local_1e8 = uStack_140;
            uStack_1e4 = uStack_13c;
            uStack_1e0 = local_138;
            uStack_1dc = uStack_134;
            local_1d8 = uStack_130;
            uStack_1d4 = uStack_12c;
            uStack_1d0 = local_128;
            uStack_1cc = uStack_124;
            local_1c8 = uStack_120;
            uStack_1c4 = uStack_11c;
            uStack_1c0 = local_118;
            uStack_1bc = uStack_114;
            local_1b8 = uStack_110;
            uStack_1b4 = uStack_10c;
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8c5e03d2ce7d530cE
                      (&local_160,&local_1f8,&PTR_DAT_00530970);
          }
        }
      }
      local_1e8 = (uint)local_150;
      uStack_1e4 = (uint)((ulong)local_150 >> 0x20);
      local_1f8 = (uint)local_160;
      uStack_1f4 = local_160._4_4_;
      uStack_1f0 = (uint)uStack_158;
      uStack_1ec = uStack_158._4_4_;
      uStack_1e0 = (uint)uVar2;
      uStack_1dc = (uint)((ulong)uVar2 >> 0x20);
                    /* try { // try from 003804ec to 003804fb has its CatchHandler @ 00380a32 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbfd0e6f07563321aE(&local_178,&local_1f8);
    }
  }
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_1b4,local_1b8);
  *(ulong *)((long)param_1 + 0x31) =
       CONCAT17((undefined)uStack_1c0,CONCAT43(uStack_1c4,local_1c8._1_3_));
  *(ulong *)((long)param_1 + 0x39) = CONCAT17((char)local_1b8,CONCAT43(uStack_1bc,uStack_1c0._1_3_))
  ;
  *(ulong *)((long)param_1 + 0x21) =
       CONCAT17((undefined)uStack_1d0,CONCAT43(uStack_1d4,local_1d8._1_3_));
  *(ulong *)((long)param_1 + 0x29) =
       CONCAT17((undefined)local_1c8,CONCAT43(uStack_1cc,uStack_1d0._1_3_));
  *(ulong *)((long)param_1 + 0x11) =
       CONCAT17((undefined)uStack_1e0,CONCAT43(uStack_1e4,local_1e8._1_3_));
  *(ulong *)((long)param_1 + 0x19) =
       CONCAT17((undefined)local_1d8,CONCAT43(uStack_1dc,uStack_1e0._1_3_));
  *(uint *)((long)param_1 + 1) = CONCAT13((undefined)uStack_1f4,local_1f8._1_3_);
  *(uint *)((long)param_1 + 5) = CONCAT13((undefined)uStack_1f0,uStack_1f4._1_3_);
  *(uint *)((long)param_1 + 9) = CONCAT13((undefined)uStack_1ec,uStack_1f0._1_3_);
  *(uint *)((long)param_1 + 0xd) = CONCAT13((undefined)local_1e8,uStack_1ec._1_3_);
  *(uint *)((long)param_1 + 0x49) = CONCAT13((undefined)uStack_1ac,local_1b0._1_3_);
  param_1[0x13] = uStack_1ac;
  *(undefined *)param_1 = (undefined)local_1f8;
  *(char *)(param_1 + 0x12) = (char)local_1b0;
LAB_00380981:
  _ZN4core3ptr60drop_in_place_LT_alloc__vec__Vec_LT_just__line__Line_GT__GT_17hfb7be3c1bcd7265cE
            (&local_178);
  return;
LAB_003809e2:
  if (*(long *)(lVar3 + 0x30) != 0) goto LAB_00380a1b;
  local_1f8 = *(uint *)(lVar3 + 0x20);
  uStack_1f4 = *(undefined4 *)(lVar3 + 0x24);
  uStack_1f0 = *(undefined4 *)(lVar3 + 0x28);
  uStack_1ec = *(undefined4 *)(lVar3 + 0x2c);
  local_1e8 = *(undefined4 *)(lVar3 + 0x30);
  uStack_1e4 = *(undefined4 *)(lVar3 + 0x34);
  uStack_1e0 = *(undefined4 *)(lVar3 + 0x38);
  uStack_1dc = *(undefined4 *)(lVar3 + 0x3c);
                    /* try { // try from 00380a00 to 00380a07 has its CatchHandler @ 00380a25 */
  _ZN4core3ptr65drop_in_place_LT_core__option__Option_LT_just__line__Line_GT__GT_17h351018a9bb1aa703E
            (&local_1f8);
  bVar5 = lVar4 == 0;
  lVar4 = lVar4 + -1;
  if ((bVar5) || (bVar5 = lVar3 == 0, lVar3 = lVar3 + -0x20, bVar5)) goto LAB_00380a1b;
  goto LAB_003809e2;
LAB_00380a1b:
  local_168 = lVar4 + 1;
LAB_0038081b:
  *(long *)(param_1 + 4) = local_168;
  *(undefined8 *)param_1 = local_178;
  *(long *)(param_1 + 2) = lStack_170;
  *(undefined *)(param_1 + 0x12) = 0x25;
  return;
}