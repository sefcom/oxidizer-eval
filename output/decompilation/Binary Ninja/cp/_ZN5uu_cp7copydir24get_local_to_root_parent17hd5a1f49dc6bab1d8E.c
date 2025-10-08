
  int64_t uu_cp::copydir::get_local_to_root_parent::hd5a1f49dc6bab1d8(uint64_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4)

{
    if (arg4)
    {
        int64_t* rbx_1 = arg1;
        int64_t result;
        result = std::path::Path::strip_prefix::hf232be0ca9110327(arg2, arg3, arg4);
        
        if (!result)
        {
            *rbx_1 = -0x8000000000000000;
            return result;
        }
        
        arg1 = rbx_1;
        arg2 = result;
    }
    
    /* tailcall */
    return std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(arg1, arg2, arg3);
}
