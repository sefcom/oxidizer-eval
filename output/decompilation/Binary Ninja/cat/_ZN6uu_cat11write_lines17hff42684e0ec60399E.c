
  int64_t uu_cat::write_lines::hff42684e0ec60399(char const (*** arg1)[0x92], int32_t* arg2, char* arg3, int64_t* arg4)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t var_5030 = 0;
    int64_t var_6030 = 0;
    int64_t var_7030 = 0;
    int32_t* r15 = arg2;
    void var_7c30;
    memset(&var_7c30, 0, 0x7c00);
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_7c78 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* var_7d00 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_7c78);
    char rax_1 = arg3[4];
    char temp0 = arg3[2];
    char const* const rdx = "$\n^M^I^?unknown filetype: Is a …";
    
    if (!temp0)
        rdx = "\n-src/uu/cat/src/cat.rs\t$\n^M^…";
    
    int64_t rcx;
    rcx = temp0;
    void** const var_7ce0 = &data_518710;
    char rax_2 = arg3[1];
    char rax_3 = arg3[3];
    int32_t* var_7cf0 = r15;
    int64_t var_7cd8;
    
    while (true)
    {
        int64_t rax_4;
        int64_t rdx_1;
        rax_4 = _$LT$std..os..unix..net..stream..UnixStream$u20$as$u20$std..io..Read$GT$::read::hcece2f3bec9614ed(r15, &var_7c30, 0x7c00);
        var_7cd8 = rax_4;
        int64_t var_7cd0_1 = rdx_1;
        
        if (rax_4)
            break;
        
        if (!rdx_1)
            break;
        
        char* rax_5;
        int64_t rdx_2;
        rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(rdx_1, &var_7c30, 0x7c00);
        int64_t r12_1 = 0;
        
        while (true)
        {
            if (rdx_2 > r12_1)
            {
                char const (** var_7cc8)[0x92];
                int128_t var_7cc0;
                char const (** rax_7)[0x92];
                
                if (rax_5[r12_1] != 0xa)
                {
                    char const (** rax_8)[0x92];
                    
                    if (!*(arg4 + 9))
                    {
                        *(arg4 + 0xa) = 0;
                        
                        if (arg4[1] && rax_1)
                        {
                            int64_t* var_7c70 = arg4;
                            uint64_t (* var_7c68_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            var_7cc8 = 2;
                            *var_7cc0[8] = 0;
                            int64_t var_7cb0_1 = 6;
                            int64_t var_7ca8_1 = 0;
                            int64_t var_7ca0_1 = 0x20;
                            char var_7c98_1 = 3;
                            void* const var_7c60 = &data_518728;
                            int64_t var_7c58_1 = 2;
                            char const (*** var_7c40_1)[0x92] = &var_7cc8;
                            int64_t var_7c38_1 = 1;
                            int64_t** var_7c50_1 = &var_7c70;
                            int64_t var_7c48_1 = 1;
                            rax_8 =
                                std::io::Write::write_fmt::h6cba046ccfa3b685(&var_7d00, &var_7c60);
                            
                            if (rax_8)
                                goto label_4b0898;
                            
                            *arg4 += 1;
                        }
                    }
                    else
                    {
                        rax_8 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_7d00, "\r\n-src/uu/cat/src/cat.rs\t$\n^…", 1);
                        
                        if (rax_8)
                        {
                            label_4b0898:
                            *arg1 = -0x8000000000000000;
                            arg1[1] = rax_8;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&var_7cd8);
                            return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(var_7d00);
                        }
                        
                        arg4[1] = 0;
                        *(arg4 + 0xa) = 0;
                    }
                    int64_t rax_9 = uu_cat::write_end::h5e37c7be961ff133(&var_7d00, &rax_5[r12_1], 
                        rdx_2 - r12_1, rax_2, rax_3);
                    int64_t rax_10 = rax_9 + r12_1;
                    
                    if (rax_10 == rdx_2)
                    {
                        arg4[1] = 0;
                        label_4b0854:
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&var_7cd8);
                        r15 = var_7cf0;
                        break;
                    }
                    
                    if (rax_10 < rdx_2)
                    {
                        uint32_t rcx_5 = rax_5[rax_10];
                        
                        if (rcx_5 == 0xa)
                        {
                            uu_cat::write_end_of_line::h4ed837c9dff89e3f(&var_7cc8, &var_7d00, rdx, 
                                rcx + 1, var_7cf0[1]);
                            rax_7 = var_7cc8;
                            
                            if (rax_7 != -0x7ffffffffffffffa)
                                goto label_4b087c;
                            
                            arg4[1] = 1;
                            r12_1 = r12_1 + rax_9 + 1;
                            goto label_4b0630;
                        }
                        
                        if (rcx_5 == 0xd)
                        {
                            *(arg4 + 9) = 1;
                            r12_1 = r12_1 + rax_9 + 1;
                            goto label_4b0630;
                        }
                        
                        var_7cc8 = nullptr;
                        core::panicking::assert_failed::hdf70ea46a40497a8(0, &rax_5[rax_10], 
                            "\n-src/uu/cat/src/cat.rs\t$\n^M^…", &var_7cc8);
                        /* no return */
                    }
                    
                    r12_1 = rax_10;
                    var_7ce0 = &data_518748;
                }
                else
                {
                    uu_cat::write_new_line::h703f4daf25cc548e(&var_7cc8, &var_7d00, arg3, arg4, 
                        var_7cf0[1]);
                    rax_7 = var_7cc8;
                    
                    if (rax_7 != -0x7ffffffffffffffa)
                    {
                        label_4b087c:
                        *(arg1 + 8) = var_7cc0;
                        *arg1 = rax_7;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&var_7cd8);
                        return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(var_7d00);
                    }
                    
                    arg4[1] = 1;
                    r12_1 += 1;
                    label_4b0630:
                    
                    if (r12_1 >= rdx_1)
                        goto label_4b0854;
                    
                    continue;
                }
            }
            
            core::panicking::panic_bounds_check::h25a5330941572dd1(r12_1, rdx_2);
            /* no return */
        }
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&var_7cd8);
    *arg1 = -0x8000000000000006;
    return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(var_7d00);
}
