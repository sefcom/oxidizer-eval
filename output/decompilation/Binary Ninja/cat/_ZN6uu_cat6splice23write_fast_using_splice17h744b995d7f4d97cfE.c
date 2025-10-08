
  uint64_t uu_cat::splice::write_fast_using_splice::h744b995d7f4d97cf(int64_t* arg1, int32_t* arg2)

{
    uint64_t result = uucore::features::pipes::pipe::h49247394f7e7f0ce();
    uint32_t fd_2 = result >> 0x20;
    
    if (result == 0xffffffff)
    {
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = fd_2;
        return result;
    }
    
    int32_t fd = result;
    uint32_t fd_1 = fd_2;
    
    while (true)
    {
        int32_t var_40;
        nix::fcntl::splice::h4fd2eb8ee00667a9(&var_40, arg2, &fd_1);
        uint64_t var_38;
        
        if (var_40 == 1)
            arg1[1] = 1;
        else if (!var_38)
            arg1[1] = 0;
        else
        {
            if (uucore::features::pipes::splice_exact::h47606a97f60e2947(&fd, var_38) == 0x86)
                continue;
            
            int32_t rax_1 = uu_cat::splice::copy_exact::hb9a3658d2a5b3f83(fd, var_38);
            
            if (rax_1 != 0x86)
            {
                *arg1 = -0x7fffffffffffffff;
                arg1[1] = rax_1;
            }
            else
            {
                arg1[1] = 1;
                *arg1 = -0x7ffffffffffffffa;
            }
            
            break;
        }
        *arg1 = -0x7ffffffffffffffa;
        break;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::hb12cd77b3305f064(fd_1);
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::hb12cd77b3305f064(fd);
}
