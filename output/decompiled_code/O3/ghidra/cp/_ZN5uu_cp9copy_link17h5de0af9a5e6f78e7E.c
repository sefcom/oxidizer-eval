undefined8 * __rustcall
uu_cp::copy_link(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  std::fs::read_link(&local_38);
  if (local_38 != -0x8000000000000000) {
    local_50 = local_38;
    local_48 = local_30;
    local_40 = local_28;
                    /* try { // try from 00207e0b to 00207e62 has its CatchHandler @ 00207e7c */
    cVar1 = std::path::Path::is_symlink(param_4,param_5);
    if (((cVar1 == '\0') && (cVar1 = std::path::Path::is_file(param_4,param_5), cVar1 == '\0')) ||
       (lVar2 = std::fs::remove_file(param_4,param_5), lVar2 == 0)) {
      symlink_file(param_1,local_48,local_40,param_4,param_5,param_6);
    }
    else {
      *param_1 = 2;
      param_1[1] = lVar2;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&local_50);
    return param_1;
  }
  *param_1 = 2;
  param_1[1] = local_30;
  return param_1;
}