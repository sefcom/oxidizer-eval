void __rustcall uu_unexpand::open(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  cVar1 = std::path::Path::is_dir(param_2,param_3);
  if (cVar1 != '\0') {
    local_70 = &local_60;
    local_68 = _<std::path::Display_as_core::fmt::Display>::fmt;
    local_50 = &DAT_0021eb80;
    local_48 = 2;
    local_30 = 0;
    local_40 = &local_70;
    local_38 = 1;
    local_60 = param_2;
    local_58 = param_3;
    core::option::Option<T>::map_or_else(&local_90,&local_50);
    local_78 = 1;
    uVar2 = ::alloc::boxed::Box<T>::new(&local_90);
    param_1[1] = uVar2;
    param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0021ebd8;
LAB_001b357b:
    *param_1 = 0;
    return;
  }
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    std::fs::File::open(&local_50,param_2,param_3);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_90,&local_50,param_2,param_3);
    if (local_90 != 0) {
      param_1[1] = local_90;
      param_1[2] = CONCAT44(uStack_84,local_88);
      goto LAB_001b357b;
    }
    uVar2 = ::alloc::boxed::Box<T>::new(local_88);
    ppuVar3 = &PTR_drop_in_place<std_fs_File>_0021ead0;
  }
  else {
    uVar2 = std::io::stdio::stdin();
    uVar2 = ::alloc::boxed::Box<T>::new(uVar2);
    ppuVar3 = (undefined **)&DAT_0021eb28;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(param_1,0x2000,uVar2,ppuVar3);
  return;
}