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
  undefined *local_6a0;
  int local_698;
  undefined8 local_694;
  undefined4 local_68c;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 local_668;
  undefined **local_660;
  undefined *local_658;
  undefined *local_648;
  int local_640;
  undefined *local_638;
  int iStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  int iStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 local_5f4;
  char local_5f0;
  undefined *local_5c8;
  undefined auStack_5c0 [12];
  undefined4 uStack_5b4;
  undefined8 uStack_5b0;
  undefined *local_5a8;
  int iStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  undefined **local_588;
  undefined *puStack_580;
  undefined8 local_578;
  undefined8 local_550;
  undefined4 local_548;
  undefined *local_540 [2];
  undefined4 local_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined8 local_510;
  undefined8 local_4f8;
  undefined4 local_4f0;
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
  
  (*(code *)PTR_uu_app_0044cb18)(&local_4c8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_638,&local_4c8,param_1,param_2);
  if (local_638 == (undefined *)0x8000000000000000) {
    auVar8 = (*(code *)PTR_from_0044cb20)();
    return auVar8;
  }
  local_510 = local_608;
  local_520 = (undefined4)local_618;
  uStack_51c = local_618._4_4_;
  uStack_518 = (undefined4)uStack_610;
  uStack_514 = uStack_610._4_4_;
  local_530 = uStack_628;
  uStack_52c = uStack_624;
  uStack_528 = uStack_620;
  uStack_524 = uStack_61c;
  local_540[0] = local_638;
                    /* try { // try from 002704a1 to 00270770 has its CatchHandler @ 002717ff */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_4c8,local_540,"format",6);
  lVar5 = clap_builder::parser::error::MatchesError::unwrap("format",6,&local_4c8);
  if (lVar5 == 0) {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_4c8,local_540,&DAT_00152628,8);
    clap_builder::parser::error::MatchesError::unwrap(&local_638,&DAT_00152628,8,&local_4c8);
    if (local_638 == (undefined *)0x0) {
      cVar3 = (*(code *)PTR_get_flag_0044cb30)(local_540,"rfc-email",9);
      if (cVar3 == '\0') {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                  (&local_4c8,local_540,"rfc-3339",8);
        lVar5 = clap_builder::parser::error::MatchesError::unwrap("rfc-3339",8,&local_4c8);
        if (lVar5 == 0) {
          local_5a8 = (undefined *)0x8000000000000004;
        }
        else {
          uVar4 = (*(code *)PTR_from_0044cb38)
                            (*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
          iStack_5a0 = CONCAT31(iStack_5a0._1_3_,uVar4);
          local_5a8 = (undefined *)0x8000000000000002;
        }
      }
      else {
        local_5a8 = (undefined *)0x8000000000000001;
      }
    }
    else {
      local_498 = (undefined4)local_608;
      uStack_494 = local_608._4_4_;
      iStack_490 = iStack_600;
      uStack_48c = uStack_5fc;
      uStack_4a8 = local_618;
      local_4a0 = (undefined4)uStack_610;
      uStack_49c = uStack_610._4_4_;
      uStack_4b8._0_4_ = uStack_628;
      uStack_4b8._4_4_ = uStack_624;
      uStack_4b0 = (undefined **)CONCAT44(uStack_61c,uStack_620);
      local_4c8 = (undefined **)local_638;
      iStack_4c0 = iStack_630;
      uStack_4bc = uStack_62c;
      uVar4 = uumain::___closure__(&local_4c8);
      iStack_5a0 = CONCAT31(iStack_5a0._1_3_,uVar4);
      local_5a8 = (undefined *)0x8000000000000000;
    }
LAB_0027079e:
                    /* try { // try from 0027079e to 0027080e has its CatchHandler @ 002717ba */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_4c8,local_540,"date",4);
    lVar5 = clap_builder::parser::error::MatchesError::unwrap("date",4,&local_4c8);
    if (lVar5 == 0) {
                    /* try { // try from 00270870 to 002708d1 has its CatchHandler @ 002717ba */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_4c8,local_540,"filemode",4);
      lVar5 = clap_builder::parser::error::MatchesError::unwrap("filemode",4,&local_4c8);
      if (lVar5 == 0) {
        local_5c8 = (undefined *)0x0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar5 + 8);
        uVar1 = *(undefined8 *)(lVar5 + 0x10);
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar6,uVar1,"-",1);
        if (cVar3 == '\0') {
                    /* try { // try from 00270cea to 00270cfd has its CatchHandler @ 002717ba */
          (*(code *)PTR_to_owned_0044cb60)(&local_4c8,uVar6,uVar1);
          uStack_5b0 = CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
          uStack_5b4 = uStack_4bc;
          auStack_5c0._8_4_ = iStack_4c0;
          auStack_5c0._0_8_ = local_4c8;
          local_5c8 = (undefined *)0x2;
        }
        else {
          local_5c8 = (undefined *)0x3;
        }
      }
    }
    else {
      (*(code *)PTR_now_0044cb40)(local_1f8);
      parse_datetime::parse_datetime_at_date
                (&local_638,local_1f8,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
      if (local_638 == (undefined *)0x8000000000000002) {
        local_1e8 = iStack_630;
        uStack_1e4 = uStack_62c;
        uStack_1e0 = uStack_628;
        uStack_1dc = uStack_624;
                    /* try { // try from 0027083b to 0027084f has its CatchHandler @ 0027173f */
        auStack_5c0 = chrono::datetime::DateTime<Tz>::signed_duration_since(&local_1e8,local_1f8);
        local_5c8 = (undefined *)0x4;
      }
      else {
                    /* try { // try from 002708e8 to 002708f8 has its CatchHandler @ 0027173f */
        (*(code *)PTR_clone_0044cb48)(&local_4c8,lVar5);
        uStack_5b0 = CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
        auStack_5c0._8_4_ = iStack_4c0;
        auStack_5c0._0_8_ = local_4c8;
        uStack_5b4 = uStack_4bc;
        local_5c8 = (undefined *)0x1;
      }
                    /* try { // try from 00270925 to 00270931 has its CatchHandler @ 002717ba */
      core::ptr::
      drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>
                (&local_638);
    }
                    /* try { // try from 00270932 to 00270a1d has its CatchHandler @ 00271799 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_4c8,local_540,"set",3);
    lVar5 = clap_builder::parser::error::MatchesError::unwrap("set",3,&local_4c8);
    iVar7 = 0;
    if (lVar5 != 0) {
      core::ops::function::FnOnce::call_once(&local_4c8,lVar5);
      uVar6 = CONCAT44((undefined4)uStack_4b8,uStack_4bc);
      local_678 = (undefined4)uStack_4b0;
      uStack_674 = uStack_4b0._4_4_;
      uStack_670 = (undefined4)uStack_4a8;
      uStack_66c = uStack_4a8._4_4_;
      local_668 = CONCAT44(uStack_49c,local_4a0);
      iVar7 = 0;
      if (local_4c8 != (undefined **)0x8000000000000001) {
        if (local_4c8 != (undefined **)0x8000000000000000) {
          local_6a0 = (undefined *)local_4c8;
          local_698 = iStack_4c0;
          local_68c = uStack_4b8._4_4_;
          local_588 = uStack_4b0;
          puStack_580 = uStack_4a8;
          local_638 = (undefined *)0x0;
          iStack_630 = iStack_4c0;
          uStack_62c = uStack_4bc;
          uStack_628 = (undefined4)uStack_4b8;
          uStack_624 = uStack_4b8._4_4_;
          uStack_620 = CONCAT31(uStack_620._1_3_,1);
          local_658 = PTR_fmt_0044cb28;
          local_4c8 = &PTR_s_invalid_date_0040a0e0;
          iStack_4c0 = 1;
          uStack_4bc = 0;
          uStack_4a8 = (undefined *)0x0;
          uStack_4b8 = &local_660;
          uStack_4b0 = (undefined **)0x1;
                    /* try { // try from 00270bc9 to 00270c15 has its CatchHandler @ 00271723 */
          local_694 = uVar6;
          local_660 = &local_638;
          local_578 = local_668;
          core::option::Option<T>::map_or_else(&local_1b8,&local_4c8);
          uStack_4b0 = (undefined **)CONCAT44(uStack_4b0._4_4_,1);
          local_4c8 = (undefined **)CONCAT44(uStack_1b4,local_1b8);
          iStack_4c0 = iStack_1b0;
          uStack_4bc = uStack_1ac;
          uStack_4b8._0_4_ = (undefined4)local_1a8;
          uStack_4b8._4_4_ = (undefined4)((ulong)local_1a8 >> 0x20);
          uVar6 = ::alloc::boxed::Box<T>::new(&local_4c8);
                    /* try { // try from 00270c16 to 00270c25 has its CatchHandler @ 00271717 */
          core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(&local_588);
                    /* try { // try from 00270c26 to 00270c2f has its CatchHandler @ 00271712 */
          core::ptr::drop_in_place<alloc::string::String>(&local_6a0);
                    /* try { // try from 00270c30 to 00270c3c has its CatchHandler @ 002717ba */
          core::ptr::drop_in_place<uu_date::DateSource>(&local_5c8);
                    /* try { // try from 00270c3d to 00270c49 has its CatchHandler @ 002717ff */
          core::ptr::drop_in_place<uu_date::Format>(&local_5a8);
          goto LAB_00270c4a;
        }
        local_548 = uStack_4b8._4_4_;
        iVar7 = iStack_4c0;
        local_550 = uVar6;
      }
    }
    local_5f0 = (*(code *)PTR_get_flag_0044cb30)(local_540,"universal",9);
    local_608 = local_598;
    uStack_610 = CONCAT44(uStack_59c,iStack_5a0);
    local_618 = local_5a8;
    local_638 = local_5c8;
    iStack_630 = auStack_5c0._0_4_;
    uStack_62c = auStack_5c0._4_4_;
    uStack_628 = auStack_5c0._8_4_;
    uStack_624 = uStack_5b4;
    uStack_620 = (undefined4)uStack_5b0;
    uStack_61c = uStack_5b0._4_4_;
    uStack_5fc = (undefined4)local_550;
    uStack_5f8 = (undefined4)((ulong)local_550 >> 0x20);
    local_5f4 = local_548;
    iStack_600 = iVar7;
    if (iVar7 == 0) {
      if (local_5f0 != '\0') {
        (*(code *)PTR_now_0044cb58)(&local_4c8);
        local_640 = iStack_4c0;
        local_648 = (undefined *)local_4c8;
                    /* WARNING: Could not recover jumptable at 0x00270b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar8 = (*(code *)(&DAT_0014ed3c + *(int *)(&DAT_0014ed3c + (long)local_638 * 4)))();
        return auVar8;
      }
                    /* try { // try from 00270c56 to 00270c63 has its CatchHandler @ 00271756 */
      (*(code *)PTR_now_0044cb40)(&local_4c8);
      local_640 = iStack_4c0;
      local_648 = (undefined *)local_4c8;
                    /* WARNING: Could not recover jumptable at 0x00270c99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar8 = (*(code *)(&DAT_0014ed3c + *(int *)(&DAT_0014ed3c + (long)local_638 * 4)))();
      return auVar8;
    }
    local_4f0 = uStack_5f8;
    local_4f8 = CONCAT44(uStack_5fc,iVar7);
                    /* try { // try from 00270aab to 00270ad9 has its CatchHandler @ 00271756 */
    auVar8 = (*(code *)PTR_set_system_datetime_0044cb50)(&local_4f8);
                    /* try { // try from 0027160f to 0027161b has its CatchHandler @ 00271751 */
    core::ptr::drop_in_place<uu_date::Settings>(&local_638);
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
                    /* try { // try from 002716a8 to 002716c2 has its CatchHandler @ 002717ff */
        (*(code *)PTR_slice_error_fail_0044cb90)(uVar6,uVar1,1,uVar1,&DAT_0040a198);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_4c8,lVar5);
      local_598 = CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
      local_5a8 = (undefined *)local_4c8;
      iStack_5a0 = iStack_4c0;
      uStack_59c = uStack_4bc;
      goto LAB_0027079e;
    }
    local_638 = (undefined *)0x0;
    iStack_630 = (int)uVar6;
    uStack_62c = (undefined4)((ulong)uVar6 >> 0x20);
    uStack_628 = (undefined4)uVar1;
    uStack_624 = (undefined4)((ulong)uVar1 >> 0x20);
    uStack_620 = CONCAT31(uStack_620._1_3_,1);
    puStack_580 = PTR_fmt_0044cb28;
    local_4c8 = &PTR_s_invalid_date_0040a0e0;
    iStack_4c0 = 1;
    uStack_4bc = 0;
    uStack_4a8 = (undefined *)0x0;
    uStack_4b8 = &local_588;
    uStack_4b0 = (undefined **)0x1;
    local_588 = &local_638;
    core::option::Option<T>::map_or_else(&local_1d0,&local_4c8);
    uStack_4b0 = (undefined **)CONCAT44(uStack_4b0._4_4_,1);
    local_4c8 = (undefined **)CONCAT44(uStack_1cc,local_1d0);
    iStack_4c0 = iStack_1c8;
    uStack_4bc = uStack_1c4;
    uStack_4b8._0_4_ = (undefined4)local_1c0;
    uStack_4b8._4_4_ = (undefined4)((ulong)local_1c0 >> 0x20);
    uVar6 = ::alloc::boxed::Box<T>::new(&local_4c8);
LAB_00270c4a:
    auVar8._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0040a128;
    auVar8._0_8_ = uVar6;
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_540);
  return auVar8;
}