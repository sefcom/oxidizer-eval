/* WARNING: Removing unreachable block (ram,0x001beeda) */

undefined8 * __rustcall uu_mktemp::Params::from(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  bool bVar8;
  undefined auVar9 [16];
  code *pcVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 extraout_RDX;
  code *pcVar16;
  bool bVar17;
  undefined auVar18 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  code *local_188;
  code *local_180;
  undefined local_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined auStack_160 [16];
  code *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long local_118;
  undefined8 local_108;
  long local_100;
  undefined8 *local_f8;
  code *local_f0;
  code *pcStack_e8;
  code *local_e0;
  code *pcStack_d8;
  code *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined local_90 [16];
  code *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68;
  undefined local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  plVar1 = param_2 + 6;
  if (param_2[6] != -0x8000000000000000) {
    uVar14 = param_2[1];
    uVar2 = param_2[2];
    local_178 = (undefined  [8])((ulong)local_178 & 0xffffffff00000000);
                    /* try { // try from 001be670 to 001be6ac has its CatchHandler @ 001beecb */
    auVar18 = core::char::methods::encode_utf8_raw(0x58,local_178);
    cVar12 = core::slice::_<impl[T]>::ends_with(uVar14,uVar2,auVar18._0_8_,auVar18._8_8_);
    if (cVar12 == '\0') {
      param_1[3] = param_2[2];
      uVar4 = *(undefined4 *)((long)param_2 + 4);
      uVar5 = *(undefined4 *)(param_2 + 1);
      uVar6 = *(undefined4 *)((long)param_2 + 0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_2;
      *(undefined4 *)((long)param_1 + 0xc) = uVar4;
      *(undefined4 *)(param_1 + 2) = uVar5;
      *(undefined4 *)((long)param_1 + 0x14) = uVar6;
      param_1[4] = 0x8000000000000001;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001be79b to 001be79f has its CatchHandler @ 001bedc8 */
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(param_2 + 3);
                    /* try { // try from 001be7a3 to 001be7ac has its CatchHandler @ 001bee60 */
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(plVar1);
      return param_1;
    }
  }
  find_last_contiguous_block_of_xs(&local_128,param_2[1],param_2[2]);
  if (CONCAT44(uStack_124,local_128) == 0) {
    bVar17 = *plVar1 != -0x8000000000000000;
    if (bVar17) {
      local_178 = (undefined  [8])param_2[1];
      uStack_168 = (code *)param_2[2];
      uStack_170 = (code *)((long)local_178 + (long)uStack_168);
                    /* try { // try from 001be7cc to 001be7da has its CatchHandler @ 001beecb */
      _<alloc::string::String_as_core::iter::traits::collect::FromIterator<char>>::from_iter
                (&local_198,local_178);
    }
    else {
      local_188 = (code *)param_2[2];
      local_198 = (code *)*param_2;
      uStack_190 = (code *)param_2[1];
    }
    param_1[3] = local_188;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_198;
    *(undefined4 *)((long)param_1 + 0xc) = local_198._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_190;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_190._4_4_;
    param_1[4] = 0x8000000000000002;
    *param_1 = 0x8000000000000000;
                    /* try { // try from 001be800 to 001be804 has its CatchHandler @ 001bedd0 */
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(param_2 + 3);
LAB_001bec6c:
                    /* try { // try from 001bec6c to 001bec75 has its CatchHandler @ 001bee60 */
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(plVar1);
  }
  else {
    uVar7 = CONCAT44(uStack_11c,uStack_120);
    local_100 = local_118;
    local_b8 = param_2[5];
    local_c8 = *(undefined4 *)(param_2 + 3);
    uStack_c4 = *(undefined4 *)((long)param_2 + 0x1c);
    uStack_c0 = *(undefined4 *)(param_2 + 4);
    uStack_bc = *(undefined4 *)((long)param_2 + 0x24);
    if (param_2[3] == -0x8000000000000000) {
LAB_001be733:
      local_f8 = (undefined8 *)0x0;
      local_f0 = (code *)&DAT_00000001;
      pcStack_e8 = (code *)0x0;
    }
    else {
                    /* try { // try from 001be6fc to 001be710 has its CatchHandler @ 001bee56 */
      _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone
                (local_178,&local_c8,extraout_RDX,0x8000000000000000);
      local_198 = uStack_170;
      uStack_190 = uStack_168;
      if (local_178 == (undefined  [8])0x8000000000000000) goto LAB_001be733;
      local_f0 = uStack_170;
      pcStack_e8 = uStack_168;
      local_f8 = (undefined8 *)local_178;
    }
    lVar15 = param_2[1];
    if (uVar7 != 0) {
      uVar3 = param_2[2];
      if (uVar7 < uVar3) {
        if (*(char *)(lVar15 + uVar7) < -0x40) {
LAB_001be839:
                    /* try { // try from 001be83c to 001be880 has its CatchHandler @ 001bee76 */
          uVar14 = core::str::slice_error_fail(lVar15,uVar3,0,uVar7,&PTR_DAT_00236280);
          goto LAB_001beda1;
        }
      }
      else if (uVar7 != uVar3) goto LAB_001be839;
    }
    std::path::Path::join(local_178,local_f0,pcStack_e8,lVar15,uVar7);
    local_198 = uStack_170;
    uStack_190 = uStack_168;
                    /* try { // try from 001be88b to 001be89c has its CatchHandler @ 001bee07 */
    _<T_as_alloc::string::ToString>::to_string(&local_e0,&local_198);
                    /* try { // try from 001be8a3 to 001be9e1 has its CatchHandler @ 001bee80 */
    core::ptr::drop_in_place<std::path::PathBuf>(local_178);
    if ((*(char *)((long)param_2 + 0x4b) == '\0') ||
       (cVar12 = _<char_as_core::str::pattern::Pattern>::is_contained_in(lVar15,uVar7),
       cVar12 == '\0')) {
      if ((CONCAT44(uStack_c4,local_c8) != -0x8000000000000000) &&
         (cVar12 = std::path::Path::is_absolute(lVar15,uVar7), cVar12 != '\0')) {
        uVar14 = 0x8000000000000005;
        goto LAB_001be90d;
      }
      pcVar10 = local_d0;
      pcVar16 = pcStack_d8;
      local_178 = (undefined  [8])((ulong)local_178 & 0xffffffff00000000);
      uVar14 = core::char::methods::encode_utf8_raw(0x2f,local_178);
      cVar12 = core::slice::_<impl[T]>::ends_with(pcVar16,pcVar10,uVar14);
      if (cVar12 == '\0') {
        auVar18 = std::path::Path::parent(pcStack_d8,local_d0);
        if (auVar18._0_8_ == 0) {
          local_198 = (code *)0x0;
          uStack_190 = (code *)&DAT_00000001;
          local_188 = (code *)0x0;
        }
        else {
          _local_178 = auVar18;
          _<T_as_alloc::string::ToString>::to_string(&local_198,local_178);
        }
                    /* try { // try from 001be9ff to 001bea3d has its CatchHandler @ 001bede2 */
        lVar15 = std::path::Path::file_name(pcStack_d8,local_d0);
        if (lVar15 == 0) {
          auVar18._8_8_ = 0;
          auVar18._0_8_ = &DAT_00000001;
          local_90 = auVar18 << 0x40;
          local_80 = (code *)0x0;
        }
        else {
          std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::
          try_from(local_178,lVar15);
          if (local_178 != (undefined  [8])0x0) {
                    /* try { // try from 001bed94 to 001beda0 has its CatchHandler @ 001bede2 */
            uVar14 = core::option::unwrap_failed(&PTR_DAT_00236298);
            goto LAB_001beda1;
          }
          pcVar16 = (code *)local_178;
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(pcVar16,uStack_170,uStack_168);
          local_80 = uStack_168;
          pcStack_d8 = pcVar16;
          local_90 = _local_178;
        }
        uStack_168 = local_188;
        local_178 = (undefined  [8])local_198;
        uStack_170 = uStack_190;
        local_108 = CONCAT71((int7)((ulong)pcStack_d8 >> 8),1);
      }
      else {
        uStack_168 = local_d0;
        local_178 = (undefined  [8])local_e0;
        uStack_170 = pcStack_d8;
        local_108 = 0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = &DAT_00000001;
        local_90 = auVar9 << 0x40;
        local_80 = (code *)0x0;
      }
      local_68 = uStack_168;
      local_78 = local_178._0_4_;
      uStack_74 = local_178._4_4_;
      uStack_70 = (undefined4)uStack_170;
      uStack_6c = uStack_170._4_4_;
      local_a8 = *plVar1;
      if (local_a8 == -0x8000000000000000) {
        local_a0 = 1;
        uStack_98 = 0;
        local_a8 = 0;
      }
      else {
        local_a0 = param_2[7];
        uStack_98 = param_2[8];
      }
      uVar14 = param_2[1];
      uVar2 = param_2[2];
      local_58 = core::str::traits::
                 _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::
                 get(local_100,uVar14,uVar2);
      if (local_58._0_8_ == 0) {
                    /* try { // try from 001bed74 to 001bed91 has its CatchHandler @ 001bee22 */
        uVar14 = core::str::slice_error_fail(uVar14,uVar2,local_100,uVar2,&PTR_DAT_002362b0);
LAB_001beda1:
                    /* catch() { ... } // from try @ 001bec09 with catch @ 001beda1 */
        core::ptr::drop_in_place<alloc::string::String>(&local_78);
        if ((char)local_108 != '\0') {
          core::ptr::drop_in_place<alloc::string::String>(&local_e0);
        }
        core::ptr::drop_in_place<std::path::PathBuf>(&local_f8);
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_c8);
        core::ptr::drop_in_place<alloc::string::String>(param_2);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar14);
      }
      local_198 = (code *)local_58;
      uStack_190 = _<&T_as_core::fmt::Display>::fmt;
      local_188 = (code *)&local_a8;
      local_180 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_178 = (undefined  [8])&DAT_0011a730;
      uStack_170 = (code *)0x2;
      auStack_160._8_8_ = 0;
      uStack_168 = (code *)&local_198;
      auStack_160._0_8_ = 2;
                    /* try { // try from 001beb87 to 001beb98 has its CatchHandler @ 001bee22 */
      core::option::Option<T>::map_or_else(&local_48,local_178);
      local_128 = local_48;
      uStack_124 = uStack_44;
      uStack_120 = uStack_40;
      uStack_11c = uStack_3c;
      local_118 = local_38;
                    /* try { // try from 001bebc1 to 001bebc5 has its CatchHandler @ 001bedb6 */
      cVar13 = _<char_as_core::str::pattern::Pattern>::is_contained_in
                         (CONCAT44(uStack_3c,uStack_40));
      if (cVar13 == '\0') {
        uStack_168 = local_68;
        pcVar16 = uStack_168;
        local_178 = (undefined  [8])CONCAT44(uStack_74,local_78);
        uStack_170 = (code *)CONCAT44(uStack_6c,uStack_70);
        local_150 = local_80;
        local_138 = local_118;
        local_148 = local_128;
        uStack_144 = uStack_124;
        uStack_140 = uStack_120;
        uStack_13c = uStack_11c;
        param_1[8] = local_118;
        *(undefined4 *)(param_1 + 6) = local_128;
        *(undefined4 *)((long)param_1 + 0x34) = uStack_124;
        *(undefined4 *)(param_1 + 7) = uStack_120;
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_11c;
        *param_1 = local_178;
        param_1[1] = uStack_170;
        param_1[4] = local_90._8_8_;
        param_1[5] = local_80;
        uStack_168._0_4_ = SUB84(local_68,0);
        uStack_168._4_4_ = (undefined4)((ulong)local_68 >> 0x20);
        auStack_160._0_4_ = local_90._0_4_;
        auStack_160._4_4_ = local_90._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_168;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_168._4_4_;
        *(undefined4 *)(param_1 + 3) = auStack_160._0_4_;
        *(undefined4 *)((long)param_1 + 0x1c) = auStack_160._4_4_;
        param_1[9] = local_100 - uVar7;
                    /* try { // try from 001bed0a to 001bed16 has its CatchHandler @ 001beda9 */
        uStack_168 = pcVar16;
        auStack_160 = local_90;
        core::ptr::drop_in_place<alloc::string::String>(&local_a8);
        if (cVar12 == '\0') {
                    /* try { // try from 001bed24 to 001bed30 has its CatchHandler @ 001bee76 */
          core::ptr::drop_in_place<alloc::string::String>(&local_e0);
        }
                    /* try { // try from 001bed37 to 001bed43 has its CatchHandler @ 001bee56 */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_f8);
                    /* try { // try from 001bed4a to 001bed56 has its CatchHandler @ 001bedfa */
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_c8);
        goto LAB_001bed57;
      }
      param_1[3] = local_118;
      *(undefined4 *)(param_1 + 1) = local_128;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_124;
      *(undefined4 *)(param_1 + 2) = uStack_120;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_11c;
      param_1[4] = 0x8000000000000004;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001bebfc to 001bec08 has its CatchHandler @ 001bedb1 */
      core::ptr::drop_in_place<alloc::string::String>(&local_a8);
                    /* try { // try from 001bec09 to 001bec15 has its CatchHandler @ 001beda1 */
      core::ptr::drop_in_place<alloc::string::String>(local_90);
                    /* try { // try from 001bec1e to 001bec32 has its CatchHandler @ 001bee80 */
      core::ptr::drop_in_place<alloc::string::String>(&local_78);
      bVar17 = true;
      bVar8 = false;
      bVar11 = false;
      if (cVar12 == '\0') goto LAB_001bec40;
    }
    else {
      uVar14 = 0x8000000000000003;
LAB_001be90d:
      param_1[3] = param_2[2];
      uVar4 = *(undefined4 *)((long)param_2 + 4);
      uVar5 = *(undefined4 *)(param_2 + 1);
      uVar6 = *(undefined4 *)((long)param_2 + 0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_2;
      *(undefined4 *)((long)param_1 + 0xc) = uVar4;
      *(undefined4 *)(param_1 + 2) = uVar5;
      *(undefined4 *)((long)param_1 + 0x14) = uVar6;
      param_1[4] = uVar14;
      *param_1 = 0x8000000000000000;
      bVar17 = false;
      bVar11 = true;
LAB_001bec40:
                    /* try { // try from 001bec40 to 001bec4c has its CatchHandler @ 001bee76 */
      bVar8 = bVar11;
      core::ptr::drop_in_place<alloc::string::String>(&local_e0);
    }
                    /* try { // try from 001bec4d to 001bec59 has its CatchHandler @ 001bee56 */
    core::ptr::drop_in_place<std::path::PathBuf>(&local_f8);
                    /* try { // try from 001bec5a to 001bec66 has its CatchHandler @ 001bedfa */
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_c8);
    if (bVar8) goto LAB_001bec6c;
  }
  if (!bVar17) {
    return param_1;
  }
LAB_001bed57:
  core::ptr::drop_in_place<alloc::string::String>(param_2);
  return param_1;
}