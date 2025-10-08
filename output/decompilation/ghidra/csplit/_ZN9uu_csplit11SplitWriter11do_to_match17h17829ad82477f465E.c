void _ZN9uu_csplit11SplitWriter11do_to_match17h17829ad82477f465E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long *param_6,int param_7,long param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  char cVar10;
  uint uVar11;
  ulong uVar12;
  undefined auVar13 [16];
  undefined8 local_198;
  undefined auStack_190 [16];
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long *local_160;
  undefined local_158 [16];
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  ulong local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_160 = param_6;
  local_108 = param_3;
  local_100 = param_4;
  local_f0 = param_5;
  if (param_7 < 0) {
    local_f8 = (ulong)-param_7;
    *(ulong *)(param_8 + 0x30) = local_f8;
    _ZN92__LT_uu_csplit__InputSplitter_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h22925739f0173e13E
              (&local_128);
    lVar8 = CONCAT44(uStack_11c,uStack_120);
    if (lVar8 != -0x7fffffffffffffff) {
      do {
        uVar7 = local_110;
        uVar6 = local_118;
        if (lVar8 == -0x8000000000000000) {
          *param_1 = 0xc;
          param_1[1] = local_118;
          param_1[2] = local_110;
          return;
        }
        uVar2 = CONCAT44(uStack_124,local_128);
        local_e0 = local_118;
        local_d8 = local_110;
                    /* try { // try from 002172a1 to 0021732f has its CatchHandler @ 00217976 */
        auVar13 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_suffix_of17ha48df28aef4c1d38E
                            ("\r\n",2,local_118,local_110);
        if (auVar13._0_8_ == 0) {
          auVar13 = _ZN9uu_csplit11SplitWriter11do_to_match28__u7b__u7b_closure_u7d__u7d_17h819c12a2ec51583cE
                              (uVar6,uVar7);
        }
        local_178 = auVar13._8_8_;
        local_198 = (undefined **)((ulong)local_198 & 0xffffffff00000000);
        uStack_180 = 0;
        uStack_170 = CONCAT31(uStack_170._1_3_,1);
        auStack_190 = auVar13;
        _ZN14regex_automata4util6search5Input8set_span17h20ece942847d591aE(&local_198,local_178);
        local_138 = (undefined4)local_178;
        uStack_134 = local_178._4_4_;
        uStack_130 = uStack_170;
        uStack_12c = uStack_16c;
        uStack_148 = auStack_190._8_8_;
        uStack_140 = (undefined4)uStack_180;
        uStack_13c = uStack_180._4_4_;
        local_158._0_8_ = local_198;
        local_158._8_8_ = auStack_190._0_8_;
        _ZN14regex_automata4meta5regex5Regex11search_half17h3686cea544a747ffE
                  (&local_198,local_f0,local_160,local_158);
        if (local_198 != (undefined **)0x0) {
                    /* try { // try from 0021742d to 00217446 has its CatchHandler @ 002178fa */
          local_160 = &local_e8;
          _ZN9uu_csplit22InputSplitter_LT_I_GT_21shrink_buffer_to_size17h2234f941e51dbd39E
                    (&local_58,param_8);
          local_178 = local_38;
          auStack_190._8_8_ = local_48;
          uStack_180 = uStack_40;
          local_198 = (undefined **)CONCAT44(uStack_54,local_58);
          auStack_190._4_4_ = uStack_4c;
          auStack_190._0_4_ = uStack_50;
          uVar12 = (ulong)local_198;
          if (local_198 == (undefined **)auStack_190._0_8_) goto LAB_00217542;
          goto LAB_002174a0;
        }
        _ZN9uu_csplit22InputSplitter_LT_I_GT_18add_line_to_buffer17h7facb3659246b3a4E
                  (&local_198,param_8,uVar2,&local_e8);
        if (local_198 == (undefined **)0x8000000000000000) {
          _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hac6e165de92e876fE
                    (&local_198);
        }
        else {
                    /* try { // try from 00217371 to 0021737b has its CatchHandler @ 0021792a */
          lVar8 = (*(code *)PTR__ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E_003711b8)
                            (param_2,auStack_190._0_8_,auStack_190._8_8_);
          if (lVar8 != 0) {
            *param_1 = 0;
            param_1[1] = lVar8;
            plVar9 = &local_198;
            goto LAB_002175e5;
          }
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(&local_198);
        }
        _ZN92__LT_uu_csplit__InputSplitter_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h22925739f0173e13E
                  (&local_128,param_8);
        lVar8 = CONCAT44(uStack_11c,uStack_120);
      } while (lVar8 != -0x7fffffffffffffff);
    }
    _ZN4core3ptr177drop_in_place_LT_core__option__Option_LT__LP_usize_C_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__RP__GT__GT_17hd170b8d8dcb5eaffE
              (&local_128);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17hf76acf84e2abe461E(&local_198,param_8);
    puVar4 = PTR__ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E_003711b8;
    uVar12 = (ulong)local_198;
    if (local_198 != (undefined **)auStack_190._0_8_) {
      do {
        plVar9 = (long *)((long)local_198 + 8);
        uVar12 = (long)local_198 + 0x20U;
        if (*plVar9 == -0x7fffffffffffffff) break;
        local_68 = *(undefined4 *)((long)local_198 + 0x10);
        uStack_64 = *(undefined4 *)((long)local_198 + 0x14);
        uStack_60 = *(undefined4 *)((long)local_198 + 0x18);
        uStack_5c = *(undefined4 *)((long)local_198 + 0x1c);
        local_198 = (undefined **)((long)local_198 + 0x20U);
        local_70 = *plVar9;
                    /* try { // try from 0021702d to 0021703a has its CatchHandler @ 00217943 */
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h93be4edd8ab7bad5E
                  (local_158,&local_70,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341c70);
        local_128 = local_158._8_4_;
        uStack_124 = local_158._12_4_;
        uStack_120 = (undefined4)uStack_148;
        uStack_11c = uStack_148._4_4_;
        uVar12 = (ulong)local_198;
        if (local_158._0_8_ == 0x8000000000000000) break;
                    /* try { // try from 00217078 to 0021707e has its CatchHandler @ 00217934 */
        lVar8 = (*(code *)puVar4)(param_2,local_158._8_8_,uStack_148);
        if (lVar8 != 0) goto LAB_00217392;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(local_158);
        uVar12 = (ulong)local_198;
      } while (local_198 != (undefined **)auStack_190._0_8_);
    }
    local_198 = (undefined **)uVar12;
    _ZN4core3ptr528drop_in_place_LT_core__iter__adapters__map__Map_LT_alloc__vec__drain__Drain_LT__LP_usize_C_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__RP__GT__C_uu_csplit__InputSplitter_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map__Map_LT_uu_csplit__LinesWithNewlines_LT_std__io__stdio__StdinLock_GT__C_uu_csplit__csplit_LT_std__io__stdio__StdinLock_GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT___drain_buffer___u7b__u7b_closure_u7d__u7d__GT__GT_17h56a376ed8393a26bE
              (&local_198);
  }
  else {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17hf76acf84e2abe461E(&local_198);
    puVar4 = PTR__ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E_003711b8;
    uVar12 = (ulong)local_198;
    if (local_198 != (undefined **)auStack_190._0_8_) {
      do {
        plVar9 = (long *)((long)local_198 + 8);
        uVar12 = (long)local_198 + 0x20U;
        if (*plVar9 == -0x7fffffffffffffff) break;
        local_98 = *(undefined4 *)((long)local_198 + 0x10);
        uStack_94 = *(undefined4 *)((long)local_198 + 0x14);
        uStack_90 = *(undefined4 *)((long)local_198 + 0x18);
        uStack_8c = *(undefined4 *)((long)local_198 + 0x1c);
        local_198 = (undefined **)((long)local_198 + 0x20U);
        local_a0 = *plVar9;
                    /* try { // try from 00216e9d to 00216eaa has its CatchHandler @ 00217961 */
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h93be4edd8ab7bad5E
                  (local_158,&local_a0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341c70);
        local_128 = local_158._8_4_;
        uStack_124 = local_158._12_4_;
        uStack_120 = (undefined4)uStack_148;
        uStack_11c = uStack_148._4_4_;
        uVar12 = (ulong)local_198;
        if (local_158._0_8_ == 0x8000000000000000) break;
                    /* try { // try from 00216ee6 to 00216eed has its CatchHandler @ 00217952 */
        lVar8 = (*(code *)puVar4)(param_2,local_158._8_8_,uStack_148);
        if (lVar8 != 0) {
LAB_00217392:
          *param_1 = 0;
          param_1[1] = lVar8;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(local_158);
          _ZN4core3ptr528drop_in_place_LT_core__iter__adapters__map__Map_LT_alloc__vec__drain__Drain_LT__LP_usize_C_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__RP__GT__C_uu_csplit__InputSplitter_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map__Map_LT_uu_csplit__LinesWithNewlines_LT_std__io__stdio__StdinLock_GT__C_uu_csplit__csplit_LT_std__io__stdio__StdinLock_GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT___drain_buffer___u7b__u7b_closure_u7d__u7d__GT__GT_17h56a376ed8393a26bE
                    (&local_198);
          return;
        }
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(local_158);
        uVar12 = (ulong)local_198;
      } while (local_198 != (undefined **)auStack_190._0_8_);
    }
    local_198 = (undefined **)uVar12;
    _ZN4core3ptr528drop_in_place_LT_core__iter__adapters__map__Map_LT_alloc__vec__drain__Drain_LT__LP_usize_C_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__RP__GT__C_uu_csplit__InputSplitter_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map__Map_LT_uu_csplit__LinesWithNewlines_LT_std__io__stdio__StdinLock_GT__C_uu_csplit__csplit_LT_std__io__stdio__StdinLock_GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT___drain_buffer___u7b__u7b_closure_u7d__u7d__GT__GT_17h56a376ed8393a26bE
              (&local_198);
    *(undefined8 *)(param_8 + 0x30) = 1;
    _ZN92__LT_uu_csplit__InputSplitter_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h22925739f0173e13E
              (&local_128);
    lVar8 = CONCAT44(uStack_11c,uStack_120);
    if (lVar8 != -0x7fffffffffffffff) {
      do {
        uVar7 = local_110;
        uVar6 = local_118;
        if (lVar8 == -0x8000000000000000) {
          *param_1 = 0xc;
          param_1[1] = local_118;
          param_1[2] = local_110;
          return;
        }
        uVar2 = CONCAT44(uStack_124,local_128);
        local_c8 = local_118;
        local_c0 = local_110;
        local_d0 = lVar8;
                    /* try { // try from 00217133 to 002171de has its CatchHandler @ 0021797d */
        auVar13 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_suffix_of17ha48df28aef4c1d38E
                            ("\r\n",2,local_118,local_110);
        if (auVar13._0_8_ == 0) {
          auVar13 = _ZN9uu_csplit11SplitWriter11do_to_match28__u7b__u7b_closure_u7d__u7d_17h819c12a2ec51583cE
                              (uVar6,uVar7);
        }
        local_178 = auVar13._8_8_;
        local_198 = (undefined **)((ulong)local_198 & 0xffffffff00000000);
        uStack_180 = 0;
        uStack_170 = CONCAT31(uStack_170._1_3_,1);
        auStack_190 = auVar13;
        _ZN14regex_automata4util6search5Input8set_span17h20ece942847d591aE(&local_198,local_178);
        local_138 = (undefined4)local_178;
        uStack_134 = local_178._4_4_;
        uStack_130 = uStack_170;
        uStack_12c = uStack_16c;
        uStack_148 = auStack_190._8_8_;
        uStack_140 = (undefined4)uStack_180;
        uStack_13c = uStack_180._4_4_;
        local_158._0_8_ = local_198;
        local_158._8_8_ = auStack_190._0_8_;
        _ZN14regex_automata4meta5regex5Regex11search_half17h3686cea544a747ffE
                  (&local_198,local_f0,local_160,local_158);
        if (local_198 != (undefined **)0x0) {
          cVar10 = *(char *)(*(long *)(param_2 + 0x20) + 99);
          local_160 = &local_d0;
          if (cVar10 == '\0') {
            if (param_7 == 0) {
                    /* try { // try from 00217733 to 002177a5 has its CatchHandler @ 002178ff */
              _ZN9uu_csplit22InputSplitter_LT_I_GT_18add_line_to_buffer17h7facb3659246b3a4E
                        (&local_198,param_8,uVar2,&local_d0);
              uVar12 = (ulong)local_198;
              _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hac6e165de92e876fE
                        (&local_198);
              bVar3 = false;
              cVar10 = '\0';
              if (uVar12 == 0x8000000000000000) goto LAB_0021777a;
              goto LAB_002178a7;
            }
                    /* try { // try from 002175ac to 002175bc has its CatchHandler @ 002178ff */
            lVar8 = (*(code *)PTR__ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E_003711b8)
                              (param_2,uVar6,uVar7);
          }
          else {
            bVar3 = true;
            if (param_7 == 0) {
              cVar10 = '\0';
              goto LAB_0021777a;
            }
                    /* try { // try from 002173ff to 0021740f has its CatchHandler @ 002178ff */
            lVar8 = (*(code *)PTR__ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E_003711b8)
                              (param_2,uVar6,uVar7);
          }
          if (lVar8 != 0) {
LAB_002175ce:
            *param_1 = 0;
            param_1[1] = lVar8;
            goto LAB_002175dd;
          }
          bVar3 = true;
          if (param_7 < 2) goto LAB_0021777a;
          uVar11 = param_7 + 1;
          goto LAB_002176bb;
        }
        lVar8 = (*(code *)PTR__ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E_003711b8)
                          (param_2,uVar6,uVar7);
        if (lVar8 != 0) goto LAB_002175ce;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(&local_d0);
        _ZN92__LT_uu_csplit__InputSplitter_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h22925739f0173e13E
                  (&local_128,param_8);
        lVar8 = CONCAT44(uStack_11c,uStack_120);
      } while (lVar8 != -0x7fffffffffffffff);
    }
    _ZN4core3ptr177drop_in_place_LT_core__option__Option_LT__LP_usize_C_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__RP__GT__GT_17hd170b8d8dcb5eaffE
              (&local_128);
  }
  (*(code *)PTR__ZN9uu_csplit11SplitWriter12finish_split17h02c3d655ecbf09e8E_003711c0)(param_2);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h726fb365ecba84afE
            (param_1 + 1,local_108,local_100);
  *param_1 = 3;
  return;
  while( true ) {
    local_80 = *(undefined4 *)((long)local_198 + 0x10);
    uStack_7c = *(undefined4 *)((long)local_198 + 0x14);
    uStack_78 = *(undefined4 *)((long)local_198 + 0x18);
    uStack_74 = *(undefined4 *)((long)local_198 + 0x1c);
    local_198 = (undefined **)((long)local_198 + 0x20U);
    local_88 = *plVar9;
                    /* try { // try from 002174cd to 002174da has its CatchHandler @ 0021791b */
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h93be4edd8ab7bad5E
              (local_158,&local_88,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341c40);
    local_b8 = local_158._8_4_;
    uStack_b4 = local_158._12_4_;
    uStack_b0 = (undefined4)uStack_148;
    uStack_ac = uStack_148._4_4_;
    uVar12 = (ulong)local_198;
    if (local_158._0_8_ == 0x8000000000000000) break;
                    /* try { // try from 00217516 to 00217520 has its CatchHandler @ 0021790c */
    lVar8 = (*(code *)PTR__ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E_003711b8)
                      (param_2,local_158._8_8_,uStack_148);
    if (lVar8 != 0) {
      *param_1 = 0;
      param_1[1] = lVar8;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(local_158);
                    /* try { // try from 002177d8 to 002177e1 has its CatchHandler @ 002178fa */
      _ZN4core3ptr528drop_in_place_LT_core__iter__adapters__map__Map_LT_alloc__vec__drain__Drain_LT__LP_usize_C_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__RP__GT__C_uu_csplit__InputSplitter_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map__Map_LT_uu_csplit__LinesWithNewlines_LT_std__io__stdio__StdinLock_GT__C_uu_csplit__csplit_LT_std__io__stdio__StdinLock_GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT___drain_buffer___u7b__u7b_closure_u7d__u7d__GT__GT_17h56a376ed8393a26bE
                (&local_198);
      plVar9 = &local_e8;
      goto LAB_002175e5;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(local_158);
    uVar12 = (ulong)local_198;
    if (local_198 == (undefined **)auStack_190._0_8_) break;
LAB_002174a0:
    plVar9 = (long *)((long)local_198 + 8);
    uVar12 = (long)local_198 + 0x20U;
    if (*plVar9 == -0x7fffffffffffffff) break;
  }
LAB_00217542:
                    /* try { // try from 00217542 to 0021754b has its CatchHandler @ 002178fa */
  local_198 = (undefined **)uVar12;
  _ZN4core3ptr528drop_in_place_LT_core__iter__adapters__map__Map_LT_alloc__vec__drain__Drain_LT__LP_usize_C_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__RP__GT__C_uu_csplit__InputSplitter_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map__Map_LT_uu_csplit__LinesWithNewlines_LT_std__io__stdio__StdinLock_GT__C_uu_csplit__csplit_LT_std__io__stdio__StdinLock_GT____u7b__u7b_closure_u7d__u7d__GT__GT__GT___drain_buffer___u7b__u7b_closure_u7d__u7d__GT__GT_17h56a376ed8393a26bE
            (&local_198);
  uVar12 = local_f8;
  if (*(char *)(*(long *)(param_2 + 0x20) + 99) == '\0') {
    *(ulong *)(param_8 + 0x30) = local_f8 + 1;
    _ZN9uu_csplit22InputSplitter_LT_I_GT_18add_line_to_buffer17h7facb3659246b3a4E
              (&local_198,param_8,uVar2,&local_e8);
    uVar5 = (ulong)local_198;
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hac6e165de92e876fE
              (&local_198);
    if (uVar5 != 0x8000000000000000) {
      local_198 = &PTR_s_should_be_big_enough_to_hold_eve_00341c30;
      auStack_190._0_8_ = 1;
      auStack_190._8_8_ = 8;
      uStack_180 = 0;
      local_178 = 0;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00370fc8)
                (&local_198,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341c58);
LAB_002178a7:
      local_198 = &PTR_s_the_buffer_is_big_enough_to_cont_00341bf0;
      auStack_190._0_8_ = 1;
      auStack_190._8_8_ = 8;
      uStack_180 = 0;
      local_178 = 0;
                    /* try { // try from 002178cf to 002178e0 has its CatchHandler @ 002178ff */
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00370fc8)
                (&local_198,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341c88);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    _ZN9uu_csplit22InputSplitter_LT_I_GT_18add_line_to_buffer17h7facb3659246b3a4E
              (&local_198,param_8,uVar2,&local_e8);
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hac6e165de92e876fE
              (&local_198);
    uVar12 = local_f8;
  }
  (*(code *)PTR__ZN9uu_csplit11SplitWriter12finish_split17h02c3d655ecbf09e8E_003711c0)(param_2);
  if (*(ulong *)(param_8 + 0x10) < uVar12) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h726fb365ecba84afE
              (param_1 + 1,local_108,local_100);
    *param_1 = 1;
    return;
  }
  *param_1 = 0xd;
  return;
  while( true ) {
    uStack_148 = uStack_180;
    local_158 = auStack_190;
                    /* try { // try from 00217705 to 0021770f has its CatchHandler @ 002178e3 */
    lVar8 = (*(code *)PTR__ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E_003711b8)(param_2);
    if (lVar8 != 0) {
      *param_1 = 0;
      param_1[1] = lVar8;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(local_158);
      goto LAB_002175dd;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(local_158);
    uVar11 = uVar11 - 1;
    if (uVar11 < 3) break;
LAB_002176bb:
                    /* try { // try from 002176bb to 002176ca has its CatchHandler @ 002178f2 */
    _ZN92__LT_uu_csplit__InputSplitter_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h22925739f0173e13E
              (&local_198,param_8);
    if (auStack_190._0_8_ == -0x7fffffffffffffff) {
                    /* try { // try from 002177f2 to 00217816 has its CatchHandler @ 002178ff */
      (*(code *)PTR__ZN9uu_csplit11SplitWriter12finish_split17h02c3d655ecbf09e8E_003711c0)(param_2);
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h726fb365ecba84afE
                (local_158,local_108,local_100);
      param_1[3] = uStack_148;
      *(undefined4 *)(param_1 + 1) = local_158._0_4_;
      *(undefined4 *)((long)param_1 + 0xc) = local_158._4_4_;
      *(undefined4 *)(param_1 + 2) = local_158._8_4_;
      *(undefined4 *)((long)param_1 + 0x14) = local_158._12_4_;
      *param_1 = 1;
      goto LAB_002175dd;
    }
    if (auStack_190._0_8_ == -0x8000000000000000) {
      *param_1 = 0xc;
      param_1[1] = auStack_190._8_8_;
      param_1[2] = uStack_180;
      goto LAB_002175dd;
    }
  }
LAB_0021777a:
  (*(code *)PTR__ZN9uu_csplit11SplitWriter12finish_split17h02c3d655ecbf09e8E_003711c0)(param_2);
  if (cVar10 != '\0') {
    _ZN92__LT_uu_csplit__InputSplitter_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h22925739f0173e13E
              (&local_198,param_8);
    _ZN4core3ptr177drop_in_place_LT_core__option__Option_LT__LP_usize_C_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__RP__GT__GT_17hd170b8d8dcb5eaffE
              (&local_198);
  }
  *param_1 = 0xd;
  if (bVar3) {
LAB_002175dd:
    plVar9 = &local_d0;
LAB_002175e5:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(plVar9);
  }
  return;
}