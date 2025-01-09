void __rustcall
uu_tail::follow::files::FileHandling::canonicalize_path
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long local_30;
  long lStack_28;
  long local_20;
  
  cVar1 = std::path::Path::is_absolute(param_2,param_3);
  if ((cVar1 == '\0') &&
     (cVar1 = _<std::path::Path_as_uu_tail::paths::PathExtTail>::is_stdin(param_2,param_3),
     cVar1 == '\0')) {
    std::fs::canonicalize(&local_30,param_2,param_3);
    if (local_30 != -0x8000000000000000) {
      param_1[2] = local_20;
      *param_1 = local_30;
      param_1[1] = lStack_28;
      return;
    }
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
              (&local_30);
  }
  std::sys::pal::unix::os::split_paths::bytes_to_path(param_1,param_2,param_3);
  return;
}