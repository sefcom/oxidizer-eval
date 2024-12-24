undefined8 __rustcall
uu_rm::handle_writable_directory(undefined8 param_1,undefined8 param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined extraout_DL_02;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 **local_70;
  code *local_68;
  long local_60;
  long *local_58;
  code *local_50;
  undefined8 local_48;
  undefined local_40;
  undefined1 *local_38;
  
  local_48 = param_2;
  if (param_4 < '\0') {
    if (param_3 != '\x02') {
      return 1;
    }
    local_58 = (long *)uucore::util_name();
    local_50 = (code *)CONCAT71(extraout_var_01,extraout_DL_01);
    local_68 = _<&T_as_core::fmt::Display>::fmt;
    local_a0 = (undefined **)&DAT_00227d88;
    local_98 = 2;
    uStack_80 = 0;
    local_88 = 1;
    local_90 = &local_70;
    local_70 = &local_58;
    std::io::stdio::_eprint(&local_a0);
    local_58 = (long *)0x1;
    local_40 = 1;
    local_68 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_a0 = &PTR_DAT_00227ff0;
    local_98 = 2;
    uStack_80 = 0;
    local_88 = 1;
    local_90 = &local_70;
    local_70 = &local_58;
    local_50 = (code *)param_1;
    std::io::stdio::_eprint(&local_a0);
    local_a0 = &PTR_DAT_00227f20;
    local_98 = 1;
    local_90 = (undefined8 **)0x8;
    local_88 = 0;
    uStack_80 = 0;
    std::io::stdio::_eprint(&local_a0);
    local_38 = std::io::stdio::stderr::INSTANCE;
    local_60 = _<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_38);
    if (local_60 != 0) {
                    /* try { // try from 001b95d9 to 001b967a has its CatchHandler @ 001b967b */
      local_58 = (long *)uucore::util_name();
      local_50 = (code *)CONCAT71(extraout_var_02,extraout_DL_02);
      local_68 = _<&T_as_core::fmt::Display>::fmt;
      local_a0 = (undefined **)&DAT_00227d88;
      local_98 = 2;
      uStack_80 = 0;
      local_88 = 1;
      local_90 = &local_70;
      local_70 = &local_58;
      std::io::stdio::_eprint(&local_a0);
      local_58 = &local_60;
      local_50 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
      local_a0 = (undefined **)&DAT_00227f30;
      local_98 = 2;
      uStack_80 = 0;
      local_88 = 1;
      local_90 = &local_58;
      std::io::stdio::_eprint(&local_a0);
      uVar1 = std::process::exit(1);
      goto LAB_001b967b;
    }
  }
  else {
    local_58 = (long *)uucore::util_name();
    local_50 = (code *)CONCAT71(extraout_var,extraout_DL);
    local_68 = _<&T_as_core::fmt::Display>::fmt;
    local_a0 = (undefined **)&DAT_00227d88;
    local_98 = 2;
    uStack_80 = 0;
    local_88 = 1;
    local_90 = &local_70;
    local_70 = &local_58;
    std::io::stdio::_eprint(&local_a0);
    local_58 = (long *)0x1;
    local_40 = 1;
    local_68 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_a0 = &PTR_DAT_00227fd0;
    local_98 = 2;
    uStack_80 = 0;
    local_88 = 1;
    local_90 = &local_70;
    local_70 = &local_58;
    local_50 = (code *)param_1;
    std::io::stdio::_eprint(&local_a0);
    local_a0 = &PTR_DAT_00227f20;
    local_98 = 1;
    local_90 = (undefined8 **)0x8;
    local_88 = 0;
    uStack_80 = 0;
    std::io::stdio::_eprint(&local_a0);
    local_38 = std::io::stdio::stderr::INSTANCE;
    local_60 = _<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_38);
    if (local_60 != 0) {
                    /* try { // try from 001b93f9 to 001b949a has its CatchHandler @ 001b968a */
      local_58 = (long *)uucore::util_name();
      local_50 = (code *)CONCAT71(extraout_var_00,extraout_DL_00);
      local_68 = _<&T_as_core::fmt::Display>::fmt;
      local_a0 = (undefined **)&DAT_00227d88;
      local_98 = 2;
      uStack_80 = 0;
      local_88 = 1;
      local_90 = &local_70;
      local_70 = &local_58;
      std::io::stdio::_eprint(&local_a0);
      local_58 = &local_60;
      local_50 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
      local_a0 = (undefined **)&DAT_00227f30;
      local_98 = 2;
      uStack_80 = 0;
      local_88 = 1;
      local_90 = &local_58;
      std::io::stdio::_eprint(&local_a0);
      uVar1 = std::process::exit(1);
LAB_001b967b:
                    /* catch() { ... } // from try @ 001b95d9 with catch @ 001b967b */
                    /* try { // try from 001b967e to 001b9696 has its CatchHandler @ 001b969f */
      core::ptr::drop_in_place<std::io::error::Error>(&local_60);
      uVar1 = _Unwind_Resume(uVar1);
      return uVar1;
    }
  }
  uVar1 = uucore::read_yes();
  return uVar1;
}