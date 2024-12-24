void __rustcall uu_expand::expand_shortcuts(undefined8 *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
                    /* try { // try from 001b2ceb to 001b2cf6 has its CatchHandler @ 001b2f03 */
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_b8,*(undefined8 *)(param_2 + 0x10),0);
  local_98 = param_1;
  if (local_b8 != 0) {
                    /* try { // try from 001b2ef6 to 001b2efb has its CatchHandler @ 001b2f03 */
    uVar6 = ::alloc::raw_vec::handle_error(local_b0,local_a8);
LAB_001b2efc:
                    /* catch() { ... } // from try @ 001b2ea2 with catch @ 001b2efc */
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_f0);
    _Unwind_Resume(uVar6);
    return;
  }
  local_f0 = local_b0;
  uStack_e8 = local_a8;
  local_e0 = 0;
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(&local_b8,param_2);
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
            (&local_90,&local_b8);
  if (CONCAT44(uStack_8c,local_90) != -0x8000000000000000) {
    do {
      local_d8 = local_90;
      uStack_d4 = uStack_8c;
      uStack_d0 = uStack_88;
      uStack_cc = uStack_84;
      local_c8 = local_80;
                    /* try { // try from 001b2d7c to 001b2e45 has its CatchHandler @ 001b2f17 */
      std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
                (&local_108,CONCAT44(uStack_84,uStack_88));
      uVar6 = local_f8;
      lVar1 = uStack_100;
      if (local_108 == 0) {
        local_108 = 0;
        uVar4 = core::char::methods::encode_utf8_raw(0x2d,&local_108);
        cVar2 = core::slice::_<impl[T]>::starts_with(lVar1,uVar6,uVar4,1);
        if (cVar2 == '\0') goto LAB_001b2e60;
        auVar8 = core::str::traits::
                 _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::
                 get(lVar1,uVar6);
        lVar7 = auVar8._8_8_;
        lVar5 = auVar8._0_8_;
        if (lVar5 == 0) {
                    /* try { // try from 001b2ed4 to 001b2eee has its CatchHandler @ 001b2f10 */
          uVar6 = core::str::slice_error_fail(lVar1,uVar6,1,uVar6,&PTR_DAT_0021ec78);
          goto LAB_001b2efc;
        }
        uStack_100 = lVar5 + lVar7;
        local_108 = lVar5;
        uVar3 = core::iter::traits::iterator::Iterator::try_fold(&local_108);
        cVar2 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar3);
        if (cVar2 == '\0') goto LAB_001b2e60;
        _<char_as_core::str::pattern::Pattern>::into_searcher(local_68,lVar5,lVar7);
        local_78 = 0;
        local_38 = 1;
        local_70 = lVar7;
        core::iter::traits::iterator::Iterator::fold(&local_78,&local_f0);
                    /* try { // try from 001b2e46 to 001b2e4f has its CatchHandler @ 001b2f01 */
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_d8);
      }
      else {
LAB_001b2e60:
        local_f8 = local_c8;
        local_108 = CONCAT44(uStack_d4,local_d8);
        uStack_100 = CONCAT44(uStack_cc,uStack_d0);
                    /* try { // try from 001b2e73 to 001b2e7f has its CatchHandler @ 001b2f12 */
        ::alloc::vec::Vec<T,A>::push(&local_f0,&local_108);
      }
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                (&local_90,&local_b8);
    } while (CONCAT44(uStack_8c,local_90) != -0x8000000000000000);
  }
                    /* try { // try from 001b2ea2 to 001b2eab has its CatchHandler @ 001b2efc */
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&local_b8);
  local_98[2] = local_e0;
  *local_98 = local_f0;
  local_98[1] = uStack_e8;
  return;
}