
  uint64_t uu_split::split::h209135f55e0a4504(int64_t* arg1)

{
    int64_t rbx = arg1[0xf];
    uint64_t result;
    void* const result_8;
    uint64_t result_2;
    uint64_t rax_1;
    void* const rcx;
    int64_t rsi_1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rbx, arg1[0x10], "-rlsrc/uu/split/src/strategy.rsb…", 1))
    {
        std::fs::File::open::h02f17a72580f2f54(&result_8, rbx);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6b1f230d170ba916(&result_2, &result_8);
        result = result_2;
        
        if (!result)
        {
            void** var_110;
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::hd30cfe1806b276bf(var_110);
            rcx = &data_50b138;
            rsi_1 = 0x2000;
            
            if (*arg1)
                goto label_4722fb;
            
            goto label_47230a;
        }
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h5ce760ee52166dae(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        rcx = &data_50b190;
        rsi_1 = 0x2000;
        
        if (!*arg1)
            goto label_47230a;
        
        label_4722fb:
        rsi_1 = arg1[1];
        label_47230a:
        void var_150;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7841365b65bbc550(
            &var_150, rsi_1, rax_1, rcx);
        int64_t rax_2 = arg1[2];
        int64_t rdx_2 = 3;
        
        if (rax_2 - 6 < 3)
            rdx_2 = rax_2 - 6;
        
        int64_t* r8_1 = arg1[3];
        int64_t var_200;
        int64_t* var_1f8;
        uint64_t result_1;
        void** var_1d8;
        int128_t var_1d0;
        int128_t var_1c0;
        int128_t var_1b0;
        int128_t var_1a0;
        int128_t var_190;
        int128_t var_180;
        int128_t var_170;
        int128_t var_160;
        uint64_t result_5;
        void** rdx_11;
        
        switch (rdx_2)
        {
            case 0:
            {
                uu_split::LineChunkWriter::new::h03e22f79622b14ba(&result_8, r8_1, arg1);
                void* const result_6 = result_8;
                result = result_1;
                
                if (-(result_6) != -0x8000000000000000)
                {
                    int128_t var_90_1 = var_160;
                    int128_t var_a0_1 = var_170;
                    int128_t var_b0_1 = var_180;
                    int128_t var_c0_1 = var_190;
                    int128_t var_d0_1 = var_1a0;
                    int128_t var_e0_1 = var_1b0;
                    int128_t var_f0_1 = var_1c0;
                    int128_t var_100_1 = var_1d0;
                    result_2 = result_6;
                    uint64_t result_3 = result;
                    void** const var_108_1 = var_1d8;
                    char rax_3;
                    int64_t rdx_6;
                    rax_3 = std::io::copy::generic_copy::h13be53caca5b2128(&var_150, &result_2);
                    
                    if (!(rax_3 & 1))
                        result = 0;
                    else
                    {
                        var_200 = rdx_6;
                        
                        if (std::io::error::Error::kind::h135fe00c4e7365f3(rdx_6) != 0x28)
                        {
                            char rax_14 = std::io::error::Error::kind::h135fe00c4e7365f3(var_200);
                            result_8 = &data_50b128;
                            int64_t var_1e0_2 = 1;
                            int64_t var_1d8_5 = 8;
                            int128_t var_1d0_1 = {0};
                            void var_50;
                            core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_50, 
                                "input/output errorcannot open  f…", &result_8);
                            result = uucore::mods::error::UIoError::new::h4a7a47cd871cd6cc(rax_14, 
                                &var_50);
                        }
                        else
                        {
                            var_1f8 = &var_200;
                            int64_t (* var_1f0_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                            result_8 = &data_41adf0;
                            int64_t var_1e0 = 1;
                            *var_1d0[8] = 0;
                            int64_t** var_1d8_1 = &var_1f8;
                            var_1d0 = 1;
                            int128_t var_80;
                            core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_80, 
                                0, &result_8);
                            var_1d0 = 1;
                            result_8 = var_80;
                            int64_t var_70;
                            int64_t var_1d8_2 = var_70;
                            result = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(&result_8);
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2c8dec07427c60f4(
                            &var_200);
                    }
                    
                    core::ptr::drop_in_place$LT$uu_split..ByteChunkWriter$GT$::hd0195ba6414a1d99(
                        &result_2);
                }
                break;
            }
            case 1:
            {
                uu_split::ByteChunkWriter::new::ha12e0ca5c6566437(&result_8, r8_1, arg1);
                void* const result_7 = result_8;
                result = result_1;
                
                if (-(result_7) != -0x8000000000000000)
                {
                    int128_t var_90_2 = var_160;
                    int128_t var_a0_2 = var_170;
                    int128_t var_b0_2 = var_180;
                    int128_t var_c0_2 = var_190;
                    int128_t var_d0_2 = var_1a0;
                    int128_t var_e0_2 = var_1b0;
                    int128_t var_f0_2 = var_1c0;
                    int128_t var_100_2 = var_1d0;
                    result_2 = result_7;
                    uint64_t result_4 = result;
                    void** const var_108_2 = var_1d8;
                    char rax_10;
                    int64_t rdx_15;
                    rax_10 = std::io::copy::generic_copy::h2baac93843e4b4ff(&var_150, &result_2);
                    
                    if (!(rax_10 & 1))
                        result = 0;
                    else
                    {
                        var_200 = rdx_15;
                        
                        if (std::io::error::Error::kind::h135fe00c4e7365f3(rdx_15) != 0x28)
                        {
                            char rax_16 = std::io::error::Error::kind::h135fe00c4e7365f3(var_200);
                            result_8 = &data_50b128;
                            int64_t var_1e0_3 = 1;
                            int64_t var_1d8_6 = 8;
                            int128_t var_1d0_2 = {0};
                            void var_38;
                            core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_38, 
                                "input/output errorcannot open  f…", &result_8);
                            result = uucore::mods::error::UIoError::new::h4a7a47cd871cd6cc(rax_16, 
                                &var_38);
                        }
                        else
                        {
                            var_1f8 = &var_200;
                            int64_t (* var_1f0_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                            result_8 = &data_41adf0;
                            int64_t var_1e0_1 = 1;
                            *var_1d0[8] = 0;
                            int64_t** var_1d8_3 = &var_1f8;
                            var_1d0 = 1;
                            int128_t var_68;
                            core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_68, 
                                0, &result_8);
                            var_1d0 = 1;
                            result_8 = var_68;
                            int64_t var_58;
                            int64_t var_1d8_4 = var_58;
                            result = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(&result_8);
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2c8dec07427c60f4(
                            &var_200);
                    }
                    
                    core::ptr::drop_in_place$LT$uu_split..ByteChunkWriter$GT$::hd0195ba6414a1d99(
                        &result_2);
                }
                break;
            }
            case 2:
            {
                result_5 = uu_split::line_bytes::hc9b041c7d10080a3(arg1, &var_150, r8_1);
                result = result_5;
                break;
            }
            case 3:
            {
                switch (rax_2)
                {
                    case 0:
                    {
                        result_5 = uu_split::n_chunks_by_byte::h325fd82bd51885f0(arg1, &var_150, 
                            r8_1, 0, r8_1);
                        break;
                    }
                    case 1:
                    {
                        result_5 = uu_split::n_chunks_by_byte::h325fd82bd51885f0(arg1, &var_150, 
                            arg1[4], 1, r8_1);
                        break;
                    }
                    case 2:
                    {
                        result_5 = uu_split::n_chunks_by_line::h05febb31e178eac9(arg1, &var_150, 
                            r8_1, 0, r8_1);
                        break;
                    }
                    case 3:
                    {
                        result_5 = uu_split::n_chunks_by_line::h05febb31e178eac9(arg1, &var_150, 
                            arg1[4], 1, r8_1);
                        break;
                    }
                    case 4:
                    {
                        result_5 = uu_split::n_chunks_by_line_round_robin::h3c8d5c037c5c2f2d(arg1, 
                            &var_150, r8_1, 0, r8_1);
                        break;
                    }
                    case 5:
                    {
                        result_5 = uu_split::n_chunks_by_line_round_robin::h3c8d5c037c5c2f2d(arg1, 
                            &var_150, arg1[4], 1, r8_1);
                        break;
                    }
                }
                
                result = result_5;
                break;
            }
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h8812bdb7621dd1ad(&var_150);
    }
    return result;
}
