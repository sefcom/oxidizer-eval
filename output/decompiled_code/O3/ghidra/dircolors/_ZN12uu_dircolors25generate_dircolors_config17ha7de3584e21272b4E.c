void __rustcall uu_dircolors::generate_dircolors_config(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *local_108;
  undefined **local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined8 **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_a8;
  long *local_a0;
  code *local_98;
  long *local_90;
  code *local_88;
  undefined8 *local_80;
  undefined local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  undefined local_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_50;
  undefined local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_f0 = 0;
  uStack_e8 = 1;
  local_e0 = 0;
                    /* try { // try from 001bce64 to 001bce8f has its CatchHandler @ 001bd232 */
  local_80 = param_1;
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,&DAT_00123627,0x1e4);
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,&DAT_0012380b,0xd);
  local_108 = anon_82c3ed8cdb07ba982e54791b0c97d0cf_64_llvm_541762227079851447;
  local_100 = (undefined **)anon_82c3ed8cdb07ba982e54791b0c97d0cf_114_llvm_541762227079851447;
  lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_108);
  if (lVar1 != 0) {
    do {
      local_a0 = &local_f8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_d8 = &PTR_DAT_00227848;
      uStack_d0 = 2;
      local_b8 = 0;
      local_c0 = 1;
      local_f8 = lVar1;
      local_c8 = &local_a0;
                    /* try { // try from 001bcf20 to 001bcf2a has its CatchHandler @ 001bd265 */
      core::option::Option<T>::map_or_else(local_78,&local_d8);
      uStack_d0 = CONCAT44(uStack_6c,uStack_70);
      local_c8 = (undefined8 **)local_68;
      uVar2 = core::slice::iter::Iter<T>::make_slice(uStack_d0,local_68 + uStack_d0);
                    /* try { // try from 001bcf52 to 001bcf5c has its CatchHandler @ 001bd252 */
      ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
                    /* try { // try from 001bcf5d to 001bcf64 has its CatchHandler @ 001bd265 */
      core::ptr::drop_in_place<alloc::string::String>(&local_d8);
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_108);
    } while (lVar1 != 0);
  }
  uVar2 = core::slice::iter::Iter<T>::make_slice(&DAT_00123818,&DAT_00123a86);
                    /* try { // try from 001bcf89 to 001bcf95 has its CatchHandler @ 001bd232 */
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
  local_108 = anon_82c3ed8cdb07ba982e54791b0c97d0cf_114_llvm_541762227079851447;
  local_100 = (undefined **)anon_82c3ed8cdb07ba982e54791b0c97d0cf_248_llvm_541762227079851447;
  lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_108);
  if (lVar1 != 0) {
    do {
      local_f8 = lVar1 + 0x20;
      local_a0 = &local_a8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_90 = &local_f8;
      local_88 = _<&T_as_core::fmt::Display>::fmt;
      local_d8 = (undefined **)&DAT_00227818;
      uStack_d0 = 3;
      local_b8 = 0;
      local_c0 = 2;
      local_c8 = &local_a0;
      local_a8 = lVar1;
                    /* try { // try from 001bd03b to 001bd045 has its CatchHandler @ 001bd263 */
      core::option::Option<T>::map_or_else(local_60,&local_d8);
      uStack_d0 = CONCAT44(uStack_54,uStack_58);
      local_c8 = (undefined8 **)local_50;
      uVar2 = core::slice::iter::Iter<T>::make_slice(uStack_d0,local_50 + uStack_d0);
                    /* try { // try from 001bd06d to 001bd077 has its CatchHandler @ 001bd243 */
      ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
                    /* try { // try from 001bd078 to 001bd07f has its CatchHandler @ 001bd263 */
      core::ptr::drop_in_place<alloc::string::String>(&local_d8);
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_108);
    } while (lVar1 != 0);
  }
  uVar2 = core::slice::iter::Iter<T>::make_slice(&DAT_00123a86,&DAT_00123acd);
                    /* try { // try from 001bd0a4 to 001bd0d0 has its CatchHandler @ 001bd232 */
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
  uVar2 = core::slice::iter::Iter<T>::make_slice(&DAT_00123acd,&DAT_00123b16);
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
  local_108 = anon_82c3ed8cdb07ba982e54791b0c97d0cf_248_llvm_541762227079851447;
  local_100 = &PTR_s_normalnofiresetdirlnksymlinkorph_00229848;
  lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_108);
  if (lVar1 != 0) {
    do {
      local_f8 = lVar1 + 0x10;
      local_a0 = &local_a8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_90 = &local_f8;
      local_88 = _<&T_as_core::fmt::Display>::fmt;
      local_d8 = (undefined **)&DAT_00227818;
      uStack_d0 = 3;
      local_b8 = 0;
      local_c0 = 2;
      local_c8 = &local_a0;
      local_a8 = lVar1;
                    /* try { // try from 001bd17b to 001bd185 has its CatchHandler @ 001bd261 */
      core::option::Option<T>::map_or_else(local_48,&local_d8);
      uStack_d0 = CONCAT44(uStack_3c,uStack_40);
      local_c8 = (undefined8 **)local_38;
      uVar2 = core::slice::iter::Iter<T>::make_slice(uStack_d0,local_38 + uStack_d0);
                    /* try { // try from 001bd1ad to 001bd1b7 has its CatchHandler @ 001bd234 */
      ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
                    /* try { // try from 001bd1b8 to 001bd1bf has its CatchHandler @ 001bd261 */
      core::ptr::drop_in_place<alloc::string::String>(&local_d8);
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_108);
    } while (lVar1 != 0);
  }
                    /* try { // try from 001bd1d1 to 001bd206 has its CatchHandler @ 001bd232 */
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,&DAT_00123b16,0x46);
  uVar2 = core::slice::iter::Iter<T>::make_slice(&DAT_00123b5c,&DAT_00123b96);
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
  local_80[2] = local_e0;
  *local_80 = local_f0;
  local_80[1] = uStack_e8;
  return;
}