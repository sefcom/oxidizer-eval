
  uint64_t uu_cat::splice::write_fast_using_splice::h8d35de54429b343d(int64_t* arg1, int32_t* arg2, int64_t arg3)

{
    uint64_t result = uucore::features::pipes::pipe::h14b45b9735c770a8();
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
        nix::fcntl::splice::h6b265cd6d4b59480(&var_40, arg2, nullptr, &fd_1, nullptr, 0x20000, 0);
        int64_t* rcx_2;
        uint64_t var_38;
        
        if (var_40)
        {
            rcx_2 = arg1;
            rcx_2[1] = 1;
        }
        else if (!var_38)
        {
            rcx_2 = arg1;
            rcx_2[1] = 0;
        }
        else
        {
            if (uucore::features::pipes::splice_exact::hf182302f6fbd70e2(&fd, arg3, var_38) == 0x86)
                continue;
            
            int32_t rax_1 = uu_cat::splice::copy_exact::h7c8774a5e534cde3(fd, arg3, var_38);
            
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
        *rcx_2 = -0x7ffffffffffffffa;
        break;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(fd_1);
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::h59c27c7970f16c5f(fd);
}
