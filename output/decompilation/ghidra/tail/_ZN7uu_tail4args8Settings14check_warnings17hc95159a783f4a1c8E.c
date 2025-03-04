void _ZN7uu_tail4args8Settings14check_warnings17hc95159a783f4a1c8E(long param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined auVar4 [16];
  undefined **local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  code *local_38;
  undefined local_30 [16];
  
  auVar4._8_8_ = local_30._8_8_;
  auVar4._0_8_ = local_30._0_8_;
  cVar3 = *(char *)(param_1 + 0x4c);
  if (*(char *)(param_1 + 0x48) != '\0') {
    if (cVar3 == '\0') {
      local_30 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_40 = (undefined8 *)local_30;
      local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
      local_70 = (undefined **)&DAT_002bb5c0;
      local_68 = 2;
      uStack_50 = 0;
      local_60 = &local_40;
      local_58 = 1;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
      local_70 = &PTR_s___retry_only_effective_for_the_i_002bb5f0;
      local_68 = 1;
      local_60 = (undefined8 **)0x8;
      local_58 = 0;
      uStack_50 = 0;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
      cVar3 = '\0';
    }
    else {
      local_30 = auVar4;
      if (cVar3 == '\x02') {
        local_30 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_40 = (undefined8 *)local_30;
        local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
        local_70 = (undefined **)&DAT_002bb5c0;
        local_68 = 2;
        uStack_50 = 0;
        local_60 = &local_40;
        local_58 = 1;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
        local_70 = &PTR_s___retry_ignored____retry_is_usef_002bb5e0;
        local_68 = 1;
        local_60 = (undefined8 **)0x8;
        local_58 = 0;
        uStack_50 = 0;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
        cVar3 = '\x02';
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    if (cVar3 == '\x02') {
      return;
    }
  }
  else {
    if (cVar3 == '\x02') {
      auVar4 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_40 = (undefined8 *)local_30;
      local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
      local_70 = (undefined **)&DAT_002bb5c0;
      local_68 = 2;
      uStack_50 = 0;
      local_60 = &local_40;
      local_58 = 1;
      local_30 = auVar4;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
      local_70 = &PTR_s_PID_ignored____pid_PID_is_useful_002bb600;
      goto LAB_001f9bff;
    }
    cVar2 = _ZN7uu_tail8platform4unix19supports_pid_checks17h8a33793bec8fc4a9E(iVar1);
    if (cVar2 == '\0') {
      auVar4 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_40 = (undefined8 *)local_30;
      local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
      local_70 = (undefined **)&DAT_002bb5c0;
      local_68 = 2;
      uStack_50 = 0;
      local_60 = &local_40;
      local_58 = 1;
      local_30 = auVar4;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
      local_70 = &PTR_s___pid_PID_is_not_supported_on_th_002bb610;
      local_68 = 1;
      local_60 = (undefined8 **)0x8;
      local_58 = 0;
      uStack_50 = 0;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
    }
  }
  cVar2 = _ZN7uu_tail4args8Settings9has_stdin17h99629f892128a309E(param_1);
  if (cVar2 == '\0') {
    return;
  }
  if (((iVar1 == 0) && (cVar3 == '\0')) && (*(long *)(param_1 + 0x28) == 1)) {
    _ZN9same_file6Handle5stdin17hcbeef53980d87d0eE(&local_70);
    cVar3 = _ZN4core6result19Result_LT_T_C_E_GT_6map_or17h697c815cf75a0919E(&local_70);
    if (cVar3 != '\0') {
      return;
    }
  }
  local_70 = (undefined **)_ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
  cVar3 = _ZN3std3sys3pal4unix2io11is_terminal17h77c9f849b4b1037fE(&local_70);
  if (cVar3 == '\0') {
    return;
  }
  auVar4 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  local_40 = (undefined8 *)local_30;
  local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1fe54d61ef828b4bE;
  local_70 = (undefined **)&DAT_002bb5c0;
  local_68 = 2;
  uStack_50 = 0;
  local_60 = &local_40;
  local_58 = 1;
  local_30 = auVar4;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
  local_70 = &PTR_s_following_standard_input_indefin_002bb620;
LAB_001f9bff:
  local_68 = 1;
  local_60 = (undefined8 **)0x8;
  local_58 = 0;
  uStack_50 = 0;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
  return;
}