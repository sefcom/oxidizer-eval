
  int64_t uu_cat::write_lines::h59950f7c6160fd92(int64_t* arg1, int32_t* arg2, char* arg3, char* arg4)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t var_5030 = 0;
    int64_t var_6030 = 0;
    int64_t var_7030 = 0;
    int32_t* r12 = arg2;
    void var_7c30;
    memset(&var_7c30, 0, 0x7c00);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_7c68 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t var_7ca8;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h324f64a3f2f04756(&var_7ca8, 
        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_7c68));
    char rax_1 = arg3[4];
    uint64_t rcx = arg3[2];
    char const* const rdx = "\n$\n^M\t^I^?unknown filetype: I…";
    
    if (rcx & 1)
        rdx = "$\n^M\t^I^?unknown filetype: Is …";
    
    char const (** const var_7cc0)[0xf3] = &data_4eac48;
    char rax_2 = arg3[1];
    char rax_3 = arg3[3];
    int32_t* var_7cd0 = r12;
    int64_t var_7cb8;
    
    while (true)
    {
        int64_t rax_4;
        int64_t rdx_1;
        rax_4 = _$LT$std..os..unix..net..stream..UnixStream$u20$as$u20$std..io..Read$GT$::read::h7d3fed2628b1467e(r12, &var_7c30, 0x7c00);
        var_7cb8 = rax_4;
        int64_t var_7cb0_1 = rdx_1;
        
        if (rax_4 & 1)
            break;
        
        if (!rdx_1)
            break;
        
        char* rax_5;
        int64_t rdx_3;
        rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hefdaf78919a7c5d0(0, rdx_1, &var_7c30, 0x7c00);
        int64_t rbp_1 = 0;
        
        while (true)
        {
            if (rdx_3 > rbp_1)
            {
                int64_t var_7c60;
                int64_t rax_7;
                
                if (rax_5[rbp_1] == 0xa)
                {
                    uu_cat::write_new_line::h0b98791ec69ec77e(&var_7c60, &var_7ca8, arg3, arg4, 
                        var_7cd0[1]);
                    rax_7 = var_7c60;
                    
                    if (rax_7 != -0x7ffffffffffffffa)
                    {
                        label_45f214:
                        int128_t var_7c58;
                        *(arg1 + 8) = var_7c58;
                        *arg1 = rax_7;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(&var_7cb8);
                        goto label_45f240;
                    }
                    
                    arg4[0x38] = 1;
                    rbp_1 += 1;
                    
                    if (rbp_1 < rdx_1)
                        continue;
                    
                    goto label_45f1da;
                }
                
                char const (** rax_10)[0xc5];
                
                if (!arg4[0x39])
                {
                    arg4[0x3a] = 0;
                    
                    if (!(arg4[0x38] & 1) || !rax_1)
                        goto label_45f126;
                    
                    rax_10 = uu_cat::LineNumber::write::h9eeedfd1c7640e65(arg4, &var_7ca8);
                    
                    if (rax_10)
                        goto label_45f250;
                    
                    uu_cat::LineNumber::increment::hc9558597a4dcfd2d(arg4);
                    goto label_45f126;
                }
                
                int64_t var_7c98;
                
                if (var_7ca8 - var_7c98 <= 1)
                {
                    rax_10 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h37f9a4980bc018dd(&var_7ca8, "\r\n$\n^M\t^I^?unknown filetype:…", 1);
                    
                    if (!rax_10)
                        goto label_45f0cf;
                    
                    label_45f250:
                    *arg1 = -0x8000000000000000;
                    arg1[1] = rax_10;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(&var_7cb8);
                    goto label_45f240;
                }
                
                char* var_7ca0;
                var_7ca0[var_7c98] = 0xd;
                var_7c98 += 1;
                label_45f0cf:
                *(arg4 + 0x38) = 0;
                arg4[0x3a] = 0;
                label_45f126:
                int64_t rax_11 = uu_cat::write_end::heef5c1c4c44423b4(&var_7ca8, &rax_5[rbp_1], 
                    rdx_3 - rbp_1, rax_2, rax_3);
                int64_t rax_12 = rax_11 + rbp_1;
                
                if (rax_12 == rdx_3)
                {
                    arg4[0x38] = 0;
                    label_45f1da:
                    rax_10 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h92f2b65981f505d2(&var_7ca8);
                    r12 = var_7cd0;
                    
                    if (rax_10)
                        goto label_45f250;
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(&var_7cb8);
                    break;
                }
                
                if (rax_12 < rdx_3)
                {
                    uint32_t rcx_7 = rax_5[rax_12];
                    
                    if (rcx_7 == 0xd)
                    {
                        arg4[0x39] = 1;
                        rbp_1 = rbp_1 + rax_11 + 1;
                        
                        if (rbp_1 < rdx_1)
                            continue;
                        
                        goto label_45f1da;
                    }
                    
                    if (rcx_7 != 0xa)
                    {
                        var_7c60 = 0;
                        core::panicking::assert_failed::hd7a166b926776132(0, &rax_5[rax_12], 
                            "\n$\n^M\t^I^?unknown filetype: I…", &var_7c60);
                        /* no return */
                    }
                    
                    uu_cat::write_end_of_line::h1af273733bdb3f49(&var_7c60, &var_7ca8, rdx, 
                        rcx + 1, var_7cd0[1]);
                    rax_7 = var_7c60;
                    
                    if (rax_7 != -0x7ffffffffffffffa)
                        goto label_45f214;
                    
                    arg4[0x38] = 1;
                    rbp_1 = rbp_1 + rax_11 + 1;
                    
                    if (rbp_1 < rdx_1)
                        continue;
                    
                    goto label_45f1da;
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
    label_45f240:
    return core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hd1802b23d85409a9(&var_7ca8);
}
