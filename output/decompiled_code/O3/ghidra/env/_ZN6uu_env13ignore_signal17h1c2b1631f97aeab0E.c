undefined8 __rustcall uu_env::ignore_signal(undefined4 param_1)

{
  undefined8 uVar1;
  undefined4 local_9c;
  int local_98 [2];
  undefined4 local_90;
  undefined local_88 [16];
  undefined4 *local_78;
  code *local_70;
  undefined *local_68;
  code *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined4 **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_28 [24];
  undefined4 local_10;
  
  nix::sys::signal::signal(local_98,param_1,1);
  if (local_98[0] == 4) {
    local_9c = param_1;
    local_88 = nix::errno::_<impl_nix::errno::consts::Errno>::desc(local_90);
    local_78 = &local_9c;
    local_70 = core::fmt::num::imp::_<impl_core::fmt::Display_for_i32>::fmt;
    local_68 = local_88;
    local_60 = _<&T_as_core::fmt::Display>::fmt;
    local_58 = &PTR_DAT_00249418;
    local_50 = 2;
    local_38 = 0;
    local_48 = &local_78;
    local_40 = 2;
    core::option::Option<T>::map_or_else(local_28,&local_58);
    local_10 = 0x7d;
    uVar1 = ::alloc::boxed::Box<T>::new(local_28);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}