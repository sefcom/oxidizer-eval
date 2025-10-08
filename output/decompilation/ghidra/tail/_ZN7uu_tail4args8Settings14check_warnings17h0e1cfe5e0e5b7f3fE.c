void _ZN7uu_tail4args8Settings14check_warnings17h0e1cfe5e0e5b7f3fE(long param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  undefined auVar6 [16];
  undefined **local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  code *local_38;
  undefined local_30 [16];
  
  auVar6._8_8_ = local_30._8_8_;
  auVar6._0_8_ = local_30._0_8_;
  if (*(char *)(param_1 + 0x48) != '\0') {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      local_30 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
      pcVar5 = (code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358;
      local_40 = (undefined8 *)local_30;
      local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
      local_70 = (undefined **)&DAT_00273098;
      local_68 = 2;
      uStack_50 = 0;
      local_60 = &local_40;
      local_58 = 1;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_70);
      local_70 = &PTR_DAT_002730c8;
    }
    else {
      local_30 = auVar6;
      if (*(char *)(param_1 + 0x4c) != '\x02') goto LAB_0019fa7b;
      local_30 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
      pcVar5 = (code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358;
      local_40 = (undefined8 *)local_30;
      local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
      local_70 = (undefined **)&DAT_00273098;
      local_68 = 2;
      uStack_50 = 0;
      local_60 = &local_40;
      local_58 = 1;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_70);
      local_70 = &PTR_DAT_002730b8;
    }
    local_68 = 1;
    local_60 = (undefined8 **)0x8;
    local_58 = 0;
    uStack_50 = 0;
    (*pcVar5)(&local_70);
  }
LAB_0019fa7b:
  iVar1 = *(int *)(param_1 + 0x44);
  cVar4 = *(char *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    if (cVar4 == '\x02') {
      return;
    }
  }
  else {
    if (cVar4 == '\x02') {
      auVar6 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
      pcVar5 = (code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358;
      local_40 = (undefined8 *)local_30;
      local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
      local_70 = (undefined **)&DAT_00273098;
      local_68 = 2;
      uStack_50 = 0;
      local_60 = &local_40;
      local_58 = 1;
      local_30 = auVar6;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_70);
      local_70 = &PTR_DAT_002730d8;
      goto LAB_0019fc78;
    }
    cVar3 = _ZN7uu_tail8platform4unix19supports_pid_checks17ha9469f91d23a1bd0E(iVar1);
    if (cVar3 == '\0') {
      auVar6 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
      puVar2 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358;
      local_40 = (undefined8 *)local_30;
      local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
      local_70 = (undefined **)&DAT_00273098;
      local_68 = 2;
      uStack_50 = 0;
      local_60 = &local_40;
      local_58 = 1;
      local_30 = auVar6;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_70);
      local_70 = &PTR_DAT_002730e8;
      local_68 = 1;
      local_60 = (undefined8 **)0x8;
      local_58 = 0;
      uStack_50 = 0;
      (*(code *)puVar2)(&local_70);
    }
  }
  cVar3 = (*(code *)PTR__ZN7uu_tail4args8Settings9has_stdin17h300d2999bcc0a3dcE_0027d770)(param_1);
  if (cVar3 == '\0') {
    return;
  }
  if ((cVar4 == '\0' && iVar1 == 0) && (*(long *)(param_1 + 0x28) == 1)) {
    (*(code *)PTR__ZN9same_file6Handle5stdin17h12b97f800844609dE_0027d778)(&local_70);
    cVar4 = _ZN4core6result19Result_LT_T_C_E_GT_9is_ok_and17he1bd16e776e93480E(&local_70);
    if (cVar4 != '\0') {
      return;
    }
  }
  (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_0027d780)();
  cVar4 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17hd4d42d74aaf8df1cE();
  if (cVar4 == '\0') {
    return;
  }
  auVar6 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
  pcVar5 = (code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358;
  local_40 = (undefined8 *)local_30;
  local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4163173f9b6529c1E;
  local_70 = (undefined **)&DAT_00273098;
  local_68 = 2;
  uStack_50 = 0;
  local_60 = &local_40;
  local_58 = 1;
  local_30 = auVar6;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0027d358)(&local_70);
  local_70 = &PTR_DAT_002730f8;
LAB_0019fc78:
  local_68 = 1;
  local_60 = (undefined8 **)0x8;
  local_58 = 0;
  uStack_50 = 0;
  (*pcVar5)(&local_70);
  return;
}