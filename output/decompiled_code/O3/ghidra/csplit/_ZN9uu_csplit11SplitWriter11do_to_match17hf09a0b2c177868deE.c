void __rustcall
uu_csplit::SplitWriter::do_to_match
          (undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,int param_7,long param_8)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  char cVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  uint uVar12;
  undefined **local_160;
  undefined **ppuStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  ulong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined **ppuStack_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_38;
  
  local_d0 = param_3;
  local_c8 = param_4;
  local_c0 = param_5;
  local_b8 = param_6;
  if (param_7 < 0) {
    local_140 = (ulong)-param_7;
    *(ulong *)(param_8 + 0x50) = local_140;
    _<uu_csplit::InputSplitter<I>as_core::iter::traits::iterator::Iterator>::next
              (&local_108,param_8);
    puVar3 = PTR_writeln_004206c0;
    if (uStack_100 != (undefined **)0x8000000000000001) {
      do {
        ppuVar4 = local_108;
        ppuVar10 = uStack_f8;
        if (uStack_100 == (undefined **)0x8000000000000000) goto LAB_0025fd09;
        local_b0 = uStack_100;
        ppuStack_a8 = uStack_f8;
        local_a0 = local_f0;
                    /* try { // try from 0025fc75 to 0025fc89 has its CatchHandler @ 00260281 */
        cVar6 = regex::regex::string::Regex::is_match_at(local_c0,local_b8);
        if (cVar6 != '\0') {
                    /* try { // try from 0025fddb to 0025fded has its CatchHandler @ 00260229 */
          InputSplitter<I>::shrink_buffer_to_size(&local_58,param_8);
          local_118 = local_38;
          local_128 = (undefined **)CONCAT44(uStack_44,local_48);
          local_138 = (undefined **)CONCAT44(uStack_54,local_58);
          uStack_130 = (undefined **)CONCAT44(uStack_4c,uStack_50);
          plVar7 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::
                           next(&local_138);
          if (plVar7 == (long *)0x0) goto LAB_0025fee3;
          goto LAB_0025fe40;
        }
        local_128 = local_a0;
        local_138 = local_b0;
        uStack_130 = ppuStack_a8;
        InputSplitter<I>::add_line_to_buffer(&local_160,param_8,ppuVar4,&local_138);
        if (local_160 != (undefined **)0x8000000000000000) {
          local_138 = local_160;
          uStack_130 = ppuStack_158;
          local_128 = (undefined **)CONCAT44(uStack_14c,uStack_150);
                    /* try { // try from 0025fced to 0025fcf2 has its CatchHandler @ 00260263 */
          lVar8 = (*(code *)puVar3)(param_2,ppuStack_158);
          if (lVar8 != 0) {
            *param_1 = 0;
            param_1[1] = lVar8;
            pppuVar11 = (undefined ***)&local_138;
            goto LAB_0026016e;
          }
          core::ptr::drop_in_place<alloc::string::String>(&local_138);
        }
        _<uu_csplit::InputSplitter<I>as_core::iter::traits::iterator::Iterator>::next
                  (&local_108,param_8);
      } while (uStack_100 != (undefined **)0x8000000000000001);
    }
    core::ptr::
    drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>>
              (&local_108);
    ::alloc::vec::Vec<T,A>::drain(&local_138,param_8);
    plVar7 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                               (&local_138);
    puVar3 = PTR_writeln_004206c0;
    if (plVar7 != (long *)0x0) {
      do {
        if ((undefined **)plVar7[1] == (undefined **)0x8000000000000001) break;
        local_160 = (undefined **)*plVar7;
        uStack_150 = *(undefined4 *)(plVar7 + 2);
        uStack_14c = *(undefined4 *)((long)plVar7 + 0x14);
        uStack_148 = *(undefined4 *)(plVar7 + 3);
        uStack_144 = *(undefined4 *)((long)plVar7 + 0x1c);
        ppuStack_158 = (undefined **)plVar7[1];
                    /* try { // try from 0025fab2 to 0025fabc has its CatchHandler @ 00260293 */
        core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::call_once
                  (&local_108,&local_160);
        local_e8 = uStack_100;
        uStack_e0 = uStack_f8;
        if (local_108 == (undefined **)0x8000000000000000) break;
        local_160 = local_108;
        ppuStack_158 = uStack_100;
        uStack_14c = uStack_f8._4_4_;
        uStack_150 = (int)uStack_f8;
                    /* try { // try from 0025fafd to 0025fb02 has its CatchHandler @ 00260272 */
        lVar8 = (*(code *)puVar3)(param_2,uStack_100,uStack_f8);
        if (lVar8 != 0) {
          *param_1 = 0;
          param_1[1] = lVar8;
                    /* try { // try from 0025ffd6 to 0025ffdf has its CatchHandler @ 00260207 */
          core::ptr::drop_in_place<alloc::string::String>(&local_160);
          goto LAB_0025ffe0;
        }
                    /* try { // try from 0025fb0c to 0025fb13 has its CatchHandler @ 00260293 */
        core::ptr::drop_in_place<alloc::string::String>(&local_160);
        plVar7 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::
                         next(&local_138);
      } while (plVar7 != (long *)0x0);
    }
    core::ptr::
    drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::__closure__>>
              (&local_138);
  }
  else {
    local_140 = param_2;
    ::alloc::vec::Vec<T,A>::drain(&local_80,param_8);
    local_118 = local_60;
    local_128 = (undefined **)CONCAT44(uStack_6c,local_70);
    uStack_120 = (undefined **)CONCAT44(uStack_64,uStack_68);
    local_138 = (undefined **)CONCAT44(uStack_7c,local_80);
    uStack_130 = (undefined **)CONCAT44(uStack_74,uStack_78);
    plVar7 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                               (&local_138);
    puVar3 = PTR_writeln_004206c0;
    if (plVar7 != (long *)0x0) {
      do {
        if ((undefined **)plVar7[1] == (undefined **)0x8000000000000001) break;
        local_160 = (undefined **)*plVar7;
        uStack_150 = *(undefined4 *)(plVar7 + 2);
        uStack_14c = *(undefined4 *)((long)plVar7 + 0x14);
        uStack_148 = *(undefined4 *)(plVar7 + 3);
        uStack_144 = *(undefined4 *)((long)plVar7 + 0x1c);
        ppuStack_158 = (undefined **)plVar7[1];
                    /* try { // try from 0025f952 to 0025f95c has its CatchHandler @ 002602c3 */
        core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::call_once
                  (&local_108,&local_160);
        local_e8 = uStack_100;
        uStack_e0 = uStack_f8;
        if (local_108 == (undefined **)0x8000000000000000) break;
        local_160 = local_108;
        ppuStack_158 = uStack_100;
        uStack_14c = uStack_f8._4_4_;
        uStack_150 = (int)uStack_f8;
                    /* try { // try from 0025f99d to 0025f9a3 has its CatchHandler @ 002602a2 */
        lVar8 = (*(code *)puVar3)(local_140,uStack_100,uStack_f8);
        if (lVar8 != 0) {
          *param_1 = 0;
          param_1[1] = lVar8;
                    /* try { // try from 0025fd2c to 0025fd35 has its CatchHandler @ 00260219 */
          core::ptr::drop_in_place<alloc::string::String>(&local_160);
LAB_0025ffe0:
          core::ptr::
          drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::__closure__>>
                    (&local_138);
          return;
        }
                    /* try { // try from 0025f9ad to 0025f9b4 has its CatchHandler @ 002602c3 */
        core::ptr::drop_in_place<alloc::string::String>(&local_160);
        plVar7 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::
                         next(&local_138);
      } while (plVar7 != (long *)0x0);
    }
    core::ptr::
    drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::__closure__>>
              (&local_138);
    *(undefined8 *)(param_8 + 0x50) = 1;
    _<uu_csplit::InputSplitter<I>as_core::iter::traits::iterator::Iterator>::next(&local_160);
    param_2 = local_140;
    puVar3 = PTR_writeln_004206c0;
    if (ppuStack_158 != (undefined **)0x8000000000000001) {
      do {
        ppuVar4 = local_160;
        uStack_e0 = (undefined **)CONCAT44(uStack_14c,uStack_150);
        ppuVar10 = uStack_e0;
        if (ppuStack_158 == (undefined **)0x8000000000000000) {
LAB_0025fd09:
          *param_1 = 0;
          param_1[1] = ppuVar10;
          return;
        }
        local_d8 = (undefined **)CONCAT44(uStack_144,uStack_148);
        local_e8 = ppuStack_158;
                    /* try { // try from 0025fba0 to 0025fbd2 has its CatchHandler @ 002602b1 */
        cVar6 = regex::regex::string::Regex::is_match_at(local_c0,local_b8);
        if (cVar6 != '\0') {
          if (*(char *)(*(long *)(param_2 + 0x20) + 99) == '\0') {
            if (param_7 == 0) {
              local_128 = local_d8;
              local_138 = local_e8;
              uStack_130 = uStack_e0;
              InputSplitter<I>::add_line_to_buffer(&local_108,param_8,ppuVar4,&local_138);
              if (local_108 != (undefined **)0x8000000000000000) goto LAB_002601bd;
              core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_108);
              bVar2 = true;
              goto LAB_002600a2;
            }
                    /* try { // try from 00260025 to 002600ac has its CatchHandler @ 0026021e */
            lVar8 = (*(code *)PTR_writeln_004206c0)(local_140,uStack_e0,local_d8);
            if (lVar8 != 0) goto LAB_00260039;
          }
          if (1 < param_7) {
            uVar12 = param_7 + 1;
            goto LAB_0025fd70;
          }
          bVar2 = false;
          goto LAB_002600a2;
        }
        lVar8 = (*(code *)puVar3)(param_2,uStack_e0,local_d8);
        if (lVar8 != 0) {
LAB_00260039:
          *param_1 = 0;
          param_1[1] = lVar8;
          goto LAB_00260166;
        }
        core::ptr::drop_in_place<alloc::string::String>(&local_e8);
        _<uu_csplit::InputSplitter<I>as_core::iter::traits::iterator::Iterator>::next
                  (&local_160,param_8);
      } while (ppuStack_158 != (undefined **)0x8000000000000001);
    }
    core::ptr::
    drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>>
              (&local_160);
  }
  (*(code *)PTR_finish_split_004206c8)(param_2);
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,local_d0,local_c8);
  *param_1 = 3;
  return;
  while( true ) {
    local_160 = (undefined **)*plVar7;
    uStack_150 = *(undefined4 *)(plVar7 + 2);
    uStack_14c = *(undefined4 *)((long)plVar7 + 0x14);
    uStack_148 = *(undefined4 *)(plVar7 + 3);
    uStack_144 = *(undefined4 *)((long)plVar7 + 0x1c);
                    /* try { // try from 0025fe63 to 0025fe72 has its CatchHandler @ 00260254 */
    ppuStack_158 = (undefined **)plVar7[1];
    core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::call_once
              (&local_e8,&local_160);
    local_98 = (undefined4)uStack_e0;
    uStack_94 = uStack_e0._4_4_;
    uStack_90 = (undefined4)local_d8;
    uStack_8c = local_d8._4_4_;
    if (local_e8 == (undefined **)0x8000000000000000) break;
    local_160 = local_e8;
    ppuStack_158 = uStack_e0;
    uStack_150 = (undefined4)local_d8;
    uStack_14c = local_d8._4_4_;
                    /* try { // try from 0025feb9 to 0025febe has its CatchHandler @ 0026023a */
    lVar8 = (*(code *)puVar3)(param_2,uStack_e0,local_d8);
    if (lVar8 != 0) {
      *param_1 = 0;
      param_1[1] = lVar8;
                    /* try { // try from 002600d4 to 002600dd has its CatchHandler @ 00260205 */
      core::ptr::drop_in_place<alloc::string::String>(&local_160);
                    /* try { // try from 002600de to 002600e7 has its CatchHandler @ 00260229 */
      core::ptr::
      drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::__closure__>>
                (&local_138);
      goto LAB_002600e8;
    }
                    /* try { // try from 0025fec8 to 0025fecf has its CatchHandler @ 00260254 */
    core::ptr::drop_in_place<alloc::string::String>(&local_160);
    plVar7 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                               (&local_138);
    if (plVar7 == (long *)0x0) break;
LAB_0025fe40:
    if ((undefined **)plVar7[1] == (undefined **)0x8000000000000001) break;
  }
LAB_0025fee3:
                    /* try { // try from 0025fee3 to 0025feec has its CatchHandler @ 00260229 */
  core::ptr::
  drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::__closure__>>
            (&local_138);
  uVar5 = local_140;
  cVar6 = *(char *)(*(long *)(param_2 + 0x20) + 99);
  if (cVar6 == '\0') {
    *(ulong *)(param_8 + 0x50) = local_140 + 1;
    local_128 = local_a0;
    local_138 = local_b0;
    uStack_130 = ppuStack_a8;
    InputSplitter<I>::add_line_to_buffer(&local_160,param_8,ppuVar4,&local_138);
    ppuVar4 = local_160;
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_160);
    if (ppuVar4 != (undefined **)0x8000000000000000) {
      local_138 = &PTR_s_should_be_big_enough_to_hold_eve_003df7d0;
      uStack_130 = (undefined **)0x1;
      local_128 = (undefined **)0x8;
      uStack_120 = (undefined **)0x0;
      local_118 = 0;
      (*(code *)PTR_panic_fmt_00420620)(&local_138,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003df7e0)
      ;
LAB_002601bd:
                    /* try { // try from 002601bf to 00260202 has its CatchHandler @ 0026021e */
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_108);
      local_138 = &PTR_s_the_buffer_is_big_enough_to_cont_003df790;
      uStack_130 = (undefined **)0x1;
      local_128 = (undefined **)0x8;
      uStack_120 = (undefined **)0x0;
      local_118 = 0;
      (*(code *)PTR_panic_fmt_00420620)(&local_138,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003df7f8)
      ;
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
                    /* try { // try from 0025ff61 to 0025ff96 has its CatchHandler @ 0026020c */
  (*(code *)PTR_finish_split_004206c8)(param_2);
  uVar9 = 0xc;
  if (*(ulong *)(param_8 + 0x10) < uVar5) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_138,local_d0,local_c8);
    param_1[3] = local_128;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_138;
    *(undefined4 *)((long)param_1 + 0xc) = local_138._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_130;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_130._4_4_;
    uVar9 = 1;
  }
  *param_1 = uVar9;
  if (cVar6 == '\0') {
    return;
  }
LAB_002600e8:
  pppuVar11 = &local_b0;
  goto LAB_0026016e;
  while( true ) {
    local_108 = uStack_130;
    uStack_100 = local_128;
    uStack_f8 = uStack_120;
                    /* try { // try from 0025fdb0 to 0025fdb6 has its CatchHandler @ 0026022b */
    lVar8 = (*(code *)puVar3)(local_140);
    if (lVar8 != 0) {
      *param_1 = 0;
      param_1[1] = lVar8;
      core::ptr::drop_in_place<alloc::string::String>(&local_108);
      goto LAB_00260166;
    }
                    /* try { // try from 0025fdc0 to 0025fdc7 has its CatchHandler @ 00260249 */
    core::ptr::drop_in_place<alloc::string::String>(&local_108);
    uVar12 = uVar12 - 1;
    if (uVar12 < 3) break;
LAB_0025fd70:
                    /* try { // try from 0025fd70 to 0025fd7f has its CatchHandler @ 00260249 */
    _<uu_csplit::InputSplitter<I>as_core::iter::traits::iterator::Iterator>::next
              (&local_138,param_8);
    if (uStack_130 == (undefined **)0x8000000000000001) {
                    /* try { // try from 002600f5 to 00260165 has its CatchHandler @ 0026021e */
      (*(code *)PTR_finish_split_004206c8)(local_140);
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_108,local_d0,local_c8);
      param_1[3] = uStack_f8;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_108;
      *(undefined4 *)((long)param_1 + 0xc) = local_108._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_100;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_100._4_4_;
      *param_1 = 1;
      goto LAB_00260166;
    }
    if (uStack_130 == (undefined **)0x8000000000000000) {
      *param_1 = 0;
      param_1[1] = local_128;
      goto LAB_00260166;
    }
  }
  bVar2 = false;
LAB_002600a2:
  (*(code *)PTR_finish_split_004206c8)(local_140);
  *param_1 = 0xc;
  if (bVar2) {
    return;
  }
LAB_00260166:
  pppuVar11 = &local_e8;
LAB_0026016e:
  core::ptr::drop_in_place<alloc::string::String>(pppuVar11);
  return;
}