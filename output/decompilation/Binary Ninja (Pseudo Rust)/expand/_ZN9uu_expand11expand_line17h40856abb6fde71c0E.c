
  fn uu_expand::expand_line::h40856abb6fde71c0(arg1: *mut c_void, arg2: *mut i64, arg3: *mut i64, arg4: i64, arg5: *mut c_void) -> *mut *mut c_void

{
    let var_50: *mut i64 = arg3;
    let r14: i64 = *arg1.byte_offset(0x10);
    let mut rax_16: *mut *mut c_void;
    
    if r14 != 0
    {
        let rax_1: i8 = *arg5.byte_offset(0x49);
        let rax_2: i8 = *arg5.byte_offset(0x48);
        let rax_3: *mut i8 = *arg5.byte_offset(0x38);
        let rax_4: *mut c_void = *arg5.byte_offset(0x40);
        let var_88_1: *mut i8 = *arg1.byte_offset(8);
        let mut rax_6: *mut i8;
        rax_6 = 1;
        let mut var_9c_1: i8 = rax_6;
        let rax_7: i8 = *arg5.byte_offset(0x4a);
        let mut var_98_1: i64 = 0;
        let mut rbp_1: i64 = 0;
        
        do
        {
            let rcx_3: i8 = var_88_1[rbp_1];
            let mut var_70: i64;
            let var_68: i64;
            let var_60: u64;
            let mut rax_8: u64;
            let mut rcx: i64;
            let mut rdx_7: *mut i8;
            let mut rbx_1: i64;
            let mut rsi: i64;
            let mut rdi: i64;
            let mut r12_2: i32;
            
            if rax_1 != 0
            {
                let mut r13_3: i64;
                r13_3 = rcx_3 < 0;
                let rsi_3: i64 = rbp_1 + 1 + r13_3;
                rbx_1 = 1;
                rax_8 = 1;
                
                if rsi_3 > r14
                {
                    'label_4b2bf0:
                    var_98_1 += rax_8;
                    
                    if rbp_1 >= r14
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rbp_1, r14);
                        /* no return */
                    }
                    
                    'label_4b2bfe:
                    rdx_7 = var_88_1;
                    let mut rax_10: i8 = var_9c_1;
                    
                    if rdx_7[rbp_1] != 0x20
                    {
                        rax_10 = 0;
                    }
                    
                    var_9c_1 = rax_10;
                    rsi = rbx_1 + rbp_1;
                    rdi = rbp_1;
                    rcx = r14;
                    goto 'label_4b2c2b;
                }
                
                let mut rax_13: *mut i8;
                let mut rdx_3: i64;
                rax_13 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h165bffab35878e2a(rbp_1, rsi_3, var_88_1, r14);
                core::str::converts::from_utf8::ha1effb4cca6d9901(&var_70, rax_13, rdx_3);
                
                if var_70 != 0
                {
                    rax_8 = 1;
                    r12_2 = 2;
                    goto 'label_4b2d03;
                }
                
                let mut var_40: i64 = var_68;
                let var_38_1: i64 = var_60 + var_68;
                let mut rax_15: i32;
                let mut rdx_4: i32;
                rax_15 = core::str::validations::next_code_point::h87ad66f27761ddf6(&var_40, 1);
                
                if rax_15 == 0
                {
                    rdx_4 = 0x110000;
                }
                
                if rdx_4 == 8
                {
                    r12_2 = 0;
                    rax_8 = 0;
                }
                else if rdx_4 == 9
                {
                    r12_2 = 1;
                    rax_8 = 0;
                }
                else
                {
                    rax_8 = 1;
                    r12_2 = 2;
                    
                    if rdx_4 == 0x110000
                    {
                        goto 'label_4b2d03;
                    }
                    
                    if rdx_4 >= 0x7f
                    {
                        if rdx_4 < 0xa0
                        {
                            rax_8 = 0;
                        }
                        else
                        {
                            rax_8 =
                                unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(
                                rdx_4);
                        }
                    }
                    else if rdx_4 <= 0x1f
                    {
                        rax_8 = 0;
                    }
                }
                
                rbx_1 = r13_3 + 1;
                
                if r12_2 != 1
                {
                    goto 'label_4b2d12;
                }
                
                goto 'label_4b2df6;
            }
            
            arg3 = rcx_3 != 8;
            rax_8 = 1;
            
            if rcx_3 != 9
            {
                let mut r12_3: i32;
                r12_3 = arg3;
                r12_2 = r12_3 * 2;
                'label_4b2d03:
                rbx_1 = 1;
                
                if r12_2 == 1
                {
                    goto 'label_4b2df6;
                }
                
                'label_4b2d12:
                
                if r12_2 == 2
                {
                    goto 'label_4b2bf0;
                }
                
                let mut rcx_6: i64 = var_98_1 - 1;
                
                if var_98_1 < 1
                {
                    rcx_6 = 0;
                }
                
                var_98_1 = rcx_6;
                
                if rbp_1 < r14
                {
                    goto 'label_4b2bfe;
                }
                
                core::panicking::panic_bounds_check::h25a5330941572dd1(rbp_1, r14);
                /* no return */
            }
            
            rbx_1 = 1;
            'label_4b2df6:
            let rax_17: u64 =
                uu_expand::next_tabstop::h053856bdaef20e1a(var_50, arg4, var_98_1, rax_7);
            let mut r13_1: u64 = rax_17;
            var_98_1 += rax_17;
            let mut rsi_5: *mut i8;
            let mut rdi_6: *mut i64;
            let mut r12_1: i64;
            
            if (var_9c_1 & 1) == 0 && rax_2 != 0
            {
                rsi = rbx_1 + rbp_1;
                rdi = rbp_1;
                rdx_7 = var_88_1;
                rcx = r14;
                'label_4b2c2b:
                let mut rax_11: *mut i8;
                let mut rdx: u64;
                rax_11 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h165bffab35878e2a(rdi, rsi, rdx_7, rcx);
                r13_1 = rdx;
                r12_1 = arg2[2];
                
                if rdx >= *arg2 - r12_1
                {
                    rdi_6 = arg2;
                    rsi_5 = rax_11;
                    'label_4b2da9:
                    rax_16 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4607e557ce367ef1(rdi_6, rsi_5, r13_1);
                    
                    if rax_16 != 0
                    {
                        return rax_16;
                    }
                }
                else
                {
                    memcpy(arg2[1] + r12_1, rax_11, r13_1);
                    arg2[2] = r13_1 + r12_1;
                }
            }
            else if r13_1 <= rax_4
            {
                if r13_1 != 0 && r13_1 < rax_4 && rax_3[r13_1] <= 0xbf
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(rax_3, rax_4, nullptr, r13_1);
                    /* no return */
                }
                
                r12_1 = arg2[2];
                
                if r13_1 >= *arg2 - r12_1
                {
                    rdi_6 = arg2;
                    rsi_5 = rax_3;
                    goto 'label_4b2da9;
                }
                
                memcpy(arg2[1] + r12_1, rax_3, r13_1);
                arg2[2] = r13_1 + r12_1;
            }
            else
            {
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_70, 
                    " --tabs=0.0.28Convert tabs in ea…", 1, r13_1);
                let r12_6: i64 = arg2[2];
                
                if var_60 >= *arg2 - r12_6
                {
                    let rax_23: *mut *mut c_void = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4607e557ce367ef1(arg2, var_68, var_60);
                    
                    if rax_23 != 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(
                            &var_70);
                        return rax_23;
                    }
                }
                else
                {
                    memcpy(arg2[1] + r12_6, var_68, var_60);
                    arg2[2] = r12_6 + var_60;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&var_70);
            }
            rbp_1 += rbx_1;
        } while rbp_1 < r14;
    }
    
    rax_16 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h1b96ef1d18ffca54(arg2);
    
    if rax_16 != 0
    {
        return rax_16;
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::truncate::habfea7c34b2cc233(arg1, 0);
    nullptr
}
