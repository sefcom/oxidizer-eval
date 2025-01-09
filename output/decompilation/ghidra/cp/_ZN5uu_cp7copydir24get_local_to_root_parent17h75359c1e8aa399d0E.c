void __rustcall
uu_cp::copydir::get_local_to_root_parent
          (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  if ((param_4 != 0) &&
     (param_2 = std::path::Path::strip_prefix(param_2,param_3,param_4,param_5), param_2 == 0)) {
    *param_1 = 0x8000000000000000;
    return;
  }
  std::sys::pal::unix::os::split_paths::bytes_to_path(param_1,param_2);
  return;
}