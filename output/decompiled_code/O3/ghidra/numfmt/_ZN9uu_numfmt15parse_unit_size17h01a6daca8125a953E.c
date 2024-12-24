void __rustcall uu_numfmt::parse_unit_size(undefined8 *param_1,undefined **param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined **local_c0;
  long local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined local_90 [8];
  undefined8 local_88;
  long local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined **local_60;
  long local_58;
  undefined local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_b8 = (long)param_2 + param_3;
  local_b0 = (undefined8 **)((ulong)local_b0 & 0xffffffffffffff00);
  local_c0 = param_2;
  _<alloc::string::String_as_core::iter::traits::collect::FromIterator<char>>::from_iter
            (local_90,&local_c0);
  lVar1 = local_80;
  auVar4 = core::str::traits::
           _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::get
                     (local_80,param_2,param_3);
  if (auVar4._0_8_ == 0) {
                    /* try { // try from 001c0706 to 001c071e has its CatchHandler @ 001c072e */
    uVar3 = core::str::slice_error_fail
                      (param_2,param_3,lVar1,param_3,&PTR_s_src_uu_numfmt_src_numfmt_rs_00236340);
                    /* catch() { ... } // from try @ 001c05e1 with catch @ 001c071f */
                    /* try { // try from 001c0722 to 001c073a has its CatchHandler @ 001c0743 */
    core::ptr::drop_in_place<alloc::string::String>(&local_c0);
    core::ptr::drop_in_place<alloc::string::String>(local_90);
    _Unwind_Resume(uVar3);
    return;
  }
  if (lVar1 == 0) {
LAB_001c0600:
    auVar4 = parse_unit_size_suffix(auVar4._0_8_,auVar4._8_8_);
    if (auVar4._0_8_ == 1) {
      if (local_80 == 0) {
        param_1[1] = auVar4._8_8_;
      }
      else {
        core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str
                  (&local_c0,local_88,local_80);
        if ((char)local_c0 != '\0') goto LAB_001c0643;
        param_1[1] = auVar4._8_8_ * local_b8;
      }
      *param_1 = 0x8000000000000000;
      goto LAB_001c06ea;
    }
  }
  else {
                    /* try { // try from 001c05b3 to 001c05cc has its CatchHandler @ 001c072e */
    ::alloc::str::_<impl_str>::repeat(&local_c0,"0",1,lVar1);
                    /* try { // try from 001c05e1 to 001c05e5 has its CatchHandler @ 001c071f */
    cVar2 = ::alloc::vec::partial_eq::
            _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq
                      (local_b8,local_b0,local_88,local_80);
    if (cVar2 == '\0') {
      core::ptr::drop_in_place<alloc::string::String>(&local_c0);
      goto LAB_001c0600;
    }
                    /* try { // try from 001c05ea to 001c06b3 has its CatchHandler @ 001c072e */
    core::ptr::drop_in_place<alloc::string::String>(&local_c0);
  }
LAB_001c0643:
  local_68 = 0;
  local_50 = 1;
  local_78 = &local_68;
  local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_c0 = &PTR_s_invalid_unit_size__00236358;
  local_b8 = 1;
  local_a0 = 0;
  local_b0 = &local_78;
  local_a8 = 1;
  local_60 = param_2;
  local_58 = param_3;
  core::option::Option<T>::map_or_else(&local_48,&local_c0);
  param_1[2] = local_38;
  *(undefined4 *)param_1 = local_48;
  *(undefined4 *)((long)param_1 + 4) = uStack_44;
  *(undefined4 *)(param_1 + 1) = uStack_40;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
LAB_001c06ea:
  core::ptr::drop_in_place<alloc::string::String>(local_90);
  return;
}