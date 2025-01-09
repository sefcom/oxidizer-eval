undefined4 __rustcall uu_rm::prompt_file(undefined8 param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_164;
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
    std::fs::symlink_metadata(&local_e0,param_1,param_2);
    if (((int)local_e0 != 2) && ((local_a8 & 0xf000) == 0xa000)) {
                    /* try { // try from 001b8772 to 001b888a has its CatchHandler @ 001b8edd */
      local_128 = uucore::util_name();
      local_100 = _<&T_as_core::fmt::Display>::fmt;
      local_160 = (undefined  [8])&DAT_00227970;
      local_158 = (code *)0x2;
      uStack_140 = 0;
      local_148 = 1;
      local_150 = &local_108;
      local_108 = (undefined8 *)local_128;
      std::io::stdio::_eprint(local_160);
      local_128._0_8_ = 1;
      local_110 = 1;
      local_100 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_160 = (undefined  [8])&PTR_DAT_00227ae8;
      local_158 = (code *)0x2;
      uStack_140 = 0;
      local_148 = 1;
      local_150 = &local_108;
      local_128._8_8_ = param_1;
      local_118 = param_2;
      local_108 = (undefined8 *)local_128;
      std::io::stdio::_eprint(local_160);
      local_160 = (undefined  [8])&PTR_DAT_00227b08;
      local_158 = (code *)0x1;
      local_150 = (undefined8 **)0x8;
      local_148 = 0;
      uStack_140 = 0;
      std::io::stdio::_eprint(local_160);
      local_130 = std::io::stdio::stderr::INSTANCE;
      local_f0 = _<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_130);
      if (local_f0 == 0) {
        uVar2 = uucore::read_yes();
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (&local_e0);
        return uVar2;
      }
                    /* try { // try from 001b8d3e to 001b8ddf has its CatchHandler @ 001b8ece */
      local_128 = uucore::util_name();
      local_100 = _<&T_as_core::fmt::Display>::fmt;
      local_160 = (undefined  [8])&DAT_00227970;
      local_158 = (code *)0x2;
      uStack_140 = 0;
      local_148 = 1;
      local_150 = &local_108;
      local_108 = (undefined8 *)local_128;
      std::io::stdio::_eprint(local_160);
      local_128._0_8_ = &local_f0;
      local_128._8_8_ = _<std::io::error::Error_as_core::fmt::Display>::fmt;
      local_160 = (undefined  [8])&DAT_00227b18;
      local_158 = (code *)0x2;
      uStack_140 = 0;
      local_148 = 1;
      local_150 = (undefined8 **)local_128;
      std::io::stdio::_eprint(local_160);
      uVar3 = std::process::exit(1);
      goto LAB_001b8eb0;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (&local_e0);
  }
  local_108 = (undefined8 *)0x1b600000000;
  local_100 = (code *)((ulong)local_100._6_2_ << 0x30);
  local_100 = (code *)CONCAT62(local_100._2_6_,0x101);
  std::fs::OpenOptions::open(&local_f0,&local_108,param_1,param_2);
  if ((int)local_f0 == 0) {
    local_164 = local_f0._4_4_;
                    /* try { // try from 001b8931 to 001b8adb has its CatchHandler @ 001b8efb */
    std::fs::File::metadata(&local_e0,&local_164);
    if ((int)local_e0 == 2) {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (&local_e0);
      uVar2 = 1;
    }
    else {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (&local_e0);
      if ((param_3 != '\x02') || ((local_a8 & 0x92) == 0)) {
        core::ptr::drop_in_place<std::fs::File>(local_164);
        goto LAB_001b8bbe;
      }
      local_150 = (undefined8 **)param_2;
      if (local_90 == 0) {
                    /* try { // try from 001b8bce to 001b8d19 has its CatchHandler @ 001b8efb */
        _local_160 = uucore::util_name();
        local_128._8_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_e0 = (undefined **)&DAT_00227970;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_128._0_8_ = local_160;
        local_d0 = (undefined8 *)local_128;
        std::io::stdio::_eprint(&local_e0);
        local_160 = (undefined  [8])0x1;
        local_148 = CONCAT71(local_148._1_7_,1);
        local_128._8_8_ = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_e0 = &PTR_DAT_00227b38;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_158 = (code *)param_1;
        local_128._0_8_ = local_160;
        local_d0 = (undefined8 *)local_128;
        std::io::stdio::_eprint(&local_e0);
        local_e0 = &PTR_DAT_00227b08;
        local_d8 = 1;
        local_d0 = (undefined8 *)&DAT_00000008;
        local_c8 = 0;
        uStack_c0 = 0;
        std::io::stdio::_eprint(&local_e0);
        local_f8 = std::io::stdio::stderr::INSTANCE;
        local_130 = (undefined1 *)_<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_f8);
        if (local_130 != (undefined1 *)0x0) {
                    /* try { // try from 001b8dea to 001b8eaf has its CatchHandler @ 001b8eb0 */
          _local_160 = uucore::util_name();
          local_128._8_8_ = _<&T_as_core::fmt::Display>::fmt;
          local_e0 = (undefined **)&DAT_00227970;
          local_d8 = 2;
          uStack_c0 = 0;
          local_c8 = 1;
          local_128._0_8_ = local_160;
          local_d0 = (undefined8 *)local_128;
          std::io::stdio::_eprint(&local_e0);
          local_160 = (undefined  [8])&local_130;
          local_158 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
          local_e0 = (undefined **)&DAT_00227b18;
          local_d8 = 2;
          uStack_c0 = 0;
          local_c8 = 1;
          local_d0 = (undefined8 *)local_160;
          std::io::stdio::_eprint(&local_e0);
          uVar3 = std::process::exit(1);
          goto LAB_001b8eb0;
        }
      }
      else {
        _local_160 = uucore::util_name();
        local_128._8_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_e0 = (undefined **)&DAT_00227970;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_128._0_8_ = local_160;
        local_d0 = (undefined8 *)local_128;
        std::io::stdio::_eprint(&local_e0);
        local_160 = (undefined  [8])0x1;
        local_148 = CONCAT71(local_148._1_7_,1);
        local_128._8_8_ = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_e0 = &PTR_DAT_00227b58;
        local_d8 = 2;
        uStack_c0 = 0;
        local_c8 = 1;
        local_158 = (code *)param_1;
        local_128._0_8_ = local_160;
        local_d0 = (undefined8 *)local_128;
        std::io::stdio::_eprint(&local_e0);
        local_e0 = &PTR_DAT_00227b08;
        local_d8 = 1;
        local_d0 = (undefined8 *)&DAT_00000008;
        local_c8 = 0;
        uStack_c0 = 0;
        std::io::stdio::_eprint(&local_e0);
        local_f8 = std::io::stdio::stderr::INSTANCE;
        local_130 = (undefined1 *)_<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_f8);
        if (local_130 != (undefined1 *)0x0) {
                    /* try { // try from 001b8aea to 001b8baf has its CatchHandler @ 001b8ebf */
          _local_160 = uucore::util_name();
          local_128._8_8_ = _<&T_as_core::fmt::Display>::fmt;
          local_e0 = (undefined **)&DAT_00227970;
          local_d8 = 2;
          uStack_c0 = 0;
          local_c8 = 1;
          local_128._0_8_ = local_160;
          local_d0 = (undefined8 *)local_128;
          std::io::stdio::_eprint(&local_e0);
          local_160 = (undefined  [8])&local_130;
          local_158 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
          local_e0 = (undefined **)&DAT_00227b18;
          local_d8 = 2;
          uStack_c0 = 0;
          local_c8 = 1;
          local_d0 = (undefined8 *)local_160;
          std::io::stdio::_eprint(&local_e0);
          uVar3 = std::process::exit(1);
LAB_001b8eb0:
                    /* catch() { ... } // from try @ 001b8dea with catch @ 001b8eb0 */
                    /* try { // try from 001b8eb3 to 001b8eec has its CatchHandler @ 001b8ef5 */
          core::ptr::drop_in_place<std::io::error::Error>(&local_130);
          core::ptr::drop_in_place<std::fs::File>(local_164);
          uVar2 = _Unwind_Resume(uVar3);
          return uVar2;
        }
      }
      uVar2 = uucore::read_yes();
    }
    core::ptr::drop_in_place<std::fs::File>(local_164);
  }
  else {
    local_e0 = local_e8;
    cVar1 = std::io::error::Error::kind();
    core::ptr::drop_in_place<std::io::error::Error>(&local_e0);
    if (cVar1 != '\x01') {
      return 1;
    }
LAB_001b8bbe:
    uVar2 = prompt_file_permission_readonly(param_1,param_2);
  }
  return uVar2;
}