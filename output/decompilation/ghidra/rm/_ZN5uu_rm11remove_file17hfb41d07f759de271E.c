undefined8
_ZN5uu_rm11remove_file17hfb41d07f759de271E
          (undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined local_78 [16];
  undefined8 uStack_68;
  undefined local_60;
  undefined8 *local_58;
  code *local_50;
  undefined8 **ppuStack_48;
  code *local_40;
  undefined8 *local_38;
  code *local_30;
  
  cVar1 = _ZN5uu_rm11prompt_file17h2c52052acc0b58bbE(param_1,param_2,param_4);
  if (cVar1 != '\0') {
    local_38 = (undefined8 *)_ZN3std2fs11remove_file17hccd6459e5c502755E(param_1,param_2);
    if (local_38 != (undefined8 *)0x0) {
      cVar1 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(local_38);
      uStack_68 = param_2;
      if (cVar1 == '\x01') {
                    /* try { // try from 001b840f to 001b84ca has its CatchHandler @ 001b865e */
        local_78 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
        local_a8 = (undefined **)&DAT_00227970;
        local_a0 = 2;
        local_88 = 0;
        local_90 = 1;
        local_98 = &local_58;
        local_58 = (undefined8 *)local_78;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_a8);
        local_78._0_8_ = 1;
        local_60 = 1;
        local_50 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_a8 = &PTR_DAT_002279b0;
        local_a0 = 2;
        local_88 = 0;
        local_90 = 1;
        local_98 = &local_58;
        local_78._8_8_ = param_1;
        local_58 = (undefined8 *)local_78;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_a8);
      }
      else {
                    /* try { // try from 001b8561 to 001b8632 has its CatchHandler @ 001b865e */
        local_78 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h051bb22b4e362819E;
        local_a8 = (undefined **)&DAT_00227970;
        local_a0 = 2;
        local_88 = 0;
        local_90 = 1;
        local_98 = &local_58;
        local_58 = (undefined8 *)local_78;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_a8);
        local_78._0_8_ = 1;
        local_60 = 1;
        local_50 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        ppuStack_48 = &local_38;
        local_40 = 
        _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
        local_a8 = &PTR_DAT_002279d0;
        local_a0 = 3;
        local_88 = 0;
        local_90 = 2;
        local_98 = &local_58;
        local_78._8_8_ = param_1;
        local_58 = (undefined8 *)local_78;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_a8);
      }
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h333f14ee3ed91a78E(&local_38);
      return 1;
    }
    if (param_3 != '\0') {
      _ZN5uu_rm9normalize17hc5c72b2dd9f7b482E(&local_58,param_1,param_2);
      local_78._0_8_ = 1;
      local_60 = 1;
      local_38 = (undefined8 *)local_78;
      local_30 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_a8 = &PTR_DAT_00227ac8;
      local_a0 = 2;
      local_88 = 0;
      local_98 = &local_38;
      local_90 = 1;
                    /* try { // try from 001b8547 to 001b854f has its CatchHandler @ 001b864f */
      _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_a8);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7c5c2bfda3b8aa48E(&local_58);
    }
  }
  return 0;
}