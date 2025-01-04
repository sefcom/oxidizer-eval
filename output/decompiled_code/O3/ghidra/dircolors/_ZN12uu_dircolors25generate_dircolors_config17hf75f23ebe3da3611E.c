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
                    /* try { // try from 001bcd84 to 001bcdaf has its CatchHandler @ 001bd152 */
  local_80 = param_1;
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,&DAT_0012352f,0x1e4);
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,&DAT_00123713,0xd);
  local_108 = anon_84df56382e2e566cd8a063a5d0153d3b_47_llvm_4004663911042702431;
  local_100 = (undefined **)anon_84df56382e2e566cd8a063a5d0153d3b_97_llvm_4004663911042702431;
  lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_108);
  if (lVar1 != 0) {
    do {
      local_a0 = &local_f8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_d8 = &PTR_DAT_00227238;
      uStack_d0 = 2;
      local_b8 = 0;
      local_c0 = 1;
      local_f8 = lVar1;
      local_c8 = &local_a0;
                    /* try { // try from 001bce40 to 001bce4a has its CatchHandler @ 001bd185 */
      core::option::Option<T>::map_or_else(local_78,&local_d8);
      uStack_d0 = CONCAT44(uStack_6c,uStack_70);
      local_c8 = (undefined8 **)local_68;
      uVar2 = core::slice::iter::Iter<T>::make_slice(uStack_d0,local_68 + uStack_d0);
                    /* try { // try from 001bce72 to 001bce7c has its CatchHandler @ 001bd172 */
      ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
                    /* try { // try from 001bce7d to 001bce84 has its CatchHandler @ 001bd185 */
      core::ptr::drop_in_place<alloc::string::String>(&local_d8);
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_108);
    } while (lVar1 != 0);
  }
  uVar2 = core::slice::iter::Iter<T>::make_slice(&DAT_00123720,&DAT_0012398e);
                    /* try { // try from 001bcea9 to 001bceb5 has its CatchHandler @ 001bd152 */
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
  local_108 = anon_84df56382e2e566cd8a063a5d0153d3b_97_llvm_4004663911042702431;
  local_100 = (undefined **)anon_84df56382e2e566cd8a063a5d0153d3b_231_llvm_4004663911042702431;
  lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_108);
  if (lVar1 != 0) {
    do {
      local_f8 = lVar1 + 0x20;
      local_a0 = &local_a8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_90 = &local_f8;
      local_88 = _<&T_as_core::fmt::Display>::fmt;
      local_d8 = (undefined **)&DAT_00227258;
      uStack_d0 = 3;
      local_b8 = 0;
      local_c0 = 2;
      local_c8 = &local_a0;
      local_a8 = lVar1;
                    /* try { // try from 001bcf5b to 001bcf65 has its CatchHandler @ 001bd183 */
      core::option::Option<T>::map_or_else(local_60,&local_d8);
      uStack_d0 = CONCAT44(uStack_54,uStack_58);
      local_c8 = (undefined8 **)local_50;
      uVar2 = core::slice::iter::Iter<T>::make_slice(uStack_d0,local_50 + uStack_d0);
                    /* try { // try from 001bcf8d to 001bcf97 has its CatchHandler @ 001bd163 */
      ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
                    /* try { // try from 001bcf98 to 001bcf9f has its CatchHandler @ 001bd183 */
      core::ptr::drop_in_place<alloc::string::String>(&local_d8);
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_108);
    } while (lVar1 != 0);
  }
  uVar2 = core::slice::iter::Iter<T>::make_slice(&DAT_00123993,&DAT_001239da);
                    /* try { // try from 001bcfc4 to 001bcff0 has its CatchHandler @ 001bd152 */
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
  uVar2 = core::slice::iter::Iter<T>::make_slice(&DAT_001239db,&DAT_00123a24);
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
  local_108 = anon_84df56382e2e566cd8a063a5d0153d3b_231_llvm_4004663911042702431;
  local_100 = &PTR_s_normalnofiresetdirlnksymlinkorph_002291b8;
  lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_108);
  if (lVar1 != 0) {
    do {
      local_f8 = lVar1 + 0x10;
      local_a0 = &local_a8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_90 = &local_f8;
      local_88 = _<&T_as_core::fmt::Display>::fmt;
      local_d8 = (undefined **)&DAT_00227258;
      uStack_d0 = 3;
      local_b8 = 0;
      local_c0 = 2;
      local_c8 = &local_a0;
      local_a8 = lVar1;
                    /* try { // try from 001bd09b to 001bd0a5 has its CatchHandler @ 001bd181 */
      core::option::Option<T>::map_or_else(local_48,&local_d8);
      uStack_d0 = CONCAT44(uStack_3c,uStack_40);
      local_c8 = (undefined8 **)local_38;
      uVar2 = core::slice::iter::Iter<T>::make_slice(uStack_d0,local_38 + uStack_d0);
                    /* try { // try from 001bd0cd to 001bd0d7 has its CatchHandler @ 001bd154 */
      ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
                    /* try { // try from 001bd0d8 to 001bd0df has its CatchHandler @ 001bd181 */
      core::ptr::drop_in_place<alloc::string::String>(&local_d8);
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_108);
    } while (lVar1 != 0);
  }
                    /* try { // try from 001bd0f1 to 001bd126 has its CatchHandler @ 001bd152 */
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,&DAT_00123a24,0x46);
  uVar2 = core::slice::iter::Iter<T>::make_slice
                    (&DAT_00123a6a,&switchD_001bea49::switchdataD_00123aa4);
  ::alloc::vec::Vec<T,A>::append_elements(&local_f0,uVar2);
  local_80[2] = local_e0;
  *local_80 = local_f0;
  local_80[1] = uStack_e8;
  return;
}