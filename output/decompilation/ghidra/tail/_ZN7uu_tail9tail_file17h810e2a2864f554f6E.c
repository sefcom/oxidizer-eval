long _ZN7uu_tail9tail_file17h810e2a2864f554f6E
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  bool bVar10;
  undefined local_178 [16];
  undefined **local_168;
  code *pcStack_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long local_140;
  long local_138;
  undefined8 local_130;
  undefined **local_128;
  undefined local_120 [24];
  ulong local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long local_88;
  
  local_138 = param_1;
  _ZN3std2fs8metadata17h5c248dd9820946ebE(&local_e8,param_4,param_5);
  iVar3 = (int)local_e8;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4975ed621f4cd7cE
            (&local_e8);
  if (iVar3 == 2) {
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0027d888)(1);
    local_178 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
    puVar2 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358;
    local_120._0_8_ = local_178;
    local_120._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
    local_e8 = (undefined **)&DAT_002734a0;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d8 = (undefined8 *)local_120;
    uStack_d0 = 1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_e8);
    local_178._8_8_ =
         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_168 = &PTR_s_No_such_file_or_directory_00273800;
    pcStack_160 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
    local_e8 = &PTR_DAT_00273980;
    uStack_e0 = 3;
    local_c8 = 0;
    local_d8 = (undefined8 *)local_178;
    uStack_d0 = 2;
    local_178._0_8_ = param_3;
    (*(code *)puVar2)(&local_e8);
    uVar8 = *(undefined8 *)(param_3 + 8);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
  }
  else {
    local_140 = param_6;
    cVar5 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0027d870)(param_4,param_5);
    if (cVar5 != '\0') {
      local_108 = param_5;
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0027d888)(1);
      uVar8 = *(undefined8 *)(param_3 + 8);
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      _ZN7uu_tail5paths13HeaderPrinter11print_input17hb7a0117faf5241cbE(param_2,uVar8);
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha6b2ce04d4e70875E
                (local_120,&DAT_0012511b,0xe);
                    /* try { // try from 001a6c9f to 001a6ec4 has its CatchHandler @ 001a72c3 */
      local_178 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
      local_128 = (undefined **)
                  _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
      local_e8 = (undefined **)&DAT_002734a0;
      uStack_e0 = 2;
      local_c8 = 0;
      local_d8 = &local_130;
      uStack_d0 = 1;
      local_130 = local_178;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_e8);
      local_178._8_8_ =
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
      ;
      pcStack_160 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_e8 = &PTR_DAT_002739b0;
      uStack_e0 = 3;
      local_c8 = 0;
      uStack_d0 = 2;
      local_178._0_8_ = param_3;
      local_168 = (undefined **)local_120;
      local_d8 = (undefined8 *)local_178;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_e8);
      if (*(char *)(local_138 + 0x4c) != '\x02') {
        bVar10 = *(char *)(local_138 + 0x48) == '\0';
        local_100 = (undefined *)0x1;
        if (bVar10) {
          local_100 = &DAT_00125163;
        }
        local_f8 = 0x18;
        if (!bVar10) {
          local_f8 = 0;
        }
        local_178 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
        local_128 = (undefined **)
                    _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
        local_e8 = (undefined **)&DAT_002734a0;
        uStack_e0 = 2;
        local_c8 = 0;
        local_d8 = &local_130;
        uStack_d0 = 1;
        local_130 = local_178;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_e8);
        local_178._8_8_ =
             _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
        ;
        local_168 = &local_100;
        pcStack_160 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
        local_e8 = (undefined **)&DAT_002739e0;
        uStack_e0 = 3;
        local_c8 = 0;
        uStack_d0 = 2;
        local_178._0_8_ = param_3;
        local_d8 = (undefined8 *)local_178;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_e8);
      }
      if (((*(byte *)(local_140 + 0x8e) == 2) || ((*(byte *)(local_140 + 0x8e) & 1) == 0)) ||
         (*(char *)(local_140 + 0x8c) != '\x01')) {
        lVar6 = 0;
      }
      else {
        lVar6 = _ZN7uu_tail6follow5watch8Observer12add_bad_path17h8be109911ee417aaE
                          (local_140,param_4,local_108,uVar8,uVar7);
        if (lVar6 == 0) {
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha5fed46387940267E(local_120);
          return 0;
        }
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha5fed46387940267E(local_120);
      return lVar6;
    }
    cVar5 = (*(code *)PTR__ZN7uu_tail5paths5Input11is_tailable17h4da1a9f07b663fa3E_0027d8b8)
                      (param_3);
    if (cVar5 != '\0') {
      _ZN3std2fs8metadata17h5c248dd9820946ebE(&local_e8,param_4,param_5);
      ppuVar4 = local_e8;
      if (local_e8 == (undefined **)0x2) {
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4975ed621f4cd7cE
                  (&local_e8);
      }
      else {
        local_108 = CONCAT71(local_108._1_7_,local_88 == 0);
      }
      lVar6 = local_138;
      _ZN3std2fs4File4open17h45183e62b5972047E(&local_130,param_4,param_5);
      if ((int)local_130 == 1) {
        cVar5 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_128);
        if (cVar5 == '\x01') {
          local_f0 = local_128;
                    /* try { // try from 001a6f97 to 001a6fa6 has its CatchHandler @ 001a7289 */
          lVar6 = _ZN7uu_tail6follow5watch8Observer12add_bad_path17h8be109911ee417aaE
                            (local_140,param_4,param_5,*(undefined8 *)(param_3 + 8),
                             *(undefined8 *)(param_3 + 0x10));
          if (lVar6 == 0) {
            local_100 = (undefined *)
                        _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h5bae8a26a18f45c5E
                                  (local_128,param_3);
                    /* try { // try from 001a70ea to 001a7181 has its CatchHandler @ 001a729b */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0027d888)(1);
            local_120._0_16_ = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
            local_178._0_8_ = local_120;
            local_178._8_8_ =
                 _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
            local_168 = &local_100;
            pcStack_160 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h3afc98c8e5846cc3E
            ;
            local_e8 = (undefined **)&DAT_002736e0;
            uStack_e0 = 3;
            local_c8 = 0;
            local_d8 = (undefined8 *)local_178;
            uStack_d0 = 2;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_e8);
            _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17ha62dc2678d196b5cE
                      (local_100);
            return 0;
          }
          pppuVar9 = &local_f0;
        }
        else {
          local_e8 = local_128;
                    /* try { // try from 001a7093 to 001a70a2 has its CatchHandler @ 001a7277 */
          lVar6 = _ZN7uu_tail6follow5watch8Observer12add_bad_path17h8be109911ee417aaE
                            (local_140,param_4,param_5,*(undefined8 *)(param_3 + 8),
                             *(undefined8 *)(param_3 + 0x10));
          if (lVar6 == 0) {
            lVar6 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h5bae8a26a18f45c5E
                              (local_128,param_3);
            return lVar6;
          }
          pppuVar9 = &local_e8;
        }
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hf9bb92bdb8e06921E(pppuVar9);
        return lVar6;
      }
      local_120._0_4_ = local_130._4_4_;
      local_138 = *(undefined8 *)(param_3 + 8);
      uVar8 = *(undefined8 *)(param_3 + 0x10);
                    /* try { // try from 001a6fcf to 001a6fe2 has its CatchHandler @ 001a72bc */
      _ZN7uu_tail5paths13HeaderPrinter11print_input17hb7a0117faf5241cbE(param_2);
                    /* try { // try from 001a6ffa to 001a7004 has its CatchHandler @ 001a72d8 */
      if ((*(char *)(lVar6 + 0x4b) == '\0') &&
         (cVar5 = (*(code *)
                    PTR__ZN61__LT_std__fs__File_u20_as_u20_uu_tail__paths__FileExtTail_GT_11is_seekable17h88acdb1e21fcb8bfE_0027d8c8
                  )(local_120,0), cVar5 != '\0')) {
        if ((int)ppuVar4 == 2) {
                    /* try { // try from 001a7268 to 001a7274 has its CatchHandler @ 001a72d8 */
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)
                    (&PTR_DAT_00273a10);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((local_108 & 1) != 0) goto LAB_001a7021;
                    /* try { // try from 001a71be to 001a71ca has its CatchHandler @ 001a72d8 */
        _ZN7uu_tail12bounded_tail17hbf5073ecc1238535E(local_120,lVar6);
                    /* try { // try from 001a71cf to 001a7262 has its CatchHandler @ 001a72be */
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h293b79a640eb5f10E
                  (&local_e8,local_120._0_8_ & 0xffffffff);
        uStack_150 = uStack_c0;
        uStack_14c = uStack_bc;
        local_158 = local_c8;
        local_168 = (undefined **)local_d8;
        pcStack_160 = (code *)uStack_d0;
        local_178._0_8_ = local_e8;
        local_178._8_8_ = uStack_e0;
      }
      else {
LAB_001a7021:
                    /* try { // try from 001a7025 to 001a7031 has its CatchHandler @ 001a72be */
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h293b79a640eb5f10E
                  (&local_e8,local_120._0_8_ & 0xffffffff);
        local_158 = local_c8;
        uStack_150 = uStack_c0;
        uStack_14c = uStack_bc;
        local_168 = (undefined **)local_d8;
        pcStack_160 = (code *)uStack_d0;
        local_178._0_8_ = local_e8;
        local_178._8_8_ = uStack_e0;
                    /* try { // try from 001a7059 to 001a7065 has its CatchHandler @ 001a72ad */
        lVar6 = _ZN7uu_tail14unbounded_tail17h4476cde5dd10c477E(local_178,lVar6);
        if (lVar6 != 0) {
          _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17hdd2cb84096b06aabE
                    (local_178);
          return lVar6;
        }
      }
      local_c8 = local_158;
      uStack_c0 = uStack_150;
      uStack_bc = uStack_14c;
      local_d8 = local_168;
      uStack_d0 = pcStack_160;
      local_e8 = (undefined **)local_178._0_8_;
      uStack_e0 = local_178._8_8_;
      uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf1e01b4c89005b4bE(&local_e8);
      lVar6 = _ZN7uu_tail6follow5watch8Observer8add_path17h2513ec520b230a37E
                        (local_140,param_4,param_5,local_138,uVar8,uVar7,
                         &
                         PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17hdd2cb84096b06aabE_00273408
                         ,1);
      goto LAB_001a6c2d;
    }
    uVar8 = *(undefined8 *)(param_3 + 8);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    param_6 = local_140;
  }
  lVar6 = _ZN7uu_tail6follow5watch8Observer12add_bad_path17h8be109911ee417aaE
                    (param_6,param_4,param_5,uVar8,uVar7);
LAB_001a6c2d:
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  return lVar6;
}