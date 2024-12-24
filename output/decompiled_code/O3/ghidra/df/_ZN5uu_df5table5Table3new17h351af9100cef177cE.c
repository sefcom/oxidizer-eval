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
  
                    /* try { // try from 001cb9ce to 001cb9dd has its CatchHandler @ 001cbf07 */
  Header::get_headers(&local_500);
  lVar5 = *(long *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  local_4e0 = lVar5 + lVar1;
  local_4d8 = 0;
                    /* try { // try from 001cba0e to 001cba1f has its CatchHandler @ 001cbefd */
  local_4e8 = lVar5;
  local_4d0 = &local_500;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_518,&local_4e8);
  puVar4 = (undefined4 *)::alloc::alloc::Global::alloc_impl();
  if (puVar4 == (undefined4 *)0x0) {
                    /* try { // try from 001cbecc to 001cbedb has its CatchHandler @ 001cbf13 */
                    /* WARNING: Subroutine does not return */
    ::alloc::alloc::handle_alloc_error(8,0x18);
  }
  *(undefined8 *)(puVar4 + 4) = local_4f0;
  *puVar4 = local_500;
  puVar4[1] = uStack_4fc;
  puVar4[2] = uStack_4f8;
  puVar4[3] = uStack_4f4;
                    /* try { // try from 001cba53 to 001cba64 has its CatchHandler @ 001cbf13 */
  local_528 = lVar1;
  local_520 = lVar5;
  ::alloc::slice::hack::into_vec(&local_570,puVar4,1);
                    /* try { // try from 001cba68 to 001cba74 has its CatchHandler @ 001cbf0c */
  Row::new(local_1d8);
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_4c8,param_3);
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
            (&local_2c8,local_4c8);
  puVar3 = PTR_memcpy_00246780;
  if (local_2c8 != -0x8000000000000000) {
    if (*(char *)(param_2 + 0x51) == '\0') {
      do {
        (*(code *)puVar3)(&local_4a8,&local_2c8,0xe8);
        if (local_3f0 == 0) {
                    /* try { // try from 001cbdf0 to 001cbdf7 has its CatchHandler @ 001cbf20 */
          core::ptr::drop_in_place<uu_df::filesystem::Filesystem>(&local_4a8);
        }
        else {
          (*(code *)puVar3)(&local_3b8,&local_2c8,0xe8);
                    /* try { // try from 001cbe47 to 001cbe51 has its CatchHandler @ 001cbf20 */
          _<uu_df::table::Row_as_core::convert::From<uu_df::filesystem::Filesystem>>::from
                    (local_108,&local_3b8);
          local_548 = 0;
                    /* try { // try from 001cbe61 to 001cbe6f has its CatchHandler @ 001cbf1e */
          local_558 = local_108;
          local_550 = param_2;
          RowFormatter::get_values(&local_540,&local_558);
          (*(code *)puVar3)(&local_3b8,local_108,0xd0);
                    /* try { // try from 001cbe7e to 001cbe8d has its CatchHandler @ 001cbf1a */
          _<uu_df::table::Row_as_core::ops::arith::AddAssign>::add_assign(local_1d8,&local_3b8);
          local_3a8 = local_530;
          local_3b8 = CONCAT44(uStack_53c,local_540);
          uStack_3b0 = CONCAT44(uStack_534,uStack_538);
                    /* try { // try from 001cbea8 to 001cbeb4 has its CatchHandler @ 001cbf1c */
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
                    /* try { // try from 001cbb0f to 001cbb19 has its CatchHandler @ 001cbf22 */
        _<uu_df::table::Row_as_core::convert::From<uu_df::filesystem::Filesystem>>::from
                  (local_108,&local_3b8);
        local_548 = 0;
                    /* try { // try from 001cbb29 to 001cbb37 has its CatchHandler @ 001cbf24 */
        local_558 = local_108;
        local_550 = param_2;
        RowFormatter::get_values(&local_540,&local_558);
        (*(code *)puVar3)(&local_3b8,local_108,0xd0);
                    /* try { // try from 001cbb45 to 001cbb54 has its CatchHandler @ 001cbf36 */
        _<uu_df::table::Row_as_core::ops::arith::AddAssign>::add_assign(local_1d8,&local_3b8);
        local_3a8 = local_530;
        local_3b8 = CONCAT44(uStack_53c,local_540);
        uStack_3b0 = CONCAT44(uStack_534,uStack_538);
                    /* try { // try from 001cbb6f to 001cbb7b has its CatchHandler @ 001cbf45 */
        ::alloc::vec::Vec<T,A>::push(&local_570,&local_3b8);
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                  (&local_2c8,local_4c8);
      } while (local_2c8 != -0x8000000000000000);
    }
  }
                    /* try { // try from 001cbb9f to 001cbbf9 has its CatchHandler @ 001cbf5a */
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
                    /* try { // try from 001cbcc8 to 001cbcf7 has its CatchHandler @ 001cbf5c */
        uVar6 = unicode_width::str_width(uVar7,uVar2,0);
        if (local_508 <= uVar8) {
                    /* try { // try from 001cbeba to 001cbec9 has its CatchHandler @ 001cbf5a */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(uVar8,local_508,&DAT_00242850);
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
                    /* try { // try from 001cbd35 to 001cbd4b has its CatchHandler @ 001cbedc */
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
                    /* try { // try from 001cbd9a to 001cbda6 has its CatchHandler @ 001cbf0c */
  core::ptr::drop_in_place<uu_df::table::Row>(local_1d8);
  return param_1;
}