
  int64_t uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(int64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_e0 = arg1;
    int64_t var_d8 = arg2;
    int64_t var_d0 = arg3;
    int64_t rcx;
    int64_t var_c8 = rcx;
    int32_t var_c0;
    std::fs::File::open::h9d5fc688c698f3f4(&var_c0, &var_e0);
    
    if (var_c0)
        return 1;
    
    int32_t fd_4;
    int32_t fd_2 = fd_4;
    int32_t fd = fd_2;
    int32_t rax_3 = ~uucore::features::mode::get_umask::hd2aa58752ad993fa() & 0x192;
    var_c0 = 0;
    int16_t var_b4_1 = 0;
    int32_t var_b8_1 = 0;
    var_b4_1 = 1;
    *var_b8_1[1] = 1;
    int32_t var_bc = rax_3;
    int32_t var_f0;
    std::fs::OpenOptions::open::hb8d9aa9fb7330c1e(&var_f0, &var_c0, &var_d0);
    
    if (!var_f0)
    {
        int32_t fd_3;
        int32_t fd_1 = fd_3;
        char const (** rax_5)[0xa0];
        int64_t rdx_1;
        rax_5 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::ha1823f747cb4d7cf(&fd, &fd_1);
        
        if (!rax_5)
        {
            std::fs::File::metadata::he899a18112e6f19e(&var_c0, &fd);
            int32_t var_88;
            
            if (var_c0 != 2 && !std::fs::File::set_permissions::h14239b20adbb1b7d(&fd_1, var_88))
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
                return 0;
            }
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
        fd_2 = fd;
    }
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_2);
    return 1;
}
