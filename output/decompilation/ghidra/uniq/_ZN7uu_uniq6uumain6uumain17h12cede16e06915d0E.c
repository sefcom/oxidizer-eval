undefined  [16] __rustcall uu_uniq::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  long lVar3;
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
  long lVar17;
  undefined auVar18 [16];
  byte local_415;
  undefined local_414;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  long local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined local_3c0 [16];
  long local_3b0;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
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
  long local_338 [5];
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long local_2d8;
  undefined8 local_2d0;
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
  lVar16 = local_2d0;
  lVar15 = uStack_2f0;
  lVar17 = local_2f8;
  local_348 = local_2d8;
  local_358 = (undefined4)uStack_2e8;
  uStack_354 = uStack_2e8._4_4_;
  uStack_350 = (undefined4)uStack_2e0;
  uStack_34c = uStack_2e0._4_4_;
  lVar13 = CONCAT17(uStack_2c1,
                    CONCAT16(uStack_2c2,
                             CONCAT15(uStack_2c3,
                                      CONCAT14(uStack_2c4,
                                               CONCAT13(bStack_2c5,
                                                        CONCAT12(bStack_2c6,
                                                                 CONCAT11(uStack_2c7,uStack_2c8)))))
                            ));
                    /* try { // try from 00170d34 to 00170d41 has its CatchHandler @ 00171293 */
  (*(code *)PTR_uu_app_002347c8)(&local_2f8);
  local_378 = local_348;
  local_388 = local_358;
  uStack_384 = uStack_354;
  uStack_380 = uStack_350;
  uStack_37c = uStack_34c;
  clap_builder::builder::command::Command::try_get_matches_from(&local_3f8,&local_2f8,&local_388);
  if (CONCAT44(uStack_3f4,local_3f8) == -0x8000000000000000) {
    auVar18 = core::ops::function::FnOnce::call_once();
  }
  else {
    uStack_3a0 = uStack_3d8;
    local_398 = local_3d0;
    uStack_394 = uStack_3cc;
    uStack_390 = uStack_3c8;
    uStack_38c = uStack_3c4;
    local_3b0 = local_3e8;
    uVar14 = *(undefined8 *)PTR_ARG_FILES_002347d0;
    uVar1 = *(undefined8 *)(PTR_ARG_FILES_002347d0 + 8);
                    /* try { // try from 00170dde to 00170f37 has its CatchHandler @ 001712a5 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2f8,local_3c0,uVar14,uVar1);
    clap_builder::parser::error::MatchesError::unwrap(local_338,uVar14,uVar1,&local_2f8);
    if (local_338[0] == 0) {
      core::tuple::_<impl_core::default::Default_for(U,T)>::default(&local_2f8);
    }
    else {
      local_2c0 = local_300;
      local_2d0 = CONCAT44(uStack_30c,local_310);
      uStack_2c8 = (undefined)uStack_308;
      uStack_2c7 = (undefined)((uint)uStack_308 >> 8);
      bStack_2c6 = (byte)((uint)uStack_308 >> 0x10);
      bStack_2c5 = (byte)((uint)uStack_308 >> 0x18);
      uStack_2c4 = (undefined)uStack_304;
      uStack_2c3 = (undefined)((uint)uStack_304 >> 8);
      uStack_2c2 = (undefined)((uint)uStack_304 >> 0x10);
      uStack_2c1 = (undefined)((uint)uStack_304 >> 0x18);
      local_2f8 = local_338[0];
      uumain::___closure__(&local_3f8,&local_2f8);
      uStack_2e0 = CONCAT44(uStack_3dc,uStack_3e0);
      local_2f8 = CONCAT44(uStack_3f4,local_3f8);
      uStack_2f0 = CONCAT44(uStack_3ec,uStack_3f0);
      uStack_2e8 = local_3e8;
    }
    lVar5 = uStack_2f0;
    lVar4 = local_2f8;
    local_360 = uStack_2e8;
    local_368 = uStack_2e0;
    (*(code *)PTR_opt_parsed_002347e0)
              (&local_2f8,*(undefined8 *)PTR_SKIP_FIELDS_002347d8,
               *(undefined8 *)(PTR_SKIP_FIELDS_002347d8 + 8),local_3c0);
    lVar6 = uStack_2e8;
    lVar3 = uStack_2f0;
    auVar18._8_8_ = uStack_2e8;
    auVar18._0_8_ = uStack_2f0;
    if (local_2f8 == 0) {
      (*(code *)PTR_opt_parsed_002347e0)
                (&local_2f8,*(undefined8 *)PTR_SKIP_CHARS_002347e8,
                 *(undefined8 *)(PTR_SKIP_CHARS_002347e8 + 8),local_3c0);
      lVar7 = uStack_2e8;
      auVar18._8_8_ = uStack_2e8;
      auVar18._0_8_ = uStack_2f0;
      if (local_2f8 == 0) {
        local_370 = uStack_2f0;
                    /* try { // try from 00170fa0 to 001711e2 has its CatchHandler @ 001712a5 */
        cVar8 = (*(code *)PTR_get_flag_002347f8)
                          (local_3c0,*(undefined8 *)PTR_REPEATED_002347f0,
                           *(undefined8 *)(PTR_REPEATED_002347f0 + 8));
        local_414 = 1;
        if (cVar8 == '\0') {
          local_414 = (*(code *)PTR_contains_id_00234808)
                                (local_3c0,*(undefined8 *)PTR_ALL_REPEATED_00234800,
                                 *(undefined8 *)(PTR_ALL_REPEATED_00234800 + 8));
        }
        uVar9 = (*(code *)PTR_get_flag_002347f8)
                          (local_3c0,*(undefined8 *)PTR_UNIQUE_00234810,
                           *(undefined8 *)(PTR_UNIQUE_00234810 + 8));
        cVar8 = (*(code *)PTR_contains_id_00234808)
                          (local_3c0,*(undefined8 *)PTR_ALL_REPEATED_00234800,
                           *(undefined8 *)(PTR_ALL_REPEATED_00234800 + 8));
        local_415 = 1;
        if (cVar8 == '\0') {
          local_415 = (*(code *)PTR_contains_id_00234808)
                                (local_3c0,*(undefined8 *)PTR_GROUP_00234818,
                                 *(undefined8 *)(PTR_GROUP_00234818 + 8));
        }
        uVar10 = (*(code *)PTR_get_delimiter_00234820)(local_3c0);
        bVar11 = (*(code *)PTR_get_flag_002347f8)
                           (local_3c0,*(undefined8 *)PTR_COUNT_00234828,
                            *(undefined8 *)(PTR_COUNT_00234828 + 8));
        if (lVar3 != 0) {
          lVar17 = 1;
          lVar15 = lVar6;
        }
        if (local_370 != 0) {
          lVar16 = 1;
          lVar13 = lVar7;
        }
        (*(code *)PTR_opt_parsed_002347e0)
                  (&local_3f8,*(undefined8 *)PTR_CHECK_CHARS_00234830,
                   *(undefined8 *)(PTR_CHECK_CHARS_00234830 + 8),local_3c0);
        lVar3 = local_3e8;
        auVar18._4_4_ = uStack_3ec;
        auVar18._0_4_ = uStack_3f0;
        auVar18._8_8_ = local_3e8;
        if (CONCAT44(uStack_3f4,local_3f8) == 0) {
          uVar12 = (*(code *)PTR_get_flag_002347f8)
                             (local_3c0,*(undefined8 *)PTR_IGNORE_CASE_00234838,
                              *(undefined8 *)(PTR_IGNORE_CASE_00234838 + 8));
          uStack_2c3 = (*(code *)PTR_get_flag_002347f8)
                                 (local_3c0,*(undefined8 *)PTR_ZERO_TERMINATED_00234840,
                                  *(undefined8 *)(PTR_ZERO_TERMINATED_00234840 + 8));
          uStack_2c8 = local_414;
          bStack_2c6 = local_415;
          local_2d0 = lVar3;
          local_2f8 = lVar17;
          uStack_2f0 = lVar15;
          uStack_2e8 = lVar16;
          uStack_2e0 = lVar13;
          uStack_2c7 = uVar9;
          bStack_2c5 = bVar11;
          uStack_2c4 = uVar12;
          uStack_2c2 = uVar10;
          if ((local_415 & bVar11) == 0) {
            (*(code *)PTR_open_input_file_00234848)(&local_3f8,lVar4,lVar5);
            lVar13 = local_3e8;
            uVar14 = CONCAT44(uStack_3ec,uStack_3f0);
            auVar18._8_8_ = local_3e8;
            auVar18._0_8_ = uVar14;
            if (CONCAT44(uStack_3f4,local_3f8) == 0) {
                    /* try { // try from 001711f9 to 00171213 has its CatchHandler @ 00171279 */
              (*(code *)PTR_open_output_file_00234850)(&local_3f8,local_360,local_368);
              auVar2._8_8_ = local_3e8;
              auVar2._0_8_ = CONCAT44(uStack_3ec,uStack_3f0);
              if (CONCAT44(uStack_3f4,local_3f8) != 0) {
                    /* try { // try from 00171226 to 00171230 has its CatchHandler @ 0017126a */
                core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Write>>(uVar14,lVar13);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                          (local_3c0);
                return auVar2;
              }
                    /* try { // try from 00171246 to 0017125e has its CatchHandler @ 0017126a */
              auVar18 = Uniq::print_uniq(&local_2f8,uVar14,lVar13,CONCAT44(uStack_3ec,uStack_3f0),
                                         local_3e8);
            }
          }
          else {
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_388);
            local_3e8 = local_378;
            local_3f8 = local_388;
            uStack_3f4 = uStack_384;
            uStack_3f0 = uStack_380;
            uStack_3ec = uStack_37c;
            uStack_3e0 = 1;
            uVar14 = ::alloc::boxed::Box<T>::new(&local_3f8);
            auVar18._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0022d9e8;
            auVar18._0_8_ = uVar14;
          }
        }
      }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_3c0);
  }
  return auVar18;
}