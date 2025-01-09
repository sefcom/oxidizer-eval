undefined8 __rustcall uu_sum::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined auVar10 [16];
  unkbyte10 Var11;
  char local_43a;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 *local_3f0;
  undefined *local_3e8;
  undefined8 uStack_3e0;
  undefined8 *local_3d8;
  undefined8 local_3d0;
  undefined8 *local_3c8;
  undefined8 local_3c0;
  undefined local_3b0 [8];
  long local_3a8;
  ulong local_3a0;
  long local_398;
  long local_390;
  long local_388;
  undefined local_380 [16];
  undefined8 *local_370;
  code *local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  long *local_340;
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
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 local_268;
  undefined8 local_260;
  undefined local_258;
  
  (*(code *)PTR_uu_app_00215e20)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_438,&local_2f8,param_1,param_2);
  if (local_438 == (undefined8 *)0x8000000000000000) {
    uVar7 = (*(code *)PTR_from_00215e28)();
  }
  else {
    local_340 = local_408;
    local_350 = (undefined4)local_418;
    uStack_34c = local_418._4_4_;
    uStack_348 = (undefined4)uStack_410;
    uStack_344 = uStack_410._4_4_;
    local_360 = (undefined4)local_428;
    uStack_35c = local_428._4_4_;
    uStack_358 = (undefined4)uStack_420;
    uStack_354 = uStack_420._4_4_;
    local_370 = local_438;
    local_368 = uStack_430;
    uVar7 = *(undefined8 *)PTR_FILE_00215e30;
    uVar2 = *(undefined8 *)(PTR_FILE_00215e30 + 8);
                    /* try { // try from 00164314 to 00164397 has its CatchHandler @ 001648b0 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2f8,&local_370,uVar7,uVar2);
    clap_builder::parser::error::MatchesError::unwrap(&local_438,uVar7,uVar2,&local_2f8);
    if (local_438 == (undefined8 *)0x0) {
      puVar8 = (undefined4 *)::alloc::alloc::Global::alloc_impl();
      if (puVar8 == (undefined4 *)0x0) {
                    /* try { // try from 0016488f to 0016489e has its CatchHandler @ 001648b0 */
        (*(code *)PTR_handle_alloc_error_00215e78)(8,0x18);
        goto LAB_0016489f;
      }
                    /* try { // try from 001643a8 to 001643b7 has its CatchHandler @ 001648a1 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_2f8);
      local_3d8 = local_2e8;
      local_3e8 = local_2f8;
      uStack_3e0 = uStack_2f0;
      *(undefined8 **)(puVar8 + 4) = local_2e8;
      *puVar8 = (undefined4)local_2f8;
      puVar8[1] = local_2f8._4_4_;
      puVar8[2] = (undefined4)uStack_2f0;
      puVar8[3] = uStack_2f0._4_4_;
                    /* try { // try from 001643da to 001643ee has its CatchHandler @ 001648b0 */
      ::alloc::slice::hack::into_vec(local_3b0,puVar8,1);
    }
    else {
      local_308 = (undefined4)local_408;
      uStack_304 = local_408._4_4_;
      uStack_300 = (undefined4)uStack_400;
      uStack_2fc = uStack_400._4_4_;
      local_318 = (undefined4)local_418;
      uStack_314 = local_418._4_4_;
      uStack_310 = (undefined4)uStack_410;
      uStack_30c = uStack_410._4_4_;
      local_328 = (undefined4)local_428;
      uStack_324 = local_428._4_4_;
      uStack_320 = (undefined4)uStack_420;
      uStack_31c = uStack_420._4_4_;
      local_338 = (undefined4)local_438;
      uStack_334 = local_438._4_4_;
      uStack_330 = (undefined4)uStack_430;
      uStack_32c = uStack_430._4_4_;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (local_3b0,&local_338);
    }
                    /* try { // try from 001643fd to 00164440 has its CatchHandler @ 001648ae */
    bVar5 = (*(code *)PTR_get_flag_00215e40)
                      (&local_370,*(undefined8 *)PTR_SYSTEM_V_COMPATIBLE_00215e38,
                       *(undefined8 *)(PTR_SYSTEM_V_COMPATIBLE_00215e38 + 8));
    local_43a = '\x01';
    if (local_3a0 < 2) {
      if (local_3a0 != 1) {
                    /* try { // try from 0016487c to 0016488c has its CatchHandler @ 001648ae */
        (*(code *)PTR_panic_bounds_check_00215d68)
                  (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0020faa0);
LAB_0016489f:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_43a = _<alloc::string::String_as_core::cmp::PartialEq<&str>>::ne
                            (*(undefined8 *)(local_3a8 + 8),*(undefined8 *)(local_3a8 + 0x10));
    }
    local_390 = local_3a8 + local_3a0 * 0x18;
    local_398 = local_3a8;
    lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_398)
    ;
    puVar4 = PTR_open_00215e48;
    if (lVar9 != 0) {
      plVar1 = (long *)((ulong)(bVar5 ^ 1) * 4 + 1);
      do {
        local_388 = lVar9;
                    /* try { // try from 001645f1 to 001645f6 has its CatchHandler @ 001648b7 */
        (*(code *)puVar4)(&local_3e8,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
        if (local_3e8 == (undefined *)0x0) {
          if (bVar5 == 0) {
            Var11 = (*(code *)PTR_bsd_sum_00215e70)();
          }
          else {
                    /* try { // try from 001646c7 to 00164848 has its CatchHandler @ 001648b5 */
            Var11 = (*(code *)PTR_sysv_sum_00215e68)();
          }
          local_380._0_8_ = (undefined8)Var11;
          local_3f8 = CONCAT62(local_3f8._2_6_,(short)((unkuint10)Var11 >> 0x40));
          local_438 = &local_3f8;
          local_428 = (undefined8 *)local_380;
          if (local_43a == '\0') {
            uStack_430 = (code *)PTR_fmt_00215e50;
            uStack_420 = (code *)PTR_fmt_00215dc0;
            uStack_410 = (code *)0x0;
            local_2f8 = (undefined *)0x2;
            local_2e8 = (undefined8 *)&DAT_00000001;
            local_2e0 = 2;
            local_2d8 = 0;
            local_2d0 = 0x800000020;
            local_2c8 = 3;
            local_2c0 = 2;
            local_2b0 = 1;
            local_2a8 = 2;
            local_2a0 = 1;
            local_298 = 0x20;
            local_290 = 3;
            local_3e8 = &DAT_0020fab8;
            uStack_3e0 = 3;
            local_3c8 = &local_2f8;
            local_3c0 = 2;
            local_3d8 = &local_438;
            local_3d0 = 3;
            local_418 = plVar1;
                    /* try { // try from 001645ba to 001645c2 has its CatchHandler @ 001648b5 */
            (*(code *)PTR__print_00215e58)(&local_3e8);
          }
          else {
            uStack_430 = (code *)PTR_fmt_00215e50;
            uStack_420 = (code *)PTR_fmt_00215dc0;
            local_418 = &local_388;
            uStack_410 = _<&T_as_core::fmt::Display>::fmt;
            uStack_400 = 0;
            local_2f8 = (undefined *)0x2;
            local_2e8 = (undefined8 *)&DAT_00000001;
            local_2e0 = 3;
            local_2d8 = 0;
            local_2d0 = 0x800000020;
            local_2c8 = 3;
            local_2c0 = 2;
            local_2b0 = 1;
            local_2a8 = 3;
            local_2a0 = 1;
            local_298 = 0x20;
            local_290 = 3;
            local_288 = 2;
            local_278 = 2;
            local_268 = 2;
            local_260 = 0x20;
            local_258 = 3;
            local_3e8 = &DAT_0020fae8;
            uStack_3e0 = 4;
            local_3c8 = &local_2f8;
            local_3c0 = 3;
            local_3d8 = &local_438;
            local_3d0 = 4;
            local_408 = plVar1;
            (*(code *)PTR__print_00215e58)(&local_3e8);
          }
        }
        else {
          local_3f8 = uStack_3e0;
          local_3f0 = local_3d8;
                    /* try { // try from 00164617 to 001646a7 has its CatchHandler @ 001648bc */
          uVar6 = (*(code *)local_3d8[0xc])();
          (*(code *)PTR_set_exit_code_00215e60)(uVar6);
          auVar10 = (*(code *)PTR_util_name_00215e08)();
          uStack_430 = _<&T_as_core::fmt::Display>::fmt;
          uStack_420 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
          local_2f8 = &DAT_0020fa70;
          uStack_2f0 = 3;
          local_2d8 = 0;
          local_2e8 = &local_438;
          local_2e0 = 2;
          local_438 = (undefined8 *)local_380;
          local_428 = &local_3f8;
          local_380 = auVar10;
          (*(code *)PTR__eprint_00215d48)(&local_2f8);
                    /* try { // try from 001646b2 to 001646b6 has its CatchHandler @ 001648b7 */
          core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                    (local_3f8,local_3f0);
        }
        lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_398);
      } while (lVar9 != 0);
    }
                    /* try { // try from 0016484e to 0016485a has its CatchHandler @ 001648b0 */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_3b0);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_370);
    uVar7 = 0;
  }
  return uVar7;
}