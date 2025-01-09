undefined8 * __rustcall uu_numfmt::parse_options(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined uVar3;
  char cVar4;
  char cVar5;
  undefined uVar6;
  undefined uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined local_200 [8];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long local_150;
  long lStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_1d8,param_2,&DAT_00115848,4);
  lVar8 = clap_builder::parser::error::MatchesError::unwrap(&DAT_00115848,4,&local_1d8);
  if (lVar8 == 0) {
    core::option::unwrap_failed(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235900);
LAB_001c0e41:
    core::option::unwrap_failed(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235918);
LAB_001c0e4e:
    core::option::unwrap_failed(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235930);
LAB_001c0e5b:
    core::option::unwrap_failed(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235948);
LAB_001c0e68:
    core::option::unwrap_failed(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235978);
LAB_001c0e75:
    core::option::unwrap_failed(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235960);
LAB_001c0e82:
                    /* WARNING: Subroutine does not return */
    ::alloc::alloc::handle_alloc_error(8,0x10);
  }
  parse_unit(&local_138,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
  uVar3 = (char)uStack_130;
  if (local_138 != -0x8000000000000000) {
    param_1[3] = CONCAT44(uStack_124,uStack_128);
    *(ulong *)((long)param_1 + 0x11) =
         CONCAT17((undefined)uStack_128,CONCAT43(uStack_12c,uStack_130._1_3_));
    param_1[1] = local_138;
    *(char *)(param_1 + 2) = (char)uStack_130;
    goto LAB_001c08e4;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_1d8,param_2,"to",2);
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("to",2,&local_1d8);
  if (lVar8 == 0) goto LAB_001c0e41;
  parse_unit(&local_138,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
  cVar4 = (char)uStack_130;
  if (local_138 != -0x8000000000000000) {
    param_1[3] = CONCAT44(uStack_124,uStack_128);
    *(ulong *)((long)param_1 + 0x11) =
         CONCAT17((undefined)uStack_128,CONCAT43(uStack_12c,uStack_130._1_3_));
    param_1[1] = local_138;
    *(char *)(param_1 + 2) = (char)uStack_130;
    goto LAB_001c08e4;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_1d8,param_2,"from-unit",9);
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("from-unit",9,&local_1d8);
  if (lVar8 == 0) goto LAB_001c0e4e;
  parse_unit_size(&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
  if (local_1d8 != (undefined **)0x8000000000000000) {
LAB_001c08dc:
    param_1[1] = local_1d8;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1d0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1d0._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_1c8;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_1c8._4_4_;
    goto LAB_001c08e4;
  }
  local_58 = (undefined4)uStack_1d0;
  uStack_54 = uStack_1d0._4_4_;
  uStack_50 = (undefined4)uStack_1c8;
  uStack_4c = uStack_1c8._4_4_;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_1d8,param_2,"to-unit",7);
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("to-unit",7,&local_1d8);
  if (lVar8 == 0) goto LAB_001c0e5b;
  parse_unit_size(&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
  if (local_1d8 != (undefined **)0x8000000000000000) goto LAB_001c08dc;
  local_68 = (undefined4)uStack_1d0;
  uStack_64 = uStack_1d0._4_4_;
  uStack_60 = (undefined4)uStack_1c8;
  uStack_5c = uStack_1c8._4_4_;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_1d8,param_2,"padding",7);
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("padding",7,&local_1d8);
  if (lVar8 != 0) {
    core::num::_<impl_core::str::traits::FromStr_for_isize>::from_str
              (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    if ((((char)local_1d8 == '\0') && (local_90 = uStack_1d0, uStack_1d0 != 0)) ||
       (parse_options::___closure__
                  (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10)),
       local_90 = uStack_1d0, local_1d8 == (undefined **)0x8000000000000000)) goto LAB_001c070c;
LAB_001c08d7:
    goto LAB_001c08dc;
  }
  local_90 = 0;
LAB_001c070c:
  cVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(param_2,"header",6);
  if (cVar5 == '\x02') {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_1d8,param_2,"header",6);
    lVar8 = clap_builder::parser::error::MatchesError::unwrap("header",6,&local_1d8);
    if (lVar8 != 0) {
      core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str
                (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
      if ((((char)local_1d8 != '\0') || (local_98 = uStack_1d0, uStack_1d0 == 0)) &&
         (parse_options::___closure__
                    (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10)),
         local_98 = uStack_1d0, local_1d8 != (undefined **)0x8000000000000000)) goto LAB_001c08d7;
      goto LAB_001c07b9;
    }
    goto LAB_001c0e75;
  }
  local_98 = 0;
LAB_001c07b9:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_1d8,param_2,"field",5);
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("field",5,&local_1d8);
  if (lVar8 == 0) goto LAB_001c0e68;
  uVar10 = *(undefined8 *)(lVar8 + 8);
  uVar1 = *(undefined8 *)(lVar8 + 0x10);
  _<core::str::pattern::MultiCharEqPattern<C>as_core::str::pattern::Pattern>::into_searcher
            (&local_1d8,uVar10,uVar1);
  local_1a8 = 0;
  local_198 = CONCAT22(local_198._2_2_,1);
  uStack_1a0 = uVar1;
  uVar6 = core::iter::traits::iterator::Iterator::try_fold(&local_1d8);
  cVar5 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar6);
  if (cVar5 == '\0') {
    uucore::features::ranges::Range::from_list(&local_1d8,uVar10,uVar1);
    local_138 = uStack_1d0;
    lVar8 = local_138;
    uStack_130 = SUB84(uStack_1c8,0);
    uStack_12c = (undefined4)((ulong)uStack_1c8 >> 0x20);
    uStack_128 = (undefined4)uStack_1c0;
    uStack_124 = (undefined4)((ulong)uStack_1c0 >> 0x20);
    if (local_1d8 != (undefined **)0x0) {
      param_1[3] = uStack_1c0;
      param_1[1] = uStack_1d0;
      param_1[2] = uStack_1c8;
LAB_001c08e4:
      *param_1 = 2;
      return param_1;
    }
    local_c8 = uStack_1c0;
    local_138._0_4_ = (undefined4)uStack_1d0;
    local_138._4_4_ = (undefined4)((ulong)uStack_1d0 >> 0x20);
    local_d8 = (undefined4)local_138;
    uStack_d4 = local_138._4_4_;
    uStack_d0 = uStack_130;
    uStack_cc = uStack_12c;
    local_138 = lVar8;
  }
  else {
    puVar9 = (undefined8 *)::alloc::alloc::Global::alloc_impl(0x10);
    if (puVar9 == (undefined8 *)0x0) goto LAB_001c0e82;
    *puVar9 = 1;
    puVar9[1] = 0xffffffffffffffff;
    ::alloc::slice::hack::into_vec(&local_d8,puVar9,1);
  }
                    /* try { // try from 001c0920 to 001c0966 has its CatchHandler @ 001c0f1c */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_1d8,param_2,"format",6)
  ;
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("format",6,&local_1d8);
  if (lVar8 == 0) {
    local_e8 = local_e8 & 0xffffffffffff0000;
    local_138 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    local_118 = 0;
    uStack_110 = 1;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 1;
    uStack_f0 = 0;
LAB_001c0a05:
                    /* try { // try from 001c0a05 to 001c0b20 has its CatchHandler @ 001c0f0a */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_1d8,param_2,"delimiter",9);
    uVar10 = clap_builder::parser::error::MatchesError::unwrap("delimiter",9,&local_1d8);
    uStack_1d0 = -0x8000000000000000;
    uStack_1c8 = (undefined *)CONCAT44(uStack_3c,local_40);
    local_1d8 = (undefined **)0x0;
    core::option::Option<T>::map_or(&local_1f8,uVar10,&local_1d8);
    local_b8 = uStack_1f0;
    lVar8 = local_b8;
    uStack_b0 = local_1e8;
    uVar10 = uStack_b0;
    local_a8 = local_1e0;
    local_b8._0_4_ = (undefined4)uStack_1f0;
    local_b8._4_4_ = (undefined4)((ulong)uStack_1f0 >> 0x20);
    uStack_b0._0_4_ = (undefined4)local_1e8;
    uStack_b0._4_4_ = (undefined4)((ulong)local_1e8 >> 0x20);
    local_b8 = lVar8;
    uStack_b0 = uVar10;
    if (local_1f8 == 0) {
      local_78 = local_1e0;
      local_88 = (undefined4)local_b8;
      uStack_84 = local_b8._4_4_;
      uStack_80 = (undefined4)uStack_b0;
      uStack_7c = uStack_b0._4_4_;
                    /* try { // try from 001c0b79 to 001c0c96 has its CatchHandler @ 001c0ef8 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_1d8,param_2,"round",5);
      lVar8 = clap_builder::parser::error::MatchesError::unwrap("round",5,&local_1d8);
      if (lVar8 == 0) {
                    /* try { // try from 001c0e92 to 001c0e9e has its CatchHandler @ 001c0ef8 */
        uVar10 = core::option::unwrap_failed(&PTR_s_src_uu_numfmt_src_numfmt_rs_00235990);
      }
      else {
        uVar10 = *(undefined8 *)(lVar8 + 8);
        uVar1 = *(undefined8 *)(lVar8 + 0x10);
        cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar10,uVar1,"up",2);
        if (cVar5 == '\0') {
          cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar10,uVar1,&DAT_0011589c,4);
          uVar6 = 1;
          if (cVar5 == '\0') {
            cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar10,uVar1,"from-zero",9);
            uVar6 = 2;
            if (cVar5 == '\0') {
              cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (uVar10,uVar1,"towards-zero",0xc);
              uVar6 = 3;
              if (cVar5 == '\0') {
                cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (uVar10,uVar1,"nearest",7);
                uVar6 = 4;
                if (cVar5 == '\0') {
                  local_1d8 = &PTR_s_internal_error__entered_unreacha_002358f0;
                  uStack_1d0 = 1;
                  uStack_1c8 = local_200;
                  uStack_1c0 = 0;
                  uStack_1b8 = 0;
                    /* try { // try from 001c0ed7 to 001c0ee8 has its CatchHandler @ 001c0ef8 */
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_fmt(&local_1d8,&PTR_s_src_uu_numfmt_src_numfmt_rs_002359a8)
                  ;
                }
              }
            }
          }
        }
        else {
          uVar6 = 0;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                  (&local_1d8,param_2,"suffix",6);
        lVar8 = clap_builder::parser::error::MatchesError::unwrap("suffix",6,&local_1d8);
        if (lVar8 == 0) {
          local_1f8 = -0x8000000000000000;
          uStack_1f0 = CONCAT44(uStack_3c,local_40);
          local_1e8 = CONCAT44(uStack_34,uStack_38);
        }
        else {
          _<alloc::string::String_as_core::clone::Clone>::clone(&local_1d8,lVar8);
          local_1e8 = uStack_1c8;
          local_1f8 = (long)local_1d8;
          uStack_1f0 = uStack_1d0;
        }
                    /* try { // try from 001c0cbf to 001c0d13 has its CatchHandler @ 001c0ee9 */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                  (&local_1d8,param_2,"invalid",7);
        lVar8 = clap_builder::parser::error::MatchesError::unwrap("invalid",7,&local_1d8);
        if (lVar8 != 0) {
          _<uu_numfmt::options::InvalidModes_as_core::str::traits::FromStr>::from_str
                    (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
          uVar7 = core::result::Result<T,E>::unwrap(&local_1d8);
          local_170 = local_c8;
          local_180 = CONCAT44(uStack_d4,local_d8);
          uStack_178 = CONCAT44(uStack_cc,uStack_d0);
          local_168 = CONCAT44(uStack_84,local_88);
          uStack_160 = CONCAT44(uStack_7c,uStack_80);
          local_158 = local_78;
          local_150 = local_1f8;
          lStack_148 = uStack_1f0;
          local_140 = local_1e8;
          uStack_1d0 = CONCAT44(uStack_12c,uStack_130);
          local_1d8 = (undefined **)local_138;
          uStack_1c8 = (undefined *)CONCAT44(uStack_124,uStack_128);
          uStack_1c0 = uStack_120;
          uStack_1b8 = local_118;
          uStack_1b0 = (undefined4)uStack_110;
          uStack_1ac = uStack_110._4_4_;
          local_1a8 = local_108;
          uStack_1a0 = uStack_100;
          local_198 = (undefined4)local_f8;
          uStack_194 = local_f8._4_4_;
          uStack_190 = (undefined4)uStack_f0;
          uStack_18c = uStack_f0._4_4_;
          local_188 = local_e8;
          (*(code *)PTR_memcpy_002398d8)(param_1,&local_1d8,0xa0);
          *(undefined4 *)(param_1 + 0x14) = local_58;
          *(undefined4 *)((long)param_1 + 0xa4) = uStack_54;
          *(undefined4 *)(param_1 + 0x15) = local_68;
          *(undefined4 *)((long)param_1 + 0xac) = uStack_64;
          *(undefined *)(param_1 + 0x16) = uVar3;
          *(char *)((long)param_1 + 0xb1) = cVar4;
          param_1[0x17] = local_90;
          param_1[0x18] = local_98;
          *(undefined *)(param_1 + 0x19) = uVar7;
          *(undefined *)((long)param_1 + 0xc9) = uVar6;
          return param_1;
        }
                    /* try { // try from 001c0ea1 to 001c0ead has its CatchHandler @ 001c0ee9 */
        uVar10 = core::option::unwrap_failed(&PTR_s_src_uu_numfmt_src_numfmt_rs_002359c0);
      }
                    /* catch() { ... } // from try @ 001c0cbf with catch @ 001c0ee9
                       catch() { ... } // from try @ 001c0ea1 with catch @ 001c0ee9 */
                    /* try { // try from 001c0eec to 001c0f2b has its CatchHandler @ 001c0f34 */
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_1f8);
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_88);
      core::ptr::drop_in_place<uu_numfmt::options::FormatOptions>(&local_138);
      core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::ranges::Range>>(&local_d8);
      puVar9 = (undefined8 *)_Unwind_Resume(uVar10);
      return puVar9;
    }
    param_1[3] = local_1e0;
    uVar11 = (undefined4)local_b8;
    uVar12 = local_b8._4_4_;
    uVar13 = (undefined4)uStack_b0;
    uVar14 = uStack_b0._4_4_;
  }
  else {
    _<uu_numfmt::options::FormatOptions_as_core::str::traits::FromStr>::from_str
              (&local_1d8,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    local_1f8 = uStack_1d0;
    lVar8 = local_1f8;
    uStack_1f0 = (long)uStack_1c8;
    lVar2 = uStack_1f0;
    local_1e8 = uStack_1c0;
    local_1f8._0_4_ = (undefined4)uStack_1d0;
    local_1f8._4_4_ = (undefined4)((ulong)uStack_1d0 >> 0x20);
    uStack_1f0._0_4_ = SUB84(uStack_1c8,0);
    uStack_1f0._4_4_ = (undefined4)((ulong)uStack_1c8 >> 0x20);
    local_1f8 = lVar8;
    uStack_1f0 = lVar2;
    if (local_1d8 == (undefined **)0x2) {
      param_1[3] = uStack_1c0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_1f8;
      *(undefined4 *)((long)param_1 + 0xc) = local_1f8._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1f0;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_1f0._4_4_;
      *param_1 = 2;
      goto LAB_001c0b47;
    }
    local_e8 = local_188;
    local_118 = uStack_1b8;
    uStack_110 = CONCAT44(uStack_1ac,uStack_1b0);
    local_f8 = CONCAT44(uStack_194,local_198);
    uStack_f0 = CONCAT44(uStack_18c,uStack_190);
    local_108 = local_1a8;
    uStack_100 = uStack_1a0;
    uStack_130 = (undefined4)local_1f8;
    uStack_12c = local_1f8._4_4_;
    uStack_128 = (undefined4)uStack_1f0;
    uStack_124 = uStack_1f0._4_4_;
    uStack_120 = uStack_1c0;
    local_138 = (long)local_1d8;
    if ((cVar4 == '\x05') || ((char)local_188 == '\0')) goto LAB_001c0a05;
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec
              (&local_1d8,"grouping cannot be combined with --to",0x25);
    param_1[3] = uStack_1c8;
    uVar11 = (undefined4)local_1d8;
    uVar12 = local_1d8._4_4_;
    uVar13 = (undefined4)uStack_1d0;
    uVar14 = uStack_1d0._4_4_;
  }
  *(undefined4 *)(param_1 + 1) = uVar11;
  *(undefined4 *)((long)param_1 + 0xc) = uVar12;
  *(undefined4 *)(param_1 + 2) = uVar13;
  *(undefined4 *)((long)param_1 + 0x14) = uVar14;
  *param_1 = 2;
                    /* try { // try from 001c0b3a to 001c0b46 has its CatchHandler @ 001c0f1c */
  core::ptr::drop_in_place<uu_numfmt::options::FormatOptions>(&local_138);
LAB_001c0b47:
  core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::ranges::Range>>(&local_d8);
  return param_1;
}