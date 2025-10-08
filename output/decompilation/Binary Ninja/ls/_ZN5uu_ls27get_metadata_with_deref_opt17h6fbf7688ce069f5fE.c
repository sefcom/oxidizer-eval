
  int64_t uu_ls::get_metadata_with_deref_opt::h6fbf7688ce069f5f(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    if (arg4)
        /* tailcall */
        return std::fs::metadata::h0f528178d24a74c4(arg1, arg2);
    
    /* tailcall */
    return std::fs::symlink_metadata::h7b40b87fa5e11ee0(arg1, arg2);
}
