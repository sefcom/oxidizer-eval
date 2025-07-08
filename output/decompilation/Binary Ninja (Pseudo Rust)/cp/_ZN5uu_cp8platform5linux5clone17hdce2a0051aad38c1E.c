
  fn uu_cp::platform::linux::clone::hdce2a0051aad38c1(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i8) -> *mut *mut c_void

{
    let mut var_48: i64 = arg1;
    let mut var_38: i64 = arg3;
    let mut var_28: i32;
    std::fs::File::open::h9d5fc688c698f3f4(&var_28, &var_48);
    let var_20: *mut *mut c_void;
    
    if var_28 != 0
    {
        return var_20;
    }
    
    std::fs::File::create::h9e6a42a7892f8117(&var_28, &var_38);
    let fd: i32;
    let mut r14_1: *mut *mut c_void;
    
    if var_28 == 0
    {
        if ioctl(fd, 0x40049409, fd) == 0
        {
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
            r14_1 = nullptr;
        }
        else
        {
            let mut fd_1: i32;
            
            match arg5
            {
                0 =>
                {
                    r14_1 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() << 0x20 | 2;
                    fd_1 = fd;
                }
                1 =>
                {
                    let mut rax_11: *mut *mut c_void;
                    let mut rdx_4: *mut *mut c_void;
                    rax_11 = std::fs::copy::h82e95226cca79e6a(var_48, arg2, var_38);
                    
                    if rax_11 == 0
                    {
                        rdx_4 = rax_11;
                    }
                    
                    r14_1 = rdx_4;
                    fd_1 = fd;
                }
                2 =>
                {
                    fd_1 = fd;
                    r14_1 = uu_cp::platform::linux::sparse_copy::ha5f85eebd4c718f5(var_48, arg2, 
                        var_38);
                }
                3 =>
                {
                    fd_1 = fd;
                    r14_1 = uu_cp::platform::linux::sparse_copy_without_hole::h5128473705372174(
                        var_48, arg2, var_38);
                }
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
        }
    }
    else
    {
        r14_1 = var_20;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
    r14_1
}
