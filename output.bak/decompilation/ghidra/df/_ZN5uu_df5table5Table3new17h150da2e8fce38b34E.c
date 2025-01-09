long * __rustcall uu_df::table::Table::new(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined auVar9 [16];
  long local_570;
  long lStack_568;
  long local_560;
  undefined *local_558;
  long local_550;
  undefined local_548;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  long local_530;
  long local_528;
  long local_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  ulong local_508;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined8 local_4f0;
  long local_4e8;
  long local_4e0;
  undefined8 local_4d8;
  undefined4 *local_4d0;
  undefined local_4c8 [32];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  ulong local_498;
  long local_3f0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  long local_3a8;
  long local_2c8;
  long lStack_2c0;
  long local_2b8;
  undefined local_1d8 [208];
  undefined local_108 [216];
  
                    /* try { // try from 001cb52e to 001cb53d has its CatchHandler @ 001cba67 */
  Header::get_headers(&local_500);
  lVar5 = *(long *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  local_4e0 = lVar5 + lVar1;
  local_4d8 = 0;
                    /* try { // try from 001cb56e to 001cb57f has its CatchHandler @ 001cba5d */
  local_4e8 = lVar5;
  local_4d0 = &local_500;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_518,&local_4e8);
  puVar4 = (undefined4 *)::alloc::alloc::Global::alloc_impl();
  if (puVar4 == (undefined4 *)0x0) {
                    /* try { // try from 001cba2c to 001cba3b has its CatchHandler @ 001cba73 */
                    /* WARNING: Subroutine does not return */
    ::alloc::alloc::handle_alloc_error(8,0x18);
  }
  *(undefined8 *)(puVar4 + 4) = local_4f0;
  *puVar4 = local_500;
  puVar4[1] = uStack_4fc;
  puVar4[2] = uStack_4f8;
  puVar4[3] = uStack_4f4;
                    /* try { // try from 001cb5b3 to 001cb5c4 has its CatchHandler @ 001cba73 */
  local_528 = lVar1;
  local_520 = lVar5;
  ::alloc::slice::hack::into_vec(&local_570,puVar4,1);
                    /* try { // try from 001cb5c8 to 001cb5d4 has its CatchHandler @ 001cba6c */
  Row::new(local_1d8);
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_4c8,param_3);
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
            (&local_2c8,local_4c8);
  puVar3 = PTR_memcpy_00245ae0;
  if (local_2c8 != -0x8000000000000000) {
    if (*(char *)(param_2 + 0x51) == '\0') {
      do {
        (*(code *)puVar3)(&local_4a8,&local_2c8,0xe8);
        if (local_3f0 == 0) {
                    /* try { // try from 001cb950 to 001cb957 has its CatchHandler @ 001cba80 */
          core::ptr::drop_in_place<uu_df::filesystem::Filesystem>(&local_4a8);
        }
        else {
          (*(code *)puVar3)(&local_3b8,&local_2c8,0xe8);
                    /* try { // try from 001cb9a7 to 001cb9b1 has its CatchHandler @ 001cba80 */
          _<uu_df::table::Row_as_core::convert::From<uu_df::filesystem::Filesystem>>::from
                    (local_108,&local_3b8);
          local_548 = 0;
                    /* try { // try from 001cb9c1 to 001cb9cf has its CatchHandler @ 001cba7e */
          local_558 = local_108;
          local_550 = param_2;
          RowFormatter::get_values(&local_540,&local_558);
          (*(code *)puVar3)(&local_3b8,local_108,0xd0);
                    /* try { // try from 001cb9de to 001cb9ed has its CatchHandler @ 001cba7a */
          _<uu_df::table::Row_as_core::ops::arith::AddAssign>::add_assign(local_1d8,&local_3b8);
          local_3a8 = local_530;
          local_3b8 = CONCAT44(uStack_53c,local_540);
          uStack_3b0 = CONCAT44(uStack_534,uStack_538);
                    /* try { // try from 001cba08 to 001cba14 has its CatchHandler @ 001cba7c */
          ::alloc::vec::Vec<T,A>::push(&local_570,&local_3b8);
        }
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                  (&local_2c8,local_4c8);
      } while (local_2c8 != -0x8000000000000000);
    }
    else {
      do {
        (*(code *)puVar3)(&local_4a8,&local_2c8,0xe8);
        (*(code *)puVar3)(&local_3b8,&local_2c8,0xe8);
                    /* try { // try from 001cb66f to 001cb679 has its CatchHandler @ 001cba82 */
        _<uu_df::table::Row_as_core::convert::From<uu_df::filesystem::Filesystem>>::from
                  (local_108,&local_3b8);
        local_548 = 0;
                    /* try { // try from 001cb689 to 001cb697 has its CatchHandler @ 001cba84 */
        local_558 = local_108;
        local_550 = param_2;
        RowFormatter::get_values(&local_540,&local_558);
        (*(code *)puVar3)(&local_3b8,local_108,0xd0);
                    /* try { // try from 001cb6a5 to 001cb6b4 has its CatchHandler @ 001cba96 */
        _<uu_df::table::Row_as_core::ops::arith::AddAssign>::add_assign(local_1d8,&local_3b8);
        local_3a8 = local_530;
        local_3b8 = CONCAT44(uStack_53c,local_540);
        uStack_3b0 = CONCAT44(uStack_534,uStack_538);
                    /* try { // try from 001cb6cf to 001cb6db has its CatchHandler @ 001cbaa5 */
        ::alloc::vec::Vec<T,A>::push(&local_570,&local_3b8);
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                  (&local_2c8,local_4c8);
      } while (local_2c8 != -0x8000000000000000);
    }
  }
                    /* try { // try from 001cb6ff to 001cb759 has its CatchHandler @ 001cbaba */
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_df::filesystem::Filesystem>>
            (local_4c8);
  if (*(char *)(param_2 + 0x53) != '\0') {
    local_4a8 = local_1d8;
    local_498 = CONCAT71(local_498._1_7_,1);
    uStack_4a0 = param_2;
    RowFormatter::get_values(&local_3b8,&local_4a8);
    ::alloc::vec::Vec<T,A>::push(&local_570,&local_3b8);
  }
  uStack_4a0 = lStack_568 + local_560 * 0x18;
  local_4a8 = (undefined *)lStack_568;
  lVar5 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_4a8);
  if (lVar5 != 0) {
    do {
      local_3b8 = *(long *)(lVar5 + 8);
      uStack_3b0 = local_3b8 + *(long *)(lVar5 + 0x10) * 0x18;
      local_3a8 = 0;
      auVar9 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
               ::next(&local_3b8);
      lVar5 = auVar9._8_8_;
      while (lVar5 != 0) {
        uVar8 = auVar9._0_8_;
        uVar7 = *(undefined8 *)(auVar9._8_8_ + 8);
        uVar2 = *(undefined8 *)(auVar9._8_8_ + 0x10);
                    /* try { // try from 001cb828 to 001cb857 has its CatchHandler @ 001cbabc */
        uVar6 = unicode_width::str_width(uVar7,uVar2,0);
        if (local_508 <= uVar8) {
                    /* try { // try from 001cba1a to 001cba29 has its CatchHandler @ 001cbaba */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(uVar8,local_508,&DAT_00241b70);
        }
        lVar5 = CONCAT44(uStack_50c,uStack_510);
        if (*(ulong *)(lVar5 + uVar8 * 8) < uVar6) {
          uVar7 = unicode_width::str_width(uVar7,uVar2,0);
          *(undefined8 *)(lVar5 + uVar8 * 8) = uVar7;
        }
        auVar9 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                 ::next(&local_3b8);
        lVar5 = auVar9._8_8_;
      }
      lVar5 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_4a8);
    } while (lVar5 != 0);
  }
  local_2b8 = local_560;
  local_2c8 = local_570;
  lStack_2c0 = lStack_568;
  local_498 = local_508;
  local_4a8._0_4_ = local_518;
  local_4a8._4_4_ = uStack_514;
  uStack_4a0._0_4_ = uStack_510;
  uStack_4a0._4_4_ = uStack_50c;
                    /* try { // try from 001cb895 to 001cb8ab has its CatchHandler @ 001cba3c */
  get_alignments(&local_3b8,local_520,local_528);
  param_1[2] = local_3a8;
  *param_1 = local_3b8;
  param_1[1] = uStack_3b0;
  param_1[3] = local_2c8;
  param_1[4] = lStack_2c0;
  param_1[5] = local_2b8;
  *(undefined4 *)(param_1 + 6) = (undefined4)local_4a8;
  *(undefined4 *)((long)param_1 + 0x34) = local_4a8._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_4a0;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_4a0._4_4_;
  param_1[8] = local_498;
                    /* try { // try from 001cb8fa to 001cb906 has its CatchHandler @ 001cba6c */
  core::ptr::drop_in_place<uu_df::table::Row>(local_1d8);
  return param_1;
}