undefined  [16] __rustcall uu_ln::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined uVar4;
  undefined uVar5;
  char cVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  long lVar12;
  undefined auVar13 [16];
  undefined local_6c0 [16];
  undefined4 local_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 local_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined8 local_690;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined **local_678;
  undefined local_670 [8];
  undefined8 local_668;
  undefined8 local_660;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined8 local_628;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined **local_610;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined **local_5c8;
  undefined8 uStack_5c0;
  undefined **local_5b8;
  undefined **local_5b0;
  undefined8 uStack_5a8;
  undefined **local_5a0;
  undefined local_598;
  undefined local_597;
  undefined local_596;
  undefined local_595;
  undefined local_594;
  undefined local_593;
  undefined local_592;
  undefined local_591;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  local_2f8 = &PTR_s_In_the_1st_form__create_a_link_t_0022a4a0;
  uStack_2f0 = 0x16d650;
  uStack_2ec = 0;
  local_2e8 = &PTR_s_The_backup_suffix_is______unless_0022a4b0;
  uStack_2e0 = _<&T_as_core::fmt::Display>::fmt;
  local_5c8 = (undefined **)&DAT_0022a480;
  uStack_5c0 = 2;
  uStack_5a8 = 0;
  local_5b8 = (undefined **)&local_2f8;
  local_5b0 = (undefined **)0x2;
  core::option::Option<T>::map_or_else(&local_620,&local_5c8);
                    /* try { // try from 0016bef4 to 0016bf01 has its CatchHandler @ 0016c31d */
  (*(code *)PTR_uu_app_00230fe0)(&local_5c8);
  local_678 = local_610;
  local_688 = local_620;
  uStack_684 = uStack_61c;
  uStack_680 = uStack_618;
  uStack_67c = uStack_614;
  clap_builder::builder::command::Command::after_help(&local_2f8,&local_5c8,&local_688);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_658,&local_2f8,param_1,param_2);
  if (CONCAT44(uStack_654,local_658) == -0x8000000000000000) {
    auVar13 = (*(code *)PTR_from_00230fe8)();
  }
  else {
    local_690 = local_628;
    local_6a0 = local_638;
    uStack_69c = uStack_634;
    uStack_698 = uStack_630;
    uStack_694 = uStack_62c;
    local_6b0 = (undefined4)local_648;
    uStack_6ac = local_648._4_4_;
    uStack_6a8 = uStack_640;
    uStack_6a4 = uStack_63c;
    uVar1 = *(undefined8 *)PTR_ARG_FILES_00230ff0;
    uVar2 = *(undefined8 *)(PTR_ARG_FILES_00230ff0 + 8);
                    /* try { // try from 0016bfb5 to 0016c048 has its CatchHandler @ 0016c33e */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_5c8,local_6c0,uVar1,uVar2);
    clap_builder::parser::error::MatchesError::unwrap(&local_2f8,uVar1,uVar2,&local_5c8);
    if (local_2f8 == (undefined **)0x0) {
                    /* try { // try from 0016c2ca to 0016c2d6 has its CatchHandler @ 0016c33e */
      (*(code *)PTR_unwrap_failed_00231018)(&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0022a4c0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_5d8 = local_2c8;
    uStack_5d4 = uStack_2c4;
    uStack_5d0 = uStack_2c0;
    uStack_5cc = uStack_2bc;
    local_5e8 = local_2d8;
    uStack_5e4 = uStack_2d4;
    uStack_5e0 = uStack_2d0;
    uStack_5dc = uStack_2cc;
    local_5f8 = (undefined4)local_2e8;
    uStack_5f4 = local_2e8._4_4_;
    uStack_5f0 = (undefined4)uStack_2e0;
    uStack_5ec = uStack_2e0._4_4_;
    local_608 = (undefined4)local_2f8;
    uStack_604 = local_2f8._4_4_;
    uStack_600 = uStack_2f0;
    uStack_5fc = uStack_2ec;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (local_670,&local_608);
                    /* try { // try from 0016c049 to 0016c0ab has its CatchHandler @ 0016c32f */
    uVar5 = (*(code *)PTR_get_flag_00230ff8)(local_6c0,"symbolicEALREADYDeadlock",8);
    cVar6 = (*(code *)PTR_get_flag_00230ff8)(local_6c0,"force",5);
    uVar7 = 2;
    if (cVar6 == '\0') {
      uVar7 = (*(code *)PTR_get_flag_00230ff8)(local_6c0,"interactive",0xb);
    }
    (*(code *)PTR_determine_backup_mode_00231000)(&local_5c8,local_6c0);
    auVar13._8_8_ = uStack_5c0;
    auVar13._0_8_ = local_5c8;
    if (local_5c8 == (undefined **)0x0) {
      uVar4 = (undefined)uStack_5c0;
                    /* try { // try from 0016c0d9 to 0016c0e8 has its CatchHandler @ 0016c32f */
      (*(code *)PTR_determine_backup_suffix_00231008)(&local_688,local_6c0);
                    /* try { // try from 0016c0e9 to 0016c0ff has its CatchHandler @ 0016c2ed */
      uVar8 = (*(code *)PTR_get_flag_00230ff8)(local_6c0,"logical",7);
      local_648 = local_678;
      local_658 = local_688;
      uStack_654 = uStack_684;
      uStack_650 = uStack_680;
      uStack_64c = uStack_67c;
                    /* try { // try from 0016c11a to 0016c178 has its CatchHandler @ 0016c30e */
      uVar9 = (*(code *)PTR_get_flag_00230ff8)(local_6c0,"relative",8);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_5c8,local_6c0);
      lVar12 = clap_builder::parser::error::MatchesError::unwrap(&DAT_00115770,0x10,&local_5c8);
      if (lVar12 == 0) {
        local_2f8 = (undefined **)0x8000000000000000;
      }
      else {
        core::ops::function::FnOnce::call_once(&local_5c8,lVar12);
        local_2e8 = local_5b8;
        local_2f8 = local_5c8;
        uStack_2f0 = (undefined4)uStack_5c0;
        uStack_2ec = uStack_5c0._4_4_;
      }
                    /* try { // try from 0016c1a9 to 0016c1f3 has its CatchHandler @ 0016c2fc */
      uVar10 = (*(code *)PTR_get_flag_00230ff8)(local_6c0,"no-target-directory",0x13);
      uVar11 = (*(code *)PTR_get_flag_00230ff8)(local_6c0,"no-dereference",0xe);
      local_593 = (*(code *)PTR_get_flag_00230ff8)
                            (local_6c0,
                             "verboseUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE"
                             ,7);
      local_591 = uVar4;
      local_5c8 = (undefined **)CONCAT44(uStack_654,local_658);
      uStack_5c0 = CONCAT44(uStack_64c,uStack_650);
      local_5b8 = local_648;
      local_5b0 = local_2f8;
      uStack_5a8 = CONCAT44(uStack_2ec,uStack_2f0);
      local_5a0 = local_2e8;
                    /* try { // try from 0016c27d to 0016c28a has its CatchHandler @ 0016c2db */
      local_598 = uVar5;
      local_597 = uVar9;
      local_596 = uVar8;
      local_595 = uVar10;
      local_594 = uVar11;
      local_592 = uVar7;
      auVar13 = (*(code *)PTR_exec_00231010)(local_668,local_660,&local_5c8);
                    /* try { // try from 0016c28b to 0016c29d has its CatchHandler @ 0016c2d9 */
      core::ptr::drop_in_place<uu_ln::Settings>(&local_5c8);
                    /* try { // try from 0016c29e to 0016c2a7 has its CatchHandler @ 0016c33e */
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(local_670);
    }
    else {
                    /* try { // try from 0016c0b9 to 0016c0ca has its CatchHandler @ 0016c33e */
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(local_670);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_6c0);
  }
  return auVar13;
}