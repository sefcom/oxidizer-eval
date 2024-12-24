void __rustcall
uu_dd::Output::discard_cache(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined local_78 [16];
  undefined local_68 [16];
  undefined8 *local_58;
  code *local_50;
  undefined *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar1 = Dest::discard_cache(*param_1,param_1[1],param_2,param_3);
  local_78 = _<core::result::Result<T,nix::errno::consts::Errno>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
             ::map_err_context(uVar1);
  if (local_78._0_8_ != 0) {
                    /* try { // try from 001d7cf0 to 001d7d73 has its CatchHandler @ 001d7d88 */
    uVar1 = (**(code **)(local_78._8_8_ + 0x60))(local_78._0_8_);
    uucore::mods::error::set_exit_code(uVar1);
    local_68 = uucore::util_name();
    local_58 = (undefined8 *)local_68;
    local_50 = _<&T_as_core::fmt::Display>::fmt;
    local_40 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
    local_38 = &DAT_00261940;
    local_30 = 3;
    local_18 = 0;
    local_28 = &local_58;
    local_20 = 2;
    local_48 = local_78;
    std::io::stdio::_eprint(&local_38);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
              (local_78._0_8_,local_78._8_8_);
  }
  return;
}