undefined  [16]
_ZN12uu_dircolors6uumain6uumain17h2321e20a0063effbE(undefined **param_1,undefined8 param_2)

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
  
  (*(code *)PTR__ZN12uu_dircolors6uu_app17hbe7b80473b118cf8E_0022c580)(&local_348);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h0d8cf975bb365716E
            (&local_498,&local_348,param_1,param_2);
  if (local_498 == (undefined *)0x8000000000000000) {
    auVar6 = (*(code *)
               PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0022c588
             )();
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
                    /* try { // try from 0016ced8 to 0016cf54 has its CatchHandler @ 0016d9b6 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hbb220c64f890b78eE
            (&local_348,&local_3f0,&DAT_00116cac,4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h0d4e2c418f8795f8E
            (&local_498,&DAT_00116cac,4,&local_348);
  local_348 = (undefined **)0x0;
  uStack_340 = (undefined *)0x8;
  local_338 = (undefined ***)0x0;
  _ZN4core6option15Option_LT_T_GT_6map_or17h41c5a4c15e8c912eE(local_438,&local_498,&local_348);
                    /* try { // try from 0016cf55 to 0016d018 has its CatchHandler @ 0016d9bb */
  cVar4 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022c590
          )(&local_3f0,"c-shell",7);
  if (((cVar4 == '\0') &&
      (cVar4 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022c590
               )(&local_3f0,"bourne-shell",0xc), cVar4 == '\0')) ||
     ((cVar4 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022c590
               )(&local_3f0,"print-database",0xe), cVar4 == '\0' &&
      (cVar4 = (*(code *)
                 PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022c590
               )(&local_3f0,"print-ls-colors",0xf), cVar4 == '\0')))) {
                    /* try { // try from 0016d04e to 0016d22b has its CatchHandler @ 0016d9bb */
    cVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022c590
            )(&local_3f0,"print-database",0xe);
    if ((cVar4 == '\0') ||
       (cVar4 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022c590
                )(&local_3f0,"print-ls-colors",0xf), cVar4 == '\0')) {
      cVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022c590
              )(&local_3f0,"print-database",0xe);
      if (cVar4 == '\0') {
        cVar4 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022c590
                )(&local_3f0,"c-shell",7);
        if (cVar4 == '\0') {
          cVar4 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022c590
                  )(&local_3f0,"bourne-shell",0xc);
          if (cVar4 != '\0') {
            local_499 = '\0';
            cVar4 = local_499;
            goto LAB_0016d31f;
          }
          cVar4 = (*(code *)
                    PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_0022c590
                  )(&local_3f0,"print-ls-colors",0xf);
          if (cVar4 != '\0') {
            local_499 = '\x02';
            cVar4 = local_499;
            goto LAB_0016d31f;
          }
          local_499 = '\x03';
          cVar4 = (*(code *)PTR__ZN12uu_dircolors12guess_syntax17h0035ab354e037d8bE_0022c5a8)();
          if (cVar4 != '\x03') goto LAB_0016d31f;
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h738ce379b89b2014E
                    (&local_498,"no SHELL environment variable, and no shell type option given",0x3d
                    );
          local_338 = local_488;
          local_348 = (undefined **)local_498;
          uStack_340 = (undefined *)uStack_490;
          pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
          uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h654ece1522594687E(&local_348);
        }
        else {
          local_499 = '\x01';
          cVar4 = local_499;
LAB_0016d31f:
          local_499 = cVar4;
          if (local_428 != 1) {
            if (local_428 != 0) {
              uStack_490 = *(undefined8 *)(local_430[1] + 8);
              local_488 = *(undefined ****)(local_430[1] + 0x10);
              local_498 = (undefined *)0x0;
              uStack_480 = CONCAT31(uStack_480._1_3_,1);
              local_450 = (code *)
                          PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_0022c538
              ;
              local_348 = &PTR_s_extra_operand_file_operands_cann_002245f0;
              uStack_340 = (undefined *)0x1;
              local_328 = 0;
              local_338 = &local_458;
              pppuStack_330 = (undefined ***)0x1;
                    /* try { // try from 0016d52c to 0016d688 has its CatchHandler @ 0016d9b4 */
              local_458 = &local_498;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17h6ae5f3d5493eed50E
                        (&local_390,&local_348);
              pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
              local_348 = (undefined **)CONCAT44(uStack_38c,local_390);
              uStack_340 = (undefined *)CONCAT44(uStack_384,uStack_388);
              local_338 = local_380;
              uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h654ece1522594687E(&local_348);
              goto LAB_0016d019;
            }
                    /* try { // try from 0016d33a to 0016d358 has its CatchHandler @ 0016d9b4 */
            (*(code *)PTR__ZN12uu_dircolors18generate_ls_colors17h07b798e699c26892E_0022c5b0)
                      (&local_498,&local_499,":: invalid line;  missing second token",1);
            local_450 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_348 = (undefined **)&DAT_00224578;
            uStack_340 = (undefined *)0x2;
            local_328 = 0;
            local_338 = &local_458;
            pppuStack_330 = (undefined ***)0x1;
                    /* try { // try from 0016d3aa to 0016d3b7 has its CatchHandler @ 0016d996 */
            local_458 = &local_498;
            (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_0022c5a0)(&local_348);
                    /* try { // try from 0016d3b8 to 0016d40c has its CatchHandler @ 0016d9b4 */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h48c80b6faae0a7bbE(&local_498)
            ;
            goto LAB_0016d3c2;
          }
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha729273d498af9d1E
                            (*(undefined8 *)(*local_430 + 8),*(undefined8 *)(*local_430 + 0x10),"-",
                             1);
          if (cVar4 != '\0') {
            uVar5 = (*(code *)PTR__ZN3std2io5stdio5stdin17h7215cc131abb55d8E_0022c5b8)();
            _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hf5745e56a44e873fE
                      (local_80,0x2000,uVar5);
            if (local_428 != 0) {
                    /* try { // try from 0016d42c to 0016d445 has its CatchHandler @ 0016d94e */
              _ZN12uu_dircolors5parse17h624210590e7596d4E
                        (&local_348,local_80,&local_499,*(undefined8 *)(*local_430 + 8),
                         *(undefined8 *)(*local_430 + 0x10));
              local_408 = local_338;
              pppuStack_400 = pppuStack_330;
              local_418 = (long)local_348;
              puStack_410 = uStack_340;
LAB_0016d466:
              if (local_418 == 0) {
                local_488 = pppuStack_400;
                local_498 = puStack_410;
                uStack_490 = local_408;
                local_450 = 
                _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
                ;
                local_348 = (undefined **)&DAT_00224578;
                uStack_340 = (undefined *)0x2;
                local_328 = 0;
                local_338 = &local_458;
                pppuStack_330 = (undefined ***)0x1;
                    /* try { // try from 0016d7fd to 0016d80a has its CatchHandler @ 0016d91f */
                local_458 = &local_498;
                (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_0022c5a0)(&local_348);
                    /* try { // try from 0016d810 to 0016d819 has its CatchHandler @ 0016d960 */
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h48c80b6faae0a7bbE
                          (&local_498);
                uVar5 = 0;
              }
              else {
                local_338 = pppuStack_400;
                local_348 = (undefined **)puStack_410;
                uStack_340 = (undefined *)local_408;
                pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
                    /* try { // try from 0016d4a6 to 0016d4b2 has its CatchHandler @ 0016d960 */
                uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h654ece1522594687E(&local_348);
              }
                    /* try { // try from 0016d81c to 0016d825 has its CatchHandler @ 0016d9b6 */
              _ZN4core3ptr69drop_in_place_LT_alloc__vec__Vec_LT__RF_alloc__string__String_GT__GT_17h8b5b985f78a7e760E
                        (local_438);
              _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8dab8eeff1531528E
                        (&local_3f0);
              auVar6._8_8_ = &
                             PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h0e6e840f3056d7edE_00224630
              ;
              auVar6._0_8_ = uVar5;
              return auVar6;
            }
                    /* try { // try from 0016d8d5 to 0016d8f5 has its CatchHandler @ 0016d950 */
            (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E_0022c5d8)
                      (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_002246b8);
LAB_0016d8f6:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (local_428 == 0) {
                    /* try { // try from 0016d8c2 to 0016d8d2 has its CatchHandler @ 0016d9b4 */
            (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E_0022c5d8)
                      (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_002246a0);
            goto LAB_0016d8f6;
          }
          uVar5 = *(undefined8 *)(*local_430 + 8);
          pppuVar1 = *(undefined ****)(*local_430 + 0x10);
          cVar4 = (*(code *)PTR__ZN3std4path4Path6is_dir17h9ac0db933706da51E_0022c5c0)
                            (uVar5,pppuVar1);
          if (cVar4 == '\0') {
            _ZN3std2fs4File4open17h4d15bcf36777fbfdE(&local_3b8,uVar5,pppuVar1);
            if (local_3b8 == 0) {
                    /* try { // try from 0016d846 to 0016d857 has its CatchHandler @ 0016d9b4 */
              _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hb6293618d46545aeE
                        (local_50,0x2000,local_3b4);
                    /* try { // try from 0016d858 to 0016d868 has its CatchHandler @ 0016d90a */
              (*(code *)
                PTR__ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E_0022c5d0)
                        (&local_498,uVar5,pppuVar1);
                    /* try { // try from 0016d873 to 0016d88c has its CatchHandler @ 0016d8f8 */
              _ZN12uu_dircolors5parse17h71fa074bce44395fE
                        (&local_348,local_50,&local_499,uStack_490,local_488);
              local_408 = local_338;
              pppuStack_400 = pppuStack_330;
              local_418 = (long)local_348;
              puStack_410 = uStack_340;
                    /* try { // try from 0016d8b0 to 0016d8bc has its CatchHandler @ 0016d960 */
              _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hae6b6ef474db0aafE
                        (&local_498);
              goto LAB_0016d466;
            }
            local_420 = local_3b0;
            local_498 = (undefined *)0x1;
            uStack_480 = uStack_480 & 0xffffff00;
            local_450 = (code *)
                        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_0022c538
            ;
            local_448 = &local_420;
            local_440 = 
            PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E_0022c5c8
            ;
            local_348 = (undefined **)&DAT_00224558;
            uStack_340 = (undefined *)0x2;
            local_328 = 0;
            local_338 = &local_458;
            pppuStack_330 = (undefined ***)0x2;
                    /* try { // try from 0016d729 to 0016d775 has its CatchHandler @ 0016d93c */
            uStack_490 = uVar5;
            local_488 = pppuVar1;
            local_458 = &local_498;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h6ae5f3d5493eed50E(&local_360,&local_348)
            ;
            pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
            local_348 = (undefined **)CONCAT44(uStack_35c,local_360);
            uStack_340 = (undefined *)CONCAT44(uStack_354,uStack_358);
            local_338 = local_350;
            uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h654ece1522594687E(&local_348);
                    /* try { // try from 0016d781 to 0016d785 has its CatchHandler @ 0016d9b4 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc1ac7fa82c6c85d2E(local_420);
            param_1 = &
                      PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h0e6e840f3056d7edE_00224630
            ;
            goto LAB_0016d023;
          }
          local_498 = (undefined *)0x1;
          uStack_480 = CONCAT31(uStack_480._1_3_,1);
          local_450 = (code *)
                      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_0022c538
          ;
          local_348 = &PTR_s_expected_file__got_directory_00224600;
          uStack_340 = (undefined *)0x1;
          local_328 = 0;
          local_338 = &local_458;
          pppuStack_330 = (undefined ***)0x1;
          uStack_490 = uVar5;
          local_488 = pppuVar1;
          local_458 = &local_498;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h6ae5f3d5493eed50E(&local_378,&local_348);
          pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,2);
          local_348 = (undefined **)CONCAT44(uStack_374,local_378);
          uStack_340 = (undefined *)CONCAT44(uStack_36c,uStack_370);
          local_338 = local_368;
          uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h654ece1522594687E(&local_348);
        }
        param_1 = &
                  PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h0e6e840f3056d7edE_00224630
        ;
      }
      else {
        if (local_428 != 0) {
          uStack_490 = *(undefined8 *)(*local_430 + 8);
          local_488 = *(undefined ****)(*local_430 + 0x10);
          local_498 = (undefined *)0x0;
          uStack_480 = CONCAT31(uStack_480._1_3_,1);
          local_450 = (code *)
                      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_0022c538
          ;
          local_348 = &PTR_s_extra_operand_file_operands_cann_002245d0;
          uStack_340 = (undefined *)0x2;
          local_328 = 0;
          local_338 = &local_458;
          pppuStack_330 = (undefined ***)0x1;
          local_458 = &local_498;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h6ae5f3d5493eed50E(&local_3a8,&local_348);
          pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
          local_348 = (undefined **)CONCAT44(uStack_3a4,local_3a8);
          uStack_340 = (undefined *)CONCAT44(uStack_39c,uStack_3a0);
          local_338 = local_398;
          uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h654ece1522594687E(&local_348);
          goto LAB_0016d019;
        }
        (*(code *)PTR__ZN12uu_dircolors25generate_dircolors_config17hf75f23ebe3da3611E_0022c598)
                  (&local_498);
        local_450 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
        local_348 = (undefined **)&DAT_00224578;
        uStack_340 = (undefined *)0x2;
        local_328 = 0;
        local_338 = &local_458;
        pppuStack_330 = (undefined ***)0x1;
                    /* try { // try from 0016d27d to 0016d28a has its CatchHandler @ 0016d9a5 */
        local_458 = &local_498;
        (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_0022c5a0)(&local_348);
                    /* try { // try from 0016d28b to 0016d315 has its CatchHandler @ 0016d9bb */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h48c80b6faae0a7bbE(&local_498);
LAB_0016d3c2:
        uVar5 = 0;
      }
      goto LAB_0016d023;
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h738ce379b89b2014E
              (&local_498,"options --print-database and --print-ls-colors are mutually exclusive",
               0x45);
    local_338 = local_488;
    local_348 = (undefined **)local_498;
    uStack_340 = (undefined *)uStack_490;
    pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h654ece1522594687E(&local_348);
  }
  else {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h738ce379b89b2014E
              (&local_498,
               "the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive"
               ,0x5b);
    local_338 = local_488;
    local_348 = (undefined **)local_498;
    uStack_340 = (undefined *)uStack_490;
    pppuStack_330 = (undefined ***)CONCAT44(pppuStack_330._4_4_,1);
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h654ece1522594687E(&local_348);
  }
LAB_0016d019:
  param_1 = &
            PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h0e6e840f3056d7edE_00224708
  ;
LAB_0016d023:
                    /* try { // try from 0016d023 to 0016d02c has its CatchHandler @ 0016d9b6 */
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = uVar5;
  _ZN4core3ptr69drop_in_place_LT_alloc__vec__Vec_LT__RF_alloc__string__String_GT__GT_17h8b5b985f78a7e760E
            (local_438);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h8dab8eeff1531528E
            (&local_3f0);
  return auVar3;
}