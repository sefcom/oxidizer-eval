
  uint64_t* uu_cp::backup_dest::hb9d2dd191dda7572(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, uint64_t arg5, int32_t arg6)

{
    uint64_t* result;
    
    if (!arg6)
    {
        int64_t rdx_1;
        result = std::fs::copy::h82e95226cca79e6a(arg2, arg3, arg4);
        
        if (!result)
        {
            result =
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&arg1[1], arg4, arg5);
            *arg1 = 0xd;
        }
        else
        {
            *arg1 = 2;
            arg1[1] = rdx_1;
        }
    }
    else
    {
        result = std::fs::rename::h07c9d3c373504b5f(arg2, arg3, arg4);
        
        if (!result)
        {
            result =
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&arg1[1], arg4, arg5);
            *arg1 = 0xd;
        }
        else
        {
            *arg1 = 2;
            arg1[1] = result;
        }
    }
    
    return result;
}
