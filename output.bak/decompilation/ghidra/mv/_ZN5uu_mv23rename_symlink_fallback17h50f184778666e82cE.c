void __rustcall
uu_mv::rename_symlink_fallback
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  std::fs::read_link(&local_50,param_1,param_2);
  if (local_50 != -0x8000000000000000) {
    local_38 = local_50;
    local_30 = local_48;
    local_28 = local_40;
    lVar1 = std::os::unix::fs::symlink(&local_38,param_3,param_4);
    if (lVar1 == 0) {
      std::fs::remove_file(param_1,param_2);
      return;
    }
  }
  return;
}