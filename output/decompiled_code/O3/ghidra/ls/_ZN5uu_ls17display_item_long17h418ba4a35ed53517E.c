undefined  [16] __rustcall
uu_ls::display_item_long
          (long param_1,long param_2,long param_3,undefined8 param_4,long param_5,long param_6,
          char param_7)

{
  char cVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  bool bVar14;
  undefined auVar15 [16];
  undefined8 ***local_178;
  code *local_170;
  undefined8 ***local_168;
  code *local_160;
  undefined8 ***local_158;
  code *local_150;
  undefined8 ***local_148;
  code *local_140;
  undefined8 ***local_138;
  undefined8 **ppuStack_130;
  undefined8 ***local_128;
  code *local_120;
  undefined8 ***local_118;
  code *pcStack_110;
  undefined8 ***local_108;
  code *local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 ***local_c8;
  code *pcStack_c0;
  undefined8 ***local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 ***local_88;
  code *local_80;
  undefined8 local_78;
  long local_70;
  undefined8 ***local_68;
  code *pcStack_60;
  undefined8 ***local_58;
  long local_50;
  undefined8 **local_48 [3];
  
  local_e0 = (undefined8 **)0x0;
  local_d8 = 1;
  local_d0 = 0;
  local_e8 = param_1;
  local_b0 = param_4;
  local_70 = param_5;
  if (*(char *)(param_6 + 0x1d) != '\x02') {
                    /* try { // try from 0022a50d to 0022a51c has its CatchHandler @ 0022b74e */
    colors::StyleManager::apply_normal(&local_118,param_6);
    ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&DAT_00123d10;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_138;
    local_160 = (code *)0x1;
                    /* try { // try from 0022a55f to 0022a57f has its CatchHandler @ 0022b6c5 */
    local_138 = &local_118;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312898);
                    /* try { // try from 0022a580 to 0022a604 has its CatchHandler @ 0022b74e */
    core::ptr::drop_in_place<alloc::string::String>(&local_118);
  }
  cVar1 = *(char *)(param_3 + 0xee);
  if (cVar1 != '\0') {
    ::alloc::vec::Vec<T,A>::append_elements(&local_e0,&DAT_00136340,2);
  }
  lVar9 = PathData::get_metadata(local_e8,local_b0);
  if (lVar9 == 0) {
    if ((*(byte *)(local_e8 + 0xf8) & 1) == 0) {
switchD_0022b500_caseD_3:
      local_a8 = (undefined8 *)&DAT_00136346;
    }
    else {
      uVar8 = *(uint *)(local_e8 + 0xfc) & 0xf000;
      switch(uVar8 << 0x13 | uVar8 - 0x2000 >> 0xd) {
      case 0:
        local_a8 = (undefined8 *)&DAT_00134e87;
        break;
      case 1:
        local_a8 = (undefined8 *)&DAT_00136345;
        break;
      case 2:
        local_a8 = (undefined8 *)&DAT_00136344;
        break;
      default:
        goto switchD_0022b500_caseD_3;
      case 4:
        local_a8 = (undefined8 *)&DAT_001352b4;
      }
    }
    uStack_a0 = 1;
    bVar14 = 1 < *(ulong *)(local_e8 + 0x40);
    local_c8 = (undefined8 ***)&DAT_00000001;
    if (bVar14) {
      local_c8 = (undefined8 ***)&DAT_00134871;
    }
    pcStack_c0 = (code *)(ulong)bVar14;
    pad_left(&local_138,&DAT_0013633a,1,*(undefined8 *)(param_2 + 8));
    local_178 = (undefined8 ***)&local_a8;
    local_170 = _<&T_as_core::fmt::Display>::fmt;
    local_168 = &local_c8;
    local_160 = _<&T_as_core::fmt::Display>::fmt;
    local_150 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_118 = (undefined8 ***)&DAT_00312a18;
    pcStack_110 = (code *)0x3;
    uStack_f8 = 0;
    local_108 = &local_178;
    local_100 = (code *)0x3;
                    /* try { // try from 0022abfe to 0022ac1e has its CatchHandler @ 0022b63e */
    local_158 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_118);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312a48);
                    /* try { // try from 0022ac1f to 0022ac52 has its CatchHandler @ 0022b74e */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
    if (*(char *)(param_3 + 0xe2) != '\0') {
      pad_right(&local_118,&DAT_0013633a,1,*(undefined8 *)(param_2 + 0x10));
      ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (undefined8 ***)&PTR_DAT_00312908;
      local_170 = (code *)0x1;
      local_158 = (undefined8 ****)0x0;
      local_160 = (code *)0x1;
                    /* try { // try from 0022ac89 to 0022aca9 has its CatchHandler @ 0022b587 */
      local_168 = &local_138;
      local_138 = &local_118;
      uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (&local_e0,&local_178);
      core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312a60);
                    /* try { // try from 0022acaa to 0022acda has its CatchHandler @ 0022b74e */
      core::ptr::drop_in_place<alloc::string::String>(&local_118);
    }
    if (*(char *)(param_3 + 0xe1) != '\0') {
      pad_right(&local_118,&DAT_0013633a,1,*(undefined8 *)(param_2 + 0x18));
      ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (undefined8 ***)&PTR_DAT_00312908;
      local_170 = (code *)0x1;
      local_158 = (undefined8 ****)0x0;
      local_160 = (code *)0x1;
                    /* try { // try from 0022ad11 to 0022ad31 has its CatchHandler @ 0022b575 */
      local_168 = &local_138;
      local_138 = &local_118;
      uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (&local_e0,&local_178);
      core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312a78);
                    /* try { // try from 0022ad32 to 0022ad6a has its CatchHandler @ 0022b74e */
      core::ptr::drop_in_place<alloc::string::String>(&local_118);
    }
    if (*(char *)(param_3 + 0xeb) != '\0') {
      pad_right(&local_118,*(undefined8 *)(local_e8 + 0x38),*(undefined8 *)(local_e8 + 0x40),
                *(undefined8 *)(param_2 + 0x20));
      ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (undefined8 ***)&PTR_DAT_00312908;
      local_170 = (code *)0x1;
      local_158 = (undefined8 ****)0x0;
      local_160 = (code *)0x1;
                    /* try { // try from 0022ada1 to 0022adc1 has its CatchHandler @ 0022b563 */
      local_168 = &local_138;
      local_138 = &local_118;
      uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (&local_e0,&local_178);
      core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312a90);
                    /* try { // try from 0022adc2 to 0022adf2 has its CatchHandler @ 0022b74e */
      core::ptr::drop_in_place<alloc::string::String>(&local_118);
    }
    if (*(char *)(param_3 + 0xe0) != '\0') {
      pad_right(&local_118,&DAT_0013633a,1,*(undefined8 *)(param_2 + 0x10));
      ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (undefined8 ***)&PTR_DAT_00312908;
      local_170 = (code *)0x1;
      local_158 = (undefined8 ****)0x0;
      local_160 = (code *)0x1;
                    /* try { // try from 0022ae29 to 0022ae49 has its CatchHandler @ 0022b551 */
      local_168 = &local_138;
      local_138 = &local_118;
      uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (&local_e0,&local_178);
      core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312aa8);
                    /* try { // try from 0022ae4a to 0022ae53 has its CatchHandler @ 0022b74e */
      core::ptr::drop_in_place<alloc::string::String>(&local_118);
    }
    local_178 = (undefined8 ***)0x0;
    local_170 = (code *)0x1;
    local_168 = (undefined8 ***)0x0;
                    /* try { // try from 0022ae7f to 0022ae84 has its CatchHandler @ 0022b53f */
    ansi_width::ansi_width(local_d8,local_d0);
                    /* try { // try from 0022ae85 to 0022aeb8 has its CatchHandler @ 0022b53a */
    display_item_name(&local_88,local_e8,param_3,0);
                    /* try { // try from 0022aebd to 0022aed8 has its CatchHandler @ 0022b73c */
    pad_left(&local_c8,&DAT_0013633a,1,*(undefined8 *)(param_2 + 0x28));
    lVar12 = local_70;
                    /* try { // try from 0022aee1 to 0022aefe has its CatchHandler @ 0022b61a */
    pad_left(&local_138,&DAT_0013633a,1,0xc);
    pcStack_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_00312ac0;
    local_170 = (code *)0x3;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_118;
    local_160 = (code *)0x2;
                    /* try { // try from 0022af4a to 0022af6a has its CatchHandler @ 0022b61f */
    local_118 = &local_c8;
    local_108 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312af0);
                    /* try { // try from 0022af6b to 0022af74 has its CatchHandler @ 0022b61a */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022af75 to 0022b02a has its CatchHandler @ 0022b73c */
    core::ptr::drop_in_place<alloc::string::String>(&local_c8);
    lVar9 = local_d0;
    if (cVar1 != '\0') {
      core::str::_<impl_str>::trim_matches(local_80,local_78);
      dired::calculate_and_update_positions(lVar12,lVar9);
    }
    local_108 = (undefined8 ***)(param_3 + 0xfa);
    pcStack_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_100 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&DAT_00128d70;
    local_170 = (code *)0x2;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_118;
    local_160 = (code *)0x2;
    local_118 = &local_88;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312b08);
                    /* try { // try from 0022b02b to 0022b037 has its CatchHandler @ 0022b74e */
    core::ptr::drop_in_place<alloc::string::String>(&local_88);
    goto LAB_0022b428;
  }
  bVar6 = uucore::features::fsxattr::has_acl
                    (*(undefined8 *)(local_e8 + 8),*(undefined8 *)(local_e8 + 0x10));
  uucore::features::fs::display_permissions(&local_88,lVar9,1);
  bVar14 = 1 < *(ulong *)(local_e8 + 0x40);
  pcStack_60 = (code *)(ulong)bVar14;
  local_68 = (undefined8 ***)&DAT_00134871;
  if (!bVar14) {
    local_68 = (undefined8 ***)&DAT_00000001;
  }
  local_a8 = (undefined8 *)&DAT_00136343;
  if (bVar6 == 0) {
    local_a8 = (undefined8 **)0x1;
  }
  uStack_a0 = (ulong)bVar6;
                    /* try { // try from 0022a65d to 0022a666 has its CatchHandler @ 0022b6e8 */
  display_symlink_count(&local_138,*(undefined8 *)(lVar9 + 0x30));
                    /* try { // try from 0022a675 to 0022a684 has its CatchHandler @ 0022b6ed */
  pad_left(&local_c8,ppuStack_130,local_128,*(undefined8 *)(param_2 + 8));
  local_170 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_168 = &local_68;
  local_160 = _<&T_as_core::fmt::Display>::fmt;
  local_158 = (undefined8 ***)&local_a8;
  local_150 = _<&T_as_core::fmt::Display>::fmt;
  local_140 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_118 = (undefined8 ***)&DAT_003128b0;
  pcStack_110 = (code *)0x4;
  uStack_f8 = 0;
  local_108 = &local_178;
  local_100 = (code *)0x4;
                    /* try { // try from 0022a705 to 0022a725 has its CatchHandler @ 0022b6f2 */
  local_178 = &local_88;
  local_148 = &local_c8;
  uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                    (&local_e0,&local_118);
  core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_003128f0);
                    /* try { // try from 0022a726 to 0022a735 has its CatchHandler @ 0022b6ed */
  core::ptr::drop_in_place<alloc::string::String>(&local_c8);
                    /* try { // try from 0022a736 to 0022a73f has its CatchHandler @ 0022b6e8 */
  core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022a740 to 0022a770 has its CatchHandler @ 0022b74e */
  core::ptr::drop_in_place<alloc::string::String>(&local_88);
  if (*(char *)(param_3 + 0xe2) != '\0') {
    display_uname(&local_118,*(undefined4 *)(lVar9 + 0x3c),*(undefined *)(param_3 + 0xe3));
                    /* try { // try from 0022a782 to 0022a78e has its CatchHandler @ 0022b6a4 */
    pad_right(&local_138,pcStack_110,local_108,*(undefined8 *)(param_2 + 0x10));
    pcStack_c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_00312908;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_160 = (code *)0x1;
                    /* try { // try from 0022a7d2 to 0022a7f2 has its CatchHandler @ 0022b6a9 */
    local_168 = &local_c8;
    local_c8 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312918);
                    /* try { // try from 0022a7f3 to 0022a7fc has its CatchHandler @ 0022b6a4 */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022a7fd to 0022a82a has its CatchHandler @ 0022b74e */
    core::ptr::drop_in_place<alloc::string::String>(&local_118);
  }
  if (*(char *)(param_3 + 0xe1) != '\0') {
    display_group(&local_118,*(undefined4 *)(lVar9 + 0x40),*(undefined *)(param_3 + 0xe3));
                    /* try { // try from 0022a83c to 0022a848 has its CatchHandler @ 0022b683 */
    pad_right(&local_138,pcStack_110,local_108,*(undefined8 *)(param_2 + 0x18));
    pcStack_c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_00312908;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_160 = (code *)0x1;
                    /* try { // try from 0022a88c to 0022a8ac has its CatchHandler @ 0022b688 */
    local_168 = &local_c8;
    local_c8 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312930);
                    /* try { // try from 0022a8ad to 0022a8b6 has its CatchHandler @ 0022b683 */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022a8b7 to 0022a8ef has its CatchHandler @ 0022b74e */
    core::ptr::drop_in_place<alloc::string::String>(&local_118);
  }
  if (*(char *)(param_3 + 0xeb) != '\0') {
    pad_right(&local_118,*(undefined8 *)(local_e8 + 0x38),*(undefined8 *)(local_e8 + 0x40),
              *(undefined8 *)(param_2 + 0x20));
    ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_00312908;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_138;
    local_160 = (code *)0x1;
                    /* try { // try from 0022a932 to 0022a952 has its CatchHandler @ 0022b671 */
    local_138 = &local_118;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312948);
                    /* try { // try from 0022a953 to 0022a980 has its CatchHandler @ 0022b74e */
    core::ptr::drop_in_place<alloc::string::String>(&local_118);
  }
  if (*(char *)(param_3 + 0xe0) != '\0') {
    display_uname(&local_118,*(undefined4 *)(lVar9 + 0x3c),*(undefined *)(param_3 + 0xe3));
                    /* try { // try from 0022a992 to 0022a99e has its CatchHandler @ 0022b650 */
    pad_right(&local_138,pcStack_110,local_108,*(undefined8 *)(param_2 + 0x10));
    pcStack_c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_00312908;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_160 = (code *)0x1;
                    /* try { // try from 0022a9e2 to 0022aa02 has its CatchHandler @ 0022b655 */
    local_168 = &local_c8;
    local_c8 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312960);
                    /* try { // try from 0022aa03 to 0022aa0c has its CatchHandler @ 0022b650 */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022aa0d to 0022aa32 has its CatchHandler @ 0022b74e */
    core::ptr::drop_in_place<alloc::string::String>(&local_118);
  }
  display_len_or_rdev(&local_118,lVar9,*(undefined8 *)(param_3 + 0xd0),
                      *(undefined *)(param_3 + 0xf1));
  pppuVar4 = local_108;
  pcVar3 = pcStack_110;
  if ((undefined8 **)local_100 == (undefined8 **)0x8000000000000000) {
    local_b8 = local_108;
    local_c8 = local_118;
    pcStack_c0 = pcStack_110;
                    /* try { // try from 0022aa74 to 0022aa80 has its CatchHandler @ 0022b5f6 */
    pad_left(&local_138,pcStack_110,local_108,*(undefined8 *)(param_2 + 0x28));
    local_80 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_00312908;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_88;
    local_160 = (code *)0x1;
                    /* try { // try from 0022aacc to 0022aaec has its CatchHandler @ 0022b5fb */
    local_88 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312978);
                    /* try { // try from 0022aaed to 0022aaf6 has its CatchHandler @ 0022b5f6 */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022aaf7 to 0022ab87 has its CatchHandler @ 0022b74e */
    core::ptr::drop_in_place<alloc::string::String>(&local_c8);
  }
  else {
    local_58 = local_108;
    local_68 = local_118;
    pcStack_60 = pcStack_110;
    local_98 = local_f0;
    local_a8 = (undefined8 *)local_100;
    uStack_a0 = uStack_f8;
    uVar2 = *(ulong *)(param_2 + 0x38);
    uVar11 = 0xffffffffffffffff;
    if (uVar2 < 0xfffffffffffffffe) {
      uVar11 = uVar2 + 2;
    }
    lVar12 = 0;
    if (uVar11 <= *(ulong *)(param_2 + 0x28)) {
      lVar12 = *(ulong *)(param_2 + 0x28) - uVar11;
    }
    local_50 = param_6;
    uVar10 = core::cmp::max_by(*(undefined8 *)(param_2 + 0x30),lVar12);
                    /* try { // try from 0022b0b5 to 0022b0cd has its CatchHandler @ 0022b5b0 */
    pad_left(&local_88,pcVar3,pppuVar4,uVar10);
                    /* try { // try from 0022b0de to 0022b0f0 has its CatchHandler @ 0022b5b5 */
    pad_left(&local_c8,uStack_a0,local_98,uVar2);
    ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
    local_120 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_00312990;
    local_170 = (code *)0x2;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_138;
    local_160 = (code *)0x2;
                    /* try { // try from 0022b13d to 0022b15d has its CatchHandler @ 0022b5ba */
    local_138 = &local_88;
    local_128 = &local_c8;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_003129b0);
                    /* try { // try from 0022b15e to 0022b16a has its CatchHandler @ 0022b5b5 */
    core::ptr::drop_in_place<alloc::string::String>(&local_c8);
                    /* try { // try from 0022b16b to 0022b177 has its CatchHandler @ 0022b5b0 */
    core::ptr::drop_in_place<alloc::string::String>(&local_88);
                    /* try { // try from 0022b178 to 0022b184 has its CatchHandler @ 0022b532 */
    core::ptr::drop_in_place<alloc::string::String>(&local_a8);
                    /* try { // try from 0022b18d to 0022b1ac has its CatchHandler @ 0022b74e */
    core::ptr::drop_in_place<alloc::string::String>(&local_68);
  }
  display_date(&local_118,lVar9,param_3);
  ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
  local_178 = (undefined8 ***)&PTR_DAT_003129c8;
  local_170 = (code *)0x2;
  local_158 = (undefined8 ***)0x0;
  local_168 = &local_138;
  local_160 = (code *)0x1;
                    /* try { // try from 0022b1ef to 0022b20f has its CatchHandler @ 0022b6d9 */
  local_138 = &local_118;
  uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                    (&local_e0,&local_178);
  core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_003129e8);
                    /* try { // try from 0022b210 to 0022b21c has its CatchHandler @ 0022b74e */
  core::ptr::drop_in_place<alloc::string::String>(&local_118);
  local_178 = (undefined8 ***)0x0;
  local_170 = (code *)0x1;
  local_168 = (undefined8 ****)0x0;
                    /* try { // try from 0022b248 to 0022b24d has its CatchHandler @ 0022b59e */
  ansi_width::ansi_width(local_d8,local_d0);
                    /* try { // try from 0022b24e to 0022b281 has its CatchHandler @ 0022b599 */
  ppppuVar13 = &local_c8;
  display_item_name(ppppuVar13,local_e8,param_3,0);
  pppuVar4 = local_b8;
  pcVar3 = pcStack_c0;
  if (param_7 == '\0') {
LAB_0022b2cb:
    bVar14 = true;
  }
  else {
    local_178 = (undefined8 ***)((ulong)local_178 & 0xffffffff00000000);
    auVar15 = core::char::methods::encode_utf8_raw(0x27,&local_178);
                    /* try { // try from 0022b2b9 to 0022b32e has its CatchHandler @ 0022b6d4 */
    cVar7 = core::slice::_<impl[T]>::starts_with(pcVar3,pppuVar4,auVar15._0_8_,auVar15._8_8_);
    if (cVar7 != '\0') goto LAB_0022b2cb;
    local_118 = &local_c8;
    pcStack_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_00312908;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_160 = (code *)0x1;
    ppppuVar13 = (undefined8 ****)local_48;
    local_168 = &local_118;
    core::option::Option<T>::map_or_else(ppppuVar13,&local_178);
    bVar14 = false;
  }
  local_128 = ppppuVar13[2];
  local_138 = *ppppuVar13;
  ppuStack_130 = ppppuVar13[1];
  if (cVar1 != '\0') {
    if (*(long *)(local_70 + 0x10) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(local_70 + 0x10) * 0x10 + -8 + *(long *)(local_70 + 8)) + 1;
    }
                    /* try { // try from 0022b386 to 0022b40b has its CatchHandler @ 0022b71b */
    dired::update_positions(local_70,lVar9 + local_d0,(long)local_128 + lVar9 + local_d0);
  }
  local_108 = (undefined8 ***)(param_3 + 0xfa);
  local_118 = &local_138;
  pcStack_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_100 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
  local_178 = (undefined8 ***)&DAT_00128d70;
  local_170 = (code *)0x2;
  local_158 = (undefined8 ***)0x0;
  local_160 = (code *)0x2;
  local_168 = &local_118;
  uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                    (&local_e0,&local_178);
  core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312a00);
                    /* try { // try from 0022b40c to 0022b415 has its CatchHandler @ 0022b6d4 */
  core::ptr::drop_in_place<alloc::string::String>(&local_138);
  if (!bVar14) {
                    /* try { // try from 0022b41b to 0022b491 has its CatchHandler @ 0022b74e */
    core::ptr::drop_in_place<alloc::string::String>(&local_c8);
  }
LAB_0022b428:
  local_118 = (undefined8 ***)&local_e0;
  pcStack_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_178 = (undefined8 ***)&DAT_00123d10;
  local_170 = (code *)0x1;
  local_158 = (undefined8 ***)0x0;
  local_168 = &local_118;
  local_160 = (code *)0x1;
  lVar9 = std::io::Write::write_fmt(local_b0,&local_178);
  if (lVar9 == 0) {
    core::ptr::drop_in_place<alloc::string::String>(&local_e0);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = param_3 + 0xfa;
    auVar15 = auVar15 << 0x40;
  }
  else {
    auVar15 = uucore::mods::error::
              _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
              ::from(lVar9);
    core::ptr::drop_in_place<alloc::string::String>(&local_e0);
  }
  return auVar15;
}