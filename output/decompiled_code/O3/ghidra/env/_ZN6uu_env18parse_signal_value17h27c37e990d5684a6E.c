void __rustcall
uu_env::parse_signal_value(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48;
  undefined local_40 [16];
  undefined8 local_30;
  
  ::alloc::str::_<impl_str>::to_uppercase(local_88);
                    /* try { // try from 001cc41e to 001cc4d7 has its CatchHandler @ 001cc503 */
  auVar2 = uucore::features::signals::signal_by_name_or_value(local_80,local_78);
  local_60 = 0;
  local_48 = 1;
  local_70 = &local_60;
  local_68 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_b8 = &DAT_00249070;
  uStack_b0 = 2;
  local_98 = 0;
  local_a8 = &local_70;
  local_a0 = 1;
  local_58 = param_2;
  local_50 = param_3;
  core::option::Option<T>::map_or_else(local_40,&local_b8);
  local_a0 = CONCAT44(local_a0._4_4_,0x7d);
  local_a8 = (undefined8 **)local_30;
  uVar1 = ::alloc::boxed::Box<T>::new(&local_b8);
  if ((auVar2._0_8_ == 0) || (auVar2._8_8_ == 0)) {
    *param_1 = uVar1;
    param_1[1] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002490c8;
  }
  else {
    param_1[1] = auVar2._8_8_;
    *param_1 = 0;
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>(uVar1);
  }
  core::ptr::drop_in_place<alloc::string::String>(local_88);
  return;
}