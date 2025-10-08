
  int64_t uu_wc::count_fast::count_bytes_using_splice::h131ffe0d704d0ba2()

{
    int64_t var_c8 = 0x1b600000000;
    int32_t var_c0 = 0;
    int16_t var_bc = 0;
    *var_c0[1] = 1;
    uint32_t fd_2;
    std::fs::OpenOptions::open::h8efffdd82d909b7e(&fd_2, &var_c8);
    
    if (fd_2 == 1)
    {
        int64_t var_d0;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb3643e18d0a3be8d(var_d0);
        return 1;
    }
    
    int32_t fd_4;
    int32_t fd_3 = fd_4;
    int32_t fd = fd_3;
    nix::sys::stat::fstat::h932ea0f7705da4a5(&var_c8, fd_3);
    int64_t var_98;
    
    if (!(var_c8 & 1) && ((var_98 >> 0x20 & 0xfffff000) | (var_98 >> 8 & 0xfff)) == 1
        && ((var_98 >> 0xc & 0xffffff00) | var_98) == 3)
    {
        uint64_t rax_6 = uucore::features::pipes::pipe::h49247394f7e7f0ce();
        
        if (rax_6 != 0xffffffff)
        {
            int32_t fd_1 = rax_6;
            fd_2 = rax_6 >> 0x20;
            int64_t rbx = 0;
            
            while (true)
            {
                nix::fcntl::splice::h2b33ac4e3c6d9a50(&var_c8, &fd_2);
                
                if (!(var_c8 & 1))
                {
                    uint64_t rbp_1 = var_c0;
                    
                    if (!rbp_1)
                    {
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd_2);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd_1);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd);
                        return 0;
                    }
                    
                    rbx += rbp_1;
                    
                    if (uucore::features::pipes::splice_exact::h5944a560648a0e2a(&fd_1, &fd, rbp_1)
                            == 0x86)
                        continue;
                }
                
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd_2);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd_1);
                fd_3 = fd;
                break;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h10ceb594d39f53a5(fd_3);
    return 1;
}
