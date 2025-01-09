long __rustcall
uu_expand::expand_line
          (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined auVar7 [16];
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  ulong extraout_RDX;
  uleb128 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined **ppuVar19;
  char cVar20;
  bool bVar21;
  undefined auVar22 [16];
  long local_98;
  long local_70;
  long local_68;
  ulong local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  local_58 = param_1;
  local_50 = param_3;
  local_48 = param_4;
  if (uVar4 != 0) {
    cVar1 = *(char *)(param_5 + 0x49);
    cVar2 = *(char *)(param_5 + 0x48);
    lVar12 = *(long *)(param_5 + 0x38);
    uVar5 = *(ulong *)(param_5 + 0x40);
    lVar6 = *(long *)(param_1 + 8);
    bVar8 = true;
    uVar3 = *(undefined *)(param_5 + 0x4a);
    local_98 = 0;
    uVar16 = 0;
    do {
      cVar20 = *(char *)(lVar6 + uVar16);
      if (cVar1 == '\0') {
        if (cVar20 == '\t') {
          lVar15 = 1;
        }
        else {
          cVar20 = (cVar20 != '\b') * '\x02';
LAB_001b2d03:
          lVar10 = 1;
          lVar15 = 1;
          if (cVar20 != '\x01') goto LAB_001b2d12;
        }
LAB_001b2de0:
        uVar17 = next_tabstop(local_50,local_48,local_98,uVar3);
        auVar7._8_8_ = uVar17;
        auVar7._0_8_ = lVar12;
        auVar22._8_8_ = uVar17;
        auVar22._0_8_ = lVar12;
        local_98 = local_98 + uVar17;
        if ((!bVar8) && (cVar2 != '\0')) {
          ppuVar19 = &PTR_DAT_0021cf48;
          goto LAB_001b2c2b;
        }
        if (uVar17 <= uVar5) {
          if (((uVar17 != 0) && (uVar17 < uVar5)) && (*(char *)(lVar12 + uVar17) < -0x40)) {
            uVar11 = core::str::slice_error_fail(lVar12,uVar5,0,uVar17,&PTR_DAT_0021cf60);
                    /* catch() { ... } // from try @ 001b2ebe with catch @ 001b2f6d */
                    /* try { // try from 001b2f70 to 001b2f79 has its CatchHandler @ 001b2f82 */
            core::ptr::drop_in_place<alloc::string::String>(&local_70);
            lVar12 = _Unwind_Resume(uVar11);
            return lVar12;
          }
          lVar10 = param_2[2];
          if ((ulong)(*param_2 - lVar10) <= uVar17) goto LAB_001b2da6;
          lVar18 = param_2[1] + lVar10;
          goto LAB_001b2c50;
        }
        ::alloc::str::_<impl_str>::repeat(&local_70,&DAT_0011d0ab,1,uVar17);
        uVar17 = local_60;
        lVar10 = param_2[2];
        if (local_60 < (ulong)(*param_2 - lVar10)) {
          (*(code *)PTR_memcpy_00220ac0)(param_2[1] + lVar10,local_68,local_60);
          param_2[2] = lVar10 + uVar17;
        }
        else {
                    /* try { // try from 001b2ebe to 001b2ec8 has its CatchHandler @ 001b2f6d */
          lVar10 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold
                             (param_2,local_68,local_60);
          if (lVar10 != 0) {
            core::ptr::drop_in_place<alloc::string::String>(&local_70);
            return lVar10;
          }
        }
        core::ptr::drop_in_place<alloc::string::String>(&local_70);
      }
      else {
        uVar17 = uVar16 + 1 + (ulong)(cVar20 < '\0');
        lVar15 = 1;
        lVar10 = 1;
        if (uVar4 < uVar17) {
LAB_001b2bf0:
          local_98 = local_98 + lVar10;
        }
        else {
          uVar11 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                             (uVar16,uVar17,lVar6,uVar4,&PTR_DAT_0021cf30);
          core::str::converts::from_utf8(&local_70,uVar11);
          if (local_70 != 0) {
            cVar20 = '\x02';
            goto LAB_001b2d03;
          }
          lVar15 = (ulong)(cVar20 < '\0') + 1;
          local_38 = local_60 + local_68;
          local_40 = local_68;
          iVar9 = core::str::validations::next_code_point(&local_40);
          puVar14 = (uleb128 *)(extraout_RDX & 0xffffffff);
          if (iVar9 == 0) {
            puVar14 = &uleb128_00110000;
          }
          uVar13 = (uint)puVar14;
          if (uVar13 == 8) {
            cVar20 = '\0';
LAB_001b2dc7:
            lVar10 = 0;
          }
          else {
            if (uVar13 == 9) {
              cVar20 = '\x01';
              goto LAB_001b2dc7;
            }
            lVar10 = 1;
            cVar20 = '\x02';
            if (uVar13 == 0x110000) goto LAB_001b2d03;
            if (uVar13 < 0x7f) {
              if (uVar13 < 0x20) goto LAB_001b2dc7;
            }
            else {
              if (uVar13 < 0xa0) goto LAB_001b2dc7;
              lVar10 = unicode_width::tables::charwidth::lookup_width(puVar14);
            }
          }
          if (cVar20 == '\x01') goto LAB_001b2de0;
LAB_001b2d12:
          if (cVar20 == '\x02') goto LAB_001b2bf0;
          bVar21 = local_98 == 0;
          local_98 = local_98 + -1;
          if (bVar21) {
            local_98 = 0;
          }
        }
        if (uVar4 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(uVar16,uVar4,&PTR_DAT_0021cf78);
        }
        if (*(char *)(lVar6 + uVar16) != ' ') {
          bVar8 = false;
        }
        ppuVar19 = &PTR_DAT_0021cf90;
LAB_001b2c2b:
        auVar22 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                            (uVar16,lVar15 + uVar16,lVar6,uVar4,ppuVar19);
        lVar10 = param_2[2];
        auVar7 = auVar22;
        if (auVar22._8_8_ < (ulong)(*param_2 - lVar10)) {
          lVar18 = param_2[1] + lVar10;
LAB_001b2c50:
          (*(code *)PTR_memcpy_00220ac0)(lVar18,auVar22._0_8_,auVar22._8_8_);
          param_2[2] = auVar22._8_8_ + lVar10;
        }
        else {
LAB_001b2da6:
          lVar10 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold
                             (param_2,auVar7._0_8_,auVar7._8_8_);
          if (lVar10 != 0) {
            return lVar10;
          }
        }
      }
      uVar16 = uVar16 + lVar15;
    } while (uVar16 < uVar4);
  }
  lVar12 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(param_2);
  if (lVar12 == 0) {
    ::alloc::vec::Vec<T,A>::truncate(local_58,0);
    lVar12 = 0;
  }
  return lVar12;
}