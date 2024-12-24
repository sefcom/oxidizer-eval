undefined8 * __rustcall uu_cp::Options::from_matches(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  byte bVar15;
  undefined uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined extraout_DL;
  undefined8 uVar19;
  ulong uVar20;
  undefined uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined4 local_2ec;
  undefined2 local_2e8;
  undefined4 local_2e4;
  undefined local_2e0;
  undefined local_2df;
  undefined local_2c4;
  undefined4 local_2c0;
  undefined2 local_2bc;
  undefined local_2ba;
  undefined local_2b9;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined2 local_2b0;
  byte local_2ae;
  byte local_2ad;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 *puStack_2a0;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  char *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  code *pcStack_240;
  undefined8 local_238;
  undefined local_228 [16];
  undefined local_218 [8];
  undefined8 local_210;
  undefined8 uStack_208;
  long local_200;
  undefined **local_1f8;
  undefined8 *puStack_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 uStack_1a0;
  long local_198;
  long local_188;
  undefined local_180;
  undefined7 uStack_17f;
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined6 local_120;
  undefined2 uStack_11a;
  long local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  code *pcStack_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70 [2];
  char *local_68;
  undefined local_48 [24];
  
  puVar17 = (undefined8 *)::alloc::alloc::Global::alloc_impl();
  if (puVar17 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    ::alloc::alloc::handle_alloc_error(8,0x10);
  }
  *puVar17 = &DAT_0012bdb1;
  puVar17[1] = 7;
  ::alloc::slice::hack::into_vec(local_48,puVar17,1);
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
            (&local_2a8,local_48);
  auVar24 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                      (&local_2a8);
  if (auVar24._0_8_ != 0) {
    do {
      uVar23 = auVar24._8_8_;
                    /* try { // try from 00201263 to 0020127d has its CatchHandler @ 00202317 */
      uVar19 = auVar24._0_8_;
      cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                        (param_2,uVar19,uVar23);
      if ((cVar2 != '\0') &&
         (cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source
                            (param_2,uVar19,uVar23), cVar2 == '\x02')) {
                    /* try { // try from 00201282 to 00201294 has its CatchHandler @ 002022c6 */
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_228,uVar19,uVar23);
        param_1[4] = local_218;
        param_1[2] = local_228._0_8_;
        param_1[3] = local_228._8_8_;
        param_1[1] = 10;
        *param_1 = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&local_2a8);
        return param_1;
      }
      auVar24 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::
                next(&local_2a8);
    } while (auVar24._0_8_ != 0);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&local_2a8);
  cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"recursive",9);
  cVar3 = '\x01';
  if (cVar2 == '\0') {
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"archive",7);
  }
  uucore::features::backup_control::determine_backup_mode(&local_188,param_2);
  if (local_188 != 0) {
    pcStack_240 = (code *)CONCAT71(uStack_17f,local_180);
    local_248 = (undefined8 *)local_188;
    local_228._0_8_ = &local_248;
    local_228._8_8_ = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
    local_2a8 = (undefined **)&DAT_0011e8a0;
    puStack_2a0 = (undefined8 *)0x1;
    uStack_288 = 0;
    uStack_284 = 0;
    local_298 = (undefined8 *)local_228;
    uStack_290 = 1;
    uStack_28c = 0;
                    /* try { // try from 002013a1 to 002013b2 has its CatchHandler @ 002022ca */
    core::option::Option<T>::map_or_else(&local_b8,&local_2a8);
    param_1[4] = local_a8;
    param_1[2] = local_b8;
    param_1[3] = uStack_b0;
    param_1[1] = 0xb;
    *param_1 = 0x8000000000000000;
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
              (local_248,pcStack_240);
    return param_1;
  }
  uVar4 = uucore::features::update_control::determine_update_mode(param_2);
  uucore::features::backup_control::determine_backup_suffix(&local_160,param_2);
                    /* try { // try from 00201426 to 0020149c has its CatchHandler @ 002022e9 */
  uVar5 = OverwriteMode::from_matches(param_2);
  uVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,"no-target-directory",0x13);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2a8,param_2,"target-directory",0x10);
  lVar18 = clap_builder::parser::error::MatchesError::unwrap("target-directory",0x10,&local_2a8);
  if (lVar18 == 0) {
    local_1f8 = (undefined **)0x8000000000000000;
LAB_00201527:
    local_1c0 = 0;
    local_1b8 = 8;
    local_1b0 = 0;
    local_2a8 = (undefined **)0x11e158;
    puStack_2a0 = (undefined8 *)&DAT_00000008;
    local_298._0_4_ = 0x12ca48;
    local_298._4_4_ = 0;
    uStack_290 = 0xb;
    uStack_28c = 0;
    uStack_288 = 0x12cb52;
    uStack_284 = 0;
    uStack_280 = 7;
    local_278 = "preserve-default-attributes";
    uStack_270 = 0x1b;
    local_268 = "no-dereference-preserve-links";
    local_260 = 0x1d;
    local_258 = 0;
    local_250 = 5;
    while( true ) {
                    /* try { // try from 00201600 to 0020178d has its CatchHandler @ 00202326 */
      auVar24 = _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>::next
                          (&local_2a8);
      uVar19 = auVar24._8_8_;
      lVar18 = auVar24._0_8_;
      if (lVar18 == 0) break;
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (local_70,param_2,lVar18,uVar19);
      auVar25 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of
                          (param_2,lVar18,uVar19);
      if (((local_70[0] == 2) && (auVar25._0_8_ == 1)) && (local_68 != (char *)0x0)) {
        if (*local_68 != '\0') {
          local_210 = (undefined8 *)0x0;
          uStack_208 = 8;
          local_200 = 0;
          local_218 = (undefined  [8])auVar25._8_8_;
          local_228 = auVar24;
          ::alloc::vec::Vec<T,A>::push(&local_1c0,local_228);
        }
      }
      else {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences
                  (local_228,param_2,lVar18,uVar19);
        clap_builder::parser::error::MatchesError::unwrap(&local_108,lVar18,uVar19,local_228);
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of
                  (&local_f0,param_2,lVar18,uVar19);
        if ((local_108 != 0) && (local_f0 != (undefined8 *)0x0)) {
          local_c8 = local_f8;
          local_d8 = local_108;
          uStack_d0 = uStack_100;
          local_238 = local_e0;
          local_248 = local_f0;
          pcStack_240 = pcStack_e8;
          local_228._0_8_ = &local_248;
          local_228._8_8_ = &local_1c0;
          _local_218 = auVar24;
          core::iter::traits::iterator::Iterator::fold(&local_d8,local_228);
        }
      }
    }
                    /* try { // try from 00201793 to 002017b1 has its CatchHandler @ 002022e4 */
    core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>(&local_2a8);
    ::alloc::slice::_<impl[T]>::sort_by(local_1b8,local_1b0);
    local_2e8 = 0;
    local_2ec = 0;
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (&local_188,&local_1c0);
    _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
              (local_228,&local_188);
    uVar22 = 0;
    uVar20 = 0;
    local_2e4 = 0;
    if (local_210 != (undefined8 *)0x8000000000000000) {
      local_2e4 = 0;
      uVar20 = 0;
      uVar22 = 0;
      do {
        uVar23 = local_228._8_8_;
        uVar19 = local_228._0_8_;
        local_198 = local_200;
        local_1a8 = local_210;
        uStack_1a0 = uStack_208;
                    /* try { // try from 00201aac to 00201b66 has its CatchHandler @ 002022f8 */
        cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (local_228._0_8_,local_228._8_8_,"archive",7);
        if (cVar2 == '\0') {
          cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (uVar19,uVar23,"preserve-default-attributes",0x1b);
          uVar8 = (undefined)uVar22;
          uVar7 = (undefined)uVar20;
          if (cVar2 != '\0') {
            local_2a8._0_7_ = CONCAT16(uVar8,CONCAT24(local_2e8,local_2ec));
            local_2a8 = (undefined **)CONCAT17(uVar7,(undefined7)local_2a8);
            puStack_2a0 = (undefined8 *)CONCAT44(puStack_2a0._4_4_,local_2e4);
            Attributes::union(&local_248,&local_2a8);
LAB_00201ba5:
            local_2ec = (undefined4)local_248;
            local_2e8 = local_248._4_2_;
            uVar22 = (ulong)local_248 >> 0x30 & 0xff;
            uVar20 = (ulong)local_248 >> 0x38;
            local_2e4 = pcStack_240._0_4_;
            goto LAB_00201bd9;
          }
          cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (uVar19,uVar23,"no-dereference-preserve-links",0x1d);
          if (cVar2 != '\0') {
            local_2a8._0_7_ = CONCAT16(uVar8,CONCAT24(local_2e8,local_2ec));
            local_2a8 = (undefined **)CONCAT17(uVar7,(undefined7)local_2a8);
            puStack_2a0 = (undefined8 *)CONCAT44(puStack_2a0._4_4_,local_2e4);
            Attributes::union(&local_248,&local_2a8);
            goto LAB_00201ba5;
          }
                    /* try { // try from 00201c18 to 00201c2e has its CatchHandler @ 002022f8 */
          cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (uVar19,uVar23,"preserveENETDOWN",8);
          if (cVar2 == '\0') {
                    /* try { // try from 00201cc5 to 00201cdb has its CatchHandler @ 002022f8 */
            bVar15 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                               (uVar19,uVar23,"no-preserve",0xb);
            if ((bVar15 & local_198 != 0) != 1) goto LAB_00201bd9;
            local_2bc = local_2e8;
            local_2c0 = local_2ec;
            local_2b8 = local_2e4;
            local_2ba = uVar8;
            local_2b9 = uVar7;
            _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                      (&local_248,&local_1a8);
                    /* try { // try from 00201d2e to 00201d3a has its CatchHandler @ 002022c8 */
            Attributes::parse_iter(&local_2a8,&local_248);
            local_1d0 = puStack_2a0;
            local_1c8 = (undefined4)local_298;
            if (local_2a8 != (undefined **)0xd) {
              *(undefined4 *)(param_1 + 7) = (undefined4)local_278;
              *(undefined4 *)((long)param_1 + 0x3c) = local_278._4_4_;
              *(undefined4 *)(param_1 + 8) = (undefined4)uStack_270;
              *(undefined4 *)((long)param_1 + 0x44) = uStack_270._4_4_;
              *(undefined4 *)((long)param_1 + 0x2c) = uStack_284;
              *(undefined4 *)(param_1 + 6) = (undefined4)uStack_280;
              *(undefined4 *)((long)param_1 + 0x34) = uStack_280._4_4_;
              *(undefined4 *)(param_1 + 7) = (undefined4)local_278;
              *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_290,local_298._4_4_);
              *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_288,uStack_28c);
              *(undefined4 *)(param_1 + 3) = (undefined4)local_298;
              goto LAB_00202256;
            }
            Attributes::diff(&local_2b4,&local_2c0,&local_1d0);
          }
          else {
            local_2bc = local_2e8;
            local_2c0 = local_2ec;
            local_2b8 = local_2e4;
            local_2ba = uVar8;
            local_2b9 = uVar7;
            _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                      (&local_248,&local_1a8);
                    /* try { // try from 00201c73 to 00201c7f has its CatchHandler @ 002022c8 */
            Attributes::parse_iter(&local_2a8,&local_248);
            local_1e0 = puStack_2a0;
            local_1d8 = (undefined4)local_298;
            if (local_2a8 != (undefined **)0xd) {
              *(undefined4 *)(param_1 + 7) = (undefined4)local_278;
              *(undefined4 *)((long)param_1 + 0x3c) = local_278._4_4_;
              *(undefined4 *)(param_1 + 8) = (undefined4)uStack_270;
              *(undefined4 *)((long)param_1 + 0x44) = uStack_270._4_4_;
              *(undefined4 *)((long)param_1 + 0x2c) = uStack_284;
              *(undefined4 *)(param_1 + 6) = (undefined4)uStack_280;
              *(undefined4 *)((long)param_1 + 0x34) = uStack_280._4_4_;
              *(undefined4 *)(param_1 + 7) = (undefined4)local_278;
              *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_290,local_298._4_4_);
              *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_288,uStack_28c);
              *(undefined4 *)(param_1 + 3) = (undefined4)local_298;
LAB_00202256:
              param_1[2] = puStack_2a0;
              param_1[1] = local_2a8;
              *param_1 = 0x8000000000000000;
                    /* try { // try from 0020226b to 00202277 has its CatchHandler @ 002022f3 */
              core::ptr::
              drop_in_place<alloc::vec::into_iter::IntoIter<(usize,&str,alloc::vec::Vec<&alloc::string::String>)>>
                        (&local_188);
              goto LAB_002021b6;
            }
            Attributes::union(&local_2b4,&local_2c0,&local_1e0);
          }
          local_2ec = local_2b4;
          local_2e8 = local_2b0;
          uVar22 = (ulong)local_2ae;
          uVar20 = (ulong)local_2ad;
          local_2e4 = local_2ac;
        }
        else {
          local_2e8 = 0x101;
          local_2ec = 0x1010101;
          local_2e4 = 0x10101;
          uVar22 = 0;
          uVar20 = 0;
LAB_00201bd9:
                    /* try { // try from 00201bd9 to 00201be5 has its CatchHandler @ 002022ee */
          core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&local_1a8);
        }
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                  (local_228,&local_188);
      } while (local_210 != (undefined8 *)0x8000000000000000);
    }
                    /* try { // try from 00201811 to 0020183c has its CatchHandler @ 002022f3 */
    core::ptr::
    drop_in_place<alloc::vec::into_iter::IntoIter<(usize,&str,alloc::vec::Vec<&alloc::string::String>)>>
              (&local_188);
    if ((uVar22 & 1) != 0) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                (local_228,"SELinux was not enabled during the compile time!",0x30);
      uStack_290 = SUB164(_local_218,0);
      uStack_28c = SUB164(_local_218,4);
      puStack_2a0 = (undefined8 *)local_228._0_8_;
      local_2a8 = (undefined **)0x4;
      local_298 = (undefined8 *)local_228._8_8_;
      if ((uVar20 & 1) != 0) {
        param_1[7] = local_278;
        param_1[8] = uStack_270;
        param_1[5] = CONCAT44(uStack_284,uStack_288);
        param_1[6] = uStack_280;
        param_1[3] = local_228._8_8_;
        param_1[4] = local_218;
        param_1[1] = 4;
        param_1[2] = local_228._0_8_;
        *param_1 = 0x8000000000000000;
        goto LAB_002021b6;
      }
                    /* try { // try from 0020186c to 00201875 has its CatchHandler @ 0020228d */
      show_error_if_needed(&local_2a8);
                    /* try { // try from 00201876 to 00201a4a has its CatchHandler @ 002022f3 */
      core::ptr::drop_in_place<uu_cp::Error>(&local_2a8);
    }
    uVar7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,"attributes-only",0xf);
    uVar8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,"copy-contents",0xd);
    uVar9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,"cli-symbolic-links",0x12);
    uVar10 = CopyMode::from_matches(param_2);
    cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,"no-dereference",0xe);
    if (cVar2 == '\0') {
      cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                        (param_2,"no-dereference-preserve-links",0x1d);
      if (cVar2 != '\0') goto LAB_0020193a;
      cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"archive",7);
      if (cVar2 != '\0') goto LAB_0020193a;
      local_2e0 = 1;
      if (cVar3 != '\0') {
        cVar2 = CopyMode::from_matches(param_2);
        if (cVar2 != '\0') goto LAB_0020193a;
      }
    }
    else {
LAB_0020193a:
      local_2e0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                            (param_2,"dereference",0xb);
    }
    uVar11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                       (param_2,"one-file-system",0xf);
    uVar12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"parents",7);
    uVar13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"debug",5);
    cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"verbose",7);
    local_2df = 1;
    if (cVar2 == '\0') {
      local_2df = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                            (param_2,"debug",5);
    }
    uVar14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                       (param_2,"strip-trailing-slashes",0x16);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_2a8,param_2,"reflink",7);
    lVar18 = clap_builder::parser::error::MatchesError::unwrap("reflink",7,&local_2a8);
    local_2c4 = 1;
    if (lVar18 == 0) {
LAB_00201e37:
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_2a8,param_2,"sparse",6);
      lVar18 = clap_builder::parser::error::MatchesError::unwrap("sparse",6,&local_2a8);
      uVar21 = 1;
      if (lVar18 == 0) {
LAB_00201edb:
        local_218 = (undefined  [8])local_150;
        local_228._0_8_ = local_160;
        local_228._8_8_ = uStack_158;
        local_298._0_4_ = (undefined4)local_1e8;
        local_298._4_4_ = (undefined4)((ulong)local_1e8 >> 0x20);
        local_2a8 = local_1f8;
        puStack_2a0 = puStack_1f0;
                    /* try { // try from 00201f17 to 00201f2b has its CatchHandler @ 002022a7 */
        uVar16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                           (param_2,"progress",8);
        local_120 = (undefined6)CONCAT44(local_298._4_4_,(undefined4)local_298);
        uStack_11a = (undefined2)((uint)local_298._4_4_ >> 0x10);
        *(ulong *)((long)param_1 + 0x2e) = CONCAT26(local_2e8,CONCAT42(local_2ec,uStack_11a));
        param_1[4] = puStack_2a0;
        param_1[5] = CONCAT26(uStack_11a,local_120);
        param_1[2] = local_218;
        param_1[3] = local_2a8;
        *param_1 = local_228._0_8_;
        param_1[1] = local_228._8_8_;
        *(char *)((long)param_1 + 0x36) = (char)uVar22;
        *(char *)((long)param_1 + 0x37) = (char)uVar20;
        *(undefined4 *)(param_1 + 7) = local_2e4;
        *(undefined *)((long)param_1 + 0x3c) = uVar5;
        *(undefined *)((long)param_1 + 0x3d) = extraout_DL;
        *(ulong *)((long)param_1 + 0x3e) =
             CONCAT26(CONCAT11(uVar14,uVar12),
                      CONCAT24(CONCAT11(uVar11,uVar6),
                               CONCAT13(local_2e0,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))));
        *(char *)((long)param_1 + 0x46) = cVar3;
        *(undefined *)((long)param_1 + 0x47) = uVar13;
        *(undefined *)(param_1 + 9) = local_2df;
        *(undefined *)((long)param_1 + 0x49) = uVar16;
        *(undefined *)((long)param_1 + 0x4a) = uVar21;
        *(undefined *)((long)param_1 + 0x4b) = local_2c4;
        *(undefined *)((long)param_1 + 0x4c) = local_180;
        *(undefined *)((long)param_1 + 0x4d) = uVar4;
        *(undefined *)((long)param_1 + 0x4e) = uVar10;
        return param_1;
      }
      uVar19 = *(undefined8 *)(lVar18 + 8);
      uVar23 = *(undefined8 *)(lVar18 + 0x10);
      local_168 = lVar18;
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar19,uVar23,"always",6);
      if (cVar2 != '\0') {
        uVar21 = 0;
        goto LAB_00201edb;
      }
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar19,uVar23,&DAT_0011e00c,4);
      if (cVar2 != '\0') goto LAB_00201edb;
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar19,uVar23,"never",5);
      uVar21 = 2;
      if (cVar2 != '\0') goto LAB_00201edb;
      local_228._0_8_ = &local_168;
      local_228._8_8_ = _<&T_as_core::fmt::Display>::fmt;
      local_2a8 = &PTR_s_invalid_argument_for__reflink__f_002b55a0;
      puStack_2a0 = (undefined8 *)0x2;
      uStack_288 = 0;
      uStack_284 = 0;
      local_298 = (undefined8 *)local_228;
      uStack_290 = 1;
      uStack_28c = 0;
      core::option::Option<T>::map_or_else(&local_88,&local_2a8);
      param_1[4] = local_78;
    }
    else {
      pcVar1 = *(code **)(lVar18 + 8);
      uVar19 = *(undefined8 *)(lVar18 + 0x10);
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(pcVar1,uVar19,"always",6);
      if (cVar2 != '\0') {
        local_2c4 = 0;
        goto LAB_00201e37;
      }
                    /* try { // try from 00201df7 to 00201ecf has its CatchHandler @ 002022f3 */
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(pcVar1,uVar19,&DAT_0011e00c,4);
      if (cVar2 != '\0') goto LAB_00201e37;
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(pcVar1,uVar19,"never",5);
      local_2c4 = 2;
      if (cVar2 != '\0') goto LAB_00201e37;
      local_228._0_8_ = (long *)0x0;
      local_210 = (undefined8 *)CONCAT71(local_210._1_7_,1);
      local_248 = (undefined8 *)local_228;
      pcStack_240 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_2a8 = &PTR_s_invalid_argument_for__reflink__f_002b5580;
      puStack_2a0 = (undefined8 *)0x2;
      uStack_288 = 0;
      uStack_284 = 0;
      local_298 = &local_248;
      uStack_290 = 1;
      uStack_28c = 0;
                    /* try { // try from 002020ef to 00202181 has its CatchHandler @ 002022f3 */
      local_228._8_8_ = pcVar1;
      local_218 = (undefined  [8])uVar19;
      core::option::Option<T>::map_or_else(&local_a0,&local_2a8);
      param_1[4] = local_90;
      local_88 = local_a0;
      uStack_80 = uStack_98;
    }
    param_1[2] = local_88;
    param_1[3] = uStack_80;
    param_1[1] = 9;
  }
  else {
    _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_2a8,lVar18);
    local_1e8 = CONCAT44(local_298._4_4_,(undefined4)local_298);
    local_1f8 = local_2a8;
    puStack_1f0 = puStack_2a0;
                    /* try { // try from 002014dd to 002014f8 has its CatchHandler @ 0020229f */
    if ((local_2a8 == (undefined **)0x8000000000000000) ||
       (cVar2 = std::path::Path::is_dir(puStack_2a0,local_1e8), cVar2 != '\0')) goto LAB_00201527;
    _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_2a8,&local_1f8);
    param_1[4] = local_298;
    param_1[2] = local_2a8;
    param_1[3] = puStack_2a0;
    param_1[1] = 0xc;
  }
  *param_1 = 0x8000000000000000;
LAB_002021b6:
                    /* try { // try from 002021b6 to 002021c2 has its CatchHandler @ 002022e9 */
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_1f8);
  core::ptr::drop_in_place<alloc::string::String>(&local_160);
  return param_1;
}