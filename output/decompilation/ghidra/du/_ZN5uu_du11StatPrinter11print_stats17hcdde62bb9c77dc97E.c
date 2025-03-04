undefined  [16]
_ZN5uu_du11StatPrinter11print_stats17hcdde62bb9c77dc97E(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined8 **local_1e8;
  long local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
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
  long lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long local_f8;
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
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  
  _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h7eaaff2dc637e02cE(&local_d8);
  auVar13[0] = -((char)local_d8 == DAT_0010f110);
  auVar13[1] = -(local_d8._1_1_ == UNK_0010f111);
  auVar13[2] = -(local_d8._2_1_ == UNK_0010f112);
  auVar13[3] = -(local_d8._3_1_ == UNK_0010f113);
  auVar13[4] = -(local_d8._4_1_ == UNK_0010f114);
  auVar13[5] = -(local_d8._5_1_ == UNK_0010f115);
  auVar13[6] = -(local_d8._6_1_ == UNK_0010f116);
  auVar13[7] = -(local_d8._7_1_ == UNK_0010f117);
  auVar13[8] = -((char)uStack_d0 == UNK_0010f118);
  auVar13[9] = -(uStack_d0._1_1_ == UNK_0010f119);
  auVar13[10] = -(uStack_d0._2_1_ == UNK_0010f11a);
  auVar13[0xb] = -(uStack_d0._3_1_ == UNK_0010f11b);
  auVar13[0xc] = -(uStack_d0._4_1_ == UNK_0010f11c);
  auVar13[0xd] = -(uStack_d0._5_1_ == UNK_0010f11d);
  auVar13[0xe] = -(uStack_d0._6_1_ == UNK_0010f11e);
  auVar13[0xf] = -(uStack_d0._7_1_ == UNK_0010f11f);
  local_1d8 = param_1;
  if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf)
      == 0xffff) {
    lVar9 = 0;
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x49);
    cVar2 = *(char *)((long)param_1 + 0x4a);
    local_1b0 = param_1[2];
    local_1b8 = param_1[3];
    local_1c8 = *param_1;
    local_1d0 = param_1[1];
    cVar3 = *(char *)((long)param_1 + 0x4b);
    lVar9 = 0;
    local_1c0 = param_2;
    do {
      lVar7 = local_48;
      if (local_d8 == (undefined *)0x2 && uStack_d0 == (code *)0x0) {
        local_1e8 = local_c8;
        local_1e0 = local_c0;
                    /* try { // try from 001f3363 to 001f33f7 has its CatchHandler @ 001f3563 */
        uVar6 = (**(code **)(local_c0 + 0x60))();
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar6);
        auVar13 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_1a8 = (undefined8 *)local_e8;
        local_1a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6327d06d698acdd2E;
        local_198 = &local_1e8;
        local_190 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc201e0bc34ac3284E
        ;
        local_188 = &DAT_002845c8;
        local_180 = 3;
        local_168 = 0;
        local_178 = &local_1a8;
        local_170 = 2;
        local_e8 = auVar13;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_188);
        _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h29011716f9a6ef88E
                  (local_1e8,local_1e0);
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
        lStack_120 = lStack_70;
        local_138 = local_88;
        uStack_134 = uStack_84;
        uStack_130 = uStack_80;
        uStack_12c = uStack_7c;
        local_148 = local_98;
        uStack_144 = uStack_94;
        uStack_140 = uStack_90;
        uStack_13c = uStack_8c;
        local_158 = local_a8;
        uStack_154 = uStack_a4;
        uStack_150 = uStack_a0;
        uStack_14c = uStack_9c;
        local_168 = local_b8;
        uStack_160 = uStack_b0;
        lVar8 = lStack_70;
        if (cVar1 == '\0') {
          if (cVar2 == '\0') {
            lVar8 = local_78 << 9;
          }
          else {
            lVar8 = CONCAT44(uStack_7c,uStack_80);
          }
        }
        lVar10 = 0;
        if (local_48 == 0) {
          lVar10 = lVar8;
        }
        cVar5 = _ZN4core6option15Option_LT_T_GT_6map_or17hcdde7c32e5996b93E
                          (local_1b0,local_1b8,lVar8);
        if (cVar5 == '\0') {
          cVar5 = _ZN4core6option15Option_LT_T_GT_6map_or17h49b7c3a1ba7c3f0dE
                            (local_1c8,local_1d0,lVar7);
          if ((cVar5 != '\0') && (cVar3 == '\0' || lVar7 == 0)) {
                    /* try { // try from 001f3512 to 001f3523 has its CatchHandler @ 001f3554 */
            lVar7 = _ZN5uu_du11StatPrinter10print_stat17hc47c0332c6a0985fE
                              (local_1d8,&local_188,lVar8);
            if (lVar7 != 0) {
              _ZN4core3ptr41drop_in_place_LT_uu_du__StatPrintInfo_GT_17h4b6987c0043f7e99E
                        (&local_188);
              goto LAB_001f3265;
            }
          }
        }
        lVar9 = lVar9 + lVar10;
        _ZN4core3ptr41drop_in_place_LT_uu_du__StatPrintInfo_GT_17h4b6987c0043f7e99E(&local_188);
        param_2 = local_1c0;
      }
      _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h7eaaff2dc637e02cE(&local_d8,param_2);
      auVar11[0] = -((char)local_d8 == DAT_0010f110);
      auVar11[1] = -(local_d8._1_1_ == UNK_0010f111);
      auVar11[2] = -(local_d8._2_1_ == UNK_0010f112);
      auVar11[3] = -(local_d8._3_1_ == UNK_0010f113);
      auVar11[4] = -(local_d8._4_1_ == UNK_0010f114);
      auVar11[5] = -(local_d8._5_1_ == UNK_0010f115);
      auVar11[6] = -(local_d8._6_1_ == UNK_0010f116);
      auVar11[7] = -(local_d8._7_1_ == UNK_0010f117);
      auVar11[8] = -((char)uStack_d0 == UNK_0010f118);
      auVar11[9] = -(uStack_d0._1_1_ == UNK_0010f119);
      auVar11[10] = -(uStack_d0._2_1_ == UNK_0010f11a);
      auVar11[0xb] = -(uStack_d0._3_1_ == UNK_0010f11b);
      auVar11[0xc] = -(uStack_d0._4_1_ == UNK_0010f11c);
      auVar11[0xd] = -(uStack_d0._5_1_ == UNK_0010f11d);
      auVar11[0xe] = -(uStack_d0._6_1_ == UNK_0010f11e);
      auVar11[0xf] = -(uStack_d0._7_1_ == UNK_0010f11f);
    } while ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar11[0xf] >> 7) << 0xf) != 0xffff);
  }
  puVar4 = local_1d8;
  if (*(char *)(local_1d8 + 9) != '\0') {
    _ZN5uu_du11StatPrinter12convert_size17he529e362fc7c1e00E(&local_d8,local_1d8,lVar9);
    local_1a0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_188 = &DAT_002845f8;
    local_180 = 2;
    local_168 = 0;
    local_178 = &local_1a8;
    local_170 = 1;
                    /* try { // try from 001f31ed to 001f31f7 has its CatchHandler @ 001f3542 */
    local_1a8 = &local_d8;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_188);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5d86c71ca1632ad3E(&local_d8);
    local_d8 = (undefined *)((long)puVar4 + 0x4d);
    uStack_d0 = 
    _ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17h6643b2132dca5a5bE
    ;
    local_188 = &DAT_0010f000;
    local_180 = 1;
    local_168 = 0;
    local_170 = 1;
    local_178 = (undefined8 **)&local_d8;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_188);
  }
  lVar7 = 0;
LAB_001f3265:
  auVar12._8_8_ =
       &PTR__ZN4core3ptr35drop_in_place_LT_uu_du__DuError_GT_17h55943e498f41d83eE_00284558;
  auVar12._0_8_ = lVar7;
  return auVar12;
}