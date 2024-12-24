void __rustcall uu_tail::args::Settings::check_warnings(long param_1)

{
  char cVar1;
  char cVar2;
  undefined auVar3 [16];
  undefined **local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_38;
  code *local_30;
  undefined local_28 [16];
  
  auVar3._8_8_ = local_28._8_8_;
  auVar3._0_8_ = local_28._0_8_;
  cVar2 = *(char *)(param_1 + 0x4c);
  if (*(char *)(param_1 + 0x48) != '\0') {
    if (cVar2 == '\0') {
      local_28 = uucore::util_name();
      local_38 = (undefined8 *)local_28;
      local_30 = _<&T_as_core::fmt::Display>::fmt;
      local_68 = (undefined **)&DAT_002bd590;
      local_60 = 2;
      uStack_48 = 0;
      local_58 = &local_38;
      local_50 = 1;
      std::io::stdio::_eprint(&local_68);
      local_68 = &PTR_s___retry_only_effective_for_the_i_002bd5b0;
      local_60 = 1;
      local_58 = (undefined8 **)0x8;
      local_50 = 0;
      uStack_48 = 0;
      std::io::stdio::_eprint(&local_68);
      cVar2 = '\0';
    }
    else {
      local_28 = auVar3;
      if (cVar2 == '\x02') {
        local_28 = uucore::util_name();
        local_38 = (undefined8 *)local_28;
        local_30 = _<&T_as_core::fmt::Display>::fmt;
        local_68 = (undefined **)&DAT_002bd590;
        local_60 = 2;
        uStack_48 = 0;
        local_58 = &local_38;
        local_50 = 1;
        std::io::stdio::_eprint(&local_68);
        local_68 = &PTR_s___retry_ignored____retry_is_usef_002bd5c0;
        local_60 = 1;
        local_58 = (undefined8 **)0x8;
        local_50 = 0;
        uStack_48 = 0;
        std::io::stdio::_eprint(&local_68);
        cVar2 = '\x02';
      }
    }
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    if (cVar2 == '\x02') {
      return;
    }
    cVar1 = has_stdin(param_1);
    if (cVar1 == '\0') {
      return;
    }
    if ((cVar2 == '\0') && (*(long *)(param_1 + 0x28) == 1)) {
      same_file::Handle::stdin(&local_68);
      cVar2 = core::result::Result<T,E>::map_or(&local_68);
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  else {
    if (cVar2 == '\x02') {
      auVar3 = uucore::util_name();
      local_38 = (undefined8 *)local_28;
      local_30 = _<&T_as_core::fmt::Display>::fmt;
      local_68 = (undefined **)&DAT_002bd590;
      local_60 = 2;
      uStack_48 = 0;
      local_58 = &local_38;
      local_50 = 1;
      local_28 = auVar3;
      std::io::stdio::_eprint(&local_68);
      local_68 = &PTR_s_PID_ignored____pid_PID_is_useful_002bd5e0;
      goto LAB_001fab20;
    }
    cVar2 = platform::unix::supports_pid_checks();
    if (cVar2 == '\0') {
      auVar3 = uucore::util_name();
      local_38 = (undefined8 *)local_28;
      local_30 = _<&T_as_core::fmt::Display>::fmt;
      local_68 = (undefined **)&DAT_002bd590;
      local_60 = 2;
      uStack_48 = 0;
      local_58 = &local_38;
      local_50 = 1;
      local_28 = auVar3;
      std::io::stdio::_eprint(&local_68);
      local_68 = &PTR_s___pid_PID_is_not_supported_on_th_002bd5d0;
      local_60 = 1;
      local_58 = (undefined8 **)0x8;
      local_50 = 0;
      uStack_48 = 0;
      std::io::stdio::_eprint(&local_68);
    }
    cVar2 = has_stdin(param_1);
    if (cVar2 == '\0') {
      return;
    }
  }
  local_68 = (undefined **)std::io::stdio::stdin();
  cVar2 = std::sys::pal::unix::io::is_terminal(&local_68);
  if (cVar2 == '\0') {
    return;
  }
  auVar3 = uucore::util_name();
  local_38 = (undefined8 *)local_28;
  local_30 = _<&T_as_core::fmt::Display>::fmt;
  local_68 = (undefined **)&DAT_002bd590;
  local_60 = 2;
  uStack_48 = 0;
  local_58 = &local_38;
  local_50 = 1;
  local_28 = auVar3;
  std::io::stdio::_eprint(&local_68);
  local_68 = &PTR_s_following_standard_input_indefin_002bd5f0;
LAB_001fab20:
  local_60 = 1;
  local_58 = (undefined8 **)0x8;
  local_50 = 0;
  uStack_48 = 0;
  std::io::stdio::_eprint(&local_68);
  return;
}