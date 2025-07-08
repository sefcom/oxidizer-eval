
  int128_t* uu_split::split::h3b6295d78012e56b(int64_t* arg1)

{
    int64_t rbx = arg1[0xf];
    int128_t* result;
    int128_t* const result_7;
    int128_t* result_2;
    int32_t var_178;
    int64_t* rax_1;
    void* const rcx_1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(rbx, arg1[0x10], "-xmulti-character separator mult…", 1))
    {
        std::fs::File::open::hf05dc8e7da5fafe3(&result_7, rbx);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h36db9552504a57eb(&result_2, &result_7, arg1);
        result = result_2;
        
        if (!result)
        {
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::h8fc4b41669740c9d(var_178);
            rcx_1 = &data_5485f8;
            goto label_4ce0a5;
        }
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h84649541c58f7536(
            &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        rcx_1 = &data_548650;
        label_4ce0a5:
        int64_t rsi_3 = 0x2000;
        
        if (*arg1)
            rsi_3 = arg1[1];
        
        void var_e8;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h03cd61f44017daf8(&var_e8, 
            rsi_3, rax_1, rcx_1);
        int64_t rax_2 = arg1[2];
        int64_t rdx_4 = 3;
        
        if (rax_2 - 6 < 3)
            rdx_4 = rax_2 - 6;
        
        int64_t** r8_1 = arg1[3];
        int64_t var_230;
        int64_t* var_228;
        int128_t* result_1;
        void** var_208;
        int128_t var_200;
        int128_t var_1f0;
        int128_t var_1e0;
        int128_t var_1d0;
        int128_t var_1c0;
        int128_t var_1b0;
        int128_t var_1a0;
        int128_t var_190;
        
        switch (rdx_4)
        {
            case 0:
            {
                uu_split::LineChunkWriter::new::hd30d9397c46ea980(&result_7, r8_1, arg1);
                int128_t* result_4 = result_7;
                result = result_1;
                
                if (result_4 != -0x8000000000000000)
                {
                    int128_t var_f8_1 = var_190;
                    int128_t var_108_1 = var_1a0;
                    int128_t var_118_1 = var_1b0;
                    int128_t var_128_1 = var_1c0;
                    int128_t var_138_1 = var_1d0;
                    int128_t var_148_1 = var_1e0;
                    int128_t var_158_1 = var_1f0;
                    int128_t var_168_1 = var_200;
                    result_2 = result_4;
                    var_178 = result;
                    void** const var_170_1 = var_208;
                    int64_t rax_3;
                    int64_t rdx_8;
                    rax_3 = std::io::copy::generic_copy::ha0a65a54dc3a7f4d(&var_e8, &result_2);
                    
                    if (!rax_3)
                        result = nullptr;
                    else
                    {
                        var_230 = rdx_8;
                        int64_t r15_1;
                        
                        if (std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_8) != 0x27)
                        {
                            r15_1 = var_230;
                            char rax_19 = std::io::error::Error::kind::hb2ff5fa058639b3d(r15_1);
                            result_7 = &data_5485e8;
                            int64_t var_210_4 = 1;
                            int64_t var_208_8 = 8;
                            int128_t var_200_2 = {0};
                            void var_68;
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_68, 
                                "input/output error", &result_7);
                            result = uucore::mods::error::UIoError::new::h810f822078081064(rax_19, 
                                &var_68);
                        }
                        else
                        {
                            var_228 = &var_230;
                            int64_t (* var_220_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            result_7 = &data_418130;
                            int64_t var_210 = 1;
                            *var_200[8] = 0;
                            int64_t** var_208_1 = &var_228;
                            var_200 = 1;
                            int128_t var_b0;
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_b0, 
                                0, &result_7);
                            var_200 = 1;
                            result_7 = var_b0;
                            int64_t var_a0;
                            int64_t var_208_2 = var_a0;
                            result = alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&result_7);
                            r15_1 = var_230;
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(
                            r15_1);
                    }
                    
                    core::ptr::drop_in_place$LT$uu_split..LineChunkWriter$GT$::h5c34f624ee7dbadf(
                        &result_2);
                }
                break;
            }
            case 1:
            {
                uu_split::ByteChunkWriter::new::hf26f4f49e0f52e08(&result_7, r8_1, arg1);
                int128_t* result_6 = result_7;
                result = result_1;
                
                if (result_6 != -0x8000000000000000)
                {
                    int128_t var_f8_3 = var_190;
                    int128_t var_108_3 = var_1a0;
                    int128_t var_118_3 = var_1b0;
                    int128_t var_128_3 = var_1c0;
                    int128_t var_138_3 = var_1d0;
                    int128_t var_148_3 = var_1e0;
                    int128_t var_158_3 = var_1f0;
                    int128_t var_168_3 = var_200;
                    result_2 = result_6;
                    var_178 = result;
                    void** const var_170_3 = var_208;
                    int64_t rax_13;
                    int64_t rdx_16;
                    rax_13 = std::io::copy::generic_copy::h1d61d7a77a7df7ab(&var_e8, &result_2);
                    
                    if (!rax_13)
                        result = nullptr;
                    else
                    {
                        var_230 = rdx_16;
                        int64_t r15_3;
                        
                        if (std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_16) != 0x27)
                        {
                            r15_3 = var_230;
                            char rax_21 = std::io::error::Error::kind::hb2ff5fa058639b3d(r15_3);
                            result_7 = &data_5485e8;
                            int64_t var_210_5 = 1;
                            int64_t var_208_9 = 8;
                            int128_t var_200_3 = {0};
                            void var_50;
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_50, 
                                "input/output error", &result_7);
                            result = uucore::mods::error::UIoError::new::h810f822078081064(rax_21, 
                                &var_50);
                        }
                        else
                        {
                            var_228 = &var_230;
                            int64_t (* var_220_3)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            result_7 = &data_418130;
                            int64_t var_210_2 = 1;
                            *var_200[8] = 0;
                            int64_t** var_208_5 = &var_228;
                            var_200 = 1;
                            int128_t var_98;
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_98, 
                                0, &result_7);
                            var_200 = 1;
                            result_7 = var_98;
                            int64_t var_88;
                            int64_t var_208_6 = var_88;
                            result = alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&result_7);
                            r15_3 = var_230;
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(
                            r15_3);
                    }
                    
                    core::ptr::drop_in_place$LT$uu_split..ByteChunkWriter$GT$::hf5186553e96e8c40(
                        &result_2);
                }
                break;
            }
            case 2:
            {
                uu_split::LineBytesChunkWriter::new::hd36f889c86b72df9(&result_7, r8_1, arg1);
                int128_t* result_5 = result_7;
                result = result_1;
                
                if (result_5 != -0x8000000000000000)
                {
                    int128_t var_f8_2 = var_190;
                    int128_t var_108_2 = var_1a0;
                    int128_t var_118_2 = var_1b0;
                    int128_t var_128_2 = var_1c0;
                    int128_t var_138_2 = var_1d0;
                    int128_t var_148_2 = var_1e0;
                    int128_t var_158_2 = var_1f0;
                    int128_t var_168_2 = var_200;
                    result_2 = result_5;
                    var_178 = result;
                    void** const var_170_2 = var_208;
                    int64_t rax_7;
                    int64_t rdx_11;
                    rax_7 = std::io::copy::generic_copy::hc68a87374d72d271(&var_e8, &result_2);
                    
                    if (!rax_7)
                        result = nullptr;
                    else
                    {
                        var_230 = rdx_11;
                        int64_t r15_2;
                        
                        if (std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_11) != 0x27)
                        {
                            r15_2 = var_230;
                            char rax_17 = std::io::error::Error::kind::hb2ff5fa058639b3d(r15_2);
                            result_7 = &data_5485e8;
                            int64_t var_210_3 = 1;
                            int64_t var_208_7 = 8;
                            int128_t var_200_1 = {0};
                            void var_38;
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_38, 
                                "input/output error", &result_7);
                            result = uucore::mods::error::UIoError::new::h810f822078081064(rax_17, 
                                &var_38);
                        }
                        else
                        {
                            var_228 = &var_230;
                            int64_t (* var_220_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            result_7 = &data_418130;
                            int64_t var_210_1 = 1;
                            *var_200[8] = 0;
                            int64_t** var_208_3 = &var_228;
                            var_200 = 1;
                            int128_t var_80;
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_80, 
                                0, &result_7);
                            var_200 = 1;
                            result_7 = var_80;
                            int64_t var_70;
                            int64_t var_208_4 = var_70;
                            result = alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&result_7);
                            r15_2 = var_230;
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(
                            r15_2);
                    }
                    
                    core::ptr::drop_in_place$LT$uu_split..LineBytesChunkWriter$GT$::h03f2545fa069a94c(&result_2);
                }
                break;
            }
            case 3:
            {
                int128_t* result_3;
                void** rdx_14;
                
                switch (jump_table_42100c[rax_2])
                {
                    case 0xad3ff:
                    {
                        result_3 = uu_split::n_chunks_by_byte::h9e6fb58ce66e9e3c(arg1, &var_e8, 
                            r8_1, 0, r8_1);
                        break;
                    }
                    case 0xad5b7:
                    {
                        result_3 = uu_split::n_chunks_by_line_round_robin::hcac37cfac682ac2b(arg1, 
                            &var_e8, r8_1, 0, r8_1);
                        break;
                    }
                    case 0xad5ce:
                    {
                        result_3 = uu_split::n_chunks_by_line::hfea4751dad8f6ed1(arg1, &var_e8, 
                            r8_1, 0, r8_1);
                        break;
                    }
                    case 0xad5e5:
                    {
                        result_3 = uu_split::n_chunks_by_line::hfea4751dad8f6ed1(arg1, &var_e8, 
                            arg1[4], 1, r8_1);
                        break;
                    }
                    case 0xad600:
                    {
                        result_3 = uu_split::n_chunks_by_byte::h9e6fb58ce66e9e3c(arg1, &var_e8, 
                            arg1[4], 1, r8_1);
                        break;
                    }
                    case 0xad61b:
                    {
                        result_3 = uu_split::n_chunks_by_line_round_robin::hcac37cfac682ac2b(arg1, 
                            &var_e8, arg1[4], 1, r8_1);
                        break;
                    }
                }
                
                result = result_3;
                break;
            }
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h0757c489e3131c13(&var_e8);
    }
    return result;
}
