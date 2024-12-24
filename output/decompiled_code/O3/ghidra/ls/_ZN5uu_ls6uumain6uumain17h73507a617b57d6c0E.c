undefined  [16] __rustcall uu_ls::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined local_530 [16];
  undefined8 local_520;
  undefined local_518 [16];
  undefined8 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined local_3e8 [16];
  undefined8 local_3d8;
  undefined4 local_3d0 [58];
  undefined local_2e8 [712];
  
  (*(code *)PTR_uu_app_0031dd58)(local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_4e8,local_2e8,param_1,param_2);
  if (CONCAT44(uStack_4e4,local_4e8) == -0x8000000000000000) {
    local_5c8 = CONCAT44(uStack_4dc,uStack_4e0);
    cVar1 = *(char *)(local_5c8 + 0xd5);
    if (cVar1 == '\0') {
                    /* try { // try from 001c8bb8 to 001c8bff has its CatchHandler @ 001c8cdd */
      _<T_as_alloc::string::ToString>::to_string(local_530,&local_5c8);
      local_3d0[0] = 1;
      local_3d8 = local_520;
      uVar3 = ::alloc::boxed::Box<T>::new(local_3e8);
    }
    else {
      if ((cVar1 == '\f') || (cVar1 == '\x0e')) {
        auVar4 = (*(code *)PTR_from_0031dd60)();
        return auVar4;
      }
                    /* try { // try from 001c8c06 to 001c8c4d has its CatchHandler @ 001c8ccf */
      _<T_as_alloc::string::ToString>::to_string(local_518,&local_5c8);
      local_3d0[0] = 2;
      local_3d8 = local_508;
      uVar3 = ::alloc::boxed::Box<T>::new(local_3e8);
    }
    core::ptr::drop_in_place<clap_builder::error::Error>(local_5c8);
    auVar4._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0030f1d0;
    auVar4._0_8_ = uVar3;
  }
  else {
    local_548 = local_4c8;
    uStack_544 = uStack_4c4;
    uStack_540 = uStack_4c0;
    uStack_53c = uStack_4bc;
    local_558 = (undefined4)local_4d8;
    uStack_554 = local_4d8._4_4_;
    uStack_550 = uStack_4d0;
    uStack_54c = uStack_4cc;
    local_568 = local_4e8;
    uStack_564 = uStack_4e4;
    uStack_560 = uStack_4e0;
    uStack_55c = uStack_4dc;
                    /* try { // try from 001c8a9f to 001c8ab1 has its CatchHandler @ 001c8ceb */
    (*(code *)PTR_from_0031dd68)(&local_4e8,&local_568);
    auVar4._4_4_ = uStack_4dc;
    auVar4._0_4_ = uStack_4e0;
    auVar4._8_8_ = local_4d8;
    if (CONCAT44(uStack_4e4,local_4e8) != -0x8000000000000000) {
      (*(code *)PTR_memcpy_0031dc80)(local_3d0,&uStack_4d0,0xe8);
      local_3d8 = local_4d8;
      uVar3 = *(undefined8 *)PTR_PATHS_0031dd70;
      uVar2 = *(undefined8 *)(PTR_PATHS_0031dd70 + 8);
                    /* try { // try from 001c8b14 to 001c8b94 has its CatchHandler @ 001c8cf0 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                (&local_4e8,&local_568,uVar3,uVar2);
      clap_builder::parser::error::MatchesError::unwrap(&local_5c8,uVar3,uVar2,&local_4e8);
      if (local_5c8 == 0) {
                    /* try { // try from 001c8c63 to 001c8c9c has its CatchHandler @ 001c8cf0 */
        uumain::___closure__(&local_588);
      }
      else {
        local_4b8 = local_598;
        uStack_4b4 = uStack_594;
        uStack_4b0 = uStack_590;
        uStack_4ac = uStack_58c;
        local_4c8 = local_5a8;
        uStack_4c4 = uStack_5a4;
        uStack_4c0 = uStack_5a0;
        uStack_4bc = uStack_59c;
        uStack_4d0 = uStack_5b0;
        uStack_4cc = uStack_5ac;
        local_4e8 = (undefined4)local_5c8;
        uStack_4e4 = local_5c8._4_4_;
        uStack_4e0 = uStack_5c0;
        uStack_4dc = uStack_5bc;
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::
        from_iter(&local_500,&local_4e8);
        local_588 = local_500;
        uStack_580 = uStack_4f8;
        local_578 = local_4f0;
      }
      local_4d8 = local_578;
      local_4e8 = (undefined4)local_588;
      uStack_4e4 = local_588._4_4_;
      uStack_4e0 = (undefined4)uStack_580;
      uStack_4dc = uStack_580._4_4_;
      auVar4 = (*(code *)PTR_list_0031dd78)(&local_4e8,local_3e8);
                    /* try { // try from 001c8c9d to 001c8caf has its CatchHandler @ 001c8ceb */
      core::ptr::drop_in_place<uu_ls::Config>(local_3e8);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_568);
  }
  return auVar4;
}