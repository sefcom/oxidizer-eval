void __rustcall uu_dd::parseargs::show_zero_multiplier_warning(void)

{
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined local_60;
  undefined local_58 [16];
  undefined8 local_48;
  undefined local_40;
  undefined8 **local_38;
  code *local_30;
  undefined8 *local_28;
  code *local_20;
  
  local_58 = uucore::util_name();
  local_70 = _<&T_as_core::fmt::Display>::fmt;
  local_a8 = &DAT_00261768;
  local_a0 = 2;
  local_88 = 0;
  local_90 = 1;
  local_98 = &local_78;
  local_78 = (undefined8 *)local_58;
  std::io::stdio::_eprint(&local_a8);
  local_78 = (undefined8 *)0x0;
  local_70 = (code *)0x1230cd;
  local_68 = 2;
  local_60 = 1;
  local_58._0_8_ = 0;
  local_58._8_8_ = "00x is a zero multiplier; use  if that is intended\n";
  local_48 = 3;
  local_40 = 1;
  local_30 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_20 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_a8 = &DAT_00261788;
  local_a0 = 3;
  local_88 = 0;
  local_98 = &local_38;
  local_90 = 2;
  local_38 = &local_78;
  local_28 = (undefined8 *)local_58;
  std::io::stdio::_eprint(&local_a8);
  return;
}