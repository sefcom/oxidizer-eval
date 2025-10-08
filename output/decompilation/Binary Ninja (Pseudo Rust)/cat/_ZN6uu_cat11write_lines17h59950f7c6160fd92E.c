
  fn uu_cat::write_lines::h59950f7c6160fd92(arg1: *mut i64, arg2: *mut i32, arg3: *mut i8, arg4: *mut i8) -> i64

{
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let var_4030: i64 = 0;
    let var_5030: i64 = 0;
    let var_6030: i64 = 0;
    let var_7030: i64 = 0;
    let mut r12: *mut i32 = arg2;
    let mut var_7c30: ();
    memset(&var_7c30, 0, 0x7c00);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_7c68: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_7ca8: i64;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h324f64a3f2f04756(&var_7ca8, 
        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_7c68));
    let rax_1: i8 = arg3[4];
    let rcx: u64 = arg3[2];
    let mut rdx: *const i8 = "\n$\n^M\t^I^?unknown filetype: I…";
    
    if (rcx & 1) != 0
    {
        rdx = "$\n^M\t^I^?unknown filetype: Is …";
    }
    
    let mut var_7cc0: *mut *mut [i8; 0xf3] = &data_4eac48;
    let rax_2: i8 = arg3[1];
    let rax_3: i8 = arg3[3];
    let var_7cd0: *mut i32 = r12;
    let mut var_7cb8: i64;
    
    loop
    {
        let mut rax_4: i64;
        let mut rdx_1: i64;
        rax_4 = _$LT$std..os..unix..net..stream..UnixStream$u20$as$u20$std..io..Read$GT$::read::h7d3fed2628b1467e(r12, &var_7c30, 0x7c00);
        var_7cb8 = rax_4;
        let var_7cb0_1: i64 = rdx_1;
        
        if (rax_4 & 1) != 0
        {
            break;
        }
        
        if rdx_1 == 0
        {
            break;
        }
        
        let mut rax_5: *mut i8;
        let mut rdx_3: i64;
        rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hefdaf78919a7c5d0(0, rdx_1, &var_7c30, 0x7c00);
        let mut rbp_1: i64 = 0;
        
        loop
        {
            if rdx_3 > rbp_1
            {
                let mut var_7c60: i64;
                let mut rax_7: i64;
                
                if rax_5[rbp_1] == 0xa
                {
                    uu_cat::write_new_line::h0b98791ec69ec77e(&var_7c60, &var_7ca8, arg3, arg4, 
                        var_7cd0[1]);
                    rax_7 = var_7c60;
                    
                    if rax_7 != -0x7ffffffffffffffa
                    {
                        'label_45f214:
                        let var_7c58: i128;
                        *arg1.byte_offset(8) = var_7c58;
                        *arg1 = rax_7;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(&var_7cb8);
                        goto 'label_45f240;
                    }
                    
                    arg4[0x38] = 1;
                    rbp_1 += 1;
                    
                    if rbp_1 < rdx_1
                    {
                        continue;
                    }
                    
                    goto 'label_45f1da;
                }
                
                let mut rax_10: *mut *mut [i8; 0xc5];
                
                if arg4[0x39] == 0
                {
                    arg4[0x3a] = 0;
                    
                    if (arg4[0x38] & 1) == 0 || rax_1 == 0
                    {
                        goto 'label_45f126;
                    }
                    
                    rax_10 = uu_cat::LineNumber::write::h9eeedfd1c7640e65(arg4, &var_7ca8);
                    
                    if rax_10 != 0
                    {
                        goto 'label_45f250;
                    }
                    
                    uu_cat::LineNumber::increment::hc9558597a4dcfd2d(arg4);
                    goto 'label_45f126;
                }
                
                let mut var_7c98: i64;
                
                if var_7ca8 - var_7c98 <= 1
                {
                    rax_10 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37f9a4980bc018dd(&var_7ca8, "\r\n$\n^M\t^I^?unknown filetype:…", 1);
                    
                    if rax_10 == 0
                    {
                        goto 'label_45f0cf;
                    }
                    
                    'label_45f250:
                    *arg1 = -0x8000000000000000;
                    arg1[1] = rax_10;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(&var_7cb8);
                    goto 'label_45f240;
                }
                
                let var_7ca0: *mut i8;
                var_7ca0[var_7c98] = 0xd;
                var_7c98 += 1;
                'label_45f0cf:
                *arg4.byte_offset(0x38) = 0;
                arg4[0x3a] = 0;
                'label_45f126:
                let rax_11: i64 = uu_cat::write_end::heef5c1c4c44423b4(&var_7ca8, &rax_5[rbp_1], 
                    rdx_3 - rbp_1, rax_2, rax_3);
                let rax_12: i64 = rax_11 + rbp_1;
                
                if rax_12 == rdx_3
                {
                    arg4[0x38] = 0;
                    'label_45f1da:
                    rax_10 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h92f2b65981f505d2(&var_7ca8);
                    r12 = var_7cd0;
                    
                    if rax_10 != 0
                    {
                        goto 'label_45f250;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(&var_7cb8);
                    break;
                }
                
                if rax_12 < rdx_3
                {
                    let rcx_7: u32 = rax_5[rax_12];
                    
                    if rcx_7 == 0xd
                    {
                        arg4[0x39] = 1;
                        rbp_1 = rbp_1 + rax_11 + 1;
                        
                        if rbp_1 < rdx_1
                        {
                            continue;
                        }
                        
                        goto 'label_45f1da;
                    }
                    
                    if rcx_7 != 0xa
                    {
                        var_7c60 = 0;
                        core::panicking::assert_failed::hd7a166b926776132(0, &rax_5[rax_12], 
                            "\n$\n^M\t^I^?unknown filetype: I…", &var_7c60);
                        /* no return */
                    }
                    
                    uu_cat::write_end_of_line::h1af273733bdb3f49(&var_7c60, &var_7ca8, rdx, 
                        rcx + 1, var_7cd0[1]);
                    rax_7 = var_7c60;
                    
                    if rax_7 != -0x7ffffffffffffffa
                    {
                        goto 'label_45f214;
                    }
                    
                    arg4[0x38] = 1;
                    rbp_1 = rbp_1 + rax_11 + 1;
                    
                    if rbp_1 < rdx_1
                    {
                        continue;
                    }
                    
                    goto 'label_45f1da;
                }
                
                rbp_1 = rax_12;
                var_7cc0 = &data_4eac60;
            }
            
            core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_1, rdx_3);
            /* no return */
        }
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(&var_7cb8);
    *arg1 = -0x7ffffffffffffffa;
    'label_45f240:
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hd1802b23d85409a9(&var_7ca8)
}
