undefined  [16] __rustcall
uu_pr::write_columns(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined auVar12 [16];
  char local_1f1;
  ulong local_1f0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long local_188;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  long local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined local_138 [8];
  long local_130;
  undefined8 local_128;
  long local_120;
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
  
  lVar3 = *(long *)(param_3 + 0x10);
  local_140 = *(undefined8 *)(param_3 + 0x68);
  local_148 = *(undefined8 *)(param_3 + 0x70);
  uVar7 = *(ulong *)(param_3 + 0x138) >> (*(byte *)(param_3 + 0x140) & 0x3f);
  if (lVar3 == 0) {
    if (*(long *)(param_3 + 0x100) == -0x8000000000000000) {
      uVar6 = 0;
      local_1f0 = 1;
    }
    else {
      local_1f0 = *(ulong *)(param_3 + 0x120);
      uVar6 = *(undefined4 *)(param_3 + 0x128);
    }
    local_1d0 = *(undefined8 *)(param_3 + 0x20);
    local_1d8 = *(undefined8 *)(param_3 + 0x28);
    local_1f1 = *(char *)(param_3 + 0x142);
    local_178 = 0;
    local_170 = 8;
    local_168 = 0;
  }
  else {
    local_1f0 = *(ulong *)(param_3 + 0x18);
    uVar6 = 0;
    if (*(long *)(param_3 + 0x100) != -0x8000000000000000) {
      uVar6 = *(undefined4 *)(param_3 + 0x128);
    }
    local_1d0 = *(undefined8 *)(param_3 + 0x20);
    local_1d8 = *(undefined8 *)(param_3 + 0x28);
    local_1f1 = *(char *)(param_3 + 0x142);
    local_178 = 0;
    local_170 = 8;
    local_168 = 0;
    if (local_1f0 == 0) {
      local_1f0 = 0;
    }
    else {
      local_110 = param_2 * 0x40 + param_1;
      uVar8 = 0;
      uVar10 = 0;
      local_19c = uVar6;
      local_120 = lVar3;
      local_118 = param_3;
      do {
        uVar2 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar10);
        if (param_2 < uVar8) {
                    /* try { // try from 002c7629 to 002c763d has its CatchHandler @ 002c7674 */
          uVar5 = core::slice::index::slice_start_index_len_fail
                            (uVar8,param_2,&PTR_s_src_uu_pr_src_pr_rs_00408b88);
                    /* catch() { ... } // from try @ 002c75c6 with catch @ 002c763e */
                    /* catch() { ... } // from try @ 002c7369 with catch @ 002c7676
                       catch() { ... } // from try @ 002c73ab with catch @ 002c7676
                       catch() { ... } // from try @ 002c740a with catch @ 002c7676 */
          core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>
                    (&local_198);
          core::ptr::
          drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>
                    (local_c8);
          core::ptr::drop_in_place<uu_pr::FileLine>(&local_108);
          auVar12 = _Unwind_Resume(uVar5);
          return auVar12;
        }
        local_108 = uVar8 * 0x40 + param_1;
        local_100 = local_110;
        lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_108);
        uVar9 = 0;
        while ((lVar3 != 0 && (*(ulong *)(lVar3 + 0x18) == uVar10))) {
                    /* try { // try from 002c70e6 to 002c70f0 has its CatchHandler @ 002c769f */
          ::alloc::vec::Vec<T,A>::push(&local_178,lVar3);
          uVar9 = uVar9 + 1;
          lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_108);
        }
        uVar8 = uVar8 + uVar9;
        while (uVar9 < uVar7) {
          uVar9 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar9);
                    /* try { // try from 002c7124 to 002c712d has its CatchHandler @ 002c76a1 */
          ::alloc::vec::Vec<T,A>::push(&local_178,0);
        }
        lVar3 = local_120;
        param_3 = local_118;
        uVar10 = uVar2;
        uVar6 = local_19c;
      } while (uVar2 < local_1f0);
    }
  }
  local_98 = local_168;
  local_a8 = local_178;
  local_a0 = local_170;
  local_60 = 0;
  local_78 = local_1f0;
  local_68 = (undefined)uVar6;
  local_90 = param_1;
  local_88 = param_2;
  local_80 = param_3;
  local_70 = uVar7;
  local_58 = uVar7;
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
            (&local_160,local_c8);
  if (CONCAT44(uStack_15c,local_160) == -0x8000000000000000) {
    lVar4 = 0;
  }
  else {
    lVar11 = 0;
    if (lVar3 == 0) {
      bVar1 = false;
      do {
        lVar3 = local_150;
        local_198 = local_160;
        uStack_194 = uStack_15c;
        uStack_190 = uStack_158;
        uStack_18c = uStack_154;
        local_188 = local_150;
        local_130 = CONCAT44(uStack_154,uStack_158) + local_150 * 8;
        local_128 = 0;
        while( true ) {
          auVar12 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                    ::next(local_138);
          if (auVar12._8_8_ == (long *)0x0) break;
          lVar4 = *auVar12._8_8_;
          if (lVar4 == 0) {
            bVar1 = true;
            if (local_1f1 == '\0') goto LAB_002c7567;
            goto LAB_002c761a;
          }
                    /* try { // try from 002c74e5 to 002c7505 has its CatchHandler @ 002c7672 */
          get_line_for_printing
                    (local_1b8,param_3,lVar4,local_1f0,auVar12._0_8_,local_1d0,local_1d8,lVar3);
                    /* try { // try from 002c7510 to 002c751a has its CatchHandler @ 002c7661 */
          lVar4 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                            (param_4,local_1b0,local_1a8);
          if (lVar4 != 0) goto LAB_002c75c6;
                    /* try { // try from 002c7527 to 002c752e has its CatchHandler @ 002c7672 */
          core::ptr::drop_in_place<alloc::string::String>(local_1b8);
          lVar11 = lVar11 + 1;
        }
        if ((local_1f1 != '\0') && (bVar1)) {
LAB_002c761a:
                    /* try { // try from 002c761a to 002c7623 has its CatchHandler @ 002c7640 */
          core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>
                    (&local_198);
          lVar4 = lVar11;
          break;
        }
LAB_002c7567:
                    /* try { // try from 002c7567 to 002c7581 has its CatchHandler @ 002c7644 */
        lVar4 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                          (param_4,local_140,local_148);
        if (lVar4 != 0) goto LAB_002c75dc;
                    /* try { // try from 002c758a to 002c7593 has its CatchHandler @ 002c7642 */
        core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>
                  (&local_198);
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                  (&local_160,local_c8);
        lVar4 = lVar11;
      } while (CONCAT44(uStack_15c,local_160) != -0x8000000000000000);
    }
    else {
      do {
        lVar3 = local_150;
        local_198 = local_160;
        uStack_194 = uStack_15c;
        uStack_190 = uStack_158;
        uStack_18c = uStack_154;
        local_188 = local_150;
        local_130 = CONCAT44(uStack_154,uStack_158) + local_150 * 8;
        local_128 = 0;
        while( true ) {
          auVar12 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                    ::next(local_138);
          if (auVar12._8_8_ == (long *)0x0) break;
          lVar4 = *auVar12._8_8_;
          if (lVar4 == 0) {
            get_line_for_printing
                      (local_1b8,param_3,&local_108,local_1f0,auVar12._0_8_,local_1d0,local_1d8,
                       lVar3);
                    /* try { // try from 002c73f3 to 002c73fd has its CatchHandler @ 002c7652 */
            lVar4 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                              (param_4,local_1b0,local_1a8);
            if (lVar4 != 0) {
              core::ptr::drop_in_place<alloc::string::String>(local_1b8);
              goto LAB_002c75dc;
            }
                    /* try { // try from 002c740a to 002c7411 has its CatchHandler @ 002c7676 */
            core::ptr::drop_in_place<alloc::string::String>(local_1b8);
          }
          else {
                    /* try { // try from 002c7369 to 002c7389 has its CatchHandler @ 002c7676 */
            get_line_for_printing
                      (local_1b8,param_3,lVar4,local_1f0,auVar12._0_8_,local_1d0,local_1d8,lVar3);
                    /* try { // try from 002c7394 to 002c739e has its CatchHandler @ 002c7663 */
            lVar4 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                              (param_4,local_1b0,local_1a8);
            if (lVar4 != 0) goto LAB_002c75c6;
                    /* try { // try from 002c73ab to 002c73e8 has its CatchHandler @ 002c7676 */
            core::ptr::drop_in_place<alloc::string::String>(local_1b8);
            lVar11 = lVar11 + 1;
          }
        }
                    /* try { // try from 002c7420 to 002c743a has its CatchHandler @ 002c764b */
        lVar4 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                          (param_4,local_140,local_148);
        if (lVar4 != 0) goto LAB_002c75dc;
                    /* try { // try from 002c7447 to 002c7450 has its CatchHandler @ 002c7646 */
        core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>
                  (&local_198);
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                  (&local_160,local_c8);
        lVar4 = lVar11;
      } while (CONCAT44(uStack_15c,local_160) != -0x8000000000000000);
    }
  }
                    /* try { // try from 002c72d2 to 002c72de has its CatchHandler @ 002c764d */
  core::ptr::
  drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>
            (local_c8);
  core::ptr::drop_in_place<uu_pr::FileLine>(&local_108);
  uVar5 = 0;
LAB_002c7605:
  auVar12._8_8_ = lVar4;
  auVar12._0_8_ = uVar5;
  return auVar12;
LAB_002c75c6:
                    /* try { // try from 002c75c6 to 002c75db has its CatchHandler @ 002c763e */
  core::ptr::drop_in_place<alloc::string::String>(local_1b8);
LAB_002c75dc:
                    /* try { // try from 002c75dc to 002c75e5 has its CatchHandler @ 002c7640 */
  core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&local_198);
                    /* try { // try from 002c75e6 to 002c75f2 has its CatchHandler @ 002c764d */
  core::ptr::
  drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>
            (local_c8);
  core::ptr::drop_in_place<uu_pr::FileLine>(&local_108);
  uVar5 = 1;
  goto LAB_002c7605;
}