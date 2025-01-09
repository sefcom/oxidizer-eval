undefined  [16] __rustcall
uu_pr::write_columns(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined auVar13 [16];
  ulong local_1e8;
  undefined local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined local_130 [8];
  long local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  ulong local_88;
  long local_80;
  ulong local_78;
  ulong local_70;
  undefined local_68;
  undefined8 local_60;
  ulong local_58;
  undefined local_48 [24];
  
  local_118 = *(long *)(param_3 + 0x10);
  uVar9 = *(ulong *)(param_3 + 0x138) >> (*(byte *)(param_3 + 0x140) & 0x3f);
  if (local_118 == 0) {
    lVar6 = *(long *)(param_3 + 0x100);
    local_1e8 = 1;
    if (lVar6 != -0x8000000000000000) {
      local_1e8 = *(ulong *)(param_3 + 0x120);
    }
  }
  else {
    local_1e8 = *(ulong *)(param_3 + 0x18);
    lVar6 = *(long *)(param_3 + 0x100);
  }
  local_18c = 0;
  if (lVar6 != -0x8000000000000000) {
    local_18c = *(undefined4 *)(param_3 + 0x128);
  }
  local_150 = *(undefined8 *)(param_3 + 0x68);
  local_158 = *(undefined8 *)(param_3 + 0x70);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  cVar1 = *(char *)(param_3 + 0x142);
  local_148 = 0;
  local_140 = 8;
  local_138 = 0;
  if ((local_118 != 0) && (local_1e8 != 0)) {
    local_110 = param_2 * 0x40 + param_1;
    uVar10 = 0;
    uVar12 = 0;
    do {
      uVar5 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar12);
      if (param_2 < uVar10) {
                    /* try { // try from 002c8176 to 002c818a has its CatchHandler @ 002c81c1 */
        uVar8 = core::slice::index::slice_start_index_len_fail
                          (uVar10,param_2,&PTR_s_src_uu_pr_src_pr_rs_00409548);
                    /* catch() { ... } // from try @ 002c8113 with catch @ 002c818b */
                    /* catch() { ... } // from try @ 002c7ea9 with catch @ 002c81c3
                       catch() { ... } // from try @ 002c7eea with catch @ 002c81c3
                       catch() { ... } // from try @ 002c7f49 with catch @ 002c81c3 */
        core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>
                  (&local_188);
        core::ptr::
        drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>
                  (local_c8);
        core::ptr::drop_in_place<uu_pr::FileLine>(&local_108);
        auVar13 = _Unwind_Resume(uVar8);
        return auVar13;
      }
      local_108 = uVar10 * 0x40 + param_1;
      local_100 = local_110;
      lVar6 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_108);
      uVar11 = 0;
      while ((lVar6 != 0 && (*(ulong *)(lVar6 + 0x18) == uVar12))) {
                    /* try { // try from 002c7c96 to 002c7ca0 has its CatchHandler @ 002c81ec */
        ::alloc::vec::Vec<T,A>::push(&local_148,lVar6);
        uVar11 = uVar11 + 1;
        lVar6 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_108);
      }
      uVar10 = uVar10 + uVar11;
      while (uVar11 < uVar9) {
        uVar11 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar11);
                    /* try { // try from 002c7cd4 to 002c7cdd has its CatchHandler @ 002c81ee */
        ::alloc::vec::Vec<T,A>::push(&local_148,0);
      }
      uVar12 = uVar5;
    } while (uVar5 < local_1e8);
  }
  local_98 = local_138;
  local_a8 = local_148;
  local_a0 = local_140;
  local_60 = 0;
  local_78 = local_1e8;
  local_68 = (undefined)local_18c;
  local_90 = param_1;
  local_88 = param_2;
  local_80 = param_3;
  local_70 = uVar9;
  local_58 = uVar9;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_48,&local_a8);
  local_108 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_100 = 1;
  local_f8 = 0;
  local_d0 = 0;
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_c8,local_48);
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
            (&local_170,local_c8);
  if (CONCAT44(uStack_16c,local_170) == -0x8000000000000000) {
    lVar7 = 0;
  }
  else if (local_118 == 0) {
    lVar6 = 0;
    bVar4 = false;
    do {
      lVar3 = local_160;
      local_188 = local_170;
      uStack_184 = uStack_16c;
      uStack_180 = uStack_168;
      uStack_17c = uStack_164;
      local_178 = local_160;
      local_128 = CONCAT44(uStack_164,uStack_168) + local_160 * 8;
      local_120 = 0;
      while( true ) {
        auVar13 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                  ::next(local_130);
        if (auVar13._8_8_ == (long *)0x0) break;
        lVar7 = *auVar13._8_8_;
        if (lVar7 == 0) {
          bVar4 = true;
          if (cVar1 == '\0') goto LAB_002c80b7;
          goto LAB_002c8167;
        }
                    /* try { // try from 002c8035 to 002c8057 has its CatchHandler @ 002c81bf */
        get_line_for_printing(local_1a8,param_3,lVar7,local_1e8,auVar13._0_8_,uVar8,uVar2,lVar3);
                    /* try { // try from 002c8062 to 002c8069 has its CatchHandler @ 002c81ae */
        lVar7 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                          (param_4,local_1a0,local_198);
        if (lVar7 != 0) goto LAB_002c8113;
                    /* try { // try from 002c8076 to 002c807d has its CatchHandler @ 002c81bf */
        core::ptr::drop_in_place<alloc::string::String>(local_1a8);
        lVar6 = lVar6 + 1;
      }
      if ((cVar1 != '\0') && (bVar4)) {
LAB_002c8167:
                    /* try { // try from 002c8167 to 002c8170 has its CatchHandler @ 002c818d */
        core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>
                  (&local_188);
        lVar7 = lVar6;
        break;
      }
LAB_002c80b7:
                    /* try { // try from 002c80b7 to 002c80ce has its CatchHandler @ 002c8191 */
      lVar7 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                        (param_4,local_150,local_158);
      if (lVar7 != 0) goto LAB_002c8129;
                    /* try { // try from 002c80d7 to 002c80e0 has its CatchHandler @ 002c818f */
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&local_188);
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                (&local_170,local_c8);
      lVar7 = lVar6;
    } while (CONCAT44(uStack_16c,local_170) != -0x8000000000000000);
  }
  else {
    lVar6 = 0;
    do {
      lVar3 = local_160;
      local_188 = local_170;
      uStack_184 = uStack_16c;
      uStack_180 = uStack_168;
      uStack_17c = uStack_164;
      local_178 = local_160;
      local_128 = CONCAT44(uStack_164,uStack_168) + local_160 * 8;
      local_120 = 0;
      while( true ) {
        auVar13 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                  ::next(local_130);
        if (auVar13._8_8_ == (long *)0x0) break;
        lVar7 = *auVar13._8_8_;
        if (lVar7 == 0) {
          get_line_for_printing
                    (local_1a8,param_3,&local_108,local_1e8,auVar13._0_8_,uVar8,uVar2,lVar3);
                    /* try { // try from 002c7f35 to 002c7f3c has its CatchHandler @ 002c819f */
          lVar7 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                            (param_4,local_1a0,local_198);
          if (lVar7 != 0) {
            core::ptr::drop_in_place<alloc::string::String>(local_1a8);
            goto LAB_002c8129;
          }
                    /* try { // try from 002c7f49 to 002c7f50 has its CatchHandler @ 002c81c3 */
          core::ptr::drop_in_place<alloc::string::String>(local_1a8);
        }
        else {
                    /* try { // try from 002c7ea9 to 002c7ecb has its CatchHandler @ 002c81c3 */
          get_line_for_printing(local_1a8,param_3,lVar7,local_1e8,auVar13._0_8_,uVar8,uVar2,lVar3);
                    /* try { // try from 002c7ed6 to 002c7edd has its CatchHandler @ 002c81b0 */
          lVar7 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                            (param_4,local_1a0,local_198);
          if (lVar7 != 0) goto LAB_002c8113;
                    /* try { // try from 002c7eea to 002c7f2a has its CatchHandler @ 002c81c3 */
          core::ptr::drop_in_place<alloc::string::String>(local_1a8);
          lVar6 = lVar6 + 1;
        }
      }
                    /* try { // try from 002c7f60 to 002c7f77 has its CatchHandler @ 002c8198 */
      lVar7 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                        (param_4,local_150,local_158);
      if (lVar7 != 0) goto LAB_002c8129;
                    /* try { // try from 002c7f84 to 002c7f8d has its CatchHandler @ 002c8193 */
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&local_188);
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                (&local_170,local_c8);
      lVar7 = lVar6;
    } while (CONCAT44(uStack_16c,local_170) != -0x8000000000000000);
  }
                    /* try { // try from 002c7e00 to 002c7e0c has its CatchHandler @ 002c819a */
  core::ptr::
  drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>
            (local_c8);
  core::ptr::drop_in_place<uu_pr::FileLine>(&local_108);
  uVar8 = 0;
LAB_002c8152:
  auVar13._8_8_ = lVar7;
  auVar13._0_8_ = uVar8;
  return auVar13;
LAB_002c8113:
                    /* try { // try from 002c8113 to 002c8128 has its CatchHandler @ 002c818b */
  core::ptr::drop_in_place<alloc::string::String>(local_1a8);
LAB_002c8129:
                    /* try { // try from 002c8129 to 002c8132 has its CatchHandler @ 002c818d */
  core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&local_188);
                    /* try { // try from 002c8133 to 002c813f has its CatchHandler @ 002c819a */
  core::ptr::
  drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>
            (local_c8);
  core::ptr::drop_in_place<uu_pr::FileLine>(&local_108);
  uVar8 = 1;
  goto LAB_002c8152;
}