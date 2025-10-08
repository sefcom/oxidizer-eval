
  fn rg::search::hf17cebd8d01d16a8(arg1: *mut i8, arg2: *mut i32, arg3: i8) -> i64

{
    let mut rax: i64;
    let mut rdx: i32;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    let mut r12: u32 = arg2[0x5a];
    let mut var_bb5: i8 = r12;
    let mut var_4d0: *mut i8;
    let result: i64 = rg::flags::hiargs::HiArgs::walk_builder::h93d7dc6144a9675f(&var_4d0, arg2);
    let r13: *mut i8 = var_4d0;
    let var_4c8: i64;
    
    if r13 == 2
    {
        *arg1.byte_offset(8) = var_4c8;
        *arg1 = 1;
        return result;
    }
    
    let mut var_a78: i128;
    let mut var_4c0: ();
    memcpy(&var_a78, &var_4c0, 0xc8);
    let mut var_a88: *mut i8 = r13;
    let mut var_828: *mut i8;
    ignore::walk::WalkBuilder::build::he602309561c36e94(&var_828, &var_a88);
    let mut var_180: ();
    memcpy(&var_180, &var_828, 0x148);
    let var_38_1: *mut i8 = &var_bb5;
    core::ptr::drop_in_place$LT$ignore..walk..WalkBuilder$GT$::h38295eb0d419261c(&var_a88);
    memcpy(&var_828, &var_180, 0x150);
    let mut rax_1: u64;
    let mut rdx_1: *mut i64;
    rax_1 = rg::flags::hiargs::HiArgs::sort::h3554e45b00d70dce(arg2, &var_828);
    let mut var_978: i128;
    let mut var_948: i96;
    
    if arg2[0xc0] != 0x3b9aca00
    {
        var_948 = *arg2.byte_offset(0x2f8);
        let var_958_1: i128 = *arg2.byte_offset(0x2e8);
        let var_968_1: i128 = *arg2.byte_offset(0x2d8);
        var_978 = *arg2.byte_offset(0x2c8);
    }
    else
    {
        *var_948[8] = 0x3b9aca00;
    }
    
    rg::flags::hiargs::HiArgs::matcher::h70802ff5d1125361(&var_a88, arg2);
    let rcx_1: *mut i8 = var_a88;
    let var_a25: i8;
    
    if var_a25 != 2
    {
        let var_a35: i128;
        let var_aa5_1: i128 = var_a35;
        let var_a40: i128;
        let var_ab0_1: i128 = var_a40;
        let var_a50: i128;
        let mut var_ac0_1: i128 = var_a50;
        let var_a60: i128;
        let mut var_ad0_1: i128 = var_a60;
        let var_a70: i128;
        let mut var_ae0_1: i128 = var_a70;
        let mut var_af0_1: i128 = var_4c8;
        let mut var_af8: *mut i8 = rcx_1;
        let var_a95_1: i8 = var_a25;
        let var_a24: i32;
        let var_a94_1: i32 = var_a24;
        rg::flags::hiargs::HiArgs::searcher::h183c926e645b97ae(&var_a88, arg2);
        let r13_1: *mut i8 = var_a88;
        
        if r13_1 != 2
        {
            let mut var_920: i128;
            memcpy(&var_920, &var_a78, 0xf8);
            let mut var_930: *mut i8 = r13_1;
            let var_928_1: i64 = var_4c8;
            let mut var_b90: *mut i8;
            rg::flags::hiargs::HiArgs::stdout::h4f38f4c31b97dea6(&var_b90, arg2);
            rg::flags::hiargs::HiArgs::printer::h5dc1f194e9a4e308(&var_a88, arg2, arg3, &var_b90);
            rg::flags::hiargs::HiArgs::search_worker::hf48f0138956b8bdb(&var_828, arg2, &var_af8, 
                &var_930, &var_a88);
            let r13_2: *mut i8 = var_828;
            let var_820: i64;
            
            if r13_2 != 2
            {
                let mut var_818: i128;
                memcpy(&var_4c0, &var_818, 0x340);
                var_4d0 = r13_2;
                let var_4c8_1: i64 = var_820;
                let mut rcx_4: i64 = rdx_1[3];
                let rax_4: i8 = *arg2.byte_offset(0x38b);
                let mut rbp_1: *mut i8 = nullptr;
                let mut rdi_16: *mut i64 = &var_a88;
                let mut var_bb4_1: i32 = 0;
                let var_b38_1: i64 = rcx_4;
                let mut rbx_1: i8;
                
                loop
                {
                    rcx_4(rdi_16, rax_1);
                    
                    if var_a88 == 3
                    {
                        'label_65a5ff:
                        rbx_1 = var_bb4_1;
                        break;
                    }
                    
                    let var_a18: i64;
                    let var_7b8_1: i64 = var_a18;
                    let var_7c8_1: i128 = var_a35;
                    let var_7d8_1: i128 = var_a40;
                    let var_7e8_1: i128 = var_a50;
                    let zmm0_3: i128 = var_a88;
                    let var_7f8_1: i128 = var_a60;
                    let var_808_1: i128 = var_a70;
                    var_818 = var_a78;
                    var_828 = zmm0_3;
                    rg::search::SearchWorker$LT$W$GT$::search::hb5c53b2f5de2d3b6(&var_930, 
                        &var_4d0, &var_828);
                    let var_8f8: i32;
                    let mut rax_6: i32 = var_8f8;
                    
                    if rax_6 != 0x3b9aca01
                    {
                        'label_65a4f3:
                        let var_900: i64;
                        *var_ad0_1[8] = var_900;
                        let var_910: i128;
                        var_ae0_1 = var_910;
                        var_af0_1 = var_920;
                        var_af8 = var_930;
                        let var_8f0: i8;
                        rbp_1 = var_8f0;
                        let var_8ef: i32;
                        *var_ac0_1[0xc] = var_8ef;
                        *var_ac0_1[9] = var_8ef;
                        var_ac0_1 = rax_6;
                        let var_8f4: i32;
                        *var_ac0_1[4] = var_8f4;
                        *var_ac0_1[8] = rbp_1;
                        
                        if *var_948[8] != 0x3b9aca00
                        {
                            if rax_6 == 0x3b9aca00
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            _$LT$grep_printer..stats..Stats$u20$as$u20$core..ops..arith..AddAssign$LT$$RF$grep_printer..stats..Stats$GT$$GT$::add_assign::h6eb2566e0c7d9612(&var_978, &var_af8);
                        }
                        
                        let mut rax_20: i32;
                        rax_20 = var_bb4_1 | rbp_1;
                        rax_20 &= 1;
                        var_bb4_1 = rax_20;
                        
                        if rax_20 == 0 || (rax_4 & 1) == 0
                        {
                            core::ptr::drop_in_place$LT$rg..haystack..Haystack$GT$::h5f0cb9c54e389b81(&var_828);
                            rbp_1 = 1;
                            rdi_16 = &var_a88;
                            rcx_4 = var_b38_1;
                            continue;
                        }
                        
                        rbx_1 = 1;
                    }
                    else
                    {
                        rbp_1 = var_930;
                        
                        if std::io::error::Error::kind::h135fe00c4e7365f3(rbp_1) != 0xb
                        {
                            let mut var_b50: *mut i8 = rbp_1;
                            rg::messages::set_errored::h9a7e7dff7c3f4854();
                            let mut var_bb0: *mut i64;
                            let mut var_b48: *mut i8;
                            let mut var_b30: i64;
                            let mut var_b20: *mut i8;
                            let mut rax_11: *mut i8;
                            let mut rax_13: *mut i8;
                            let mut r14_3: *mut i64;
                            
                            if rg::messages::messages::h9ee4188b23ce53b0() != 0
                            {
                                std::io::stdio::stdout::hb6a8e10bcccf3287();
                                var_b90 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                                let rax_9: *mut i64 =
                                    std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b90);
                                var_b90 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                                var_bb0 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b90);
                                var_b90 = &data_7e99c8;
                                let var_b88_1: i64 = 1;
                                let var_b80_1: i64 = 8;
                                let mut var_b78_1: i128 = {0};
                                r14_3 = 1;
                                rax_11 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_bb0, 
                                    &var_b90);
                                var_b20 = rax_11;
                                
                                if rax_11 != 0
                                {
                                    'label_65a6b7:
                                    var_b90 = rax_11;
                                    let mut rdi_53: i32;
                                    rdi_53 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_11)
                                        != 0xb;
                                    std::process::exit::hcda678ff272dfed1(rdi_53 * 2);
                                    /* no return */
                                }
                                
                                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_b20);
                                let mut rax_12: i64;
                                let mut rdx_6: i64;
                                rax_12 = rg::haystack::Haystack::path::hcb9efbeaa40de5df(&var_828);
                                var_b30 = rax_12;
                                let var_b28_1: i64 = rdx_6;
                                var_b20 = &var_b30;
                                let var_b18_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                                let var_b10_1: *mut *mut i8 = &var_b50;
                                let var_b08_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                                var_b90 = &data_7eb928;
                                let var_b88_2: i64 = 3;
                                *var_b78_1[8] = 0;
                                let var_b80_2: *mut *mut i8 = &var_b20;
                                var_b78_1 = 2;
                                rax_13 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_bb0, 
                                    &var_b90);
                                var_b48 = rax_13;
                                
                                if rax_13 != 0
                                {
                                    'label_65a6d6:
                                    var_b90 = rax_13;
                                    let mut rdi_56: i32;
                                    rdi_56 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_13)
                                        != 0xb;
                                    std::process::exit::hcda678ff272dfed1(rdi_56 * 2);
                                    /* no return */
                                }
                                
                                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_b48);
                                core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax_9);
                                core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(var_bb0);
                            }
                            
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_b50);
                            core::ptr::drop_in_place$LT$rg..haystack..Haystack$GT$::h5f0cb9c54e389b81(&var_828);
                            
                            loop
                            {
                                var_b38_1(&var_a88, rax_1);
                                
                                if var_a88 == 3
                                {
                                    rbp_1 = 1;
                                    goto 'label_65a5ff;
                                }
                                
                                let var_7b8_2: i64 = var_a18;
                                let var_7c8_2: i128 = var_a35;
                                let var_7d8_2: i128 = var_a40;
                                let var_7e8_2: i128 = var_a50;
                                let zmm0_5: i128 = var_a88;
                                let var_7f8_2: i128 = var_a60;
                                let var_808_2: i128 = var_a70;
                                var_818 = var_a78;
                                var_828 = zmm0_5;
                                rg::search::SearchWorker$LT$W$GT$::search::hb5c53b2f5de2d3b6(
                                    &var_930, &var_4d0, &var_828);
                                rax_6 = var_8f8;
                                
                                if rax_6 != 0x3b9aca01
                                {
                                    goto 'label_65a4f3;
                                }
                                
                                rbp_1 = var_930;
                                
                                if std::io::error::Error::kind::h135fe00c4e7365f3(rbp_1) == 0xb
                                {
                                    break;
                                }
                                
                                var_b50 = rbp_1;
                                rg::messages::set_errored::h9a7e7dff7c3f4854();
                                
                                if rg::messages::messages::h9ee4188b23ce53b0() != 0
                                {
                                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                                    var_b90 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                                    let rax_17: *mut i64 =
                                        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b90);
                                    var_b90 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                                    var_bb0 =
                                        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b90);
                                    var_b90 = &data_7e99c8;
                                    let var_b88_3: i64 = 1;
                                    let var_b80_3: i64 = 8;
                                    let mut var_b78_2: i128 = {0};
                                    r14_3 = 1;
                                    rax_11 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_bb0, 
                                        &var_b90);
                                    var_b20 = rax_11;
                                    
                                    if rax_11 != 0
                                    {
                                        goto 'label_65a6b7;
                                    }
                                    
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_b20);
                                    let mut rax_19: i64;
                                    let mut rdx_8: i64;
                                    rax_19 =
                                        rg::haystack::Haystack::path::hcb9efbeaa40de5df(&var_828);
                                    var_b30 = rax_19;
                                    let var_b28_2: i64 = rdx_8;
                                    var_b20 = &var_b30;
                                    let var_b18_2: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                                    let var_b10_2: *mut *mut i8 = &var_b50;
                                    let var_b08_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                                    var_b90 = &data_7eb928;
                                    let var_b88_4: i64 = 3;
                                    *var_b78_2[8] = 0;
                                    let var_b80_4: *mut *mut i8 = &var_b20;
                                    var_b78_2 = 2;
                                    rax_13 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_bb0, 
                                        &var_b90);
                                    var_b48 = rax_13;
                                    
                                    if rax_13 != 0
                                    {
                                        goto 'label_65a6d6;
                                    }
                                    
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_b48);
                                    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax_17);
                                    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(var_bb0);
                                }
                                
                                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_b50);
                                core::ptr::drop_in_place$LT$rg..haystack..Haystack$GT$::h5f0cb9c54e389b81(&var_828);
                            }
                        }
                        
                        var_b90 = rbp_1;
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(
                            &var_b90);
                        rbx_1 = var_bb4_1;
                    }
                    
                    core::ptr::drop_in_place$LT$rg..haystack..Haystack$GT$::h5f0cb9c54e389b81(
                        &var_828);
                    rbp_1 = 1;
                    break;
                }
                
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Send$u2b$core..marker..Sync$GT$$GT$::h7c09de5d3363bbc9(rax_1, rdx_1);
                r12 = !r12;
                rbp_1 |= r12;
                
                if (rbp_1 & 1) == 0
                {
                    rg::eprint_nothing_searched::hf00b8c23f740cffe();
                }
                
                if *var_948[8] != 0x3b9aca00
                {
                    let mut rcx_7: i32 = 0;
                    let var_3c8: i64;
                    
                    if var_3c8 >= 1
                    {
                        rcx_7 = var_3c8 - 1;
                    }
                    
                    var_828 = rg::print_stats::hbc88a70854d38672(arg3, &var_978, rax, rdx, 
                        (&var_4d0).byte_offset(*(&data_4887b0).byte_offset(rcx_7 << 3)));
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_828);
                }
                
                arg1[1] = rbx_1 & 1;
                *arg1 = 0;
                return core::ptr::drop_in_place$LT$rg..search..SearchWorker$LT$grep_cli..wtr..StandardStream$GT$$GT$::h50f6c645e47b216e(&var_4d0);
            }
            
            *arg1.byte_offset(8) = var_820;
            *arg1 = 1;
        }
        else
        {
            *arg1.byte_offset(8) = var_4c8;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$rg..search..PatternMatcher$GT$::h6514a31a5032fe4e(&var_af8);
        }
    }
    else
    {
        *arg1.byte_offset(8) = rcx_1;
        *arg1 = 1;
    }
    
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Send$u2b$core..marker..Sync$GT$$GT$::h7c09de5d3363bbc9(rax_1, rdx_1)
}
