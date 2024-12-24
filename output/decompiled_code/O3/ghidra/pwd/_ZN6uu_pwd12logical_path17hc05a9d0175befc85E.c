long * __rustcall uu_pwd::logical_path(long *param_1)

{
  char cVar1;
  long local_40;
  long lStack_38;
  long local_30;
  long local_28 [3];
  
  std::env::var_os(local_28,"PWD",3);
  if (local_28[0] == -0x8000000000000000) {
    local_40 = -0x8000000000000000;
  }
  else {
    core::ops::function::FnOnce::call_once(&local_40,local_28);
                    /* try { // try from 001a61b8 to 001a61dc has its CatchHandler @ 001a61f9 */
    if ((local_40 != -0x8000000000000000) &&
       (cVar1 = logical_path::looks_reasonable(lStack_38,local_30), cVar1 != '\0')) {
      param_1[2] = local_30;
      *param_1 = local_40;
      param_1[1] = lStack_38;
      return param_1;
    }
  }
  std::env::current_dir(param_1);
  if (local_40 != -0x8000000000000000) {
    core::ptr::drop_in_place<std::path::PathBuf>(&local_40);
  }
  return param_1;
}