
  void** uu_cp::platform::linux::sparse_copy::ha5f85eebd4c718f5(int64_t arg1, int64_t arg2, int64_t arg3)

{
    int32_t var_e0;
    std::fs::File::open::h2ade805364297b3f(&var_e0, arg1);
    void** var_d8;
    
    if (var_e0)
        return var_d8;
    
    int32_t fd_4;
    int32_t fd_2 = fd_4;
    int32_t fd = fd_2;
    std::fs::File::create::h63900868be62ed17(&var_e0, arg3);
    void** r14_1;
    
    if (!var_e0)
    {
        int32_t fd_3 = fd_4;
        int32_t fd_1 = fd_3;
        std::fs::File::metadata::he899a18112e6f19e(&var_e0, &fd);
        
        if (var_e0 == 2)
            r14_1 = var_d8;
        else
        {
            int64_t var_90;
            core::result::Result$LT$T$C$E$GT$::unwrap::h73f8e5c4ab47dad3(var_90 >> 0x3f);
            
            if (ftruncate(fd_3) < 0)
                r14_1 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() << 0x20 | 2;
            else
            {
                std::fs::File::metadata::he899a18112e6f19e(&var_e0, &fd_1);
                
                if (var_e0 != 2)
                {
                    int64_t var_88;
                    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h3824b372c4eb90c7(&var_e0, var_88);
                    
                    if (!var_90)
                    {
                        label_513449:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(&var_e0);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
                        return nullptr;
                    }
                    
                    void* r15_1 = nullptr;
                    
                    while (true)
                    {
                        uint64_t var_d0;
                        int64_t rax_3;
                        void** rdx_3;
                        rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(&fd, var_d8, var_d0);
                        r14_1 = rdx_3;
                        
                        if (!rax_3)
                        {
                            int64_t rax_4;
                            uint64_t rdx_5;
                            rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha9f3ca16460e2477(r14_1, var_d8, var_d0);
                            int64_t var_f0 = rax_4;
                            int64_t var_e8_1 = rax_4 + rdx_5;
                            char rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hb6331f8b0439d978(&var_f0);
                            void** rax_7;
                            
                            if (rax_6)
                                rax_7 = std::os::unix::fs::FileExt::write_all_at::h20b571d70eaa1579(
                                    &fd_1, rax_4, rdx_5, r15_1);
                            
                            if (!rax_6 || !rax_7)
                            {
                                r15_1 += r14_1;
                                
                                if (r15_1 >= var_90)
                                    goto label_513449;
                                
                                continue;
                            }
                            else
                                r14_1 = rax_7;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(&var_e0);
                        fd_3 = fd_1;
                        break;
                    }
                }
                else
                    r14_1 = var_d8;
            }
        }
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_3);
        fd_2 = fd;
    }
    else
        r14_1 = var_d8;
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_2);
    return r14_1;
}
