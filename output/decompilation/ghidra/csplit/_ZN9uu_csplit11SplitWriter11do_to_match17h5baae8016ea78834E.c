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
    *(ulong *)(param_8 + 0x30) = local_140;
    _<uu_csplit::InputSplitter<I>as_core::iter::traits::iterator::Iterator>::next
              (&local_108,param_8);
    puVar3 = PTR_writeln_0041f8b0;
    if (uStack_100 != (undefined **)0x8000000000000001) {
      do {
        ppuVar4 = local_108;
        ppuVar10 = uStack_f8;
        if (uStack_100 == (undefined **)0x8000000000000000) goto LAB_0025ffa9;
        local_b0 = uStack_100;
        ppuStack_a8 = uStack_f8;
        local_a0 = local_f0;
                    /* try { // try from 0025ff15 to 0025ff29 has its CatchHandler @ 00260521 */
        cVar6 = regex::regex::string::Regex::is_match_at(local_c0,local_b8);
        if (cVar6 != '\0') {
                    /* try { // try from 0026007b to 0026008d has its CatchHandler @ 002604c9 */
          InputSplitter<I>::shrink_buffer_to_size(&local_58,param_8);
          local_118 = local_38;
          local_128 = (undefined **)CONCAT44(uStack_44,local_48);
          local_138 = (undefined **)CONCAT44(uStack_54,local_58);
          uStack_130 = (undefined **)CONCAT44(uStack_4c,uStack_50);
          plVar7 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::
                           next(&local_138);
          if (plVar7 == (long *)0x0) goto LAB_00260183;
          goto LAB_002600e0;
        }
        local_128 = local_a0;
        local_138 = local_b0;
        uStack_130 = ppuStack_a8;
        InputSplitter<I>::add_line_to_buffer(&local_160,param_8,ppuVar4,&local_138);
        if (local_160 != (undefined **)0x8000000000000000) {
          local_138 = local_160;
          uStack_130 = ppuStack_158;
          local_128 = (undefined **)CONCAT44(uStack_14c,uStack_150);
                    /* try { // try from 0025ff8d to 0025ff92 has its CatchHandler @ 00260503 */
          lVar8 = (*(code *)puVar3)(param_2,ppuStack_158);
          if (lVar8 != 0) {
            *param_1 = 0;
            param_1[1] = lVar8;
            pppuVar11 = (undefined ***)&local_138;
            goto LAB_0026040e;
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
    puVar3 = PTR_writeln_0041f8b0;
    if (plVar7 != (long *)0x0) {
      do {
        if ((undefined **)plVar7[1] == (undefined **)0x8000000000000001) break;
        local_160 = (undefined **)*plVar7;
        uStack_150 = *(undefined4 *)(plVar7 + 2);
        uStack_14c = *(undefined4 *)((long)plVar7 + 0x14);
        uStack_148 = *(undefined4 *)(plVar7 + 3);
        uStack_144 = *(undefined4 *)((long)plVar7 + 0x1c);
        ppuStack_158 = (undefined **)plVar7[1];
                    /* try { // try from 0025fd52 to 0025fd5c has its CatchHandler @ 00260533 */
        core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::call_once
                  (&local_108,&local_160);
        local_e8 = uStack_100;
        uStack_e0 = uStack_f8;
        if (local_108 == (undefined **)0x8000000000000000) break;
        local_160 = local_108;
        ppuStack_158 = uStack_100;
        uStack_14c = uStack_f8._4_4_;
        uStack_150 = (int)uStack_f8;
                    /* try { // try from 0025fd9d to 0025fda2 has its CatchHandler @ 00260512 */
        lVar8 = (*(code *)puVar3)(param_2,uStack_100,uStack_f8);
        if (lVar8 != 0) {
          *param_1 = 0;
          param_1[1] = lVar8;
                    /* try { // try from 00260276 to 0026027f has its CatchHandler @ 002604a7 */
          core::ptr::drop_in_place<alloc::string::String>(&local_160);
          goto LAB_00260280;
        }
                    /* try { // try from 0025fdac to 0025fdb3 has its CatchHandler @ 00260533 */
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
    puVar3 = PTR_writeln_0041f8b0;
    if (plVar7 != (long *)0x0) {
      do {
        if ((undefined **)plVar7[1] == (undefined **)0x8000000000000001) break;
        local_160 = (undefined **)*plVar7;
        uStack_150 = *(undefined4 *)(plVar7 + 2);
        uStack_14c = *(undefined4 *)((long)plVar7 + 0x14);
        uStack_148 = *(undefined4 *)(plVar7 + 3);
        uStack_144 = *(undefined4 *)((long)plVar7 + 0x1c);
        ppuStack_158 = (undefined **)plVar7[1];
                    /* try { // try from 0025fbf2 to 0025fbfc has its CatchHandler @ 00260563 */
        core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::call_once
                  (&local_108,&local_160);
        local_e8 = uStack_100;
        uStack_e0 = uStack_f8;
        if (local_108 == (undefined **)0x8000000000000000) break;
        local_160 = local_108;
        ppuStack_158 = uStack_100;
        uStack_14c = uStack_f8._4_4_;
        uStack_150 = (int)uStack_f8;
                    /* try { // try from 0025fc3d to 0025fc43 has its CatchHandler @ 00260542 */
        lVar8 = (*(code *)puVar3)(local_140,uStack_100,uStack_f8);
        if (lVar8 != 0) {
          *param_1 = 0;
          param_1[1] = lVar8;
                    /* try { // try from 0025ffcc to 0025ffd5 has its CatchHandler @ 002604b9 */
          core::ptr::drop_in_place<alloc::string::String>(&local_160);
LAB_00260280:
          core::ptr::
          drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::__closure__>>
                    (&local_138);
          return;
        }
                    /* try { // try from 0025fc4d to 0025fc54 has its CatchHandler @ 00260563 */
        core::ptr::drop_in_place<alloc::string::String>(&local_160);
        plVar7 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::
                         next(&local_138);
      } while (plVar7 != (long *)0x0);
    }
    core::ptr::
    drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::__closure__>>
              (&local_138);
    *(undefined8 *)(param_8 + 0x30) = 1;
    _<uu_csplit::InputSplitter<I>as_core::iter::traits::iterator::Iterator>::next(&local_160);
    param_2 = local_140;
    puVar3 = PTR_writeln_0041f8b0;
    if (ppuStack_158 != (undefined **)0x8000000000000001) {
      do {
        ppuVar4 = local_160;
        uStack_e0 = (undefined **)CONCAT44(uStack_14c,uStack_150);
        ppuVar10 = uStack_e0;
        if (ppuStack_158 == (undefined **)0x8000000000000000) {
LAB_0025ffa9:
          *param_1 = 0;
          param_1[1] = ppuVar10;
          return;
        }
        local_d8 = (undefined **)CONCAT44(uStack_144,uStack_148);
        local_e8 = ppuStack_158;
                    /* try { // try from 0025fe40 to 0025fe72 has its CatchHandler @ 00260551 */
        cVar6 = regex::regex::string::Regex::is_match_at(local_c0,local_b8);
        if (cVar6 != '\0') {
          if (*(char *)(*(long *)(param_2 + 0x20) + 99) == '\0') {
            if (param_7 == 0) {
              local_128 = local_d8;
              local_138 = local_e8;
              uStack_130 = uStack_e0;
              InputSplitter<I>::add_line_to_buffer(&local_108,param_8,ppuVar4,&local_138);
              if (local_108 != (undefined **)0x8000000000000000) goto LAB_0026045d;
              core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_108);
              bVar2 = true;
              goto LAB_00260342;
            }
                    /* try { // try from 002602c5 to 0026034c has its CatchHandler @ 002604be */
            lVar8 = (*(code *)PTR_writeln_0041f8b0)(local_140,uStack_e0,local_d8);
            if (lVar8 != 0) goto LAB_002602d9;
          }
          if (1 < param_7) {
            uVar12 = param_7 + 1;
            goto LAB_00260010;
          }
          bVar2 = false;
          goto LAB_00260342;
        }
        lVar8 = (*(code *)puVar3)(param_2,uStack_e0,local_d8);
        if (lVar8 != 0) {
LAB_002602d9:
          *param_1 = 0;
          param_1[1] = lVar8;
          goto LAB_00260406;
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
  (*(code *)PTR_finish_split_0041f8b8)(param_2);
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,local_d0,local_c8);
  *param_1 = 3;
  return;
  while( true ) {
    local_160 = (undefined **)*plVar7;
    uStack_150 = *(undefined4 *)(plVar7 + 2);
    uStack_14c = *(undefined4 *)((long)plVar7 + 0x14);
    uStack_148 = *(undefined4 *)(plVar7 + 3);
    uStack_144 = *(undefined4 *)((long)plVar7 + 0x1c);
                    /* try { // try from 00260103 to 00260112 has its CatchHandler @ 002604f4 */
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
                    /* try { // try from 00260159 to 0026015e has its CatchHandler @ 002604da */
    lVar8 = (*(code *)puVar3)(param_2,uStack_e0,local_d8);
    if (lVar8 != 0) {
      *param_1 = 0;
      param_1[1] = lVar8;
                    /* try { // try from 00260374 to 0026037d has its CatchHandler @ 002604a5 */
      core::ptr::drop_in_place<alloc::string::String>(&local_160);
                    /* try { // try from 0026037e to 00260387 has its CatchHandler @ 002604c9 */
      core::ptr::
      drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::__closure__>>
                (&local_138);
      goto LAB_00260388;
    }
                    /* try { // try from 00260168 to 0026016f has its CatchHandler @ 002604f4 */
    core::ptr::drop_in_place<alloc::string::String>(&local_160);
    plVar7 = (long *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                               (&local_138);
    if (plVar7 == (long *)0x0) break;
LAB_002600e0:
    if ((undefined **)plVar7[1] == (undefined **)0x8000000000000001) break;
  }
LAB_00260183:
                    /* try { // try from 00260183 to 0026018c has its CatchHandler @ 002604c9 */
  core::ptr::
  drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::__closure__>>
            (&local_138);
  uVar5 = local_140;
  cVar6 = *(char *)(*(long *)(param_2 + 0x20) + 99);
  if (cVar6 == '\0') {
    *(ulong *)(param_8 + 0x30) = local_140 + 1;
    local_128 = local_a0;
    local_138 = local_b0;
    uStack_130 = ppuStack_a8;
    InputSplitter<I>::add_line_to_buffer(&local_160,param_8,ppuVar4,&local_138);
    ppuVar4 = local_160;
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_160);
    if (ppuVar4 != (undefined **)0x8000000000000000) {
      local_138 = &PTR_s_should_be_big_enough_to_hold_eve_003deb90;
      uStack_130 = (undefined **)0x1;
      local_128 = (undefined **)0x8;
      uStack_120 = (undefined **)0x0;
      local_118 = 0;
      (*(code *)PTR_panic_fmt_0041f810)(&local_138,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003deba0)
      ;
LAB_0026045d:
                    /* try { // try from 0026045f to 002604a2 has its CatchHandler @ 002604be */
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_108);
      local_138 = &PTR_s_the_buffer_is_big_enough_to_cont_003deb50;
      uStack_130 = (undefined **)0x1;
      local_128 = (undefined **)0x8;
      uStack_120 = (undefined **)0x0;
      local_118 = 0;
      (*(code *)PTR_panic_fmt_0041f810)(&local_138,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003debb8)
      ;
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
                    /* try { // try from 00260201 to 00260236 has its CatchHandler @ 002604ac */
  (*(code *)PTR_finish_split_0041f8b8)(param_2);
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
LAB_00260388:
  pppuVar11 = &local_b0;
  goto LAB_0026040e;
  while( true ) {
    local_108 = uStack_130;
    uStack_100 = local_128;
    uStack_f8 = uStack_120;
                    /* try { // try from 00260050 to 00260056 has its CatchHandler @ 002604cb */
    lVar8 = (*(code *)puVar3)(local_140);
    if (lVar8 != 0) {
      *param_1 = 0;
      param_1[1] = lVar8;
      core::ptr::drop_in_place<alloc::string::String>(&local_108);
      goto LAB_00260406;
    }
                    /* try { // try from 00260060 to 00260067 has its CatchHandler @ 002604e9 */
    core::ptr::drop_in_place<alloc::string::String>(&local_108);
    uVar12 = uVar12 - 1;
    if (uVar12 < 3) break;
LAB_00260010:
                    /* try { // try from 00260010 to 0026001f has its CatchHandler @ 002604e9 */
    _<uu_csplit::InputSplitter<I>as_core::iter::traits::iterator::Iterator>::next
              (&local_138,param_8);
    if (uStack_130 == (undefined **)0x8000000000000001) {
                    /* try { // try from 00260395 to 00260405 has its CatchHandler @ 002604be */
      (*(code *)PTR_finish_split_0041f8b8)(local_140);
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_108,local_d0,local_c8);
      param_1[3] = uStack_f8;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_108;
      *(undefined4 *)((long)param_1 + 0xc) = local_108._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_100;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_100._4_4_;
      *param_1 = 1;
      goto LAB_00260406;
    }
    if (uStack_130 == (undefined **)0x8000000000000000) {
      *param_1 = 0;
      param_1[1] = local_128;
      goto LAB_00260406;
    }
  }
  bVar2 = false;
LAB_00260342:
  (*(code *)PTR_finish_split_0041f8b8)(local_140);
  *param_1 = 0xc;
  if (bVar2) {
    return;
  }
LAB_00260406:
  pppuVar11 = &local_e8;
LAB_0026040e:
  core::ptr::drop_in_place<alloc::string::String>(pppuVar11);
  return;
}