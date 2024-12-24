undefined  [16] __rustcall uu_rm::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char **ppcVar2;
  code *pcVar3;
  bool bVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  char cVar7;
  char cVar8;
  undefined uVar9;
  byte bVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined uVar15;
  char *pcVar16;
  undefined auVar17 [16];
  char local_6b7;
  undefined local_6b6;
  byte local_6b5;
  char local_6b4;
  undefined local_6b3;
  undefined local_6b2;
  undefined local_6b1;
  code *local_6b0;
  char *local_6a8;
  char **local_6a0;
  code *pcStack_698;
  char *local_690;
  long local_688;
  char *local_680;
  code *local_678;
  char *local_670;
  char **local_668;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined8 local_608;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  char *local_5e8;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  code *local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  char **local_5b8;
  code *pcStack_5b0;
  char **local_5a8;
  undefined8 uStack_5a0;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined local_2f8 [8];
  undefined8 uStack_2f0;
  char *local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  (*(code *)PTR_uu_app_0022bad0)(&local_5c8);
  clap_builder::builder::command::Command::after_help
            (local_2f8,&local_5c8,
             "By default, rm does not remove directories.  Use the --recursive (-r or -R)\noption to remove each listed directory, too, along with all of its contents\n\nTo remove a file whose name starts with a \'-\', for example \'-foo\',\nuse one of these commands:\nrm -- -foo\n\nrm ./-foo\n\nNote that if you use rm to remove a file, it might be possible to recover\nsome of its contents, given sufficient expertise and/or time.  For greater\nassurance that the contents are truly unrecoverable, consider using shred."
             ,0x1ed);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_638,local_2f8,param_1,param_2);
  if (local_638 == (char *)0x8000000000000000) {
    auVar17 = (*(code *)PTR_from_0022bad8)();
    return auVar17;
  }
  local_640 = local_608;
  local_650 = local_618;
  uStack_64c = uStack_614;
  uStack_648 = uStack_610;
  uStack_644 = uStack_60c;
  local_660 = (undefined4)uStack_628;
  uStack_65c = uStack_628._4_4_;
  uStack_658 = uStack_620;
  uStack_654 = uStack_61c;
  local_670 = local_638;
  local_668 = uStack_630;
  uVar13 = *(undefined8 *)PTR_ARG_FILES_0022bae0;
  uVar1 = *(undefined8 *)(PTR_ARG_FILES_0022bae0 + 8);
                    /* try { // try from 0016ad0c to 0016ada1 has its CatchHandler @ 0016b5d0 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_5c8,&local_670,uVar13,uVar1);
  clap_builder::parser::error::MatchesError::unwrap(local_2f8,uVar13,uVar1,&local_5c8);
  if (local_2f8 == (undefined  [8])0x0) {
LAB_0016adbf:
    local_6a8 = (char *)0x0;
    local_6a0 = (char **)&DAT_00000008;
    pcStack_698 = (code *)0x0;
  }
  else {
    local_598 = local_2c8;
    uStack_594 = uStack_2c4;
    uStack_590 = uStack_2c0;
    uStack_58c = uStack_2bc;
    local_5a8 = (char **)local_2d8;
    uStack_5a0 = (code *)CONCAT44(uStack_2cc,uStack_2d0);
    local_5b8 = (char **)local_2e8;
    pcStack_5b0 = (code *)uStack_2e0;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
              (&local_638,&local_5c8);
    local_5c8 = uStack_630;
    uStack_5c0 = uStack_628;
    if (local_638 == (char *)0x8000000000000000) goto LAB_0016adbf;
    local_6a0 = uStack_630;
    pcStack_698 = uStack_628;
    local_6a8 = local_638;
  }
  uVar13 = *(undefined8 *)PTR_OPT_FORCE_0022bae8;
  uVar1 = *(undefined8 *)(PTR_OPT_FORCE_0022bae8 + 8);
                    /* try { // try from 0016adfc to 0016b2e4 has its CatchHandler @ 0016b5d5 */
  cVar7 = (*(code *)PTR_get_flag_0022baf0)(&local_670,uVar13,uVar1);
  if (cVar7 == '\0') {
    if (pcStack_698 == (code *)0x0) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_2f8);
      local_5b8 = (char **)local_2e8;
      local_5c8 = (undefined **)local_2f8;
      uStack_5c0 = uStack_2f0;
      pcStack_5b0 = (code *)CONCAT44(pcStack_5b0._4_4_,1);
      uVar13 = ::alloc::boxed::Box<T>::new(&local_5c8);
      auVar17._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00225358;
      auVar17._0_8_ = uVar13;
      goto LAB_0016b4a0;
    }
LAB_0016aec6:
    cVar8 = (*(code *)PTR_get_flag_0022baf0)
                      (&local_670,*(undefined8 *)PTR_OPT_PROMPT_0022bb00,
                       *(undefined8 *)(PTR_OPT_PROMPT_0022bb00 + 8));
    if (cVar8 == '\0') {
      cVar8 = (*(code *)PTR_get_flag_0022baf0)
                        (&local_670,*(undefined8 *)PTR_OPT_PROMPT_MORE_0022bb08,
                         *(undefined8 *)(PTR_OPT_PROMPT_MORE_0022bb08 + 8));
      bVar4 = true;
      uVar15 = 1;
      if (cVar8 == '\0') {
        uVar13 = *(undefined8 *)PTR_OPT_INTERACTIVE_0022bb10;
        uVar1 = *(undefined8 *)(PTR_OPT_INTERACTIVE_0022bb10 + 8);
        cVar8 = (*(code *)PTR_contains_id_0022bb18)(&local_670,uVar13,uVar1);
        if (cVar8 == '\0') {
          uVar15 = 3;
          bVar4 = false;
        }
        else {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                    (&local_5c8,&local_670,uVar13,uVar1);
          lVar12 = clap_builder::parser::error::MatchesError::unwrap(uVar13,uVar1,&local_5c8);
          if (lVar12 == 0) {
                    /* try { // try from 0016b5a0 to 0016b5ac has its CatchHandler @ 0016b5d5 */
            (*(code *)PTR_unwrap_failed_0022bb88)(&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_002253c8);
            goto LAB_0016b5ad;
          }
          pcVar16 = *(char **)(lVar12 + 8);
          ppcVar2 = *(char ***)(lVar12 + 0x10);
          cVar8 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(pcVar16,ppcVar2,"never",5);
          bVar4 = false;
          uVar15 = 0;
          if (cVar8 == '\0') {
            cVar8 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (pcVar16,ppcVar2,&DAT_00115654,4);
            bVar4 = true;
            uVar15 = 1;
            if (cVar8 == '\0') {
              cVar8 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (pcVar16,ppcVar2,"alwaysInvalid argument to interactive ()",6);
              if (cVar8 == '\0') {
                local_2f8 = (undefined  [8])&local_638;
                uStack_2f0 = _<&T_as_core::fmt::Display>::fmt;
                local_5c8 = (undefined **)0x2253e0;
                uStack_5c0 = (code *)0x2;
                local_5a8 = (char **)0x0;
                pcStack_5b0 = (code *)0x1;
                local_638 = pcVar16;
                uStack_630 = ppcVar2;
                local_5b8 = (char **)local_2f8;
                core::option::Option<T>::map_or_else(&local_5f8,&local_5c8);
                pcStack_5b0 = (code *)CONCAT44(pcStack_5b0._4_4_,1);
                local_5c8 = (undefined **)CONCAT44(uStack_5f4,local_5f8);
                uStack_5c0 = (code *)CONCAT44(uStack_5ec,uStack_5f0);
                local_5b8 = (char **)local_5e8;
                uVar13 = ::alloc::boxed::Box<T>::new(&local_5c8);
                auVar17._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00225438;
                auVar17._0_8_ = uVar13;
                goto LAB_0016b4a0;
              }
              goto LAB_0016aee3;
            }
          }
        }
      }
    }
    else {
LAB_0016aee3:
      bVar4 = false;
      uVar15 = 2;
    }
  }
  else {
    auVar17 = (*(code *)PTR_index_of_0022baf8)(&local_670,uVar13,uVar1);
    local_638 = auVar17._8_8_;
    if (auVar17._0_8_ == 0) {
      local_638 = (char *)0x0;
    }
    local_5c8 = *(undefined ***)PTR_OPT_PROMPT_0022bb00;
    uStack_5c0 = *(code **)(PTR_OPT_PROMPT_0022bb00 + 8);
    local_5b8 = *(char ***)PTR_OPT_PROMPT_MORE_0022bb08;
    pcStack_5b0 = *(code **)(PTR_OPT_PROMPT_MORE_0022bb08 + 8);
    local_5a8 = *(char ***)PTR_OPT_INTERACTIVE_0022bb10;
    uStack_5a0 = *(code **)(PTR_OPT_INTERACTIVE_0022bb10 + 8);
    uStack_2f0 = (code *)&local_598;
    local_2f8 = (undefined  [8])&local_5c8;
    cVar8 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                      (local_2f8,&local_670,&local_638);
    bVar4 = false;
    uVar15 = 0;
    if (cVar8 != '\0') goto LAB_0016aec6;
  }
  uVar9 = (*(code *)PTR_get_flag_0022baf0)
                    (&local_670,*(undefined8 *)PTR_OPT_ONE_FILE_SYSTEM_0022bb20,
                     *(undefined8 *)(PTR_OPT_ONE_FILE_SYSTEM_0022bb20 + 8));
  bVar10 = (*(code *)PTR_get_flag_0022baf0)
                     (&local_670,*(undefined8 *)PTR_OPT_NO_PRESERVE_ROOT_0022bb28,
                      *(undefined8 *)(PTR_OPT_NO_PRESERVE_ROOT_0022bb28 + 8));
  cVar8 = (*(code *)PTR_get_flag_0022baf0)
                    (&local_670,*(undefined8 *)PTR_OPT_RECURSIVE_0022bb30,
                     *(undefined8 *)(PTR_OPT_RECURSIVE_0022bb30 + 8));
  uVar11 = (*(code *)PTR_get_flag_0022baf0)
                     (&local_670,*(undefined8 *)PTR_OPT_DIR_0022bb38,
                      *(undefined8 *)(PTR_OPT_DIR_0022bb38 + 8));
  pcVar16 = (char *)(ulong)uVar11;
  local_6b2 = (*(code *)PTR_get_flag_0022baf0)
                        (&local_670,*(undefined8 *)PTR_OPT_VERBOSE_0022bb40,
                         *(undefined8 *)(PTR_OPT_VERBOSE_0022bb40 + 8));
  local_6b5 = bVar10 ^ 1;
  local_6b3 = (undefined)uVar11;
  local_6b7 = cVar7;
  local_6b6 = uVar9;
  local_6b4 = cVar8;
  local_6b1 = uVar15;
  if (bVar4) {
    if (cVar8 == '\0') {
      if (pcStack_698 < (code *)0x4) goto LAB_0016b44d;
      local_690 = "arguments";
      local_688 = 9;
      local_678 = (code *)0x1;
      local_680 = "?";
    }
    else {
      local_690 = "argumentNoEquals";
      if (pcStack_698 >= (code *)0x2) {
        local_690 = "arguments";
      }
      local_688 = 9 - (ulong)(pcStack_698 < (code *)0x2);
      local_678 = (code *)0xd;
      local_680 = " recursively?";
    }
    local_6b0 = pcStack_698;
    local_5c8 = &local_6b0;
    uStack_5c0 = (code *)PTR_fmt_0022bb48;
    pcStack_5b0 = _<&T_as_core::fmt::Display>::fmt;
    uStack_5a0 = _<&T_as_core::fmt::Display>::fmt;
    local_2f8 = (undefined  [8])&PTR_s_remove_002254a8;
    uStack_2f0 = (code *)0x3;
    local_2d8 = 0;
    local_2e8 = (char *)&local_5c8;
    uStack_2e0 = 3;
    pcVar16 = local_2f8;
    local_5b8 = &local_690;
    local_5a8 = &local_680;
    core::option::Option<T>::map_or_else(&local_5e0,pcVar16);
    local_638 = (char *)CONCAT44(uStack_5dc,local_5e0);
    uStack_630 = (char **)CONCAT44(uStack_5d4,uStack_5d8);
    uStack_628 = local_5d0;
                    /* try { // try from 0016b305 to 0016b43b has its CatchHandler @ 0016b5be */
    _local_2f8 = (*(code *)PTR_util_name_0022bab0)();
    local_678 = _<&T_as_core::fmt::Display>::fmt;
    local_5c8 = (undefined **)0x2252d8;
    uStack_5c0 = (code *)0x2;
    local_5a8 = (char **)0x0;
    pcStack_5b0 = (code *)0x1;
    local_680 = pcVar16;
    local_5b8 = &local_680;
    (*(code *)PTR__eprint_0022bab8)(&local_5c8);
    local_2f8 = (undefined  [8])&local_638;
    uStack_2f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_5c8 = (undefined **)0x1151f0;
    uStack_5c0 = (code *)0x1;
    local_5a8 = (char **)0x0;
    pcStack_5b0 = (code *)0x1;
    local_5b8 = (char **)pcVar16;
    (*(code *)PTR__eprint_0022bab8)(&local_5c8);
    local_5c8 = &PTR_s_UnknownErrnoEPERMENOENTESRCHEINT_002254d8;
    uStack_5c0 = (code *)&DAT_00000001;
    local_5b8 = (char **)&DAT_00000008;
    pcStack_5b0 = (code *)0x0;
    local_5a8 = (char **)0x0;
    (*(code *)PTR__eprint_0022bab8)(&local_5c8);
    local_6b0 = (code *)PTR_INSTANCE_0022bb50;
    pcVar14 = (char *)(*(code *)PTR_flush_0022bb58)(&local_6b0);
    if (pcVar14 != (char *)0x0) {
      local_690 = pcVar14;
                    /* try { // try from 0016b4d1 to 0016b59d has its CatchHandler @ 0016b5af */
      _local_2f8 = (*(code *)PTR_util_name_0022bab0)();
      local_678 = _<&T_as_core::fmt::Display>::fmt;
      local_5c8 = (undefined **)0x2252d8;
      uStack_5c0 = (code *)0x2;
      local_5a8 = (char **)0x0;
      pcStack_5b0 = (code *)0x1;
      local_680 = pcVar16;
      local_5b8 = &local_680;
      (*(code *)PTR__eprint_0022bab8)(&local_5c8);
      uStack_2f0 = (code *)PTR_fmt_0022bb78;
      local_5c8 = (undefined **)&DAT_002252f8;
      uStack_5c0 = (code *)0x2;
      local_5a8 = (char **)0x0;
      pcStack_5b0 = (code *)0x1;
      local_5b8 = (char **)pcVar16;
      local_2f8 = (undefined  [8])&local_690;
      (*(code *)PTR__eprint_0022bab8)(&local_5c8);
      (*(code *)PTR_exit_0022bb80)(1);
LAB_0016b5ad:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    cVar7 = (*(code *)PTR_read_yes_0022bb60)();
    if (cVar7 == '\0') {
                    /* try { // try from 0016b491 to 0016b49d has its CatchHandler @ 0016b5d5 */
      core::ptr::drop_in_place<alloc::string::String>(&local_638);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = pcVar16;
      auVar17 = auVar6 << 0x40;
      goto LAB_0016b4a0;
    }
                    /* try { // try from 0016b440 to 0016b470 has its CatchHandler @ 0016b5d5 */
    core::ptr::drop_in_place<alloc::string::String>(&local_638);
  }
LAB_0016b44d:
  cVar7 = (*(code *)PTR_remove_0022bb68)(local_6a0,pcStack_698,&local_6b7);
  if (cVar7 == '\0') {
                    /* try { // try from 0016b479 to 0016b482 has its CatchHandler @ 0016b5d0 */
    core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&local_6a8);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_670);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = pcVar16;
    return auVar5 << 0x40;
  }
  auVar17 = (*(code *)PTR_from_0022bb70)(1);
LAB_0016b4a0:
                    /* try { // try from 0016b4a0 to 0016b4a9 has its CatchHandler @ 0016b5d0 */
  core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&local_6a8);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_670);
  return auVar17;
}