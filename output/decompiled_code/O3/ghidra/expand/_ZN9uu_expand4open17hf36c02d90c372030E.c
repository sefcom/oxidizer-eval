void __rustcall uu_expand::open(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined local_30 [16];
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,&DAT_0011d32b,1);
  if (cVar1 == '\0') {
    std::fs::File::open(local_30,param_2,param_3);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_40,local_30,param_2,param_3);
    if (local_40 != 0) {
      param_1[1] = local_40;
      param_1[2] = CONCAT44(uStack_34,local_38);
      *param_1 = 0;
      return;
    }
    uVar2 = ::alloc::boxed::Box<T>::new(local_38);
    ppuVar3 = &PTR_drop_in_place<std_fs_File>_0021eca0;
  }
  else {
    uVar2 = std::io::stdio::stdin();
    uVar2 = ::alloc::boxed::Box<T>::new(uVar2);
    ppuVar3 = (undefined **)&DAT_0021ecf8;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(param_1,0x2000,uVar2,ppuVar3);
  return;
}