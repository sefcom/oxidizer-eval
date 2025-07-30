void _ZN4flea4main17h2fd4225971588529E(void)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined8 **local_438;
  undefined8 uStack_430;
  undefined8 **local_428;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 **local_338;
  undefined8 **local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 **local_318;
  undefined8 **local_308;
  undefined8 **ppuStack_300;
  undefined8 **local_2f8;
  undefined8 **local_2e8;
  undefined8 **ppuStack_2e0;
  undefined8 **local_2d8;
  code *pcStack_2d0;
  undefined8 local_2c8;
  undefined local_218 [48];
  undefined8 **local_1e8;
  code *pcStack_1e0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 **local_1b8;
  undefined local_188 [8];
  undefined8 **local_180;
  long local_178;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 **local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 **local_118;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined2 local_60;
  undefined local_50 [32];
  
  (*(code *)PTR__ZN10env_logger6logger4init17hcfe11003988bece9E_00826770)();
  uVar3 = _ZN4core4sync6atomic11atomic_load17h798438cf4f837e85E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
  if (2 < uVar3) {
    local_408 = (undefined **)&DAT_007f5958;
    uStack_400 = (undefined8 ***)&DAT_00000001;
    local_3f8 = (undefined8 ***)&DAT_00000008;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    local_2c8 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                          (&PTR_s_src_main_rs_007f59d8);
    local_2e8 = (undefined8 **)&DAT_0015172c;
    ppuStack_2e0 = (undefined8 **)&DAT_00000004;
    local_2d8 = (undefined8 **)&DAT_0015172c;
    pcStack_2d0 = (code *)0x4;
    _ZN3log13__private_api3log17h0054ea87901f9ef6E(&local_408,3,&local_2e8);
  }
  (*(code *)PTR__ZN3std3env4args17h379ffc9749335c0eE_00826788)(local_50);
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h930b75c54a92a1fcE
            (local_218,local_50,&PTR_s__root__rustup_toolchains_nightly_007f5868);
                    /* try { // try from 0037af66 to 0037af89 has its CatchHandler @ 0037c4a9 */
  (*(code *)PTR__ZN3std3env11current_exe17h7c1922f6c8ed92edE_00826790)(&local_408);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hf44f168bd33e09e7E
            (&local_2e8,&local_408,&PTR_s_src_main_rs_007f59f0);
                    /* try { // try from 0037af9a to 0037afc3 has its CatchHandler @ 0037c4ae */
  (*(code *)
    PTR__ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17hb4876b8b08d05247E_00826798
  )(&local_408,ppuStack_2e0,local_2d8);
  if ((int)local_408 == 1) {
                    /* try { // try from 0037b981 to 0037b98d has its CatchHandler @ 0037c4ae */
    (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)
              (&PTR_s_src_main_rs_007f5a08);
    goto LAB_0037bbd7;
  }
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4f11c760132d323dE
            (&local_408,uStack_400,local_3f8);
  local_338 = local_3f8;
  local_348 = (int)local_408;
  uStack_344 = local_408._4_4_;
  uStack_340 = (undefined4)uStack_400;
  uStack_33c = uStack_400._4_4_;
                    /* try { // try from 0037afde to 0037b00b has its CatchHandler @ 0037c4c0 */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb8ab2c35932f4c39E(&local_2e8);
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17h3e8dda1b6fe51ae0E
            (&local_408,CONCAT44(uStack_33c,uStack_340),local_338,&DAT_001519d8);
                    /* try { // try from 0037b00c to 0037b018 has its CatchHandler @ 0037c459 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8c3e4c9e242e21edE(&local_348);
  local_338 = local_3f8;
  local_348 = (int)local_408;
  uStack_344 = local_408._4_4_;
  uStack_340 = (undefined4)uStack_400;
  uStack_33c = uStack_400._4_4_;
                    /* try { // try from 0037b03b to 0037b04b has its CatchHandler @ 0037c4c0 */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17h3e8dda1b6fe51ae0E
            (&local_408,uStack_400,local_3f8,"\\\\.\\");
                    /* try { // try from 0037b04c to 0037b05b has its CatchHandler @ 0037c457 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8c3e4c9e242e21edE(&local_348);
  local_338 = local_3f8;
  local_348 = (int)local_408;
  uStack_344 = local_408._4_4_;
  uStack_340 = (undefined4)uStack_400;
  uStack_33c = uStack_400._4_4_;
  uVar3 = _ZN4core4sync6atomic11atomic_load17h798438cf4f837e85E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
  if (2 < uVar3) {
    local_438 = &local_328;
    uStack_430 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd80047a11b3b313dE;
    local_408 = (undefined **)&DAT_007f5968;
    uStack_400 = (undefined8 ***)&DAT_00000001;
    uStack_3e8 = 0;
    local_3f8 = &local_438;
    uStack_3f0 = 1;
    local_328 = (undefined8 **)&local_348;
                    /* try { // try from 0037b0de to 0037b162 has its CatchHandler @ 0037c4c0 */
    local_2c8 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                          (&PTR_s_src_main_rs_007f5a20);
    local_2e8 = (undefined8 **)&DAT_0015172c;
    ppuStack_2e0 = (undefined8 **)&DAT_00000004;
    local_2d8 = (undefined8 **)&DAT_0015172c;
    pcStack_2d0 = (code *)0x4;
    _ZN3log13__private_api3log17h0054ea87901f9ef6E(&local_408,3,&local_2e8);
  }
  local_2e8 = (undefined8 **)((ulong)local_2e8 & 0xffffffff00000000);
  uVar4 = _ZN4core4char7methods15encode_utf8_raw17hdf17d5a6360402f0E(0x2f,&local_2e8);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4f11c760132d323dE
            (&local_408,uVar4);
  ppuVar2 = local_338;
  local_1b8 = local_3f8;
  local_1c8 = (int)local_408;
  uStack_1c4 = local_408._4_4_;
  uStack_1c0 = (undefined4)uStack_400;
  uStack_1bc = uStack_400._4_4_;
                    /* try { // try from 0037b18d to 0037b243 has its CatchHandler @ 0037c4a4 */
  (*(code *)
    PTR__ZN73__LT__RF_alloc__string__String_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17ha6256b6a3600b2b5E_008267a0
  )(&local_408,&local_1c8,CONCAT44(uStack_33c,uStack_340),local_338);
  local_78 = local_3a8;
  local_88 = local_3b8;
  uStack_80 = uStack_3b0;
  local_98 = local_3c8;
  uStack_90 = uStack_3c0;
  local_a8 = local_3d8;
  uStack_a4 = uStack_3d4;
  uStack_a0 = uStack_3d0;
  uStack_9c = uStack_3cc;
  local_b8 = (undefined4)uStack_3e8;
  uStack_b4 = uStack_3e8._4_4_;
  uStack_b0 = uStack_3e0;
  uStack_ac = uStack_3dc;
  local_c8 = (undefined4)local_3f8;
  uStack_c4 = local_3f8._4_4_;
  uStack_c0 = (undefined4)uStack_3f0;
  uStack_bc = uStack_3f0._4_4_;
  local_d8 = (int)local_408;
  uStack_d4 = local_408._4_4_;
  uStack_d0 = (undefined4)uStack_400;
  uStack_cc = uStack_400._4_4_;
  local_70 = 0;
  local_68 = ppuVar2;
  local_60 = 1;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hc58c245f00880ef8E
            (local_188,&local_d8,&PTR_s__root__rustup_toolchains_nightly_007f5868);
  local_308 = (undefined8 ***)0x0;
  ppuStack_300 = (undefined8 **)&DAT_00000001;
  local_2f8 = (undefined8 ***)0x0;
  uStack_430 = (code *)(local_180 + local_178 * 2);
  local_438 = local_180;
  if ((undefined8 ***)(local_178 + -1) == (undefined8 ***)0x0) {
LAB_0037b473:
    (*(code *)PTR__ZN3std3env11current_dir17h40c04c259438f175E_008267a8)(&local_408);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hf44f168bd33e09e7E
              (&local_2e8,&local_408,&PTR_s_src_main_rs_007f5a38);
                    /* try { // try from 0037b4a7 to 0037b4d0 has its CatchHandler @ 0037c492 */
    (*(code *)
      PTR__ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17hb4876b8b08d05247E_00826798
    )(&local_408,ppuStack_2e0,local_2d8);
    if ((int)local_408 == 1) {
                    /* try { // try from 0037baa8 to 0037bab4 has its CatchHandler @ 0037c492 */
      (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)
                (&PTR_s_src_main_rs_007f5a50);
      goto LAB_0037bbd7;
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4f11c760132d323dE
              (&local_408,uStack_400,local_3f8);
    local_428 = local_3f8;
    local_438 = (undefined8 **)local_408;
    uStack_430 = (code *)uStack_400;
                    /* try { // try from 0037b4e5 to 0037b4f1 has its CatchHandler @ 0037c3f2 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8c3e4c9e242e21edE(&local_308);
    local_2f8 = local_428;
    local_308 = local_438;
    ppuStack_300 = (undefined8 **)uStack_430;
                    /* try { // try from 0037b50c to 0037b65a has its CatchHandler @ 0037c4d6 */
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb8ab2c35932f4c39E(&local_2e8);
  }
  else {
    local_428 = (undefined8 ***)(local_178 + -1);
    do {
      local_428 = (undefined8 **)((long)local_428 + -1);
      pppuVar5 = (undefined8 ***)
                 _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd22526327d59eb3fE
                           (&local_438);
      if (pppuVar5 == (undefined8 ***)0x0) break;
      local_1e8 = pppuVar5;
      if (pppuVar5[1] != (undefined8 **)0x0) {
        local_328 = &local_1e8;
        local_2e8 = (undefined8 **)&local_1c8;
        ppuStack_2e0 = (undefined8 **)
                       _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E
        ;
        local_2d8 = &local_328;
        pcStack_2d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf5937d5658b94510E;
        local_408 = (undefined **)&DAT_00150610;
        uStack_400 = (undefined8 ***)0x2;
        uStack_3e8 = 0;
        local_3f8 = &local_2e8;
        uStack_3f0 = 2;
                    /* try { // try from 0037b371 to 0037b37b has its CatchHandler @ 0037c4d4 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hbd37af77d9713dc6E(&local_140,&local_408);
        local_408 = (undefined **)CONCAT44(uStack_13c,local_140);
        uStack_400 = (undefined8 ***)CONCAT44(uStack_134,uStack_138);
        local_3f8 = (undefined8 ***)local_130;
                    /* try { // try from 0037b39b to 0037b3a5 has its CatchHandler @ 0037c4c5 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h5ca8c1f8020f7a24E
                  (&local_308,uStack_400,local_130,&PTR_s__root__rustup_toolchains_nightly_007f5898)
        ;
                    /* try { // try from 0037b3a6 to 0037b3ad has its CatchHandler @ 0037c4d4 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8c3e4c9e242e21edE(&local_408);
      }
    } while ((undefined8 ***)local_428 != (undefined8 ***)0x0);
    if ((undefined8 ***)local_2f8 == (undefined8 ***)0x0) goto LAB_0037b473;
    ppuStack_2e0 = (undefined8 **)
                   _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd80047a11b3b313dE;
    local_408 = &PTR_s_Couldn_t_set_the_current_directo_007f5978;
    uStack_400 = (undefined8 ***)0x2;
    uStack_3e8 = 0;
    local_3f8 = &local_2e8;
    uStack_3f0 = 1;
                    /* try { // try from 0037b412 to 0037b423 has its CatchHandler @ 0037c4d6 */
    local_438 = &local_308;
    local_2e8 = &local_438;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hbd37af77d9713dc6E(&local_128,&local_408);
    local_408 = (undefined **)CONCAT44(uStack_124,local_128);
    uStack_400 = (undefined8 ***)CONCAT44(uStack_11c,uStack_120);
    local_3f8 = (undefined8 ***)local_118;
                    /* try { // try from 0037b43e to 0037b463 has its CatchHandler @ 0037c414 */
    uVar4 = _ZN3std3env15set_current_dir17h9a512f0e31996f2dE(&local_308);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h66343b7588221f86E
              (uVar4,uStack_400,local_3f8,&PTR_s_src_main_rs_007f5a68);
                    /* try { // try from 0037b464 to 0037b496 has its CatchHandler @ 0037c4d6 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8c3e4c9e242e21edE(&local_408);
  }
  _ZN3std2fs8metadata17h65666ff0bc69322aE(&local_408,&DAT_00150bb0,8);
  pppuVar5 = (undefined8 ***)local_408;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h3fd70f9a0b8ae97aE
            (&local_408);
  if ((int)pppuVar5 != 2) {
    local_408 = (undefined **)_ZN3std2fs11remove_file17hb3eede55ac595ae4E(&DAT_00150bb0,8);
    if ((undefined8 ***)local_408 == (undefined8 ***)0x0) {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h3fe08944b1c9c98cE
                (&local_408);
    }
    else {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h3fe08944b1c9c98cE
                (&local_408);
    }
  }
  _ZN3std2fs8metadata17h65666ff0bc69322aE(&local_408,&DAT_001515d0,8);
  pppuVar5 = (undefined8 ***)local_408;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h3fd70f9a0b8ae97aE
            (&local_408);
  if ((int)pppuVar5 != 2) {
    local_408 = (undefined **)_ZN3std2fs11remove_file17hb3eede55ac595ae4E(&DAT_001515d0,8);
    if ((undefined8 ***)local_408 == (undefined8 ***)0x0) {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h3fe08944b1c9c98cE
                (&local_408);
    }
    else {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h3fe08944b1c9c98cE
                (&local_408);
    }
  }
  _ZN4flea7updater11find_update17he78be416422e025aE
            (&local_328,ppuStack_300,local_2f8,&DAT_00150ee0,8);
  local_428 = local_318;
  local_438 = local_328;
  uStack_430 = (code *)CONCAT44(uStack_31c,uStack_320);
  uVar3 = _ZN4core4sync6atomic11atomic_load17h798438cf4f837e85E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
  if (2 < uVar3) {
    local_1e8 = &local_438;
    pcStack_1e0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_408 = &PTR_s_Found_update__007f5998;
    uStack_400 = (undefined8 ***)&DAT_00000001;
    uStack_3e8 = 0;
    local_3f8 = &local_1e8;
    uStack_3f0 = 1;
                    /* try { // try from 0037bb0a to 0037bb64 has its CatchHandler @ 0037c426 */
    local_2c8 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                          (&PTR_s_src_main_rs_007f5a80);
    local_2e8 = (undefined8 **)&DAT_0015172c;
    ppuStack_2e0 = (undefined8 **)&DAT_00000004;
    local_2d8 = (undefined8 **)&DAT_0015172c;
    pcStack_2d0 = (code *)0x4;
    _ZN3log13__private_api3log17h0054ea87901f9ef6E(&local_408,3,&local_2e8);
  }
                    /* try { // try from 0037b9c3 to 0037b9fa has its CatchHandler @ 0037c426 */
  uVar4 = _ZN3std2fs6rename17ha1e28abcba9487f0E(&DAT_0015172c,4,&DAT_00150bb0,8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h66343b7588221f86E
            (uVar4,"Couldn\'t rename the current file!",0x21,&PTR_s_src_main_rs_007f5a98);
  local_3f8 = (undefined8 ***)local_428;
  local_408 = (undefined **)local_438;
  uStack_400 = (undefined8 ***)uStack_430;
                    /* try { // try from 0037ba0f to 0037ba8c has its CatchHandler @ 0037c3d5 */
  uVar4 = _ZN3std2fs6rename17hbcb47dc17ddb56ecE(&local_408,&DAT_0015172c,4);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h66343b7588221f86E
            (uVar4,&DAT_00150a10,0x20,&PTR_s_src_main_rs_007f5ab0);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4f11c760132d323dE
            (&local_408,&DAT_0015172c,4);
  local_2d8 = local_3f8;
  local_2e8 = (undefined8 **)local_408;
  ppuStack_2e0 = uStack_400;
  _ZN4flea7updater17start_new_process17hba0ad9c54647d43aE(&local_308,&local_2e8);
  (*(code *)PTR__ZN3std7process4exit17hf275b28aff227156E_008267f0)(0);
LAB_0037bbd7:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}