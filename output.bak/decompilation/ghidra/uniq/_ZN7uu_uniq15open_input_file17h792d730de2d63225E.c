undefined8 * __rustcall
uu_uniq::open_input_file(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined auVar4 [12];
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50 [6];
  
  if (param_2 == 0) {
LAB_001befc4:
    local_50[0] = std::io::stdio::stdin();
    auVar4 = std::io::stdio::Stdin::lock(local_50);
    local_60 = ::alloc::boxed::Box<T>::new(auVar4._0_8_,auVar4._8_4_ & 1);
    ppuVar2 = &PTR_drop_in_place<std_io_stdio_StdinLock>_002305f8;
  }
  else {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"-",1);
    if (cVar1 != '\0') goto LAB_001befc4;
    std::fs::File::open(local_50,param_2,param_3);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_60,local_50,param_2,param_3);
    if (local_60 != 0) {
      ppuVar2 = (undefined **)CONCAT44(uStack_54,local_58);
      uVar3 = 1;
      goto LAB_001beff1;
    }
    std::io::buffered::bufreader::BufReader<R>::with_capacity(local_50,0x2000,local_58);
    local_60 = ::alloc::boxed::Box<T>::new(local_50);
    ppuVar2 = &PTR_drop_in_place<std_io_buffered_bufreader_BufReader<std_fs_File>>_00230570;
  }
  uVar3 = 0;
LAB_001beff1:
  param_1[1] = local_60;
  param_1[2] = ppuVar2;
  *param_1 = uVar3;
  return param_1;
}