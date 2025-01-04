undefined8 __rustcall
uu_ls::get_metadata_with_deref_opt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 0) {
    std::fs::symlink_metadata();
  }
  else {
    std::fs::metadata();
  }
  return param_1;
}