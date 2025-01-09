/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined  [16] __rustcall
uu_dd::progress::ProgUpdate::write_prog_line(ulong *param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined *local_160;
  undefined8 local_158;
  char ***local_150;
  undefined8 local_148;
  undefined8 local_140;
  char **local_130;
  code *local_128;
  undefined8 *local_120;
  code *local_118;
  undefined8 *local_110;
  code *local_108;
  char **local_100;
  code *local_f8;
  char **local_f0;
  code *local_e8;
  char **local_e0;
  code *local_d8;
  char **local_d0;
  code *local_c8;
  char *local_c0;
  ulong local_b8;
  char *local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88 [16];
  undefined8 local_78 [3];
  char *local_60 [3];
  char *local_48 [3];
  
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  local_178 = uVar1;
  uStack_170 = uVar2;
  numbers::to_magnitude_and_suffix(local_78,uVar1,uVar2,1);
                    /* try { // try from 001efc95 to 001efca9 has its CatchHandler @ 001f027d */
  numbers::to_magnitude_and_suffix(local_60,uVar1,uVar2,0);
  uVar3 = *param_1;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar3;
  uVar9 = CONCAT44(0,*(uint *)(param_1 + 1));
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar9 / 1000000;
  auVar5 = auVar12 * ZEXT816(1000) + auVar5;
  auVar12 = core::cmp::max_by(auVar5._0_8_,auVar5._8_8_);
  if (auVar12._0_8_ == 0 && auVar12._8_8_ == 0) {
                    /* try { // try from 001f026b to 001f0277 has its CatchHandler @ 001f02a1 */
    uVar8 = core::panicking::panic_const::panic_const_div_by_zero
                      (&PTR_s_src_uu_dd_src_progress_rs_00262478);
                    /* catch() { ... } // from try @ 001efe04 with catch @ 001f0278
                       catch() { ... } // from try @ 001f0230 with catch @ 001f0278 */
    core::ptr::drop_in_place<alloc::string::String>(local_48);
    core::ptr::drop_in_place<alloc::string::String>(local_60);
    core::ptr::drop_in_place<alloc::string::String>(local_78);
    auVar12 = _Unwind_Resume(uVar8);
    return auVar12;
  }
  auVar12 = __udivti3(uVar1,uVar2,auVar12._0_8_);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auVar12._0_8_;
                    /* try { // try from 001efd05 to 001efd1c has its CatchHandler @ 001f02a1 */
  numbers::to_magnitude_and_suffix
            (local_48,SUB168(auVar4 * ZEXT816(1000),0),
             SUB168(auVar4 * ZEXT816(1000),8) + auVar12._8_8_ * 1000,1);
  auVar10._8_4_ = (int)(uVar3 >> 0x20);
  auVar10._0_8_ = uVar3;
  auVar10._12_4_ = _UNK_00119424;
  local_c0 = "\r+ records in\n records out\n";
  if (param_3 == 0) {
    local_c0 = (char *)0x1;
  }
  local_b8 = (ulong)param_3;
  local_b0 = "\n";
  if (param_3 != 0) {
    local_b0 = (char *)0x1;
  }
  local_a8 = (ulong)(param_3 ^ 1);
  local_a0 = 0;
  local_98 = 1;
  local_90 = 0;
  local_130 = (char **)0x0;
  local_120 = (undefined8 *)CONCAT35(local_120._5_3_,2);
  local_128 = (code *)0x6;
                    /* try { // try from 001efdde to 001efdfd has its CatchHandler @ 001f0282 */
  lVar7 = _<uucore::features::format::num_format::Float_as_uucore::features::format::num_format::Formatter>
          ::fmt((double)uVar9 / _s__00118af0 +
                (auVar10._8_8_ - _UNK_001193a8) +
                ((double)CONCAT44(_DAT_00119420,(int)uVar3) - _DAT_001193a0),&local_130,&local_a0);
  if (lVar7 == 0) {
                    /* try { // try from 001efe60 to 001f022a has its CatchHandler @ 001f0282 */
    core::str::converts::from_utf8(&local_130,local_98,local_90);
    local_88 = core::result::Result<T,E>::unwrap(&local_130);
    auVar11[0] = -((char)local_178 == DAT_00119580);
    auVar11[1] = -(local_178._1_1_ == UNK_00119581);
    auVar11[2] = -(local_178._2_1_ == UNK_00119582);
    auVar11[3] = -(local_178._3_1_ == UNK_00119583);
    auVar11[4] = -(local_178._4_1_ == UNK_00119584);
    auVar11[5] = -(local_178._5_1_ == UNK_00119585);
    auVar11[6] = -(local_178._6_1_ == UNK_00119586);
    auVar11[7] = -(local_178._7_1_ == UNK_00119587);
    auVar11[8] = -((char)uStack_170 == UNK_00119588);
    auVar11[9] = -(uStack_170._1_1_ == UNK_00119589);
    auVar11[10] = -(uStack_170._2_1_ == UNK_0011958a);
    auVar11[0xb] = -(uStack_170._3_1_ == UNK_0011958b);
    auVar11[0xc] = -(uStack_170._4_1_ == UNK_0011958c);
    auVar11[0xd] = -(uStack_170._5_1_ == UNK_0011958d);
    auVar11[0xe] = -(uStack_170._6_1_ == UNK_0011958e);
    auVar11[0xf] = -(uStack_170._7_1_ == UNK_0011958f);
    local_150 = &local_130;
    local_100 = local_48;
    if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(auVar11[0xf] >> 7) << 0xf
                ) == 0xffff) {
      local_130 = &local_c0;
      local_128 = _<&T_as_core::fmt::Display>::fmt;
      local_120 = &local_178;
      local_118 = core::fmt::num::_<impl_core::fmt::Display_for_u128>::fmt;
      local_110 = (undefined8 *)local_88;
      local_108 = _<&T_as_core::fmt::Display>::fmt;
      local_f8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_f0 = &local_b0;
      local_e8 = _<&T_as_core::fmt::Display>::fmt;
      local_160 = &DAT_00262308;
      local_158 = 5;
      local_140 = 0;
      local_148 = 5;
      lVar7 = _<std::io::stdio::Stderr_as_std::io::Write>::write_fmt(param_2,&local_160);
      if (lVar7 == 0) goto LAB_001f0230;
      auVar12 = uucore::mods::error::
                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                ::from(lVar7);
    }
    else if (uStack_170 < (local_178 < 1000)) {
      local_130 = &local_c0;
      local_128 = _<&T_as_core::fmt::Display>::fmt;
      local_120 = &local_178;
      local_118 = core::fmt::num::_<impl_core::fmt::Display_for_u128>::fmt;
      local_110 = (undefined8 *)local_88;
      local_108 = _<&T_as_core::fmt::Display>::fmt;
      local_f8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_f0 = &local_b0;
      local_e8 = _<&T_as_core::fmt::Display>::fmt;
      local_160 = &DAT_00262358;
      local_158 = 5;
      local_140 = 0;
      local_148 = 5;
      lVar7 = _<std::io::stdio::Stderr_as_std::io::Write>::write_fmt
                        (param_2,&local_160,uStack_170 - (local_178 < 1000));
      if (lVar7 == 0) goto LAB_001f0230;
      auVar12 = uucore::mods::error::
                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                ::from(lVar7);
    }
    else if (uStack_170 < (local_178 < 0x400)) {
      local_130 = &local_c0;
      local_128 = _<&T_as_core::fmt::Display>::fmt;
      local_120 = &local_178;
      local_118 = core::fmt::num::_<impl_core::fmt::Display_for_u128>::fmt;
      local_110 = local_78;
      local_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_100 = (char **)local_88;
      local_f8 = _<&T_as_core::fmt::Display>::fmt;
      local_e8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_e0 = &local_b0;
      local_d8 = _<&T_as_core::fmt::Display>::fmt;
      local_160 = &DAT_002623a8;
      local_158 = 6;
      local_140 = 0;
      local_148 = 6;
      local_f0 = local_48;
      lVar7 = _<std::io::stdio::Stderr_as_std::io::Write>::write_fmt(param_2,&local_160);
      if (lVar7 == 0) {
LAB_001f0230:
                    /* try { // try from 001f0230 to 001f023c has its CatchHandler @ 001f0278 */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a0);
                    /* try { // try from 001f023d to 001f0249 has its CatchHandler @ 001f02a1 */
        core::ptr::drop_in_place<alloc::string::String>(local_48);
                    /* try { // try from 001f024a to 001f0256 has its CatchHandler @ 001f027d */
        core::ptr::drop_in_place<alloc::string::String>(local_60);
        core::ptr::drop_in_place<alloc::string::String>(local_78);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar9;
        return auVar6 << 0x40;
      }
      auVar12 = uucore::mods::error::
                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                ::from(lVar7);
    }
    else {
      local_130 = &local_c0;
      local_128 = _<&T_as_core::fmt::Display>::fmt;
      local_120 = &local_178;
      local_118 = core::fmt::num::_<impl_core::fmt::Display_for_u128>::fmt;
      local_110 = local_78;
      local_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_100 = local_60;
      local_f8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_f0 = (char **)local_88;
      local_e8 = _<&T_as_core::fmt::Display>::fmt;
      local_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_d0 = &local_b0;
      local_c8 = _<&T_as_core::fmt::Display>::fmt;
      local_160 = &DAT_00262408;
      local_158 = 7;
      local_140 = 0;
      local_148 = 7;
      local_e0 = local_48;
      lVar7 = _<std::io::stdio::Stderr_as_std::io::Write>::write_fmt(param_2,&local_160);
      if (lVar7 == 0) goto LAB_001f0230;
      auVar12 = uucore::mods::error::
                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                ::from(lVar7);
    }
  }
  else {
    auVar12 = uucore::mods::error::
              _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
              ::from(lVar7);
  }
                    /* try { // try from 001efe04 to 001efe10 has its CatchHandler @ 001f0278 */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a0);
                    /* try { // try from 001efe11 to 001efe1d has its CatchHandler @ 001f02a1 */
  core::ptr::drop_in_place<alloc::string::String>(local_48);
                    /* try { // try from 001efe1e to 001efe2a has its CatchHandler @ 001f027d */
  core::ptr::drop_in_place<alloc::string::String>(local_60);
  core::ptr::drop_in_place<alloc::string::String>(local_78);
  return auVar12;
}