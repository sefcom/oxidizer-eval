void __rustcall
uu_env::EnvAppData::make_error_no_such_file_or_dir(char param_1,code *param_2,undefined8 param_3)

{
  undefined *local_90;
  undefined8 local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 **local_60;
  code *local_58;
  undefined local_50 [16];
  undefined8 local_40;
  undefined local_38;
  
  local_50 = uucore::util_name();
  local_58 = _<&T_as_core::fmt::Display>::fmt;
  local_90 = &DAT_00249138;
  local_88 = 2;
  local_70 = 0;
  local_78 = 1;
  local_80 = &local_60;
  local_60 = (undefined8 **)local_50;
  std::io::stdio::_eprint(&local_90);
  local_50._0_8_ = (undefined8 **)0x1;
  local_38 = 1;
  local_58 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_90 = &DAT_002491e8;
  local_88 = 2;
  local_70 = 0;
  local_78 = 1;
  local_80 = &local_60;
  local_60 = (undefined8 **)local_50;
  local_50._8_8_ = param_2;
  local_40 = param_3;
  std::io::stdio::_eprint(&local_90);
  if (param_1 == '\0') {
    local_50 = uucore::util_name();
    local_58 = _<&T_as_core::fmt::Display>::fmt;
    local_90 = &DAT_00249138;
    local_88 = 2;
    local_70 = 0;
    local_78 = 1;
    local_80 = &local_60;
    local_60 = (undefined8 **)local_50;
    std::io::stdio::_eprint(&local_90);
    local_50._0_8_ = &PTR_DAT_00249208;
    local_50._8_8_ = _<&T_as_core::fmt::Display>::fmt;
    local_90 = &DAT_00249218;
    local_88 = 2;
    local_70 = 0;
    local_78 = 1;
    local_80 = (undefined8 **)local_50;
    std::io::stdio::_eprint(&local_90);
  }
  uucore::mods::error::ExitCode::new(0x7f);
  return;
}