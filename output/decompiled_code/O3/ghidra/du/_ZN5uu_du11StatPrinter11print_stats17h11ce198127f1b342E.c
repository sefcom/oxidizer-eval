undefined  [16] __rustcall uu_du::StatPrinter::print_stats(undefined8 *param_1,undefined8 param_2)

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
  
  std::sync::mpmc::Receiver<T>::recv(&local_d8);
  auVar13[0] = -((char)local_d8 == DAT_0010ef90);
  auVar13[1] = -(local_d8._1_1_ == UNK_0010ef91);
  auVar13[2] = -(local_d8._2_1_ == UNK_0010ef92);
  auVar13[3] = -(local_d8._3_1_ == UNK_0010ef93);
  auVar13[4] = -(local_d8._4_1_ == UNK_0010ef94);
  auVar13[5] = -(local_d8._5_1_ == UNK_0010ef95);
  auVar13[6] = -(local_d8._6_1_ == UNK_0010ef96);
  auVar13[7] = -(local_d8._7_1_ == UNK_0010ef97);
  auVar13[8] = -((char)uStack_d0 == UNK_0010ef98);
  auVar13[9] = -(uStack_d0._1_1_ == UNK_0010ef99);
  auVar13[10] = -(uStack_d0._2_1_ == UNK_0010ef9a);
  auVar13[0xb] = -(uStack_d0._3_1_ == UNK_0010ef9b);
  auVar13[0xc] = -(uStack_d0._4_1_ == UNK_0010ef9c);
  auVar13[0xd] = -(uStack_d0._5_1_ == UNK_0010ef9d);
  auVar13[0xe] = -(uStack_d0._6_1_ == UNK_0010ef9e);
  auVar13[0xf] = -(uStack_d0._7_1_ == UNK_0010ef9f);
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
                    /* try { // try from 001f2f93 to 001f3027 has its CatchHandler @ 001f3193 */
        uVar6 = (**(code **)(local_c0 + 0x60))();
        uucore::mods::error::set_exit_code(uVar6);
        auVar13 = uucore::util_name();
        local_1a8 = (undefined8 *)local_e8;
        local_1a0 = _<&T_as_core::fmt::Display>::fmt;
        local_198 = &local_1e8;
        local_190 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_188 = &DAT_00284068;
        local_180 = 3;
        local_168 = 0;
        local_178 = &local_1a8;
        local_170 = 2;
        local_e8 = auVar13;
        std::io::stdio::_eprint(&local_188);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
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
        cVar5 = core::option::Option<T>::map_or(local_1b0,local_1b8,lVar8);
        if (cVar5 == '\0') {
          cVar5 = core::option::Option<T>::map_or(local_1c8,local_1d0,lVar7);
          if ((cVar5 != '\0') && (cVar3 == '\0' || lVar7 == 0)) {
                    /* try { // try from 001f3142 to 001f3153 has its CatchHandler @ 001f3184 */
            lVar7 = print_stat(local_1d8,&local_188,lVar8);
            if (lVar7 != 0) {
              core::ptr::drop_in_place<uu_du::StatPrintInfo>(&local_188);
              goto LAB_001f2e95;
            }
          }
        }
        lVar9 = lVar9 + lVar10;
        core::ptr::drop_in_place<uu_du::StatPrintInfo>(&local_188);
        param_2 = local_1c0;
      }
      std::sync::mpmc::Receiver<T>::recv(&local_d8,param_2);
      auVar11[0] = -((char)local_d8 == DAT_0010ef90);
      auVar11[1] = -(local_d8._1_1_ == UNK_0010ef91);
      auVar11[2] = -(local_d8._2_1_ == UNK_0010ef92);
      auVar11[3] = -(local_d8._3_1_ == UNK_0010ef93);
      auVar11[4] = -(local_d8._4_1_ == UNK_0010ef94);
      auVar11[5] = -(local_d8._5_1_ == UNK_0010ef95);
      auVar11[6] = -(local_d8._6_1_ == UNK_0010ef96);
      auVar11[7] = -(local_d8._7_1_ == UNK_0010ef97);
      auVar11[8] = -((char)uStack_d0 == UNK_0010ef98);
      auVar11[9] = -(uStack_d0._1_1_ == UNK_0010ef99);
      auVar11[10] = -(uStack_d0._2_1_ == UNK_0010ef9a);
      auVar11[0xb] = -(uStack_d0._3_1_ == UNK_0010ef9b);
      auVar11[0xc] = -(uStack_d0._4_1_ == UNK_0010ef9c);
      auVar11[0xd] = -(uStack_d0._5_1_ == UNK_0010ef9d);
      auVar11[0xe] = -(uStack_d0._6_1_ == UNK_0010ef9e);
      auVar11[0xf] = -(uStack_d0._7_1_ == UNK_0010ef9f);
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
    convert_size(&local_d8,local_1d8,lVar9);
    local_1a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_188 = &DAT_00284098;
    local_180 = 2;
    local_168 = 0;
    local_178 = &local_1a8;
    local_170 = 1;
                    /* try { // try from 001f2e1d to 001f2e27 has its CatchHandler @ 001f3172 */
    local_1a8 = &local_d8;
    std::io::stdio::_print(&local_188);
    core::ptr::drop_in_place<alloc::string::String>(&local_d8);
    local_d8 = (undefined *)((long)puVar4 + 0x4d);
    uStack_d0 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
    local_188 = &DAT_0010ee80;
    local_180 = 1;
    local_168 = 0;
    local_170 = 1;
    local_178 = (undefined8 **)&local_d8;
    std::io::stdio::_print(&local_188);
  }
  lVar7 = 0;
LAB_001f2e95:
  auVar12._8_8_ = &PTR_drop_in_place<uu_du_DuError>_00283ff8;
  auVar12._0_8_ = lVar7;
  return auVar12;
}