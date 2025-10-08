void _ZN2rg5flags6hiargs5Paths13from_low_args17hfc0513af1d20ff5aE
               (undefined (*param_1) [16],long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  char cVar7;
  byte bVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  bool bVar12;
  char local_121;
  undefined8 local_120;
  undefined8 uStack_118;
  long **local_110;
  undefined *local_108;
  long lStack_100;
  code *local_f8;
  undefined **local_f0;
  undefined **local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c0;
  undefined (*local_b8) [16];
  undefined local_b0 [16];
  long local_a0;
  long local_98;
  long *local_90;
  code *local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long **local_58;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_b8 = param_1;
  local_98 = param_3;
  local_b0 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h02ccee15b84dfdd3E
                       (*(undefined8 *)(param_3 + 0xc0),8,0x18,
                        &PTR_s_crates_core_flags_hiargs_rs_004eb118);
  local_a0 = 0;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17h48cde34d4c5afdaaE(&local_f0,param_3 + 0xb0);
  ppuVar6 = local_f0;
  if (local_f0 != local_e8) {
    do {
      ppuVar6 = local_f0 + 3;
      puVar2 = *local_f0;
      if (puVar2 == (undefined *)0x8000000000000000) break;
      ppuVar1 = local_f0 + 1;
      local_40 = *(undefined4 *)ppuVar1;
      uStack_3c = *(undefined4 *)((long)local_f0 + 0xc);
      ppuVar4 = local_f0 + 2;
      uStack_38 = *(undefined4 *)ppuVar4;
      uStack_34 = *(undefined4 *)((long)local_f0 + 0x14);
      local_f0 = ppuVar6;
      local_48 = puVar2;
      if (*(char *)(param_2 + 0x19) != '\0') {
                    /* try { // try from 003516d9 to 003516e9 has its CatchHandler @ 00351c49 */
        cVar7 = _ZN86__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_LT__RF_std__path__Path_GT__GT_2eq17h2125dccf5663ce54E
                          (*ppuVar1,*ppuVar4,&DAT_00169ba0,1);
        if (cVar7 != '\0') {
          local_120 = &PTR_s_error__attempted_to_read_pattern_004eb088;
          uStack_118 = &DAT_00000001;
          local_110 = (long **)&DAT_00000008;
          local_108 = (undefined *)0x0;
          lStack_100 = 0;
                    /* try { // try from 00351c06 to 00351c0f has its CatchHandler @ 00351c47 */
          uVar11 = _ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_120);
          *(undefined8 *)(*local_b8 + 8) = uVar11;
          *(undefined8 *)*local_b8 = 0x8000000000000000;
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hee77a3799ccd604eE(&local_48);
          _ZN4core3ptr79drop_in_place_LT_alloc__vec__drain__Drain_LT_std__ffi__os_str__OsString_GT__GT_17h29879139e73d0001E
                    (&local_f0);
          goto LAB_00351bc4;
        }
      }
                    /* try { // try from 003516f2 to 003516ff has its CatchHandler @ 00351c70 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hce819081c7de96c9E
                (local_b0,&local_48,&PTR_s_crates_core_flags_hiargs_rs_004eb1a8);
      ppuVar6 = local_f0;
    } while (local_f0 != local_e8);
  }
  local_f0 = ppuVar6;
  _ZN4core3ptr79drop_in_place_LT_alloc__vec__drain__Drain_LT_std__ffi__os_str__OsString_GT__GT_17h29879139e73d0001E
            (&local_f0);
                    /* try { // try from 00351716 to 00351b56 has its CatchHandler @ 00351c5b */
  uVar9 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
  lVar5 = local_a0;
  if (3 < uVar9) {
    local_c0 = local_a0;
    local_90 = &local_c0;
    local_88 = (code *)
               PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_005266c0
    ;
    local_120 = &PTR_s_number_of_paths_given_to_search__004eb098;
    uStack_118 = &DAT_00000001;
    lStack_100 = 0;
    local_110 = &local_90;
    local_108 = &DAT_00000001;
    local_d0 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                         (&PTR_s_crates_core_flags_hiargs_rs_004eb130);
    local_f0 = (undefined **)0x18754f;
    local_e8 = (undefined **)0x11;
    local_e0 = "rg::flags::hiargs";
    local_d8 = 0x11;
    _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_120,4,&local_f0);
  }
  uVar11 = local_b0._8_8_;
  if (lVar5 == 0) {
    local_121 = (*(code *)PTR__ZN8grep_cli17is_readable_stdin17h209fbf26d79344c3E_00527190)();
    bVar12 = true;
    if ((local_121 != '\0') && (*(char *)(param_2 + 0x19) == '\0')) {
      bVar12 = *(char *)(local_98 + 0x22c) != '\0';
    }
    uVar9 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
    if (3 < uVar9) {
      local_110 = (long **)(param_2 + 0x19);
      lStack_100 = local_98 + 0x22c;
      local_120 = (undefined **)&local_121;
      uStack_118 = 
      PTR__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17hbea0b23ff4cd4bd6E_00526a88;
      local_108 = 
      PTR__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17hbea0b23ff4cd4bd6E_00526a88;
      local_f8 = 
      _ZN61__LT_rg__flags__lowargs__Mode_u20_as_u20_core__fmt__Debug_GT_3fmt17hb4023750cedb2052E;
      local_f0 = &PTR_s_using_heuristics_to_determine_wh_004eb0b8;
      local_e8 = (undefined **)&DAT_00000004;
      local_d0 = 0;
      local_e0 = (char *)&local_120;
      local_d8 = 3;
      local_70 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                           (&PTR_s_crates_core_flags_hiargs_rs_004eb148);
      local_90 = (long *)0x18754f;
      local_88 = (code *)0x11;
      local_80 = "rg::flags::hiargs";
      local_78 = 0x11;
      _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_f0,4,&local_90);
    }
    if (bVar12 == false) {
      uVar9 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
      if (3 < uVar9) {
        local_120 = &PTR_s_heuristic_chose_to_search_stdin_004eb108;
        uStack_118 = &DAT_00000001;
        local_110 = (long **)&DAT_00000008;
        local_108 = (undefined *)0x0;
        lStack_100 = 0;
        local_d0 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                             (&PTR_s_crates_core_flags_hiargs_rs_004eb160);
        local_f0 = (undefined **)0x18754f;
        local_e8 = (undefined **)0x11;
        local_e0 = "rg::flags::hiargs";
        local_d8 = 0x11;
        _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_120,4,&local_f0);
      }
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
                (&local_120,&DAT_00169ba0,1);
    }
    else {
      uVar9 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
      if (3 < uVar9) {
        local_120 = &PTR_s_heuristic_chose_to_search____004eb0f8;
        uStack_118 = &DAT_00000001;
        local_110 = (long **)&DAT_00000008;
        local_108 = (undefined *)0x0;
        lStack_100 = 0;
        local_d0 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                             (&PTR_s_crates_core_flags_hiargs_rs_004eb178);
        local_f0 = (undefined **)0x18754f;
        local_e8 = (undefined **)0x11;
        local_e0 = "rg::flags::hiargs";
        local_d8 = 0x11;
        _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_120,4,&local_f0);
      }
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
                (&local_120,&DAT_00168da0,2);
    }
    local_58 = local_110;
    local_68 = (undefined4)local_120;
    uStack_64 = local_120._4_4_;
    uStack_60 = (undefined4)uStack_118;
    uStack_5c = uStack_118._4_4_;
    puVar10 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18,0);
    if (puVar10 == (undefined4 *)0x0) {
                    /* try { // try from 00351c35 to 00351c44 has its CatchHandler @ 00351c8f */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00526d20)(8,0x18);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(long ***)(puVar10 + 4) = local_58;
    *puVar10 = local_68;
    puVar10[1] = uStack_64;
    puVar10[2] = uStack_60;
    puVar10[3] = uStack_5c;
    *(undefined8 *)*local_b8 = 1;
    *(undefined4 **)(*local_b8 + 8) = puVar10;
    *(undefined8 *)local_b8[1] = 1;
    local_b8[1][8] = 1;
    local_b8[1][9] = bVar12 ^ 1;
LAB_00351bc4:
    _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h739d05dbffaabe89E
              (local_b0);
  }
  else {
    if (lVar5 == 1) {
      cVar7 = _ZN86__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_LT__RF_std__path__Path_GT__GT_2eq17h2125dccf5663ce54E
                        (*(undefined8 *)(local_b0._8_8_ + 8),*(undefined8 *)(local_b0._8_8_ + 0x10),
                         &DAT_00169ba0,1);
      bVar8 = 1;
      if (cVar7 == '\0') {
        bVar8 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00526f30)
                          (*(undefined8 *)(uVar11 + 8),*(undefined8 *)(uVar11 + 0x10));
        bVar8 = bVar8 ^ 1;
      }
    }
    else {
      bVar8 = 0;
    }
    local_c0 = CONCAT71(local_c0._1_7_,bVar8);
    uVar9 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
    if (3 < uVar9) {
      local_90 = &local_c0;
      local_88 = _ZN41__LT_bool_u20_as_u20_core__fmt__Debug_GT_3fmt17h2059a05f7be96066E;
      local_120 = &PTR_s_is_one_file__004eb0a8;
      uStack_118 = (undefined *)0x1;
      lStack_100 = 0;
      local_110 = &local_90;
      local_108 = (undefined *)0x1;
      local_d0 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                           (&PTR_s_crates_core_flags_hiargs_rs_004eb190);
      local_f0 = (undefined **)0x18754f;
      local_e8 = (undefined **)0x11;
      local_e0 = "rg::flags::hiargs";
      local_d8 = 0x11;
      _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_120,4,&local_f0);
      bVar8 = (byte)local_c0;
    }
    *(long *)local_b8[1] = local_a0;
    *local_b8 = local_b0;
    local_b8[1][8] = 0;
    local_b8[1][9] = bVar8;
  }
  return;
}