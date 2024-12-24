undefined  [16] __rustcall
uu_touch::update_times
          (undefined8 param_1,undefined8 param_2,char param_3,char param_4,char param_5,
          undefined8 param_6,uint param_7,undefined8 param_8,undefined4 param_9)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  long local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined local_58 [40];
  
  uVar2 = (ulong)param_7;
  if (param_5 == '\0') {
    local_60 = param_6;
    stat(local_58,param_1,param_2,param_4 == '\0');
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_88,local_58,param_1,param_2);
    auVar3._8_8_ = local_78;
    auVar3._0_8_ = local_80;
    param_8 = local_70;
    param_9 = local_68;
    param_6 = local_60;
  }
  else {
    if (param_5 != '\x01') goto LAB_002c295f;
    stat(local_58,param_1,param_2,param_4 == '\0');
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_88,local_58,param_1,param_2);
    auVar3._8_8_ = local_78;
    auVar3._0_8_ = local_80;
    uVar2 = local_78;
    param_6 = local_80;
  }
  if (local_88 != 0) {
    return auVar3;
  }
LAB_002c295f:
  if ((param_4 == '\0') || (param_3 != '\0')) {
    uVar1 = filetime::set_file_times(param_1,param_2,param_6,uVar2 & 0xffffffff,param_8,param_9);
  }
  else {
    uVar1 = filetime::set_symlink_file_times
                      (param_1,param_2,param_6,uVar2 & 0xffffffff,param_8,param_9);
  }
  auVar3 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
           ::map_err_context(uVar1,param_1,param_2);
  return auVar3;
}