undefined8 * __rustcall
uu_shuf::read_input_file(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined auVar4 [16];
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined local_58 [56];
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    std::fs::File::open(&local_70,param_2,param_3);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_80,&local_70,param_2,param_3);
    if (local_80 != 0) {
      param_1[1] = local_80;
      param_1[2] = CONCAT44(uStack_74,local_78);
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    uVar2 = ::alloc::boxed::Box<T>::new(local_78);
    ppuVar3 = &PTR_drop_in_place<std_fs_File>_00237cc8;
  }
  else {
    uVar2 = std::io::stdio::stdin();
    uVar2 = ::alloc::boxed::Box<T>::new(uVar2);
    ppuVar3 = (undefined **)&DAT_00237d20;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(local_58,0x2000,uVar2,ppuVar3);
  local_70 = 0;
  uStack_68 = 1;
  local_60 = 0;
                    /* try { // try from 001c12e5 to 001c1304 has its CatchHandler @ 001c1364 */
  auVar4 = _<std::io::buffered::bufreader::BufReader<R>as_std::io::Read>::read_to_end
                     (local_58,&local_70);
  _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
  ::map_err_context(&local_80,auVar4._0_8_,auVar4._8_8_,param_2,param_3);
  if (local_80 == 0) {
    param_1[2] = local_60;
    *(undefined4 *)param_1 = (undefined4)local_70;
    *(undefined4 *)((long)param_1 + 4) = local_70._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_68;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_68._4_4_;
  }
  else {
    param_1[1] = local_80;
    param_1[2] = CONCAT44(uStack_74,local_78);
    *param_1 = 0x8000000000000000;
                    /* try { // try from 001c1329 to 001c1332 has its CatchHandler @ 001c135f */
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_70);
  }
  core::ptr::
  drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
            (local_58);
  return param_1;
}