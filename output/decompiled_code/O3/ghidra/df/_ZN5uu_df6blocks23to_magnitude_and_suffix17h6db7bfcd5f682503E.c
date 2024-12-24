undefined8 __rustcall
uu_df::blocks::to_magnitude_and_suffix(undefined8 param_1,ulong param_2,ulong param_3,byte param_4)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 ***pppuVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  bool bVar18;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_198;
  long *local_188;
  code *local_180;
  long **local_178;
  code *local_170;
  undefined4 *local_168;
  code *local_160;
  long local_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  undefined8 **local_138;
  code *local_130;
  undefined8 **local_128;
  code *local_120;
  undefined8 local_118;
  long *local_108;
  long local_100;
  undefined local_f8 [16];
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined local_d8 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  bVar5 = 2;
  if ((byte)(param_4 - 2) < 2) {
    bVar5 = param_4 - 2;
  }
  if (bVar5 == 0) {
    local_1b8 = 0x1000000000000000;
    local_1b0 = 0x4000000000000;
    local_1a8 = 0x10000000000;
    local_c0 = &DAT_0011609f;
    local_158 = 0x4000000;
    local_148 = 0x10000;
    local_1c0 = 0x40;
    local_198 = 0x40000000;
    local_150 = 0x100000;
    uVar13 = 0x400;
    local_40 = &DAT_001160a7;
    local_50 = &DAT_001160a6;
    local_60 = &DAT_001160a5;
    local_70 = &DAT_001160a4;
    local_80 = &DAT_001160a3;
    local_90 = &DAT_001160a2;
    local_a0 = &DAT_001160a1;
    local_b0 = &DAT_001160a0;
    local_b8 = 1;
    local_a8 = 1;
    local_1c8 = 0;
    local_1d0 = 0;
    uVar17 = 0;
  }
  else if (bVar5 == 1) {
    local_158 = 0x33b2e3c;
    uVar17 = 0x9fd0803ce8000000;
    local_148 = 0xd3c2;
    local_1d0 = 0x1bcecceda1000000;
    local_1c0 = 0x36;
    local_1c8 = 0x35c9adc5dea00000;
    local_1b8 = 1000000000000000000;
    local_1b0 = 1000000000000000;
    local_1a8 = 1000000000000;
    local_c0 = &DAT_0011609f;
    local_198 = 1000000000;
    local_150 = 1000000;
    uVar13 = 1000;
    local_40 = &DAT_001160b6;
    local_50 = &DAT_001160b4;
    local_60 = &DAT_001160b2;
    local_70 = &DAT_001160b0;
    local_80 = &DAT_001160ae;
    local_90 = &DAT_001160ac;
    local_a0 = &DAT_001160aa;
    local_a8 = 2;
    local_b0 = &DAT_001160a8;
    local_b8 = 1;
  }
  else {
    local_b8 = 0;
    bVar18 = (param_4 & 1) != 0;
    uVar13 = 0x400;
    if (!bVar18) {
      uVar13 = 1000;
    }
    local_150 = 0x100000;
    if (!bVar18) {
      local_150 = 1000000;
    }
    local_198 = 0x40000000;
    if (!bVar18) {
      local_198 = 1000000000;
    }
    local_1a8 = 0x10000000000;
    if (!bVar18) {
      local_1a8 = 1000000000000;
    }
    local_1b0 = 0x4000000000000;
    if (!bVar18) {
      local_1b0 = 1000000000000000;
    }
    local_1b8 = 0x1000000000000000;
    if (!bVar18) {
      local_1b8 = 1000000000000000000;
    }
    local_1c0 = 0x40;
    if (!bVar18) {
      local_1c0 = 0x36;
    }
    local_1c8 = 0x35c9adc5dea00000;
    if (bVar18) {
      local_1c8 = local_b8;
    }
    local_148 = 0x10000;
    if (!bVar18) {
      local_148 = 0xd3c2;
    }
    local_1d0 = 0x1bcecceda1000000;
    if (bVar18) {
      local_1d0 = local_b8;
    }
    local_158 = 0x4000000;
    if (!bVar18) {
      local_158 = 0x33b2e3c;
    }
    uVar17 = 0x9fd0803ce8000000;
    if (bVar18) {
      uVar17 = local_b8;
    }
    local_c0 = (undefined *)0x1;
    local_b0 = &DAT_001160a0;
    if (!bVar18) {
      local_b0 = &DAT_001160b8;
    }
    local_40 = &DAT_001160a7;
    local_50 = &DAT_001160a6;
    local_60 = &DAT_001160a5;
    local_70 = &DAT_001160a4;
    local_80 = &DAT_001160a3;
    local_90 = &DAT_001160a2;
    local_a0 = &DAT_001160a1;
    local_a8 = 1;
  }
  uVar9 = (ulong)(uVar13 != 0) - 1;
  local_140 = param_2;
  local_98 = local_a8;
  local_88 = local_a8;
  local_78 = local_a8;
  local_68 = local_a8;
  local_58 = local_a8;
  local_48 = local_a8;
  local_38 = local_a8;
  if (uVar9 < param_3 || uVar9 - param_3 < (ulong)(uVar13 - 1 < param_2)) {
    iVar16 = 1;
    uVar9 = 0;
    if (-(ulong)(local_150 < uVar13) < param_3 ||
        -(ulong)(local_150 < uVar13) - param_3 < (ulong)(local_150 - uVar13 < param_2)) {
      iVar16 = 2;
      uVar13 = local_150;
      uVar9 = 0;
      if (-(ulong)(local_198 < local_150) < param_3 ||
          -(ulong)(local_198 < local_150) - param_3 < (ulong)(local_198 - local_150 < param_2)) {
        iVar16 = 3;
        uVar13 = local_198;
        uVar9 = 0;
        if (-(ulong)(local_1a8 < local_198) < param_3 ||
            -(ulong)(local_1a8 < local_198) - param_3 < (ulong)(local_1a8 - local_198 < param_2)) {
          iVar16 = 4;
          uVar13 = local_1a8;
          uVar9 = 0;
          if (-(ulong)(local_1b0 < local_1a8) < param_3 ||
              -(ulong)(local_1b0 < local_1a8) - param_3 < (ulong)(local_1b0 - local_1a8 < param_2))
          {
            iVar16 = 5;
            uVar13 = local_1b0;
            uVar9 = 0;
            if (-(ulong)(local_1b8 < local_1b0) < param_3 ||
                -(ulong)(local_1b8 < local_1b0) - param_3 < (ulong)(local_1b8 - local_1b0 < param_2)
               ) {
              uVar7 = local_1c0 - (local_1c8 < local_1b8);
              iVar16 = 6;
              uVar13 = local_1b8;
              uVar9 = 0;
              if (uVar7 < param_3 || uVar7 - param_3 < (ulong)(local_1c8 - local_1b8 < param_2)) {
                uVar8 = (local_148 - local_1c0) - (ulong)(local_1d0 < local_1c8);
                iVar16 = 7;
                uVar7 = (ulong)(local_1d0 - local_1c8 < param_2);
                uVar12 = uVar8 - param_3;
                uVar13 = local_1c8;
                uVar9 = local_1c0;
                if ((uVar8 < param_3 || uVar12 < uVar7) &&
                   (uVar8 = (local_158 - local_148) - (ulong)(uVar17 < local_1d0), iVar16 = 8,
                   uVar13 = local_1d0, uVar9 = local_148,
                   uVar8 < param_3 || uVar8 - param_3 < (ulong)(uVar17 - local_1d0 < param_2))) {
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_bounds_check(10,10,&PTR_DAT_00242ba0,uVar12 - uVar7);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar13 = 1;
    uVar9 = 0;
    iVar16 = 0;
  }
  auVar3._8_8_ = uVar9;
  auVar3._0_8_ = uVar13;
  local_f8 = __udivti3(param_2,param_3,uVar13,uVar9);
  lVar10 = local_f8._8_8_;
  uVar17 = local_f8._0_8_;
  uVar7 = SUB168(local_f8 * auVar3,0);
  uVar12 = local_140 - uVar7;
  lVar15 = (param_3 - SUB168(local_f8 * auVar3,8)) - (ulong)(local_140 < uVar7);
  uVar7 = (ulong)(uint)(iVar16 << 4);
  local_e8._0_4_ = *(undefined4 *)((long)&local_c0 + uVar7);
  local_e8._4_4_ = *(undefined4 *)((long)&local_c0 + uVar7 + 4);
  uStack_e0 = *(undefined4 *)((long)&local_b8 + uVar7);
  uStack_dc = *(undefined4 *)((long)&local_b8 + uVar7 + 4);
  if (uVar12 == 0 && lVar15 == 0) {
    local_138 = (undefined8 **)local_f8;
LAB_001d538a:
    local_130 = core::fmt::num::_<impl_core::fmt::Display_for_u128>::fmt;
    local_128 = (undefined8 **)&local_e8;
    local_120 = _<&T_as_core::fmt::Display>::fmt;
    local_188 = (long *)&DAT_001104e8;
    local_180 = (code *)0x2;
    local_168 = (undefined4 *)0x0;
    local_178 = (long **)&local_138;
    local_170 = (code *)0x2;
    pppuVar11 = (undefined8 ***)&local_188;
  }
  else {
    if (uVar9 < (uVar13 < 10)) {
      core::panicking::panic_const::panic_const_div_by_zero(&PTR_DAT_00242bb8);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    uVar13 = uVar13 >> 1;
    uVar9 = uVar9 >> 1;
    uVar7 = (uVar13 + uVar9 + (ulong)CARRY8(uVar13,uVar9)) % 5;
    uVar8 = uVar13 - uVar7;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    uVar6 = SUB168(auVar2 * ZEXT816(0xcccccccccccccccd),0);
    lVar14 = (uVar9 - (uVar13 < uVar7)) * -0x3333333333333333 +
             SUB168(auVar2 * ZEXT816(0xcccccccccccccccd),8) + uVar8 * -0x3333333333333334;
    auVar4._8_8_ = lVar14;
    auVar4._0_8_ = uVar6;
    local_d8 = __udivti3(uVar12,lVar15,uVar6,lVar14);
    uVar13 = local_d8._0_8_;
    uVar9 = SUB168(local_d8 * auVar4,0);
    if (lVar15 - SUB168(local_d8 * auVar4,8) == (ulong)(uVar12 < uVar9) && uVar12 == uVar9) {
      local_178 = (long **)local_d8;
    }
    else {
      if ((lVar10 != 0 || (ulong)-lVar10 < (ulong)(9 < uVar17)) ||
         (uVar13 == 9 && local_d8._8_8_ == 0)) {
        local_108 = (long *)(uVar17 + 1);
        local_100 = lVar10 + (ulong)(0xfffffffffffffffe < uVar17);
        local_138 = &local_108;
        goto LAB_001d538a;
      }
      local_108 = (long *)(uVar13 + 1);
      local_100 = local_d8._8_8_ + (ulong)(0xfffffffffffffffe < uVar13);
      local_178 = &local_108;
    }
    local_188 = (long *)local_f8;
    local_180 = core::fmt::num::_<impl_core::fmt::Display_for_u128>::fmt;
    local_170 = core::fmt::num::_<impl_core::fmt::Display_for_u128>::fmt;
    local_168 = (undefined4 *)&local_e8;
    local_160 = _<&T_as_core::fmt::Display>::fmt;
    local_138 = (undefined8 **)&DAT_00242bd0;
    local_130 = (code *)0x3;
    local_118 = 0;
    local_128 = &local_188;
    local_120 = (code *)0x3;
    pppuVar11 = &local_138;
  }
  core::option::Option<T>::map_or_else(param_1,pppuVar11);
  return param_1;
}