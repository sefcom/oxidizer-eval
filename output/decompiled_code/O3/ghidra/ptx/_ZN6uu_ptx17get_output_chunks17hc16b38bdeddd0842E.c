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
                    /* try { // try from 002b70aa to 002b70b8 has its CatchHandler @ 002b7777 */
    ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1b8,uVar6,0);
    if (local_1b8 == (undefined *)0x0) {
      local_188 = local_1b0;
      plStack_180 = local_1a8;
      local_178 = 0;
                    /* try { // try from 002b70e2 to 002b70f0 has its CatchHandler @ 002b7772 */
      ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1b8,uVar6,0);
      if (local_1b8 == (undefined *)0x0) {
        local_128 = local_1b0;
        plStack_120 = local_1a8;
        local_118 = 0;
                    /* try { // try from 002b7123 to 002b7131 has its CatchHandler @ 002b776d */
        ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1b8,uVar6,0);
        uVar3 = local_130;
        if (local_1b8 == (undefined *)0x0) {
          local_110 = local_1b0;
          plStack_108 = local_1a8;
          local_100 = 0;
                    /* try { // try from 002b7166 to 002b71e2 has its CatchHandler @ 002b777c */
          trim_idx(local_130,param_3,0,param_3);
          uVar2 = core::cmp::max_by(extraout_RDX - uVar1);
          uVar2 = trim_broken_word_left(uVar3,param_3,uVar2,extraout_RDX);
          auVar7 = trim_idx(uVar3,param_3,uVar2,extraout_RDX);
          local_150 = auVar7._0_8_;
          auVar7 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                             (local_150,auVar7._8_8_,uVar3,param_3,&DAT_003ee7a8);
          _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                    (local_c0,auVar7._0_8_,auVar7._0_8_ + auVar7._8_8_ * 4);
          uVar3 = core::slice::iter::Iter<T>::make_slice(local_b8,local_b0 + local_b8);
                    /* try { // try from 002b7200 to 002b727a has its CatchHandler @ 002b779a */
          ::alloc::vec::Vec<T,A>::append_elements(&local_188,uVar3);
          if (uVar1 < local_178) {
                    /* try { // try from 002b76e4 to 002b76fc has its CatchHandler @ 002b779a */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic(&DAT_0015ed88,0x31,&DAT_003ee7c0);
          }
          uVar3 = core::cmp::min_by(local_148,param_6);
          uVar3 = trim_broken_word_right(param_5,param_6,0,uVar3);
          trim_idx(param_5,param_6,0,uVar3);
          auVar7 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                             (0,extraout_RDX_00,param_5,param_6,&DAT_003ee7d8);
          _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                    (local_a8,auVar7._0_8_,auVar7._0_8_ + auVar7._8_8_ * 4);
          uVar3 = core::slice::iter::Iter<T>::make_slice(local_a0,local_98 + local_a0);
                    /* try { // try from 002b7298 to 002b7355 has its CatchHandler @ 002b779f */
          local_140 = &local_128;
          ::alloc::vec::Vec<T,A>::append_elements(local_140,uVar3);
          uVar6 = local_178;
          if (local_148 < local_118) {
                    /* try { // try from 002b76ff to 002b7717 has its CatchHandler @ 002b779f */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic(&DAT_0015edb9,0x2f,&DAT_003ee7f0);
          }
          lVar4 = trim_idx(param_5,param_6,extraout_RDX_00,param_6);
          lVar5 = core::cmp::max_by(uVar1 - (uVar6 + local_138));
          uVar3 = core::cmp::min_by(param_6,lVar4 + lVar5);
          uVar3 = trim_broken_word_right(param_5,param_6,lVar4,uVar3);
          auVar7 = trim_idx(param_5,param_6,lVar4,uVar3);
          lVar5 = auVar7._8_8_;
          auVar8 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                             (auVar7._0_8_,lVar5,param_5,param_6,&DAT_003ee808);
          _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                    (local_90,auVar8._0_8_,auVar8._0_8_ + auVar8._8_8_ * 4);
          local_d0 = auVar7._0_8_;
          uVar3 = core::slice::iter::Iter<T>::make_slice(local_88,local_80 + local_88);
                    /* try { // try from 002b7382 to 002b7430 has its CatchHandler @ 002b7784 */
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
                             (lVar4,auVar7._8_8_,uVar3,param_3,&DAT_003ee820);
          _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                    (local_78,auVar8._0_8_,auVar8._0_8_ + auVar8._8_8_ * 4);
          uVar3 = core::slice::iter::Iter<T>::make_slice(local_70,local_68 + local_70);
                    /* try { // try from 002b7449 to 002b753a has its CatchHandler @ 002b7756 */
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
              local_1b8 = &DAT_001563d0;
              local_1b0 = 2;
              local_198 = 0;
              local_1a8 = &local_f8;
              local_1a0 = 2;
              local_f8 = param_7 + 0x18;
              core::option::Option<T>::map_or_else(&local_60,&local_1b8);
                    /* try { // try from 002b753b to 002b7544 has its CatchHandler @ 002b7737 */
              core::ptr::drop_in_place<alloc::string::String>(&local_188);
              local_178 = local_50;
              local_188 = local_60;
              plStack_180 = plStack_58;
            }
            else if (lVar4 != 0) {
              local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              local_1b8 = &DAT_001563d0;
              local_1b0 = 2;
              local_198 = 0;
              local_1a8 = &local_f8;
              local_1a0 = 2;
                    /* try { // try from 002b75c8 to 002b75d9 has its CatchHandler @ 002b7756 */
              local_f8 = param_7 + 0x18;
              local_e8 = &local_168;
              core::option::Option<T>::map_or_else(&local_48,&local_1b8);
                    /* try { // try from 002b75da to 002b75e3 has its CatchHandler @ 002b7718 */
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
                    /* try { // try from 002b765c to 002b7668 has its CatchHandler @ 002b7784 */
          core::ptr::drop_in_place<alloc::string::String>(local_78);
                    /* try { // try from 002b7670 to 002b767c has its CatchHandler @ 002b779f */
          core::ptr::drop_in_place<alloc::string::String>(local_90);
                    /* try { // try from 002b7684 to 002b7690 has its CatchHandler @ 002b779a */
          core::ptr::drop_in_place<alloc::string::String>(local_a8);
                    /* try { // try from 002b7693 to 002b769f has its CatchHandler @ 002b777c */
          core::ptr::drop_in_place<alloc::string::String>(local_c0);
          return;
        }
                    /* try { // try from 002b76dc to 002b76e1 has its CatchHandler @ 002b776d */
        uVar3 = ::alloc::raw_vec::handle_error(local_1b0,local_1a8);
      }
      else {
                    /* try { // try from 002b76cf to 002b76d4 has its CatchHandler @ 002b7772 */
        uVar3 = ::alloc::raw_vec::handle_error(local_1b0,local_1a8);
      }
      goto LAB_002b7718;
    }
  }
  else {
    ::alloc::raw_vec::handle_error(local_1b0,local_1a8);
  }
                    /* try { // try from 002b76c2 to 002b76c7 has its CatchHandler @ 002b7777 */
  uVar3 = ::alloc::raw_vec::handle_error();
LAB_002b7718:
                    /* catch() { ... } // from try @ 002b75da with catch @ 002b7718 */
  local_158 = local_38;
                    /* try { // try from 002b775e to 002b77ef has its CatchHandler @ 002b77f8 */
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