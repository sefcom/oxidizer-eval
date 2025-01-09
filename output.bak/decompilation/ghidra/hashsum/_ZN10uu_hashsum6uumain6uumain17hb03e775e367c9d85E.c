undefined  [16] __rustcall uu_hashsum::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined uVar11;
  undefined uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  byte bVar16;
  long lVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  long local_720;
  char *local_718;
  undefined4 local_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined8 local_6f0;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  long local_6d8;
  undefined local_6c8 [8];
  undefined8 local_6c0;
  undefined8 local_6b8;
  long local_6b0;
  char *local_6a8;
  long local_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined8 local_688;
  undefined8 local_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  long local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined8 local_658;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined local_5f8 [16];
  undefined8 local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined8 local_5d8;
  char local_340;
  long local_338 [8];
  undefined local_2f8 [712];
  
  lVar17 = -0x8000000000000000;
  local_688 = param_1;
  local_680 = param_2;
  _<core::iter::adapters::cloned::Cloned<I>as_core::iter::traits::iterator::Iterator>::next
            (&local_678,&local_688);
  if (CONCAT44(uStack_674,local_678) == -0x8000000000000000) {
    (*(code *)PTR_to_owned_0047f5c0)(&local_608,"hashsum",7);
    local_6d8 = local_5f8._0_8_;
    local_6e8 = (int)local_608;
    uStack_6e4 = local_608._4_4_;
    uStack_6e0 = (undefined4)uStack_600;
    uStack_6dc = uStack_600._4_4_;
  }
  else {
    local_6d8 = local_668;
    local_6e8 = local_678;
    uStack_6e4 = uStack_674;
    uStack_6e0 = uStack_670;
    uStack_6dc = uStack_66c;
  }
                    /* try { // try from 002772bf to 002772e6 has its CatchHandler @ 00277a0f */
  auVar18 = (*(code *)PTR_file_stem_0047f5c8)(CONCAT44(uStack_6dc,uStack_6e0),local_6d8);
  if (auVar18._0_8_ == 0) {
    auVar18._8_8_ = 7;
    auVar18._0_8_ = "hashsum";
  }
  (*(code *)PTR_to_string_lossy_0047f5d0)(local_6c8,auVar18._0_8_,auVar18._8_8_);
                    /* try { // try from 002772e7 to 002772f8 has its CatchHandler @ 002779d5 */
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_608,&local_6e8);
  local_668 = local_5f8._0_8_;
  local_678 = (int)local_608;
  uStack_674 = local_608._4_4_;
  uStack_670 = (undefined4)uStack_600;
  uStack_66c = uStack_600._4_4_;
  core::iter::traits::iterator::Iterator::chain(&local_630,&local_678,local_688,local_680);
                    /* try { // try from 0027734b to 00277358 has its CatchHandler @ 002779c3 */
  (*(code *)PTR_uu_app_0047f5d8)(&local_608,local_6c0,local_6b8);
  (*(code *)PTR_memcpy_0047f5e0)(local_2f8,&local_608,0x2c8);
  local_658 = local_610;
  uStack_660 = uStack_618;
  uStack_65c = uStack_614;
  local_678 = local_630;
  uStack_674 = uStack_62c;
  uStack_670 = uStack_628;
  uStack_66c = uStack_624;
                    /* try { // try from 002773af to 002773e1 has its CatchHandler @ 002779dc */
  clap_builder::builder::command::Command::try_get_matches_from(&local_608,local_2f8,&local_678);
  if (local_608 == -0x8000000000000000) {
    auVar19 = (*(code *)PTR_from_0047f5e8)();
  }
  else {
    local_6f0 = local_5d8;
    local_700 = (undefined4)local_5e8;
    uStack_6fc = local_5e8._4_4_;
    uStack_6f8 = uStack_5e0;
    uStack_6f4 = uStack_5dc;
    local_710 = local_5f8._0_4_;
    uStack_70c = local_5f8._4_4_;
    uStack_708 = local_5f8._8_4_;
    uStack_704 = local_5f8._12_4_;
    local_720 = local_608;
    local_718 = uStack_600;
                    /* try { // try from 0027742b to 002774e5 has its CatchHandler @ 002779d7 */
    cVar2 = ::alloc::string::_<impl_core::cmp::PartialEq<&str>for_alloc::borrow::Cow<str>>::eq
                      (local_6c0,local_6b8);
    if (cVar2 == '\0') {
LAB_002774be:
      pcVar15 = (char *)0x0;
      if (local_340 == '\0') {
LAB_002774c5:
        (*(code *)PTR_detect_algo_0047f600)(&local_608,local_6c0,local_6b8,pcVar15,lVar17);
      }
      else {
LAB_002774a9:
        (*(code *)PTR_create_algorithm_from_flags_0047f5f8)(&local_608,&local_720);
      }
      uVar1 = local_5f8._0_8_;
      pcVar15 = uStack_600;
      lVar17 = local_608;
      auVar19._8_8_ = local_5f8._0_8_;
      auVar19._0_8_ = uStack_600;
      if (local_608 != 0) {
        local_698 = local_5f8._8_4_;
        uStack_694 = local_5f8._12_4_;
        uStack_690 = (undefined4)local_5e8;
        uStack_68c = local_5e8._4_4_;
        local_6b0 = local_608;
        local_6a8 = uStack_600;
        local_6a0 = local_5f8._0_8_;
                    /* try { // try from 00277534 to 002776b8 has its CatchHandler @ 002779e1 */
        cVar2 = (*(code *)PTR_get_flag_0047f608)(&local_720,"binary",6);
        if (cVar2 == '\0') {
          (*(code *)PTR_get_flag_0047f608)(&local_720,"text",4);
        }
        cVar3 = (*(code *)PTR_get_flag_0047f608)(&local_720,"check",5);
        bVar4 = (*(code *)PTR_get_flag_0047f608)(&local_720,"status",6);
        bVar5 = (*(code *)PTR_get_flag_0047f608)(&local_720,"quiet",5);
        cVar6 = (*(code *)PTR_get_flag_0047f608)(&local_720,"strict",6);
        bVar7 = (*(code *)PTR_get_flag_0047f608)(&local_720,"warnZeroV",4);
        bVar8 = (*(code *)PTR_get_flag_0047f608)(&local_720,"ignore-missing",0xe);
        bVar5 = bVar5 | bVar4;
        if (bVar8 == 0) {
          if (cVar3 != '\0') goto LAB_00277626;
          if (cVar6 == '\0' && bVar5 == 0) {
                    /* try { // try from 002777ac to 0027781a has its CatchHandler @ 002779e1 */
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                      (&local_608,&local_720,"no-names",8);
            if ((int)local_608 != 2) {
              uStack_600 = (char *)0x0;
            }
            pcVar15 = "";
            if (uStack_600 != (char *)0x0) {
              pcVar15 = uStack_600;
            }
            cVar3 = *pcVar15;
            uVar11 = (*(code *)PTR_get_flag_0047f608)(&local_720,"zero",4);
            auVar18 = _<alloc::boxed::Box<F,A>as_core::ops::function::Fn<Args>>::call(&local_6a0);
            uVar1 = CONCAT44(uStack_68c,uStack_690);
                    /* try { // try from 00277829 to 0027783f has its CatchHandler @ 00277991 */
            uVar12 = (*(code *)PTR_get_flag_0047f608)(&local_720,"tag",3);
                    /* try { // try from 00277840 to 00277881 has its CatchHandler @ 002779b3 */
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                      (&local_608,&local_720,"fileEDOMmode",4);
            clap_builder::parser::error::MatchesError::unwrap(local_338,"fileEDOMmode",4,&local_608)
            ;
            local_5e8 = uVar1;
            local_5f8 = auVar18;
            if (local_338[0] == 0) {
              uStack_5e0._0_2_ = CONCAT11(uVar12,cVar2);
              uStack_5e0._0_3_ = CONCAT12(cVar3,(undefined2)uStack_5e0);
              uStack_5e0 = CONCAT13(uVar11,(undefined3)uStack_5e0);
              auVar19 = hashsum(&local_608);
            }
            else {
              uStack_5e0._0_2_ = CONCAT11(uVar12,cVar2);
              uStack_5e0._0_3_ = CONCAT12(cVar3,(undefined2)uStack_5e0);
              uStack_5e0 = CONCAT13(uVar11,(undefined3)uStack_5e0);
                    /* try { // try from 002778e2 to 0027795a has its CatchHandler @ 0027798f */
              auVar19 = hashsum(&local_608,local_338);
            }
                    /* try { // try from 00277971 to 00277975 has its CatchHandler @ 002779d7 */
            core::ptr::drop_in_place<uu_hashsum::Options>(local_6a0,CONCAT44(uStack_694,local_698));
                    /* try { // try from 00277976 to 0027797f has its CatchHandler @ 002779dc */
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                      (&local_720);
                    /* try { // try from 00277980 to 00277989 has its CatchHandler @ 00277a0f */
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_6c8);
            goto LAB_0027778a;
          }
          bVar16 = bVar5 | 2;
LAB_00277751:
          uVar14 = ::alloc::boxed::Box<T>::new(bVar16);
          auVar19._8_8_ = &DAT_0043b9d0;
          auVar19._0_8_ = uVar14;
        }
        else {
          bVar16 = 1;
          if (cVar3 == '\0') goto LAB_00277751;
LAB_00277626:
          bVar9 = (*(code *)PTR_get_flag_0047f608)(&local_720,"text",4);
          bVar10 = (*(code *)PTR_get_flag_0047f608)(&local_720,"binary",6);
          bVar16 = 0xb;
          if ((bVar9 | bVar10) == 1) goto LAB_00277751;
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                    (&local_608,&local_720,"fileEDOMmode",4);
          clap_builder::parser::error::MatchesError::unwrap(&local_678,"fileEDOMmode",4,&local_608);
          core::option::Option<T>::map_or_else(&local_608,&local_678);
                    /* try { // try from 00277717 to 0027772d has its CatchHandler @ 002779a1 */
          auVar19 = uucore::features::checksum::perform_checksum_validation
                              (uStack_600,uStack_600 + local_5f8._0_8_ * 0x10,lVar17,pcVar15,1,
                               CONCAT44(uStack_68c,uStack_690),
                               (ulong)CONCAT15(bVar7 & (bVar4 ^ 1),
                                               CONCAT14(cVar6,(uint)bVar4 << 0x18 |
                                                              (uint)bVar5 << 0x10)) |
                               (ulong)bVar8 << 8);
                    /* try { // try from 0027772e to 00277758 has its CatchHandler @ 002779e1 */
          core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&local_608);
        }
                    /* try { // try from 0027776b to 00277772 has its CatchHandler @ 002779d7 */
        core::ptr::drop_in_place<uu_hashsum::Options>(uVar1,CONCAT44(uStack_694,local_698));
      }
    }
    else {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_608,&local_720,"length",6);
      puVar13 = (undefined8 *)
                clap_builder::parser::error::MatchesError::unwrap("length",6,&local_608);
      if (puVar13 == (undefined8 *)0x0) goto LAB_002774be;
      (*(code *)PTR_calculate_blake2b_length_0047f5f0)(&local_608,*puVar13);
      auVar19._8_8_ = local_5f8._0_8_;
      auVar19._0_8_ = uStack_600;
      if (local_608 == 0) {
        pcVar15 = uStack_600;
        lVar17 = local_5f8._0_8_;
        if (local_340 == '\0') goto LAB_002774c5;
        goto LAB_002774a9;
      }
    }
                    /* try { // try from 00277776 to 0027777f has its CatchHandler @ 002779dc */
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_720);
  }
                    /* try { // try from 00277780 to 00277789 has its CatchHandler @ 00277a0f */
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_6c8);
LAB_0027778a:
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_6e8);
  return auVar19;
}