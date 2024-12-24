undefined  [16] __rustcall uu_hashsum::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined uVar1;
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
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  byte bVar19;
  long lVar20;
  undefined auVar21 [16];
  long local_720;
  undefined *local_718;
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
  undefined *local_6a8;
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
  char *pcVar13;
  
  lVar20 = -0x8000000000000000;
  local_688 = param_1;
  local_680 = param_2;
  _<core::iter::adapters::cloned::Cloned<I>as_core::iter::traits::iterator::Iterator>::next
            (&local_678,&local_688);
  if (CONCAT44(uStack_674,local_678) == -0x8000000000000000) {
    (*(code *)PTR_to_owned_004806a8)(&local_608,"hashsum",7);
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
                    /* try { // try from 002773bf to 002773e6 has its CatchHandler @ 00277b0f */
  auVar21 = (*(code *)PTR_file_stem_004806b0)(CONCAT44(uStack_6dc,uStack_6e0),local_6d8);
  uVar17 = auVar21._8_8_;
  pcVar13 = auVar21._0_8_;
  if (pcVar13 == (char *)0x0) {
    uVar17 = 7;
  }
  pcVar18 = "hashsum";
  if (pcVar13 != (char *)0x0) {
    pcVar18 = pcVar13;
  }
  (*(code *)PTR_to_string_lossy_004806b8)(local_6c8,pcVar18,uVar17);
                    /* try { // try from 002773e7 to 002773f8 has its CatchHandler @ 00277ad5 */
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_608,&local_6e8);
  local_668 = local_5f8._0_8_;
  local_678 = (int)local_608;
  uStack_674 = local_608._4_4_;
  uStack_670 = (undefined4)uStack_600;
  uStack_66c = uStack_600._4_4_;
  core::iter::traits::iterator::Iterator::chain(&local_630,&local_678,local_688,local_680);
                    /* try { // try from 0027744b to 00277458 has its CatchHandler @ 00277ac3 */
  (*(code *)PTR_uu_app_004806c0)(&local_608,local_6c0,local_6b8);
  (*(code *)PTR_memcpy_004806c8)(local_2f8,&local_608,0x2c8);
  local_658 = local_610;
  uStack_660 = uStack_618;
  uStack_65c = uStack_614;
  local_678 = local_630;
  uStack_674 = uStack_62c;
  uStack_670 = uStack_628;
  uStack_66c = uStack_624;
                    /* try { // try from 002774af to 002774e1 has its CatchHandler @ 00277adc */
  clap_builder::builder::command::Command::try_get_matches_from(&local_608,local_2f8,&local_678);
  if (local_608 == -0x8000000000000000) {
    auVar21 = (*(code *)PTR_from_004806d0)();
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
                    /* try { // try from 0027752b to 002775e5 has its CatchHandler @ 00277ad7 */
    cVar2 = ::alloc::string::_<impl_core::cmp::PartialEq<&str>for_alloc::borrow::Cow<str>>::eq
                      (local_6c0,local_6b8);
    if (cVar2 == '\0') {
LAB_002775be:
      puVar16 = (undefined *)0x0;
      if (local_340 == '\0') {
LAB_002775c5:
        (*(code *)PTR_detect_algo_004806e8)(&local_608,local_6c0,local_6b8,puVar16,lVar20);
      }
      else {
LAB_002775a9:
        (*(code *)PTR_create_algorithm_from_flags_004806e0)(&local_608,&local_720);
      }
      uVar17 = local_5f8._0_8_;
      puVar16 = uStack_600;
      lVar20 = local_608;
      auVar21._8_8_ = local_5f8._0_8_;
      auVar21._0_8_ = uStack_600;
      if (local_608 != 0) {
        local_698 = local_5f8._8_4_;
        uStack_694 = local_5f8._12_4_;
        uStack_690 = (undefined4)local_5e8;
        uStack_68c = local_5e8._4_4_;
        local_6b0 = local_608;
        local_6a8 = uStack_600;
        local_6a0 = local_5f8._0_8_;
                    /* try { // try from 00277634 to 002777b8 has its CatchHandler @ 00277ae1 */
        cVar2 = (*(code *)PTR_get_flag_004806f0)(&local_720,"binary",6);
        if (cVar2 == '\0') {
          (*(code *)PTR_get_flag_004806f0)(&local_720,"text",4);
        }
        cVar3 = (*(code *)PTR_get_flag_004806f0)(&local_720,"check",5);
        bVar4 = (*(code *)PTR_get_flag_004806f0)(&local_720,"status",6);
        bVar5 = (*(code *)PTR_get_flag_004806f0)(&local_720,"quiet",5);
        cVar6 = (*(code *)PTR_get_flag_004806f0)(&local_720,"strict",6);
        bVar7 = (*(code *)PTR_get_flag_004806f0)(&local_720,"warnZeroV",4);
        bVar8 = (*(code *)PTR_get_flag_004806f0)(&local_720,"ignore-missing",0xe);
        bVar5 = bVar5 | bVar4;
        if (bVar8 == 0) {
          if (cVar3 != '\0') goto LAB_00277726;
          if (cVar6 == '\0' && bVar5 == 0) {
                    /* try { // try from 002778ac to 0027791a has its CatchHandler @ 00277ae1 */
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                      (&local_608,&local_720,"no-names",8);
            if ((int)local_608 != 2) {
              uStack_600 = (undefined *)0x0;
            }
            puVar16 = &DAT_00169ad0;
            if (uStack_600 != (undefined *)0x0) {
              puVar16 = uStack_600;
            }
            uVar1 = *puVar16;
            uVar11 = (*(code *)PTR_get_flag_004806f0)(&local_720,"zero",4);
            auVar21 = _<alloc::boxed::Box<F,A>as_core::ops::function::Fn<Args>>::call(&local_6a0);
            uVar17 = CONCAT44(uStack_68c,uStack_690);
                    /* try { // try from 00277929 to 0027793f has its CatchHandler @ 00277a91 */
            uVar12 = (*(code *)PTR_get_flag_004806f0)(&local_720,"tag",3);
                    /* try { // try from 00277940 to 00277981 has its CatchHandler @ 00277ab3 */
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                      (&local_608,&local_720,"fileEDOMmode",4);
            clap_builder::parser::error::MatchesError::unwrap(local_338,"fileEDOMmode",4,&local_608)
            ;
            local_5e8 = uVar17;
            local_5f8 = auVar21;
            if (local_338[0] == 0) {
              uStack_5e0._0_2_ = CONCAT11(uVar12,cVar2);
              uStack_5e0._0_3_ = CONCAT12(uVar1,(undefined2)uStack_5e0);
              uStack_5e0 = CONCAT13(uVar11,(undefined3)uStack_5e0);
              auVar21 = hashsum(&local_608);
            }
            else {
              uStack_5e0._0_2_ = CONCAT11(uVar12,cVar2);
              uStack_5e0._0_3_ = CONCAT12(uVar1,(undefined2)uStack_5e0);
              uStack_5e0 = CONCAT13(uVar11,(undefined3)uStack_5e0);
                    /* try { // try from 002779e2 to 00277a5a has its CatchHandler @ 00277a8f */
              auVar21 = hashsum(&local_608,local_338);
            }
                    /* try { // try from 00277a71 to 00277a75 has its CatchHandler @ 00277ad7 */
            core::ptr::drop_in_place<uu_hashsum::Options>(local_6a0,CONCAT44(uStack_694,local_698));
                    /* try { // try from 00277a76 to 00277a7f has its CatchHandler @ 00277adc */
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                      (&local_720);
                    /* try { // try from 00277a80 to 00277a89 has its CatchHandler @ 00277b0f */
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_6c8);
            goto LAB_0027788a;
          }
          bVar19 = bVar5 | 2;
LAB_00277851:
          uVar15 = ::alloc::boxed::Box<T>::new(bVar19);
          auVar21._8_8_ = &DAT_0043c940;
          auVar21._0_8_ = uVar15;
        }
        else {
          bVar19 = 1;
          if (cVar3 == '\0') goto LAB_00277851;
LAB_00277726:
          bVar9 = (*(code *)PTR_get_flag_004806f0)(&local_720,"text",4);
          bVar10 = (*(code *)PTR_get_flag_004806f0)(&local_720,"binary",6);
          bVar19 = 0xb;
          if ((bVar9 | bVar10) == 1) goto LAB_00277851;
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                    (&local_608,&local_720,"fileEDOMmode",4);
          clap_builder::parser::error::MatchesError::unwrap(&local_678,"fileEDOMmode",4,&local_608);
          core::option::Option<T>::map_or_else(&local_608,&local_678);
                    /* try { // try from 00277817 to 0027782d has its CatchHandler @ 00277aa1 */
          auVar21 = uucore::features::checksum::perform_checksum_validation
                              (uStack_600,uStack_600 + local_5f8._0_8_ * 0x10,lVar20,puVar16,1,
                               CONCAT44(uStack_68c,uStack_690),
                               (ulong)CONCAT15(bVar7 & (bVar4 ^ 1),
                                               CONCAT14(cVar6,(uint)bVar4 << 0x18 |
                                                              (uint)bVar5 << 0x10)) |
                               (ulong)bVar8 << 8);
                    /* try { // try from 0027782e to 00277858 has its CatchHandler @ 00277ae1 */
          core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&local_608);
        }
                    /* try { // try from 0027786b to 00277872 has its CatchHandler @ 00277ad7 */
        core::ptr::drop_in_place<uu_hashsum::Options>(uVar17,CONCAT44(uStack_694,local_698));
      }
    }
    else {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_608,&local_720,"length",6);
      puVar14 = (undefined8 *)
                clap_builder::parser::error::MatchesError::unwrap("length",6,&local_608);
      if (puVar14 == (undefined8 *)0x0) goto LAB_002775be;
      (*(code *)PTR_calculate_blake2b_length_004806d8)(&local_608,*puVar14);
      auVar21._8_8_ = local_5f8._0_8_;
      auVar21._0_8_ = uStack_600;
      if (local_608 == 0) {
        puVar16 = uStack_600;
        lVar20 = local_5f8._0_8_;
        if (local_340 == '\0') goto LAB_002775c5;
        goto LAB_002775a9;
      }
    }
                    /* try { // try from 00277876 to 0027787f has its CatchHandler @ 00277adc */
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_720);
  }
                    /* try { // try from 00277880 to 00277889 has its CatchHandler @ 00277b0f */
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_6c8);
LAB_0027788a:
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_6e8);
  return auVar21;
}