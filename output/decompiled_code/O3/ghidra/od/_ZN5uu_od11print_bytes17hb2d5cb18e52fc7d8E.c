void __rustcall uu_od::print_bytes(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long *local_160;
  code *local_158;
  undefined **local_150;
  code *local_148;
  undefined **local_140;
  undefined8 local_138;
  undefined *local_130;
  long local_128;
  long **local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined local_c8;
  ulong local_c0;
  undefined *local_b8;
  code *local_b0;
  long **local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  ulong local_60;
  long local_58;
  long local_50;
  undefined *local_48 [3];
  
  local_58 = *(long *)(param_4 + 8);
  local_50 = *(long *)(param_4 + 0x10) * 0x68 + local_58;
  local_88 = param_1;
  local_80 = param_2;
  plVar5 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                             (&local_58);
  if (plVar5 != (long *)0x0) {
    local_c0 = *(ulong *)(param_3 + 8);
    local_60 = *(ulong *)(param_4 + 0x20);
    uVar1 = *(ulong *)(param_4 + 0x28);
    bVar3 = true;
    do {
      local_78 = 0;
      local_70 = 1;
      local_68 = 0;
      if (local_c0 != 0) {
        if (uVar1 == 0) {
          uVar6 = core::panicking::panic_const::panic_const_rem_by_zero
                            (&PTR_s_src_uu_od_src_od_rs__warning__002410f0);
                    /* catch() { ... } // from try @ 001c7bf4 with catch @ 001c7df0 */
                    /* try { // try from 001c7df3 to 001c7e42 has its CatchHandler @ 001c7e4b */
          core::ptr::drop_in_place<alloc::string::String>(local_48);
          core::ptr::drop_in_place<alloc::string::String>(&local_78);
          _Unwind_Resume(uVar6);
          return;
        }
        uVar8 = 0;
        do {
          if ((uVar8 | uVar1) >> 0x20 == 0) {
            uVar7 = (uVar8 & 0xffffffff) % (uVar1 & 0xffffffff);
          }
          else {
            uVar7 = uVar8 % uVar1;
          }
          if (7 < uVar7) {
                    /* try { // try from 001c7dc9 to 001c7def has its CatchHandler @ 001c7e31 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar7,8,&PTR_s_src_uu_od_src_od_rs__warning__00241108);
          }
          local_a8 = (long **)plVar5[uVar7 + 4];
          local_b8 = &DAT_00117e40;
          local_b0 = _<&T_as_core::fmt::Display>::fmt;
          local_a0 = 0;
          local_130 = (undefined *)0x2;
          local_120 = (long **)&DAT_00000001;
          local_118 = 1;
          local_110 = 0;
          local_108 = 0x20;
          local_100 = 1;
          local_160 = (long *)&DAT_00117e40;
          local_158 = (code *)0x1;
          local_138 = 1;
          local_150 = &local_b8;
          local_148 = (code *)0x2;
                    /* try { // try from 001c79ac to 001c79f5 has its CatchHandler @ 001c7e33 */
          local_140 = &local_130;
          uVar4 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                            (&local_78,&local_160);
          core::result::Result<T,E>::unwrap(uVar4,&PTR_s_src_uu_od_src_od_rs__warning__00241120);
          pcVar2 = (code *)plVar5[1];
          if (*plVar5 == 2) {
            uVar6 = inputdecoder::MemoryDecoder::get_full_buffer(param_3,uVar8);
            (*pcVar2)(&local_130,uVar6);
            uVar6 = core::slice::iter::Iter<T>::make_slice
                              (local_128,(undefined *)((long)local_120 + local_128));
                    /* try { // try from 001c7a48 to 001c7a52 has its CatchHandler @ 001c7e22 */
            ::alloc::vec::Vec<T,A>::append_elements(&local_78,uVar6);
                    /* try { // try from 001c7a53 to 001c7a79 has its CatchHandler @ 001c7e33 */
            core::ptr::drop_in_place<alloc::string::String>(&local_130);
          }
          else if ((int)*plVar5 == 1) {
            inputdecoder::MemoryDecoder::read_float(param_3,uVar8,plVar5[2]);
            (*pcVar2)(&local_130);
            uVar6 = core::slice::iter::Iter<T>::make_slice
                              (local_128,(undefined *)((long)local_120 + local_128));
                    /* try { // try from 001c7a08 to 001c7a12 has its CatchHandler @ 001c7e04 */
            ::alloc::vec::Vec<T,A>::append_elements(&local_78,uVar6);
                    /* try { // try from 001c7a13 to 001c7a35 has its CatchHandler @ 001c7e33 */
            core::ptr::drop_in_place<alloc::string::String>(&local_130);
          }
          else {
            uVar6 = inputdecoder::MemoryDecoder::read_uint(param_3,uVar8,plVar5[2]);
            (*pcVar2)(&local_130,uVar6);
            uVar6 = core::slice::iter::Iter<T>::make_slice
                              (local_128,(undefined *)((long)local_120 + local_128));
                    /* try { // try from 001c7a8c to 001c7a96 has its CatchHandler @ 001c7e13 */
            ::alloc::vec::Vec<T,A>::append_elements(&local_78,uVar6);
                    /* try { // try from 001c7a97 to 001c7a9e has its CatchHandler @ 001c7e33 */
            core::ptr::drop_in_place<alloc::string::String>(&local_130);
          }
          uVar8 = uVar8 + plVar5[2];
        } while (uVar8 < local_c0);
      }
      if (*(char *)(plVar5 + 0xc) != '\0') {
                    /* try { // try from 001c7acd to 001c7b02 has its CatchHandler @ 001c7e02 */
        uVar8 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::count
                          (local_70,local_68 + local_70);
        ppuVar9 = (undefined **)(local_60 - uVar8);
        if (local_60 < uVar8) {
          ppuVar9 = (undefined **)0x0;
        }
        uVar6 = inputdecoder::MemoryDecoder::get_buffer(param_3,0);
        prn_char::format_ascii_dump(local_48,uVar6);
        local_160 = (long *)&DAT_00117e40;
        local_158 = _<&T_as_core::fmt::Display>::fmt;
        local_150 = local_48;
        local_148 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_138 = 0;
        local_130 = (undefined *)0x2;
        local_120 = (long **)&DAT_00000001;
        local_118 = 2;
        local_110 = 0;
        local_108 = 0x20;
        local_100 = 1;
        local_f8 = 2;
        local_e8 = 2;
        local_d8 = 1;
        local_d0 = 0x20;
        local_c8 = 3;
        local_b8 = &DAT_00241098;
        local_b0 = (code *)0x2;
        local_90 = 2;
        local_a8 = &local_160;
        local_a0 = 3;
                    /* try { // try from 001c7bf4 to 001c7c12 has its CatchHandler @ 001c7df0 */
        local_140 = ppuVar9;
        local_98 = &local_130;
        uVar4 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                          (&local_78,&local_b8);
        core::result::Result<T,E>::unwrap(uVar4,&PTR_s_src_uu_od_src_od_rs__warning__002410b8);
                    /* try { // try from 001c7c13 to 001c7d95 has its CatchHandler @ 001c7e02 */
        core::ptr::drop_in_place<alloc::string::String>(local_48);
      }
      if (bVar3) {
        local_160 = &local_88;
        local_158 = _<&T_as_core::fmt::Display>::fmt;
        local_130 = &DAT_00117e40;
        local_128 = 1;
        local_110 = 0;
        local_120 = &local_160;
        local_118 = 1;
        std::io::stdio::_print(&local_130);
        bVar3 = false;
      }
      else {
        local_a8 = (long **)_<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::
                            count(local_88,local_80 + local_88);
        local_b8 = &DAT_00117e40;
        local_b0 = _<&T_as_core::fmt::Display>::fmt;
        local_a0 = 0;
        local_130 = (undefined *)0x2;
        local_120 = (long **)0x1;
        local_118 = 1;
        local_110 = 0;
        local_108 = 0x20;
        local_100 = 1;
        local_160 = (long *)&DAT_00117e40;
        local_158 = (code *)0x1;
        local_138 = 1;
        local_150 = &local_b8;
        local_148 = (code *)0x2;
        local_140 = &local_130;
        std::io::stdio::_print(&local_160);
      }
      local_158 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_130 = &DAT_002410d0;
      local_128 = 2;
      local_110 = 0;
      local_120 = &local_160;
      local_118 = 1;
      local_160 = &local_78;
      std::io::stdio::_print(&local_130);
      core::ptr::drop_in_place<alloc::string::String>(&local_78);
      plVar5 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                 (&local_58);
    } while (plVar5 != (long *)0x0);
  }
  return;
}