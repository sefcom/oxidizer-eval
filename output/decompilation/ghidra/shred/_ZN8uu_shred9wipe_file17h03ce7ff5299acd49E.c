code * _ZN8uu_shred9wipe_file17h03ce7ff5299acd49E
                 (undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,ulong param_5,
                 long param_6,undefined param_7,char param_8,char param_9,char param_10)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  undefined auVar12 [16];
  int local_26c;
  undefined8 local_268;
  long local_260;
  ulong local_258;
  undefined4 local_24c;
  long local_248;
  undefined local_240 [16];
  undefined8 local_230;
  undefined local_228;
  uint local_21c;
  code *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined local_200;
  undefined8 local_1f8;
  ulong local_1f0;
  long local_1e8;
  undefined4 local_1e0;
  undefined8 *local_1d8;
  undefined **local_1d0;
  undefined8 *local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  ulong *local_1a0;
  undefined *puStack_198;
  undefined8 **local_190;
  code *pcStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_110;
  undefined8 local_108;
  ulong local_100;
  long local_f8;
  ulong local_f0;
  long local_e8;
  undefined local_e0 [8];
  code *local_d8;
  undefined8 **local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined4 local_a8;
  long local_90;
  
  local_21c = param_4;
  local_100 = param_5;
  local_f8 = param_6;
  _ZN3std2fs8metadata17ha5a1382d2d84ac19E(&local_1c0,param_1,param_2);
  iVar2 = (int)local_1c0;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hf505446dc2c0cf57E
            (&local_1c0);
  if (iVar2 == 2) {
    local_1c0 = (undefined8 *)&DAT_001f9fd8;
  }
  else {
    cVar3 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_00200e58)(param_1,param_2);
    if (cVar3 != '\0') {
      _ZN3std2fs8metadata17ha5a1382d2d84ac19E(&local_1c0,param_1,param_2);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h9b642052a68bccdcE
                (local_e0,&local_1c0);
      if (local_e0._0_4_ == 2) {
        return local_d8;
      }
      local_248 = local_90;
      if (param_10 != '\0') {
        uVar4 = 0x80;
        if ((char)local_a8 < '\0') {
          uVar4 = local_a8;
        }
        uVar6 = _ZN3std2fs15set_permissions17haddd16cf0754072bE(param_1,param_2,uVar4);
        pcVar5 = (code *)_ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hf4c04973a4b2e089E
                                   (uVar6);
        if (pcVar5 != (code *)0x0) {
          return pcVar5;
        }
      }
      local_268 = 0;
      local_260 = 1;
      local_258 = 0;
      if (local_248 != 0) {
        if (param_3 < 4) {
          lVar9 = param_3 + 1;
          while( true ) {
            lVar9 = lVar9 + -1;
            if (lVar9 == 0) break;
                    /* try { // try from 001646f9 to 00164708 has its CatchHandler @ 00164e44 */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcf36b1515a67ed7bE
                      (&local_268,2,&PTR_s_src_uu_shred_src_shred_rs_001fa1c8);
          }
        }
        else {
                    /* try { // try from 0016470b to 00164720 has its CatchHandler @ 00164e2e */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcf36b1515a67ed7bE
                    (&local_268,2,&PTR_s_src_uu_shred_src_shred_rs_001fa120);
          local_110 = param_1;
          local_108 = param_2;
          lVar9 = _ZN4core3cmp3Ord3max17hede46e5ceb11a165E(param_3 / 10,3);
          param_3 = param_3 - lVar9;
          local_1f0 = param_3 / 0x16;
          if (0x15 < param_3) {
            uVar8 = 1;
            do {
              local_1c0 = (undefined8 *)0x0;
              local_1b8 = (undefined *)0x16;
              local_170 = CONCAT44(_UNK_0011ac14,_DAT_0011ac10);
              uStack_168 = CONCAT44(_UNK_0011ac1c,_UNK_0011ac18);
              local_180 = _DAT_0011ac00;
              uStack_178 = _UNK_0011ac08;
              local_190 = _DAT_0011abf0;
              pcStack_188 = _UNK_0011abf8;
              local_1a0 = _DAT_0011abe0;
              puStack_198 = _UNK_0011abe8;
              local_1b0 = (long *)CONCAT44(_UNK_0011abd4,_DAT_0011abd0);
              uStack_1a8 = (undefined *)CONCAT44(_UNK_0011abdc,_UNK_0011abd8);
              local_160 = 0xee000000dd00;
              while (uVar4 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h99b9bf7e5b8e3c78E
                                       (&local_1c0), (char)uVar4 != '\x02') {
                    /* try { // try from 00164840 to 0016484c has its CatchHandler @ 00164e7e */
                _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcf36b1515a67ed7bE
                          (&local_268,uVar4,&PTR_s_src_uu_shred_src_shred_rs_001fa198);
              }
              bVar11 = uVar8 < local_1f0;
              uVar8 = uVar8 + (uVar8 < local_1f0);
            } while (bVar11);
          }
          local_1c0 = (undefined8 *)0x0;
          local_1b8 = (undefined *)0x16;
          local_1b0 = (long *)CONCAT44(_UNK_0011abd4,_DAT_0011abd0);
          uStack_1a8 = (undefined *)CONCAT44(_UNK_0011abdc,_UNK_0011abd8);
          local_1a0 = _DAT_0011abe0;
          puStack_198 = _UNK_0011abe8;
          local_190 = _DAT_0011abf0;
          pcStack_188 = _UNK_0011abf8;
          local_180 = _DAT_0011ac00;
          uStack_178 = _UNK_0011ac08;
          local_170 = CONCAT44(_UNK_0011ac14,_DAT_0011ac10);
          uStack_168 = CONCAT44(_UNK_0011ac1c,_UNK_0011ac18);
          local_160 = 0xee000000dd00;
          lVar10 = param_3 + local_1f0 * -0x16;
          if (lVar10 != 0) {
            local_158 = lVar10;
            do {
              local_158 = local_158 + -1;
              uVar4 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h99b9bf7e5b8e3c78E
                                (&local_1c0);
              if ((char)uVar4 == '\x02') break;
                    /* try { // try from 00164907 to 00164913 has its CatchHandler @ 00164e2c */
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcf36b1515a67ed7bE
                        (&local_268,uVar4,&PTR_s_src_uu_shred_src_shred_rs_001fa180);
            } while (local_158 != 0);
          }
          param_2 = local_108;
          param_1 = local_110;
          lVar9 = lVar9 + -1;
          while( true ) {
            lVar9 = lVar9 + -1;
            if (lVar9 == 0) break;
                    /* try { // try from 00164945 to 00164954 has its CatchHandler @ 00164e42 */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcf36b1515a67ed7bE
                      (&local_268,2,&PTR_s_src_uu_shred_src_shred_rs_001fa168);
          }
                    /* try { // try from 00164957 to 0016495c has its CatchHandler @ 00164e2e */
          local_e0 = (undefined  [8])
                     (*(code *)PTR__ZN4rand4rngs6thread3rng17h4ff389470e265d23E_00200e60)();
          if (local_258 == 0) {
                    /* try { // try from 00164e02 to 00164e15 has its CatchHandler @ 00164e83 */
            (*(code *)
              PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_00200d68)
                      (1,0,&PTR_s_src_uu_shred_src_shred_rs_001fa150);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (2 < local_258) {
                    /* try { // try from 00164985 to 001649b2 has its CatchHandler @ 00164e83 */
            _ZN61__LT__u5b_T_u5d__u20_as_u20_rand__seq__slice__SliceRandom_GT_15partial_shuffle17hfb05d4cf488d0b42E
                      (&local_1c0,local_260 + 4,local_258 - 1,local_e0,local_258 - 1);
          }
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcf36b1515a67ed7bE
                    (&local_268,2,&PTR_s_src_uu_shred_src_shred_rs_001fa138);
                    /* try { // try from 001649b3 to 00164a4b has its CatchHandler @ 00164e2e */
          _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17hd7a2e33c8d5cb4e1E
                    (local_e0);
        }
        if (param_8 != '\0') {
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcf36b1515a67ed7bE
                    (&local_268,0,&PTR_s_src_uu_shred_src_shred_rs_001fa1b0);
        }
      }
      local_f0 = local_258;
      local_1c0 = (undefined8 *)0x1b600000000;
      uVar8 = (ulong)local_1b8 >> 0x10;
      local_1b8 = (undefined *)CONCAT62((uint6)uVar8 & 0xffff00000000,0x100);
      _ZN3std2fs11OpenOptions4open17h21837edfec1e9a94E(local_e0,&local_1c0,param_1,param_2);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h632f7ee35326d08dE
                (&local_218,local_e0,param_1,param_2);
      if (local_218 != (code *)0x0) {
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_uu_shred__PassType_GT__GT_17h67aac5aa98fcce1eE
                  (local_268,local_260);
        return local_218;
      }
      local_26c = (int)local_210;
      if ((local_100 & 1) != 0) {
        local_248 = local_f8;
      }
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h6f2030208d89e65cE
                (&local_218,&local_268);
      local_1f8 = 0;
      _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3848ec72732c2849E
                (&local_1e8,&local_218);
      puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00200c90;
      if ((char)local_1e0 != '\x03') {
        do {
          lVar9 = local_1e8;
          local_24c = local_1e0;
          if (param_9 != '\0') {
            _ZN8uu_shred9pass_name17h9fc29581f7f0cfb7E(&local_1d8,&local_24c);
                    /* try { // try from 00164bac to 00164cfe has its CatchHandler @ 00164e30 */
            _local_e0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00200c88)();
            local_240._0_8_ = local_e0;
            local_240._8_8_ =
                 _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3641e459b5f3d84fE;
            local_1c0 = (undefined8 *)&DAT_001f9f98;
            local_1b8 = (undefined *)0x2;
            local_1a0 = (ulong *)0x0;
            local_1b0 = (long *)local_240;
            uStack_1a8 = (undefined *)0x1;
            (*(code *)puVar1)(&local_1c0);
            local_240._0_8_ = 1;
            local_228 = 0;
            local_e8 = lVar9 + 1;
            local_1c0 = (undefined8 *)local_240;
            local_1b8 = 
            PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00200cc0
            ;
            local_1b0 = &local_e8;
            uStack_1a8 = 
            PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00200e68
            ;
            local_1a0 = &local_f0;
            puStack_198 = 
            PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00200e68
            ;
            pcStack_188 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_e0 = (undefined  [8])&DAT_001fa018;
            local_d8 = (code *)0x5;
            local_c0 = 0;
            local_d0 = &local_1c0;
            local_c8 = (code *)0x4;
            local_240._8_8_ = param_1;
            local_230 = param_2;
            local_190 = &local_1d8;
            (*(code *)puVar1)(local_e0);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he3c04393cbc9b6abE(&local_1d8)
            ;
          }
                    /* try { // try from 00164d07 to 00164d2a has its CatchHandler @ 00164e60 */
          uVar6 = _ZN8uu_shred7do_pass17h5f3b51dd2439eebaE(&local_26c,&local_24c,param_7,local_248);
          puVar7 = (undefined8 *)
                   _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hbb93911bfa45ca03E
                             (uVar6,param_1,param_2);
          if (puVar7 == (undefined8 *)0x0) {
                    /* try { // try from 00164b50 to 00164bab has its CatchHandler @ 00164e60 */
            _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h6a1521085a1ec2e6E
                      (0,&
                         PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17ha5ee28d796e7d12aE_001f9bb8
                      );
          }
          else {
            local_1d0 = &
                        PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17ha5ee28d796e7d12aE_001f9bb8
            ;
            local_1d8 = puVar7;
            uVar4 = _ZN6uucore4mods5error6UError4code17hf711c1c687ef86e8E();
                    /* try { // try from 00164d50 to 00164de7 has its CatchHandler @ 00164e46 */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00200ce8)(uVar4);
            auVar12 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00200c88)();
            local_e0 = (undefined  [8])local_240;
            local_d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3641e459b5f3d84fE;
            local_c8 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h58ae0d47b5df800cE
            ;
            local_1c0 = (undefined8 *)&DAT_001fa068;
            local_1b8 = (undefined *)0x3;
            local_1a0 = (ulong *)0x0;
            local_1b0 = (long *)local_e0;
            uStack_1a8 = (undefined *)0x2;
            local_d0 = &local_1d8;
            local_240 = auVar12;
            (*(code *)puVar1)(&local_1c0);
                    /* try { // try from 00164df8 to 00164dfc has its CatchHandler @ 00164e60 */
            _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17he3ab67bba8a03065E
                      (local_1d8,local_1d0);
          }
          _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3848ec72732c2849E
                    (&local_1e8,&local_218);
        } while ((char)local_1e0 != '\x03');
      }
                    /* try { // try from 00164acc to 00164b09 has its CatchHandler @ 00164e18 */
      _ZN4core3ptr128drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT_uu_shred__PassType_GT__GT__GT_17hc8824b4a3d0f357cE
                (&local_218);
      if ((char)local_21c != '\0') {
        uVar6 = _ZN8uu_shred9do_remove17he7f6ef1c114a8897E
                          (param_1,param_2,param_1,param_2,param_9,local_21c & 0xff);
        pcVar5 = (code *)_ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hef0506ed209ce3ddE
                                   (uVar6,param_1,param_2);
        if (pcVar5 != (code *)0x0) {
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h242f54cc5db43aa8E(local_26c);
          return pcVar5;
        }
      }
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h242f54cc5db43aa8E(local_26c);
      return (code *)0x0;
    }
    local_1c0 = (undefined8 *)&DAT_001f9ff8;
  }
  local_240._0_8_ = &local_218;
  local_200 = 0;
  local_218 = (code *)0x1;
  local_1b8 = (undefined *)0x2;
  local_1a0 = (ulong *)0x0;
  local_1b0 = (long *)local_240;
  uStack_1a8 = (undefined *)0x1;
  local_240._8_8_ =
       PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00200cc0
  ;
  local_210 = param_1;
  local_208 = param_2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h7bfa45f07eaf898eE(local_e0,&local_1c0);
  local_c8 = (code *)CONCAT44(local_c8._4_4_,1);
  pcVar5 = (code *)_ZN5alloc5boxed12Box_LT_T_GT_3new17h679aad62071d4597E(local_e0);
  return pcVar5;
}