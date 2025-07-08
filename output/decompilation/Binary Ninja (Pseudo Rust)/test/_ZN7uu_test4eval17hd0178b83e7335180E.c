
  fn uu_test::eval::hd0178b83e7335180(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let rcx: i64 = *arg2.byte_offset(0x10);
    
    if rcx == 0
    {
        arg1[1] = 0;
        *arg1 = 7;
    }
    else
    {
        *arg2.byte_offset(0x10) = rcx - 1;
        let rax_1: i64 = *arg2.byte_offset(8);
        let rsi: i64 = (rcx - 1) * 5;
        let rdi: u64 = *(rax_1 + (rsi << 3) + 0x20);
        let var_78_1: i128 = *(rax_1 + (rsi << 3));
        let mut var_68: i128 = *(rax_1 + (rsi << 3) + 0x10);
        let mut var_118: i64;
        let mut var_110: bool;
        let var_10f: i128;
        let mut var_108: u64;
        let mut var_100: i64;
        let mut var_e8: i128;
        let mut var_c8: i128;
        let mut var_b8: i64;
        let mut var_98: i128;
        
        if var_78_1 - 1 > 6
        {
            *arg1 = 0;
        }
        else
        {
            match var_78_1
            {
                1 =>
                {
                    uu_test::eval::hd0178b83e7335180(&var_118, arg2);
                    let rcx_1: i64 = var_118;
                    let rax_3: bool = var_110;
                    
                    if rcx_1 != 7
                    {
                        arg1[3] = var_100;
                        *arg1.byte_offset(9) = var_10f;
                        *arg1 = rcx_1;
                        arg1[1] = rax_3;
                    }
                    else
                    {
                        arg1[1] = rax_3 ^ 1;
                        *arg1 = 7;
                    }
                }
                2 =>
                {
                    var_e8 = var_78_1;
                    let r14_1: u64 = *var_68[8];
                    let mut r15_1: i64 = *var_e8[8];
                    
                    if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(r15_1, r14_1, "-a-o!=src/uu/test/src/test.rs-z-…") != 0
                    {
                        if *arg2.byte_offset(0x10) <= 1
                        {
                            goto 'label_4ac378;
                        }
                        
                        goto 'label_4ac3c5;
                    }
                    
                    if (_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(r15_1, r14_1, "-o!=src/uu/test/src/test.rs-z-eq…")
                        & *arg2.byte_offset(0x10) < 2) != 1
                    {
                        'label_4ac3c5:
                        uu_test::eval::hd0178b83e7335180(&var_118, arg2);
                        let rax_15: i64 = var_118;
                        let rbp_1: bool = var_110;
                        
                        if rax_15 != 7
                        {
                            arg1[3] = var_100;
                            *arg1.byte_offset(9) = var_10f;
                            *arg1 = rax_15;
                            arg1[1] = rbp_1;
                        }
                        else
                        {
                            uu_test::eval::hd0178b83e7335180(&var_118, arg2);
                            let rax_16: i64 = var_118;
                            let r14_2: bool = var_110;
                            
                            if rax_16 != 7
                            {
                                arg1[3] = var_100;
                                *arg1.byte_offset(9) = var_10f;
                                *arg1 = rax_16;
                                arg1[1] = r14_2;
                            }
                            else
                            {
                                let rax_17: i8 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(*var_e8[8], r14_1, 
                                    "-a-o!=src/uu/test/src/test.rs-z-…");
                                let mut rcx_10: bool = false;
                                let mut rsi_19: bool = true;
                                
                                if r14_2 == 0
                                {
                                    rsi_19 = rbp_1;
                                }
                                
                                if r14_2 != 0
                                {
                                    rcx_10 = rbp_1;
                                }
                                
                                if rax_17 == 0
                                {
                                    rcx_10 = rsi_19;
                                }
                                
                                arg1[1] = rcx_10;
                                *arg1 = 7;
                            }
                        }
                    }
                    else
                    {
                        r15_1 = *var_e8[8];
                        'label_4ac378:
                        var_118 = 1;
                        var_110 = r15_1;
                        let var_108_2: u64 = r14_1;
                        var_100 = 1;
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(
                            &var_c8, &var_118);
                        arg1[3] = var_b8;
                        *arg1.byte_offset(8) = var_c8;
                        *arg1 = 6;
                    }
                    
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(
                        &var_e8);
                }
                3 =>
                {
                    let rax_12: i64 = *var_68[8];
                    let var_108_1: i64 = rax_12;
                    var_118 = var_78_1;
                    arg1[1] = rax_12 != 0;
                    *arg1 = 7;
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(
                        &var_118);
                }
                4 =>
                {
                    let rsi_7: i64 = *var_78_1[8];
                    let mut rax_6: i8;
                    let mut rcx_6: i8;
                    
                    if rsi_7 == 0
                    {
                        var_e8 = var_68;
                        
                        if rcx == 1
                        {
                            var_c8 = 7;
                            var_118 = 7;
                        }
                        else
                        {
                            *arg2.byte_offset(0x10) = rcx - 2;
                            let rdx_13: i64 = (rcx - 2) * 5;
                            let var_a8_1: i64 = *(rax_1 + (rdx_13 << 3) + 0x20);
                            var_b8 = *(rax_1 + (rdx_13 << 3) + 0x10);
                            var_c8 = *(rax_1 + (rdx_13 << 3));
                            
                            if rcx == 2
                            {
                                var_118 = 7;
                            }
                            else
                            {
                                *arg2.byte_offset(0x10) = rcx - 3;
                                let rcx_14: i64 = (rcx - 3) * 5;
                                let var_f8_5: i64 = *(rax_1 + (rcx_14 << 3) + 0x20);
                                var_108 = *(rax_1 + (rcx_14 << 3) + 0x10);
                                var_118 = *(rax_1 + (rcx_14 << 3));
                            }
                        }
                        
                        let mut rax_38: bool = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(*var_e8[8], rdi, 
                            "!=src/uu/test/src/test.rs-z-eq-n…");
                        let rdx_21: i64 = var_118;
                        let rcx_20: i32 = var_c8;
                        
                        if rax_38 == 0
                        {
                            rax_38 = rcx_20 == 7 & rdx_21 == 7;
                            
                            if rdx_21 != 7 && rcx_20 != 7
                            {
                                rax_38 = _$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::h838c2774cc7a2a63(&var_118, &var_c8);
                            }
                        }
                        else if rdx_21 != 7
                        {
                            rax_38 = true;
                            
                            if rcx_20 != 7
                            {
                                rax_38 = _$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::h838c2774cc7a2a63(&var_118, &var_c8) ^ 1;
                            }
                        }
                        else
                        {
                            rax_38 = rcx_20 != 7;
                        }
                        
                        arg1[1] = rax_38;
                        *arg1 = 7;
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_test..parser..Symbol$GT$$GT$::hbb35a5714e5c51fc(&var_118);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_test..parser..Symbol$GT$$GT$::hbb35a5714e5c51fc(&var_c8);
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                        rax_6 = 1;
                        rcx_6 = 0;
                        goto 'label_4ac9fe;
                    }
                    
                    let mut rdx_5: i8;
                    
                    if rsi_7 != 1
                    {
                        var_98 = var_68;
                        
                        if rcx == 1
                        {
                            var_118 = 7;
                            uu_test::eval::panic_cold_explicit::h5b16dc8738e204df();
                            /* no return */
                        }
                        
                        *arg2.byte_offset(0x10) = rcx - 2;
                        let rsi_23: i64 = (rcx - 2) * 5;
                        var_118 = *(rax_1 + (rsi_23 << 3));
                        let var_f8_6: i64 = *(rax_1 + (rsi_23 << 3) + 0x20);
                        var_108 = *(rax_1 + (rsi_23 << 3) + 0x10);
                        
                        if var_118 != 3
                        {
                            uu_test::eval::panic_cold_explicit::h5b16dc8738e204df();
                            /* no return */
                        }
                        
                        var_e8 = var_110;
                        
                        if rcx == 2
                        {
                            var_118 = 7;
                            uu_test::eval::panic_cold_explicit::h92b4006982236d13();
                            /* no return */
                        }
                        
                        *arg2.byte_offset(0x10) = rcx - 3;
                        let rcx_16: i64 = (rcx - 3) * 5;
                        var_118 = *(rax_1 + (rcx_16 << 3));
                        let var_f8_7: i64 = *(rax_1 + (rcx_16 << 3) + 0x20);
                        var_108 = *(rax_1 + (rcx_16 << 3) + 0x10);
                        
                        if var_118 != 3
                        {
                            uu_test::eval::panic_cold_explicit::h92b4006982236d13();
                            /* no return */
                        }
                        
                        let var_b8_3: i64 = var_100;
                        var_c8 = var_110;
                        uu_test::files::h2d66ad67db33f3bc(&var_118, *var_c8[8], var_100, 
                            *var_e8[8], var_100, *var_98[8], rdi);
                        let rcx_18: i64 = var_118;
                        let rax_21: bool = var_110;
                        
                        if rcx_18 != 7
                        {
                            arg1[3] = var_100;
                            *arg1.byte_offset(9) = var_10f;
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
                            'label_4aca00:
                            let rsi_46: i64 = *var_78_1[8];
                            
                            if rsi_46 == 0
                            {
                                if rcx_6 != 0
                                {
                                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_68);
                                }
                            }
                            else if rsi_46 != 1
                            {
                                if rdx_5 != 0
                                {
                                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_68);
                                }
                            }
                            else if rax_6 != 0
                            {
                                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_68);
                            }
                        }
                    }
                    else
                    {
                        var_98 = var_68;
                        
                        if rcx == 1
                        {
                            var_118 = 7;
                            uu_test::eval::panic_cold_explicit::ha5be655c7f68869b();
                            /* no return */
                        }
                        
                        *arg2.byte_offset(0x10) = rcx - 2;
                        let rsi_9: i64 = (rcx - 2) * 5;
                        var_118 = *(rax_1 + (rsi_9 << 3));
                        let var_f8_1: i64 = *(rax_1 + (rsi_9 << 3) + 0x20);
                        var_108 = *(rax_1 + (rsi_9 << 3) + 0x10);
                        
                        if var_118 != 3
                        {
                            uu_test::eval::panic_cold_explicit::ha5be655c7f68869b();
                            /* no return */
                        }
                        
                        var_e8 = var_110;
                        
                        if rcx == 2
                        {
                            var_118 = 7;
                            uu_test::eval::panic_cold_explicit::h5cb2ec545d1e8498();
                            /* no return */
                        }
                        
                        *arg2.byte_offset(0x10) = rcx - 3;
                        let rcx_3: i64 = (rcx - 3) * 5;
                        var_118 = *(rax_1 + (rcx_3 << 3));
                        let var_f8_2: i64 = *(rax_1 + (rcx_3 << 3) + 0x20);
                        var_108 = *(rax_1 + (rcx_3 << 3) + 0x10);
                        
                        if var_118 != 3
                        {
                            uu_test::eval::panic_cold_explicit::h5cb2ec545d1e8498();
                            /* no return */
                        }
                        
                        let var_b8_1: i64 = var_100;
                        var_c8 = var_110;
                        uu_test::integers::he37c408d0a55d011(&var_118, *var_c8[8], var_100, 
                            *var_e8[8], var_100, *var_98[8], rdi);
                        let rcx_5: i64 = var_118;
                        let rax_5: bool = var_110;
                        
                        if rcx_5 == 7
                        {
                            arg1[1] = rax_5;
                            *arg1 = 7;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_c8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_98);
                            rcx_6 = 1;
                            rax_6 = 0;
                            'label_4ac9fe:
                            rdx_5 = 1;
                            goto 'label_4aca00;
                        }
                        
                        arg1[3] = var_100;
                        *arg1.byte_offset(9) = var_10f;
                        *arg1 = rcx_5;
                        arg1[1] = rax_5;
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_c8);
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_98);
                    }
                }
                5 =>
                {
                    if *var_78_1[8] == 0
                    {
                        let mut var_48: i128 = var_68;
                        
                        if rcx == 1
                        {
                            'label_4ac4a7:
                            arg1[1] = 1;
                            *arg1 = 7;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_48);
                        }
                        else
                        {
                            *arg2.byte_offset(0x10) = rcx - 2;
                            let rcx_12: i64 = (rcx - 2) * 5;
                            var_118 = *(rax_1 + (rcx_12 << 3));
                            let var_f8_4: i64 = *(rax_1 + (rcx_12 << 3) + 0x20);
                            var_108 = *(rax_1 + (rcx_12 << 3) + 0x10);
                            let rax_18: i64 = var_118;
                            let mut var_88_3: i64;
                            
                            if rax_18 == 3
                            {
                                var_88_3 = var_100;
                                var_98 = var_110;
                                'label_4acaac:
                                let mut rdx_22: bool = var_88_3 != 0;
                                
                                if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(*var_48[8], rdi, "-z-eq-ne-gt-ge-lt-le-ef-nt-ot") != 0
                                {
                                    rdx_22 = var_88_3 == 0;
                                }
                                
                                arg1[1] = rdx_22;
                                *arg1 = 7;
                                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_98);
                                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_48);
                                
                                if *var_78_1[8] != 0
                                {
                                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_68);
                                }
                            }
                            else
                            {
                                if rax_18 == 6
                                {
                                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(
                                        &var_c8, 1, 0);
                                    var_88_3 = var_b8;
                                    var_98 = var_c8;
                                    
                                    if (!var_118 & 3) != 0
                                    {
                                        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_118);
                                    }
                                    
                                    goto 'label_4acaac;
                                }
                                
                                if rax_18 == 7
                                {
                                    goto 'label_4ac4a7;
                                }
                                
                                var_c8 = 1;
                                var_c8 = var_48;
                                let var_b0_1: i8 = 1;
                                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&var_e8, &var_c8);
                                let var_d8: i64;
                                arg1[3] = var_d8;
                                *arg1.byte_offset(8) = var_e8;
                                *arg1 = 3;
                                let rax_46: i64 = var_118;
                                
                                if rax_46 == 3
                                {
                                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_110);
                                }
                                else if rax_46 != 7
                                {
                                    core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_118);
                                }
                                
                                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_48);
                            }
                        }
                    }
                    else
                    {
                        var_e8 = var_68;
                        let var_d8_3: u64 = rdi;
                        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_118, *var_e8[8], rdi);
                        
                        if var_118 != 0
                        {
                            core::option::unwrap_failed::h0e11329e76906eaa();
                            /* no return */
                        }
                        
                        let rax_7: i64 = *arg2.byte_offset(0x10);
                        
                        if rax_7 == 0
                        {
                            var_118 = 7;
                            uu_test::eval::panic_cold_explicit::h361454b4f33cbd30();
                            /* no return */
                        }
                        
                        let r15_2: i64 = var_110;
                        let r12_1: u64 = var_108;
                        *arg2.byte_offset(0x10) = rax_7 - 1;
                        let rcx_7: i64 = *arg2.byte_offset(8);
                        let rax_9: i64 = (rax_7 - 1) * 5;
                        var_118 = *(rcx_7 + (rax_9 << 3));
                        let var_f8_3: i64 = *(rcx_7 + (rax_9 << 3) + 0x20);
                        var_108 = *(rcx_7 + (rax_9 << 3) + 0x10);
                        
                        if var_118 != 3
                        {
                            uu_test::eval::panic_cold_explicit::h361454b4f33cbd30();
                            /* no return */
                        }
                        
                        var_c8 = var_110;
                        let mut rax_37: bool;
                        let mut rcx_8: i8;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-b-a-o!=src/uu/test/src/test.rs-…", 2) == 0
                        {
                            rcx_8 = 1;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-c-d-e-f-g-G-h-k-L-N-O-p-r-S-s-t…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 2;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-d-e-f-g-G-h-k-L-N-O-p-r-S-s-t-u…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 3;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-e-f-g-G-h-k-L-N-O-p-r-S-s-t-u-w…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 5;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-f-g-G-h-k-L-N-O-p-r-S-s-t-u-w-x…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 6;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-g-G-h-k-L-N-O-p-r-S-s-t-u-w-x-b…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 7;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-G-h-k-L-N-O-p-r-S-s-t-u-w-x-b-a…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 8;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-h-k-L-N-O-p-r-S-s-t-u-w-x-b-a-o…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 9;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-k-L-N-O-p-r-S-s-t-u-w-x-b-a-o!=…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 8;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-L-N-O-p-r-S-s-t-u-w-x-b-a-o!=sr…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 4;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-N-O-p-r-S-s-t-u-w-x-b-a-o!=src/…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 0xa;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-O-p-r-S-s-t-u-w-x-b-a-o!=src/uu…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 0xb;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-p-r-S-s-t-u-w-x-b-a-o!=src/uu/t…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 0xc;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-r-S-s-t-u-w-x-b-a-o!=src/uu/tes…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 0xd;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-S-s-t-u-w-x-b-a-o!=src/uu/test/…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            rcx_8 = 0xe;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-s-t-u-w-x-b-a-o!=src/uu/test/sr…", 2) != 0
                            {
                                goto 'label_4ac86c;
                            }
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-t-u-w-x-b-a-o!=src/uu/test/src/…", 2) == 0
                            {
                                rcx_8 = 0xf;
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-u-w-x-b-a-o!=src/uu/test/src/te…", 2) == 0
                                {
                                    rcx_8 = 0x10;
                                    
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-w-x-b-a-o!=src/uu/test/src/test…", 2) == 0
                                    {
                                        rcx_8 = 0x11;
                                        
                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(r15_2, r12_1, "-x-b-a-o!=src/uu/test/src/test.r…", 2)
                                            == 0
                                        {
                                            uu_test::eval::panic_cold_explicit::h81c4b099897e5224();
                                            /* no return */
                                        }
                                    }
                                }
                                
                                goto 'label_4ac86c;
                            }
                            
                            uu_test::isatty::h35113a9be9add355(&var_118, *var_c8[8], var_100);
                            let rcx_23: i64 = var_118;
                            rax_37 = var_110;
                            
                            if rcx_23 == 7
                            {
                                rax_37 = rax_37 != 0;
                                goto 'label_4ac871;
                            }
                            
                            arg1[3] = var_100;
                            *arg1.byte_offset(9) = var_10f;
                            *arg1 = rcx_23;
                            arg1[1] = rax_37;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_c8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                        }
                        else
                        {
                            rcx_8 = 0;
                            'label_4ac86c:
                            rax_37 = uu_test::path::h72a91cd3b6f0d02c(*var_c8[8], var_100, rcx_8);
                            'label_4ac871:
                            arg1[1] = rax_37;
                            *arg1 = 7;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_c8);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_e8);
                            
                            if *var_78_1[8] == 0
                            {
                                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&var_68);
                            }
                        }
                    }
                }
                6 | 7 =>
                {
                    arg1[1] = 0;
                    *arg1 = 7;
                }
            }
        }
    }
    
    arg1
}
