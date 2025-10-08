undefined  [16]
_ZN5uu_du11StatPrinter11print_stats17h571f331b863e373aE(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined8 **local_1e0;
  long local_1d8;
  byte *local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  code *local_1a0;
  undefined8 **local_198;
  code *local_190;
  undefined *local_188;
  long local_180;
  undefined8 **local_178;
  long local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long local_128;
  ulong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulong local_f8;
  undefined8 uStack_f0;
  undefined local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 **local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  long local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  undefined8 uStack_40;
  
  uVar12 = *param_2;
  uVar5 = param_2[1];
  _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17hea4d1650cfd7aab4E(&local_d8,uVar12,uVar5);
  auVar16[0] = -((char)local_d8 == DAT_0011d8e0);
  auVar16[1] = -(local_d8._1_1_ == UNK_0011d8e1);
  auVar16[2] = -(local_d8._2_1_ == UNK_0011d8e2);
  auVar16[3] = -(local_d8._3_1_ == UNK_0011d8e3);
  auVar16[4] = -(local_d8._4_1_ == UNK_0011d8e4);
  auVar16[5] = -(local_d8._5_1_ == UNK_0011d8e5);
  auVar16[6] = -(local_d8._6_1_ == UNK_0011d8e6);
  auVar16[7] = -(local_d8._7_1_ == UNK_0011d8e7);
  auVar16[8] = -((char)uStack_d0 == UNK_0011d8e8);
  auVar16[9] = -(uStack_d0._1_1_ == UNK_0011d8e9);
  auVar16[10] = -(uStack_d0._2_1_ == UNK_0011d8ea);
  auVar16[0xb] = -(uStack_d0._3_1_ == UNK_0011d8eb);
  auVar16[0xc] = -(uStack_d0._4_1_ == UNK_0011d8ec);
  auVar16[0xd] = -(uStack_d0._5_1_ == UNK_0011d8ed);
  auVar16[0xe] = -(uStack_d0._6_1_ == UNK_0011d8ee);
  auVar16[0xf] = -(uStack_d0._7_1_ == UNK_0011d8ef);
  local_1d0 = param_1;
  if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf)
      == 0xffff) {
    lVar11 = 0;
  }
  else {
    bVar1 = param_1[0x49];
    bVar2 = param_1[0x4a];
    local_1c0 = *(ulong *)(param_1 + 0x10);
    local_1b8 = *(ulong *)(param_1 + 0x18);
    bVar3 = *param_1;
    local_1c8 = *(ulong *)(param_1 + 8);
    bVar4 = param_1[0x4b];
    lVar11 = 0;
    local_1b0 = uVar12;
    do {
      if (local_d8 == (undefined *)0x2 && uStack_d0 == (undefined *)0x0) {
        local_1e0 = local_c8;
        local_1d8 = local_c0;
                    /* try { // try from 00197cf0 to 00197d7e has its CatchHandler @ 00197f16 */
        uVar7 = (**(code **)(local_c0 + 0x58))();
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0024ebb8)(uVar7);
        auVar16 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024e880)();
        local_1a8 = (undefined8 *)local_e8;
        local_1a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hff9117abb4c135daE;
        local_198 = &local_1e0;
        local_190 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h818a065c9c5f1901E
        ;
        local_188 = &DAT_00245df8;
        local_180 = 3;
        local_168 = 0;
        local_178 = &local_1a8;
        local_170 = 2;
        local_e8 = auVar16;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024e888)(&local_188);
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h865b7c7ff5ce5fe7E
                  (local_1e0,local_1d8);
      }
      else {
        local_188 = local_d8;
        local_180 = (long)uStack_d0;
        local_178 = local_c8;
        local_170 = local_c0;
        local_f8 = local_48;
        uStack_f0 = uStack_40;
        local_108 = local_58;
        uStack_100 = uStack_50;
        local_118 = local_68;
        uStack_110 = uStack_60;
        local_128 = local_78;
        uStack_120 = uStack_70;
        local_168 = local_b8;
        uStack_160 = uStack_b0;
        local_158 = local_a8;
        uStack_154 = uStack_a4;
        uStack_150 = uStack_a0;
        uStack_14c = uStack_9c;
        local_148 = local_98;
        uStack_144 = uStack_94;
        uStack_140 = uStack_90;
        uStack_13c = uStack_8c;
        local_138 = local_88;
        uStack_134 = uStack_84;
        uStack_130 = uStack_80;
        uStack_12c = uStack_7c;
        uVar9 = uStack_70;
        if ((bVar1 & 1) == 0) {
          if ((bVar2 & 1) == 0) {
            uVar9 = local_78 << 9;
          }
          else {
            uVar9 = CONCAT44(uStack_7c,uStack_80);
          }
        }
        uVar13 = 0;
        if (local_48 == 0) {
          uVar13 = uVar9;
        }
        if (local_1c0 == 2) {
          if ((bVar3 & local_1c8 < local_48) == 0) {
LAB_00197eaf:
            if ((local_48 == 0) || ((bVar4 & 1) == 0)) {
                    /* try { // try from 00197ebf to 00197ecd has its CatchHandler @ 00197f01 */
              lVar8 = _ZN5uu_du11StatPrinter10print_stat17h55862af7f00f1efdE(local_1d0,&local_188);
              if (lVar8 != 0) {
                _ZN4core3ptr41drop_in_place_LT_uu_du__StatPrintInfo_GT_17h9291cc610d8c7999E
                          (&local_188);
                goto LAB_00197be3;
              }
            }
          }
        }
        else {
          bVar10 = uVar9 < local_1b8;
          if ((local_1c0 & 1) != 0) {
            bVar10 = local_1b8 < uVar9;
          }
          if ((local_1c8 < local_48 & bVar3) == 0 && !bVar10) goto LAB_00197eaf;
        }
        lVar11 = lVar11 + uVar13;
        _ZN4core3ptr41drop_in_place_LT_uu_du__StatPrintInfo_GT_17h9291cc610d8c7999E(&local_188);
        uVar12 = local_1b0;
      }
      _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17hea4d1650cfd7aab4E(&local_d8,uVar12,uVar5);
      auVar14[0] = -((char)local_d8 == DAT_0011d8e0);
      auVar14[1] = -(local_d8._1_1_ == UNK_0011d8e1);
      auVar14[2] = -(local_d8._2_1_ == UNK_0011d8e2);
      auVar14[3] = -(local_d8._3_1_ == UNK_0011d8e3);
      auVar14[4] = -(local_d8._4_1_ == UNK_0011d8e4);
      auVar14[5] = -(local_d8._5_1_ == UNK_0011d8e5);
      auVar14[6] = -(local_d8._6_1_ == UNK_0011d8e6);
      auVar14[7] = -(local_d8._7_1_ == UNK_0011d8e7);
      auVar14[8] = -((char)uStack_d0 == UNK_0011d8e8);
      auVar14[9] = -(uStack_d0._1_1_ == UNK_0011d8e9);
      auVar14[10] = -(uStack_d0._2_1_ == UNK_0011d8ea);
      auVar14[0xb] = -(uStack_d0._3_1_ == UNK_0011d8eb);
      auVar14[0xc] = -(uStack_d0._4_1_ == UNK_0011d8ec);
      auVar14[0xd] = -(uStack_d0._5_1_ == UNK_0011d8ed);
      auVar14[0xe] = -(uStack_d0._6_1_ == UNK_0011d8ee);
      auVar14[0xf] = -(uStack_d0._7_1_ == UNK_0011d8ef);
    } while ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar14[0xf] >> 7) << 0xf) != 0xffff);
  }
  pbVar6 = local_1d0;
  if (local_1d0[0x48] != 0) {
    _ZN5uu_du11StatPrinter12convert_size17hd9a65cfff278d727E(&local_d8,local_1d0,lVar11);
    local_1a0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_188 = &DAT_00245e28;
    local_180 = 2;
    local_168 = 0;
    local_178 = &local_1a8;
    local_170 = 1;
                    /* try { // try from 00197b71 to 00197b7b has its CatchHandler @ 00197ee9 */
    local_1a8 = &local_d8;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0024e908)(&local_188);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4aad5465963d35b9E(&local_d8);
    local_d8 = pbVar6 + 0x4d;
    uStack_d0 = 
    PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_0024ebb0
    ;
    local_188 = &DAT_0011d7a0;
    local_180 = 1;
    local_168 = 0;
    local_170 = 1;
    local_178 = (undefined8 **)&local_d8;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0024e908)(&local_188);
  }
  lVar8 = 0;
LAB_00197be3:
  auVar15._8_8_ =
       &PTR__ZN4core3ptr35drop_in_place_LT_uu_du__DuError_GT_17h2285cec56b29122cE_00245d90;
  auVar15._0_8_ = lVar8;
  return auVar15;
}