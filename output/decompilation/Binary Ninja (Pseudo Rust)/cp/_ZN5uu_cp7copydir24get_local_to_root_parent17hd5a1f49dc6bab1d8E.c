
  fn uu_cp::copydir::get_local_to_root_parent::hd5a1f49dc6bab1d8(arg1: *mut u64, arg2: i64, arg3: u64, arg4: i64) -> i64

{
    if arg4 != 0
    {
        let rbx_1: *mut i64 = arg1;
        let mut result: i64;
        result = std::path::Path::strip_prefix::hf232be0ca9110327(arg2, arg3, arg4);
        
        if result == 0
        {
            *rbx_1 = -0x8000000000000000;
            return result;
        }
        
        arg1 = rbx_1;
        arg2 = result;
    }
    
    /* tailcall */
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(arg1, arg2, arg3)
}
