void __rustcall uu_env::apply_removal_of_all_env_vars(long param_1)

{
  undefined local_70 [32];
  long local_50 [6];
  
  if (*(char *)(param_1 + 0x98) != '\0') {
    std::env::vars_os(local_70);
    while( true ) {
                    /* try { // try from 001ce5d0 to 001ce5d8 has its CatchHandler @ 001ce623 */
      _<std::env::VarsOs_as_core::iter::traits::iterator::Iterator>::next(local_50,local_70);
      if (local_50[0] == -0x8000000000000000) break;
                    /* try { // try from 001ce5e0 to 001ce5e7 has its CatchHandler @ 001ce614 */
      std::env::remove_var(local_50);
                    /* try { // try from 001ce5e8 to 001ce5ef has its CatchHandler @ 001ce623 */
      core::ptr::
      drop_in_place<core::option::Option<(std::ffi::os_str::OsString,std::ffi::os_str::OsString)>>
                (local_50);
    }
                    /* try { // try from 001ce5f2 to 001ce5fb has its CatchHandler @ 001ce612 */
    core::ptr::
    drop_in_place<core::option::Option<(std::ffi::os_str::OsString,std::ffi::os_str::OsString)>>
              (local_50);
    core::ptr::drop_in_place<std::env::VarsOs>(local_70);
  }
  return;
}