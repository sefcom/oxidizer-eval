void _ZN4just10subcommand10Subcommand11list_module21print_doc_and_aliases17h31cf26e1a0d23f3bE
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
               undefined8 param_6,long param_7,ulong param_8,undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  code *pcVar2;
  char cVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined ****ppppuVar9;
  undefined **ppuVar10;
  undefined ****ppppuVar11;
  undefined auVar12 [16];
  undefined **local_1b8;
  undefined local_1b0 [16];
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  long local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined local_178 [16];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  char local_14a [17];
  char local_139;
  undefined ***local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined ***local_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined ***local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_188 = param_5;
  _ZN4just5color5Color6stdout17h99dee7c87aa8c485E(local_14a,param_1 + 0x184);
  cVar1 = *(char *)(param_1 + 0x1a6);
  local_190 = param_4;
  if ((param_4 == 0) && (param_7 == 0 || cVar1 == '\x02')) {
LAB_00390860:
    local_128 = &PTR_DAT_0052dbf8;
    uStack_120 = (code *)0x1;
    local_118 = (undefined ***)0x8;
    puStack_110 = (undefined *)0x0;
    uStack_108 = 0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_128);
    return;
  }
  local_198 = 4;
  if ((local_139 != '\0') && ((local_139 != '\x01' || (local_14a[0] == '\0')))) {
    local_198 = 10;
  }
  local_1a0 = 0;
  local_194 = 10;
  local_1b8 = (undefined **)&DAT_8000000000000000;
  local_1b0._0_8_ = &DAT_0016bfed;
  local_1b0._8_8_ = 1;
  puVar4 = (ulong *)_ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h3ce94925646e0fd0E
                              (param_9,param_10,param_2);
  if (puVar4 == (ulong *)0x0) {
                    /* try { // try from 003908e6 to 00390947 has its CatchHandler @ 0039097b */
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_005660a8)
              (&DAT_0016e502,0x16,&PTR_DAT_005313a0);
  }
  else {
    lVar8 = 0;
    if (*puVar4 <= param_8) {
      lVar8 = param_8 - *puVar4;
    }
    if (lVar8 + 1U < 0x10000) {
      local_128 = (undefined **)&DAT_00165db0;
      uStack_120 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
      local_118 = &local_1b8;
      puStack_110 = 
      PTR__ZN87__LT_ansi_term__display__ANSIGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h246055d15162f7c1E_00566ae0
      ;
      uStack_108 = 0;
      local_100 = CONCAT62(local_100._2_6_,(short)(lVar8 + 1U));
      local_180 = &DAT_0016ca80;
      local_178._0_8_ = (undefined ****)0x2;
      local_160 = &DAT_00171130;
      local_158 = 2;
      local_178._8_8_ = &local_128;
      local_168 = 3;
                    /* try { // try from 003903f7 to 00390401 has its CatchHandler @ 0039097b */
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_180);
      _ZN4core3ptr69drop_in_place_LT_ansi_term__display__ANSIGenericString_LT_str_GT__GT_17h67f49c18e7cd0b03E
                (&local_1b8);
      local_a0 = param_7;
      local_b0 = local_14a;
      local_a8 = param_6;
      if (param_7 != 0 && cVar1 == '\0') {
        _ZN4just10subcommand10Subcommand11list_module21print_doc_and_aliases28__u7b__u7b_closure_u7d__u7d_17h76086f3aa3ac0be1E
                  (&local_b0);
      }
      uVar6 = local_188;
      lVar8 = local_190;
      if (local_190 != 0) {
        local_128 = &PTR_DAT_0052f150;
        uStack_120 = (code *)0x1;
        local_118 = (undefined ***)0x8;
        puStack_110 = (undefined *)0x0;
        uStack_108 = 0;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_128);
        uVar5 = _ZN4just10subcommand11backtick_re17h4d3095efc2f63cccE();
        _ZN14regex_automata4meta5regex5Regex9find_iter17h931ca5e862c0d663E
                  (&local_98,uVar5,lVar8,uVar6);
        local_c8 = local_38;
        local_d8 = local_48;
        uStack_d0 = uStack_40;
        local_e8 = local_58;
        uStack_e0 = uStack_50;
        local_f8 = local_68;
        uStack_f0 = uStack_60;
        uStack_108 = local_78;
        local_100 = uStack_70;
        local_118 = local_88;
        puStack_110 = puStack_80;
        local_128 = (undefined **)CONCAT44(uStack_94,local_98);
        uStack_120 = (code *)CONCAT44(uStack_8c,uStack_90);
        local_c0 = lVar8;
        local_b8 = uVar6;
        ppppuVar9 = (undefined ****)0x0;
        while( true ) {
                    /* try { // try from 00390548 to 0039055f has its CatchHandler @ 00390979 */
          _ZN14regex_automata4util4iter8Searcher7advance17h29a3fd55984d9cf2E
                    (&local_180,&uStack_108,local_c8,&local_128);
          uVar5 = local_b8;
          lVar8 = local_c0;
          uVar6 = local_178._8_8_;
          ppppuVar11 = (undefined ****)local_178._0_8_;
          if ((int)local_180 != 1) break;
          auVar12 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                              (ppppuVar9,local_178._0_8_,local_190,local_188);
          if (auVar12._0_8_ == 0) {
            ppuVar10 = &PTR_DAT_005313d0;
            uVar5 = local_188;
            lVar8 = local_190;
LAB_003908d8:
                    /* try { // try from 003908d8 to 003908e3 has its CatchHandler @ 00390993 */
            (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
                      (lVar8,uVar5,ppppuVar9,ppppuVar11,ppuVar10);
            goto LAB_00390948;
          }
          if (auVar12._8_8_ != 0) {
            local_198 = 4;
            if ((local_139 != '\0') && ((local_139 != '\x01' || (local_14a[0] == '\0')))) {
              local_198 = 10;
            }
            local_1a0 = 0;
            local_194 = 10;
            local_1b8 = (undefined **)&DAT_8000000000000000;
            local_130 = 
            PTR__ZN87__LT_ansi_term__display__ANSIGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h246055d15162f7c1E_00566ae0
            ;
            local_180 = &DAT_00165db0;
            local_178._0_8_ = &DAT_00000001;
            local_160 = (undefined *)0x0;
            local_178._8_8_ = &local_138;
            local_168 = 1;
            local_138 = &local_1b8;
            local_1b0 = auVar12;
                    /* try { // try from 0039065e to 00390666 has its CatchHandler @ 00390968 */
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_180);
            _ZN4core3ptr69drop_in_place_LT_ansi_term__display__ANSIGenericString_LT_str_GT__GT_17h67f49c18e7cd0b03E
                      (&local_1b8);
          }
          cVar3 = local_14a[0];
          auVar12 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                              (ppppuVar11,uVar6,lVar8,uVar5);
          if (auVar12._0_8_ == 0) {
            ppuVar10 = &PTR_s__home_34r7hm4n__cargo_registry_s_005313e8;
            ppppuVar9 = ppppuVar11;
            ppppuVar11 = (undefined ****)uVar6;
            goto LAB_003908d8;
          }
          local_198 = 6;
          if ((local_139 != '\0') && ((local_139 == '\x02' || (cVar3 == '\0')))) {
            local_198 = 10;
          }
          local_1a0 = 0;
          local_194 = 10;
          local_1b8 = (undefined **)&DAT_8000000000000000;
          local_130 = 
          PTR__ZN87__LT_ansi_term__display__ANSIGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h246055d15162f7c1E_00566ae0
          ;
          local_180 = &DAT_00165db0;
          local_178._0_8_ = &DAT_00000001;
          local_160 = (undefined *)0x0;
          local_178._8_8_ = &local_138;
          local_168 = 1;
          local_138 = &local_1b8;
          local_1b0 = auVar12;
                    /* try { // try from 0039072b to 00390733 has its CatchHandler @ 0039096a */
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_180);
          _ZN4core3ptr69drop_in_place_LT_ansi_term__display__ANSIGenericString_LT_str_GT__GT_17h67f49c18e7cd0b03E
                    (&local_1b8);
          ppppuVar9 = (undefined ****)uVar6;
        }
        _ZN4core3ptr50drop_in_place_LT_regex__regex__string__Matches_GT_17h7696592b070cc7e9E
                  (&local_128);
        uVar6 = local_188;
        lVar8 = local_190;
        auVar12 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                            (ppppuVar9,local_190,local_188);
        if (auVar12._0_8_ == 0) {
          uVar6 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
                            (lVar8,uVar6,ppppuVar9,uVar6,&PTR_DAT_005313b8);
                    /* catch() { ... } // from try @ 00390823 with catch @ 00390963 */
          _ZN4core3ptr69drop_in_place_LT_ansi_term__display__ANSIGenericString_LT_str_GT__GT_17h67f49c18e7cd0b03E
                    (&local_180);
          _Unwind_Resume(uVar6);
          return;
        }
        if (auVar12._8_8_ != 0) {
          uVar7 = 4;
          if ((local_139 != '\0') && ((local_139 == '\x02' || (local_14a[0] == '\0')))) {
            uVar7 = 10;
          }
          local_168 = 0;
          local_160 = (undefined *)CONCAT44(10,uVar7);
          local_180 = (undefined *)0x8000000000000000;
          local_118 = &local_1b8;
          local_1b0._0_8_ =
               PTR__ZN87__LT_ansi_term__display__ANSIGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h246055d15162f7c1E_00566ae0
          ;
          local_128 = (undefined **)&DAT_00165db0;
          uStack_120 = (code *)0x1;
          uStack_108 = 0;
          puStack_110 = &DAT_00000001;
                    /* try { // try from 00390823 to 00390830 has its CatchHandler @ 00390963 */
          local_1b8 = &local_180;
          local_178 = auVar12;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_128);
          _ZN4core3ptr69drop_in_place_LT_ansi_term__display__ANSIGenericString_LT_str_GT__GT_17h67f49c18e7cd0b03E
                    (&local_180);
        }
      }
      if (param_7 != 0 && cVar1 == '\x01') {
        _ZN4just10subcommand10Subcommand11list_module21print_doc_and_aliases28__u7b__u7b_closure_u7d__u7d_17h76086f3aa3ac0be1E
                  (&local_b0);
      }
      goto LAB_00390860;
    }
    local_128 = &PTR_DAT_0052ce08;
    uStack_120 = (code *)0x1;
    local_118 = (undefined ***)&DAT_00000008;
    puStack_110 = (undefined *)0x0;
    uStack_108 = 0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00565d88)
              (&local_128,&PTR_DAT_00531400);
  }
LAB_00390948:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}