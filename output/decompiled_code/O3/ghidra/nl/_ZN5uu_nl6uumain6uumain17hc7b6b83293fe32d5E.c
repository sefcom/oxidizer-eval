undefined  [16] __rustcall uu_nl::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined auVar3 [16];
  char cVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong unaff_R12;
  undefined auVar8 [16];
  undefined local_468 [16];
  undefined **local_458;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 *local_400;
  code *local_3f8;
  long local_3f0;
  undefined *local_3e8;
  code *local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined local_398 [8];
  undefined8 local_390;
  long local_388;
  code *local_380;
  code *local_378;
  undefined *local_370;
  ulong local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined local_2f8 [96];
  ulong local_298;
  
  (*(code *)PTR_uu_app_00418340)(local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_448,local_2f8,param_1,param_2);
  if (local_448 == (undefined **)0x8000000000000000) {
    auVar8 = (*(code *)PTR_from_00418348)();
  }
  else {
    local_340 = local_418;
    local_350 = (undefined4)local_428;
    uStack_34c = local_428._4_4_;
    uStack_348 = uStack_420;
    uStack_344 = uStack_41c;
    local_360 = (undefined4)local_438;
    uStack_35c = local_438._4_4_;
    uStack_358 = (undefined4)uStack_430;
    uStack_354 = uStack_430._4_4_;
    local_370 = (undefined *)local_448;
    local_368 = uStack_440;
                    /* try { // try from 0025a0ac to 0025a0b9 has its CatchHandler @ 0025a60b */
    (*(code *)PTR_default_00418350)(local_2f8);
                    /* try { // try from 0025a0ba to 0025a0d7 has its CatchHandler @ 0025a610 */
    (*(code *)PTR_parse_options_00418358)(local_398,local_2f8,&local_370);
    if (local_388 == 0) {
                    /* try { // try from 0025a1e1 to 0025a279 has its CatchHandler @ 0025a615 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                (&local_448,&local_370,"fileEDOMmode",4);
      clap_builder::parser::error::MatchesError::unwrap(&local_3d8,"fileEDOMmode",4,&local_448);
      if (local_3d8 == (undefined *)0x0) {
        puVar6 = (undefined4 *)::alloc::alloc::Global::alloc_impl(0x18);
        if (puVar6 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_alloc_error_004182e8)(8,0x18);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
                    /* try { // try from 0025a28f to 0025a2a7 has its CatchHandler @ 0025a5bc */
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_448,&DAT_0016511c,1);
        local_458 = (undefined **)local_438;
        local_468._0_8_ = local_448;
        local_468._8_8_ = uStack_440;
        *(undefined8 ***)(puVar6 + 4) = local_438;
        *puVar6 = (undefined4)local_448;
        puVar6[1] = local_448._4_4_;
        puVar6[2] = (undefined4)uStack_440;
        puVar6[3] = uStack_440._4_4_;
                    /* try { // try from 0025a2c3 to 0025a2d4 has its CatchHandler @ 0025a615 */
        ::alloc::slice::hack::into_vec(&local_400,puVar6,1);
      }
      else {
        local_308 = local_3a8;
        uStack_304 = uStack_3a4;
        uStack_300 = uStack_3a0;
        uStack_2fc = uStack_39c;
        local_318 = local_3b8;
        uStack_314 = uStack_3b4;
        uStack_310 = uStack_3b0;
        uStack_30c = uStack_3ac;
        local_328 = (undefined4)local_3c8;
        uStack_324 = local_3c8._4_4_;
        uStack_320 = uStack_3c0;
        uStack_31c = uStack_3bc;
        local_338 = (undefined4)local_3d8;
        uStack_334 = local_3d8._4_4_;
        uStack_330 = (undefined4)uStack_3d0;
        uStack_32c = uStack_3d0._4_4_;
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_400,&local_338);
      }
      local_3d8 = (undefined *)0x1;
      uStack_3d0 = local_298;
      local_3c8 = (undefined **)0x0;
      local_378 = local_3f8 + local_3f0 * 0x18;
      local_380 = local_3f8;
      lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_380);
      if (lVar7 != 0) {
        do {
          puVar1 = *(undefined **)(lVar7 + 8);
          unaff_R12 = *(ulong *)(lVar7 + 0x10);
                    /* try { // try from 0025a36c to 0025a398 has its CatchHandler @ 0025a61a */
          cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (puVar1,unaff_R12,&DAT_0016511c,1);
          if (cVar4 == '\0') {
                    /* try { // try from 0025a3d0 to 0025a4f9 has its CatchHandler @ 0025a61a */
            cVar4 = (*(code *)PTR_is_dir_00418368)(puVar1,unaff_R12);
            if (cVar4 == '\0') {
              std::fs::File::open(&local_448,puVar1,unaff_R12);
              _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
              ::map_err_context(local_468,&local_448,lVar7);
              auVar8._8_8_ = local_468._8_8_;
              auVar8._0_8_ = local_468._0_8_;
              if ((undefined *)local_468._0_8_ == (undefined *)0x0) {
                std::io::buffered::bufreader::BufReader<R>::with_capacity
                          (&local_448,0x2000,local_468._8_8_ & 0xffffffff);
                    /* try { // try from 0025a4fa to 0025a511 has its CatchHandler @ 0025a5e8 */
                auVar8 = nl(&local_448,&local_3d8,local_2f8);
                if (auVar8._0_8_ == 0) {
                  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>
                            (&local_448);
                  goto LAB_0025a350;
                }
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>
                          (&local_448);
              }
LAB_0025a59b:
                    /* try { // try from 0025a59b to 0025a5b9 has its CatchHandler @ 0025a615 */
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_400);
              goto LAB_0025a1b5;
            }
            local_468 = (*(code *)PTR_util_name_00418320)();
            local_3e0 = _<&T_as_core::fmt::Display>::fmt;
            local_448 = (undefined **)&DAT_003d7920;
            uStack_440 = 2;
            local_428 = 0;
            local_438 = (undefined8 **)&local_3e8;
            uStack_430 = 1;
            local_3e8 = local_468;
            (*(code *)PTR__eprint_00418328)(&local_448);
            local_3e0 = (code *)PTR_fmt_00418370;
            local_448 = (undefined **)&DAT_003d7980;
            uStack_440 = 2;
            local_428 = 0;
            local_438 = (undefined8 **)&local_3e8;
            uStack_430 = 1;
            local_468._0_8_ = puVar1;
            local_468._8_8_ = unaff_R12;
            local_3e8 = local_468;
            (*(code *)PTR__eprint_00418328)(&local_448);
            (*(code *)PTR_set_exit_code_00418378)(1);
          }
          else {
            uVar5 = (*(code *)PTR_stdin_00418360)();
            std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_448,0x2000,uVar5);
                    /* try { // try from 0025a399 to 0025a3b0 has its CatchHandler @ 0025a5f7 */
            auVar8 = nl(&local_448,&local_3d8,local_2f8);
            if (auVar8._0_8_ != 0) {
              core::ptr::
              drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>
                        (local_448,uStack_440);
              goto LAB_0025a59b;
            }
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>
                      (local_448,uStack_440);
          }
LAB_0025a350:
          lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_380);
        } while (lVar7 != 0);
      }
                    /* try { // try from 0025a527 to 0025a530 has its CatchHandler @ 0025a615 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_400);
                    /* try { // try from 0025a531 to 0025a53d has its CatchHandler @ 0025a610 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_398);
                    /* try { // try from 0025a53e to 0025a54a has its CatchHandler @ 0025a60b */
      core::ptr::drop_in_place<uu_nl::Settings>(local_2f8);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_370);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = unaff_R12;
      auVar8 = auVar3 << 0x40;
    }
    else {
                    /* try { // try from 0025a0f1 to 0025a107 has its CatchHandler @ 0025a615 */
      ::alloc::str::join_generic_copy(&local_448,local_390,local_388,"\n",1);
      local_3c8 = (undefined **)local_438;
      local_3d8 = (undefined *)local_448;
      uStack_3d0 = uStack_440;
      local_400 = &local_3d8;
      local_3f8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_448 = &PTR_DAT_003d79a0;
      uStack_440 = 1;
      local_428 = 0;
      local_438 = &local_400;
      uStack_430 = 1;
                    /* try { // try from 0025a16c to 0025a178 has its CatchHandler @ 0025a5d6 */
      core::option::Option<T>::map_or_else(local_468,&local_448);
                    /* try { // try from 0025a179 to 0025a185 has its CatchHandler @ 0025a5c9 */
      core::ptr::drop_in_place<alloc::string::String>(&local_3d8);
      local_438 = (undefined8 **)local_458;
      local_448 = (undefined **)local_468._0_8_;
      uStack_440 = local_468._8_8_;
      uStack_430 = CONCAT44(uStack_430._4_4_,1);
                    /* try { // try from 0025a1a1 to 0025a1aa has its CatchHandler @ 0025a615 */
      uVar5 = ::alloc::boxed::Box<T>::new(&local_448);
      auVar8._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_003d7898;
      auVar8._0_8_ = uVar5;
LAB_0025a1b5:
                    /* try { // try from 0025a1b5 to 0025a1c1 has its CatchHandler @ 0025a610 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_398);
                    /* try { // try from 0025a1c2 to 0025a1ce has its CatchHandler @ 0025a60b */
      core::ptr::drop_in_place<uu_nl::Settings>(local_2f8);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_370);
    }
  }
  return auVar8;
}