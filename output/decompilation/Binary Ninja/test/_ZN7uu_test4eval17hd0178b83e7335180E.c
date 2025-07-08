
  int64_t* uu_test::eval::hd0178b83e7335180(int64_t* arg1, void* arg2)

{
    int64_t rcx = *(arg2 + 0x10);
    
    if (!rcx)
    {
        arg1[1] = 0;
        *arg1 = 7;
    }
    else
    {
        *(arg2 + 0x10) = rcx - 1;
        int64_t rax_1 = *(arg2 + 8);
        int64_t rsi = (rcx - 1) * 5;
        uint64_t rdi = *(rax_1 + (rsi << 3) + 0x20);
        int128_t var_78_1 = *(rax_1 + (rsi << 3));
        int128_t var_68 = *(rax_1 + (rsi << 3) + 0x10);
        int64_t var_118;
        bool var_110;
        int128_t var_10f;
        uint64_t var_108;
        int64_t var_100;
        int128_t var_e8;
        int128_t var_c8;
        int64_t var_b8;
        int128_t var_98;
        
        if (var_78_1 - 1 > 6)
            *arg1 = 0;
        else
            switch (var_78_1)
            {
                case 1:
                {
                    uu_test::eval::hd0178b83e7335180(&var_118, arg2);
                    int64_t rcx_1 = var_118;
                    bool rax_3 = var_110;
                    
                    if (rcx_1 != 7)
                    {
                        arg1[3] = var_100;
                        *(arg1 + 9) = var_10f;
                        *arg1 = rcx_1;
                        arg1[1] = rax_3;
                    }
                    else
                    {
                        arg1[1] = rax_3 ^ 1;
                        *arg1 = 7;
                    }
                    break;
                }
                case 2:
                {
                    var_e8 = var_78_1;
                    uint64_t r14_1 = *var_68[8];
                    int64_t r15_1 = *var_e8[8];
                    
                    if (_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(r15_1, r14_1, "-a-o!=src/uu/test/src/test.rs-z-…"))
                    {
                        if (*(arg2 + 0x10) <= 1)
                            goto label_4ac378;
                        
                        goto label_4ac3c5;
                    }
                    
                    if ((_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(r15_1, r14_1, "-o!=src/uu/test/src/test.rs-z-eq…") & *(arg2 + 0x10) < 2)
                        != 1)
                    {
                        label_4ac3c5:
                        uu_test::eval::hd0178b83e7335180(&var_118, arg2);
                        int64_t rax_15 = var_118;
                        bool rbp_1 = var_110;
                        
                        if (rax_15 != 7)
                        {
                            arg1[3] = var_100;
                            *(arg1 + 9) = var_10f;
                            *arg1 = rax_15;
                            arg1[1] = rbp_1;
                        }
                        else
                        {
                            uu_test::eval::hd0178b83e7335180(&var_118, arg2);
                            int64_t rax_16 = var_118;
                            bool r14_2 = var_110;
                            
                            if (rax_16 != 7)
                            {
                                arg1[3] = var_100;
                                *(arg1 + 9) = var_10f;
                                *arg1 = rax_16;
                                arg1[1] = r14_2;
                            }
                            else
                            {
                                char rax_17 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(*var_e8[8], r14_1, 
                                    "-a-o!=src/uu/test/src/test.rs-z-…");
                                bool rcx_10 = false;
                                bool rsi_19 = true;
                                
                                if (!r14_2)
                                    rsi_19 = rbp_1;
                                
                                if (r14_2)
                                    rcx_10 = rbp_1;
                                
                                if (!rax_17)
                                    rcx_10 = rsi_19;
                                
                                arg1[1] = rcx_10;
                                *arg1 = 7;
                            }
                        }
                    }
                    else
                    {
                        r15_1 = *var_e8[8];
                        label_4ac378:
                        var_118 = 1;
                        var_110 = r15_1;
                        uint64_t var_108_2 = r14_1;
                        var_100 = 1;
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(
                            &var_c8, &var_118);
                        arg1[3] = var_b8;
                        *(arg1 + 8) = var_c8;
                        *arg1 = 6;
                    }
                    
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(
                        &var_e8);
                    break;
                }
                case 3:
                {
                    int64_t rax_12 = *var_68[8];
                    int64_t var_108_1 = rax_12;
                    var_118 = var_78_1;
                    arg1[1] = rax_12;
                    *arg1 = 7;
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(
                        &var_118);
                    break;
                }
                case 4:
                {
                    int64_t rsi_7 = *var_78_1[8];
                    char rax_6;
                    char rcx_6;
                    
                    if (!rsi_7)
                    {
                        var_e8 = var_68;
                        
                        if (rcx == 1)
                        {
                            var_c8 = 7;
                            var_118 = 7;
                        }
                        else
                        {
                            *(arg2 + 0x10) = rcx - 2;
                            int64_t rdx_13 = (rcx - 2) * 5;
                            int64_t var_a8_1 = *(rax_1 + (rdx_13 << 3) + 0x20);
                            var_b8 = *(rax_1 + (rdx_13 << 3) + 0x10);
                            var_c8 = *(rax_1 + (rdx_13 << 3));
                            
                            if (rcx == 2)
                                var_118 = 7;
                            else
                            {
                                *(arg2 + 0x10) = rcx - 3;
                                int64_t rcx_14 = (rcx - 3) * 5;
                                int64_t var_f8_5 = *(rax_1 + (rcx_14 << 3) + 0x20);
                                var_108 = *(rax_1 + (rcx_14 << 3) + 0x10);
                                var_118 = *(rax_1 + (rcx_14 << 3));
                            }
                        }
                        
                        bool rax_38 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(*var_e8[8], rdi, "!=src/uu/test/src/test.rs-z-eq-n…");
                        int64_t rdx_21 = var_118;
                        int32_t rcx_20 = var_c8;
                        
                        if (!rax_38)
                        {
                            rax_38 = rcx_20 == 7 & rdx_21 == 7;
                            
                            if (rdx_21 != 7 && rcx_20 != 7)
                                rax_38 = _$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::h838c2774cc7a2a63(&var_118, &var_c8);
                        }
                        else if (rdx_21 != 7)
                        {
                            rax_38 = true;
                            
                            if (rcx_20 != 7)
                                rax_38 = _$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::h838c2774cc7a2a63(&var_118, &var_c8) ^ 1;
                        }
                        else
                            rax_38 = rcx_20 != 7;
                        
                        arg1[1] = rax_38;
                        *arg1 = 7;
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_test..parser..Symbol$GT$$GT$::hbb35a5714e5c51fc(&var_118);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_test..parser..Symbol$GT$$GT$::hbb35a5714e5c51fc(&var_c8);
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                        rax_6 = 1;
                        rcx_6 = 0;
                        goto label_4ac9fe;
                    }
                    
                    char rdx_5;
                    
                    if (rsi_7 != 1)
                    {
                        var_98 = var_68;
                        
                        if (rcx == 1)
                        {
                            var_118 = 7;
                            uu_test::eval::panic_cold_explicit::h5b16dc8738e204df();
                            /* no return */
                        }
                        
                        *(arg2 + 0x10) = rcx - 2;
                        int64_t rsi_23 = (rcx - 2) * 5;
                        var_118 = *(rax_1 + (rsi_23 << 3));
                        int64_t var_f8_6 = *(rax_1 + (rsi_23 << 3) + 0x20);
                        var_108 = *(rax_1 + (rsi_23 << 3) + 0x10);
                        
                        if (var_118 != 3)
                        {
                            uu_test::eval::panic_cold_explicit::h5b16dc8738e204df();
                            /* no return */
                        }
                        
                        var_e8 = var_110;
                        
                        if (rcx == 2)
                        {
                            var_118 = 7;
                            uu_test::eval::panic_cold_explicit::h92b4006982236d13();
                            /* no return */
                        }
                        
                        *(arg2 + 0x10) = rcx - 3;
                        int64_t rcx_16 = (rcx - 3) * 5;
                        var_118 = *(rax_1 + (rcx_16 << 3));
                        int64_t var_f8_7 = *(rax_1 + (rcx_16 << 3) + 0x20);
                        var_108 = *(rax_1 + (rcx_16 << 3) + 0x10);
                        
                        if (var_118 != 3)
                        {
                            uu_test::eval::panic_cold_explicit::h92b4006982236d13();
                            /* no return */
                        }
                        
                        int64_t var_b8_3 = var_100;
                        var_c8 = var_110;
                        uu_test::files::h2d66ad67db33f3bc(&var_118, *var_c8[8], var_100, 
                            *var_e8[8], var_100, *var_98[8], rdi);
                        int64_t rcx_18 = var_118;
                        bool rax_21 = var_110;
                        
                        if (rcx_18 != 7)
                        {
                            arg1[3] = var_100;
                            *(arg1 + 9) = var_10f;
                            *arg1 = rcx_18;
                            arg1[1] = rax_21;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_c8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_98);
                        }
                        else
                        {
                            arg1[1] = rax_21;
                            *arg1 = 7;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_c8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_98);
                            rcx_6 = 1;
                            rdx_5 = 0;
                            rax_6 = 1;
                            label_4aca00:
                            int64_t rsi_46 = *var_78_1[8];
                            
                            if (!rsi_46)
                            {
                                if (rcx_6)
                                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_68);
                            }
                            else if (rsi_46 != 1)
                            {
                                if (rdx_5)
                                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_68);
                            }
                            else if (rax_6)
                                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_68);
                        }
                    }
                    else
                    {
                        var_98 = var_68;
                        
                        if (rcx == 1)
                        {
                            var_118 = 7;
                            uu_test::eval::panic_cold_explicit::ha5be655c7f68869b();
                            /* no return */
                        }
                        
                        *(arg2 + 0x10) = rcx - 2;
                        int64_t rsi_9 = (rcx - 2) * 5;
                        var_118 = *(rax_1 + (rsi_9 << 3));
                        int64_t var_f8_1 = *(rax_1 + (rsi_9 << 3) + 0x20);
                        var_108 = *(rax_1 + (rsi_9 << 3) + 0x10);
                        
                        if (var_118 != 3)
                        {
                            uu_test::eval::panic_cold_explicit::ha5be655c7f68869b();
                            /* no return */
                        }
                        
                        var_e8 = var_110;
                        
                        if (rcx == 2)
                        {
                            var_118 = 7;
                            uu_test::eval::panic_cold_explicit::h5cb2ec545d1e8498();
                            /* no return */
                        }
                        
                        *(arg2 + 0x10) = rcx - 3;
                        int64_t rcx_3 = (rcx - 3) * 5;
                        var_118 = *(rax_1 + (rcx_3 << 3));
                        int64_t var_f8_2 = *(rax_1 + (rcx_3 << 3) + 0x20);
                        var_108 = *(rax_1 + (rcx_3 << 3) + 0x10);
                        
                        if (var_118 != 3)
                        {
                            uu_test::eval::panic_cold_explicit::h5cb2ec545d1e8498();
                            /* no return */
                        }
                        
                        int64_t var_b8_1 = var_100;
                        var_c8 = var_110;
                        uu_test::integers::he37c408d0a55d011(&var_118, *var_c8[8], var_100, 
                            *var_e8[8], var_100, *var_98[8], rdi);
                        int64_t rcx_5 = var_118;
                        bool rax_5 = var_110;
                        
                        if (rcx_5 == 7)
                        {
                            arg1[1] = rax_5;
                            *arg1 = 7;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_c8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_98);
                            rcx_6 = 1;
                            rax_6 = 0;
                            label_4ac9fe:
                            rdx_5 = 1;
                            goto label_4aca00;
                        }
                        
                        arg1[3] = var_100;
                        *(arg1 + 9) = var_10f;
                        *arg1 = rcx_5;
                        arg1[1] = rax_5;
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_c8);
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_98);
                    }
                    break;
                }
                case 5:
                {
                    if (!*var_78_1[8])
                    {
                        int128_t var_48 = var_68;
                        
                        if (rcx == 1)
                        {
                            label_4ac4a7:
                            arg1[1] = 1;
                            *arg1 = 7;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_48);
                        }
                        else
                        {
                            *(arg2 + 0x10) = rcx - 2;
                            int64_t rcx_12 = (rcx - 2) * 5;
                            var_118 = *(rax_1 + (rcx_12 << 3));
                            int64_t var_f8_4 = *(rax_1 + (rcx_12 << 3) + 0x20);
                            var_108 = *(rax_1 + (rcx_12 << 3) + 0x10);
                            int64_t rax_18 = var_118;
                            int64_t var_88_3;
                            
                            if (rax_18 == 3)
                            {
                                var_88_3 = var_100;
                                var_98 = var_110;
                                label_4acaac:
                                bool rdx_22 = var_88_3;
                                
                                if (_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(*var_48[8], rdi, "-z-eq-ne-gt-ge-lt-le-ef-nt-ot"))
                                    rdx_22 = !var_88_3;
                                
                                arg1[1] = rdx_22;
                                *arg1 = 7;
                                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_98);
                                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_48);
                                
                                if (*var_78_1[8])
                                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_68);
                            }
                            else
                            {
                                if (rax_18 == 6)
                                {
                                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(
                                        &var_c8, 1, 0);
                                    var_88_3 = var_b8;
                                    var_98 = var_c8;
                                    
                                    if (~var_118 & 3)
                                        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_118);
                                    
                                    goto label_4acaac;
                                }
                                
                                if (rax_18 == 7)
                                    goto label_4ac4a7;
                                
                                var_c8 = 1;
                                var_c8 = var_48;
                                char var_b0_1 = 1;
                                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&var_e8, &var_c8);
                                int64_t var_d8;
                                arg1[3] = var_d8;
                                *(arg1 + 8) = var_e8;
                                *arg1 = 3;
                                int64_t rax_46 = var_118;
                                
                                if (rax_46 == 3)
                                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_110);
                                else if (rax_46 != 7)
                                    core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_118);
                                
                                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_48);
                            }
                        }
                    }
                    else
                    {
                        var_e8 = var_68;
                        uint64_t var_d8_3 = rdi;
                        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_118, *var_e8[8], rdi);
                        
                        if (var_118)
                        {
                            core::option::unwrap_failed::h0e11329e76906eaa();
                            /* no return */
                        }
                        
                        int64_t rax_7 = *(arg2 + 0x10);
                        
                        if (!rax_7)
                        {
                            var_118 = 7;
                            uu_test::eval::panic_cold_explicit::h361454b4f33cbd30();
                            /* no return */
                        }
                        
                        int64_t r15_2 = var_110;
                        uint64_t r12_1 = var_108;
                        *(arg2 + 0x10) = rax_7 - 1;
                        int64_t rcx_7 = *(arg2 + 8);
                        int64_t rax_9 = (rax_7 - 1) * 5;
                        var_118 = *(rcx_7 + (rax_9 << 3));
                        int64_t var_f8_3 = *(rcx_7 + (rax_9 << 3) + 0x20);
                        var_108 = *(rcx_7 + (rax_9 << 3) + 0x10);
                        
                        if (var_118 != 3)
                        {
                            uu_test::eval::panic_cold_explicit::h361454b4f33cbd30();
                            /* no return */
                        }
                        
                        var_c8 = var_110;
                        bool rax_37;
                        char rcx_8;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-b-a-o!=src/uu/test/src/test.rs-…", 2))
                        {
                            rcx_8 = 1;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-c-d-e-f-g-G-h-k-L-N-O-p-r-S-s-t…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 2;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-d-e-f-g-G-h-k-L-N-O-p-r-S-s-t-u…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 3;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-e-f-g-G-h-k-L-N-O-p-r-S-s-t-u-w…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 5;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-f-g-G-h-k-L-N-O-p-r-S-s-t-u-w-x…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 6;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-g-G-h-k-L-N-O-p-r-S-s-t-u-w-x-b…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 7;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-G-h-k-L-N-O-p-r-S-s-t-u-w-x-b-a…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 8;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-h-k-L-N-O-p-r-S-s-t-u-w-x-b-a-o…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 9;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-k-L-N-O-p-r-S-s-t-u-w-x-b-a-o!=…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 8;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-L-N-O-p-r-S-s-t-u-w-x-b-a-o!=sr…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 4;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-N-O-p-r-S-s-t-u-w-x-b-a-o!=src/…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 0xa;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-O-p-r-S-s-t-u-w-x-b-a-o!=src/uu…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 0xb;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-p-r-S-s-t-u-w-x-b-a-o!=src/uu/t…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 0xc;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-r-S-s-t-u-w-x-b-a-o!=src/uu/tes…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 0xd;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-S-s-t-u-w-x-b-a-o!=src/uu/test/…", 2))
                                goto label_4ac86c;
                            
                            rcx_8 = 0xe;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-s-t-u-w-x-b-a-o!=src/uu/test/sr…", 2))
                                goto label_4ac86c;
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-t-u-w-x-b-a-o!=src/uu/test/src/…", 2))
                            {
                                rcx_8 = 0xf;
                                
                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-u-w-x-b-a-o!=src/uu/test/src/te…", 2))
                                {
                                    rcx_8 = 0x10;
                                    
                                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-w-x-b-a-o!=src/uu/test/src/test…", 2))
                                    {
                                        rcx_8 = 0x11;
                                        
                                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-x-b-a-o!=src/uu/test/src/test.r…", 2))
                                        {
                                            uu_test::eval::panic_cold_explicit::h81c4b099897e5224();
                                            /* no return */
                                        }
                                    }
                                }
                                
                                goto label_4ac86c;
                            }
                            
                            uu_test::isatty::h35113a9be9add355(&var_118, *var_c8[8], var_100);
                            int64_t rcx_23 = var_118;
                            rax_37 = var_110;
                            
                            if (rcx_23 == 7)
                            {
                                rax_37 = rax_37;
                                goto label_4ac871;
                            }
                            
                            arg1[3] = var_100;
                            *(arg1 + 9) = var_10f;
                            *arg1 = rcx_23;
                            arg1[1] = rax_37;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_c8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                        }
                        else
                        {
                            rcx_8 = 0;
                            label_4ac86c:
                            rax_37 = uu_test::path::h72a91cd3b6f0d02c(*var_c8[8], var_100, rcx_8);
                            label_4ac871:
                            arg1[1] = rax_37;
                            *arg1 = 7;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_c8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                            
                            if (!*var_78_1[8])
                                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_68);
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
