
  int64_t uu_wc::count_fast::count_bytes_using_splice::h6c4ad4a8ee75a3f4(int64_t arg1)

{
    int64_t var_c8 = 0x1b600000000;
    int32_t var_c0 = 0;
    int16_t var_bc = 0;
    *var_c0[1] = 1;
    uint32_t fd_2;
    std::fs::OpenOptions::open::h0b5101c42a630ef2(&fd_2, &var_c8, 
        "/dev/nullsrc/uu/wc/src/count_fas…");
    int64_t var_d0;
    
    if (!fd_2)
    {
        int32_t fd_4;
        int32_t fd_3 = fd_4;
        int32_t fd = fd_3;
        nix::sys::stat::fstat::h5414de4d70a08ddb(&var_c8, fd_3);
        int64_t var_98;
        
        if (!var_c8 && ((var_98 >> 0x20 & 0xfffff000) | (var_98 >> 8 & 0xfff)) == 1 && !core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$u32$GT$::ne::h189986e1b215ca81((
            var_98 >> 0xc & 0xffffff00) | var_98))
        {
            uint64_t rax_6 = uucore::features::pipes::pipe::h14b45b9735c770a8();
            
            if (rax_6 != 0xffffffff)
            {
                int32_t fd_1 = rax_6;
                fd_2 = rax_6 >> 0x20;
                int64_t r14 = 0;
                
                while (true)
                {
                    nix::fcntl::splice::h04f44a335952f6be(&var_c8, arg1, nullptr, &fd_2, nullptr, 
                        0x20000, 0);
                    
                    if (!var_c8)
                    {
                        uint64_t r13_1 = var_c0;
                        
                        if (!r13_1)
                        {
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd_2);
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd_1);
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
                            return 0;
                        }
                        
                        r14 += r13_1;
                        
                        if (uucore::features::pipes::splice_exact::hd07514bb204e6b97(&fd_1, &fd, 
                                r13_1) == 0x86)
                            continue;
                    }
                    
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd_2);
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd_1);
                    fd_3 = fd;
                    break;
                }
            }
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd_3);
    }
    else
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1f47a50be6f5ae8e(var_d0);
    return 1;
}
