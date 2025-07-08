
  fn uu_cp::backup_dest::hb9d2dd191dda7572(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: u64, arg6: i32) -> *mut u64

{
    let mut result: *mut u64;
    
    if arg6 == 0
    {
        let mut rdx_1: i64;
        result = std::fs::copy::h82e95226cca79e6a(arg2, arg3, arg4);
        
        if result == 0
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
        
        if result == 0
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
    
    result
}
