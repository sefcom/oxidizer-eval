
  fn uu_cp::platform::linux::clone::h7ec3609c902c4274(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i8) -> *mut *mut c_void

{
    let mut var_48: i64 = arg1;
    let mut var_38: i64 = arg3;
    let mut var_28: i32;
    std::fs::File::open::hcf22eb549d8d01fb(&var_28, &var_48);
    let var_20: *mut *mut c_void;
    
    if var_28 == 1
    {
        return var_20;
    }
    
    std::fs::File::create::h58d01e5b7dba4806(&var_28, &var_38);
    let fd: i32;
    let mut r14_1: *mut *mut c_void;
    
    if var_28 != 1
    {
        if ioctl(fd, 0x40049409, fd) == 0
        {
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
            r14_1 = nullptr;
        }
        else
        {
            match arg5
            {
                0 =>
                {
                    r14_1 = *__errno_location() << 0x20 | 2;
                }
                1 =>
                {
                    let mut rax_8: i8;
                    let mut rdx_4: *mut *mut c_void;
                    rax_8 = std::fs::copy::h705af7a8cd89b11d(var_48, arg2, var_38);
                    r14_1 = nullptr;
                    
                    if (rax_8 & 1) != 0
                    {
                        r14_1 = rdx_4;
                    }
                }
                2 =>
                {
                    r14_1 = uu_cp::platform::linux::sparse_copy::h236dad6108a5e89b(var_48, arg2, 
                        var_38);
                }
                3 =>
                {
                    r14_1 = uu_cp::platform::linux::sparse_copy_without_hole::h2d9392879b3e0cb0(
                        var_48, arg2, var_38);
                }
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
        }
    }
    else
    {
        r14_1 = var_20;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
    r14_1
}
