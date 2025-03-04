long _ZN7uu_tail9tail_file17he6a88cf1ecd2d2b4E
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               long param_6,undefined8 param_7)

{
  int iVar1;
  undefined **ppuVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined local_168 [16];
  char **local_158;
  code *pcStack_150;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined local_138 [24];
  undefined8 local_120;
  undefined **local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
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
  long local_38;
  
  local_110 = param_1;
  local_f8 = param_2;
  _ZN3std2fs8metadata17h5a76b0b01e9dc15dE(&local_e8,param_4,param_5);
  iVar1 = (int)local_e8;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he6af43ab7f514533E
            (&local_e8);
  if (iVar1 == 2) {
    _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
    local_168 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_138._0_8_ = local_168;
    local_138._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
    local_e8 = (undefined **)&DAT_002bb798;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d8 = (undefined8 *)local_138;
    uStack_d0 = 1;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e8);
    local_168._8_8_ =
         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_158 = &PTR_s_No_such_file_or_directory_002bb9c0;
    pcStack_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
    local_e8 = &PTR_s_cannot_open____for_reading__002bb7b8;
    uStack_e0 = 3;
    local_c8 = 0;
    local_d8 = (undefined8 *)local_168;
    uStack_d0 = 2;
    local_168._0_8_ = param_3;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e8);
    uVar6 = *(undefined8 *)(param_3 + 8);
    uVar8 = *(undefined8 *)(param_3 + 0x10);
LAB_00200295:
    lVar4 = _ZN7uu_tail6follow5watch8Observer12add_bad_path17h4375069fa57482bbE
                      (param_6,param_4,param_5,uVar6,uVar8,0);
    return lVar4;
  }
  cVar3 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(param_4,param_5);
  if (cVar3 != '\0') {
    _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
    _ZN7uu_tail5paths13HeaderPrinter11print_input17hd83f77d6875adb59E(local_f8,param_3);
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8732f121b58e7ba0E(local_138);
                    /* try { // try from 002002ec to 0020050a has its CatchHandler @ 002008cb */
    local_168 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_118 = (undefined **)
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
    local_e8 = (undefined **)&DAT_002bb798;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d8 = &local_120;
    uStack_d0 = 1;
    local_120 = local_168;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e8);
    local_168._8_8_ =
         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    pcStack_150 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_e8 = &PTR_s_error_reading_______cannot_follo_002bb7e8;
    uStack_e0 = 3;
    local_c8 = 0;
    uStack_d0 = 2;
    local_168._0_8_ = param_3;
    local_158 = (char **)local_138;
    local_d8 = (undefined8 *)local_168;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e8);
    if (*(char *)(local_110 + 0x4c) != '\x02') {
      bVar9 = *(char *)(local_110 + 0x48) == '\0';
      local_108 = (char *)0x1;
      if (bVar9) {
        local_108 = "; giving up on this name";
      }
      local_100 = 0x18;
      if (!bVar9) {
        local_100 = 0;
      }
      local_168 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_118 = (undefined **)
                  _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
      local_e8 = (undefined **)&DAT_002bb798;
      uStack_e0 = 2;
      local_c8 = 0;
      local_d8 = &local_120;
      uStack_d0 = 1;
      local_120 = local_168;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e8);
      local_168._8_8_ =
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
      ;
      local_158 = &local_108;
      pcStack_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
      local_e8 = (undefined **)&DAT_002bb818;
      uStack_e0 = 3;
      local_c8 = 0;
      uStack_d0 = 2;
      local_168._0_8_ = param_3;
      local_d8 = (undefined8 *)local_168;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e8);
    }
    lVar4 = 0;
    if ((((*(byte *)(param_6 + 0x8e) & 1) != 0) && (*(char *)(param_6 + 0x8c) != '\0')) &&
       (lVar4 = _ZN7uu_tail6follow5watch8Observer12add_bad_path17h4375069fa57482bbE
                          (param_6,param_4,param_5,*(undefined8 *)(param_3 + 8),
                           *(undefined8 *)(param_3 + 0x10),0), lVar4 == 0)) {
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e81f59885851d09E(local_138);
      return 0;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e81f59885851d09E(local_138);
    return lVar4;
  }
  cVar3 = _ZN7uu_tail5paths5Input11is_tailable17hb3d44ba0fa944896E(param_3);
  if (cVar3 == '\0') {
    uVar6 = *(undefined8 *)(param_3 + 8);
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    goto LAB_00200295;
  }
  _ZN3std2fs8metadata17h5a76b0b01e9dc15dE(&local_e8,param_4,param_5);
  ppuVar2 = local_e8;
  if (local_e8 == (undefined **)0x2) {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he6af43ab7f514533E
              (&local_e8);
  }
  else {
    local_38 = local_88;
  }
  lVar4 = local_110;
  _ZN3std2fs4File4open17hcbb28a04a46ba590E(&local_120,param_4,param_5);
  if ((int)local_120 != 0) {
    cVar3 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(local_118);
    if (cVar3 == '\x01') {
      local_f0 = local_118;
                    /* try { // try from 002005bf to 002005d1 has its CatchHandler @ 00200883 */
      lVar4 = _ZN7uu_tail6follow5watch8Observer12add_bad_path17h4375069fa57482bbE
                        (param_6,param_4,param_5,*(undefined8 *)(param_3 + 8),
                         *(undefined8 *)(param_3 + 0x10),0);
      if (lVar4 == 0) {
        local_108 = (char *)_ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17hf7330592f10927b5E
                                      (local_118,param_3);
                    /* try { // try from 00200794 to 00200828 has its CatchHandler @ 002008aa */
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
        local_138._0_16_ = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_168._0_8_ = local_138;
        local_168._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
        local_158 = &local_108;
        pcStack_150 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4b13273068b31414E
        ;
        local_e8 = (undefined **)&DAT_002bb848;
        uStack_e0 = 3;
        local_c8 = 0;
        local_d8 = (undefined8 *)local_168;
        uStack_d0 = 2;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e8);
        _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h07296d4a29ad6a0fE
                  (local_108);
        return 0;
      }
      pppuVar7 = &local_f0;
    }
    else {
      local_e8 = local_118;
                    /* try { // try from 002006d8 to 002006ea has its CatchHandler @ 00200871 */
      lVar4 = _ZN7uu_tail6follow5watch8Observer12add_bad_path17h4375069fa57482bbE
                        (param_6,param_4,param_5,*(undefined8 *)(param_3 + 8),
                         *(undefined8 *)(param_3 + 0x10),0);
      if (lVar4 == 0) {
        lVar4 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h5dd0adcf7fd88ca2E
                          (local_118,param_3);
        return lVar4;
      }
      pppuVar7 = &local_e8;
    }
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hadb3f722d4799b91E(pppuVar7);
    return lVar4;
  }
  local_138._0_4_ = local_120._4_4_;
                    /* try { // try from 00200608 to 00200617 has its CatchHandler @ 002008b9 */
  _ZN7uu_tail5paths13HeaderPrinter11print_input17hd83f77d6875adb59E(local_f8,param_3);
  if (*(char *)(lVar4 + 0x4b) == '\0') {
    uVar6 = 0;
    if (*(long *)(param_3 + 0x18) == -0x8000000000000000) {
      uVar6 = param_7;
    }
                    /* try { // try from 00200638 to 00200668 has its CatchHandler @ 00200868 */
    cVar3 = _ZN61__LT_std__fs__File_u20_as_u20_uu_tail__paths__FileExtTail_GT_11is_seekable17hb604e85046bd781dE
                      (local_138,uVar6);
    if (cVar3 != '\0') {
      if ((int)ppuVar2 == 2) {
                    /* try { // try from 0020085b to 00200867 has its CatchHandler @ 00200868 */
        uVar6 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                          (&PTR_s_src_uu_tail_src_tail_rs_002bb878);
                    /* catch() { ... } // from try @ 00200638 with catch @ 00200868
                       catch() { ... } // from try @ 0020085b with catch @ 00200868 */
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h36c30d39790b9e06E(local_138._0_4_);
        lVar4 = _Unwind_Resume(uVar6);
        return lVar4;
      }
      if (local_38 != 0) {
        _ZN7uu_tail12bounded_tail17hc4147e75324d37d5E(local_138,lVar4);
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17ha3ac34d0a7f10d70E
                  (local_168,0x2000,local_138._0_8_ & 0xffffffff);
        goto LAB_00200712;
      }
    }
  }
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17ha3ac34d0a7f10d70E
            (local_168,0x2000,local_138._0_8_ & 0xffffffff);
                    /* try { // try from 002006a6 to 002006b0 has its CatchHandler @ 00200895 */
  lVar4 = _ZN7uu_tail14unbounded_tail17hc66e4f3b3653bc33E(local_168,lVar4);
  if (lVar4 != 0) {
    _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17ha419d633ac1ad1e3E
              (local_168);
    return lVar4;
  }
LAB_00200712:
  uVar6 = *(undefined8 *)(param_3 + 8);
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  uStack_c0 = uStack_140;
  uStack_bc = uStack_13c;
  uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf480b26787a6f5a3E(&local_e8);
  lVar4 = _ZN7uu_tail6follow5watch8Observer8add_path17h2539e8b9bde14502E
                    (param_6,param_4,param_5,uVar6,uVar8,uVar5,
                     &
                     PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17ha419d633ac1ad1e3E_002bb890
                     ,1);
  if (lVar4 == 0) {
    return 0;
  }
  return lVar4;
}