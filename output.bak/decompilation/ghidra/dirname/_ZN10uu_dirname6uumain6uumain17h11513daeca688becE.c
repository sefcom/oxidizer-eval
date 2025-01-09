undefined8 __rustcall uu_dirname::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined auVar7 [16];
  undefined local_689;
  long local_688;
  long local_680;
  long local_678;
  long local_670;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 local_648;
  long local_640;
  long local_638;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined8 local_610;
  code *local_608;
  undefined *local_600;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  char *local_5d8;
  undefined8 local_5d0;
  undefined **local_5c8;
  undefined8 uStack_5c0;
  code **local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  code *local_2f8;
  undefined *puStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  char *local_2c8;
  undefined8 local_2c0;
  
  (*(code *)PTR_uu_app_0020b870)(&local_5c8);
  clap_builder::builder::command::Command::after_help
            (&local_2f8,&local_5c8,
             "Output each NAME with its last non-slash component and trailing slashes\nremoved; if NAME contains no /\'s, output \'.\' (meaning the current directory)."
             ,0x95);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_678,&local_2f8,param_1,param_2);
  if (local_678 == -0x8000000000000000) {
    uVar4 = (*(code *)PTR_from_0020b878)();
  }
  else {
    local_610 = local_648;
    local_620 = local_658;
    uStack_61c = uStack_654;
    uStack_618 = uStack_650;
    uStack_614 = uStack_64c;
    local_630 = local_668;
    uStack_62c = uStack_664;
    uStack_628 = uStack_660;
    uStack_624 = uStack_65c;
    local_640 = local_678;
    local_638 = local_670;
                    /* try { // try from 0015d2fc to 0015d3f5 has its CatchHandler @ 0015d699 */
    cVar3 = (*(code *)PTR_get_flag_0020b880)(&local_640,&DAT_001130b8,4);
    local_689 = (code)0xa;
    if (cVar3 != '\0') {
      local_689 = (code)0x0;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_5c8,&local_640,"dir",3);
    pcVar6 = "dir";
    clap_builder::parser::error::MatchesError::unwrap(&local_2f8,"dir",3,&local_5c8);
    local_608 = local_2f8;
    local_600 = puStack_2f0;
    if (local_2f8 == (code *)0x0) {
      local_2d8 = 0;
      uStack_2d4 = 0;
      uStack_2d0 = 0;
      uStack_2cc = 0;
      local_2e8 = SUB84(PTR_EMPTY_0020b888,0);
      uStack_2e4 = (undefined4)((ulong)PTR_EMPTY_0020b888 >> 0x20);
      uStack_2e0 = 0;
      uStack_2dc = 0;
      local_2c0 = 0;
      local_608 = core::ops::function::FnOnce::call_once;
      local_600 = PTR_EMPTY_0020b888;
      local_2c8 = pcVar6;
    }
    local_5f8 = local_2e8;
    uStack_5f4 = uStack_2e4;
    uStack_5f0 = uStack_2e0;
    uStack_5ec = uStack_2dc;
    local_5e8 = local_2d8;
    uStack_5e4 = uStack_2d4;
    uStack_5e0 = uStack_2d0;
    uStack_5dc = uStack_2cc;
    local_5d8 = local_2c8;
    local_5d0 = local_2c0;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_678,&local_608);
    if (CONCAT44(uStack_664,local_668) == 0) {
                    /* try { // try from 0015d61f to 0015d663 has its CatchHandler @ 0015d697 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_2f8);
      local_5b0 = CONCAT44(local_5b0._4_4_,1);
      uVar4 = ::alloc::boxed::Box<T>::new(&local_5c8);
                    /* try { // try from 0015d664 to 0015d670 has its CatchHandler @ 0015d699 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_678);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_640);
    }
    else {
      local_680 = local_670 + CONCAT44(uStack_664,local_668) * 0x18;
      local_688 = local_670;
      lVar5 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_688);
      puVar2 = PTR__print_0020b890;
      if (lVar5 != 0) {
        do {
          uVar4 = *(undefined8 *)(lVar5 + 8);
          uVar1 = *(undefined8 *)(lVar5 + 0x10);
                    /* try { // try from 0015d448 to 0015d5f3 has its CatchHandler @ 0015d69e */
          auVar7 = (*(code *)PTR_parent_0020b898)(uVar4,uVar1);
          lVar5 = auVar7._0_8_;
          if (lVar5 == 0) {
            cVar3 = (*(code *)PTR_is_absolute_0020b8b0)(uVar4,uVar1);
            if ((cVar3 == '\0') &&
               (cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar4,uVar1,"/",1),
               cVar3 == '\0')) {
              local_5c8 = &PTR_s___002059e8;
              uStack_5c0 = 1;
              local_5b8 = (code **)0x8;
              local_5b0 = 0;
              uStack_5a8 = 0;
              (*(code *)puVar2)(&local_5c8);
            }
            else {
              local_5c8 = &PTR_s___002059f8;
              uStack_5c0 = 1;
              local_5b8 = (code **)0x8;
              local_5b0 = 0;
              uStack_5a8 = 0;
              (*(code *)puVar2)(&local_5c8);
            }
          }
          else {
            (*(code *)PTR_components_0020b8a0)(&local_5c8,lVar5);
            (*(code *)PTR_next_0020b8a8)(&local_2f8,&local_5c8);
            if ((char)local_2f8 == '\n') {
              local_5c8 = &PTR_s___002059e8;
              uStack_5c0 = 1;
              local_5b8 = (code **)0x8;
              local_5b0 = 0;
              uStack_5a8 = 0;
              (*(code *)puVar2)(&local_5c8);
            }
            else {
              uVar4 = uucore::mods::display::print_verbatim(lVar5,auVar7._8_8_);
              core::result::Result<T,E>::unwrap(uVar4);
            }
          }
          local_2f8 = (code *)&local_689;
          puStack_2f0 = PTR_fmt_0020b8b8;
          local_5c8 = (undefined **)&DAT_00112aa0;
          uStack_5c0 = 1;
          uStack_5a8 = 0;
          local_5b8 = &local_2f8;
          local_5b0 = 1;
          (*(code *)puVar2)(&local_5c8);
          lVar5 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_688);
        } while (lVar5 != 0);
      }
                    /* try { // try from 0015d607 to 0015d610 has its CatchHandler @ 0015d699 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_678);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_640);
      uVar4 = 0;
    }
  }
  return uVar4;
}