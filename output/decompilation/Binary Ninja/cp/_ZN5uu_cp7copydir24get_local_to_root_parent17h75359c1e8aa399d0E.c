
  int64_t uu_cp::copydir::get_local_to_root_parent::h75359c1e8aa399d0(uint64_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4)

{
    if (arg4)
    {
        int64_t* rbx_1 = arg1;
        int64_t result;
        result = std::path::Path::strip_prefix::h5d7e53b0b6c79402(arg2, arg3, arg4);
        
        if (!result)
        {
            *rbx_1 = -0x8000000000000000;
            return result;
        }
        
        arg1 = rbx_1;
        arg2 = result;
    }
    
    /* tailcall */
    return std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(arg1, arg2, arg3);
}
