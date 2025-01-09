void __rustcall
uu_ptx::get_output_chunks
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
          ,long param_6,long param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined *local_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  long *plStack_180;
  ulong local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long local_150;
  ulong local_148;
  undefined8 *local_140;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  long *plStack_120;
  ulong local_118;
  undefined8 local_110;
  long *plStack_108;
  undefined8 local_100;
  long local_f8;
  code *local_f0;
  undefined8 *local_e8;
  code *local_e0;
  long local_d8;
  long local_d0;
  undefined8 *local_c8;
  undefined local_c0 [8];
  long local_b8;
  long local_b0;
  undefined local_a8 [8];
  long local_a0;
  long local_98;
  undefined local_90 [8];
  long local_88;
  long local_80;
  undefined local_78 [8];
  long local_70;
  long local_68;
  undefined8 local_60;
  long *plStack_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_138 = *(long *)(param_7 + 0x50);
  uVar6 = *(ulong *)(param_7 + 0x48) >> 1;
  local_130 = param_2;
  local_c8 = param_1;
  uVar1 = core::cmp::max_by(uVar6 - local_138);
  local_d8 = *(long *)(param_7 + 0x28);
  local_148 = core::cmp::max_by(~(local_d8 * 2 + param_4) + uVar6);
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1b8,uVar6,0);
  if (local_1b8 == (undefined *)0x0) {
    local_168 = local_1b0;
    uStack_160 = local_1a8;
    local_158 = 0;
                    /* try { // try from 002b75ba to 002b75c8 has its CatchHandler @ 002b7c87 */
    ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1b8,uVar6,0);
    if (local_1b8 == (undefined *)0x0) {
      local_188 = local_1b0;
      plStack_180 = local_1a8;
      local_178 = 0;
                    /* try { // try from 002b75f2 to 002b7600 has its CatchHandler @ 002b7c82 */
      ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1b8,uVar6,0);
      if (local_1b8 == (undefined *)0x0) {
        local_128 = local_1b0;
        plStack_120 = local_1a8;
        local_118 = 0;
                    /* try { // try from 002b7633 to 002b7641 has its CatchHandler @ 002b7c7d */
        ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1b8,uVar6,0);
        uVar3 = local_130;
        if (local_1b8 == (undefined *)0x0) {
          local_110 = local_1b0;
          plStack_108 = local_1a8;
          local_100 = 0;
                    /* try { // try from 002b7676 to 002b76f2 has its CatchHandler @ 002b7c8c */
          trim_idx(local_130,param_3,0,param_3);
          uVar2 = core::cmp::max_by(extraout_RDX - uVar1);
          uVar2 = trim_broken_word_left(uVar3,param_3,uVar2,extraout_RDX);
          auVar7 = trim_idx(uVar3,param_3,uVar2,extraout_RDX);
          local_150 = auVar7._0_8_;
          auVar7 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                             (local_150,auVar7._8_8_,uVar3,param_3,
                              &PTR_s_src_uu_ptx_src_ptx_rs_003edee0);
          _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                    (local_c0,auVar7._0_8_,auVar7._0_8_ + auVar7._8_8_ * 4);
          uVar3 = core::slice::iter::Iter<T>::make_slice(local_b8,local_b0 + local_b8);
                    /* try { // try from 002b7710 to 002b778a has its CatchHandler @ 002b7caa */
          ::alloc::vec::Vec<T,A>::append_elements(&local_188,uVar3);
          if (uVar1 < local_178) {
                    /* try { // try from 002b7bf4 to 002b7c0c has its CatchHandler @ 002b7caa */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic(&DAT_0015ec78,0x31,&PTR_s_src_uu_ptx_src_ptx_rs_003edef8);
          }
          uVar3 = core::cmp::min_by(local_148,param_6);
          uVar3 = trim_broken_word_right(param_5,param_6,0,uVar3);
          trim_idx(param_5,param_6,0,uVar3);
          auVar7 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                             (0,extraout_RDX_00,param_5,param_6,
                              &PTR_s_src_uu_ptx_src_ptx_rs_003edf10);
          _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                    (local_a8,auVar7._0_8_,auVar7._0_8_ + auVar7._8_8_ * 4);
          uVar3 = core::slice::iter::Iter<T>::make_slice(local_a0,local_98 + local_a0);
                    /* try { // try from 002b77a8 to 002b7865 has its CatchHandler @ 002b7caf */
          local_140 = &local_128;
          ::alloc::vec::Vec<T,A>::append_elements(local_140,uVar3);
          uVar6 = local_178;
          if (local_148 < local_118) {
                    /* try { // try from 002b7c0f to 002b7c27 has its CatchHandler @ 002b7caf */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic(&DAT_0015eca9,0x2f,&PTR_s_src_uu_ptx_src_ptx_rs_003edf28);
          }
          lVar4 = trim_idx(param_5,param_6,extraout_RDX_00,param_6);
          lVar5 = core::cmp::max_by(uVar1 - (uVar6 + local_138));
          uVar3 = core::cmp::min_by(param_6,lVar4 + lVar5);
          uVar3 = trim_broken_word_right(param_5,param_6,lVar4,uVar3);
          auVar7 = trim_idx(param_5,param_6,lVar4,uVar3);
          lVar5 = auVar7._8_8_;
          auVar8 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                             (auVar7._0_8_,lVar5,param_5,param_6,
                              &PTR_s_src_uu_ptx_src_ptx_rs_003edf40);
          _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                    (local_90,auVar8._0_8_,auVar8._0_8_ + auVar8._8_8_ * 4);
          local_d0 = auVar7._0_8_;
          uVar3 = core::slice::iter::Iter<T>::make_slice(local_88,local_80 + local_88);
                    /* try { // try from 002b7892 to 002b7940 has its CatchHandler @ 002b7c94 */
          ::alloc::vec::Vec<T,A>::append_elements(&local_110,uVar3);
          uVar1 = local_118;
          uVar3 = local_130;
          trim_idx(local_130,param_3,0,local_150);
          lVar4 = core::cmp::max_by(local_148 - (local_138 + uVar1));
          uVar2 = core::cmp::max_by(extraout_RDX_01 - lVar4);
          uVar2 = trim_broken_word_left(uVar3,param_3,uVar2,extraout_RDX_01);
          auVar7 = trim_idx(uVar3,param_3,uVar2,extraout_RDX_01);
          lVar4 = auVar7._0_8_;
          auVar8 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                             (lVar4,auVar7._8_8_,uVar3,param_3,&PTR_s_src_uu_ptx_src_ptx_rs_003edf58
                             );
          _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                    (local_78,auVar8._0_8_,auVar8._0_8_ + auVar8._8_8_ * 4);
          uVar3 = core::slice::iter::Iter<T>::make_slice(local_70,local_68 + local_70);
                    /* try { // try from 002b7959 to 002b7a4a has its CatchHandler @ 002b7c66 */
          ::alloc::vec::Vec<T,A>::append_elements(&local_168,uVar3);
          if ((extraout_RDX_00 != param_6) &&
             ((local_d0 == lVar5 || (local_140 = &local_110, lVar5 != param_6)))) {
            uVar3 = core::slice::iter::Iter<T>::make_slice
                              (*(long *)(param_7 + 0x20),local_d8 + *(long *)(param_7 + 0x20));
            ::alloc::vec::Vec<T,A>::append_elements(local_140,uVar3);
          }
          if (local_150 != 0) {
            if (lVar4 == auVar7._8_8_) {
              local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_e8 = &local_188;
              local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_1b8 = &DAT_001562c0;
              local_1b0 = 2;
              local_198 = 0;
              local_1a8 = &local_f8;
              local_1a0 = 2;
              local_f8 = param_7 + 0x18;
              core::option::Option<T>::map_or_else(&local_60,&local_1b8);
                    /* try { // try from 002b7a4b to 002b7a54 has its CatchHandler @ 002b7c47 */
              core::ptr::drop_in_place<alloc::string::String>(&local_188);
              local_178 = local_50;
              local_188 = local_60;
              plStack_180 = plStack_58;
            }
            else if (lVar4 != 0) {
              local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_1b8 = &DAT_001562c0;
              local_1b0 = 2;
              local_198 = 0;
              local_1a8 = &local_f8;
              local_1a0 = 2;
                    /* try { // try from 002b7ad8 to 002b7ae9 has its CatchHandler @ 002b7c66 */
              local_f8 = param_7 + 0x18;
              local_e8 = &local_168;
              core::option::Option<T>::map_or_else(&local_48,&local_1b8);
                    /* try { // try from 002b7aea to 002b7af3 has its CatchHandler @ 002b7c28 */
              core::ptr::drop_in_place<alloc::string::String>(&local_168);
              local_158 = local_38;
              local_168 = CONCAT44(uStack_44,local_48);
              uStack_160 = (long *)CONCAT44(uStack_3c,uStack_40);
            }
          }
          local_c8[2] = local_100;
          *local_c8 = local_110;
          local_c8[1] = plStack_108;
          local_c8[5] = local_178;
          local_c8[3] = local_188;
          local_c8[4] = plStack_180;
          local_c8[6] = local_128;
          local_c8[7] = plStack_120;
          local_c8[8] = local_118;
          *(undefined4 *)(local_c8 + 9) = (undefined4)local_168;
          *(undefined4 *)((long)local_c8 + 0x4c) = local_168._4_4_;
          *(undefined4 *)(local_c8 + 10) = (undefined4)uStack_160;
          *(undefined4 *)((long)local_c8 + 0x54) = uStack_160._4_4_;
          local_c8[0xb] = local_158;
                    /* try { // try from 002b7b6c to 002b7b78 has its CatchHandler @ 002b7c94 */
          core::ptr::drop_in_place<alloc::string::String>(local_78);
                    /* try { // try from 002b7b80 to 002b7b8c has its CatchHandler @ 002b7caf */
          core::ptr::drop_in_place<alloc::string::String>(local_90);
                    /* try { // try from 002b7b94 to 002b7ba0 has its CatchHandler @ 002b7caa */
          core::ptr::drop_in_place<alloc::string::String>(local_a8);
                    /* try { // try from 002b7ba3 to 002b7baf has its CatchHandler @ 002b7c8c */
          core::ptr::drop_in_place<alloc::string::String>(local_c0);
          return;
        }
                    /* try { // try from 002b7bec to 002b7bf1 has its CatchHandler @ 002b7c7d */
        uVar3 = ::alloc::raw_vec::handle_error(local_1b0,local_1a8);
      }
      else {
                    /* try { // try from 002b7bdf to 002b7be4 has its CatchHandler @ 002b7c82 */
        uVar3 = ::alloc::raw_vec::handle_error(local_1b0,local_1a8);
      }
      goto LAB_002b7c28;
    }
  }
  else {
    ::alloc::raw_vec::handle_error(local_1b0,local_1a8);
  }
                    /* try { // try from 002b7bd2 to 002b7bd7 has its CatchHandler @ 002b7c87 */
  uVar3 = ::alloc::raw_vec::handle_error();
LAB_002b7c28:
                    /* catch() { ... } // from try @ 002b7aea with catch @ 002b7c28 */
  local_158 = local_38;
                    /* try { // try from 002b7c6e to 002b7cff has its CatchHandler @ 002b7d08 */
  core::ptr::drop_in_place<alloc::string::String>(local_78);
  core::ptr::drop_in_place<alloc::string::String>(local_90);
  core::ptr::drop_in_place<alloc::string::String>(local_a8);
  core::ptr::drop_in_place<alloc::string::String>(local_c0);
  core::ptr::drop_in_place<alloc::string::String>(&local_110);
  core::ptr::drop_in_place<alloc::string::String>(&local_128);
  core::ptr::drop_in_place<alloc::string::String>(&local_188);
  core::ptr::drop_in_place<alloc::string::String>(&local_168);
  _Unwind_Resume(uVar3);
  return;
}