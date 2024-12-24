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
  
  (*(code *)PTR_uu_app_00293460)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (local_3c0,&local_2f8,param_1,param_2);
  if ((code ***)local_3c0._0_8_ == (code ***)0x8000000000000000) {
    auVar7 = (*(code *)PTR_from_00293468)();
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
                    /* try { // try from 001a106a to 001a10aa has its CatchHandler @ 001a152e */
    uVar3 = (*(code *)PTR_get_flag_00293478)
                      (&local_358,*(undefined8 *)PTR_EXPONENTS_00293470,
                       *(undefined8 *)(PTR_EXPONENTS_00293470 + 8));
    local_378 = (*(code *)PTR_stdout_00293480)();
    uVar4 = (*(code *)PTR_lock_00293488)(&local_378);
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_320,0x1000,uVar4);
    uVar4 = *(undefined8 *)PTR_NUMBER_00293490;
    uVar1 = *(undefined8 *)(PTR_NUMBER_00293490 + 8);
                    /* try { // try from 001a10b9 to 001a10ee has its CatchHandler @ 001a152c */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2f8,&local_358,uVar4,uVar1);
    clap_builder::parser::error::MatchesError::unwrap(local_3c0,uVar4,uVar1,&local_2f8);
    if ((code ***)local_3c0._0_8_ == (code ***)0x0) {
                    /* try { // try from 001a1173 to 001a118e has its CatchHandler @ 001a152c */
      local_370 = (*(code *)PTR_stdin_00293498)();
      local_408 = (*(code *)PTR_lock_002934a0)(&local_370);
      local_400 = CONCAT31(local_400._1_3_,extraout_DL) & 0xffffff01;
      local_380 = (code **)0x8000000000000001;
                    /* try { // try from 001a11d3 to 001a11d7 has its CatchHandler @ 001a1527 */
      while (_<std::io::Lines<B>as_core::iter::traits::iterator::Iterator>::next
                       (&local_3d8,&local_408), puVar2 = local_3c8, local_3d8 != local_380) {
        if (local_3d8 == (code **)0x8000000000000000) {
          local_3e0 = local_3d0;
                    /* try { // try from 001a1409 to 001a14f4 has its CatchHandler @ 001a1507 */
          (*(code *)PTR_set_exit_code_00293440)(1);
          local_3f8 = (*(code *)PTR_util_name_00293420)();
          local_368 = (undefined8 *)local_3f8;
          local_360 = _<&T_as_core::fmt::Display>::fmt;
          local_2f8 = (undefined ***)&DAT_0028ad68;
          puStack_2f0 = (undefined *)0x2;
          local_2d8 = 0;
          local_2e8 = (code **)&local_368;
          uStack_2e0 = 1;
          (*(code *)PTR__eprint_00293428)(&local_2f8);
          local_3f8._0_8_ = &local_3e0;
          local_3f8._8_8_ = PTR_fmt_002934a8;
          local_2f8 = (undefined ***)&PTR_s_error_reading_input__0028adc8;
          puStack_2f0 = (undefined *)0x2;
          local_2d8 = 0;
          local_2e8 = (code **)local_3f8;
          uStack_2e0 = 1;
          (*(code *)PTR__eprint_00293428)(&local_2f8);
                    /* try { // try from 001a14fa to 001a14fe has its CatchHandler @ 001a1516 */
          core::ptr::drop_in_place<std::io::error::Error>(local_3e0);
          auVar7 = ZEXT816(0x8000000000000000) << 0x40;
LAB_001a129e:
                    /* try { // try from 001a12a6 to 001a12aa has its CatchHandler @ 001a152c */
          core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(local_408,local_400);
          goto LAB_001a12ab;
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
                    /* try { // try from 001a1250 to 001a126f has its CatchHandler @ 001a1538 */
          auVar7 = core::iter::traits::iterator::Iterator::try_fold(&local_2f8,local_2b8);
          if (auVar7._0_8_ == 0) break;
          auVar7 = print_factors_str(auVar7._0_8_,auVar7._8_8_,local_320,uVar3);
          if (auVar7._0_8_ != 0) {
                    /* try { // try from 001a1291 to 001a129d has its CatchHandler @ 001a1516 */
            core::ptr::drop_in_place<alloc::string::String>(local_3f8);
            goto LAB_001a129e;
          }
        }
                    /* try { // try from 001a127a to 001a1283 has its CatchHandler @ 001a1527 */
        core::ptr::drop_in_place<alloc::string::String>(local_3f8);
      }
                    /* try { // try from 001a12d2 to 001a12e8 has its CatchHandler @ 001a152c */
      core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(local_408,local_400);
LAB_001a12dc:
      ppcVar6 = (code **)_<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush
                                   (local_320);
      if (ppcVar6 != (code **)0x0) {
        local_3d8 = ppcVar6;
                    /* try { // try from 001a12f7 to 001a13c4 has its CatchHandler @ 001a1518 */
        local_3c0 = (*(code *)PTR_util_name_00293420)();
        local_3f8._8_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_2f8 = (undefined ***)&DAT_0028ad68;
        puStack_2f0 = (undefined *)0x2;
        local_2d8 = 0;
        local_2e8 = (code **)local_3f8;
        uStack_2e0 = 1;
        local_3f8._0_8_ = local_3c0;
        (*(code *)PTR__eprint_00293428)(&local_2f8);
        local_3c0._0_8_ = &local_3d8;
        local_3c0._8_8_ = PTR_fmt_002934a8;
        local_2f8 = (undefined ***)&DAT_0028ad88;
        puStack_2f0 = (undefined *)0x2;
        local_2d8 = 0;
        uStack_2e0 = 1;
        local_2e8 = (code **)local_3c0;
        (*(code *)PTR__eprint_00293428)(&local_2f8);
                    /* try { // try from 001a13ca to 001a13ce has its CatchHandler @ 001a152c */
        core::ptr::drop_in_place<std::io::error::Error>(local_3d8);
      }
                    /* try { // try from 001a13cf to 001a13db has its CatchHandler @ 001a152e */
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
                    /* try { // try from 001a1140 to 001a1162 has its CatchHandler @ 001a1533 */
        lVar5 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
                ::next(&local_2f8);
        if (lVar5 == 0) goto LAB_001a12dc;
        auVar7 = print_factors_str(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10),
                                   local_320,uVar3);
      } while (auVar7._0_8_ == 0);
LAB_001a12ab:
                    /* try { // try from 001a12ab to 001a12b7 has its CatchHandler @ 001a152e */
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>
                (local_320);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_358);
    }
  }
  return auVar7;
}