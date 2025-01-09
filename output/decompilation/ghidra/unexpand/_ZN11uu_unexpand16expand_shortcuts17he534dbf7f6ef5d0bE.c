long * __rustcall uu_unexpand::expand_shortcuts(long *param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  undefined uVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined auVar12 [16];
  ulong local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  ulong local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_c8,param_3,0);
  if (local_c8 != 0) {
LAB_001b203b:
    uVar9 = ::alloc::raw_vec::handle_error();
                    /* catch() { ... } // from try @ 001b1fc0 with catch @ 001b2046 */
                    /* catch() { ... } // from try @ 001b1ea9 with catch @ 001b2048 */
                    /* try { // try from 001b204b to 001b2054 has its CatchHandler @ 001b205d */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_b0);
    plVar10 = (long *)_Unwind_Resume(uVar9);
    return plVar10;
  }
  local_b0 = lStack_c0;
  lStack_a8 = local_b8;
  local_a0 = 0;
  lStack_90 = param_2 + param_3 * 0x18;
  local_98 = param_2;
  lVar6 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_98);
  if (lVar6 != 0) {
    bVar5 = false;
    bVar2 = false;
    local_80 = param_1;
    do {
      uVar9 = *(undefined8 *)(lVar6 + 8);
      uVar1 = *(undefined8 *)(lVar6 + 0x10);
      local_c8 = local_c8 & 0xffffffff00000000;
      uVar7 = core::char::methods::encode_utf8_raw(0x2d,&local_c8);
                    /* try { // try from 001b1ea9 to 001b1f9e has its CatchHandler @ 001b2048 */
      cVar3 = core::slice::_<impl[T]>::starts_with(uVar9,uVar1,uVar7,1);
      if (cVar3 == '\0') {
LAB_001b1f50:
        _<alloc::string::String_as_core::clone::Clone>::clone(&local_c8,lVar6);
        ::alloc::vec::Vec<T,A>::push(&local_b0,&local_c8);
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar9,uVar1,"--all",5);
        if ((cVar3 != '\0') ||
           (cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar9,uVar1,"-a",2),
           cVar3 != '\0')) {
          bVar2 = true;
        }
      }
      else {
        auVar12 = core::str::traits::
                  _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>
                  ::get(uVar9,uVar1);
        lVar11 = auVar12._8_8_;
        uVar8 = auVar12._0_8_;
        if (uVar8 == 0) {
          core::str::slice_error_fail
                    (uVar9,uVar1,1,uVar1,&PTR_s_src_uu_unexpand_src_unexpand_rs_0021cf48);
          goto LAB_001b203b;
        }
        lStack_c0 = uVar8 + lVar11;
        local_c8 = uVar8;
        uVar4 = core::iter::traits::iterator::Iterator::try_fold(&local_c8);
        cVar3 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar4);
        if (cVar3 == '\0') goto LAB_001b1f50;
        _<char_as_core::str::pattern::Pattern>::into_searcher(local_68,uVar8,lVar11);
        local_78 = 0;
        local_38 = 1;
        bVar5 = true;
        local_70 = lVar11;
        core::iter::traits::iterator::Iterator::fold(&local_78,&local_b0);
      }
      lVar6 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_98);
      param_1 = local_80;
    } while (lVar6 != 0);
    if ((bVar5) && (!bVar2)) {
                    /* try { // try from 001b1fc0 to 001b203a has its CatchHandler @ 001b2046 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_c8,"--first-only",0xc);
      local_88 = local_b8;
      local_98 = local_c8;
      lStack_90 = lStack_c0;
      ::alloc::vec::Vec<T,A>::push(&local_b0,&local_98);
    }
  }
  param_1[2] = local_a0;
  *param_1 = local_b0;
  param_1[1] = lStack_a8;
  return param_1;
}