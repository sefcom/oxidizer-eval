/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * _ZN8uu_shred9wipe_file17hcdd557f5a4f902dcE
                 (undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,long param_5,
                 long param_6,undefined param_7,char param_8,char param_9,char param_10)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined auVar12 [16];
  int local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b4;
  undefined8 local_2b0;
  long local_2a8;
  ulong local_2a0;
  undefined local_298 [8];
  undefined8 local_290;
  undefined *local_288;
  ulong local_280;
  undefined **local_278;
  undefined8 local_270;
  long local_268;
  uint local_25c;
  ulong local_258;
  long local_250;
  undefined4 local_248;
  undefined local_240 [16];
  undefined8 local_230;
  undefined local_228;
  undefined *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined local_148;
  undefined8 *local_140;
  code *local_138;
  undefined8 local_120;
  long local_118;
  long local_110;
  ulong local_108;
  long local_100;
  undefined local_f8 [24];
  undefined local_e0 [16];
  long *local_d0;
  code *local_c8;
  ulong *local_c0;
  code *local_b8;
  undefined *local_b0;
  code *local_a8;
  long local_90;
  
  local_268 = param_6;
  local_110 = param_5;
  _ZN3std2fs8metadata17h605f1ca78403f0bdE(&local_220,param_1,param_2);
  iVar2 = (int)local_220;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h057e93f1d1d682caE
            (&local_220);
  if (iVar2 == 2) {
    local_220 = &DAT_002386d8;
  }
  else {
    cVar3 = _ZN3std4path4Path7is_file17h82f08f46fb8d8099E(param_1,param_2);
    if (cVar3 != '\0') {
      _ZN3std2fs8metadata17h605f1ca78403f0bdE(&local_220,param_1,param_2);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hfeeb5d3bb5da4e93E
                (local_e0,&local_220);
      if (local_e0._0_4_ == 2) {
        return (code *)local_e0._8_8_;
      }
      local_2c0 = param_2;
      local_25c = param_4;
      if (param_10 != '\0') {
        uVar10 = 0x80;
        if ((char)local_a8 < '\0') {
          uVar10 = (ulong)local_a8 & 0xffffffff;
        }
        uVar6 = _ZN3std2fs15set_permissions17hedfd3098c0eec3acE(param_1,param_2,uVar10);
        pcVar5 = (code *)_ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h8b41e8b25dbfd909E
                                   (uVar6);
        if (pcVar5 != (code *)0x0) {
          return pcVar5;
        }
      }
      uVar6 = local_2c0;
      local_2b0 = 0;
      local_2a8 = 1;
      local_2a0 = 0;
      local_118 = local_90;
      if (local_90 != 0) {
        if (param_3 < 4) {
          uVar10 = 0;
          while (uVar10 < param_3) {
            uVar10 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                               (uVar10);
                    /* try { // try from 001bd084 to 001bd090 has its CatchHandler @ 001bd86b */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17heca98b157ed7cb4dE(&local_2b0,2);
          }
        }
        else {
          local_258 = param_3 / 0x16;
          if (0x15 < param_3) {
            uVar10 = 0;
            do {
              uVar10 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                                 (uVar10);
              local_220 = (undefined *)0x0;
              local_218 = 0x16;
              local_1d0 = CONCAT44(_UNK_0011f0ec,_DAT_0011f0e8);
              uStack_1c8 = CONCAT44(_UNK_0011f0f4,_UNK_0011f0f0);
              local_1e0 = _DAT_0011f0d8;
              uStack_1d8 = _UNK_0011f0e0;
              local_1f0 = _DAT_0011f0c8;
              uStack_1e8 = _UNK_0011f0d0;
              local_200 = _DAT_0011f0b8;
              uStack_1f8 = _UNK_0011f0c0;
              local_210 = (undefined8 **)CONCAT44(_UNK_0011f0ac,_DAT_0011f0a8);
              uStack_208 = CONCAT44(_UNK_0011f0b4,_UNK_0011f0b0);
              local_1c0 = 0xee000000dd00;
                    /* try { // try from 001bd140 to 001bd155 has its CatchHandler @ 001bd8bd */
              while (uVar4 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0c495dba700bde13E
                                       (&local_220), (char)uVar4 != '\x02') {
                _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17heca98b157ed7cb4dE(&local_2b0,uVar4);
              }
                    /* try { // try from 001bd160 to 001bd167 has its CatchHandler @ 001bd845 */
              _ZN4core3ptr84drop_in_place_LT_core__array__iter__IntoIter_LT_uu_shred__Pattern_C_22_usize_GT__GT_17hccc20f2342448aa1E
                        (&local_220);
            } while (uVar10 < local_258);
          }
          local_220 = (undefined *)0x0;
          local_218 = 0x16;
          local_210 = (undefined8 **)CONCAT44(_UNK_0011f0ac,_DAT_0011f0a8);
          uStack_208 = CONCAT44(_UNK_0011f0b4,_UNK_0011f0b0);
          local_200 = _DAT_0011f0b8;
          uStack_1f8 = _UNK_0011f0c0;
          local_1f0 = _DAT_0011f0c8;
          uStack_1e8 = _UNK_0011f0d0;
          local_1e0 = _DAT_0011f0d8;
          uStack_1d8 = _UNK_0011f0e0;
          local_1d0 = CONCAT44(_UNK_0011f0ec,_DAT_0011f0e8);
          uStack_1c8 = CONCAT44(_UNK_0011f0f4,_UNK_0011f0f0);
          local_1c0 = 0xee000000dd00;
          local_1b8 = param_3 + local_258 * -0x16;
          if (local_1b8 != 0) {
            do {
              local_1b8 = local_1b8 + -1;
                    /* try { // try from 001bd22b to 001bd240 has its CatchHandler @ 001bd847 */
              uVar4 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0c495dba700bde13E
                                (&local_220);
              if ((char)uVar4 == '\x02') break;
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17heca98b157ed7cb4dE(&local_2b0,uVar4);
            } while (local_1b8 != 0);
          }
                    /* try { // try from 001bd24e to 001bd260 has its CatchHandler @ 001bd843 */
          _ZN4core3ptr124drop_in_place_LT_core__iter__adapters__take__Take_LT_core__array__iter__IntoIter_LT_uu_shred__Pattern_C_22_usize_GT__GT__GT_17hd3bf92e12aae45feE
                    (&local_220);
          local_220 = (undefined *)_ZN4rand4rngs6thread10thread_rng17hb51ef0c041e68525E();
                    /* try { // try from 001bd273 to 001bd27f has its CatchHandler @ 001bd870 */
          _ZN54__LT__u5b_T_u5d__u20_as_u20_rand__seq__SliceRandom_GT_7shuffle17he012a51162e821c4E
                    (local_2a8,local_2a0,&local_220);
          uVar11 = param_3 / 10 + 2;
          uVar10 = 0;
          do {
            uVar7 = uVar10 * (param_3 - 1);
            if ((uVar7 | uVar11) >> 0x20 == 0) {
              uVar8 = (uVar7 & 0xffffffff) / (uVar11 & 0xffffffff);
              uVar7 = (uVar7 & 0xffffffff) % (uVar11 & 0xffffffff);
            }
            else {
              uVar8 = uVar7 / uVar11;
              uVar7 = uVar7 % uVar11;
            }
            if (local_2a0 <= uVar8) {
                    /* try { // try from 001bd82e to 001bd83d has its CatchHandler @ 001bd870 */
                    /* WARNING: Subroutine does not return */
              _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                        (uVar8,local_2a0,&PTR_DAT_002387f0);
            }
            uVar10 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                               (uVar10,local_2a0,uVar7);
            *(undefined *)(local_2a8 + uVar8 * 4) = 2;
          } while (uVar10 < param_3 / 10 + 3);
                    /* try { // try from 001bd2fc to 001bd395 has its CatchHandler @ 001bd843 */
          _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17h89ac64e96d66995eE
                    (&local_220);
          uVar6 = local_2c0;
        }
        if (param_8 != '\0') {
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17heca98b157ed7cb4dE(&local_2b0,0);
        }
      }
      local_108 = local_2a0;
      local_220 = (undefined *)0x1b600000000;
      uVar10 = (ulong)local_218 >> 0x10;
      local_218 = CONCAT62((uint6)uVar10 & 0xffff00000000,0x100);
      _ZN3std2fs11OpenOptions4open17h42007666e681861eE(local_e0,&local_220,param_1,uVar6);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hdcf338468f0daf60E
                (local_298,local_e0,param_1,uVar6);
      if (local_298 != (undefined  [8])0x0) {
        _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_uu_shred__PassType_GT__GT_17hc7ae42648a6b147fE
                  (&local_2b0);
        return (code *)local_298;
      }
      local_2c4 = (int)local_290;
      if (local_110 == 0) {
        local_268 = local_118;
      }
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hfb8255cffa267b63E
                (&local_140,&local_2b0);
      local_120 = 0;
      _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h21af7eed97fbc67bE
                (&local_250,&local_140);
      if ((char)local_248 != '\x03') {
        do {
          lVar1 = local_250;
          local_2b4 = local_248;
          if (param_9 != '\0') {
                    /* try { // try from 001bd4de to 001bd4ef has its CatchHandler @ 001bd89c */
            _ZN8uu_shred9pass_name17hc502fb7b05ee159fE(local_f8,&local_2b4);
                    /* try { // try from 001bd4f0 to 001bd72f has its CatchHandler @ 001bd859 */
            local_e0 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_290 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h264c667d1212e3adE;
            local_220 = &DAT_00238698;
            local_218 = 2;
            local_200 = 0;
            local_210 = (undefined8 **)local_298;
            uStack_208 = 1;
            local_298 = (undefined  [8])local_e0;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_220);
            local_240._0_8_ = 1;
            local_230 = local_2c0;
            local_228 = 0;
            local_100 = lVar1 + 1;
            local_e0._8_8_ =
                 _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
            ;
            local_d0 = &local_100;
            local_c8 = 
            _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
            ;
            local_c0 = &local_108;
            local_b8 = 
            _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
            ;
            local_b0 = local_f8;
            local_a8 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_220 = (undefined *)0x2;
            local_210 = (undefined8 **)0x2;
            local_200 = 0;
            uStack_1f8 = 0x20;
            local_1f0 = CONCAT71(local_1f0._1_7_,3);
            uStack_1e8 = 2;
            uStack_1d8 = 0;
            local_1d0 = 2;
            uStack_1c8 = 1;
            local_1c0 = 0x20;
            local_1b8 = CONCAT71(local_1b8._1_7_,3);
            local_1b0 = 2;
            local_1a0 = 2;
            local_190 = 2;
            local_188 = 0x20;
            local_180 = 3;
            local_178 = 2;
            local_168 = 2;
            local_158 = 3;
            local_150 = 0x20;
            local_148 = 3;
            local_298 = (undefined  [8])&DAT_00238808;
            local_290 = (code *)0x5;
            local_278 = &local_220;
            local_270 = 4;
            local_280 = 4;
            local_288 = local_e0;
            local_240._8_8_ = param_1;
            local_e0._0_8_ = local_240;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_298);
                    /* try { // try from 001bd730 to 001bd763 has its CatchHandler @ 001bd89c */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h79f0f67a09ddf38fE(local_f8);
          }
          uVar6 = _ZN8uu_shred7do_pass17hd89cf0ca9cbf1708E(&local_2c4,&local_2b4,param_7,local_268);
          auVar12 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h5a7c198f926f4856E
                              (uVar6,param_1,local_2c0);
          if (auVar12._0_8_ != 0) {
                    /* try { // try from 001bd77d to 001bd813 has its CatchHandler @ 001bd882 */
            local_240 = auVar12;
            uVar4 = (**(code **)(auVar12._8_8_ + 0x60))(auVar12._0_8_);
            _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar4);
            auVar12 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_e0._0_8_ = local_298;
            local_e0._8_8_ =
                 _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h264c667d1212e3adE;
            local_c8 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hfa48898c7684171aE
            ;
            local_220 = &DAT_00238718;
            local_218 = 3;
            local_200 = 0;
            uStack_208 = 2;
            local_210 = (undefined8 **)local_e0;
            local_d0 = (long *)local_240;
            _local_298 = auVar12;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_220);
                    /* try { // try from 001bd824 to 001bd828 has its CatchHandler @ 001bd89c */
            _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hbf158212341c390eE
                      (local_240._0_8_,local_240._8_8_);
          }
          _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h21af7eed97fbc67bE
                    (&local_250,&local_140);
        } while ((char)local_248 != '\x03');
      }
                    /* try { // try from 001bd413 to 001bd458 has its CatchHandler @ 001bd83e */
      _ZN4core3ptr128drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT_uu_shred__PassType_GT__GT__GT_17h3fb90667d107ca3fE
                (&local_140);
      uVar6 = local_2c0;
      if ((char)local_25c != '\0') {
        uVar9 = _ZN8uu_shred9do_remove17h7b1c5ba904fda3f1E
                          (param_1,local_2c0,param_1,local_2c0,param_9,local_25c & 0xff);
        pcVar5 = (code *)_ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hd9d95a9b55133fbaE
                                   (uVar9,param_1,uVar6);
        if (pcVar5 != (code *)0x0) {
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h7f7a30b7b330e79bE(local_2c4);
          return pcVar5;
        }
      }
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h7f7a30b7b330e79bE(local_2c4);
      return (code *)0x0;
    }
    local_220 = &DAT_002386f8;
  }
  local_140 = (undefined8 *)local_298;
  local_138 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
  ;
  local_280 = local_280 & 0xffffffffffffff00;
  local_298 = (undefined  [8])0x1;
  local_218 = 2;
  local_200 = 0;
  local_210 = &local_140;
  uStack_208 = 1;
  local_290 = (code *)param_1;
  local_288 = (undefined *)param_2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h2a91f0892e8dc529E(local_e0,&local_220);
  local_c8 = (code *)CONCAT44(local_c8._4_4_,1);
  pcVar5 = (code *)_ZN5alloc5boxed12Box_LT_T_GT_3new17h46ce8461a54b80d6E(local_e0);
  return pcVar5;
}