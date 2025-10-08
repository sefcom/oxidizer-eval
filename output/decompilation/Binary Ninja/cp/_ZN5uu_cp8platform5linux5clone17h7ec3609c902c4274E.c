
  void** uu_cp::platform::linux::clone::h7ec3609c902c4274(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_48 = arg1;
    int64_t var_38 = arg3;
    int32_t var_28;
    std::fs::File::open::hcf22eb549d8d01fb(&var_28, &var_48);
    void** var_20;
    
    if (var_28 == 1)
        return var_20;
    
    std::fs::File::create::h58d01e5b7dba4806(&var_28, &var_38);
    int32_t fd;
    void** r14_1;
    
    if (var_28 != 1)
    {
        if (!ioctl(fd, 0x40049409, fd))
        {
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
            r14_1 = nullptr;
        }
        else
        {
            switch (arg5)
            {
                case 0:
                {
                    r14_1 = *__errno_location() << 0x20 | 2;
                    break;
                }
                case 1:
                {
                    char rax_8;
                    void** rdx_4;
                    rax_8 = std::fs::copy::h705af7a8cd89b11d(var_48, arg2, var_38);
                    r14_1 = nullptr;
                    
                    if (rax_8 & 1)
                        r14_1 = rdx_4;
                    break;
                }
                case 2:
                {
                    r14_1 = uu_cp::platform::linux::sparse_copy::h236dad6108a5e89b(var_48, arg2, 
                        var_38);
                    break;
                }
                case 3:
                {
                    r14_1 = uu_cp::platform::linux::sparse_copy_without_hole::h2d9392879b3e0cb0(
                        var_48, arg2, var_38);
                    break;
                }
            }
            
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
        }
    }
    else
        r14_1 = var_20;
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
    return r14_1;
}
