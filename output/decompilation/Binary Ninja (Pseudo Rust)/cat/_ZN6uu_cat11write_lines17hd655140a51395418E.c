
  fn uu_cat::write_lines::hd655140a51395418(arg1: *mut *mut *mut [i8; 0x92], arg2: *mut i64, arg3: *mut i8, arg4: *mut i64) -> i64

{
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let var_4030: i64 = 0;
    let var_5030: i64 = 0;
    let var_6030: i64 = 0;
    let var_7030: i64 = 0;
    let mut r15: *mut i64 = arg2;
    let mut var_7c30: ();
    memset(&var_7c30, 0, 0x7c00);
    std::io::stdio::stdout::h077da66234850927();
    let mut var_7c78: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_7d00: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_7c78);
    let rax_1: i8 = arg3[4];
    let temp0: i8 = arg3[2];
    let mut rdx: *const i8 = "$\n^M^I^?unknown filetype: Is a …";
    
    if temp0 == 0
    {
        rdx = "\n-src/uu/cat/src/cat.rs\t$\n^M^…";
    }
    
    let mut rcx: i64;
    rcx = temp0 != 0;
    let mut var_7ce0: *mut *mut c_void = &data_518710;
    let rax_2: i8 = arg3[1];
    let rax_3: i8 = arg3[3];
    let var_7cf0: *mut i64 = r15;
    let mut var_7cd8: i64;
    
    loop
    {
        let mut rax_4: i64;
        let mut rdx_1: i64;
        rax_4 = _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read::he53d1eaa77b53b09(
            r15, &var_7c30, 0x7c00);
        var_7cd8 = rax_4;
        let var_7cd0_1: i64 = rdx_1;
        
        if rax_4 != 0
        {
            break;
        }
        
        if rdx_1 == 0
        {
            break;
        }
        
        let mut rax_5: *mut i8;
        let mut rdx_2: i64;
        rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(rdx_1, &var_7c30, 0x7c00);
        let mut r12_1: i64 = 0;
        
        loop
        {
            if rdx_2 > r12_1
            {
                let mut var_7cc8: *mut *mut [i8; 0x92];
                let mut var_7cc0: i128;
                let mut rax_7: *mut *mut [i8; 0x92];
                
                if rax_5[r12_1] != 0xa
                {
                    let mut rax_8: *mut *mut [i8; 0x92];
                    
                    if *arg4.byte_offset(9) == 0
                    {
                        *arg4.byte_offset(0xa) = 0;
                        
                        if arg4[1] != 0 && rax_1 != 0
                        {
                            let mut var_7c70: *mut i64 = arg4;
                            let var_7c68_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            var_7cc8 = 2;
                            *var_7cc0[8] = 0;
                            let var_7cb0_1: i64 = 6;
                            let var_7ca8_1: i64 = 0;
                            let var_7ca0_1: i64 = 0x20;
                            let var_7c98_1: i8 = 3;
                            let mut var_7c60: *mut c_void = &data_518728;
                            let var_7c58_1: i64 = 2;
                            let var_7c40_1: *mut *mut *mut [i8; 0x92] = &var_7cc8;
                            let var_7c38_1: i64 = 1;
                            let var_7c50_1: *mut *mut i64 = &var_7c70;
                            let var_7c48_1: i64 = 1;
                            rax_8 =
                                std::io::Write::write_fmt::h6cba046ccfa3b685(&var_7d00, &var_7c60);
                            
                            if rax_8 != 0
                            {
                                goto 'label_4b03e8;
                            }
                            
                            *arg4 += 1;
                        }
                    }
                    else
                    {
                        rax_8 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_7d00, "\r\n-src/uu/cat/src/cat.rs\t$\n^…", 1);
                        
                        if rax_8 != 0
                        {
                            'label_4b03e8:
                            *arg1 = -0x8000000000000000;
                            arg1[1] = rax_8;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&var_7cd8);
                            return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(var_7d00);
                        }
                        
                        arg4[1] = 0;
                        *arg4.byte_offset(0xa) = 0;
                    }
                    let rax_9: i64 = uu_cat::write_end::h5e37c7be961ff133(&var_7d00, &rax_5[r12_1], 
                        rdx_2 - r12_1, rax_2, rax_3);
                    let rax_10: i64 = rax_9 + r12_1;
                    
                    if rax_10 == rdx_2
                    {
                        arg4[1] = 0;
                        'label_4b03a4:
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&var_7cd8);
                        r15 = var_7cf0;
                        break;
                    }
                    
                    if rax_10 < rdx_2
                    {
                        let rcx_5: u32 = rax_5[rax_10];
                        
                        if rcx_5 == 0xa
                        {
                            uu_cat::write_end_of_line::h4ed837c9dff89e3f(&var_7cc8, &var_7d00, rdx, 
                                rcx + 1, var_7cf0[1]);
                            rax_7 = var_7cc8;
                            
                            if rax_7 != -0x7ffffffffffffffa
                            {
                                goto 'label_4b03cc;
                            }
                            
                            arg4[1] = 1;
                            r12_1 = r12_1 + rax_9 + 1;
                            goto 'label_4b0180;
                        }
                        
                        if rcx_5 == 0xd
                        {
                            *arg4.byte_offset(9) = 1;
                            r12_1 = r12_1 + rax_9 + 1;
                            goto 'label_4b0180;
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
                    
                    if rax_7 != -0x7ffffffffffffffa
                    {
                        'label_4b03cc:
                        *arg1.byte_offset(8) = var_7cc0;
                        *arg1 = rax_7;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&var_7cd8);
                        return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(var_7d00);
                    }
                    
                    arg4[1] = 1;
                    r12_1 += 1;
                    'label_4b0180:
                    
                    if r12_1 >= rdx_1
                    {
                        goto 'label_4b03a4;
                    }
                    
                    continue;
                }
            }
            
            core::panicking::panic_bounds_check::h25a5330941572dd1(r12_1, rdx_2);
            /* no return */
        }
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&var_7cd8);
    *arg1 = -0x8000000000000006;
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(var_7d00)
}
