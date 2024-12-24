undefined  [16] __rustcall uu_pr::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 *unaff_R14;
  undefined auVar6 [16];
  int local_6f8;
  undefined4 uStack_6f4;
  int iStack_6f0;
  undefined4 uStack_6ec;
  undefined8 uStack_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  long local_6b8;
  undefined local_6a8 [8];
  undefined8 local_6a0;
  undefined8 local_698;
  undefined4 local_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  long local_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  long local_668;
  long local_660;
  undefined8 local_658;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  int local_628;
  undefined4 uStack_624;
  int iStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 local_608;
  undefined4 uStack_604;
  int iStack_600;
  undefined4 uStack_5fc;
  undefined8 local_5f8;
  undefined local_5f0 [32];
  undefined local_5d0 [24];
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_468;
  undefined4 uStack_464;
  int iStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined local_318 [32];
  undefined local_2f8 [712];
  
  uucore::Args::collect_ignore(local_6a8,param_1,param_2);
                    /* try { // try from 0026ffdb to 0026ffe8 has its CatchHandler @ 002705b5 */
  (*(code *)PTR_recreate_arguments_00447db0)(&local_608,local_6a0,local_698);
                    /* try { // try from 0026ffe9 to 0026fff6 has its CatchHandler @ 002705a0 */
  (*(code *)PTR_uu_app_00447db8)(local_2f8);
  local_458 = local_5f8;
  local_468 = local_608;
  uStack_464 = uStack_604;
  iStack_460 = iStack_600;
  uStack_45c = uStack_5fc;
                    /* try { // try from 00270017 to 00270058 has its CatchHandler @ 002705d7 */
  clap_builder::builder::command::Command::try_get_matches_from_mut(&local_5b8,local_2f8,&local_468)
  ;
  if (local_5b8 == -0x8000000000000000) {
    auVar6 = (*(code *)PTR_from_00447dc0)();
LAB_002704fc:
                    /* try { // try from 002704fc to 00270508 has its CatchHandler @ 0027059e */
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(local_2f8);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_6a8);
    return auVar6;
  }
  local_640 = local_598;
  uStack_63c = uStack_594;
  uStack_638 = uStack_590;
  uStack_634 = uStack_58c;
  local_650 = (undefined4)local_5a8;
  uStack_64c = local_5a8._4_4_;
  uStack_648 = uStack_5a0;
  uStack_644 = uStack_59c;
  local_660 = local_5b8;
  local_658 = uStack_5b0;
                    /* try { // try from 002700a4 to 00270140 has its CatchHandler @ 002705bd */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_5b8,&local_660,"files",5);
  clap_builder::parser::error::MatchesError::unwrap(&local_468,"files",5,&local_5b8);
  if (CONCAT44(uStack_464,local_468) != 0) {
    local_588 = local_438;
    uStack_584 = uStack_434;
    uStack_580 = uStack_430;
    uStack_57c = uStack_42c;
    local_598 = local_448;
    uStack_594 = uStack_444;
    uStack_590 = uStack_440;
    uStack_58c = uStack_43c;
    local_5a8 = local_458;
    uStack_5a0 = uStack_450;
    uStack_59c = uStack_44c;
    local_5b8 = CONCAT44(uStack_464,local_468);
    uStack_5b0 = CONCAT44(uStack_45c,iStack_460);
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
              (&local_6f8,&local_5b8);
    local_5b8 = CONCAT44(uStack_6f4,local_6f8);
    local_628 = iStack_6f0;
    uStack_624 = uStack_6ec;
    iStack_620 = (int)uStack_6e8;
    uStack_61c = uStack_6e8._4_4_;
    if (local_5b8 != -0x8000000000000000) {
      uStack_5b0 = CONCAT44(uStack_6ec,iStack_6f0);
      local_5a8 = uStack_6e8;
      goto LAB_0027019f;
    }
  }
  local_5b8 = 0;
  uStack_5b0 = 8;
  local_5a8 = 0;
LAB_0027019f:
                    /* try { // try from 0027019f to 002701b0 has its CatchHandler @ 00270587 */
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_690,&local_5b8);
                    /* try { // try from 002701b1 to 002701f7 has its CatchHandler @ 002705c5 */
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_5b8);
  if (local_680 == 0) {
    ::alloc::vec::Vec<T,A>::insert(&local_690,0,"-",1);
  }
  cVar4 = (*(code *)PTR_get_flag_00447dc8)(&local_660,"merge",5);
  if (cVar4 == '\0') {
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (local_318,&local_690);
    ::alloc::vec::in_place_collect::
    _<impl_alloc::vec::spec_from_iter::SpecFromIter<T,I>for_alloc::vec::Vec<T>>::from_iter
              (local_5d0,local_318);
  }
  else {
    puVar5 = (undefined4 *)::alloc::alloc::Global::alloc_impl();
    if (puVar5 == (undefined4 *)0x0) {
                    /* try { // try from 0027052b to 0027053a has its CatchHandler @ 002705c5 */
      (*(code *)PTR_handle_alloc_error_00447d70)(8,0x18);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(long *)(puVar5 + 4) = local_680;
    *puVar5 = local_690;
    puVar5[1] = uStack_68c;
    puVar5[2] = uStack_688;
    puVar5[3] = uStack_684;
                    /* try { // try from 0027021b to 00270256 has its CatchHandler @ 0027059c */
    ::alloc::slice::hack::into_vec(local_5d0,puVar5,1);
  }
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
            (local_5f0,local_5d0);
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
            (&local_678,local_5f0);
  if (CONCAT44(uStack_674,local_678) != -0x8000000000000000) {
    unaff_R14 = &local_5b8;
    do {
      lVar3 = local_668;
      local_6b8 = local_668;
      local_6c8 = local_678;
      uStack_6c4 = uStack_674;
      uStack_6c0 = uStack_670;
      uStack_6bc = uStack_66c;
      uVar2 = CONCAT44(uStack_66c,uStack_670);
                    /* try { // try from 002702d9 to 002702ed has its CatchHandler @ 002705f1 */
      ::alloc::str::join_generic_copy
                (unaff_R14,local_6a0,local_698,
                 " UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG"
                 ,1);
      uStack_6e8 = local_5a8;
      local_6f8 = (int)local_5b8;
      uStack_6f4 = local_5b8._4_4_;
      iStack_6f0 = (int)uStack_5b0;
      uStack_6ec = uStack_5b0._4_4_;
                    /* try { // try from 0027030c to 00270327 has its CatchHandler @ 002705e4 */
      (*(code *)PTR_build_options_00447dd0)(&local_468,&local_660,uVar2,lVar3,uStack_5b0);
                    /* try { // try from 00270328 to 00270332 has its CatchHandler @ 00270612 */
      core::ptr::drop_in_place<alloc::string::String>(&local_6f8);
      if (CONCAT44(uStack_464,local_468) == 2) {
        uStack_6e0 = local_448;
        uStack_6dc = uStack_444;
        local_6f8 = iStack_460;
        uStack_6f4 = uStack_45c;
        iStack_6f0 = (int)local_458;
        uStack_6ec = local_458._4_4_;
                    /* try { // try from 0027045c to 00270477 has its CatchHandler @ 00270569 */
        (*(code *)PTR_print_error_00447de8)(&local_660,&local_6f8);
        auVar6 = (*(code *)PTR_from_00447df0)(1);
                    /* try { // try from 00270478 to 00270485 has its CatchHandler @ 00270557 */
        core::ptr::drop_in_place<uu_pr::PrError>(&local_6f8);
LAB_002704d8:
                    /* try { // try from 002704d8 to 002704e1 has its CatchHandler @ 00270552 */
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_6c8);
                    /* try { // try from 002704e2 to 002704ee has its CatchHandler @ 0027059c */
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(local_5f0);
                    /* try { // try from 002704ef to 002704fb has its CatchHandler @ 002705d7 */
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_660)
        ;
        goto LAB_002704fc;
      }
      (*(code *)PTR_memcpy_00447cc0)(unaff_R14,&local_468,0x148);
                    /* try { // try from 0027036f to 002703ba has its CatchHandler @ 002705f6 */
      itertools::Itertools::exactly_one
                (&local_6f8,CONCAT44(uStack_6bc,uStack_6c0),
                 local_6b8 * 0x10 + CONCAT44(uStack_6bc,uStack_6c0));
      if (local_6f8 == 2) {
        (*(code *)PTR_pr_00447dd8)
                  (&local_628,*(undefined8 *)CONCAT44(uStack_6ec,iStack_6f0),
                   ((undefined8 *)CONCAT44(uStack_6ec,iStack_6f0))[1],unaff_R14);
      }
      else {
        (*(code *)PTR_mpr_00447de0)(&local_628,CONCAT44(uStack_6bc,uStack_6c0),local_6b8,unaff_R14);
      }
      if (CONCAT44(uStack_624,local_628) != -0x7ffffffffffffffb) {
        uStack_6e0 = uStack_610;
        uStack_6dc = uStack_60c;
        local_6f8 = local_628;
        uStack_6f4 = uStack_624;
        iStack_6f0 = iStack_620;
        uStack_6ec = uStack_61c;
                    /* try { // try from 002704a1 to 002704b1 has its CatchHandler @ 0027053d */
        (*(code *)PTR_print_error_00447de8)(&local_660,&local_6f8);
                    /* try { // try from 002704b2 to 002704c4 has its CatchHandler @ 0027054d */
        core::ptr::drop_in_place<uu_pr::PrError>(&local_6f8);
        auVar6 = (*(code *)PTR_from_00447df0)(1);
                    /* try { // try from 002704c5 to 002704d7 has its CatchHandler @ 00270557 */
        core::ptr::drop_in_place<uu_pr::OutputOptions>(&local_5b8);
        goto LAB_002704d8;
      }
                    /* try { // try from 002703cb to 002703d2 has its CatchHandler @ 00270612 */
      core::ptr::drop_in_place<uu_pr::OutputOptions>(unaff_R14);
                    /* try { // try from 002703d3 to 002703dc has its CatchHandler @ 002705df */
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_6c8);
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                (&local_678,local_5f0);
    } while (CONCAT44(uStack_674,local_678) != -0x8000000000000000);
  }
                    /* try { // try from 0027040a to 00270416 has its CatchHandler @ 0027059c */
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(local_5f0);
                    /* try { // try from 00270417 to 00270423 has its CatchHandler @ 002705d7 */
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_660);
                    /* try { // try from 00270424 to 00270430 has its CatchHandler @ 0027059e */
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(local_2f8);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_6a8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = unaff_R14;
  return auVar6 << 0x40;
}