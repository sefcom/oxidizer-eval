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
  byte bVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined uVar16;
  char *pcVar17;
  undefined auVar18 [16];
  char local_6b7;
  undefined local_6b6;
  byte local_6b5;
  byte local_6b4;
  undefined local_6b3;
  undefined local_6b2;
  undefined local_6b1;
  char *local_6b0;
  char **local_6a8;
  code *pcStack_6a0;
  code *local_698;
  char *local_690;
  code *local_688;
  char *local_680;
  char **local_678;
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 local_618;
  char *local_608;
  long local_600;
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
  
  (*(code *)PTR_uu_app_0022b708)(&local_5c8);
  clap_builder::builder::command::Command::after_help
            (local_2f8,&local_5c8,
             "By default, rm does not remove directories.  Use the --recursive (-r or -R)\noption to remove each listed directory, too, along with all of its contents\n\nTo remove a file whose name starts with a \'-\', for example \'-foo\',\nuse one of these commands:\nrm -- -foo\n\nrm ./-foo\n\nNote that if you use rm to remove a file, it might be possible to recover\nsome of its contents, given sufficient expertise and/or time.  For greater\nassurance that the contents are truly unrecoverable, consider using shred."
             ,0x1ed);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_648,local_2f8,param_1,param_2);
  if (local_648 == (char *)0x8000000000000000) {
    auVar18 = (*(code *)PTR_from_0022b710)();
    return auVar18;
  }
  local_650 = local_618;
  local_660 = local_628;
  uStack_65c = uStack_624;
  uStack_658 = uStack_620;
  uStack_654 = uStack_61c;
  local_670 = (undefined4)uStack_638;
  uStack_66c = uStack_638._4_4_;
  uStack_668 = uStack_630;
  uStack_664 = uStack_62c;
  local_680 = local_648;
  local_678 = uStack_640;
  uVar14 = *(undefined8 *)PTR_ARG_FILES_0022b718;
  uVar1 = *(undefined8 *)(PTR_ARG_FILES_0022b718 + 8);
                    /* try { // try from 0016ac73 to 0016ad05 has its CatchHandler @ 0016b50d */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_5c8,&local_680,uVar14,uVar1);
  clap_builder::parser::error::MatchesError::unwrap(local_2f8,uVar14,uVar1,&local_5c8);
  if (local_2f8 == (undefined  [8])0x0) {
LAB_0016ad1d:
    local_6b0 = (char *)0x0;
    local_6a8 = (char **)&DAT_00000008;
    pcStack_6a0 = (code *)0x0;
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
              (&local_648,&local_5c8);
    local_5c8 = uStack_640;
    uStack_5c0 = uStack_638;
    if (local_648 == (char *)0x8000000000000000) goto LAB_0016ad1d;
    local_6a8 = uStack_640;
    pcStack_6a0 = uStack_638;
    local_6b0 = local_648;
  }
  uVar14 = *(undefined8 *)PTR_OPT_FORCE_0022b720;
  uVar1 = *(undefined8 *)(PTR_OPT_FORCE_0022b720 + 8);
                    /* try { // try from 0016ad5a to 0016b22a has its CatchHandler @ 0016b512 */
  cVar7 = (*(code *)PTR_get_flag_0022b728)(&local_680,uVar14,uVar1);
  if (cVar7 == '\0') {
    if (pcStack_6a0 == (code *)0x0) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_2f8);
      local_5b8 = (char **)local_2e8;
      local_5c8 = (undefined **)local_2f8;
      uStack_5c0 = uStack_2f0;
      pcStack_5b0 = (code *)CONCAT44(pcStack_5b0._4_4_,1);
      uVar14 = ::alloc::boxed::Box<T>::new(&local_5c8);
      auVar18._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00224fc0;
      auVar18._0_8_ = uVar14;
      goto LAB_0016b3da;
    }
LAB_0016ae1e:
    cVar8 = (*(code *)PTR_get_flag_0022b728)
                      (&local_680,*(undefined8 *)PTR_OPT_PROMPT_0022b738,
                       *(undefined8 *)(PTR_OPT_PROMPT_0022b738 + 8));
    if (cVar8 == '\0') {
      cVar8 = (*(code *)PTR_get_flag_0022b728)
                        (&local_680,*(undefined8 *)PTR_OPT_PROMPT_MORE_0022b740,
                         *(undefined8 *)(PTR_OPT_PROMPT_MORE_0022b740 + 8));
      bVar4 = true;
      uVar16 = 1;
      if (cVar8 == '\0') {
        uVar14 = *(undefined8 *)PTR_OPT_INTERACTIVE_0022b748;
        uVar1 = *(undefined8 *)(PTR_OPT_INTERACTIVE_0022b748 + 8);
        cVar8 = (*(code *)PTR_contains_id_0022b750)(&local_680,uVar14,uVar1);
        if (cVar8 == '\0') {
          uVar16 = 3;
          bVar4 = false;
        }
        else {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                    (&local_5c8,&local_680,uVar14,uVar1);
          lVar13 = clap_builder::parser::error::MatchesError::unwrap(uVar14,uVar1,&local_5c8);
          if (lVar13 == 0) {
                    /* try { // try from 0016b4dd to 0016b4e9 has its CatchHandler @ 0016b512 */
            (*(code *)PTR_unwrap_failed_0022b7c0)(&PTR_DAT_00225030);
            goto LAB_0016b4ea;
          }
          pcVar17 = *(char **)(lVar13 + 8);
          ppcVar2 = *(char ***)(lVar13 + 0x10);
          cVar8 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (pcVar17,ppcVar2,&DAT_001153cf,5);
          bVar4 = false;
          uVar16 = 0;
          if (cVar8 == '\0') {
            cVar8 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (pcVar17,ppcVar2,&DAT_0011547c,4);
            bVar4 = true;
            uVar16 = 1;
            if (cVar8 == '\0') {
              cVar8 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (pcVar17,ppcVar2,"always",6);
              if (cVar8 == '\0') {
                local_2f8 = (undefined  [8])&local_648;
                uStack_2f0 = _<&T_as_core::fmt::Display>::fmt;
                local_5c8 = &PTR_s_Invalid_argument_to_interactive___00224f40;
                uStack_5c0 = (code *)0x2;
                local_5a8 = (char **)0x0;
                pcStack_5b0 = (code *)0x1;
                local_648 = pcVar17;
                uStack_640 = ppcVar2;
                local_5b8 = (char **)local_2f8;
                core::option::Option<T>::map_or_else(&local_5f8,&local_5c8);
                pcStack_5b0 = (code *)CONCAT44(pcStack_5b0._4_4_,1);
                local_5c8 = (undefined **)CONCAT44(uStack_5f4,local_5f8);
                uStack_5c0 = (code *)CONCAT44(uStack_5ec,uStack_5f0);
                local_5b8 = (char **)local_5e8;
                uVar14 = ::alloc::boxed::Box<T>::new(&local_5c8);
                auVar18._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00225080;
                auVar18._0_8_ = uVar14;
                goto LAB_0016b3da;
              }
              goto LAB_0016ae3b;
            }
          }
        }
      }
    }
    else {
LAB_0016ae3b:
      bVar4 = false;
      uVar16 = 2;
    }
  }
  else {
    auVar18 = (*(code *)PTR_index_of_0022b730)(&local_680,uVar14,uVar1);
    local_648 = auVar18._8_8_;
    if (auVar18._0_8_ == 0) {
      local_648 = (char *)0x0;
    }
    local_5c8 = *(undefined ***)PTR_OPT_PROMPT_0022b738;
    uStack_5c0 = *(code **)(PTR_OPT_PROMPT_0022b738 + 8);
    local_5b8 = *(char ***)PTR_OPT_PROMPT_MORE_0022b740;
    pcStack_5b0 = *(code **)(PTR_OPT_PROMPT_MORE_0022b740 + 8);
    local_5a8 = *(char ***)PTR_OPT_INTERACTIVE_0022b748;
    uStack_5a0 = *(code **)(PTR_OPT_INTERACTIVE_0022b748 + 8);
    uStack_2f0 = (code *)&local_598;
    local_2f8 = (undefined  [8])&local_5c8;
    cVar8 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                      (local_2f8,&local_680,&local_648);
    bVar4 = false;
    uVar16 = 0;
    if (cVar8 != '\0') goto LAB_0016ae1e;
  }
  uVar9 = (*(code *)PTR_get_flag_0022b728)
                    (&local_680,*(undefined8 *)PTR_OPT_ONE_FILE_SYSTEM_0022b758,
                     *(undefined8 *)(PTR_OPT_ONE_FILE_SYSTEM_0022b758 + 8));
  bVar10 = (*(code *)PTR_get_flag_0022b728)
                     (&local_680,*(undefined8 *)PTR_OPT_NO_PRESERVE_ROOT_0022b760,
                      *(undefined8 *)(PTR_OPT_NO_PRESERVE_ROOT_0022b760 + 8));
  bVar11 = (*(code *)PTR_get_flag_0022b728)
                     (&local_680,*(undefined8 *)PTR_OPT_RECURSIVE_0022b768,
                      *(undefined8 *)(PTR_OPT_RECURSIVE_0022b768 + 8));
  uVar12 = (*(code *)PTR_get_flag_0022b728)
                     (&local_680,*(undefined8 *)PTR_OPT_DIR_0022b770,
                      *(undefined8 *)(PTR_OPT_DIR_0022b770 + 8));
  pcVar17 = (char *)(ulong)uVar12;
  local_6b2 = (*(code *)PTR_get_flag_0022b728)
                        (&local_680,*(undefined8 *)PTR_OPT_VERBOSE_0022b778,
                         *(undefined8 *)(PTR_OPT_VERBOSE_0022b778 + 8));
  local_6b5 = bVar10 ^ 1;
  local_6b3 = (undefined)uVar12;
  local_6b7 = cVar7;
  local_6b6 = uVar9;
  local_6b4 = bVar11;
  local_6b1 = uVar16;
  if ((bVar4) && (((code *)0x3 < pcStack_6a0 | bVar11) == 1)) {
    local_698 = pcStack_6a0;
    local_608 = "argumentNoEquals";
    if (pcStack_6a0 >= (code *)0x2) {
      local_608 = "arguments";
    }
    local_600 = 9 - (ulong)(pcStack_6a0 < (code *)0x2);
    local_690 = "?";
    if (bVar11 != 0) {
      local_690 = 
      " recursively?UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTOTYPEENOPROTOOPTEPROTONOSUPPORTESOCKTNOSUPPORTEOPNOTSUPPEPFNOSUPPORTEAFNOSUPPORTEADDRINUSEEADDRNOTAVAILENETUNREACHENETRESETECONNABORTEDECONNRESETENOBUFSEISCONNESHUTDOWNETOOMANYREFSETIMEDOUTECONNREFUSEDEHOSTDOWNEHOSTUNREACHEINPROGRESSESTALEEUCLEANENOTNAMENAVAILEISNAMEREMOTEIOEDQUOTENOMEDIUMEMEDIUMTYPEECANCELEDENOKEYEKEYEXPIREDEKEYREVOKEDEKEYREJECTEDEOWNERDEADENOTRECOVERABLEERFKILLEHWPOISON"
      ;
    }
    local_688 = (code *)0x1;
    if (bVar11 != 0) {
      local_688 = (code *)0xd;
    }
    local_5c8 = &local_698;
    uStack_5c0 = (code *)PTR_fmt_0022b780;
    pcStack_5b0 = _<&T_as_core::fmt::Display>::fmt;
    uStack_5a0 = _<&T_as_core::fmt::Display>::fmt;
    local_2f8 = (undefined  [8])&PTR_s_remove_00224f60;
    uStack_2f0 = (code *)0x3;
    local_2d8 = 0;
    local_2e8 = (char *)&local_5c8;
    uStack_2e0 = 3;
    pcVar17 = local_2f8;
    local_5b8 = &local_608;
    local_5a8 = &local_690;
    core::option::Option<T>::map_or_else(&local_5e0,pcVar17);
    local_648 = (char *)CONCAT44(uStack_5dc,local_5e0);
    uStack_640 = (char **)CONCAT44(uStack_5d4,uStack_5d8);
    uStack_638 = local_5d0;
                    /* try { // try from 0016b248 to 0016b37b has its CatchHandler @ 0016b4fe */
    _local_2f8 = (*(code *)PTR_util_name_0022b6e8)();
    local_688 = _<&T_as_core::fmt::Display>::fmt;
    local_5c8 = (undefined **)0x224ec8;
    uStack_5c0 = (code *)0x2;
    local_5a8 = (char **)0x0;
    pcStack_5b0 = (code *)0x1;
    local_690 = pcVar17;
    local_5b8 = &local_690;
    (*(code *)PTR__eprint_0022b6f0)(&local_5c8);
    local_2f8 = (undefined  [8])&local_648;
    uStack_2f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_5c8 = (undefined **)0x115190;
    uStack_5c0 = (code *)0x1;
    local_5a8 = (char **)0x0;
    pcStack_5b0 = (code *)0x1;
    local_5b8 = (char **)pcVar17;
    (*(code *)PTR__eprint_0022b6f0)(&local_5c8);
    local_5c8 = &PTR_s__00224f90;
    uStack_5c0 = (code *)&DAT_00000001;
    local_5b8 = (char **)&DAT_00000008;
    pcStack_5b0 = (code *)0x0;
    local_5a8 = (char **)0x0;
    (*(code *)PTR__eprint_0022b6f0)(&local_5c8);
    local_698 = (code *)PTR_INSTANCE_0022b788;
    pcVar15 = (char *)(*(code *)PTR_flush_0022b790)(&local_698);
    if (pcVar15 != (char *)0x0) {
      local_608 = pcVar15;
                    /* try { // try from 0016b40e to 0016b4da has its CatchHandler @ 0016b4ec */
      _local_2f8 = (*(code *)PTR_util_name_0022b6e8)();
      local_688 = _<&T_as_core::fmt::Display>::fmt;
      local_5c8 = (undefined **)0x224ec8;
      uStack_5c0 = (code *)0x2;
      local_5a8 = (char **)0x0;
      pcStack_5b0 = (code *)0x1;
      local_690 = pcVar17;
      local_5b8 = &local_690;
      (*(code *)PTR__eprint_0022b6f0)(&local_5c8);
      uStack_2f0 = (code *)PTR_fmt_0022b7b0;
      local_5c8 = (undefined **)&DAT_00224ee8;
      uStack_5c0 = (code *)0x2;
      local_5a8 = (char **)0x0;
      pcStack_5b0 = (code *)0x1;
      local_5b8 = (char **)pcVar17;
      local_2f8 = (undefined  [8])&local_608;
      (*(code *)PTR__eprint_0022b6f0)(&local_5c8);
      (*(code *)PTR_exit_0022b7b8)(1);
LAB_0016b4ea:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    cVar7 = (*(code *)PTR_read_yes_0022b798)();
    if (cVar7 == '\0') {
                    /* try { // try from 0016b3ce to 0016b3d7 has its CatchHandler @ 0016b512 */
      core::ptr::drop_in_place<alloc::string::String>(&local_648);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = pcVar17;
      auVar18 = auVar6 << 0x40;
      goto LAB_0016b3da;
    }
                    /* try { // try from 0016b380 to 0016b3ad has its CatchHandler @ 0016b512 */
    core::ptr::drop_in_place<alloc::string::String>(&local_648);
  }
  cVar7 = (*(code *)PTR_remove_0022b7a0)(local_6a8,pcStack_6a0,&local_6b7);
  if (cVar7 == '\0') {
                    /* try { // try from 0016b3b6 to 0016b3bf has its CatchHandler @ 0016b50d */
    core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&local_6b0);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_680);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = pcVar17;
    return auVar5 << 0x40;
  }
  auVar18 = (*(code *)PTR_from_0022b7a8)(1);
LAB_0016b3da:
                    /* try { // try from 0016b3da to 0016b3e3 has its CatchHandler @ 0016b50d */
  core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&local_6b0);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_680);
  return auVar18;
}