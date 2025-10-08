
  int64_t* uu_test::eval::hcb90f74be2e11d77(int64_t* arg1, void* arg2)

{
    int64_t rbx = *(arg2 + 0x10);
    
    if (!rbx)
    {
        arg1[1] = 0;
        *arg1 = 7;
    }
    else
    {
        *(arg2 + 0x10) = rbx - 1;
        int64_t rax_1 = *(arg2 + 8);
        int64_t rdx_1 = (rbx - 1) * 5;
        char* rbp_1 = *(rax_1 + (rdx_1 << 3) + 8);
        char* r12_1 = *(rax_1 + (rdx_1 << 3) + 0x10);
        uint64_t r14_1 = *(rax_1 + (rdx_1 << 3) + 0x18);
        uint64_t rdi = *(rax_1 + (rdx_1 << 3) + 0x20);
        char* var_c0_2;
        int64_t var_b8;
        char var_b0;
        int128_t var_af;
        uint64_t var_a0;
        int128_t var_70;
        uint64_t var_60;
        char* rsi_19;
        int64_t rdi_18;
        int128_t zmm1;
        
        switch (*(rax_1 + (rdx_1 << 3)))
        {
            case 0:
            {
                *arg1 = 0;
                break;
            }
            case 1:
            {
                uu_test::eval::hcb90f74be2e11d77(&var_b8, arg2, &jump_table_417ed8);
                int64_t rcx_3 = var_b8;
                
                if (rcx_3 != 7)
                {
                    arg1[3] = var_a0;
                    *(arg1 + 9) = var_af;
                    *arg1 = rcx_3;
                    arg1[1] = var_b0;
                }
                else
                {
                    arg1[1] = var_b0 ^ 1;
                    *arg1 = 7;
                }
                break;
            }
            case 2:
            {
                if (_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$GT$::eq::h08c82ed25b2e05bf(r12_1, r14_1, "-a-o===!=<>-eq-ge-gt-le-lt-ne-ef…", 2))
                {
                    if (rbx <= 2)
                        goto label_458910;
                    
                    goto label_45866f;
                }
                
                if (!(_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$GT$::eq::h08c82ed25b2e05bf(r12_1, r14_1, "-o===!=<>-eq-ge-gt-le-lt-ne-ef-n…", 2) & rbx < 3))
                {
                    label_45866f:
                    uu_test::eval::hcb90f74be2e11d77(&var_b8, arg2);
                    int64_t rax_3 = var_b8;
                    
                    if (rax_3 != 7)
                    {
                        arg1[3] = var_a0;
                        *(arg1 + 9) = var_af;
                        *arg1 = rax_3;
                        arg1[1] = var_b0;
                        goto label_458e85;
                    }
                    
                    uu_test::eval::hcb90f74be2e11d77(&var_b8, arg2);
                    int64_t rax_4 = var_b8;
                    
                    if (rax_4 != 7)
                    {
                        arg1[3] = var_a0;
                        *(arg1 + 9) = var_af;
                        *arg1 = rax_4;
                        arg1[1] = var_b0;
                        goto label_458e85;
                    }
                    
                    char rax_5 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$GT$::eq::h08c82ed25b2e05bf(r12_1, r14_1, "-a-o===!=<>-eq-ge-gt-le-lt-ne-ef…", 2);
                    char rdx_2 = 0;
                    char temp0_1 = var_b0 & 1;
                    char rsi_7 = 1;
                    
                    if (!temp0_1)
                        rsi_7 = var_b0;
                    
                    if (temp0_1)
                        rdx_2 = var_b0;
                    
                    if (!rax_5)
                        rdx_2 = rsi_7;
                    
                    arg1[1] = rdx_2;
                    *arg1 = 7;
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
                        rbp_1, r12_1);
                }
                else
                {
                    label_458910:
                    var_b8 = 1;
                    var_b0 = r12_1;
                    *var_af[7] = r14_1;
                    var_a0 = 1;
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(&var_70, &var_b8);
                    arg1[3] = var_60;
                    *(arg1 + 8) = var_70;
                    *arg1 = 6;
                    label_458e85:
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
                        rbp_1, r12_1);
                }
                break;
            }
            case 3:
            {
                arg1[1] = r14_1;
                *arg1 = 7;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
                    rbp_1, r12_1);
                break;
            }
            case 4:
            {
                var_c0_2 = r12_1;
                
                if (rbp_1)
                {
                    r12_1 = r14_1;
                    int64_t var_90_3;
                    int64_t rbp_3;
                    char* r13_3;
                    char* r14_3;
                    
                    if (rbp_1 != 1)
                    {
                        if (rbx == 1)
                        {
                            var_b8 = 7;
                            uu_test::eval::panic_cold_explicit::he04f14c772520cfb();
                            /* no return */
                        }
                        
                        *(arg2 + 0x10) = rbx - 2;
                        int64_t rdx_13 = (rbx - 2) * 5;
                        var_b8 = *(rax_1 + (rdx_13 << 3));
                        int64_t var_98_7 = *(rax_1 + (rdx_13 << 3) + 0x20);
                        
                        if (var_b8 != 3)
                        {
                            uu_test::eval::panic_cold_explicit::he04f14c772520cfb();
                            /* no return */
                        }
                        
                        r14_3 = *(*(rax_1 + (rdx_13 << 3) + 0x10))[7];
                        var_90_3 = var_b0;
                        
                        if (rbx == 2)
                        {
                            var_b8 = 7;
                            uu_test::eval::panic_cold_explicit::hfcc54fd9863cb53c();
                            /* no return */
                        }
                        
                        *(arg2 + 0x10) = rbx - 3;
                        int64_t rcx_15 = (rbx - 3) * 5;
                        var_b8 = *(rax_1 + (rcx_15 << 3));
                        int64_t var_98_8 = *(rax_1 + (rcx_15 << 3) + 0x20);
                        var_af = *(rax_1 + (rcx_15 << 3) + 0x10);
                        
                        if (var_b8 != 3)
                        {
                            uu_test::eval::panic_cold_explicit::hfcc54fd9863cb53c();
                            /* no return */
                        }
                        
                        rbp_3 = var_b0;
                        r13_3 = *var_af[7];
                        uu_test::files::hd5728a24dd84678b(&var_b8, r13_3, var_a0, r14_3, var_a0, 
                            r12_1, rdi);
                    }
                    else
                    {
                        if (rbx == 1)
                        {
                            var_b8 = 7;
                            uu_test::eval::panic_cold_explicit::h115be3b5ca5c56a6();
                            /* no return */
                        }
                        
                        *(arg2 + 0x10) = rbx - 2;
                        int64_t rdx_4 = (rbx - 2) * 5;
                        var_b8 = *(rax_1 + (rdx_4 << 3));
                        int64_t var_98_2 = *(rax_1 + (rdx_4 << 3) + 0x20);
                        
                        if (var_b8 != 3)
                        {
                            uu_test::eval::panic_cold_explicit::h115be3b5ca5c56a6();
                            /* no return */
                        }
                        
                        r14_3 = *(*(rax_1 + (rdx_4 << 3) + 0x10))[7];
                        var_90_3 = var_b0;
                        
                        if (rbx == 2)
                        {
                            var_b8 = 7;
                            uu_test::eval::panic_cold_explicit::he421b68f3fff1de8();
                            /* no return */
                        }
                        
                        *(arg2 + 0x10) = rbx - 3;
                        int64_t rcx_7 = (rbx - 3) * 5;
                        var_b8 = *(rax_1 + (rcx_7 << 3));
                        int64_t var_98_3 = *(rax_1 + (rcx_7 << 3) + 0x20);
                        var_af = *(rax_1 + (rcx_7 << 3) + 0x10);
                        
                        if (var_b8 != 3)
                        {
                            uu_test::eval::panic_cold_explicit::he421b68f3fff1de8();
                            /* no return */
                        }
                        
                        rbp_3 = var_b0;
                        r13_3 = *var_af[7];
                        uu_test::integers::hff2dbabf66e3b69d(&var_b8, r13_3, var_a0, r14_3, var_a0, 
                            r12_1, rdi);
                    }
                    
                    int64_t rcx_17 = var_b8;
                    
                    if (rcx_17 != 7)
                    {
                        arg1[3] = var_a0;
                        *(arg1 + 9) = var_af;
                        *arg1 = rcx_17;
                        arg1[1] = var_b0;
                    }
                    else
                    {
                        arg1[1] = var_b0;
                        *arg1 = 7;
                    }
                    
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
                        rbp_3, r13_3);
                    rdi_18 = var_90_3;
                    rsi_19 = r14_3;
                    goto label_458bec;
                }
                
                if (rbx == 1)
                {
                    var_b8 = 7;
                    uu_test::eval::panic_cold_explicit::hc16295f7fbae26fe();
                    /* no return */
                }
                
                *(arg2 + 0x10) = rbx - 2;
                int64_t rdx_9 = (rbx - 2) * 5;
                var_b8 = *(rax_1 + (rdx_9 << 3));
                int64_t var_98_5 = *(rax_1 + (rdx_9 << 3) + 0x20);
                
                if (var_b8 != 3)
                {
                    uu_test::eval::panic_cold_explicit::hc16295f7fbae26fe();
                    /* no return */
                }
                
                int64_t r14_4 = *(*(rax_1 + (rdx_9 << 3) + 0x10))[7];
                
                if (rbx == 2)
                {
                    var_b8 = 7;
                    uu_test::eval::panic_cold_explicit::h7c9511f02e106696();
                    /* no return */
                }
                
                *(arg2 + 0x10) = rbx - 3;
                int64_t rcx_12 = (rbx - 3) * 5;
                zmm1 = *(rax_1 + (rcx_12 << 3) + 0x10);
                var_b8 = *(rax_1 + (rcx_12 << 3));
                int64_t var_98_6 = *(rax_1 + (rcx_12 << 3) + 0x20);
                
                if (var_b8 != 3)
                {
                    uu_test::eval::panic_cold_explicit::h7c9511f02e106696();
                    /* no return */
                }
                
                int64_t rbx_7 = *zmm1[7];
                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_b8, r14_1, rdi);
                int64_t r12_4 = var_b0;
                uint64_t rbp_4 = *zmm1[7];
                bool rax_21;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_4, rbp_4, "!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-…", 2))
                {
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_4, rbp_4, "<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-…", 1))
                    {
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_4, rbp_4, ">-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z…", 1))
                            rax_21 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$GT$::eq::h08c82ed25b2e05bf(rbx_7, var_a0, r14_4, var_a0);
                        else
                            rax_21 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialOrd$GT$::gt::h86cf7e969ea58c0a(rbx_7, var_a0, r14_4, var_a0);
                    }
                    else
                        rax_21 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialOrd$GT$::lt::h66daa6bec143065a(rbx_7, var_a0, r14_4, var_a0);
                }
                else
                    rax_21 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$GT$::eq::h08c82ed25b2e05bf(rbx_7, var_a0, r14_4, var_a0) ^ 1;
                
                arg1[1] = rax_21;
                *arg1 = 7;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb46ea65fa83e8fb5(
                    &var_b8);
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
                    var_b0, rbx_7);
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
                    var_b0, r14_4);
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(
                    var_c0_2, r14_1);
                break;
            }
            case 5:
            {
                char* var_88_1 = r14_1;
                var_c0_2 = r12_1;
                
                if (!(rbp_1 & 1))
                {
                    if (rbx == 1)
                    {
                        label_4589d0:
                        arg1[1] = 1;
                        *arg1 = 7;
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(var_c0_2, var_88_1);
                    }
                    else
                    {
                        *(arg2 + 0x10) = rbx - 2;
                        int64_t rcx_10 = (rbx - 2) * 5;
                        zmm1 = *(rax_1 + (rcx_10 << 3) + 0x10);
                        var_b8 = *(rax_1 + (rcx_10 << 3));
                        int64_t var_98_4 = *(rax_1 + (rcx_10 << 3) + 0x20);
                        int64_t rbx_5 = var_b8;
                        uint64_t rbx_10;
                        char* rbp_5;
                        int64_t r13_5;
                        
                        if (rbx_5 == 3)
                        {
                            r13_5 = var_b0;
                            rbp_5 = *zmm1[7];
                            rbx_10 = var_a0;
                            r12_1 = var_88_1;
                            label_458f31:
                            arg1[1] = rbx_10 ^ _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$GT$::eq::h08c82ed25b2e05bf(r12_1, rdi, "-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s…", 2);
                            *arg1 = 7;
                            rdi_18 = r13_5;
                            rsi_19 = rbp_5;
                            label_458bec:
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(rdi_18, rsi_19);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(var_c0_2, r12_1);
                        }
                        else
                        {
                            if (rbx_5 == 6)
                            {
                                r12_1 = var_88_1;
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8a1d310fc48c8e88(&var_70, 1, 0);
                                r13_5 = var_70;
                                rbp_5 = *var_70[8];
                                rbx_10 = var_60;
                                core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_b8);
                                goto label_458f31;
                            }
                            
                            if (rbx_5 == 7)
                                goto label_4589d0;
                            
                            var_70 = 1;
                            *var_70[8] = var_88_1;
                            uint64_t var_60_1 = rdi;
                            char var_58_1 = 1;
                            int128_t var_48;
                            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(&var_48, &var_70);
                            int64_t var_38;
                            arg1[3] = var_38;
                            *(arg1 + 8) = var_48;
                            *arg1 = 3;
                            char* rdi_5;
                            
                            if (rbx_5 == 3)
                            {
                                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(var_b0, *zmm1[7]);
                                rdi_5 = var_c0_2;
                            }
                            else
                            {
                                rdi_5 = var_c0_2;
                                
                                if (rbx_5 != 7)
                                {
                                    core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_b8);
                                    rdi_5 = var_c0_2;
                                }
                            }
                            
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(rdi_5, var_88_1);
                        }
                    }
                }
                else
                {
                    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_b8, var_88_1, rdi);
                    
                    if (var_b8 & 1)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    int64_t rax_7 = *(arg2 + 0x10);
                    
                    if (!rax_7)
                    {
                        var_b8 = 7;
                        uu_test::eval::panic_cold_explicit::hf103fcbafac6b158();
                        /* no return */
                    }
                    
                    int64_t r12_3 = var_b0;
                    uint64_t rbp_2 = *var_af[7];
                    *(arg2 + 0x10) = rax_7 - 1;
                    int64_t rcx_4 = *(arg2 + 8);
                    int64_t rax_9 = (rax_7 - 1) * 5;
                    int128_t zmm1_1 = *(rcx_4 + (rax_9 << 3) + 0x10);
                    var_b8 = *(rcx_4 + (rax_9 << 3));
                    int64_t var_98_1 = *(rcx_4 + (rax_9 << 3) + 0x20);
                    
                    if (var_b8 != 3)
                    {
                        uu_test::eval::panic_cold_explicit::hf103fcbafac6b158();
                        /* no return */
                    }
                    
                    int64_t rax_11 = var_b0;
                    char* r13_2 = *zmm1_1[7];
                    char rax_39;
                    char rcx_5;
                    char* rbx_9;
                    char* r14_2;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S…", 2))
                    {
                        rcx_5 = 1;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 2;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 3;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 5;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-x…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 6;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsr…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 7;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 8;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 9;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/t…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 8;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-L-N-O-p-r-s-S-t-u-w-xsrc/uu/tes…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 4;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-N-O-p-r-s-S-t-u-w-xsrc/uu/test/…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 0xa;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-O-p-r-s-S-t-u-w-xsrc/uu/test/sr…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 0xb;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-p-r-s-S-t-u-w-xsrc/uu/test/src/…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 0xc;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-r-s-S-t-u-w-xsrc/uu/test/src/pa…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 0xd;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-S-t-u-w-xsrc/uu/test/src/parser…", 2))
                            goto label_458e05;
                        
                        rcx_5 = 0xe;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-s-S-t-u-w-xsrc/uu/test/src/pars…", 2))
                            goto label_458e05;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-t-u-w-xsrc/uu/test/src/parser.r…", 2))
                        {
                            rcx_5 = 0xf;
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-u-w-xsrc/uu/test/src/parser.rs)…", 2))
                            {
                                rcx_5 = 0x10;
                                
                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-w-xsrc/uu/test/src/parser.rs)(u…", 2))
                                {
                                    rcx_5 = 0x11;
                                    
                                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(r12_3, rbp_2, "-xsrc/uu/test/src/parser.rs)(uut…", 2))
                                    {
                                        uu_test::eval::panic_cold_explicit::h24292c4e7401f068();
                                        /* no return */
                                    }
                                }
                            }
                            
                            goto label_458e05;
                        }
                        
                        uu_test::isatty::h5c7d65a5151d7d28(&var_b8, r13_2, var_a0);
                        int64_t rcx_24 = var_b8;
                        rax_39 = var_b0;
                        
                        if (rcx_24 == 7)
                        {
                            rbx_9 = var_c0_2;
                            r14_2 = var_88_1;
                            goto label_458e16;
                        }
                        
                        arg1[3] = var_a0;
                        *(arg1 + 9) = zmm1_1;
                        *arg1 = rcx_24;
                        arg1[1] = rax_39;
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(rax_11, r13_2);
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(var_c0_2, var_88_1);
                    }
                    else
                    {
                        rcx_5 = 0;
                        label_458e05:
                        rbx_9 = var_c0_2;
                        r14_2 = var_88_1;
                        rax_39 = uu_test::path::hed70fa791e261736(r13_2, var_a0, rcx_5);
                        label_458e16:
                        arg1[1] = rax_39 & 1;
                        *arg1 = 7;
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(rax_11, r13_2);
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc3c00042d8510b40(rbx_9, r14_2);
                    }
                }
                break;
            }
            case 6:
            case 7:
            {
                arg1[1] = 0;
                *arg1 = 7;
                break;
            }
        }
    }
    
    return arg1;
}
