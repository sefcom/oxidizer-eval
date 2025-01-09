undefined8 __rustcall
uu_rm::remove_file(undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4)

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
  
  cVar1 = prompt_file(param_1,param_2,param_4);
  if (cVar1 != '\0') {
    local_38 = (undefined8 *)std::fs::remove_file(param_1,param_2);
    if (local_38 != (undefined8 *)0x0) {
      cVar1 = std::io::error::Error::kind(local_38);
      uStack_68 = param_2;
      if (cVar1 == '\x01') {
                    /* try { // try from 001b840f to 001b84ca has its CatchHandler @ 001b865e */
        local_78 = uucore::util_name();
        local_50 = _<&T_as_core::fmt::Display>::fmt;
        local_a8 = (undefined **)&DAT_00227970;
        local_a0 = 2;
        local_88 = 0;
        local_90 = 1;
        local_98 = &local_58;
        local_58 = (undefined8 *)local_78;
        std::io::stdio::_eprint(&local_a8);
        local_78._0_8_ = 1;
        local_60 = 1;
        local_50 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_a8 = &PTR_DAT_002279b0;
        local_a0 = 2;
        local_88 = 0;
        local_90 = 1;
        local_98 = &local_58;
        local_78._8_8_ = param_1;
        local_58 = (undefined8 *)local_78;
        std::io::stdio::_eprint(&local_a8);
      }
      else {
                    /* try { // try from 001b8561 to 001b8632 has its CatchHandler @ 001b865e */
        local_78 = uucore::util_name();
        local_50 = _<&T_as_core::fmt::Display>::fmt;
        local_a8 = (undefined **)&DAT_00227970;
        local_a0 = 2;
        local_88 = 0;
        local_90 = 1;
        local_98 = &local_58;
        local_58 = (undefined8 *)local_78;
        std::io::stdio::_eprint(&local_a8);
        local_78._0_8_ = 1;
        local_60 = 1;
        local_50 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        ppuStack_48 = &local_38;
        local_40 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
        local_a8 = &PTR_DAT_002279d0;
        local_a0 = 3;
        local_88 = 0;
        local_90 = 2;
        local_98 = &local_58;
        local_78._8_8_ = param_1;
        local_58 = (undefined8 *)local_78;
        std::io::stdio::_eprint(&local_a8);
      }
      core::ptr::drop_in_place<std::io::error::Error>(&local_38);
      return 1;
    }
    if (param_3 != '\0') {
      normalize(&local_58,param_1,param_2);
      local_78._0_8_ = 1;
      local_60 = 1;
      local_38 = (undefined8 *)local_78;
      local_30 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_a8 = &PTR_DAT_00227ac8;
      local_a0 = 2;
      local_88 = 0;
      local_98 = &local_38;
      local_90 = 1;
                    /* try { // try from 001b8547 to 001b854f has its CatchHandler @ 001b864f */
      std::io::stdio::_print(&local_a8);
      core::ptr::drop_in_place<std::path::PathBuf>(&local_58);
    }
  }
  return 0;
}