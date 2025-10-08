
  fn uu_ls::get_metadata_with_deref_opt::h6fbf7688ce069f5f(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i32) -> i64

{
    if arg4 != 0
    {
        /* tailcall */
        return std::fs::metadata::h0f528178d24a74c4(arg1, arg2);
    }
    
    /* tailcall */
    std::fs::symlink_metadata::h7b40b87fa5e11ee0(arg1, arg2)
}
