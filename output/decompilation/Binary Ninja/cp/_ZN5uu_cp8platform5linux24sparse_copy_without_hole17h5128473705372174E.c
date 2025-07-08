
  void** uu_cp::platform::linux::sparse_copy_without_hole::h5128473705372174(int64_t arg1, int64_t arg2, int64_t arg3)

{
    int32_t var_e8;
    std::fs::File::open::h2ade805364297b3f(&var_e8, arg1);
    void** var_e0;
    
    if (var_e8)
        return var_e0;
    
    int32_t fd_5;
    int32_t fd = fd_5;
    std::fs::File::create::h63900868be62ed17(&var_e8, arg3);
    void** r13_1;
    
    if (!var_e8)
    {
        int32_t fd_2 = fd_5;
        int32_t fd_1 = fd_2;
        std::fs::File::metadata::he899a18112e6f19e(&var_e8, &fd);
        
        if (var_e8 != 2)
        {
            int64_t var_98;
            core::result::Result$LT$T$C$E$GT$::unwrap::h73f8e5c4ab47dad3(var_98 >> 0x3f);
            
            if (ftruncate(fd_2) < 0)
                r13_1 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() << 0x20 | 2;
            else
            {
                int32_t fd_3 = fd;
                int64_t rax_3 = core::cmp::min_by::h2985dd7176bedd6f(var_98);
                void var_120;
                _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h3824b372c4eb90c7(&var_120, rax_3);
                off64_t __arg2 = 0;
                int32_t fd_4 = fd_3;
                
                while (true)
                {
                    core::result::Result$LT$T$C$E$GT$::unwrap::h73f8e5c4ab47dad3(0);
                    off64_t __arg2_1 = lseek(fd_3, __arg2, 3);
                    core::result::Result$LT$T$C$E$GT$::unwrap::h73f8e5c4ab47dad3(0);
                    off64_t __arg2_2 = lseek(fd_3, __arg2_1, 4);
                    
                    if (__arg2_1 == -1 || __arg2_2 == -1)
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(&var_120);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
                        return nullptr;
                    }
                    
                    if (__arg2_1 < -1)
                        break;
                    
                    if (__arg2_2 < -1)
                        break;
                    
                    __arg2 = __arg2_2;
                    int64_t r12_2 = __arg2_2 - __arg2_1;
                    int128_t var_108;
                    core::iter::adapters::step_by::StepBy$LT$I$GT$::new::h5a3e6c67f4c7aba8(
                        &var_108, r12_2, rax_3);
                    int72_t var_f8;
                    int72_t var_d8_1 = var_f8;
                    var_e8 = var_108;
                    
                    while (true)
                    {
                        *var_d8_1[8] = 0;
                        int64_t rax_4;
                        int64_t rdx_3;
                        rax_4 = _$LT$core..ops..range..Range$LT$T$GT$$u20$as$u20$core..iter..range..RangeIteratorImpl$GT$::spec_nth::h852b0ec0598f7b05(&var_e8);
                        
                        if (!rax_4)
                        {
                            fd_3 = fd_4;
                            break;
                        }
                        
                        int64_t var_118;
                        int64_t var_110;
                        int64_t rax_6;
                        uint64_t rdx_5;
                        rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h1f50fb9d1aa19a8f(core::cmp::min_by::h92b17324b21437ca(r12_2 - rdx_3, rax_3), 
                            var_118, var_110);
                        off64_t rbp_2 = rdx_3 + __arg2_1;
                        void** rax_7 = std::os::unix::fs::FileExt::read_exact_at::h6298917a1f7d0b8c(
                            &fd, rax_6, rdx_5, rbp_2);
                        r13_1 = rax_7;
                        
                        if (rax_7)
                            goto label_51322e;
                        
                        void** rax_8 = std::os::unix::fs::FileExt::write_all_at::h20b571d70eaa1579(
                            &fd_1, rax_6, rdx_5, rbp_2);
                        r13_1 = rax_8;
                        
                        if (rax_8)
                            goto label_51322e;
                    }
                }
                
                r13_1 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() << 0x20 | 2;
                label_51322e:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(
                    &var_120);
                fd_2 = fd_1;
            }
        }
        else
            r13_1 = var_e0;
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_2);
    }
    else
        r13_1 = var_e0;
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd);
    return r13_1;
}
