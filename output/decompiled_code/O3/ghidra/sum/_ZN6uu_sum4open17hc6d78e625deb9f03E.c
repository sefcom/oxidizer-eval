undefined8 * __rustcall uu_sum::open(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 *local_128;
  code *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_100;
  long local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                    (param_2,param_3,"-: No such file or directory",1);
  if (cVar1 != '\0') {
    uVar2 = std::io::stdio::stdin();
    uVar2 = ::alloc::boxed::Box<T>::new(uVar2);
    param_1[1] = uVar2;
    ppuVar3 = (undefined **)&DAT_00212548;
LAB_001ad0b9:
    param_1[2] = ppuVar3;
    *param_1 = 0;
    return param_1;
  }
  local_d8 = param_2;
  local_d0 = param_3;
  cVar1 = std::path::Path::is_dir(param_2,param_3);
  if (cVar1 == '\0') {
    std::fs::metadata(&local_c8,param_2,param_3);
    if (local_c8 != (undefined *)0x2) {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (local_c8,local_c0);
      std::fs::File::open(&local_c8,&local_d8);
      _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
      ::map_err_context(&local_f8,&local_c8);
      if (local_f8 == 0) {
        uVar2 = ::alloc::boxed::Box<T>::new(local_f0);
        param_1[1] = uVar2;
        ppuVar3 = &PTR_drop_in_place<std_fs_File>_00212448;
        goto LAB_001ad0b9;
      }
      ppuVar3 = (undefined **)CONCAT44(uStack_ec,local_f0);
      goto LAB_001ad1cf;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (2,local_c0);
    local_c8 = &DAT_00212428;
  }
  else {
    local_c8 = &DAT_00212408;
  }
  local_128 = &local_118;
  local_100 = 0;
  local_118 = 0;
  local_120 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_c0 = 2;
  local_a8 = 0;
  local_b0 = 1;
  local_110 = param_2;
  local_108 = param_3;
  local_b8 = (undefined *)&local_128;
  core::option::Option<T>::map_or_else(&local_f8,&local_c8);
  local_e0 = 2;
  local_f8 = ::alloc::boxed::Box<T>::new(&local_f8);
  ppuVar3 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002124d8;
LAB_001ad1cf:
  param_1[1] = local_f8;
  param_1[2] = ppuVar3;
  *param_1 = 1;
  return param_1;
}