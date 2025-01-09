ulong __rustcall uu_rm::prompt_file_permission_readonly(undefined8 param_1,undefined8 param_2)

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
  
  std::fs::metadata(local_e0,param_1,param_2);
  if (local_e0[0] == 2) {
LAB_001b8f42:
                    /* try { // try from 001b8f42 to 001b905a has its CatchHandler @ 001b931d */
    local_108 = uucore::util_name();
    local_118 = _<&T_as_core::fmt::Display>::fmt;
    local_150 = (undefined **)&DAT_00227970;
    local_148 = 2;
    uStack_130 = 0;
    local_138 = 1;
    local_140 = &local_120;
    local_120 = (undefined8 *)local_108;
    std::io::stdio::_eprint(&local_150);
    local_108._0_8_ = 1;
    local_f0 = 1;
    local_118 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_150 = &PTR_DAT_00227b98;
    local_148 = 2;
    uStack_130 = 0;
    local_138 = 1;
    local_140 = &local_120;
    local_120 = (undefined8 *)local_108;
    local_108._8_8_ = param_1;
    local_f8 = param_2;
    std::io::stdio::_eprint(&local_150);
    local_150 = &PTR_DAT_00227b08;
    local_148 = 1;
    local_140 = (undefined8 **)0x8;
    local_138 = 0;
    uStack_130 = 0;
    std::io::stdio::_eprint(&local_150);
    local_e8 = std::io::stdio::stderr::INSTANCE;
    local_110 = _<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_e8);
    if (local_110 != 0) {
                    /* try { // try from 001b925d to 001b92fe has its CatchHandler @ 001b930e */
      local_108 = uucore::util_name();
      local_118 = _<&T_as_core::fmt::Display>::fmt;
      local_150 = (undefined **)&DAT_00227970;
      local_148 = 2;
      uStack_130 = 0;
      local_138 = 1;
      local_140 = &local_120;
      local_120 = (undefined8 *)local_108;
      std::io::stdio::_eprint(&local_150);
      local_108._0_8_ = &local_110;
      local_108._8_8_ = _<std::io::error::Error_as_core::fmt::Display>::fmt;
      local_150 = (undefined **)&DAT_00227b18;
      local_148 = 2;
      uStack_130 = 0;
      local_138 = 1;
      local_140 = (undefined8 **)local_108;
      std::io::stdio::_eprint(&local_150);
      uVar2 = std::process::exit(1);
LAB_001b92ff:
                    /* catch() { ... } // from try @ 001b91b1 with catch @ 001b92ff */
                    /* try { // try from 001b9302 to 001b9329 has its CatchHandler @ 001b9332 */
      core::ptr::drop_in_place<std::io::error::Error>(&local_110);
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
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
    local_108 = uucore::util_name();
    local_118 = _<&T_as_core::fmt::Display>::fmt;
    local_150 = (undefined **)&DAT_00227970;
    local_148 = 2;
    uStack_130 = 0;
    local_138 = 1;
    local_140 = &local_120;
    local_120 = (undefined8 *)local_108;
    std::io::stdio::_eprint(&local_150);
    local_108._0_8_ = 1;
    local_f0 = 1;
    local_118 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_150 = &PTR_DAT_00227b78;
    local_148 = 2;
    uStack_130 = 0;
    local_138 = 1;
    local_140 = &local_120;
    local_120 = (undefined8 *)local_108;
    local_108._8_8_ = param_1;
    local_f8 = param_2;
    std::io::stdio::_eprint(&local_150);
    local_150 = &PTR_DAT_00227b08;
    local_148 = 1;
    local_140 = (undefined8 **)0x8;
    local_138 = 0;
    uStack_130 = 0;
    std::io::stdio::_eprint(&local_150);
    local_e8 = std::io::stdio::stderr::INSTANCE;
    local_110 = _<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_e8);
    if (local_110 != 0) {
                    /* try { // try from 001b91b1 to 001b9252 has its CatchHandler @ 001b92ff */
      local_108 = uucore::util_name();
      local_118 = _<&T_as_core::fmt::Display>::fmt;
      local_150 = (undefined **)&DAT_00227970;
      local_148 = 2;
      uStack_130 = 0;
      local_138 = 1;
      local_140 = &local_120;
      local_120 = (undefined8 *)local_108;
      std::io::stdio::_eprint(&local_150);
      local_108._0_8_ = &local_110;
      local_108._8_8_ = _<std::io::error::Error_as_core::fmt::Display>::fmt;
      local_150 = (undefined **)&DAT_00227b18;
      local_148 = 2;
      uStack_130 = 0;
      local_138 = 1;
      local_140 = (undefined8 **)local_108;
      std::io::stdio::_eprint(&local_150);
      uVar2 = std::process::exit(1);
      goto LAB_001b92ff;
    }
  }
  uVar1 = uucore::read_yes();
  uVar3 = (ulong)uVar1;
LAB_001b906c:
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(local_e0);
  return uVar3 & 0xffffffff;
}