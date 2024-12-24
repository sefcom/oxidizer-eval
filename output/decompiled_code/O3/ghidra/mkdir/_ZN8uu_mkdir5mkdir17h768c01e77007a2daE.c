undefined  [16] __rustcall
uu_mkdir::mkdir(undefined8 param_1,long param_2,undefined param_3,undefined4 param_4,
               undefined param_5)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (param_2 == 0) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec
              (auStack_38,"cannot create directory \'\': No such file or directory: File exists",
               0x35);
    local_20 = 1;
    uVar1 = ::alloc::boxed::Box<T>::new(auStack_38);
    auVar2._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00221880;
    auVar2._0_8_ = uVar1;
  }
  else {
    uucore::features::fs::dir_strip_dot_for_creation(auStack_38,param_1,param_2);
                    /* try { // try from 001b334e to 001b3360 has its CatchHandler @ 001b33ae */
    auVar2 = create_dir(local_30,local_28,param_3,param_5,0,param_4);
    core::ptr::drop_in_place<std::path::PathBuf>(auStack_38);
  }
  return auVar2;
}