undefined  [16] __rustcall uu_dd::Source::skip(int *param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined auVar2 [16];
  undefined local_79;
  undefined **local_78;
  ulong local_70;
  undefined **local_68;
  ulong local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_38;
  code *local_30;
  undefined local_28 [16];
  
  ppuVar1 = (undefined **)(param_1 + 1);
  if (*param_1 == 0) {
    core::result::Result<T,E>::unwrap(param_2 >> 0x3f,&PTR_DAT_002618d8);
    auVar2 = _<std::fs::File_as_std::io::Seek>::seek(ppuVar1,2,param_2);
  }
  else if (*param_1 == 1) {
    try_get_len_of_block_device(&local_78,ppuVar1);
    if (((int)local_78 == 1) && (local_70 < param_2)) {
                    /* try { // try from 001d69dc to 001d6a79 has its CatchHandler @ 001d6ba6 */
      local_28 = uucore::util_name();
      local_38 = (undefined8 *)local_28;
      local_30 = _<&T_as_core::fmt::Display>::fmt;
      local_68 = (undefined **)&DAT_002618f0;
      local_60 = 2;
      uStack_48 = 0;
      local_58 = &local_38;
      local_50 = 1;
      std::io::stdio::_eprint(&local_68);
      local_68 = &PTR_DAT_00261910;
      local_60 = 1;
      local_58 = (undefined8 **)0x8;
      local_50 = 0;
      uStack_48 = 0;
      std::io::stdio::_eprint(&local_68);
      uucore::mods::error::set_exit_code(1);
      core::ptr::
      drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>
                (&local_78);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70;
      auVar2 = auVar2 << 0x40;
    }
    else {
      core::ptr::
      drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>
                (&local_78);
      local_78 = ppuVar1;
      local_70 = param_2;
      auVar2 = std::io::copy::generic_copy(&local_78,&local_79);
      if ((auVar2._0_8_ == 0) && (auVar2._8_8_ < param_2)) {
        local_28 = uucore::util_name();
        local_38 = (undefined8 *)local_28;
        local_30 = _<&T_as_core::fmt::Display>::fmt;
        local_68 = (undefined **)&DAT_002618f0;
        local_60 = 2;
        uStack_48 = 0;
        local_58 = &local_38;
        local_50 = 1;
        std::io::stdio::_eprint(&local_68);
        local_68 = &PTR_DAT_00261920;
        local_60 = 1;
        local_58 = (undefined8 **)0x8;
        local_50 = 0;
        uStack_48 = 0;
        std::io::stdio::_eprint(&local_68);
      }
    }
  }
  else {
    local_68 = ppuVar1;
    local_60 = param_2;
    auVar2 = std::io::copy::generic_copy(&local_68,&local_79);
  }
  return auVar2;
}