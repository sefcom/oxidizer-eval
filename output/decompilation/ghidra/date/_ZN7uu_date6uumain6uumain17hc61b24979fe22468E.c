undefined  [16] __rustcall uu_date::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  undefined uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined auVar8 [16];
  undefined *local_698;
  int local_690;
  undefined8 local_68c;
  undefined4 local_684;
  undefined8 local_678;
  undefined4 local_670;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined8 local_658;
  undefined **local_648;
  undefined *local_640;
  undefined *local_630;
  int local_628;
  undefined *local_618;
  int iStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  int iStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 local_5d4;
  char local_5d0;
  undefined *local_5a8;
  undefined auStack_5a0 [12];
  undefined4 uStack_594;
  undefined8 uStack_590;
  undefined *local_588;
  int iStack_580;
  undefined4 uStack_57c;
  undefined8 local_578;
  undefined **local_568;
  undefined *puStack_560;
  undefined8 local_558;
  undefined8 local_538;
  undefined4 local_530;
  undefined *local_528 [2];
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4c8;
  int iStack_4c0;
  undefined4 uStack_4bc;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  int iStack_490;
  undefined4 uStack_48c;
  undefined local_1f8 [16];
  int local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  
  (*(code *)PTR_uu_app_0044d890)(&local_4c8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_618,&local_4c8,param_1,param_2);
  if (local_618 == (undefined *)0x8000000000000000) {
    auVar8 = (*(code *)PTR_from_0044d898)();
    return auVar8;
  }
  local_4f8 = local_5e8;
  local_508 = (undefined4)local_5f8;
  uStack_504 = local_5f8._4_4_;
  uStack_500 = (undefined4)uStack_5f0;
  uStack_4fc = uStack_5f0._4_4_;
  local_518 = uStack_608;
  uStack_514 = uStack_604;
  uStack_510 = uStack_600;
  uStack_50c = uStack_5fc;
  local_528[0] = local_618;
                    /* try { // try from 00271301 to 002715c5 has its CatchHandler @ 002725f5 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_4c8,local_528,"format",6);
  lVar5 = clap_builder::parser::error::MatchesError::unwrap("format",6,&local_4c8);
  if (lVar5 == 0) {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_4c8,local_528,&DAT_00152428,8);
    clap_builder::parser::error::MatchesError::unwrap(&local_618,&DAT_00152428,8,&local_4c8);
    if (local_618 == (undefined *)0x0) {
      cVar3 = (*(code *)PTR_get_flag_0044d8a8)(local_528,"rfc-email",9);
      if (cVar3 == '\0') {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                  (&local_4c8,local_528,"rfc-3339",8);
        lVar5 = clap_builder::parser::error::MatchesError::unwrap("rfc-3339",8,&local_4c8);
        if (lVar5 == 0) {
          local_588 = (undefined *)0x8000000000000004;
        }
        else {
          uVar4 = (*(code *)PTR_from_0044d8b0)
                            (*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
          iStack_580 = CONCAT31(iStack_580._1_3_,uVar4);
          local_588 = (undefined *)0x8000000000000002;
        }
      }
      else {
        local_588 = (undefined *)0x8000000000000001;
      }
    }
    else {
      local_498 = (undefined4)local_5e8;
      uStack_494 = local_5e8._4_4_;
      iStack_490 = iStack_5e0;
      uStack_48c = uStack_5dc;
      uStack_4a8 = local_5f8;
      local_4a0 = (undefined4)uStack_5f0;
      uStack_49c = uStack_5f0._4_4_;
      uStack_4b8._0_4_ = uStack_608;
      uStack_4b8._4_4_ = uStack_604;
      uStack_4b0 = (undefined **)CONCAT44(uStack_5fc,uStack_600);
      local_4c8 = (undefined **)local_618;
      iStack_4c0 = iStack_610;
      uStack_4bc = uStack_60c;
      uVar4 = uumain::___closure__(&local_4c8);
      iStack_580 = CONCAT31(iStack_580._1_3_,uVar4);
      local_588 = (undefined *)0x8000000000000000;
    }
LAB_002715df:
                    /* try { // try from 002715df to 0027164f has its CatchHandler @ 002725b0 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_4c8,local_528,"date",4);
    lVar5 = clap_builder::parser::error::MatchesError::unwrap("date",4,&local_4c8);
    if (lVar5 == 0) {
                    /* try { // try from 002716a7 to 00271708 has its CatchHandler @ 002725b0 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_4c8,local_528,"filemode",4);
      lVar5 = clap_builder::parser::error::MatchesError::unwrap("filemode",4,&local_4c8);
      if (lVar5 == 0) {
        local_5a8 = (undefined *)0x0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar5 + 8);
        uVar1 = *(undefined8 *)(lVar5 + 0x10);
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar6,uVar1,"-",1);
        if (cVar3 == '\0') {
                    /* try { // try from 00271b0a to 00271b1d has its CatchHandler @ 002725b0 */
          (*(code *)PTR_to_owned_0044d8d8)(&local_4c8,uVar6,uVar1);
          uStack_590 = CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
          uStack_594 = uStack_4bc;
          auStack_5a0._8_4_ = iStack_4c0;
          auStack_5a0._0_8_ = local_4c8;
          local_5a8 = (undefined *)0x2;
        }
        else {
          local_5a8 = (undefined *)0x3;
        }
      }
    }
    else {
      (*(code *)PTR_now_0044d8b8)(local_1f8);
      parse_datetime::parse_datetime_at_date
                (&local_618,local_1f8,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
      if (local_618 == (undefined *)0x8000000000000002) {
        local_1e8 = iStack_610;
        uStack_1e4 = uStack_60c;
        uStack_1e0 = uStack_608;
        uStack_1dc = uStack_604;
                    /* try { // try from 00271672 to 00271686 has its CatchHandler @ 00272537 */
        auStack_5a0 = chrono::datetime::DateTime<Tz>::signed_duration_since(&local_1e8,local_1f8);
        local_5a8 = (undefined *)0x4;
      }
      else {
                    /* try { // try from 0027171f to 0027172f has its CatchHandler @ 00272537 */
        (*(code *)PTR_clone_0044d8c0)(&local_4c8,lVar5);
        uStack_590 = CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
        auStack_5a0._8_4_ = iStack_4c0;
        auStack_5a0._0_8_ = local_4c8;
        uStack_594 = uStack_4bc;
        local_5a8 = (undefined *)0x1;
      }
                    /* try { // try from 0027175c to 00271768 has its CatchHandler @ 002725b0 */
      core::ptr::
      drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>
                (&local_618);
    }
                    /* try { // try from 00271769 to 0027184a has its CatchHandler @ 0027258f */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_4c8,local_528,"setexpected file, got directory ",3);
    lVar5 = clap_builder::parser::error::MatchesError::unwrap
                      ("setexpected file, got directory ",3,&local_4c8);
    iVar7 = 0;
    if (lVar5 != 0) {
      core::ops::function::FnOnce::call_once(&local_4c8,lVar5);
      local_678 = CONCAT44((undefined4)uStack_4b8,uStack_4bc);
      local_670 = uStack_4b8._4_4_;
      local_668 = (undefined4)uStack_4b0;
      uStack_664 = uStack_4b0._4_4_;
      uStack_660 = (undefined4)uStack_4a8;
      uStack_65c = uStack_4a8._4_4_;
      local_658 = CONCAT44(uStack_49c,local_4a0);
      iVar7 = 0;
      if (local_4c8 != (undefined **)0x8000000000000001) {
        if (local_4c8 != (undefined **)0x8000000000000000) {
          local_698 = (undefined *)local_4c8;
          local_690 = iStack_4c0;
          local_684 = uStack_4b8._4_4_;
          local_568 = uStack_4b0;
          puStack_560 = uStack_4a8;
          local_618 = (undefined *)0x0;
          iStack_610 = iStack_4c0;
          uStack_60c = uStack_4bc;
          uStack_608 = (undefined4)uStack_4b8;
          uStack_604 = uStack_4b8._4_4_;
          uStack_600 = CONCAT31(uStack_600._1_3_,1);
          local_640 = PTR_fmt_0044d8a0;
          local_4c8 = &PTR_s_invalid_date_0040b050;
          iStack_4c0 = 1;
          uStack_4bc = 0;
          uStack_4a8 = (undefined *)0x0;
          uStack_4b8 = &local_648;
          uStack_4b0 = (undefined **)0x1;
                    /* try { // try from 002719f5 to 00271a41 has its CatchHandler @ 0027251d */
          local_68c = local_678;
          local_648 = &local_618;
          local_558 = local_658;
          core::option::Option<T>::map_or_else(&local_1b8,&local_4c8);
          uStack_4b0 = (undefined **)CONCAT44(uStack_4b0._4_4_,1);
          local_4c8 = (undefined **)CONCAT44(uStack_1b4,local_1b8);
          iStack_4c0 = iStack_1b0;
          uStack_4bc = uStack_1ac;
          uStack_4b8._0_4_ = (undefined4)local_1a8;
          uStack_4b8._4_4_ = (undefined4)((ulong)local_1a8 >> 0x20);
          uVar6 = ::alloc::boxed::Box<T>::new(&local_4c8);
                    /* try { // try from 00271a42 to 00271a51 has its CatchHandler @ 00272511 */
          core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(&local_568);
                    /* try { // try from 00271a52 to 00271a59 has its CatchHandler @ 0027250f */
          core::ptr::drop_in_place<alloc::string::String>(&local_698);
                    /* try { // try from 00271a5a to 00271a66 has its CatchHandler @ 002725b0 */
          core::ptr::drop_in_place<uu_date::DateSource>(&local_5a8);
                    /* try { // try from 00271a67 to 00271a73 has its CatchHandler @ 002725f5 */
          core::ptr::drop_in_place<uu_date::Format>(&local_588);
          goto LAB_00271a74;
        }
        local_530 = uStack_4b8._4_4_;
        iVar7 = iStack_4c0;
        local_538 = local_678;
      }
    }
    local_5d0 = (*(code *)PTR_get_flag_0044d8a8)(local_528,"universal",9);
    local_5e8 = local_578;
    uStack_5f0 = CONCAT44(uStack_57c,iStack_580);
    local_5f8 = local_588;
    local_618 = local_5a8;
    iStack_610 = auStack_5a0._0_4_;
    uStack_60c = auStack_5a0._4_4_;
    uStack_608 = auStack_5a0._8_4_;
    uStack_604 = uStack_594;
    uStack_600 = (undefined4)uStack_590;
    uStack_5fc = uStack_590._4_4_;
    uStack_5dc = (undefined4)local_538;
    uStack_5d8 = (undefined4)((ulong)local_538 >> 0x20);
    local_5d4 = local_530;
    iStack_5e0 = iVar7;
    if (iVar7 == 0) {
      if (local_5d0 != '\0') {
        (*(code *)PTR_now_0044d8d0)(&local_4c8);
        local_628 = iStack_4c0;
        local_630 = (undefined *)local_4c8;
                    /* WARNING: Could not recover jumptable at 0x00271937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar8 = (*(code *)(&DAT_0014eb3c + *(int *)(&DAT_0014eb3c + (long)local_618 * 4)))();
        return auVar8;
      }
                    /* try { // try from 00271a80 to 00271a8d has its CatchHandler @ 0027254e */
      (*(code *)PTR_now_0044d8b8)(&local_4c8);
      local_628 = iStack_4c0;
      local_630 = (undefined *)local_4c8;
                    /* WARNING: Could not recover jumptable at 0x00271ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar8 = (*(code *)(&DAT_0014eb3c + *(int *)(&DAT_0014eb3c + (long)local_618 * 4)))();
      return auVar8;
    }
    local_4d0 = uStack_5d8;
    local_4d8 = CONCAT44(uStack_5dc,iVar7);
                    /* try { // try from 002718d8 to 00271906 has its CatchHandler @ 0027254e */
    auVar8 = (*(code *)PTR_set_system_datetime_0044d8c8)(&local_4d8);
                    /* try { // try from 00272412 to 0027241e has its CatchHandler @ 00272549 */
    core::ptr::drop_in_place<uu_date::Settings>(&local_618);
  }
  else {
    uVar6 = *(undefined8 *)(lVar5 + 8);
    uVar1 = *(undefined8 *)(lVar5 + 0x10);
    local_4c8 = (undefined **)((ulong)local_4c8 & 0xffffffff00000000);
    auVar8 = core::char::methods::encode_utf8_raw(0x2b,&local_4c8);
    cVar3 = core::slice::_<impl[T]>::starts_with(uVar6,uVar1,auVar8._0_8_,auVar8._8_8_);
    if (cVar3 != '\0') {
      lVar5 = core::str::traits::
              _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::get
                        (1,uVar6,uVar1);
      if (lVar5 == 0) {
                    /* try { // try from 002724a9 to 002724c3 has its CatchHandler @ 002725f5 */
        (*(code *)PTR_slice_error_fail_0044d908)
                  (uVar6,uVar1,1,uVar1,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0040b158);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_4c8,lVar5);
      local_578 = CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
      local_588 = (undefined *)local_4c8;
      iStack_580 = iStack_4c0;
      uStack_57c = uStack_4bc;
      goto LAB_002715df;
    }
    local_618 = (undefined *)0x0;
    iStack_610 = (int)uVar6;
    uStack_60c = (undefined4)((ulong)uVar6 >> 0x20);
    uStack_608 = (undefined4)uVar1;
    uStack_604 = (undefined4)((ulong)uVar1 >> 0x20);
    uStack_600 = CONCAT31(uStack_600._1_3_,1);
    puStack_560 = PTR_fmt_0044d8a0;
    local_4c8 = &PTR_s_invalid_date_0040b050;
    iStack_4c0 = 1;
    uStack_4bc = 0;
    uStack_4a8 = (undefined *)0x0;
    uStack_4b8 = &local_568;
    uStack_4b0 = (undefined **)0x1;
    local_568 = &local_618;
    core::option::Option<T>::map_or_else(&local_1d0,&local_4c8);
    uStack_4b0 = (undefined **)CONCAT44(uStack_4b0._4_4_,1);
    local_4c8 = (undefined **)CONCAT44(uStack_1cc,local_1d0);
    iStack_4c0 = iStack_1c8;
    uStack_4bc = uStack_1c4;
    uStack_4b8._0_4_ = (undefined4)local_1c0;
    uStack_4b8._4_4_ = (undefined4)((ulong)local_1c0 >> 0x20);
    uVar6 = ::alloc::boxed::Box<T>::new(&local_4c8);
LAB_00271a74:
    auVar8._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0040b0e8;
    auVar8._0_8_ = uVar6;
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_528);
  return auVar8;
}