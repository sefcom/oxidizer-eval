undefined8 *
_ZN5uu_du15read_files_from17h40a5e404b0358f57E
          (undefined8 *param_1,undefined8 **param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 **local_148;
  code *pcStack_140;
  undefined8 ***local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 **local_100;
  undefined local_f8;
  undefined8 local_f0;
  undefined local_e8 [16];
  undefined8 **local_d8;
  undefined *local_d0;
  undefined8 **local_c8;
  code *pcStack_c0;
  undefined8 **local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 **local_88;
  code *local_80;
  undefined8 local_78;
  long local_70;
  undefined8 *local_68;
  undefined local_60 [24];
  undefined local_48 [24];
  
  local_b0 = param_2;
  local_a8 = param_3;
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h99bb5143d53920f6E
                    (param_2,param_3,"-",1);
  local_110 = param_1;
  if (cVar3 == '\0') {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hac1b67b8d5e5f2cfE
              (local_e8,param_2,param_3);
                    /* try { // try from 0019856e to 001985ff has its CatchHandler @ 00198804 */
    cVar3 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0024ebf8)
                      (local_e8._8_8_,local_d8);
    if (cVar3 == '\0') {
                    /* try { // try from 00198676 to 0019867f has its CatchHandler @ 00198804 */
      _ZN3std2fs4File4open17h980d6a34f4e65aa0E(&local_108,local_b0,local_a8);
      if ((int)local_108 != 1) {
                    /* try { // try from 001986d0 to 001986df has its CatchHandler @ 001987d9 */
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h278545cd756cb2f0E
                  (&local_148,local_108._4_4_);
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17habc9403b5c01943aE(&local_148);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hab61ff66151da0a3E(local_e8);
        local_100 = (undefined8 **)
                    &
                    PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h6eb20fba0d027075E_00245f58
        ;
        goto LAB_00198321;
      }
      cVar3 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_100);
      if (cVar3 != '\0') {
        param_1[1] = local_100;
        goto LAB_0019869f;
      }
      local_c8 = local_100;
      local_88 = &local_b0;
      local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hff9117abb4c135daE;
      local_148 = (undefined8 **)&DAT_00245ee8;
      pcStack_140 = (code *)0x2;
      local_128 = 0;
      local_138 = &local_88;
      local_130 = 1;
                    /* try { // try from 0019875b to 0019878c has its CatchHandler @ 001987c7 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hc02c35748679bc13E(local_48,&local_148);
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h61e569ef930cd37dE(local_48);
      uVar4 = (*(code *)PTR__ZN3std2io5error5Error4_new17hbf6e5d7f23cac6f9E_0024e8c8)
                        (0x28,uVar4,
                         &
                         PTR__ZN4core3ptr238drop_in_place_LT_alloc__boxed__convert___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT___from__StringError_GT_17h3c03c66744016960E_00246000
                        );
      param_1[1] = uVar4;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001987a0 to 001987ac has its CatchHandler @ 001987b2 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hd825320995beb979E(&local_c8);
    }
    else {
      local_88 = &local_b0;
      local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hff9117abb4c135daE;
      local_148 = (undefined8 **)&DAT_00245ec8;
      pcStack_140 = (code *)0x2;
      local_128 = 0;
      local_138 = &local_88;
      local_130 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hc02c35748679bc13E(local_60,&local_148);
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h61e569ef930cd37dE(local_60);
      uVar4 = (*(code *)PTR__ZN3std2io5error5Error4_new17hbf6e5d7f23cac6f9E_0024e8c8)
                        (0x28,uVar4,
                         &
                         PTR__ZN4core3ptr238drop_in_place_LT_alloc__boxed__convert___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT___from__StringError_GT_17h3c03c66744016960E_00246000
                        );
      param_1[1] = uVar4;
LAB_0019869f:
      *param_1 = 0x8000000000000000;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hab61ff66151da0a3E(local_e8);
  }
  else {
    uVar4 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_0024ebe8)();
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h195202c034a40601E
              (&local_148,uVar4);
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hca69a254467451c0E(&local_148);
    local_100 = (undefined8 **)
                &
                PTR__ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17h139f882390fa2043E_00246058
    ;
LAB_00198321:
    local_a0 = 0;
    uStack_98 = 8;
    local_90 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_108 = uVar4;
                    /* try { // try from 00198393 to 001983a4 has its CatchHandler @ 0019883a */
    while (_ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9cfe857fc1e43c14E
                     (&local_88,&local_108), uVar4 = local_78, pcVar2 = local_80, puVar1 = local_110
          , local_80 != (code *)0x8000000000000001) {
      if (local_80 == (code *)0x8000000000000000) {
        local_110[1] = local_78;
        *local_110 = 0x8000000000000000;
        _ZN4core3ptr142drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_std__io__Split_LT_alloc__boxed__Box_LT_dyn_u20_std__io__BufRead_GT__GT__GT__GT_17h9d70051d6ef6c40fE
                  (local_108,local_100);
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17heb31d09770f428f6E
                  (&local_a0);
        return puVar1;
      }
      if (local_70 == 0) {
        local_68 = (undefined8 *)((long)local_88 + 1);
                    /* try { // try from 00198483 to 0019854e has its CatchHandler @ 0019883f */
        local_e8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024e880)();
        pcStack_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hff9117abb4c135daE;
        local_148 = (undefined8 **)&DAT_00245f08;
        pcStack_140 = (code *)0x2;
        local_128 = 0;
        local_130 = 1;
        local_138 = &local_c8;
        local_c8 = (undefined8 **)local_e8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024e888)(&local_148);
        local_e8._0_8_ = &local_b0;
        local_e8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hff9117abb4c135daE;
        local_d8 = &local_68;
        local_d0 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0024ebf0
        ;
        local_148 = (undefined8 **)&DAT_00245f28;
        pcStack_140 = (code *)0x3;
        local_128 = 0;
        local_130 = 2;
        local_138 = (undefined8 ***)local_e8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024e888)(&local_148);
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0024ebb8)(1);
      }
      else {
                    /* try { // try from 001983e2 to 001983ed has its CatchHandler @ 0019883f */
        (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0024e8f8)
                  (&local_148,local_78);
                    /* try { // try from 001983f8 to 001983ff has its CatchHandler @ 0019882d */
        _ZN77__LT_alloc__borrow__Cow_LT_str_GT__u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hf7c0e7c1e655e4a4E
                  (local_e8,pcStack_140,local_138);
        local_b8 = local_d8;
        local_c8 = (undefined8 **)local_e8._0_8_;
        pcStack_c0 = (code *)local_e8._8_8_;
        _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hd2b311ea2da27bf0E
                  (&local_148);
                    /* try { // try from 00198432 to 00198439 has its CatchHandler @ 0019881b */
        cVar3 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h5291ddcb580e955fE
                          (&local_c8,uStack_98,local_90);
        if (cVar3 == '\0') {
          local_138 = (undefined8 ***)local_b8;
          local_148 = local_c8;
          pcStack_140 = pcStack_c0;
                    /* try { // try from 0019845b to 0019846a has its CatchHandler @ 00198819 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h606ac2565c1fed9cE(&local_a0,&local_148);
        }
        else {
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hab61ff66151da0a3E(&local_c8);
        }
      }
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h9004fc21845d6fc2E(pcVar2,uVar4)
      ;
    }
                    /* try { // try from 00198614 to 00198656 has its CatchHandler @ 001987ec */
    _ZN4core3ptr142drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_std__io__Split_LT_alloc__boxed__Box_LT_dyn_u20_std__io__BufRead_GT__GT__GT__GT_17h9d70051d6ef6c40fE
              (local_108,local_100);
    local_110[2] = local_90;
    *local_110 = local_a0;
    local_110[1] = uStack_98;
  }
  return local_110;
}