undefined8 * __rustcall uu_base32::base_common::get_input(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined auVar3 [12];
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28 [2];
  
  if (*(long *)(param_2 + 0x10) == -0x8000000000000000) {
    local_28[0] = std::io::stdio::stdin();
    auVar3 = std::io::stdio::Stdin::lock(local_28);
    local_38 = ::alloc::boxed::Box<T>::new(auVar3._0_8_,auVar3._8_4_ & 1);
    ppuVar1 = &PTR_drop_in_place<std_io_stdio_StdinLock>_00249738;
  }
  else {
    std::fs::File::open(local_28);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_38,local_28,param_2 + 0x10);
    if (local_38 != 0) {
      ppuVar1 = (undefined **)CONCAT44(uStack_2c,local_30);
      uVar2 = 1;
      goto LAB_001c18d2;
    }
    local_38 = ::alloc::boxed::Box<T>::new(local_30);
    ppuVar1 = &PTR_drop_in_place<std_fs_File>_00249790;
  }
  uVar2 = 0;
LAB_001c18d2:
  param_1[1] = local_38;
  param_1[2] = ppuVar1;
  *param_1 = uVar2;
  return param_1;
}