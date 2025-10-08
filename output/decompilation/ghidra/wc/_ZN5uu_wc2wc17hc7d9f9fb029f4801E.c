undefined8 _ZN5uu_wc2wc17hc7d9f9fb029f4801E(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined auVar9 [16];
  undefined8 local_198;
  undefined local_190 [16];
  undefined local_180 [16];
  undefined *local_170;
  code *local_168;
  undefined8 *local_160;
  code *local_158;
  undefined *local_150;
  code *local_148;
  undefined8 local_140;
  undefined *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined local_e8 [16];
  undefined8 **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  puVar8 = (undefined *)(ulong)*(byte *)(param_2 + 0x1d);
  local_f8 = 1;
  if (*(byte *)(param_2 + 0x1d) != 2) {
    local_f8 = _ZN5uu_wc20compute_number_width17h8118755960c57c57E(param_1,param_2);
  }
  _ZN5uu_wc6Inputs8try_iter17he119dd3efc5b2af1E(&local_130,param_1,param_2);
  if (local_130 != (undefined *)0x8000000000000003) {
    local_c0 = local_108;
    local_d0 = (undefined4)local_118;
    uStack_cc = local_118._4_4_;
    uStack_c8 = (undefined4)uStack_110;
    uStack_c4 = uStack_110._4_4_;
    local_e8._0_8_ = local_130;
    local_e8._8_8_ = local_128;
    local_d8 = uStack_120;
    uVar6 = 0;
    local_f0 = puVar8;
    while( true ) {
                    /* try { // try from 00169cf0 to 00169d04 has its CatchHandler @ 0016a258 */
      _ZN5uu_wc6Inputs8try_iter28__u7b__u7b_closure_u7d__u7d_17h0fa6caa4f0d409f0E
                (&local_a0,local_e8);
      if (local_a0 == -0x7ffffffffffffffd) break;
      if (local_a0 == -0x7ffffffffffffffe) {
        local_190._0_8_ = local_98;
        local_190._8_8_ = local_90;
                    /* try { // try from 00169d43 to 00169dcb has its CatchHandler @ 0016a25d */
        uVar3 = (**(code **)(local_90 + 0x58))();
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ffce8)(uVar3);
        auVar9 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ff9e0)();
        local_160 = (undefined8 *)local_180;
        local_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e49341541173517E;
        local_150 = local_190;
        local_148 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h513c2095c442bcfeE
        ;
        local_130 = &DAT_001f9318;
        local_128 = 3;
        uStack_110 = 0;
        uStack_120 = &local_160;
        local_118 = 2;
        local_180 = auVar9;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ff9e8)(&local_130);
                    /* try { // try from 00169dd6 to 00169dda has its CatchHandler @ 0016a258 */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hb8a5da919c7b4817E
                  (local_190._0_8_,local_190._8_8_);
        uVar6 = uVar6 + 1;
      }
      else {
        local_b8 = local_a0;
        local_b0 = local_98;
        local_a8 = local_90;
                    /* try { // try from 00169e08 to 00169e3b has its CatchHandler @ 0016a246 */
        _ZN5uu_wc21word_count_from_input17h4ad675f40b919e0eE(&local_130,&local_b8,param_2);
        if (local_130 == (undefined *)0x0) {
LAB_00169f6d:
          local_38 = local_108;
          local_48 = (undefined4)local_118;
          uStack_44 = local_118._4_4_;
          uStack_40 = (undefined4)uStack_110;
          uStack_3c = uStack_110._4_4_;
          local_58 = (undefined4)local_128;
          uStack_54 = local_128._4_4_;
          uStack_50 = (undefined4)uStack_120;
          uStack_4c = uStack_120._4_4_;
          (*(code *)
            PTR__ZN76__LT_uu_wc__word_count__WordCount_u20_as_u20_core__ops__arith__AddAssign_GT_10add_assign17h903707394c27ad02E_001ffa90
          )(&local_88,&local_58);
          if ((int)local_f0 != 2) {
            _ZN5uu_wc5Input8to_title17h56646f113684bc23E(local_180,&local_b8);
            pcVar7 = (char *)local_180._8_8_;
            puVar2 = local_170;
            if (local_180._0_8_ == -0x7fffffffffffffff) {
              pcVar7 = (char *)0x0;
              puVar2 = puVar8;
            }
                    /* try { // try from 00169ff1 to 0016a03c has its CatchHandler @ 0016a21b */
            puVar8 = puVar2;
            lVar4 = _ZN5uu_wc11print_stats17hc5ca112509d551a7E
                              (param_2,&local_58,pcVar7,puVar8,local_f8);
            if (lVar4 == 0) {
                    /* try { // try from 00169cd4 to 00169cda has its CatchHandler @ 0016a21b */
              _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17hc0c7b6ba243748cbE
                        (0);
            }
            else {
              if (pcVar7 == (char *)0x0) {
                pcVar7 = "<stdin>";
                puVar8 = &DAT_00000007;
              }
              local_198 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17hb457e8fc7396707fE
                                    (lVar4,pcVar7,puVar8);
                    /* try { // try from 0016a041 to 0016a0c7 has its CatchHandler @ 0016a20d */
              (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ffce8)(1);
              auVar9 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ff9e0)();
              local_160 = (undefined8 *)local_190;
              local_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e49341541173517E;
              local_148 = 
              _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h8429a37060a3bdfdE
              ;
              local_130 = &DAT_001f9318;
              local_128 = 3;
              uStack_110 = 0;
              uStack_120 = &local_160;
              local_118 = 2;
              local_150 = (undefined *)&local_198;
              local_190 = auVar9;
              (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ff9e8)(&local_130);
                    /* try { // try from 0016a0cc to 0016a0d0 has its CatchHandler @ 0016a21b */
              _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h66df39e1038318a5E
                        (local_198);
            }
            _ZN4core3ptr98drop_in_place_LT_core__option__Option_LT_alloc__borrow__Cow_LT_std__ffi__os_str__OsStr_GT__GT__GT_17hf203ba398b6b35beE
                      (local_180);
          }
        }
        else {
          if ((int)local_130 != 2) {
            local_198 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h695fb2f166ad45d6E
                                  (local_100,&local_b8);
                    /* try { // try from 00169ee3 to 00169f63 has its CatchHandler @ 0016a238 */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ffce8)(1);
            auVar9 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ff9e0)();
            local_180._0_8_ = local_190;
            local_180._8_8_ =
                 _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e49341541173517E;
            local_168 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h8429a37060a3bdfdE
            ;
            local_160 = (undefined8 *)&DAT_001f9318;
            local_158 = (code *)0x3;
            local_140 = 0;
            local_150 = local_180;
            local_148 = (code *)0x2;
            local_170 = (undefined *)&local_198;
            local_190 = auVar9;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ff9e8)(&local_160);
                    /* try { // try from 00169f68 to 00169fc5 has its CatchHandler @ 0016a246 */
            _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h66df39e1038318a5E
                      (local_198);
            goto LAB_00169f6d;
          }
          local_198 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h695fb2f166ad45d6E
                                (local_128,&local_b8);
                    /* try { // try from 00169e40 to 00169ec0 has its CatchHandler @ 0016a22a */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ffce8)(1);
          auVar9 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ff9e0)();
          local_180._0_8_ = local_190;
          local_180._8_8_ =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e49341541173517E;
          local_168 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h8429a37060a3bdfdE
          ;
          local_160 = (undefined8 *)&DAT_001f9318;
          local_158 = (code *)0x3;
          local_140 = 0;
          local_150 = local_180;
          local_148 = (code *)0x2;
          local_170 = (undefined *)&local_198;
          local_190 = auVar9;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ff9e8)(&local_160);
                    /* try { // try from 00169ec5 to 00169ede has its CatchHandler @ 0016a246 */
          _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h66df39e1038318a5E
                    (local_198);
        }
        _ZN4core3ptr33drop_in_place_LT_uu_wc__Input_GT_17h52889054a5040018E(&local_b8);
        uVar6 = uVar6 + 1;
      }
    }
    _ZN4core3ptr117drop_in_place_LT_core__iter__sources__from_fn__FromFn_LT_uu_wc__Inputs__try_iter___u7b__u7b_closure_u7d__u7d__GT__GT_17hf91b456bd911ec53E
              (local_e8);
    iVar1 = (int)local_f0;
    if ((iVar1 - 1U < 2) || ((iVar1 == 0 && (1 < uVar6)))) {
      puVar8 = (undefined *)0x0;
      if (iVar1 != 2) {
        puVar8 = &DAT_0011a12f;
      }
      lVar4 = _ZN5uu_wc11print_stats17hc5ca112509d551a7E(param_2,&local_88,puVar8,5,local_f8);
      if (lVar4 == 0) {
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17hc0c7b6ba243748cbE
                  (0);
      }
      else {
        uVar5 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17ha6cc97ce51e674b3E
                          (lVar4);
        local_180._0_8_ = uVar5;
                    /* try { // try from 0016a13d to 0016a1c6 has its CatchHandler @ 0016a1fe */
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ffce8)(1);
        local_e8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ff9e0)();
        local_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e49341541173517E;
        local_150 = local_180;
        local_148 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h8429a37060a3bdfdE
        ;
        local_130 = &DAT_001f9318;
        local_128 = 3;
        uStack_110 = 0;
        uStack_120 = &local_160;
        local_118 = 2;
        local_160 = (undefined8 *)local_e8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ff9e8)(&local_130);
        _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h66df39e1038318a5E
                  (local_180._0_8_);
      }
    }
    local_128 = 0;
  }
  return local_128;
}