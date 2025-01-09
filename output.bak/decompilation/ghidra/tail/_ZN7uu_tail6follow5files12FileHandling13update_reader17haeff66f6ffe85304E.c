undefined8 __rustcall
uu_tail::follow::files::FileHandling::update_reader
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined local_48 [48];
  
  lVar2 = get_mut();
  std::fs::File::open(&local_58,param_2,param_3);
  if (local_58 == 0) {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(local_48,0x2000,local_54);
    uVar4 = ::alloc::boxed::Box<T>::new(local_48);
    uVar3 = *(undefined8 *)(lVar2 + 200);
    uVar1 = *(undefined8 *)(lVar2 + 0xd0);
    *(undefined8 *)(lVar2 + 200) = uVar4;
    *(undefined ***)(lVar2 + 0xd0) =
         &PTR_drop_in_place<std_io_buffered_bufreader_BufReader<std_fs_File>>_002bc4c8;
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn_std::io::BufRead>>>
              (uVar3,uVar1);
    uVar3 = 0;
  }
  else {
    uVar3 = uucore::mods::error::
            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
            ::from(local_50);
  }
  return uVar3;
}