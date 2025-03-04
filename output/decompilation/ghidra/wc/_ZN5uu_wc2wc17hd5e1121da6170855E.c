undefined  [16] _ZN5uu_wc2wc17hd5e1121da6170855E(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  code **ppcVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  code **ppcVar7;
  char *pcVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined8 *local_1a8;
  code *local_1a0;
  code **local_198;
  code *local_190;
  code *local_188;
  code **local_180;
  code **local_178;
  code **ppcStack_170;
  code **ppcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  code **local_150;
  undefined8 local_148;
  undefined local_140 [16];
  code *local_130;
  code *local_128;
  code *local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined local_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code **local_c8;
  code **local_c0;
  undefined local_b8 [16];
  code **local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  code **local_90;
  long local_88;
  undefined8 *local_80;
  code *local_78;
  long local_70;
  undefined8 *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  bVar1 = *(byte *)(param_2 + 0x1d);
  local_100 = 1;
  if (bVar1 != 2) {
    local_100 = _ZN5uu_wc20compute_number_width17h0dc7206969488842E(param_1,param_2);
  }
  _ZN5uu_wc6Inputs8try_iter17he58c0dff5beb00a3E(&local_178,param_1,param_2);
  if (local_178 != (code **)0x8000000000000003) {
    local_90 = local_150;
    local_a0 = (undefined4)uStack_160;
    uStack_9c = uStack_160._4_4_;
    uStack_98 = (undefined4)uStack_158;
    uStack_94 = uStack_158._4_4_;
    local_b8._0_8_ = local_178;
    local_b8._8_8_ = ppcStack_170;
    local_c0 = ppcStack_168;
    local_a8 = ppcStack_168;
    uVar9 = 0;
    local_f0 = (ulong)bVar1;
    while( true ) {
                    /* try { // try from 001bd6a3 to 001bd6b7 has its CatchHandler @ 001bdc8a */
      _ZN5uu_wc6Inputs8try_iter28__u7b__u7b_closure_u7d__u7d_17h72e90ebe24b5b113E
                (&local_70,local_b8);
      if (local_70 == -0x7ffffffffffffffd) break;
      if (local_70 == -0x7ffffffffffffffe) {
        local_1a8 = local_68;
        local_1a0 = local_60;
                    /* try { // try from 001bd6f5 to 001bd77a has its CatchHandler @ 001bdc77 */
        uVar4 = (**(code **)(local_60 + 0x60))();
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar4);
        auVar10 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_128 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf11328e4cb3e1bafE;
        local_118 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h9d4509789875f497E
        ;
        local_178 = (code **)&DAT_002311c8;
        ppcStack_170 = (code **)0x3;
        uStack_158 = (code **)0x0;
        uStack_160 = (code **)0x2;
        ppcStack_168 = &local_130;
        local_130 = (code *)local_e8;
        local_120 = (code *)&local_1a8;
        local_e8 = auVar10;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_178);
                    /* try { // try from 001bd784 to 001bd788 has its CatchHandler @ 001bdc8a */
        _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h547312d815f977f1E
                  (local_1a8,local_1a0);
LAB_001bd6a0:
        uVar9 = uVar9 + 1;
      }
      else {
        local_88 = local_70;
        local_80 = local_68;
        local_78 = local_60;
                    /* try { // try from 001bd7a8 to 001bd7db has its CatchHandler @ 001bdc65 */
        _ZN5uu_wc21word_count_from_input17h9c6b7f02841e6225E(&local_178,&local_88,param_2);
        if (local_178 != (code **)0x0) {
          if ((int)local_178 == 2) {
            local_188 = (code *)_ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h2da712d33864c64cE
                                          (ppcStack_170,&local_88);
                    /* try { // try from 001bd7e1 to 001bd86a has its CatchHandler @ 001bdc47 */
            _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
            auVar10 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_1a8 = (undefined8 *)local_140;
            local_1a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf11328e4cb3e1bafE;
            local_198 = &local_188;
            local_190 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hb416dfd1ca34992cE
            ;
            local_130 = (code *)&DAT_002311c8;
            local_128 = (code *)0x3;
            local_110 = 0;
            local_118 = (code *)0x2;
            local_120 = (code *)&local_1a8;
            local_140 = auVar10;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_130);
                    /* try { // try from 001bd870 to 001bd874 has its CatchHandler @ 001bdc65 */
            _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h28789891c4c0df25E
                      (local_188);
                    /* try { // try from 001bd875 to 001bd87c has its CatchHandler @ 001bdc8a */
            _ZN4core3ptr33drop_in_place_LT_uu_wc__Input_GT_17hd370e224d5568ebaE(&local_88);
            goto LAB_001bd6a0;
          }
                    /* try { // try from 001bd887 to 001bd88e has its CatchHandler @ 001bdc65 */
          local_188 = (code *)_ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h6d2d9bfd1274cb46E
                                        (local_148,&local_88);
                    /* try { // try from 001bd894 to 001bd91d has its CatchHandler @ 001bdc56 */
          _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
          auVar10 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_1a8 = (undefined8 *)local_140;
          local_1a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf11328e4cb3e1bafE;
          local_198 = &local_188;
          local_190 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hb416dfd1ca34992cE
          ;
          local_130 = (code *)&DAT_002311c8;
          local_128 = (code *)0x3;
          local_110 = 0;
          local_118 = (code *)0x2;
          local_120 = (code *)&local_1a8;
          local_140 = auVar10;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_130);
                    /* try { // try from 001bd923 to 001bd98a has its CatchHandler @ 001bdc65 */
          _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h28789891c4c0df25E
                    (local_188);
        }
        ppcVar3 = uStack_158;
        local_c8 = local_150;
        local_d8 = (undefined4)uStack_160;
        uStack_d4 = uStack_160._4_4_;
        uStack_d0 = (undefined4)uStack_158;
        uStack_cc = uStack_158._4_4_;
        local_e8._0_8_ = ppcStack_170;
        local_e8._8_8_ = ppcStack_168;
        uStack_158 = local_150;
        ppcVar7 = uStack_160;
        uStack_160 = ppcVar3;
        local_178 = ppcStack_170;
        ppcStack_170 = ppcStack_168;
        ppcStack_168 = ppcVar7;
        _ZN76__LT_uu_wc__word_count__WordCount_u20_as_u20_core__ops__arith__AddAssign_GT_10add_assign17h8a7b9039573b0b39E
                  (&local_58,&local_178);
        if ((int)local_f0 != 2) {
          _ZN5uu_wc5Input8to_title17hf944d4f2d9388afeE(&local_1a8,&local_88);
          ppcVar7 = local_198;
          pcVar8 = (char *)local_1a0;
          if ((local_1a8 != (undefined8 *)0x8000000000000000) &&
             (local_1a8 == (undefined8 *)0x8000000000000001)) {
            ppcVar7 = &local_130;
            pcVar8 = (char *)(code *)0x0;
          }
                    /* try { // try from 001bd9bb to 001bd9d8 has its CatchHandler @ 001bdc19 */
          lVar5 = _ZN5uu_wc11print_stats17hd63ccbcd2e38aeceE
                            (param_2,local_e8,pcVar8,ppcVar7,local_100);
          if (lVar5 != 0) {
            if ((code *)pcVar8 == (code *)0x0) {
              pcVar8 = "<stdin>";
              ppcVar7 = (code **)&DAT_00000007;
            }
                    /* try { // try from 001bda03 to 001bda0f has its CatchHandler @ 001bdc28 */
            local_188 = (code *)pcVar8;
            local_180 = ppcVar7;
            local_f8 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17hbee748f1525ffde1E
                                 (lVar5,&local_188);
                    /* try { // try from 001bda18 to 001bdaa6 has its CatchHandler @ 001bdc2d */
            _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
            auVar10 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_130 = (code *)local_140;
            local_128 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf11328e4cb3e1bafE;
            local_120 = (code *)&local_f8;
            local_118 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hb416dfd1ca34992cE
            ;
            local_178 = (code **)&DAT_002311c8;
            ppcStack_170 = (code **)0x3;
            uStack_158 = (code **)0x0;
            uStack_160 = (code **)0x2;
            ppcStack_168 = &local_130;
            local_140 = auVar10;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_178);
                    /* try { // try from 001bdaaf to 001bdab3 has its CatchHandler @ 001bdc28 */
            _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h28789891c4c0df25E
                      (local_f8);
          }
                    /* try { // try from 001bdab4 to 001bdabb has its CatchHandler @ 001bdc26 */
          _ZN4core3ptr78drop_in_place_LT_core__option__Option_LT_alloc__borrow__Cow_LT_str_GT__GT__GT_17h7b5c9b8dea2633d7E
                    (&local_1a8);
        }
                    /* try { // try from 001bdac9 to 001bdad0 has its CatchHandler @ 001bdc8a */
        _ZN4core3ptr33drop_in_place_LT_uu_wc__Input_GT_17hd370e224d5568ebaE(&local_88);
        uVar9 = uVar9 + 1;
      }
    }
    _ZN4core3ptr117drop_in_place_LT_core__iter__sources__from_fn__FromFn_LT_uu_wc__Inputs__try_iter___u7b__u7b_closure_u7d__u7d__GT__GT_17hb5a904caff70e7b6E
              (local_b8);
    iVar2 = (int)local_f0;
    if ((iVar2 - 1U < 2) || ((iVar2 == 0 && (1 < uVar9)))) {
      pcVar8 = (char *)0x0;
      if (iVar2 != 2) {
        pcVar8 = "total";
      }
      lVar5 = _ZN5uu_wc11print_stats17hd63ccbcd2e38aeceE(param_2,&local_58,pcVar8,5,local_100);
      if (lVar5 != 0) {
        uVar6 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17hc10cf64853115943E
                          (lVar5);
        local_e8._0_8_ = uVar6;
                    /* try { // try from 001bdb43 to 001bdbca has its CatchHandler @ 001bdc04 */
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
        local_b8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_128 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf11328e4cb3e1bafE;
        local_118 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hb416dfd1ca34992cE
        ;
        local_178 = (code **)&DAT_002311c8;
        ppcStack_170 = (code **)0x3;
        uStack_158 = (code **)0x0;
        ppcStack_168 = &local_130;
        uStack_160 = (code **)0x2;
        local_130 = (code *)local_b8;
        local_120 = (code *)local_e8;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_178);
        _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17h28789891c4c0df25E
                  (local_e8._0_8_);
      }
    }
    ppcStack_170 = (code **)0x0;
    ppcStack_168 = local_c0;
  }
  auVar10._8_8_ = ppcStack_168;
  auVar10._0_8_ = ppcStack_170;
  return auVar10;
}