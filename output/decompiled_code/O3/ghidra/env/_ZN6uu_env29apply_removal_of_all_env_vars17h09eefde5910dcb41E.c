void __rustcall uu_env::apply_removal_of_all_env_vars(long param_1)

{
  undefined local_70 [32];
  long local_50 [6];
  
  if (*(char *)(param_1 + 0x98) != '\0') {
    std::env::vars_os(local_70);
    while( true ) {
                    /* try { // try from 001ce700 to 001ce708 has its CatchHandler @ 001ce753 */
      _<std::env::VarsOs_as_core::iter::traits::iterator::Iterator>::next(local_50,local_70);
      if (local_50[0] == -0x8000000000000000) break;
                    /* try { // try from 001ce710 to 001ce717 has its CatchHandler @ 001ce744 */
      std::env::remove_var(local_50);
                    /* try { // try from 001ce718 to 001ce71f has its CatchHandler @ 001ce753 */
      core::ptr::
      drop_in_place<core::option::Option<(std::ffi::os_str::OsString,std::ffi::os_str::OsString)>>
                (local_50);
    }
                    /* try { // try from 001ce722 to 001ce72b has its CatchHandler @ 001ce742 */
    core::ptr::
    drop_in_place<core::option::Option<(std::ffi::os_str::OsString,std::ffi::os_str::OsString)>>
              (local_50);
    core::ptr::drop_in_place<std::env::VarsOs>(local_70);
  }
  return;
}