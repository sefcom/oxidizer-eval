undefined4
_ZN5uu_rm11prompt_file17h2c52052acc0b58bbE(undefined8 param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_164;
  undefined local_160 [8];
  code *local_158;
  undefined8 **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 *local_130;
  undefined local_128 [16];
  undefined8 *local_118;
  undefined local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_a8;
  long local_90;
  
  if (param_3 == '\0') {
    return 1;
  }
  if (param_3 == '\x02') {
    _ZN3std2fs16symlink_metadata17h9e12b59fb6df20f8E(&local_e0,param_1,param_2);
    if (((int)local_e0 != 2) && ((local_a8 & 0xf000) == 0xa000)) {
                    /* try { // try from 001b8772 to 001b888a has its CatchHandler @ 001b8edd */
      local_128 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
      local_160 = (undefined  [8])&DAT_00227970;
      local_158 = (code *)0x2;
      uStack_140 = 0;
      local_148 = 1;
      local_150 = &local_108;
      local_108 = (undefined8 *)local_128;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_160);
      local_128._0_8_ = 1;
      local_110 = 1;
      local_100 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_160 = (undefined  [8])&PTR_DAT_00227ae8;
      local_158 = (code *)0x2;
      uStack_140 = 0;
      local_148 = 1;
      local_150 = &local_108;
      local_128._8_8_ = param_1;
      local_118 = param_2;
      local_108 = (undefined8 *)local_128;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_160);
      local_160 = (undefined  [8])&PTR_DAT_00227b08;
      local_158 = (code *)0x1;
      local_150 = (undefined8 **)0x8;
      local_148 = 0;
      uStack_140 = 0;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_160);
      local_130 = _ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
      local_f0 = _ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17hf7b2528795edb6d7E
                           (&local_130);
      if (local_f0 == 0) {
        uVar2 = _ZN6uucore8read_yes17hc350e858ab85cf03E();
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h539b7fb1f87034caE
                  (&local_e0);
        return uVar2;
      }
                    /* try { // try from 001b8d3e to 001b8ddf has its CatchHandler @ 001b8ece */
      local_128 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
      local_160 = (undefined  [8])&DAT_00227970;
      local_158 = (code *)0x2;
      uStack_140 = 0;
      local_148 = 1;
      local_150 = &local_108;
      local_108 = (undefined8 *)local_128;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_160);
      local_128._0_8_ = &local_f0;
      local_128._8_8_ =
           _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E
      ;
      local_160 = (undefined  [8])&DAT_00227b18;
      local_158 = (code *)0x2;
      uStack_140 = 0;
      local_148 = 1;
      local_150 = (undefined8 **)local_128;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_160);
      uVar3 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
      goto LAB_001b8eb0;
    }
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h539b7fb1f87034caE
              (&local_e0);
  }
  local_108 = (undefined8 *)0x1b600000000;
  local_100 = (code *)((ulong)local_100._6_2_ << 0x30);
  local_100 = (code *)CONCAT62(local_100._2_6_,0x101);
  _ZN3std2fs11OpenOptions4open17hd10b8d5ca5b809f9E(&local_f0,&local_108,param_1,param_2);
  if ((int)local_f0 == 0) {
    local_164 = local_f0._4_4_;
                    /* try { // try from 001b8931 to 001b8adb has its CatchHandler @ 001b8efb */
    _ZN3std2fs4File8metadata17he899a18112e6f19eE(&local_e0,&local_164);
    if ((int)local_e0 == 2) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h539b7fb1f87034caE
                (&local_e0);
      uVar2 = 1;
    }
    else {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h539b7fb1f87034caE
                (&local_e0);
      if ((param_3 != '\x02') || ((local_a8 & 0x92) == 0)) {
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfa666ae70153c401E(local_164);
        goto LAB_001b8bbe;
      }
      local_150 = (undefined8 **)param_2;
      if (local_90 == 0) {
                    /* try { // try from 001b8bce to 001b8d19 has its CatchHandler @ 001b8efb */
        _local_160 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_128._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
        local_e0 = (undefined **)&DAT_00227970;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_128._0_8_ = local_160;
        local_d0 = (undefined8 *)local_128;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e0);
        local_160 = (undefined  [8])0x1;
        local_148 = CONCAT71(local_148._1_7_,1);
        local_128._8_8_ =
             _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_e0 = &PTR_DAT_00227b38;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_158 = (code *)param_1;
        local_128._0_8_ = local_160;
        local_d0 = (undefined8 *)local_128;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e0);
        local_e0 = &PTR_DAT_00227b08;
        local_d8 = 1;
        local_d0 = (undefined8 *)&DAT_00000008;
        local_c8 = 0;
        uStack_c0 = 0;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e0);
        local_f8 = _ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
        local_130 = (undefined1 *)
                    _ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17hf7b2528795edb6d7E
                              (&local_f8);
        if (local_130 != (undefined1 *)0x0) {
                    /* try { // try from 001b8dea to 001b8eaf has its CatchHandler @ 001b8eb0 */
          _local_160 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_128._8_8_ =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
          local_e0 = (undefined **)&DAT_00227970;
          local_d8 = 2;
          uStack_c0 = 0;
          local_c8 = 1;
          local_128._0_8_ = local_160;
          local_d0 = (undefined8 *)local_128;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e0);
          local_160 = (undefined  [8])&local_130;
          local_158 = 
          _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
          local_e0 = (undefined **)&DAT_00227b18;
          local_d8 = 2;
          uStack_c0 = 0;
          local_c8 = 1;
          local_d0 = (undefined8 *)local_160;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e0);
          uVar3 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
          goto LAB_001b8eb0;
        }
      }
      else {
        _local_160 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_128._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
        local_e0 = (undefined **)&DAT_00227970;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_128._0_8_ = local_160;
        local_d0 = (undefined8 *)local_128;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e0);
        local_160 = (undefined  [8])0x1;
        local_148 = CONCAT71(local_148._1_7_,1);
        local_128._8_8_ =
             _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_e0 = &PTR_DAT_00227b58;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_158 = (code *)param_1;
        local_128._0_8_ = local_160;
        local_d0 = (undefined8 *)local_128;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e0);
        local_e0 = &PTR_DAT_00227b08;
        local_d8 = 1;
        local_d0 = (undefined8 *)&DAT_00000008;
        local_c8 = 0;
        uStack_c0 = 0;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e0);
        local_f8 = _ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
        local_130 = (undefined1 *)
                    _ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17hf7b2528795edb6d7E
                              (&local_f8);
        if (local_130 != (undefined1 *)0x0) {
                    /* try { // try from 001b8aea to 001b8baf has its CatchHandler @ 001b8ebf */
          _local_160 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_128._8_8_ =
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
          local_e0 = (undefined **)&DAT_00227970;
          local_d8 = 2;
          uStack_c0 = 0;
          local_c8 = 1;
          local_128._0_8_ = local_160;
          local_d0 = (undefined8 *)local_128;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e0);
          local_160 = (undefined  [8])&local_130;
          local_158 = 
          _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
          local_e0 = (undefined **)&DAT_00227b18;
          local_d8 = 2;
          uStack_c0 = 0;
          local_c8 = 1;
          local_d0 = (undefined8 *)local_160;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_e0);
          uVar3 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
LAB_001b8eb0:
                    /* catch() { ... } // from try @ 001b8dea with catch @ 001b8eb0 */
                    /* try { // try from 001b8eb3 to 001b8eec has its CatchHandler @ 001b8ef5 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h333f14ee3ed91a78E(&local_130);
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfa666ae70153c401E(local_164);
          uVar2 = _Unwind_Resume(uVar3);
          return uVar2;
        }
      }
      uVar2 = _ZN6uucore8read_yes17hc350e858ab85cf03E();
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfa666ae70153c401E(local_164);
  }
  else {
    local_e0 = local_e8;
    cVar1 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE();
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h333f14ee3ed91a78E(&local_e0);
    if (cVar1 != '\x01') {
      return 1;
    }
LAB_001b8bbe:
    uVar2 = _ZN5uu_rm31prompt_file_permission_readonly17h2197b873951768fcE(param_1,param_2);
  }
  return uVar2;
}