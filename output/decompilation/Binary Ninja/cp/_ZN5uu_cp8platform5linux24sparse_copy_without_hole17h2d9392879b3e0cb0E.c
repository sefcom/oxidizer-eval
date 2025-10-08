
  void** uu_cp::platform::linux::sparse_copy_without_hole::h2d9392879b3e0cb0(int64_t arg1, int64_t arg2, int64_t arg3)

{
    int32_t var_e8;
    std::fs::File::open::h87ebb42518eeb9ff(&var_e8, arg1);
    void** var_e0;
    
    if (var_e8 == 1)
        return var_e0;
    
    int32_t fd_5;
    int32_t fd = fd_5;
    std::fs::File::create::h515d4c5b46fc5d80(&var_e8, arg3);
    void** r13_1;
    
    if (!(var_e8 & 1))
    {
        int32_t fd_2 = fd_5;
        int32_t fd_1 = fd_2;
        std::fs::File::metadata::h5e84e533705f8c98(&var_e8, &fd);
        
        if (var_e8 != 2)
        {
            int64_t var_98;
            core::result::Result$LT$T$C$E$GT$::unwrap::h9e6c4a291aa92713(var_98 >> 0x3f);
            
            if (ftruncate(fd_2) < 0)
                r13_1 = *__errno_location() << 0x20 | 2;
            else
            {
                int32_t fd_3 = fd;
                int64_t rax_3 = core::cmp::Ord::min::hb27fc151278b8567(var_98);
                int64_t var_120;
                _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h451713e6c2a4190a(&var_120, rax_3);
                off64_t __arg2 = 0;
                int32_t fd_4 = fd_3;
                int64_t var_118;
                
                while (true)
                {
                    core::result::Result$LT$T$C$E$GT$::unwrap::h9e6c4a291aa92713(0);
                    off64_t __arg2_1 = lseek(fd_3, __arg2, 3);
                    core::result::Result$LT$T$C$E$GT$::unwrap::h9e6c4a291aa92713(0);
                    off64_t __arg2_2 = lseek(fd_3, __arg2_1, 4);
                    
                    if (__arg2_1 == -1 || __arg2_2 == -1)
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h320a3f42966bf686(var_120, var_118);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_1);
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
                        return nullptr;
                    }
                    
                    if (__arg2_1 < -1)
                        break;
                    
                    if (__arg2_2 < -1)
                        break;
                    
                    __arg2 = __arg2_2;
                    int64_t r12_2 = __arg2_2 - __arg2_1;
                    int128_t var_108;
                    core::iter::adapters::step_by::StepBy$LT$I$GT$::new::h10be5d279cda01b9(
                        &var_108, r12_2, rax_3);
                    int72_t var_f8;
                    int72_t var_d8_1 = var_f8;
                    var_e8 = var_108;
                    
                    while (true)
                    {
                        *var_d8_1[8] = 0;
                        char rax_4;
                        void* rdx_4;
                        rax_4 = _$LT$core..ops..range..Range$LT$T$GT$$u20$as$u20$core..iter..range..RangeIteratorImpl$GT$::spec_nth::hb2ca9648191df11e(&var_e8);
                        
                        if (!(rax_4 & 1))
                        {
                            fd_3 = fd_4;
                            break;
                        }
                        
                        int64_t var_110;
                        int64_t rax_6;
                        uint64_t rdx_6;
                        rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h2dbef9c3b49f89ca(core::cmp::Ord::min::he5724570cd2b0d00(r12_2 - rdx_4, rax_3), 
                            var_118, var_110);
                        void* rbp_2 = rdx_4 + __arg2_1;
                        void** rax_7 = std::os::unix::fs::FileExt::read_exact_at::h9b8d46c56d66108a(
                            &fd, rax_6, rdx_6, rbp_2);
                        r13_1 = rax_7;
                        
                        if (rax_7)
                            goto label_49b547;
                        
                        void** rax_8 = std::os::unix::fs::FileExt::write_all_at::h89d9f0be51744c7e(
                            &fd_1, rax_6, rdx_6, rbp_2);
                        r13_1 = rax_8;
                        
                        if (rax_8)
                            goto label_49b547;
                    }
                }
                
                r13_1 = *__errno_location() << 0x20 | 2;
                label_49b547:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h320a3f42966bf686(
                    var_120, var_118);
                fd_2 = fd_1;
            }
        }
        else
            r13_1 = var_e0;
        
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_2);
    }
    else
        r13_1 = var_e0;
    
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd);
    return r13_1;
}
