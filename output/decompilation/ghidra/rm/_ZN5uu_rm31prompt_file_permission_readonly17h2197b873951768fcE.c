ulong _ZN5uu_rm31prompt_file_permission_readonly17h2197b873951768fcE
                (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 unaff_RBP;
  undefined **local_150;
  undefined8 local_148;
  undefined8 **local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 *local_120;
  code *local_118;
  long local_110;
  undefined local_108 [16];
  undefined8 local_f8;
  undefined local_f0;
  undefined1 *local_e8;
  int local_e0 [14];
  byte local_a8;
  long local_90;
  
  _ZN3std2fs8metadata17h6df0603967c240bbE(local_e0,param_1,param_2);
  if (local_e0[0] == 2) {
LAB_001b8f42:
                    /* try { // try from 001b8f42 to 001b905a has its CatchHandler @ 001b931d */
    local_108 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_118 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
    local_150 = (undefined **)&DAT_00227970;
    local_148 = 2;
    uStack_130 = 0;
    local_138 = 1;
    local_140 = &local_120;
    local_120 = (undefined8 *)local_108;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_150);
    local_108._0_8_ = 1;
    local_f0 = 1;
    local_118 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_150 = &PTR_DAT_00227b98;
    local_148 = 2;
    uStack_130 = 0;
    local_138 = 1;
    local_140 = &local_120;
    local_120 = (undefined8 *)local_108;
    local_108._8_8_ = param_1;
    local_f8 = param_2;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_150);
    local_150 = &PTR_DAT_00227b08;
    local_148 = 1;
    local_140 = (undefined8 **)0x8;
    local_138 = 0;
    uStack_130 = 0;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_150);
    local_e8 = _ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
    local_110 = _ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17hf7b2528795edb6d7E
                          (&local_e8);
    if (local_110 != 0) {
                    /* try { // try from 001b925d to 001b92fe has its CatchHandler @ 001b930e */
      local_108 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_118 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
      local_150 = (undefined **)&DAT_00227970;
      local_148 = 2;
      uStack_130 = 0;
      local_138 = 1;
      local_140 = &local_120;
      local_120 = (undefined8 *)local_108;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_150);
      local_108._0_8_ = &local_110;
      local_108._8_8_ =
           _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E
      ;
      local_150 = (undefined **)&DAT_00227b18;
      local_148 = 2;
      uStack_130 = 0;
      local_138 = 1;
      local_140 = (undefined8 **)local_108;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_150);
      uVar2 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
LAB_001b92ff:
                    /* catch() { ... } // from try @ 001b91b1 with catch @ 001b92ff */
                    /* try { // try from 001b9302 to 001b9329 has its CatchHandler @ 001b9332 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h333f14ee3ed91a78E(&local_110);
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h539b7fb1f87034caE
                (local_e0);
      uVar3 = _Unwind_Resume(uVar2);
      return uVar3;
    }
  }
  else {
    uVar3 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if ((local_a8 & 0x92) != 0) goto LAB_001b906c;
    if (local_90 != 0) goto LAB_001b8f42;
                    /* try { // try from 001b9099 to 001b91a2 has its CatchHandler @ 001b931d */
    local_108 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_118 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
    local_150 = (undefined **)&DAT_00227970;
    local_148 = 2;
    uStack_130 = 0;
    local_138 = 1;
    local_140 = &local_120;
    local_120 = (undefined8 *)local_108;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_150);
    local_108._0_8_ = 1;
    local_f0 = 1;
    local_118 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_150 = &PTR_DAT_00227b78;
    local_148 = 2;
    uStack_130 = 0;
    local_138 = 1;
    local_140 = &local_120;
    local_120 = (undefined8 *)local_108;
    local_108._8_8_ = param_1;
    local_f8 = param_2;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_150);
    local_150 = &PTR_DAT_00227b08;
    local_148 = 1;
    local_140 = (undefined8 **)0x8;
    local_138 = 0;
    uStack_130 = 0;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_150);
    local_e8 = _ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
    local_110 = _ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_5flush17hf7b2528795edb6d7E
                          (&local_e8);
    if (local_110 != 0) {
                    /* try { // try from 001b91b1 to 001b9252 has its CatchHandler @ 001b92ff */
      local_108 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_118 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
      local_150 = (undefined **)&DAT_00227970;
      local_148 = 2;
      uStack_130 = 0;
      local_138 = 1;
      local_140 = &local_120;
      local_120 = (undefined8 *)local_108;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_150);
      local_108._0_8_ = &local_110;
      local_108._8_8_ =
           _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E
      ;
      local_150 = (undefined **)&DAT_00227b18;
      local_148 = 2;
      uStack_130 = 0;
      local_138 = 1;
      local_140 = (undefined8 **)local_108;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_150);
      uVar2 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
      goto LAB_001b92ff;
    }
  }
  uVar1 = _ZN6uucore8read_yes17hc350e858ab85cf03E();
  uVar3 = (ulong)uVar1;
LAB_001b906c:
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h539b7fb1f87034caE
            (local_e0);
  return uVar3 & 0xffffffff;
}