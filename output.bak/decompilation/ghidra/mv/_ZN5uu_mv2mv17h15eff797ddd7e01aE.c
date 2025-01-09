undefined  [16] __rustcall uu_mv::mv(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_60 [8];
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  parse_paths(local_60,param_1,param_2,*(undefined *)(param_3 + 0x32));
  if (*(long *)(param_3 + 0x18) == -0x8000000000000000) {
    if (local_50 == 2) {
                    /* try { // try from 001e9e44 to 001e9e6d has its CatchHandler @ 001e9eec */
      auVar2 = handle_two_paths(*(undefined8 *)(local_58 + 8),*(undefined8 *)(local_58 + 0x10),
                                *(undefined8 *)(local_58 + 0x20),*(undefined8 *)(local_58 + 0x28),
                                param_3);
    }
    else {
                    /* try { // try from 001e9eb5 to 001e9ebc has its CatchHandler @ 001e9eec */
      auVar2 = handle_multiple_paths(local_58,local_50,param_3);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(local_60);
  }
  else {
    std::sys::os_str::bytes::Slice::to_owned
              (&local_30,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
    local_38 = local_20;
    local_48 = local_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
                    /* try { // try from 001e9e87 to 001e9e94 has its CatchHandler @ 001e9edd */
    uVar1 = move_files_into_dir(local_58,local_50,CONCAT44(uStack_24,uStack_28),local_20,param_3);
                    /* try { // try from 001e9e95 to 001e9ea1 has its CatchHandler @ 001e9eec */
    core::ptr::drop_in_place<std::path::PathBuf>(&local_48);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(local_60);
    auVar2._8_8_ = &PTR_drop_in_place<uu_mv_error_MvError>_00287eb8;
    auVar2._0_8_ = uVar1;
  }
  return auVar2;
}