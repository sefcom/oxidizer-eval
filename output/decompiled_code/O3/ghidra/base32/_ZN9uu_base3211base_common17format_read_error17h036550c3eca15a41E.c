undefined8 __rustcall
uu_base32::base_common::format_read_error(undefined8 param_1,undefined param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined local_d9;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined8 **local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 *local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined local_60 [8];
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_d9 = param_2;
  _<T_as_alloc::string::ToString>::to_string(local_60,&local_d9);
                    /* try { // try from 001c1d63 to 001c1d71 has its CatchHandler @ 001c1f17 */
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_c0,local_50,0);
  local_90 = param_1;
  if (local_c0 == (undefined **)0x0) {
    local_d8 = uStack_b8;
    local_d0 = local_b0;
    local_c8 = 0;
    local_40 = local_50 + local_58;
    local_48 = local_58;
    local_38 = 0;
    auVar3 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                       (&local_48);
    if (auVar3._8_4_ != 0x110000) {
      do {
        if (auVar3._0_8_ == 0) {
          core::unicode::unicode_data::conversions::to_upper(&local_88,auVar3._8_8_ & 0xffffffff);
          core::char::CaseMappingIter::new(&local_c0,&local_88);
          local_78 = local_b0;
          uStack_70 = uStack_a8;
          while( true ) {
                    /* try { // try from 001c1ee0 to 001c1ef5 has its CatchHandler @ 001c1f21 */
            iVar1 = _<core::char::ToLowercase_as_core::iter::traits::iterator::Iterator>::next
                              (&local_88);
            if (iVar1 == 0x110000) break;
            ::alloc::string::String::push(&local_d8,iVar1);
          }
                    /* try { // try from 001c1f00 to 001c1f07 has its CatchHandler @ 001c1f1c */
          core::ptr::drop_in_place<core::char::ToUppercase>(&local_88);
        }
        else {
                    /* try { // try from 001c1e90 to 001c1ec4 has its CatchHandler @ 001c1f1c */
          ::alloc::string::String::push(&local_d8,auVar3._8_8_ & 0xffffffff);
        }
        auVar3 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                           (&local_48);
      } while (auVar3._8_4_ != 0x110000);
    }
    uVar2 = local_90;
    local_88 = &local_d8;
    pcStack_80 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_c0 = &PTR_s_read_error__0024a5b0;
    uStack_b8 = 1;
    local_a0 = 0;
    local_b0 = &local_88;
    uStack_a8 = 1;
                    /* try { // try from 001c1e27 to 001c1e38 has its CatchHandler @ 001c1f15 */
    core::option::Option<T>::map_or_else(local_90,&local_c0);
                    /* try { // try from 001c1e39 to 001c1e42 has its CatchHandler @ 001c1f17 */
    core::ptr::drop_in_place<alloc::string::String>(&local_d8);
    core::ptr::drop_in_place<alloc::string::String>(local_60);
    return uVar2;
  }
                    /* try { // try from 001c1f0f to 001c1f14 has its CatchHandler @ 001c1f17 */
  uVar2 = ::alloc::raw_vec::handle_error(uStack_b8,local_b0);
                    /* catch() { ... } // from try @ 001c1e27 with catch @ 001c1f15 */
                    /* catch() { ... } // from try @ 001c1e90 with catch @ 001c1f1c
                       catch() { ... } // from try @ 001c1f00 with catch @ 001c1f1c */
  core::ptr::drop_in_place<alloc::string::String>(&local_d8);
  core::ptr::drop_in_place<alloc::string::String>(local_60);
  uVar2 = _Unwind_Resume(uVar2);
  return uVar2;
}