undefined8 __rustcall uu_rm::remove_dir(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined local_98 [16];
  undefined8 uStack_88;
  undefined local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 **ppuStack_68;
  code *local_60;
  undefined8 local_58;
  char local_50;
  undefined8 *local_48;
  code *local_40;
  undefined8 local_38;
  char local_30;
  
  cVar1 = prompt_dir(param_1,param_2,*(undefined *)(param_3 + 6));
  if (cVar1 == '\0') {
    return 0;
  }
  std::fs::read_dir(&local_58,param_1,param_2);
  uStack_88 = param_2;
  if (local_50 == '\x02') {
                    /* try { // try from 001b7de8 to 001b7ea3 has its CatchHandler @ 001b8383 */
    local_98 = uucore::util_name();
    local_70 = _<&T_as_core::fmt::Display>::fmt;
    local_c8 = (undefined **)&DAT_00227970;
    local_c0 = 2;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = &local_78;
    local_78 = (undefined8 *)local_98;
    std::io::stdio::_eprint(&local_c8);
    local_98._0_8_ = 1;
    local_80 = 1;
    local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_c8 = &PTR_DAT_00227aa8;
    local_c0 = 2;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = &local_78;
    local_98._8_8_ = param_1;
    local_78 = (undefined8 *)local_98;
    std::io::stdio::_eprint(&local_c8);
    if (local_50 != '\x02') {
      core::ptr::drop_in_place<std::fs::ReadDir>(&local_58);
      return 1;
    }
  }
  else {
    local_38 = local_58;
    local_30 = local_50;
    if (*(char *)(param_3 + 4) == '\0' && *(char *)(param_3 + 3) == '\0') {
                    /* try { // try from 001b7ee2 to 001b809a has its CatchHandler @ 001b836a */
      local_98 = uucore::util_name();
      local_70 = _<&T_as_core::fmt::Display>::fmt;
      local_c8 = (undefined **)&DAT_00227970;
      local_c0 = 2;
      local_a8 = 0;
      local_b0 = 1;
      local_b8 = &local_78;
      local_78 = (undefined8 *)local_98;
      std::io::stdio::_eprint(&local_c8);
      local_98._0_8_ = 1;
      local_80 = 1;
      local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_c8 = &PTR_DAT_00227a50;
      local_c0 = 2;
      local_a8 = 0;
      local_b0 = 1;
      local_b8 = &local_78;
      local_98._8_8_ = param_1;
      local_78 = (undefined8 *)local_98;
      std::io::stdio::_eprint(&local_c8);
    }
    else {
      _<std::fs::ReadDir_as_core::iter::traits::iterator::Iterator>::next(&local_c8,&local_38);
      if (local_c8 == (undefined **)0x0) {
        core::ptr::
        drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>
                  (&local_c8);
        puVar2 = (undefined8 *)std::fs::remove_dir(param_1,param_2);
        if (puVar2 == (undefined8 *)0x0) {
          if (*(char *)(param_3 + 5) != '\0') {
                    /* try { // try from 001b8188 to 001b8197 has its CatchHandler @ 001b836a */
            normalize(&local_78,param_1,param_2);
            local_98._0_8_ = 1;
            local_80 = 1;
            local_48 = (undefined8 *)local_98;
            local_40 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_c8 = &PTR_DAT_00227a88;
            local_c0 = 2;
            local_a8 = 0;
            local_b8 = &local_48;
            local_b0 = 1;
                    /* try { // try from 001b81ff to 001b8207 has its CatchHandler @ 001b8349 */
            std::io::stdio::_print(&local_c8);
                    /* try { // try from 001b8208 to 001b8211 has its CatchHandler @ 001b836a */
            core::ptr::drop_in_place<std::path::PathBuf>(&local_78);
          }
                    /* try { // try from 001b8212 to 001b821e has its CatchHandler @ 001b8383 */
          core::ptr::drop_in_place<std::fs::ReadDir>(&local_38);
          if (local_50 != '\x02') {
            return 0;
          }
          core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>
                    (&local_58);
          return 0;
        }
        local_48 = puVar2;
        cVar1 = std::io::error::Error::kind(puVar2);
        if (cVar1 == '\x01') {
                    /* try { // try from 001b80bc to 001b8177 has its CatchHandler @ 001b8358 */
          local_98 = uucore::util_name();
          local_70 = _<&T_as_core::fmt::Display>::fmt;
          local_c8 = (undefined **)&DAT_00227970;
          local_c0 = 2;
          local_a8 = 0;
          local_b0 = 1;
          local_b8 = &local_78;
          local_78 = (undefined8 *)local_98;
          std::io::stdio::_eprint(&local_c8);
          local_98._0_8_ = 1;
          local_80 = 1;
          local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_c8 = &PTR_DAT_002279b0;
          local_c0 = 2;
          local_a8 = 0;
          local_b0 = 1;
          local_b8 = &local_78;
          local_98._8_8_ = param_1;
          local_78 = (undefined8 *)local_98;
          std::io::stdio::_eprint(&local_c8);
        }
        else {
                    /* try { // try from 001b8237 to 001b830b has its CatchHandler @ 001b8358 */
          local_98 = uucore::util_name();
          local_70 = _<&T_as_core::fmt::Display>::fmt;
          local_c8 = (undefined **)&DAT_00227970;
          local_c0 = 2;
          local_a8 = 0;
          local_b0 = 1;
          local_b8 = &local_78;
          local_78 = (undefined8 *)local_98;
          std::io::stdio::_eprint(&local_c8);
          local_98._0_8_ = 1;
          local_80 = 1;
          local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          ppuStack_68 = &local_48;
          local_60 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
          local_c8 = &PTR_DAT_002279d0;
          local_c0 = 3;
          local_a8 = 0;
          local_b0 = 2;
          local_b8 = &local_78;
          local_98._8_8_ = param_1;
          local_78 = (undefined8 *)local_98;
          std::io::stdio::_eprint(&local_c8);
        }
                    /* try { // try from 001b830c to 001b8318 has its CatchHandler @ 001b836a */
        core::ptr::drop_in_place<std::io::error::Error>(&local_48);
      }
      else {
        core::ptr::
        drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>
                  (&local_c8);
        local_98 = uucore::util_name();
        local_70 = _<&T_as_core::fmt::Display>::fmt;
        local_c8 = (undefined **)&DAT_00227970;
        local_c0 = 2;
        local_a8 = 0;
        local_b0 = 1;
        local_b8 = &local_78;
        local_78 = (undefined8 *)local_98;
        std::io::stdio::_eprint(&local_c8);
        local_98._0_8_ = 1;
        local_80 = 1;
        local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_c8 = &PTR_DAT_00227aa8;
        local_c0 = 2;
        local_a8 = 0;
        local_b0 = 1;
        local_b8 = &local_78;
        local_98._8_8_ = param_1;
        local_78 = (undefined8 *)local_98;
        std::io::stdio::_eprint(&local_c8);
      }
    }
                    /* try { // try from 001b8319 to 001b8325 has its CatchHandler @ 001b8383 */
    core::ptr::drop_in_place<std::fs::ReadDir>(&local_38);
    if (local_50 != '\x02') {
      return 1;
    }
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&local_58);
  return 1;
}