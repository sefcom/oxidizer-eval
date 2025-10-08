
  int64_t rg::search::hf17cebd8d01d16a8(char* arg1, int32_t* arg2, char arg3)

{
    int64_t rax;
    int32_t rdx;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    uint32_t r12 = arg2[0x5a];
    char var_bb5 = r12;
    char* var_4d0;
    int64_t result = rg::flags::hiargs::HiArgs::walk_builder::h93d7dc6144a9675f(&var_4d0, arg2);
    char* r13 = var_4d0;
    int64_t var_4c8;
    
    if (r13 == 2)
    {
        *(arg1 + 8) = var_4c8;
        *arg1 = 1;
        return result;
    }
    
    int128_t var_a78;
    void var_4c0;
    memcpy(&var_a78, &var_4c0, 0xc8);
    char* var_a88 = r13;
    char* var_828;
    ignore::walk::WalkBuilder::build::he602309561c36e94(&var_828, &var_a88);
    void var_180;
    memcpy(&var_180, &var_828, 0x148);
    char* var_38_1 = &var_bb5;
    core::ptr::drop_in_place$LT$ignore..walk..WalkBuilder$GT$::h38295eb0d419261c(&var_a88);
    memcpy(&var_828, &var_180, 0x150);
    uint64_t rax_1;
    int64_t* rdx_1;
    rax_1 = rg::flags::hiargs::HiArgs::sort::h3554e45b00d70dce(arg2, &var_828);
    int128_t var_978;
    int96_t var_948;
    
    if (arg2[0xc0] != 0x3b9aca00)
    {
        var_948 = *(arg2 + 0x2f8);
        int128_t var_958_1 = *(arg2 + 0x2e8);
        int128_t var_968_1 = *(arg2 + 0x2d8);
        var_978 = *(arg2 + 0x2c8);
    }
    else
        *var_948[8] = 0x3b9aca00;
    
    rg::flags::hiargs::HiArgs::matcher::h70802ff5d1125361(&var_a88, arg2);
    char* rcx_1 = var_a88;
    char var_a25;
    
    if (var_a25 != 2)
    {
        int128_t var_a35;
        int128_t var_aa5_1 = var_a35;
        int128_t var_a40;
        int128_t var_ab0_1 = var_a40;
        int128_t var_a50;
        int128_t var_ac0_1 = var_a50;
        int128_t var_a60;
        int128_t var_ad0_1 = var_a60;
        int128_t var_a70;
        int128_t var_ae0_1 = var_a70;
        int128_t var_af0_1 = var_4c8;
        char* var_af8 = rcx_1;
        char var_a95_1 = var_a25;
        int32_t var_a24;
        int32_t var_a94_1 = var_a24;
        rg::flags::hiargs::HiArgs::searcher::h183c926e645b97ae(&var_a88, arg2);
        char* r13_1 = var_a88;
        
        if (r13_1 != 2)
        {
            int128_t var_920;
            memcpy(&var_920, &var_a78, 0xf8);
            char* var_930 = r13_1;
            int64_t var_928_1 = var_4c8;
            char* var_b90;
            rg::flags::hiargs::HiArgs::stdout::h4f38f4c31b97dea6(&var_b90, arg2);
            rg::flags::hiargs::HiArgs::printer::h5dc1f194e9a4e308(&var_a88, arg2, arg3, &var_b90);
            rg::flags::hiargs::HiArgs::search_worker::hf48f0138956b8bdb(&var_828, arg2, &var_af8, 
                &var_930, &var_a88);
            char* r13_2 = var_828;
            int64_t var_820;
            
            if (r13_2 != 2)
            {
                int128_t var_818;
                memcpy(&var_4c0, &var_818, 0x340);
                var_4d0 = r13_2;
                int64_t var_4c8_1 = var_820;
                int64_t rcx_4 = rdx_1[3];
                char rax_4 = *(arg2 + 0x38b);
                char* rbp_1 = nullptr;
                int64_t* rdi_16 = &var_a88;
                int32_t var_bb4_1 = 0;
                int64_t var_b38_1 = rcx_4;
                char rbx_1;
                
                while (true)
                {
                    rcx_4(rdi_16, rax_1);
                    
                    if (var_a88 == 3)
                    {
                        label_65a5ff:
                        rbx_1 = var_bb4_1;
                        break;
                    }
                    
                    int64_t var_a18;
                    int64_t var_7b8_1 = var_a18;
                    int128_t var_7c8_1 = var_a35;
                    int128_t var_7d8_1 = var_a40;
                    int128_t var_7e8_1 = var_a50;
                    int128_t zmm0_3 = var_a88;
                    int128_t var_7f8_1 = var_a60;
                    int128_t var_808_1 = var_a70;
                    var_818 = var_a78;
                    var_828 = zmm0_3;
                    rg::search::SearchWorker$LT$W$GT$::search::hb5c53b2f5de2d3b6(&var_930, 
                        &var_4d0, &var_828);
                    int32_t var_8f8;
                    int32_t rax_6 = var_8f8;
                    
                    if (rax_6 != 0x3b9aca01)
                    {
                        label_65a4f3:
                        int64_t var_900;
                        *var_ad0_1[8] = var_900;
                        int128_t var_910;
                        var_ae0_1 = var_910;
                        var_af0_1 = var_920;
                        var_af8 = var_930;
                        char var_8f0;
                        rbp_1 = var_8f0;
                        int32_t var_8ef;
                        *var_ac0_1[0xc] = var_8ef;
                        *var_ac0_1[9] = var_8ef;
                        var_ac0_1 = rax_6;
                        int32_t var_8f4;
                        *var_ac0_1[4] = var_8f4;
                        *var_ac0_1[8] = rbp_1;
                        
                        if (*var_948[8] != 0x3b9aca00)
                        {
                            if (rax_6 == 0x3b9aca00)
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            _$LT$grep_printer..stats..Stats$u20$as$u20$core..ops..arith..AddAssign$LT$$RF$grep_printer..stats..Stats$GT$$GT$::add_assign::h6eb2566e0c7d9612(&var_978, &var_af8);
                        }
                        
                        int32_t rax_20;
                        rax_20 = var_bb4_1 | rbp_1;
                        rax_20 &= 1;
                        var_bb4_1 = rax_20;
                        
                        if (!rax_20 || !(rax_4 & 1))
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
                        
                        if (std::io::error::Error::kind::h135fe00c4e7365f3(rbp_1) != 0xb)
                        {
                            char* var_b50 = rbp_1;
                            rg::messages::set_errored::h9a7e7dff7c3f4854();
                            int64_t* var_bb0;
                            char* var_b48;
                            int64_t var_b30;
                            char* var_b20;
                            char* rax_11;
                            char* rax_13;
                            int64_t* r14_3;
                            
                            if (rg::messages::messages::h9ee4188b23ce53b0())
                            {
                                std::io::stdio::stdout::hb6a8e10bcccf3287();
                                var_b90 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                                int64_t* rax_9 =
                                    std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b90);
                                var_b90 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                                var_bb0 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b90);
                                var_b90 = &data_7e99c8;
                                int64_t var_b88_1 = 1;
                                int64_t var_b80_1 = 8;
                                int128_t var_b78_1 = {0};
                                r14_3 = 1;
                                rax_11 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_bb0, 
                                    &var_b90);
                                var_b20 = rax_11;
                                
                                if (rax_11)
                                {
                                    label_65a6b7:
                                    var_b90 = rax_11;
                                    int32_t rdi_53;
                                    rdi_53 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_11)
                                        != 0xb;
                                    std::process::exit::hcda678ff272dfed1(rdi_53 * 2);
                                    /* no return */
                                }
                                
                                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_b20);
                                int64_t rax_12;
                                int64_t rdx_6;
                                rax_12 = rg::haystack::Haystack::path::hcb9efbeaa40de5df(&var_828);
                                var_b30 = rax_12;
                                int64_t var_b28_1 = rdx_6;
                                var_b20 = &var_b30;
                                uint64_t (* var_b18_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                                char** var_b10_1 = &var_b50;
                                int64_t (* var_b08_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                                var_b90 = &data_7eb928;
                                int64_t var_b88_2 = 3;
                                *var_b78_1[8] = 0;
                                char** var_b80_2 = &var_b20;
                                var_b78_1 = 2;
                                rax_13 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_bb0, 
                                    &var_b90);
                                var_b48 = rax_13;
                                
                                if (rax_13)
                                {
                                    label_65a6d6:
                                    var_b90 = rax_13;
                                    int32_t rdi_56;
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
                            
                            while (true)
                            {
                                var_b38_1(&var_a88, rax_1);
                                
                                if (var_a88 == 3)
                                {
                                    rbp_1 = 1;
                                    goto label_65a5ff;
                                }
                                
                                int64_t var_7b8_2 = var_a18;
                                int128_t var_7c8_2 = var_a35;
                                int128_t var_7d8_2 = var_a40;
                                int128_t var_7e8_2 = var_a50;
                                int128_t zmm0_5 = var_a88;
                                int128_t var_7f8_2 = var_a60;
                                int128_t var_808_2 = var_a70;
                                var_818 = var_a78;
                                var_828 = zmm0_5;
                                rg::search::SearchWorker$LT$W$GT$::search::hb5c53b2f5de2d3b6(
                                    &var_930, &var_4d0, &var_828);
                                rax_6 = var_8f8;
                                
                                if (rax_6 != 0x3b9aca01)
                                    goto label_65a4f3;
                                
                                rbp_1 = var_930;
                                
                                if (std::io::error::Error::kind::h135fe00c4e7365f3(rbp_1) == 0xb)
                                    break;
                                
                                var_b50 = rbp_1;
                                rg::messages::set_errored::h9a7e7dff7c3f4854();
                                
                                if (rg::messages::messages::h9ee4188b23ce53b0())
                                {
                                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                                    var_b90 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                                    int64_t* rax_17 =
                                        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b90);
                                    var_b90 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                                    var_bb0 =
                                        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b90);
                                    var_b90 = &data_7e99c8;
                                    int64_t var_b88_3 = 1;
                                    int64_t var_b80_3 = 8;
                                    int128_t var_b78_2 = {0};
                                    r14_3 = 1;
                                    rax_11 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_bb0, 
                                        &var_b90);
                                    var_b20 = rax_11;
                                    
                                    if (rax_11)
                                        goto label_65a6b7;
                                    
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_b20);
                                    int64_t rax_19;
                                    int64_t rdx_8;
                                    rax_19 =
                                        rg::haystack::Haystack::path::hcb9efbeaa40de5df(&var_828);
                                    var_b30 = rax_19;
                                    int64_t var_b28_2 = rdx_8;
                                    var_b20 = &var_b30;
                                    uint64_t (* var_b18_2)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                                    char** var_b10_2 = &var_b50;
                                    int64_t (* var_b08_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                                    var_b90 = &data_7eb928;
                                    int64_t var_b88_4 = 3;
                                    *var_b78_2[8] = 0;
                                    char** var_b80_4 = &var_b20;
                                    var_b78_2 = 2;
                                    rax_13 = std::io::Write::write_fmt::hfeba02f6870139ed(&var_bb0, 
                                        &var_b90);
                                    var_b48 = rax_13;
                                    
                                    if (rax_13)
                                        goto label_65a6d6;
                                    
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
                r12 = ~r12;
                rbp_1 |= r12;
                
                if (!(rbp_1 & 1))
                    rg::eprint_nothing_searched::hf00b8c23f740cffe();
                
                if (*var_948[8] != 0x3b9aca00)
                {
                    int32_t rcx_7 = 0;
                    int64_t var_3c8;
                    
                    if (var_3c8 >= 1)
                        rcx_7 = var_3c8 - 1;
                    
                    var_828 = rg::print_stats::hbc88a70854d38672(arg3, &var_978, rax, rdx, 
                        &var_4d0 + *(&data_4887b0 + (rcx_7 << 3)));
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_828);
                }
                
                arg1[1] = rbx_1 & 1;
                *arg1 = 0;
                return core::ptr::drop_in_place$LT$rg..search..SearchWorker$LT$grep_cli..wtr..StandardStream$GT$$GT$::h50f6c645e47b216e(&var_4d0);
            }
            
            *(arg1 + 8) = var_820;
            *arg1 = 1;
        }
        else
        {
            *(arg1 + 8) = var_4c8;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$rg..search..PatternMatcher$GT$::h6514a31a5032fe4e(&var_af8);
        }
    }
    else
    {
        *(arg1 + 8) = rcx_1;
        *arg1 = 1;
    }
    
    return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Send$u2b$core..marker..Sync$GT$$GT$::h7c09de5d3363bbc9(rax_1, rdx_1);
}
