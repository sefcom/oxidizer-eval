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
                    /* try { // try from 0022a59d to 0022a5ac has its CatchHandler @ 0022b7de */
    colors::StyleManager::apply_normal(&local_118,param_6);
    ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&DAT_00123c10;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_138;
    local_160 = (code *)0x1;
                    /* try { // try from 0022a5ef to 0022a60f has its CatchHandler @ 0022b755 */
    local_138 = &local_118;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312788);
                    /* try { // try from 0022a610 to 0022a694 has its CatchHandler @ 0022b7de */
    core::ptr::drop_in_place<alloc::string::String>(&local_118);
  }
  cVar1 = *(char *)(param_3 + 0xee);
  if (cVar1 != '\0') {
    ::alloc::vec::Vec<T,A>::append_elements(&local_e0,&DAT_00136240,2);
  }
  lVar9 = PathData::get_metadata(local_e8,local_b0);
  if (lVar9 == 0) {
    if ((*(byte *)(local_e8 + 0xf8) & 1) == 0) {
switchD_0022b590_caseD_3:
      local_a8 = (undefined8 *)&DAT_0013624f;
    }
    else {
      uVar8 = *(uint *)(local_e8 + 0xfc) & 0xf000;
      switch(uVar8 << 0x13 | uVar8 - 0x2000 >> 0xd) {
      case 0:
        local_a8 = (undefined8 *)&DAT_00134d87;
        break;
      case 1:
        local_a8 = (undefined8 *)&DAT_0013624e;
        break;
      case 2:
        local_a8 = (undefined8 *)&DAT_0013624d;
        break;
      default:
        goto switchD_0022b590_caseD_3;
      case 4:
        local_a8 = (undefined8 *)&DAT_001351b4;
      }
    }
    uStack_a0 = 1;
    bVar14 = 1 < *(ulong *)(local_e8 + 0x40);
    local_c8 = (undefined8 ***)&DAT_00000001;
    if (bVar14) {
      local_c8 = (undefined8 ***)&DAT_00134771;
    }
    pcStack_c0 = (code *)(ulong)bVar14;
    pad_left(&local_138,&DAT_0013623a,1,*(undefined8 *)(param_2 + 8));
    local_178 = (undefined8 ***)&local_a8;
    local_170 = _<&T_as_core::fmt::Display>::fmt;
    local_168 = &local_c8;
    local_160 = _<&T_as_core::fmt::Display>::fmt;
    local_150 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_118 = (undefined8 ***)&DAT_00312728;
    pcStack_110 = (code *)0x3;
    uStack_f8 = 0;
    local_108 = &local_178;
    local_100 = (code *)0x3;
                    /* try { // try from 0022ac8e to 0022acae has its CatchHandler @ 0022b6ce */
    local_158 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_118);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312878);
                    /* try { // try from 0022acaf to 0022ace2 has its CatchHandler @ 0022b7de */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
    if (*(char *)(param_3 + 0xe2) != '\0') {
      pad_right(&local_118,&DAT_0013623a,1,*(undefined8 *)(param_2 + 0x10));
      ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (undefined8 ***)&PTR_DAT_003126d8;
      local_170 = (code *)0x1;
      local_158 = (undefined8 ****)0x0;
      local_160 = (code *)0x1;
                    /* try { // try from 0022ad19 to 0022ad39 has its CatchHandler @ 0022b617 */
      local_168 = &local_138;
      local_138 = &local_118;
      uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (&local_e0,&local_178);
      core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312890);
                    /* try { // try from 0022ad3a to 0022ad6a has its CatchHandler @ 0022b7de */
      core::ptr::drop_in_place<alloc::string::String>(&local_118);
    }
    if (*(char *)(param_3 + 0xe1) != '\0') {
      pad_right(&local_118,&DAT_0013623a,1,*(undefined8 *)(param_2 + 0x18));
      ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (undefined8 ***)&PTR_DAT_003126d8;
      local_170 = (code *)0x1;
      local_158 = (undefined8 ****)0x0;
      local_160 = (code *)0x1;
                    /* try { // try from 0022ada1 to 0022adc1 has its CatchHandler @ 0022b605 */
      local_168 = &local_138;
      local_138 = &local_118;
      uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (&local_e0,&local_178);
      core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_003128a8);
                    /* try { // try from 0022adc2 to 0022adfa has its CatchHandler @ 0022b7de */
      core::ptr::drop_in_place<alloc::string::String>(&local_118);
    }
    if (*(char *)(param_3 + 0xeb) != '\0') {
      pad_right(&local_118,*(undefined8 *)(local_e8 + 0x38),*(undefined8 *)(local_e8 + 0x40),
                *(undefined8 *)(param_2 + 0x20));
      ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (undefined8 ***)&PTR_DAT_003126d8;
      local_170 = (code *)0x1;
      local_158 = (undefined8 ****)0x0;
      local_160 = (code *)0x1;
                    /* try { // try from 0022ae31 to 0022ae51 has its CatchHandler @ 0022b5f3 */
      local_168 = &local_138;
      local_138 = &local_118;
      uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (&local_e0,&local_178);
      core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_003128c0);
                    /* try { // try from 0022ae52 to 0022ae82 has its CatchHandler @ 0022b7de */
      core::ptr::drop_in_place<alloc::string::String>(&local_118);
    }
    if (*(char *)(param_3 + 0xe0) != '\0') {
      pad_right(&local_118,&DAT_0013623a,1,*(undefined8 *)(param_2 + 0x10));
      ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (undefined8 ***)&PTR_DAT_003126d8;
      local_170 = (code *)0x1;
      local_158 = (undefined8 ****)0x0;
      local_160 = (code *)0x1;
                    /* try { // try from 0022aeb9 to 0022aed9 has its CatchHandler @ 0022b5e1 */
      local_168 = &local_138;
      local_138 = &local_118;
      uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (&local_e0,&local_178);
      core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_003128d8);
                    /* try { // try from 0022aeda to 0022aee3 has its CatchHandler @ 0022b7de */
      core::ptr::drop_in_place<alloc::string::String>(&local_118);
    }
    local_178 = (undefined8 ***)0x0;
    local_170 = (code *)0x1;
    local_168 = (undefined8 ***)0x0;
                    /* try { // try from 0022af0f to 0022af14 has its CatchHandler @ 0022b5cf */
    ansi_width::ansi_width(local_d8,local_d0);
                    /* try { // try from 0022af15 to 0022af48 has its CatchHandler @ 0022b5ca */
    display_item_name(&local_88,local_e8,param_3,0);
                    /* try { // try from 0022af4d to 0022af68 has its CatchHandler @ 0022b7cc */
    pad_left(&local_c8,&DAT_0013623a,1,*(undefined8 *)(param_2 + 0x28));
    lVar12 = local_70;
                    /* try { // try from 0022af71 to 0022af8e has its CatchHandler @ 0022b6aa */
    pad_left(&local_138,&DAT_0013623a,1,0xc);
    pcStack_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_00312758;
    local_170 = (code *)0x3;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_118;
    local_160 = (code *)0x2;
                    /* try { // try from 0022afda to 0022affa has its CatchHandler @ 0022b6af */
    local_118 = &local_c8;
    local_108 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_003128f0);
                    /* try { // try from 0022affb to 0022b004 has its CatchHandler @ 0022b6aa */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022b005 to 0022b0ba has its CatchHandler @ 0022b7cc */
    core::ptr::drop_in_place<alloc::string::String>(&local_c8);
    lVar9 = local_d0;
    if (cVar1 != '\0') {
      core::str::_<impl_str>::trim_matches(local_80,local_78);
      dired::calculate_and_update_positions(lVar12,lVar9);
    }
    local_108 = (undefined8 ***)(param_3 + 0xfa);
    pcStack_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_100 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&DAT_00128c70;
    local_170 = (code *)0x2;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_118;
    local_160 = (code *)0x2;
    local_118 = &local_88;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312908);
                    /* try { // try from 0022b0bb to 0022b0c7 has its CatchHandler @ 0022b7de */
    core::ptr::drop_in_place<alloc::string::String>(&local_88);
    goto LAB_0022b4b8;
  }
  bVar6 = uucore::features::fsxattr::has_acl
                    (*(undefined8 *)(local_e8 + 8),*(undefined8 *)(local_e8 + 0x10));
  uucore::features::fs::display_permissions(&local_88,lVar9,1);
  bVar14 = 1 < *(ulong *)(local_e8 + 0x40);
  pcStack_60 = (code *)(ulong)bVar14;
  local_68 = (undefined8 ***)&DAT_00134771;
  if (!bVar14) {
    local_68 = (undefined8 ***)&DAT_00000001;
  }
  local_a8 = (undefined8 *)&DAT_0013624c;
  if (bVar6 == 0) {
    local_a8 = (undefined8 **)0x1;
  }
  uStack_a0 = (ulong)bVar6;
                    /* try { // try from 0022a6ed to 0022a6f6 has its CatchHandler @ 0022b778 */
  display_symlink_count(&local_138,*(undefined8 *)(lVar9 + 0x30));
                    /* try { // try from 0022a705 to 0022a714 has its CatchHandler @ 0022b77d */
  pad_left(&local_c8,ppuStack_130,local_128,*(undefined8 *)(param_2 + 8));
  local_170 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_168 = &local_68;
  local_160 = _<&T_as_core::fmt::Display>::fmt;
  local_158 = (undefined8 ***)&local_a8;
  local_150 = _<&T_as_core::fmt::Display>::fmt;
  local_140 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_118 = (undefined8 ***)&DAT_00312698;
  pcStack_110 = (code *)0x4;
  uStack_f8 = 0;
  local_108 = &local_178;
  local_100 = (code *)0x4;
                    /* try { // try from 0022a795 to 0022a7b5 has its CatchHandler @ 0022b782 */
  local_178 = &local_88;
  local_148 = &local_c8;
  uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                    (&local_e0,&local_118);
  core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_003127a0);
                    /* try { // try from 0022a7b6 to 0022a7c5 has its CatchHandler @ 0022b77d */
  core::ptr::drop_in_place<alloc::string::String>(&local_c8);
                    /* try { // try from 0022a7c6 to 0022a7cf has its CatchHandler @ 0022b778 */
  core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022a7d0 to 0022a800 has its CatchHandler @ 0022b7de */
  core::ptr::drop_in_place<alloc::string::String>(&local_88);
  if (*(char *)(param_3 + 0xe2) != '\0') {
    display_uname(&local_118,*(undefined4 *)(lVar9 + 0x3c),*(undefined *)(param_3 + 0xe3));
                    /* try { // try from 0022a812 to 0022a81e has its CatchHandler @ 0022b734 */
    pad_right(&local_138,pcStack_110,local_108,*(undefined8 *)(param_2 + 0x10));
    pcStack_c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_003126d8;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_160 = (code *)0x1;
                    /* try { // try from 0022a862 to 0022a882 has its CatchHandler @ 0022b739 */
    local_168 = &local_c8;
    local_c8 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_003127b8);
                    /* try { // try from 0022a883 to 0022a88c has its CatchHandler @ 0022b734 */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022a88d to 0022a8ba has its CatchHandler @ 0022b7de */
    core::ptr::drop_in_place<alloc::string::String>(&local_118);
  }
  if (*(char *)(param_3 + 0xe1) != '\0') {
    display_group(&local_118,*(undefined4 *)(lVar9 + 0x40),*(undefined *)(param_3 + 0xe3));
                    /* try { // try from 0022a8cc to 0022a8d8 has its CatchHandler @ 0022b713 */
    pad_right(&local_138,pcStack_110,local_108,*(undefined8 *)(param_2 + 0x18));
    pcStack_c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_003126d8;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_160 = (code *)0x1;
                    /* try { // try from 0022a91c to 0022a93c has its CatchHandler @ 0022b718 */
    local_168 = &local_c8;
    local_c8 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_003127d0);
                    /* try { // try from 0022a93d to 0022a946 has its CatchHandler @ 0022b713 */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022a947 to 0022a97f has its CatchHandler @ 0022b7de */
    core::ptr::drop_in_place<alloc::string::String>(&local_118);
  }
  if (*(char *)(param_3 + 0xeb) != '\0') {
    pad_right(&local_118,*(undefined8 *)(local_e8 + 0x38),*(undefined8 *)(local_e8 + 0x40),
              *(undefined8 *)(param_2 + 0x20));
    ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_003126d8;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_138;
    local_160 = (code *)0x1;
                    /* try { // try from 0022a9c2 to 0022a9e2 has its CatchHandler @ 0022b701 */
    local_138 = &local_118;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_003127e8);
                    /* try { // try from 0022a9e3 to 0022aa10 has its CatchHandler @ 0022b7de */
    core::ptr::drop_in_place<alloc::string::String>(&local_118);
  }
  if (*(char *)(param_3 + 0xe0) != '\0') {
    display_uname(&local_118,*(undefined4 *)(lVar9 + 0x3c),*(undefined *)(param_3 + 0xe3));
                    /* try { // try from 0022aa22 to 0022aa2e has its CatchHandler @ 0022b6e0 */
    pad_right(&local_138,pcStack_110,local_108,*(undefined8 *)(param_2 + 0x10));
    pcStack_c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_003126d8;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_160 = (code *)0x1;
                    /* try { // try from 0022aa72 to 0022aa92 has its CatchHandler @ 0022b6e5 */
    local_168 = &local_c8;
    local_c8 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312800);
                    /* try { // try from 0022aa93 to 0022aa9c has its CatchHandler @ 0022b6e0 */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022aa9d to 0022aac2 has its CatchHandler @ 0022b7de */
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
                    /* try { // try from 0022ab04 to 0022ab10 has its CatchHandler @ 0022b686 */
    pad_left(&local_138,pcStack_110,local_108,*(undefined8 *)(param_2 + 0x28));
    local_80 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_003126d8;
    local_170 = (code *)0x1;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_88;
    local_160 = (code *)0x1;
                    /* try { // try from 0022ab5c to 0022ab7c has its CatchHandler @ 0022b68b */
    local_88 = &local_138;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312818);
                    /* try { // try from 0022ab7d to 0022ab86 has its CatchHandler @ 0022b686 */
    core::ptr::drop_in_place<alloc::string::String>(&local_138);
                    /* try { // try from 0022ab87 to 0022ac17 has its CatchHandler @ 0022b7de */
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
                    /* try { // try from 0022b145 to 0022b15d has its CatchHandler @ 0022b640 */
    pad_left(&local_88,pcVar3,pppuVar4,uVar10);
                    /* try { // try from 0022b16e to 0022b180 has its CatchHandler @ 0022b645 */
    pad_left(&local_c8,uStack_a0,local_98,uVar2);
    ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
    local_120 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_003126e8;
    local_170 = (code *)0x2;
    local_158 = (undefined8 ***)0x0;
    local_168 = &local_138;
    local_160 = (code *)0x2;
                    /* try { // try from 0022b1cd to 0022b1ed has its CatchHandler @ 0022b64a */
    local_138 = &local_88;
    local_128 = &local_c8;
    uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_e0,&local_178);
    core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312830);
                    /* try { // try from 0022b1ee to 0022b1fa has its CatchHandler @ 0022b645 */
    core::ptr::drop_in_place<alloc::string::String>(&local_c8);
                    /* try { // try from 0022b1fb to 0022b207 has its CatchHandler @ 0022b640 */
    core::ptr::drop_in_place<alloc::string::String>(&local_88);
                    /* try { // try from 0022b208 to 0022b214 has its CatchHandler @ 0022b5c2 */
    core::ptr::drop_in_place<alloc::string::String>(&local_a8);
                    /* try { // try from 0022b21d to 0022b23c has its CatchHandler @ 0022b7de */
    core::ptr::drop_in_place<alloc::string::String>(&local_68);
  }
  display_date(&local_118,lVar9,param_3);
  ppuStack_130 = (undefined8 **)_<alloc::string::String_as_core::fmt::Display>::fmt;
  local_178 = (undefined8 ***)&PTR_DAT_00312708;
  local_170 = (code *)0x2;
  local_158 = (undefined8 ***)0x0;
  local_168 = &local_138;
  local_160 = (code *)0x1;
                    /* try { // try from 0022b27f to 0022b29f has its CatchHandler @ 0022b769 */
  local_138 = &local_118;
  uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                    (&local_e0,&local_178);
  core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312848);
                    /* try { // try from 0022b2a0 to 0022b2ac has its CatchHandler @ 0022b7de */
  core::ptr::drop_in_place<alloc::string::String>(&local_118);
  local_178 = (undefined8 ***)0x0;
  local_170 = (code *)0x1;
  local_168 = (undefined8 ****)0x0;
                    /* try { // try from 0022b2d8 to 0022b2dd has its CatchHandler @ 0022b62e */
  ansi_width::ansi_width(local_d8,local_d0);
                    /* try { // try from 0022b2de to 0022b311 has its CatchHandler @ 0022b629 */
  ppppuVar13 = &local_c8;
  display_item_name(ppppuVar13,local_e8,param_3,0);
  pppuVar4 = local_b8;
  pcVar3 = pcStack_c0;
  if (param_7 == '\0') {
LAB_0022b35b:
    bVar14 = true;
  }
  else {
    local_178 = (undefined8 ***)((ulong)local_178 & 0xffffffff00000000);
    auVar15 = core::char::methods::encode_utf8_raw(0x27,&local_178);
                    /* try { // try from 0022b349 to 0022b3be has its CatchHandler @ 0022b764 */
    cVar7 = core::slice::_<impl[T]>::starts_with(pcVar3,pppuVar4,auVar15._0_8_,auVar15._8_8_);
    if (cVar7 != '\0') goto LAB_0022b35b;
    local_118 = &local_c8;
    pcStack_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_178 = (undefined8 ***)&PTR_DAT_003126d8;
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
                    /* try { // try from 0022b416 to 0022b49b has its CatchHandler @ 0022b7ab */
    dired::update_positions(local_70,lVar9 + local_d0,(long)local_128 + lVar9 + local_d0);
  }
  local_108 = (undefined8 ***)(param_3 + 0xfa);
  local_118 = &local_138;
  pcStack_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_100 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
  local_178 = (undefined8 ***)&DAT_00128c70;
  local_170 = (code *)0x2;
  local_158 = (undefined8 ***)0x0;
  local_160 = (code *)0x2;
  local_168 = &local_118;
  uVar5 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                    (&local_e0,&local_178);
  core::result::Result<T,E>::unwrap(uVar5,&PTR_DAT_00312860);
                    /* try { // try from 0022b49c to 0022b4a5 has its CatchHandler @ 0022b764 */
  core::ptr::drop_in_place<alloc::string::String>(&local_138);
  if (!bVar14) {
                    /* try { // try from 0022b4ab to 0022b521 has its CatchHandler @ 0022b7de */
    core::ptr::drop_in_place<alloc::string::String>(&local_c8);
  }
LAB_0022b4b8:
  local_118 = (undefined8 ***)&local_e0;
  pcStack_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_178 = (undefined8 ***)&DAT_00123c10;
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