
  fn uu_cp::copydir::get_local_to_root_parent::h75359c1e8aa399d0(arg1: *mut u64, arg2: i64, arg3: u64, arg4: i64) -> i64

{
    if arg4 != 0
    {
        let rbx_1: *mut i64 = arg1;
        let mut result: i64;
        result = std::path::Path::strip_prefix::h5d7e53b0b6c79402(arg2, arg3, arg4);
        
        if result == 0
        {
            *rbx_1 = -0x8000000000000000;
            return result;
        }
        
        arg1 = rbx_1;
        arg2 = result;
    }
    
    /* tailcall */
    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(arg1, arg2, arg3)
}
