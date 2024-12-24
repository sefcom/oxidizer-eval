void __rustcall
uu_join::parse_field_number(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char local_a8;
  char local_a7;
  long local_a0;
  undefined8 *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_38 [24];
  undefined4 local_20;
  
  core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_a8);
  if (local_a8 == '\0') {
    if (local_a0 != 0) {
      param_1[1] = local_a0 + -1;
      *param_1 = 0;
      return;
    }
  }
  else if (local_a7 == '\x02') {
    param_1[1] = 0xffffffffffffffff;
    *param_1 = 0;
    return;
  }
  local_88 = 0;
  local_70 = 1;
  local_98 = &local_88;
  local_90 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_68 = &DAT_00236050;
  local_60 = 1;
  local_48 = 0;
  local_58 = &local_98;
  local_50 = 1;
  local_80 = param_2;
  local_78 = param_3;
  core::option::Option<T>::map_or_else(local_38,&local_68);
  local_20 = 1;
  uVar1 = ::alloc::boxed::Box<T>::new(local_38);
  *param_1 = uVar1;
  param_1[1] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00235e48;
  return;
}