void __rustcall uu_csplit::patterns::extract_patterns(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong unaff_R12;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined auVar10 [16];
  long local_210;
  long local_208;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  long local_1d0;
  long local_1c8;
  long *local_1c0;
  int local_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  int local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined local_70 [32];
  undefined local_50 [32];
  
  local_1c0 = param_1;
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1b8,param_3,0);
  if (CONCAT44(uStack_1b4,local_1b8) == 0) {
    local_148 = uStack_1b0;
    uStack_140 = local_1a8;
    local_138 = 0;
                    /* try { // try from 002b46cd to 002b46fc has its CatchHandler @ 002b4e98 */
    regex::regex::string::Regex::new
              (&local_1b8,"^(/(?P<UPTO>.+)/|%(?P<SKIPTO>.+)%)(?P<OFFSET>[\\+-]\\d+)?$",0x38);
    core::result::Result<T,E>::unwrap
              (local_70,&local_1b8,&PTR_s_src_uu_csplit_src_patterns_rs_003e1b08);
                    /* try { // try from 002b4703 to 002b4732 has its CatchHandler @ 002b4e9d */
    regex::regex::string::Regex::new
              (&local_1b8,
               "^\\{(?P<TIMES>\\d+)|\\*\\}$/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-1.11.1/src/regex/string.rs: warning: line number \'\' is the same as preceding line number\n"
               ,0x17);
    core::result::Result<T,E>::unwrap
              (local_50,&local_1b8,&PTR_s_src_uu_csplit_src_patterns_rs_003e1b20);
    local_118 = param_2 + param_3 * 0x18;
    lVar4 = 0;
    local_120 = param_2;
    while( true ) {
      local_130 = 0;
      lVar2 = local_128;
      if (lVar4 == 0) {
        lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_120);
      }
      if (lVar2 == 0) {
        local_1c0[3] = local_138;
        *(undefined4 *)(local_1c0 + 1) = (undefined4)local_148;
        *(undefined4 *)((long)local_1c0 + 0xc) = local_148._4_4_;
        *(undefined4 *)(local_1c0 + 2) = (undefined4)uStack_140;
        *(undefined4 *)((long)local_1c0 + 0x14) = uStack_140._4_4_;
        *local_1c0 = 0xc;
                    /* try { // try from 002b4d78 to 002b4d84 has its CatchHandler @ 002b4e9d */
        core::ptr::drop_in_place<regex::regex::string::Regex>(local_50);
        core::ptr::drop_in_place<regex::regex::string::Regex>(local_70);
        return;
      }
      plVar3 = (long *)core::option::Option<T>::get_or_insert_with(&local_130,&local_120);
      lVar4 = *plVar3;
      if (lVar4 != 0) break;
      local_208 = 1;
      local_210 = 1;
LAB_002b4982:
      uVar5 = *(undefined8 *)(lVar2 + 8);
      uVar8 = *(undefined8 *)(lVar2 + 0x10);
      regex::regex::string::Regex::captures_at(&local_f0,local_70,uVar5,uVar8);
      if (local_f0 == 2) {
                    /* try { // try from 002b49aa to 002b49fd has its CatchHandler @ 002b4ebe */
        core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_1f8,uVar5,uVar8);
        if ((char)local_1f8 != '\0') {
                    /* try { // try from 002b4d97 to 002b4da4 has its CatchHandler @ 002b4e96 */
          _<alloc::string::String_as_core::clone::Clone>::clone(&local_1b8,lVar2);
          local_1c0[3] = local_1a8;
          *(int *)(local_1c0 + 1) = local_1b8;
          *(undefined4 *)((long)local_1c0 + 0xc) = uStack_1b4;
          *(undefined4 *)(local_1c0 + 2) = (undefined4)uStack_1b0;
          *(undefined4 *)((long)local_1c0 + 0x14) = uStack_1b0._4_4_;
          *local_1c0 = 7;
          if (local_f0 != 2) {
                    /* try { // try from 002b4dcd to 002b4dd9 has its CatchHandler @ 002b4e91 */
            core::ptr::drop_in_place<regex::regex::string::Captures>(&local_f0);
          }
LAB_002b4e16:
                    /* try { // try from 002b4e16 to 002b4e22 has its CatchHandler @ 002b4e9d */
          core::ptr::drop_in_place<regex::regex::string::Regex>(local_50);
                    /* try { // try from 002b4e23 to 002b4e2f has its CatchHandler @ 002b4e98 */
          core::ptr::drop_in_place<regex::regex::string::Regex>(local_70);
          core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&local_148);
          return;
        }
        uStack_1b0 = CONCAT44(uStack_1ec,local_1f0);
        local_1a8 = local_210;
        uStack_1a0 = local_208;
        local_1b8 = 0;
        ::alloc::vec::Vec<T,A>::push(&local_148,&local_1b8);
        lVar4 = local_130;
        if (local_f0 != 2) {
                    /* try { // try from 002b4a0c to 002b4a13 has its CatchHandler @ 002b4eda */
          core::ptr::drop_in_place<regex::regex::string::Captures>(&local_f0);
          lVar4 = local_130;
        }
      }
      else {
        local_178 = local_b0;
        local_188 = local_c0;
        uStack_184 = uStack_bc;
        uStack_180 = uStack_b8;
        uStack_17c = uStack_b4;
        local_198 = local_d0;
        uStack_194 = uStack_cc;
        uStack_190 = uStack_c8;
        uStack_18c = uStack_c4;
        local_1a8 = CONCAT44(uStack_dc,local_e0);
        uStack_1a0 = CONCAT44(uStack_d4,uStack_d8);
        local_1b8 = local_f0;
        uStack_1b4 = uStack_ec;
        uStack_1b0 = CONCAT44(uStack_e4,uStack_e8);
                    /* try { // try from 002b4a6a to 002b4d46 has its CatchHandler @ 002b4edf */
        regex_automata::util::captures::Captures::get_group_by_name
                  (&local_1f8,&local_1a8,"OFFSET",6);
        uVar6 = local_178;
        if (CONCAT44(uStack_1f4,local_1f8) != 0) {
          uVar5 = CONCAT44(uStack_17c,uStack_180);
          uVar8 = CONCAT44(uStack_1ec,local_1f0);
          uVar7 = CONCAT44(uStack_1e4,uStack_1e8);
          auVar10 = core::str::traits::
                    _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::
                    get(uVar8,uVar7,uVar5,local_178);
          if (auVar10._0_8_ != 0) {
            uVar5 = core::num::_<impl_core::str::traits::FromStr_for_i32>::from_str
                              (auVar10._0_8_,auVar10._8_8_);
            uVar1 = core::result::Result<T,E>::unwrap(uVar5);
            unaff_R12 = (ulong)uVar1;
            goto LAB_002b4aee;
          }
LAB_002b4e4f:
                    /* try { // try from 002b4e4f to 002b4e67 has its CatchHandler @ 002b4ebc */
          core::str::slice_error_fail(uVar5,uVar6,uVar8,uVar7,&DAT_003e1b38);
          goto LAB_002b4e68;
        }
        unaff_R12 = 0;
LAB_002b4aee:
        regex_automata::util::captures::Captures::get_group_by_name(&local_1f8,&local_1a8,"UPTOQ",4)
        ;
        uVar6 = local_178;
        if (CONCAT44(uStack_1f4,local_1f8) == 0) {
          regex_automata::util::captures::Captures::get_group_by_name
                    (&local_1f8,&local_1a8,"SKIPTO",6);
          uVar6 = local_178;
          if (CONCAT44(uStack_1f4,local_1f8) != 0) {
            uVar5 = CONCAT44(uStack_17c,uStack_180);
            uVar8 = CONCAT44(uStack_1ec,local_1f0);
            uVar7 = CONCAT44(uStack_1e4,uStack_1e8);
            lVar4 = core::str::traits::
                    _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::
                    get(uVar8,uVar7,uVar5,local_178);
            if (lVar4 == 0) goto LAB_002b4e4f;
            regex::regex::string::Regex::new(&local_110,lVar4);
            if (local_110 == 0) {
              local_78 = uStack_f8;
              local_88 = uStack_108;
              uStack_84 = uStack_104;
              uStack_80 = uStack_100;
              uStack_7c = uStack_fc;
              extract_patterns::___closure__(&local_1f8,lVar2,&local_88);
              lVar4 = CONCAT44(uStack_1f4,local_1f8);
              local_168 = CONCAT44(uStack_1ec,local_1f0);
              uStack_160 = CONCAT44(uStack_1e4,uStack_1e8);
              local_158 = CONCAT44(uStack_1dc,local_1e0);
              uStack_150 = CONCAT44(uStack_1d4,uStack_1d8);
              if (lVar4 != 0xc) goto LAB_002b4ddc;
            }
            else {
              uStack_160 = CONCAT44(uStack_104,uStack_108);
              local_158 = CONCAT44(uStack_fc,uStack_100);
              uStack_150 = uStack_f8;
              local_168 = local_110;
            }
            local_98 = (undefined4)local_158;
            uStack_94 = local_158._4_4_;
            uStack_90 = (undefined4)uStack_150;
            uStack_8c = uStack_150._4_4_;
            local_a8 = (undefined4)local_168;
            uStack_a4 = local_168._4_4_;
            uStack_a0 = (undefined4)uStack_160;
            uStack_9c = uStack_160._4_4_;
            local_1e0 = (undefined4)local_158;
            uStack_1dc = local_158._4_4_;
            uStack_1d8 = (undefined4)uStack_150;
            uStack_1d4 = uStack_150._4_4_;
            local_1f0 = (undefined4)local_168;
            uStack_1ec = local_168._4_4_;
            uStack_1e8 = (undefined4)uStack_160;
            uStack_1e4 = uStack_160._4_4_;
            local_1d0 = local_210;
            local_1c8 = local_208;
            local_1f8 = 2;
            uStack_1f4 = (int)unaff_R12;
            ::alloc::vec::Vec<T,A>::push(&local_148,&local_1f8);
          }
        }
        else {
          uVar5 = CONCAT44(uStack_17c,uStack_180);
          uVar8 = CONCAT44(uStack_1ec,local_1f0);
          uVar7 = CONCAT44(uStack_1e4,uStack_1e8);
          lVar4 = core::str::traits::
                  _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                            (uVar8,uVar7,uVar5,local_178);
          if (lVar4 == 0) goto LAB_002b4e4f;
          regex::regex::string::Regex::new(&local_110,lVar4);
          if (local_110 == 0) {
            local_78 = uStack_f8;
            local_88 = uStack_108;
            uStack_84 = uStack_104;
            uStack_80 = uStack_100;
            uStack_7c = uStack_fc;
            extract_patterns::___closure__(&local_1f8,lVar2,&local_88);
            lVar4 = CONCAT44(uStack_1f4,local_1f8);
            local_168 = CONCAT44(uStack_1ec,local_1f0);
            uStack_160 = CONCAT44(uStack_1e4,uStack_1e8);
            local_158 = CONCAT44(uStack_1dc,local_1e0);
            uStack_150 = CONCAT44(uStack_1d4,uStack_1d8);
            if (lVar4 != 0xc) {
LAB_002b4ddc:
              local_98 = (undefined4)local_158;
              uStack_94 = local_158._4_4_;
              uStack_90 = (undefined4)uStack_150;
              uStack_8c = uStack_150._4_4_;
              local_a8 = (undefined4)local_168;
              uStack_a4 = local_168._4_4_;
              uStack_a0 = (undefined4)uStack_160;
              uStack_9c = uStack_160._4_4_;
              *(undefined4 *)(local_1c0 + 3) = (undefined4)local_158;
              *(undefined4 *)((long)local_1c0 + 0x1c) = local_158._4_4_;
              *(undefined4 *)(local_1c0 + 4) = (undefined4)uStack_150;
              *(undefined4 *)((long)local_1c0 + 0x24) = uStack_150._4_4_;
              *(undefined4 *)(local_1c0 + 1) = (undefined4)local_168;
              *(undefined4 *)((long)local_1c0 + 0xc) = local_168._4_4_;
              *(undefined4 *)(local_1c0 + 2) = (undefined4)uStack_160;
              *(undefined4 *)((long)local_1c0 + 0x14) = uStack_160._4_4_;
              *local_1c0 = lVar4;
                    /* try { // try from 002b4e0c to 002b4e15 has its CatchHandler @ 002b4e8c */
              core::ptr::drop_in_place<regex::regex::string::Captures>(&local_1b8);
              goto LAB_002b4e16;
            }
          }
          else {
            uStack_160 = CONCAT44(uStack_104,uStack_108);
            local_158 = CONCAT44(uStack_fc,uStack_100);
            uStack_150 = uStack_f8;
            local_168 = local_110;
          }
          local_98 = (undefined4)local_158;
          uStack_94 = local_158._4_4_;
          uStack_90 = (undefined4)uStack_150;
          uStack_8c = uStack_150._4_4_;
          local_a8 = (undefined4)local_168;
          uStack_a4 = local_168._4_4_;
          uStack_a0 = (undefined4)uStack_160;
          uStack_9c = uStack_160._4_4_;
          local_1e0 = (undefined4)local_158;
          uStack_1dc = local_158._4_4_;
          uStack_1d8 = (undefined4)uStack_150;
          uStack_1d4 = uStack_150._4_4_;
          local_1f0 = (undefined4)local_168;
          uStack_1ec = local_168._4_4_;
          uStack_1e8 = (undefined4)uStack_160;
          uStack_1e4 = uStack_160._4_4_;
          local_1d0 = local_210;
          local_1c8 = local_208;
          local_1f8 = 1;
                    /* try { // try from 002b47cc to 002b47dd has its CatchHandler @ 002b4edf */
          uStack_1f4 = (int)unaff_R12;
          ::alloc::vec::Vec<T,A>::push(&local_148,&local_1f8);
        }
                    /* try { // try from 002b47de to 002b47e7 has its CatchHandler @ 002b4ea8 */
        core::ptr::drop_in_place<regex::regex::string::Captures>(&local_1b8);
        lVar4 = local_130;
      }
    }
                    /* try { // try from 002b4841 to 002b4850 has its CatchHandler @ 002b4eda */
    regex::regex::string::Regex::captures_at
              (&local_f0,local_50,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    local_208 = 1;
    local_210 = 1;
    if (local_f0 == 2) goto LAB_002b4982;
    local_178 = local_b0;
    local_188 = local_c0;
    uStack_184 = uStack_bc;
    uStack_180 = uStack_b8;
    uStack_17c = uStack_b4;
    local_198 = local_d0;
    uStack_194 = uStack_cc;
    uStack_190 = uStack_c8;
    uStack_18c = uStack_c4;
    local_1a8 = CONCAT44(uStack_dc,local_e0);
    uStack_1a0 = CONCAT44(uStack_d4,uStack_d8);
    local_1b8 = local_f0;
    uStack_1b4 = uStack_ec;
    uStack_1b0 = CONCAT44(uStack_e4,uStack_e8);
    bVar9 = local_130 == 0;
    local_130 = 0;
    if (bVar9) {
      _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_120);
    }
                    /* try { // try from 002b48d7 to 002b494e has its CatchHandler @ 002b4ead */
    regex_automata::util::captures::Captures::get_group_by_name(&local_1f8,&local_1a8,"TIMES",5);
    uVar5 = local_178;
    if (CONCAT44(uStack_1f4,local_1f8) == 0) {
      local_210 = 0;
LAB_002b4973:
                    /* try { // try from 002b4978 to 002b499f has its CatchHandler @ 002b4eda */
      core::ptr::drop_in_place<regex::regex::string::Captures>(&local_1b8);
      goto LAB_002b4982;
    }
    uVar8 = CONCAT44(uStack_17c,uStack_180);
    unaff_R12 = CONCAT44(uStack_1ec,local_1f0);
    uVar7 = CONCAT44(uStack_1e4,uStack_1e8);
    lVar4 = core::str::traits::
            _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                      (unaff_R12,uVar7,uVar8,local_178);
    if (lVar4 != 0) {
      core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_1f8,lVar4);
      local_208 = core::result::Result<T,E>::unwrap(&local_1f8);
      local_208 = local_208 + 1;
      local_210 = 1;
      goto LAB_002b4973;
    }
LAB_002b4e68:
                    /* try { // try from 002b4e68 to 002b4e80 has its CatchHandler @ 002b4ea6 */
    core::str::slice_error_fail(uVar8,uVar5,unaff_R12,uVar7,&DAT_003e1b38);
  }
  uVar5 = ::alloc::raw_vec::handle_error();
                    /* catch() { ... } // from try @ 002b4e0c with catch @ 002b4e8c */
  core::ptr::drop_in_place<regex::regex::string::Regex>(local_50);
  core::ptr::drop_in_place<regex::regex::string::Regex>(local_70);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&local_148);
  _Unwind_Resume(uVar5);
  return;
}