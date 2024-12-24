undefined  [16] __rustcall uu_dircolors::uumain::uumain(undefined **param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  code *pcVar2;
  undefined auVar3 [16];
  char cVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  char local_499;
  undefined *local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  uint uStack_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 local_468;
  undefined **local_458;
  code *local_450;
  undefined8 *local_448;
  undefined *local_440;
  undefined local_438 [8];
  long *local_430;
  long local_428;
  undefined8 local_420;
  long local_418;
  undefined *puStack_410;
  undefined8 local_408;
  undefined ***pppuStack_400;
  undefined *local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  uint uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 local_3c0;
  int local_3b8;
  undefined4 local_3b4;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined ***local_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined ***local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined ***local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined ***local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined ***local_338;
  undefined ***pppuStack_330;
  undefined8 local_328;
  undefined local_80 [48];
  undefined local_50 [48];
  
  (*(code *)PTR_uu_app_0022cb20)(&local_348);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_498,&local_348,param_1,param_2);
  if (local_498 == (undefined *)0x8000000000000000) {
    auVar6 = (*(code *)PTR_from_0022cb28)();
    return auVar6;
  }
  local_3c0 = local_468;
  local_3d0 = local_478;
  uStack_3cc = uStack_474;
  uStack_3c8 = uStack_470;
  uStack_3c4 = uStack_46c;
  local_3e0 = (undefined4)local_488;
  uStack_3dc = local_488._4_4_;
  uStack_3d8 = uStack_480;
  uStack_3d4 = uStack_47c;
  local_3f0 = local_498;
  local_3e8 = uStack_490;
                    /* try { // try from 0016d0c8 to 0016d144 has its CatchHandler @ 0016dba6 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_348,&local_3f0,&DAT_00116d6c,4);
  clap_builder::parser::error::MatchesError::unwrap(&local_498,&DAT_00116d6c,4,&local_348);
  local_348 = (undefined **)0x0;
  uStack_340 = (undefined *)0x8;
  local_338 = (undefined ***)0x0;
  core::option::Option<T>::map_or(local_438,&local_498,&local_348);
                    /* try { // try from 0016d145 to 0016d208 has its CatchHandler @ 0016dbab */
  cVar4 = (*(code *)PTR_get_flag_0022cb30)(&local_3f0,"c-shell",7);
  if (((cVar4 == '\0') &&
      (cVar4 = (*(code *)PTR_get_flag_0022cb30)(&local_3f0,"bourne-shell",0xc), cVar4 == '\0')) ||
     ((cVar4 = (*(code *)PTR_get_flag_0022cb30)(&local_3f0,"print-database",0xe), cVar4 == '\0' &&
      (cVar4 = (*(code *)PTR_get_flag_0022cb30)(&local_3f0,"print-ls-colors",0xf), cVar4 == '\0'))))
  {
                    /* try { // try from 0016d23e to 0016d41b has its CatchHandler @ 0016dbab */
    cVar4 = (*(code *)PTR_get_flag_0022cb30)(&local_3f0,"print-database",0xe);
    if ((cVar4 == '\0') ||
       (cVar4 = (*(code *)PTR_get_flag_0022cb30)(&local_3f0,"print-ls-colors",0xf), cVar4 == '\0'))
    {
      cVar4 = (*(code *)PTR_get_flag_0022cb30)(&local_3f0,"print-database",0xe);
      if (cVar4 == '\0') {
        cVar4 = (*(code *)PTR_get_flag_0022cb30)(&local_3f0,"c-shell",7);
        if (cVar4 == '\0') {
          cVar4 = (*(code *)PTR_get_flag_0022cb30)(&local_3f0,"bourne-shell",0xc);
          if (cVar4 != '\0') {
            local_499 = '\0';
            cVar4 = local_499;
            goto LAB_0016d50f;
          }
          cVar4 = (*(code *)PTR_get_flag_0022cb30)(&local_3f0,"print-ls-colors",0xf);
          if (cVar4 != '\0') {
            local_499 = '\x02';
            cVar4 = local_499;
            goto LAB_0016d50f;
          }
          local_499 = '\x03';
          cVar4 = (*(code *)PTR_guess_syntax_0022cb48)();
          if (cVar4 != '\x03') goto LAB_0016d50f;
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                    (&local_498,"no SHELL environment variable, and no shell type option given",0x3d
                    );
          local_338 = local_488;
          local_348 = (undefined **)local_498;
          uStack_340 = (undefined *)uStack_490;
          pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
          uVar5 = ::alloc::boxed::Box<T>::new(&local_348);
        }
        else {
          local_499 = '\x01';
          cVar4 = local_499;
LAB_0016d50f:
          local_499 = cVar4;
          if (local_428 != 1) {
            if (local_428 != 0) {
              uStack_490 = *(undefined8 *)(local_430[1] + 8);
              local_488 = *(undefined ****)(local_430[1] + 0x10);
              local_498 = (undefined *)0x0;
              uStack_480 = CONCAT31(uStack_480._1_3_,1);
              local_450 = (code *)PTR_fmt_0022cad8;
              local_348 = &PTR_s_extra_operand_file_operands_cann_00224c80;
              uStack_340 = (undefined *)0x1;
              local_328 = 0;
              local_338 = &local_458;
              pppuStack_330 = (undefined ***)0x1;
                    /* try { // try from 0016d71b to 0016d877 has its CatchHandler @ 0016dba4 */
              local_458 = &local_498;
              core::option::Option<T>::map_or_else(&local_390,&local_348);
              pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
              local_348 = (undefined **)CONCAT44(uStack_38c,local_390);
              uStack_340 = (undefined *)CONCAT44(uStack_384,uStack_388);
              local_338 = local_380;
              uVar5 = ::alloc::boxed::Box<T>::new(&local_348);
              goto LAB_0016d209;
            }
                    /* try { // try from 0016d52a to 0016d548 has its CatchHandler @ 0016dba4 */
            (*(code *)PTR_generate_ls_colors_0022cb50)
                      (&local_498,&local_499,":: invalid line;  missing second token",1);
            local_450 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_348 = (undefined **)&DAT_00224b70;
            uStack_340 = (undefined *)0x2;
            local_328 = 0;
            local_338 = &local_458;
            pppuStack_330 = (undefined ***)0x1;
                    /* try { // try from 0016d59a to 0016d5a7 has its CatchHandler @ 0016db86 */
            local_458 = &local_498;
            (*(code *)PTR__print_0022cb40)(&local_348);
                    /* try { // try from 0016d5a8 to 0016d5fc has its CatchHandler @ 0016dba4 */
            core::ptr::drop_in_place<alloc::string::String>(&local_498);
            goto LAB_0016d5b2;
          }
          cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (*(undefined8 *)(*local_430 + 8),*(undefined8 *)(*local_430 + 0x10),"-",
                             1);
          if (cVar4 != '\0') {
            uVar5 = (*(code *)PTR_stdin_0022cb58)();
            std::io::buffered::bufreader::BufReader<R>::with_capacity(local_80,0x2000,uVar5);
            if (local_428 != 0) {
                    /* try { // try from 0016d61c to 0016d635 has its CatchHandler @ 0016db3e */
              uu_dircolors::parse(&local_348,local_80,&local_499,*(undefined8 *)(*local_430 + 8),
                                  *(undefined8 *)(*local_430 + 0x10));
              local_408 = local_338;
              pppuStack_400 = pppuStack_330;
              local_418 = (long)local_348;
              puStack_410 = uStack_340;
LAB_0016d656:
              if (local_418 == 0) {
                local_488 = pppuStack_400;
                local_498 = puStack_410;
                uStack_490 = local_408;
                local_450 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_348 = (undefined **)&DAT_00224b70;
                uStack_340 = (undefined *)0x2;
                local_328 = 0;
                local_338 = &local_458;
                pppuStack_330 = (undefined ***)0x1;
                    /* try { // try from 0016d9ec to 0016d9f9 has its CatchHandler @ 0016db0f */
                local_458 = &local_498;
                (*(code *)PTR__print_0022cb40)(&local_348);
                    /* try { // try from 0016da00 to 0016da09 has its CatchHandler @ 0016db50 */
                core::ptr::drop_in_place<alloc::string::String>(&local_498);
                uVar5 = 0;
              }
              else {
                local_338 = pppuStack_400;
                local_348 = (undefined **)puStack_410;
                uStack_340 = (undefined *)local_408;
                pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
                    /* try { // try from 0016d695 to 0016d6a1 has its CatchHandler @ 0016db50 */
                uVar5 = ::alloc::boxed::Box<T>::new(&local_348);
              }
                    /* try { // try from 0016da0c to 0016da15 has its CatchHandler @ 0016dba6 */
              core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(local_438);
              core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                        (&local_3f0);
              auVar6._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00224bd0;
              auVar6._0_8_ = uVar5;
              return auVar6;
            }
                    /* try { // try from 0016dac5 to 0016dae5 has its CatchHandler @ 0016db40 */
            (*(code *)PTR_panic_bounds_check_0022cb78)
                      (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00224c68);
LAB_0016dae6:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (local_428 == 0) {
                    /* try { // try from 0016dab2 to 0016dac2 has its CatchHandler @ 0016dba4 */
            (*(code *)PTR_panic_bounds_check_0022cb78)
                      (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00224c40);
            goto LAB_0016dae6;
          }
          uVar5 = *(undefined8 *)(*local_430 + 8);
          pppuVar1 = *(undefined ****)(*local_430 + 0x10);
          cVar4 = (*(code *)PTR_is_dir_0022cb60)(uVar5,pppuVar1);
          if (cVar4 == '\0') {
            std::fs::File::open(&local_3b8,uVar5,pppuVar1);
            if (local_3b8 == 0) {
                    /* try { // try from 0016da36 to 0016da47 has its CatchHandler @ 0016dba4 */
              std::io::buffered::bufreader::BufReader<R>::with_capacity(local_50,0x2000,local_3b4);
                    /* try { // try from 0016da48 to 0016da58 has its CatchHandler @ 0016dafa */
              (*(code *)PTR_to_string_lossy_0022cb70)(&local_498,uVar5,pppuVar1);
                    /* try { // try from 0016da63 to 0016da7c has its CatchHandler @ 0016dae8 */
              uu_dircolors::parse(&local_348,local_50,&local_499,uStack_490,local_488);
              local_408 = local_338;
              pppuStack_400 = pppuStack_330;
              local_418 = (long)local_348;
              puStack_410 = uStack_340;
                    /* try { // try from 0016daa0 to 0016daac has its CatchHandler @ 0016db50 */
              core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_498);
              goto LAB_0016d656;
            }
            local_420 = local_3b0;
            local_498 = (undefined *)0x1;
            uStack_480 = uStack_480 & 0xffffff00;
            local_450 = (code *)PTR_fmt_0022cad8;
            local_448 = &local_420;
            local_440 = PTR_fmt_0022cb68;
            local_348 = (undefined **)&DAT_00224b50;
            uStack_340 = (undefined *)0x2;
            local_328 = 0;
            local_338 = &local_458;
            pppuStack_330 = (undefined ***)0x2;
                    /* try { // try from 0016d918 to 0016d964 has its CatchHandler @ 0016db2c */
            uStack_490 = uVar5;
            local_488 = pppuVar1;
            local_458 = &local_498;
            core::option::Option<T>::map_or_else(&local_360,&local_348);
            pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
            local_348 = (undefined **)CONCAT44(uStack_35c,local_360);
            uStack_340 = (undefined *)CONCAT44(uStack_354,uStack_358);
            local_338 = local_350;
            uVar5 = ::alloc::boxed::Box<T>::new(&local_348);
                    /* try { // try from 0016d970 to 0016d974 has its CatchHandler @ 0016dba4 */
            core::ptr::drop_in_place<std::io::error::Error>(local_420);
            param_1 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00224bd0;
            goto LAB_0016d213;
          }
          local_498 = (undefined *)0x1;
          uStack_480 = CONCAT31(uStack_480._1_3_,1);
          local_450 = (code *)PTR_fmt_0022cad8;
          local_348 = &PTR_s_expected_file__got_directory_00224c58;
          uStack_340 = (undefined *)0x1;
          local_328 = 0;
          local_338 = &local_458;
          pppuStack_330 = (undefined ***)0x1;
          uStack_490 = uVar5;
          local_488 = pppuVar1;
          local_458 = &local_498;
          core::option::Option<T>::map_or_else(&local_378,&local_348);
          pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,2);
          local_348 = (undefined **)CONCAT44(uStack_374,local_378);
          uStack_340 = (undefined *)CONCAT44(uStack_36c,uStack_370);
          local_338 = local_368;
          uVar5 = ::alloc::boxed::Box<T>::new(&local_348);
        }
        param_1 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00224bd0;
      }
      else {
        if (local_428 != 0) {
          uStack_490 = *(undefined8 *)(*local_430 + 8);
          local_488 = *(undefined ****)(*local_430 + 0x10);
          local_498 = (undefined *)0x0;
          uStack_480 = CONCAT31(uStack_480._1_3_,1);
          local_450 = (code *)PTR_fmt_0022cad8;
          local_348 = &PTR_s_extra_operand_file_operands_cann_00224d38;
          uStack_340 = (undefined *)0x2;
          local_328 = 0;
          local_338 = &local_458;
          pppuStack_330 = (undefined ***)0x1;
          local_458 = &local_498;
          core::option::Option<T>::map_or_else(&local_3a8,&local_348);
          pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
          local_348 = (undefined **)CONCAT44(uStack_3a4,local_3a8);
          uStack_340 = (undefined *)CONCAT44(uStack_39c,uStack_3a0);
          local_338 = local_398;
          uVar5 = ::alloc::boxed::Box<T>::new(&local_348);
          goto LAB_0016d209;
        }
        (*(code *)PTR_generate_dircolors_config_0022cb38)(&local_498);
        local_450 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_348 = (undefined **)&DAT_00224b70;
        uStack_340 = (undefined *)0x2;
        local_328 = 0;
        local_338 = &local_458;
        pppuStack_330 = (undefined ***)0x1;
                    /* try { // try from 0016d46d to 0016d47a has its CatchHandler @ 0016db95 */
        local_458 = &local_498;
        (*(code *)PTR__print_0022cb40)(&local_348);
                    /* try { // try from 0016d47b to 0016d505 has its CatchHandler @ 0016dbab */
        core::ptr::drop_in_place<alloc::string::String>(&local_498);
LAB_0016d5b2:
        uVar5 = 0;
      }
      goto LAB_0016d213;
    }
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec
              (&local_498,"options --print-database and --print-ls-colors are mutually exclusive",
               0x45);
    local_338 = local_488;
    local_348 = (undefined **)local_498;
    uStack_340 = (undefined *)uStack_490;
    pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
    uVar5 = ::alloc::boxed::Box<T>::new(&local_348);
  }
  else {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec
              (&local_498,
               "the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive"
               ,0x5b);
    local_338 = local_488;
    local_348 = (undefined **)local_498;
    uStack_340 = (undefined *)uStack_490;
    pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
    uVar5 = ::alloc::boxed::Box<T>::new(&local_348);
  }
LAB_0016d209:
  param_1 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00224cc8;
LAB_0016d213:
                    /* try { // try from 0016d213 to 0016d21c has its CatchHandler @ 0016dba6 */
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = uVar5;
  core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(local_438);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3f0);
  return auVar3;
}