
  void** uu_cp::platform::linux::clone::hdce2a0051aad38c1(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_48 = arg1;
    int64_t var_38 = arg3;
    int32_t var_28;
    std::fs::File::open::h9d5fc688c698f3f4(&var_28, &var_48);
    void** var_20;
    
    if (var_28)
        return var_20;
    
    std::fs::File::create::h9e6a42a7892f8117(&var_28, &var_38);
    int32_t fd;
    void** r14_1;
    
    if (!var_28)
    {
        if (!ioctl(fd, 0x40049409, fd))
        {
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
            r14_1 = nullptr;
        }
        else
        {
            int32_t fd_1;
            
            switch (arg5)
            {
                case 0:
                {
                    r14_1 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() << 0x20 | 2;
                    fd_1 = fd;
                    break;
                }
                case 1:
                {
                    void** rax_11;
                    void** rdx_4;
                    rax_11 = std::fs::copy::h82e95226cca79e6a(var_48, arg2, var_38);
                    
                    if (!rax_11)
                        rdx_4 = rax_11;
                    
                    r14_1 = rdx_4;
                    fd_1 = fd;
                    break;
                }
                case 2:
                {
                    fd_1 = fd;
                    r14_1 = uu_cp::platform::linux::sparse_copy::ha5f85eebd4c718f5(var_48, arg2, 
                        var_38);
                    break;
                }
                case 3:
                {
                    fd_1 = fd;
                    r14_1 = uu_cp::platform::linux::sparse_copy_without_hole::h5128473705372174(
                        var_48, arg2, var_38);
                    break;
                }
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
        }
    }
    else
        r14_1 = var_20;
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
    return r14_1;
}
