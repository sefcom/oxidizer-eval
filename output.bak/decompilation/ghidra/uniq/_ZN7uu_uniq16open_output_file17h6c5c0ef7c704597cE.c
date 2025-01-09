undefined8 * __rustcall
uu_uniq::open_output_file(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40 [4];
  
  if (param_2 == 0) {
LAB_001bf0a4:
    local_40[0] = std::io::stdio::stdout();
    uVar2 = std::io::stdio::Stderr::lock(local_40);
    local_50 = ::alloc::boxed::Box<T>::new(uVar2);
    ppuVar3 = &PTR_drop_in_place<std_io_stdio_StdoutLock>_002306d0;
  }
  else {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"-",1);
    if (cVar1 != '\0') goto LAB_001bf0a4;
    std::fs::File::create(local_40,param_2,param_3);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_50,local_40,param_2,param_3);
    if (local_50 != 0) {
      ppuVar3 = (undefined **)CONCAT44(uStack_44,local_48);
      uVar2 = 1;
      goto LAB_001bf0cb;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_40,0x2000,local_48);
    local_50 = ::alloc::boxed::Box<T>::new(local_40);
    ppuVar3 = &PTR_drop_in_place<std_io_buffered_bufwriter_BufWriter<std_fs_File>>_00230680;
  }
  uVar2 = 0;
LAB_001bf0cb:
  param_1[1] = local_50;
  param_1[2] = ppuVar3;
  *param_1 = uVar2;
  return param_1;
}