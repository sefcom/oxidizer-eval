undefined8 __rustcall uu_readlink::show(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  char local_69;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  char *local_38;
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_68,param_1,param_2);
  if (local_68 == (undefined *)0x0) {
    local_28 = (undefined4)local_60;
    uStack_24 = local_60._4_4_;
    uStack_20 = (undefined4)uStack_58;
    uStack_1c = uStack_58._4_4_;
    local_38 = (char *)&local_28;
    local_30 = _<&T_as_core::fmt::Display>::fmt;
    local_68 = &DAT_001140f0;
    local_60 = 1;
    local_48 = 0;
    local_50 = 1;
    uStack_58 = &local_38;
    std::io::stdio::_print(&local_68);
    if (param_3 != '\v') {
      local_38 = &local_69;
      local_30 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
      local_68 = &DAT_001140f0;
      local_60 = 1;
      local_48 = 0;
      local_50 = 1;
      local_69 = param_3;
      uStack_58 = &local_38;
      std::io::stdio::_print(&local_68);
    }
    local_68 = (undefined *)std::io::stdio::stdout();
    uVar1 = _<std::io::stdio::Stdout_as_std::io::Write>::flush(&local_68);
    return uVar1;
  }
  ppuVar2 = &PTR_s_src_uu_readlink_src_readlink_rs_0021be18;
  core::option::unwrap_failed();
  if (ppuVar2 < (undefined **)0x5) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_end_index_len_fail();
}