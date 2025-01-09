void __rustcall uu_tail::args::Settings::check_warnings(long param_1)

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
      local_30 = uucore::util_name();
      local_40 = (undefined8 *)local_30;
      local_38 = _<&T_as_core::fmt::Display>::fmt;
      local_70 = (undefined **)&DAT_002bb5c0;
      local_68 = 2;
      uStack_50 = 0;
      local_60 = &local_40;
      local_58 = 1;
      std::io::stdio::_eprint(&local_70);
      local_70 = &PTR_s___retry_only_effective_for_the_i_002bb5f0;
      local_68 = 1;
      local_60 = (undefined8 **)0x8;
      local_58 = 0;
      uStack_50 = 0;
      std::io::stdio::_eprint(&local_70);
      cVar3 = '\0';
    }
    else {
      local_30 = auVar4;
      if (cVar3 == '\x02') {
        local_30 = uucore::util_name();
        local_40 = (undefined8 *)local_30;
        local_38 = _<&T_as_core::fmt::Display>::fmt;
        local_70 = (undefined **)&DAT_002bb5c0;
        local_68 = 2;
        uStack_50 = 0;
        local_60 = &local_40;
        local_58 = 1;
        std::io::stdio::_eprint(&local_70);
        local_70 = &PTR_s___retry_ignored____retry_is_usef_002bb5e0;
        local_68 = 1;
        local_60 = (undefined8 **)0x8;
        local_58 = 0;
        uStack_50 = 0;
        std::io::stdio::_eprint(&local_70);
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
      auVar4 = uucore::util_name();
      local_40 = (undefined8 *)local_30;
      local_38 = _<&T_as_core::fmt::Display>::fmt;
      local_70 = (undefined **)&DAT_002bb5c0;
      local_68 = 2;
      uStack_50 = 0;
      local_60 = &local_40;
      local_58 = 1;
      local_30 = auVar4;
      std::io::stdio::_eprint(&local_70);
      local_70 = &PTR_s_PID_ignored____pid_PID_is_useful_002bb600;
      goto LAB_001f9bff;
    }
    cVar2 = platform::unix::supports_pid_checks(iVar1);
    if (cVar2 == '\0') {
      auVar4 = uucore::util_name();
      local_40 = (undefined8 *)local_30;
      local_38 = _<&T_as_core::fmt::Display>::fmt;
      local_70 = (undefined **)&DAT_002bb5c0;
      local_68 = 2;
      uStack_50 = 0;
      local_60 = &local_40;
      local_58 = 1;
      local_30 = auVar4;
      std::io::stdio::_eprint(&local_70);
      local_70 = &PTR_s___pid_PID_is_not_supported_on_th_002bb610;
      local_68 = 1;
      local_60 = (undefined8 **)0x8;
      local_58 = 0;
      uStack_50 = 0;
      std::io::stdio::_eprint(&local_70);
    }
  }
  cVar2 = has_stdin(param_1);
  if (cVar2 == '\0') {
    return;
  }
  if (((iVar1 == 0) && (cVar3 == '\0')) && (*(long *)(param_1 + 0x28) == 1)) {
    same_file::Handle::stdin(&local_70);
    cVar3 = core::result::Result<T,E>::map_or(&local_70);
    if (cVar3 != '\0') {
      return;
    }
  }
  local_70 = (undefined **)std::io::stdio::stdin();
  cVar3 = std::sys::pal::unix::io::is_terminal(&local_70);
  if (cVar3 == '\0') {
    return;
  }
  auVar4 = uucore::util_name();
  local_40 = (undefined8 *)local_30;
  local_38 = _<&T_as_core::fmt::Display>::fmt;
  local_70 = (undefined **)&DAT_002bb5c0;
  local_68 = 2;
  uStack_50 = 0;
  local_60 = &local_40;
  local_58 = 1;
  local_30 = auVar4;
  std::io::stdio::_eprint(&local_70);
  local_70 = &PTR_s_following_standard_input_indefin_002bb620;
LAB_001f9bff:
  local_68 = 1;
  local_60 = (undefined8 **)0x8;
  local_58 = 0;
  uStack_50 = 0;
  std::io::stdio::_eprint(&local_70);
  return;
}