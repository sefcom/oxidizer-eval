long __rustcall
uu_sort::Line::print_debug
          (long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined auVar1 [16];
  undefined ****ppppuVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  ulong local_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined *local_e8;
  undefined ****local_e0;
  ulong local_d8 [3];
  undefined ***local_c0;
  code *local_b8;
  undefined8 local_a8;
  undefined8 ***local_a0;
  code *local_98;
  undefined **local_90;
  long local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long lVar8;
  
  ::alloc::str::_<impl_str>::replace(&local_90,param_1,param_2);
  local_b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_f0 = (undefined **)&DAT_002fedc8;
  local_e8 = (undefined *)0x2;
  local_d8[1] = 0;
  local_e0 = &local_c0;
  local_d8[0] = 1;
                    /* try { // try from 0021f143 to 0021f154 has its CatchHandler @ 0021f982 */
  local_c0 = &local_90;
  local_a8 = param_4;
  lVar6 = std::io::Write::write_fmt(param_4,&local_f0);
  if (lVar6 == 0) {
    local_70 = 0;
    local_68 = 8;
    local_60 = 0;
                    /* try { // try from 0021f18a to 0021f1a0 has its CatchHandler @ 0021f998 */
    lVar6 = param_1;
    tokenize(param_1,param_2,*(undefined4 *)(param_3 + 0x78),&local_70);
    local_50 = *(long *)(param_3 + 8);
    local_58 = *(long *)(param_3 + 0x10);
    local_38 = local_58 * 0x38 + local_50;
    local_48 = param_3;
    local_40 = local_50;
    lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_40);
    if (lVar7 != 0) {
      local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002fee58;
      do {
                    /* try { // try from 0021f242 to 0021f56a has its CatchHandler @ 0021f996 */
        auVar15 = FieldSelector::get_range(lVar7,param_1,param_2,local_68,local_60);
        uVar10 = auVar15._8_8_;
        lVar8 = auVar15._0_8_;
        bVar3 = *(byte *)(lVar7 + 0x35);
        local_100 = param_2;
        if (bVar3 < 2) {
          auVar15 = _<core::ops::range::Range<Idx>as_core::clone::Clone>::clone(lVar8,uVar10);
          local_78 = auVar15._8_8_;
          uVar10 = auVar15._0_8_;
          auVar15 = core::str::traits::
                    _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::
                    get(uVar10,local_78,lVar6,param_2);
          auVar16._8_8_ = local_78;
          auVar16._0_8_ = uVar10;
          if (auVar15._0_8_ == 0) {
            local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002fedf8;
            goto LAB_0021f8d1;
          }
          local_b8 = (code *)CONCAT71(local_b8._1_7_,bVar3 == 1);
          local_c0 = (undefined ***)0x2e00110000;
          numeric_str_cmp::NumInfo::parse(&local_f0,auVar15._0_8_,auVar15._8_8_,&local_c0);
          uVar13 = local_d8[0];
          ppppuVar2 = local_e0;
          lVar7 = core::iter::traits::exact_size::ExactSizeIterator::len(local_e0,local_d8[0]);
          puVar12 = (undefined *)(lVar8 + (long)ppppuVar2);
          puVar14 = puVar12 + lVar7;
          if (((undefined8 ****)ppppuVar2 == (undefined8 ****)0x0) &&
             (cVar4 = core::cmp::impls::_<impl_core::cmp::PartialEq_for_usize>::eq(uVar13),
             cVar4 != '\0')) {
            auVar16 = _<core::ops::range::Range<Idx>as_core::clone::Clone>::clone(puVar12,puVar14);
            auVar15 = core::str::traits::
                      _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>
                      ::get(auVar16._0_8_,auVar16._8_8_,lVar6,param_2);
            if (auVar15._0_8_ == 0) {
LAB_0021f955:
              local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002fee10;
LAB_0021f8d1:
              do {
                uVar13 = auVar16._8_8_;
                    /* try { // try from 0021f8d1 to 0021f954 has its CatchHandler @ 0021f998 */
                local_80 = core::str::slice_error_fail
                                     (lVar6,local_100,auVar16._0_8_,uVar13,local_f8,param_6,lVar6);
                local_88 = lVar6;
LAB_0021f8eb:
                auVar1._8_8_ = 0;
                auVar1._0_8_ = uVar13;
                local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002feea0;
                lVar6 = local_88;
                local_100 = local_80;
                auVar16 = auVar1 << 0x40;
              } while( true );
            }
            auVar15 = core::str::_<impl_str>::find(auVar15._0_8_,auVar15._8_8_);
            lVar7 = auVar15._8_8_;
            if (auVar15._0_8_ == 0) {
              lVar7 = 0;
            }
            auVar15._8_8_ = puVar14 + lVar7;
            auVar15._0_8_ = puVar12 + lVar7;
            param_1 = lVar6;
          }
          else {
            auVar16._8_8_ = local_78;
            auVar16._0_8_ = puVar14;
            param_1 = lVar6;
            if (bVar3 == 1) {
              auVar15 = core::str::traits::
                        _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>
                        ::get(puVar14,local_78,lVar6,param_2);
              if (auVar15._0_8_ == 0) {
                local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002fee28;
                lVar6 = param_1;
                goto LAB_0021f8d1;
              }
              bVar3 = core::str::pattern::Pattern::is_prefix_of(auVar15._0_8_,auVar15._8_8_);
              puVar14 = puVar14 + bVar3;
            }
            while( true ) {
              auVar16._8_8_ = puVar12;
              auVar16._0_8_ = uVar10;
              auVar15._8_8_ = puVar14;
              auVar15._0_8_ = puVar12;
              auVar17 = core::str::traits::
                        _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>
                        ::get(uVar10,puVar12,lVar6,param_2);
              if (auVar17._0_8_ == 0) {
                local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002fee40;
                lVar6 = param_1;
                goto LAB_0021f8d1;
              }
              cVar4 = core::str::pattern::Pattern::is_suffix_of(auVar17._0_8_,auVar17._8_8_);
              if (cVar4 == '\0') break;
              puVar12 = puVar12 + -1;
            }
          }
        }
        else {
          if (bVar3 == 2) {
            auVar16 = _<core::ops::range::Range<Idx>as_core::clone::Clone>::clone(lVar8,uVar10);
            auVar15 = core::str::traits::
                      _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>
                      ::get(auVar16._0_8_,auVar16._8_8_,lVar6,param_2);
            if (auVar15._0_8_ == 0) goto LAB_0021f8d1;
            auVar15 = get_leading_gen(auVar15._0_8_,auVar15._8_8_);
            lVar7 = auVar15._0_8_;
            lVar11 = core::iter::traits::exact_size::ExactSizeIterator::len(lVar7,auVar15._8_8_);
          }
          else {
            param_1 = lVar6;
            if (bVar3 != 3) goto LAB_0021f515;
            auVar16 = _<core::ops::range::Range<Idx>as_core::clone::Clone>::clone(lVar8,uVar10);
            uVar10 = auVar16._0_8_;
            auVar15 = core::str::traits::
                      _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>
                      ::get(uVar10,auVar16._8_8_,lVar6,param_2);
            lVar7 = auVar15._8_8_;
            ppuVar9 = auVar15._0_8_;
            if (ppuVar9 == (undefined **)0x0) {
              local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002fee70;
              goto LAB_0021f8d1;
            }
            local_e8 = (undefined *)((long)ppuVar9 + lVar7);
            local_e0 = (undefined ****)0x0;
            local_d8[0] = local_d8[0] & 0xffffffffffffff00;
            local_f0 = ppuVar9;
            uVar5 = month_parse(ppuVar9,lVar7);
            auVar16._8_4_ = uVar5;
            auVar16._0_8_ = uVar10;
            auVar16._12_4_ = 0;
            auVar15 = core::iter::traits::iterator::Iterator::try_fold(&local_f0,local_d8);
            if ((char)uVar5 == '\0') {
              auVar17 = core::option::Option<T>::map_or
                                  (auVar15._0_8_,auVar15._8_8_ & 0xffffffff,lVar7,lVar7);
            }
            else {
              if (auVar15._8_4_ == 0x110000) {
                core::option::unwrap_failed(&PTR_s_src_uu_sort_src_sort_rs_002fee88);
                goto LAB_0021f955;
              }
              lVar7 = core::iter::traits::iterator::Iterator::advance_by(&local_f0);
              if (lVar7 == 0) {
                core::iter::traits::iterator::Iterator::try_fold(&local_f0,local_d8);
              }
              uVar10 = core::option::Option<T>::map_or();
              auVar17._8_8_ = uVar10;
              auVar17._0_8_ = auVar15._0_8_;
            }
            lVar7 = auVar17._0_8_;
            lVar11 = core::iter::traits::exact_size::ExactSizeIterator::len(lVar7,auVar17._8_8_);
          }
          auVar15._8_8_ = lVar11 + lVar8 + lVar7;
          auVar15._0_8_ = lVar8 + lVar7;
          param_1 = lVar6;
        }
LAB_0021f515:
        uVar13 = auVar15._0_8_;
        if (uVar13 != 0) {
          if (uVar13 < local_80) {
            if (*(char *)(local_88 + uVar13) < -0x40) goto LAB_0021f8eb;
          }
          else if (uVar13 != local_80) goto LAB_0021f8eb;
        }
        uVar10 = unicode_width::str_width(local_88,uVar13,0);
        ::alloc::str::_<impl_str>::repeat(&local_c0," ",1,uVar10);
        local_a0 = &local_c0;
        local_98 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_f0 = (undefined **)&DAT_00124b00;
        local_e8 = (undefined *)0x1;
        local_d8[1] = 0;
        local_e0 = (undefined ****)&local_a0;
        local_d8[0] = 1;
                    /* try { // try from 0021f5b2 to 0021f5c0 has its CatchHandler @ 0021f987 */
        lVar6 = std::io::Write::write_fmt(local_a8,&local_f0);
        if (lVar6 != 0) {
          core::ptr::drop_in_place<alloc::string::String>(&local_c0);
          goto LAB_0021f874;
        }
                    /* try { // try from 0021f5cd to 0021f631 has its CatchHandler @ 0021f996 */
        core::ptr::drop_in_place<alloc::string::String>(&local_c0);
        local_100 = local_80;
        lVar6 = local_88;
        if (uVar13 < auVar15._8_8_) {
          auVar16 = core::str::traits::
                    _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::
                    get(uVar13,auVar15._8_8_,local_88,local_80);
          if (auVar16._0_8_ == 0) {
            local_f8 = &PTR_s_src_uu_sort_src_sort_rs_002feeb8;
            auVar16 = auVar15;
            goto LAB_0021f8d1;
          }
          uVar10 = unicode_width::str_width(auVar16._0_8_,auVar16._8_8_,0);
          ::alloc::str::_<impl_str>::repeat(&local_c0,"_",1,uVar10);
          local_a0 = &local_c0;
          local_98 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_f0 = (undefined **)&DAT_002fedc8;
          local_e8 = (undefined *)0x2;
          local_d8[1] = 0;
          local_e0 = (undefined ****)&local_a0;
          local_d8[0] = 1;
                    /* try { // try from 0021f679 to 0021f687 has its CatchHandler @ 0021f973 */
          lVar6 = std::io::Write::write_fmt(local_a8,&local_f0);
          if (lVar6 != 0) {
            core::ptr::drop_in_place<alloc::string::String>(&local_c0);
            goto LAB_0021f874;
          }
                    /* try { // try from 0021f694 to 0021f6e4 has its CatchHandler @ 0021f996 */
          core::ptr::drop_in_place<alloc::string::String>(&local_c0);
        }
        else {
          local_f0 = &PTR_s___no_match_for_key_002fede8;
          local_e8 = (undefined *)0x1;
          local_e0 = (undefined ****)&DAT_00000008;
          local_d8[0] = 0;
          local_d8[1] = 0;
          lVar6 = std::io::Write::write_fmt(local_a8,&local_f0);
          if (lVar6 != 0) goto LAB_0021f874;
        }
        lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_40);
        lVar6 = param_1;
      } while (lVar7 != 0);
    }
    if (((*(char *)(local_48 + 0x98) == '\x05') || (*(char *)(local_48 + 0x83) != '\0')) ||
       (*(char *)(local_48 + 0x84) != '\0')) {
LAB_0021f8aa:
                    /* try { // try from 0021f8aa to 0021f8b6 has its CatchHandler @ 0021f982 */
      core::ptr::drop_in_place<alloc::vec::Vec<core::ops::range::Range<usize>>>(&local_70);
      core::ptr::drop_in_place<alloc::string::String>(&local_90);
      return 0;
    }
    if (((*(char *)(local_48 + 0x7f) == '\0') && (*(char *)(local_48 + 0x7d) == '\0')) &&
       ((*(char *)(local_48 + 0x7e) == '\0' &&
        ((*(char *)(local_48 + 0x98) == '\x06' && (*(char *)(local_48 + 0x80) == '\0')))))) {
      lVar6 = 0;
      if (local_58 != 0) {
        lVar6 = local_50 + (local_58 + -1) * 0x38;
      }
                    /* try { // try from 0021f76b to 0021f7b5 has its CatchHandler @ 0021f998 */
      cVar4 = core::option::Option<T>::map_or(lVar6);
      if (cVar4 == '\0') goto LAB_0021f8aa;
    }
    if (param_2 == 0) {
      local_f0 = &PTR_s___no_match_for_key_002fede8;
      local_e8 = (undefined *)0x1;
      local_e0 = (undefined ****)&DAT_00000008;
      local_d8[0] = 0;
      local_d8[1] = 0;
      lVar6 = std::io::Write::write_fmt(local_a8,&local_f0);
      if (lVar6 == 0) goto LAB_0021f8aa;
    }
    else {
      uVar10 = unicode_width::str_width(local_88,local_80,0);
      ::alloc::str::_<impl_str>::repeat(&local_c0,"_",1,uVar10);
      local_98 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_f0 = (undefined **)&DAT_002fedc8;
      local_e8 = (undefined *)0x2;
      local_d8[1] = 0;
      local_e0 = (undefined ****)&local_a0;
      local_d8[0] = 1;
                    /* try { // try from 0021f7f8 to 0021f806 has its CatchHandler @ 0021f964 */
      local_a0 = &local_c0;
      lVar6 = std::io::Write::write_fmt(local_a8,&local_f0);
      if (lVar6 == 0) {
                    /* try { // try from 0021f8a0 to 0021f8a9 has its CatchHandler @ 0021f998 */
        core::ptr::drop_in_place<alloc::string::String>(&local_c0);
        goto LAB_0021f8aa;
      }
                    /* try { // try from 0021f813 to 0021f86b has its CatchHandler @ 0021f998 */
      core::ptr::drop_in_place<alloc::string::String>(&local_c0);
    }
LAB_0021f874:
                    /* try { // try from 0021f874 to 0021f880 has its CatchHandler @ 0021f982 */
    core::ptr::drop_in_place<alloc::vec::Vec<core::ops::range::Range<usize>>>(&local_70);
  }
  core::ptr::drop_in_place<alloc::string::String>(&local_90);
  return lVar6;
}