undefined8 * __rustcall
uu_join::State::new(undefined8 *param_1,undefined param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined param_7,undefined param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined auVar4 [12];
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined local_60 [48];
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_3,param_4,"-",1);
  if (cVar1 == '\0') {
    std::fs::File::open(local_60,param_3,param_4);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_70,local_60,param_3,param_4);
    if (local_70 != 0) {
      param_1[1] = local_70;
      param_1[2] = CONCAT44(uStack_64,local_68);
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    std::io::buffered::bufreader::BufReader<R>::with_capacity(local_60,0x2000,local_68);
    uVar2 = ::alloc::boxed::Box<T>::new(local_60);
    ppuVar3 = &PTR_drop_in_place<std_io_buffered_bufreader_BufReader<std_fs_File>>_00235ee0;
  }
  else {
    auVar4 = std::io::stdio::Stdin::lock(param_5);
    uVar2 = ::alloc::boxed::Box<T>::new(auVar4._0_8_,auVar4._8_4_ & 1);
    ppuVar3 = &PTR_drop_in_place<std_io_stdio_StdinLock>_00235f68;
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = uVar2;
  param_1[6] = ppuVar3;
  *(undefined *)(param_1 + 7) = param_7;
  param_1[8] = param_6;
  param_1[9] = 1;
  param_1[10] = 0;
  *(undefined *)(param_1 + 0xb) = param_2;
  *(undefined *)((long)param_1 + 0x59) = param_8;
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  return param_1;
}