undefined  [16] __rustcall uu_uniq::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined auVar3 [16];
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  undefined uVar9;
  undefined uVar10;
  byte bVar11;
  undefined uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined auVar17 [16];
  byte local_41d;
  undefined local_41c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined local_3d0 [16];
  long local_3c0;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  long local_378;
  long local_370;
  long local_368;
  long local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  long local_348;
  long local_338 [4];
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined uStack_2c8;
  undefined uStack_2c7;
  byte bStack_2c6;
  byte bStack_2c5;
  undefined uStack_2c4;
  undefined uStack_2c3;
  undefined uStack_2c2;
  undefined uStack_2c1;
  undefined8 local_2c0;
  
  handle_obsolete(&local_2f8,param_1,param_2);
  lVar2 = uStack_2f0;
  lVar16 = local_2f8;
  local_348 = CONCAT44(uStack_2d4,local_2d8);
  local_358 = (undefined4)uStack_2e8;
  uStack_354 = uStack_2e8._4_4_;
  uStack_350 = (undefined4)uStack_2e0;
  uStack_34c = uStack_2e0._4_4_;
  lVar15 = CONCAT44(uStack_2cc,uStack_2d0);
  lVar13 = CONCAT17(uStack_2c1,
                    CONCAT16(uStack_2c2,
                             CONCAT15(uStack_2c3,
                                      CONCAT14(uStack_2c4,
                                               CONCAT13(bStack_2c5,
                                                        CONCAT12(bStack_2c6,
                                                                 CONCAT11(uStack_2c7,uStack_2c8)))))
                            ));
                    /* try { // try from 00170ea4 to 00170eb1 has its CatchHandler @ 00171412 */
  (*(code *)PTR_uu_app_002353b8)(&local_2f8);
  local_378 = local_348;
  local_388 = local_358;
  uStack_384 = uStack_354;
  uStack_380 = uStack_350;
  uStack_37c = uStack_34c;
  clap_builder::builder::command::Command::try_get_matches_from(&local_408,&local_2f8,&local_388);
  if (CONCAT44(uStack_404,local_408) == -0x8000000000000000) {
    auVar17 = core::ops::function::FnOnce::call_once();
  }
  else {
    uStack_3b0 = uStack_3e8;
    local_3a8 = local_3e0;
    uStack_3a4 = uStack_3dc;
    uStack_3a0 = uStack_3d8;
    uStack_39c = uStack_3d4;
    local_3c0 = local_3f8;
    uVar14 = *(undefined8 *)PTR_ARG_FILES_002353c0;
    uVar1 = *(undefined8 *)(PTR_ARG_FILES_002353c0 + 8);
                    /* try { // try from 00170f4e to 001710aa has its CatchHandler @ 00171424 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2f8,local_3d0,uVar14,uVar1);
    clap_builder::parser::error::MatchesError::unwrap(local_338,uVar14,uVar1,&local_2f8);
    if (local_338[0] == 0) {
      core::tuple::_<impl_core::default::Default_for(U,T)>::default(&local_2f8);
    }
    else {
      local_2c0 = local_300;
      uStack_2d0 = local_310;
      uStack_2cc = uStack_30c;
      uStack_2c8 = (undefined)uStack_308;
      uStack_2c7 = (undefined)((uint)uStack_308 >> 8);
      bStack_2c6 = (byte)((uint)uStack_308 >> 0x10);
      bStack_2c5 = (byte)((uint)uStack_308 >> 0x18);
      uStack_2c4 = (undefined)uStack_304;
      uStack_2c3 = (undefined)((uint)uStack_304 >> 8);
      uStack_2c2 = (undefined)((uint)uStack_304 >> 0x10);
      uStack_2c1 = (undefined)((uint)uStack_304 >> 0x18);
      local_2d8 = uStack_318;
      uStack_2d4 = uStack_314;
      local_2f8 = local_338[0];
      uumain::___closure__(&local_408,&local_2f8);
      uStack_2e0 = CONCAT44(uStack_3ec,uStack_3f0);
      local_2f8 = CONCAT44(uStack_404,local_408);
      uStack_2f0 = CONCAT44(uStack_3fc,uStack_400);
      uStack_2e8 = local_3f8;
    }
    lVar5 = uStack_2f0;
    lVar4 = local_2f8;
    local_360 = uStack_2e8;
    local_368 = uStack_2e0;
    (*(code *)PTR_opt_parsed_002353d0)
              (&local_2f8,*(undefined8 *)PTR_SKIP_FIELDS_002353c8,
               *(undefined8 *)(PTR_SKIP_FIELDS_002353c8 + 8),local_3d0);
    lVar6 = uStack_2e8;
    auVar17._8_8_ = uStack_2e8;
    auVar17._0_8_ = uStack_2f0;
    if (local_2f8 == 0) {
      local_398 = uStack_2f0;
      (*(code *)PTR_opt_parsed_002353d0)
                (&local_2f8,*(undefined8 *)PTR_SKIP_CHARS_002353d8,
                 *(undefined8 *)(PTR_SKIP_CHARS_002353d8 + 8),local_3d0);
      lVar7 = uStack_2e8;
      auVar17._8_8_ = uStack_2e8;
      auVar17._0_8_ = uStack_2f0;
      if (local_2f8 == 0) {
        local_370 = uStack_2f0;
                    /* try { // try from 00171113 to 00171361 has its CatchHandler @ 00171424 */
        cVar8 = (*(code *)PTR_get_flag_002353e8)
                          (local_3d0,*(undefined8 *)PTR_REPEATED_002353e0,
                           *(undefined8 *)(PTR_REPEATED_002353e0 + 8));
        local_41c = 1;
        if (cVar8 == '\0') {
          local_41c = (*(code *)PTR_contains_id_002353f8)
                                (local_3d0,*(undefined8 *)PTR_ALL_REPEATED_002353f0,
                                 *(undefined8 *)(PTR_ALL_REPEATED_002353f0 + 8));
        }
        uVar9 = (*(code *)PTR_get_flag_002353e8)
                          (local_3d0,*(undefined8 *)PTR_UNIQUE_00235400,
                           *(undefined8 *)(PTR_UNIQUE_00235400 + 8));
        cVar8 = (*(code *)PTR_contains_id_002353f8)
                          (local_3d0,*(undefined8 *)PTR_ALL_REPEATED_002353f0,
                           *(undefined8 *)(PTR_ALL_REPEATED_002353f0 + 8));
        local_41d = 1;
        if (cVar8 == '\0') {
          local_41d = (*(code *)PTR_contains_id_002353f8)
                                (local_3d0,*(undefined8 *)PTR_GROUP_00235408,
                                 *(undefined8 *)(PTR_GROUP_00235408 + 8));
        }
        uVar10 = (*(code *)PTR_get_delimiter_00235410)(local_3d0);
        bVar11 = (*(code *)PTR_get_flag_002353e8)
                           (local_3d0,*(undefined8 *)PTR_COUNT_00235418,
                            *(undefined8 *)(PTR_COUNT_00235418 + 8));
        if (local_398 != 0) {
          lVar16 = 1;
          lVar2 = lVar6;
        }
        if (local_370 != 0) {
          lVar15 = 1;
          lVar13 = lVar7;
        }
        (*(code *)PTR_opt_parsed_002353d0)
                  (&local_408,*(undefined8 *)PTR_CHECK_CHARS_00235420,
                   *(undefined8 *)(PTR_CHECK_CHARS_00235420 + 8),local_3d0);
        if (CONCAT44(uStack_404,local_408) == 0) {
          local_398 = CONCAT44(uStack_3fc,uStack_400);
          uStack_390 = (undefined4)local_3f8;
          uStack_38c = local_3f8._4_4_;
          uVar12 = (*(code *)PTR_get_flag_002353e8)
                             (local_3d0,*(undefined8 *)PTR_IGNORE_CASE_00235428,
                              *(undefined8 *)(PTR_IGNORE_CASE_00235428 + 8));
          uStack_2c3 = (*(code *)PTR_get_flag_002353e8)
                                 (local_3d0,*(undefined8 *)PTR_ZERO_TERMINATED_00235430,
                                  *(undefined8 *)(PTR_ZERO_TERMINATED_00235430 + 8));
          uStack_2c8 = local_41c;
          bStack_2c6 = local_41d;
          local_2d8 = (undefined4)local_398;
          uStack_2d4 = local_398._4_4_;
          uStack_2d0 = uStack_390;
          uStack_2cc = uStack_38c;
          local_2f8 = lVar16;
          uStack_2f0 = lVar2;
          uStack_2e8 = lVar15;
          uStack_2e0 = lVar13;
          uStack_2c7 = uVar9;
          bStack_2c5 = bVar11;
          uStack_2c4 = uVar12;
          uStack_2c2 = uVar10;
          if ((local_41d & bVar11) == 0) {
            (*(code *)PTR_open_input_file_00235438)(&local_408,lVar4,lVar5);
            lVar15 = local_3f8;
            uVar14 = CONCAT44(uStack_3fc,uStack_400);
            auVar17._8_8_ = local_3f8;
            auVar17._0_8_ = uVar14;
            if (CONCAT44(uStack_404,local_408) == 0) {
                    /* try { // try from 00171378 to 00171392 has its CatchHandler @ 001713f8 */
              (*(code *)PTR_open_output_file_00235440)(&local_408,local_360,local_368);
              auVar3._8_8_ = local_3f8;
              auVar3._0_8_ = CONCAT44(uStack_3fc,uStack_400);
              if (CONCAT44(uStack_404,local_408) != 0) {
                    /* try { // try from 001713a5 to 001713af has its CatchHandler @ 001713e9 */
                core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Write>>(uVar14,lVar15);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                          (local_3d0);
                return auVar3;
              }
                    /* try { // try from 001713c5 to 001713dd has its CatchHandler @ 001713e9 */
              auVar17 = Uniq::print_uniq(&local_2f8,uVar14,lVar15,CONCAT44(uStack_3fc,uStack_400),
                                         local_3f8);
            }
          }
          else {
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_388);
            local_3f8 = local_378;
            local_408 = local_388;
            uStack_404 = uStack_384;
            uStack_400 = uStack_380;
            uStack_3fc = uStack_37c;
            uStack_3f0 = 1;
            uVar14 = ::alloc::boxed::Box<T>::new(&local_408);
            auVar17._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0022e5b8;
            auVar17._0_8_ = uVar14;
          }
        }
        else {
          auVar17._4_4_ = uStack_3fc;
          auVar17._0_4_ = uStack_400;
          auVar17._8_8_ = local_3f8;
        }
      }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_3d0);
  }
  return auVar17;
}