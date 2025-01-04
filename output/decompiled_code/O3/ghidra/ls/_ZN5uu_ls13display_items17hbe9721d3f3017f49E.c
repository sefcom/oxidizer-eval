undefined  [16] __rustcall
uu_ls::display_items
          (undefined8 *******param_1,undefined8 *******param_2,long param_3,
          undefined8 *******param_4,undefined8 param_5,long param_6)

{
  ushort uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 unaff_RBP;
  undefined8 *******pppppppuVar12;
  undefined auVar13 [16];
  undefined8 in_stack_fffffffffffffe18;
  undefined4 uVar14;
  undefined8 *****local_1b8;
  undefined8 uStack_1b0;
  undefined8 ******local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 ******local_188;
  undefined8 ******ppppppuStack_180;
  undefined8 ******local_178;
  code *pcStack_170;
  undefined8 ******local_160;
  undefined8 local_158;
  long local_150;
  undefined8 ******local_148;
  code *pcStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 ******local_128;
  code *pcStack_120;
  undefined8 local_118;
  undefined8 ******local_108;
  undefined8 ******local_100;
  undefined8 ******ppppppuStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 ******local_e0;
  code *pcStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 ******local_a8;
  undefined8 ******local_a0;
  undefined8 local_68;
  undefined8 *****local_60;
  undefined8 local_58;
  undefined8 ******local_50;
  undefined local_48 [24];
  
  pppppppuVar12 = param_1 + (long)param_2 * 0x26;
  local_158 = param_5;
  local_150 = param_6;
  local_a8 = param_1;
  local_a0 = pppppppuVar12;
  bVar6 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                    (&local_a8,param_3);
  local_160 = param_4;
  if (*(byte *)(param_3 + 0xf8) == 1) {
    calculate_padding_collection(&local_a8,param_1,param_2,param_3,param_4);
    ppppppuVar4 = local_160;
    local_100 = param_1;
    ppppppuStack_f8 = pppppppuVar12;
    if (*(char *)(param_3 + 0xe9) == '\0' && *(char *)(param_3 + 0xea) == '\0') {
      while( true ) {
        uVar14 = (undefined4)((ulong)in_stack_fffffffffffffe18 >> 0x20);
        lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_100);
        if (lVar9 == 0) break;
        in_stack_fffffffffffffe18 = CONCAT44(uVar14,(uint)bVar6);
        auVar13 = display_item_long(lVar9,&local_a8,param_3,local_160,local_158,local_150,
                                    in_stack_fffffffffffffe18);
        if (auVar13._0_8_ != 0) {
          return auVar13;
        }
      }
    }
    else {
      local_108 = local_a8;
      local_b0 = local_68;
      while( true ) {
        uVar14 = (undefined4)((ulong)in_stack_fffffffffffffe18 >> 0x20);
        lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_100);
        if (lVar9 == 0) break;
        display_additional_leading_info(&local_1b8,lVar9,local_108,local_b0,param_3,ppppppuVar4);
        param_2 = (undefined8 *******)local_1a8;
        auVar13._8_8_ = local_1a8;
        auVar13._0_8_ = uStack_1b0;
        if ((undefined8 ******)local_1b8 == (undefined8 ******)0x8000000000000000) {
          return auVar13;
        }
        local_188 = (undefined8 ******)local_1b8;
        ppppppuStack_180 = (undefined8 ******)uStack_1b0;
        local_178 = local_1a8;
        local_148 = &local_188;
        pcStack_140 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_1b8 = (undefined8 *****)&DAT_00123c10;
        uStack_1b0 = 1;
        local_198 = 0;
        local_1a8 = &local_148;
        uStack_1a0 = 1;
                    /* try { // try from 002297bd to 002297ca has its CatchHandler @ 0022a03d */
        lVar10 = std::io::Write::write_fmt(ppppppuVar4,&local_1b8);
        if (lVar10 != 0) {
                    /* try { // try from 00229a7b to 00229a83 has its CatchHandler @ 00229fe7 */
          auVar13 = uucore::mods::error::
                    _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                    ::from(lVar10);
          goto LAB_00229a84;
        }
        core::ptr::drop_in_place<alloc::string::String>(&local_188);
        in_stack_fffffffffffffe18 = CONCAT44(uVar14,(uint)bVar6);
        auVar13 = display_item_long(lVar9,&local_a8,param_3,ppppppuVar4,local_158,local_150,
                                    in_stack_fffffffffffffe18);
        if (auVar13._0_8_ != 0) {
          return auVar13;
        }
      }
    }
  }
  else {
    local_108 = (undefined8 ******)CONCAT44(local_108._4_4_,(uint)*(byte *)(param_3 + 0xf8));
    if (*(char *)(param_3 + 0xeb) == '\0') {
      local_158 = 0;
    }
    else {
      local_a8 = param_1;
      local_a0 = pppppppuVar12;
      lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_a8);
      local_158 = 1;
      unaff_RBP = 1;
      if (lVar9 != 0) {
        do {
          unaff_RBP = core::cmp::max_by(*(undefined8 *)(lVar9 + 0x40),unaff_RBP);
          lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_a8);
        } while (lVar9 != 0);
      }
    }
    ppppppuVar4 = local_160;
    calculate_padding_collection(&local_a8,param_1,param_2,param_3,local_160);
    if (*(char *)(local_150 + 0x1d) != '\x02') {
      colors::StyleManager::apply_normal(&local_188,local_150);
      pcStack_140 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_1b8 = (undefined8 *****)&DAT_00123c10;
      uStack_1b0 = 1;
      local_198 = 0;
      local_1a8 = &local_148;
      uStack_1a0 = 1;
                    /* try { // try from 002298c0 to 002298da has its CatchHandler @ 0022a012 */
      local_148 = &local_188;
      lVar9 = std::io::Write::write_fmt(ppppppuVar4,&local_1b8);
      if (lVar9 != 0) {
        auVar13 = uucore::mods::error::
                  _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  ::from(lVar9);
LAB_00229a84:
        core::ptr::drop_in_place<alloc::string::String>(&local_188);
        return auVar13;
      }
      core::ptr::drop_in_place<alloc::string::String>(&local_188);
    }
    ppppppuVar5 = local_a8;
    local_c8 = 0;
    local_c0 = 8;
    local_b8 = 0;
    param_2 = (undefined8 *******)ppppppuVar4;
    local_188 = param_1;
    ppppppuStack_180 = pppppppuVar12;
    while (lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                             (&local_188), lVar9 != 0) {
                    /* try { // try from 00229943 to 002299fa has its CatchHandler @ 0022a04c */
      display_additional_leading_info(&local_1b8,lVar9,ppppppuVar5,local_68,param_3,param_2);
      param_2 = (undefined8 *******)local_160;
      auVar2._8_8_ = local_1a8;
      auVar2._0_8_ = uStack_1b0;
      if ((undefined8 ******)local_1b8 == (undefined8 ******)0x8000000000000000) {
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_c8);
        return auVar2;
      }
      local_60 = local_1b8;
      local_58 = uStack_1b0;
      local_50 = local_1a8;
      display_item_name(local_48,lVar9,param_3,local_158,unaff_RBP,&local_60,local_160,local_150,0);
      ::alloc::vec::Vec<T,A>::push(&local_c8,local_48);
    }
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (&local_100,&local_c8);
    if ((int)local_108 == 0) {
      uVar14 = *(undefined4 *)(param_3 + 0xe4);
      uVar11 = 1;
    }
    else {
      if ((int)local_108 != 3) {
        if ((int)local_108 == 4) {
          _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                    (&local_148,&local_100);
          if ((undefined8 *******)local_148 == (undefined8 *******)0x8000000000000000) {
            sVar7 = 0;
          }
          else {
            local_178 = (undefined8 ******)local_138;
            local_188 = local_148;
            ppppppuStack_180 = (undefined8 ******)pcStack_140;
            local_128 = &local_188;
            pcStack_120 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_1b8 = (undefined8 *****)&DAT_00123c10;
            uStack_1b0 = 1;
            local_198 = 0;
            local_1a8 = &local_128;
            uStack_1a0 = 1;
                    /* try { // try from 00229cca to 00229ce4 has its CatchHandler @ 00229fcb */
            lVar9 = std::io::Write::write_fmt(param_2,&local_1b8);
            if (lVar9 != 0) {
              auVar13 = uucore::mods::error::
                        _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                        ::from(lVar9);
                    /* try { // try from 00229ce5 to 00229cf4 has its CatchHandler @ 00229fc6 */
              core::ptr::drop_in_place<alloc::string::String>(&local_188);
              core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>
                        (&local_100);
              return auVar13;
            }
                    /* try { // try from 00229d3f to 00229d44 has its CatchHandler @ 00229fcb */
            sVar7 = ansi_width::ansi_width(ppppppuStack_180,local_178);
                    /* try { // try from 00229d45 to 00229d51 has its CatchHandler @ 00229fc6 */
            core::ptr::drop_in_place<alloc::string::String>(&local_188);
            sVar7 = sVar7 + 2;
          }
          _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                    (&local_128,&local_188);
          if ((undefined8 *******)local_128 != (undefined8 *******)0x8000000000000000) {
            uVar1 = *(ushort *)(param_3 + 0xe4);
            param_2 = (undefined8 *******)&local_1b8;
            do {
              local_148 = local_128;
              pcStack_140 = pcStack_120;
              local_138 = local_118;
                    /* try { // try from 00229dd8 to 00229ea8 has its CatchHandler @ 0022a021 */
              sVar8 = ansi_width::ansi_width(pcStack_120);
              local_1a8 = &local_e0;
              local_e0 = &local_148;
              if ((uVar1 == 0) || ((ushort)(sVar8 + sVar7 + 1U) <= uVar1)) {
                pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_1b8 = (undefined8 *****)&PTR_DAT_00312660;
                uStack_1b0 = 1;
                local_198 = 0;
                uStack_1a0 = 1;
                lVar9 = std::io::Write::write_fmt(local_160,param_2);
                if (lVar9 != 0) {
                    /* try { // try from 00229f85 to 00229f98 has its CatchHandler @ 00229fbd */
                  auVar13 = uucore::mods::error::
                            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                            ::from(lVar9);
                  goto LAB_00229f99;
                }
                sVar8 = sVar7 + sVar8;
              }
              else {
                pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_1b8 = (undefined8 *****)&PTR_DAT_00312650;
                uStack_1b0 = 1;
                local_198 = 0;
                uStack_1a0 = 1;
                lVar9 = std::io::Write::write_fmt(local_160,param_2);
                if (lVar9 != 0) {
                  auVar13 = uucore::mods::error::
                            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                            ::from(lVar9);
LAB_00229f99:
                    /* try { // try from 00229f9f to 00229fab has its CatchHandler @ 00229fb8 */
                  core::ptr::drop_in_place<alloc::string::String>(&local_148);
                  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>
                            (&local_188);
                  return auVar13;
                }
              }
                    /* try { // try from 00229eb8 to 00229ebf has its CatchHandler @ 00229fe9 */
              sVar7 = sVar8 + 2;
              core::ptr::drop_in_place<alloc::string::String>(&local_148);
              _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                        (&local_128,&local_188);
            } while ((undefined8 *******)local_128 != (undefined8 *******)0x8000000000000000);
          }
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>
                    (&local_188);
          if (sVar7 != 0) {
            local_188 = (undefined8 ******)(param_3 + 0xfa);
            ppppppuStack_180 =
                 (undefined8 ******)
                 _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
            local_1b8 = (undefined8 *****)&DAT_00123c10;
            uStack_1b0 = 1;
            local_198 = 0;
            uStack_1a0 = 1;
            local_1a8 = &local_188;
            lVar9 = std::io::Write::write_fmt(local_160,&local_1b8);
            if (lVar9 != 0) {
              auVar13 = uucore::mods::error::
                        _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                        ::from(lVar9);
              return auVar13;
            }
          }
        }
        else {
          uStack_130 = uStack_e8;
          uStack_12c = uStack_e4;
          _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                    (&local_e0,&local_148);
          if ((undefined8 *******)local_e0 != (undefined8 *******)0x8000000000000000) {
            param_2 = (undefined8 *******)&DAT_00128c70;
            do {
              local_118 = local_d0;
              ppppppuStack_180 =
                   (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
              pcStack_170 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
              local_1b8 = (undefined8 *****)&DAT_00128c70;
              uStack_1b0 = 2;
              local_198 = 0;
              local_1a8 = &local_188;
              uStack_1a0 = 2;
              local_188 = &local_128;
              local_178 = (undefined8 *******)(param_3 + 0xfa);
                    /* try { // try from 00229c0a to 00229c19 has its CatchHandler @ 00229ff3 */
              lVar9 = std::io::Write::write_fmt(local_160,&local_1b8);
              if (lVar9 != 0) {
                    /* try { // try from 00229d07 to 00229d0f has its CatchHandler @ 00229fc4 */
                auVar13 = uucore::mods::error::
                          _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                          ::from(lVar9);
                    /* try { // try from 00229d10 to 00229d22 has its CatchHandler @ 00229fbf */
                core::ptr::drop_in_place<alloc::string::String>(&local_128);
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>
                          (&local_148);
                return auVar13;
              }
                    /* try { // try from 00229c23 to 00229c2a has its CatchHandler @ 00229fee */
              core::ptr::drop_in_place<alloc::string::String>(&local_128);
              _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                        (&local_e0,&local_148);
            } while ((undefined8 *******)local_e0 != (undefined8 *******)0x8000000000000000);
          }
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>
                    (&local_148);
        }
        goto LAB_00229f6a;
      }
      uVar14 = *(undefined4 *)(param_3 + 0xe4);
      uVar11 = 0;
    }
    auVar13 = display_grid(&local_1b8,uVar14,uVar11,param_2,bVar6);
    if (auVar13._0_8_ != 0) {
      return auVar13;
    }
  }
LAB_00229f6a:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}