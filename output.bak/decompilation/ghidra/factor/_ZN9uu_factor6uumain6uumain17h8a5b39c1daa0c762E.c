undefined  [16] __rustcall uu_factor::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined uVar3;
  undefined8 uVar4;
  long lVar5;
  code **ppcVar6;
  undefined extraout_DL;
  undefined auVar7 [16];
  undefined8 local_408;
  uint local_400;
  undefined local_3f8 [16];
  undefined *local_3e8;
  code *local_3e0;
  code **local_3d8;
  code *local_3d0;
  undefined *local_3c8;
  undefined local_3c0 [16];
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 local_390;
  undefined8 uStack_388;
  code **local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 *local_368;
  code *local_360;
  undefined ***local_358;
  undefined *local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined local_320 [40];
  undefined ***local_2f8;
  undefined *puStack_2f0;
  code **local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined local_2b8 [648];
  
  (*(code *)PTR_uu_app_002934b0)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (local_3c0,&local_2f8,param_1,param_2);
  if ((code ***)local_3c0._0_8_ == (code ***)0x8000000000000000) {
    auVar7 = (*(code *)PTR_from_002934b8)();
  }
  else {
    local_328 = local_390;
    local_338 = local_3a0;
    uStack_334 = uStack_39c;
    uStack_330 = uStack_398;
    uStack_32c = uStack_394;
    local_348 = local_3b0;
    uStack_344 = uStack_3ac;
    uStack_340 = uStack_3a8;
    uStack_33c = uStack_3a4;
    local_358 = (undefined ***)local_3c0._0_8_;
    local_350 = (undefined *)local_3c0._8_8_;
                    /* try { // try from 001a465a to 001a469a has its CatchHandler @ 001a4b1e */
    uVar3 = (*(code *)PTR_get_flag_002934c8)
                      (&local_358,*(undefined8 *)PTR_EXPONENTS_002934c0,
                       *(undefined8 *)(PTR_EXPONENTS_002934c0 + 8));
    local_378 = (*(code *)PTR_stdout_002934d0)();
    uVar4 = (*(code *)PTR_lock_002934d8)(&local_378);
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_320,0x1000,uVar4);
    uVar4 = *(undefined8 *)PTR_NUMBER_002934e0;
    uVar1 = *(undefined8 *)(PTR_NUMBER_002934e0 + 8);
                    /* try { // try from 001a46a9 to 001a46de has its CatchHandler @ 001a4b1c */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2f8,&local_358,uVar4,uVar1);
    clap_builder::parser::error::MatchesError::unwrap(local_3c0,uVar4,uVar1,&local_2f8);
    if ((code ***)local_3c0._0_8_ == (code ***)0x0) {
                    /* try { // try from 001a4763 to 001a477e has its CatchHandler @ 001a4b1c */
      local_370 = (*(code *)PTR_stdin_002934e8)();
      local_408 = (*(code *)PTR_lock_002934f0)(&local_370);
      local_400 = CONCAT31(local_400._1_3_,extraout_DL) & 0xffffff01;
      local_380 = (code **)0x8000000000000001;
                    /* try { // try from 001a47c3 to 001a47c7 has its CatchHandler @ 001a4b17 */
      while (_<std::io::Lines<B>as_core::iter::traits::iterator::Iterator>::next
                       (&local_3d8,&local_408), puVar2 = local_3c8, local_3d8 != local_380) {
        if (local_3d8 == (code **)0x8000000000000000) {
          local_3e0 = local_3d0;
                    /* try { // try from 001a49f9 to 001a4ae4 has its CatchHandler @ 001a4af7 */
          (*(code *)PTR_set_exit_code_00293490)(1);
          local_3f8 = (*(code *)PTR_util_name_00293470)();
          local_368 = (undefined8 *)local_3f8;
          local_360 = _<&T_as_core::fmt::Display>::fmt;
          local_2f8 = (undefined ***)&DAT_0028af30;
          puStack_2f0 = (undefined *)0x2;
          local_2d8 = 0;
          local_2e8 = (code **)&local_368;
          uStack_2e0 = 1;
          (*(code *)PTR__eprint_00293478)(&local_2f8);
          local_3f8._0_8_ = &local_3e0;
          local_3f8._8_8_ = PTR_fmt_002934f8;
          local_2f8 = (undefined ***)&DAT_0028afa8;
          puStack_2f0 = (undefined *)0x2;
          local_2d8 = 0;
          local_2e8 = (code **)local_3f8;
          uStack_2e0 = 1;
          (*(code *)PTR__eprint_00293478)(&local_2f8);
                    /* try { // try from 001a4aea to 001a4aee has its CatchHandler @ 001a4b06 */
          core::ptr::drop_in_place<std::io::error::Error>(local_3e0);
          auVar7 = ZEXT816(0x8000000000000000) << 0x40;
LAB_001a488e:
                    /* try { // try from 001a4896 to 001a489a has its CatchHandler @ 001a4b1c */
          core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(local_408,local_400);
          goto LAB_001a489b;
        }
        local_3f8._0_8_ = local_3d8;
        local_3f8._8_8_ = local_3d0;
        local_3e8 = local_3c8;
        _<core::str::pattern::MultiCharEqPattern<C>as_core::str::pattern::Pattern>::into_searcher
                  (&local_2e8,local_3d0,local_3c8);
        local_2f8 = (code ***)0x0;
        puStack_2f0 = puVar2;
        uStack_2c0 = CONCAT62(uStack_2c0._2_6_,1);
        while( true ) {
                    /* try { // try from 001a4840 to 001a485f has its CatchHandler @ 001a4b28 */
          auVar7 = core::iter::traits::iterator::Iterator::try_fold(&local_2f8,local_2b8);
          if (auVar7._0_8_ == 0) break;
          auVar7 = print_factors_str(auVar7._0_8_,auVar7._8_8_,local_320,uVar3);
          if (auVar7._0_8_ != 0) {
                    /* try { // try from 001a4881 to 001a488d has its CatchHandler @ 001a4b06 */
            core::ptr::drop_in_place<alloc::string::String>(local_3f8);
            goto LAB_001a488e;
          }
        }
                    /* try { // try from 001a486a to 001a4873 has its CatchHandler @ 001a4b17 */
        core::ptr::drop_in_place<alloc::string::String>(local_3f8);
      }
                    /* try { // try from 001a48c2 to 001a48d8 has its CatchHandler @ 001a4b1c */
      core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(local_408,local_400);
LAB_001a48cc:
      ppcVar6 = (code **)_<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush
                                   (local_320);
      if (ppcVar6 != (code **)0x0) {
        local_3d8 = ppcVar6;
                    /* try { // try from 001a48e7 to 001a49b4 has its CatchHandler @ 001a4b08 */
        local_3c0 = (*(code *)PTR_util_name_00293470)();
        local_3f8._8_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_2f8 = (undefined ***)&DAT_0028af30;
        puStack_2f0 = (undefined *)0x2;
        local_2d8 = 0;
        local_2e8 = (code **)local_3f8;
        uStack_2e0 = 1;
        local_3f8._0_8_ = local_3c0;
        (*(code *)PTR__eprint_00293478)(&local_2f8);
        local_3c0._0_8_ = &local_3d8;
        local_3c0._8_8_ = PTR_fmt_002934f8;
        local_2f8 = (undefined ***)&DAT_0028af50;
        puStack_2f0 = (undefined *)0x2;
        local_2d8 = 0;
        uStack_2e0 = 1;
        local_2e8 = (code **)local_3c0;
        (*(code *)PTR__eprint_00293478)(&local_2f8);
                    /* try { // try from 001a49ba to 001a49be has its CatchHandler @ 001a4b1c */
        core::ptr::drop_in_place<std::io::error::Error>(local_3d8);
      }
                    /* try { // try from 001a49bf to 001a49cb has its CatchHandler @ 001a4b1e */
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>
                (local_320);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_358);
      auVar7 = ZEXT816(0x8000000000000000) << 0x40;
    }
    else {
      local_2e8 = (code **)CONCAT44(uStack_3ac,local_3b0);
      uStack_2e0 = CONCAT44(uStack_3a4,uStack_3a8);
      local_2d8 = CONCAT44(uStack_39c,local_3a0);
      local_2c8 = local_390;
      uStack_2c0 = uStack_388;
      local_2f8 = (undefined ***)local_3c0._0_8_;
      puStack_2f0 = (undefined *)local_3c0._8_8_;
      do {
                    /* try { // try from 001a4730 to 001a4752 has its CatchHandler @ 001a4b23 */
        lVar5 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
                ::next(&local_2f8);
        if (lVar5 == 0) goto LAB_001a48cc;
        auVar7 = print_factors_str(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10),
                                   local_320,uVar3);
      } while (auVar7._0_8_ == 0);
LAB_001a489b:
                    /* try { // try from 001a489b to 001a48a7 has its CatchHandler @ 001a4b1e */
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>
                (local_320);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_358);
    }
  }
  return auVar7;
}