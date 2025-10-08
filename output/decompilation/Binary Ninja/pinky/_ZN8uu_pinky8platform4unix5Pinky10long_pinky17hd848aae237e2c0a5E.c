
  void* uu_pinky::platform::unix::Pinky::long_pinky::hd848aae237e2c0a5(void* arg1)

{
    void* result = *(arg1 + 0x10);
    
    if (result)
    {
        void* rbp_1 = *(arg1 + 8);
        char rcx_1 = *(arg1 + 0x1e);
        char rcx_2 = *(arg1 + 0x1b);
        char rcx_3 = *(arg1 + 0x1c);
        int64_t i_1 = result * 0x18;
        int64_t i;
        
        do
        {
            void* var_170 = rbp_1;
            int64_t* var_b0 = &var_170;
            int64_t (* var_a8_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3d9b1dc5a3e6c5f8;
            char const (** const var_138)[0x1b] = &data_4f9090;
            int64_t var_130_2 = 2;
            void* const var_118_1 = &data_41a8a0;
            int64_t var_110_1 = 1;
            int64_t** var_128_2 = &var_b0;
            int64_t var_120 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_138);
            void* rax_1 = var_170;
            _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h4bb3a5c7c498e57d(&var_b0, *(rax_1 + 8), *(rax_1 + 0x10));
            
            if (var_b0 == -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::h9dd5054bcb71dab2(&var_b0);
                var_138 = &data_4f9080;
                int64_t var_130_1 = 1;
                int64_t var_128_1 = 8;
                var_120 = {0};
                result = std::io::stdio::_print::h5e446ff973c02de6(&var_138);
            }
            else
            {
                int128_t var_40;
                int128_t var_c8_1 = var_40;
                int128_t var_50;
                int128_t var_d8 = var_50;
                int128_t var_90;
                var_118_1 = var_90;
                int128_t var_a0;
                var_128_2 = var_a0;
                var_138 = var_b0;
                void** const var_1c8;
                uu_pinky::platform::unix::gecos_to_fullname::hc5cc590c8c5acc48(&var_1c8, &var_138);
                int64_t var_1b8;
                int128_t var_180;
                int128_t var_168;
                int64_t rax_2;
                int128_t var_70;
                int128_t var_60;
                
                if (var_1c8 != -0x8000000000000000)
                {
                    int64_t var_158_2 = var_1b8;
                    var_168 = var_1c8;
                    rax_2 = *var_70[8];
                    
                    if (rax_2 != -0x8000000000000000)
                        var_180 = var_60;
                    else
                    {
                        label_463c61:
                        var_180 = 1;
                        *var_180[8] = 0;
                        rax_2 = 0;
                    }
                }
                else
                {
                    var_168 = 0;
                    *var_168[8] = 1;
                    int64_t var_158_1 = 0;
                    rax_2 = *var_70[8];
                    
                    if (rax_2 == -0x8000000000000000)
                        goto label_463c61;
                    
                    var_180 = var_60;
                }
                int64_t var_188 = rax_2;
                int128_t var_80;
                int64_t rax_4 = var_80;
                
                if (rax_4 != -0x8000000000000000)
                    int128_t var_148 = var_80;
                else
                {
                    var_148 = 1;
                    *var_148[8] = 0;
                    rax_4 = 0;
                }
                
                int64_t var_150 = rax_4;
                int128_t* var_1e8 = &var_168;
                int64_t (* var_1e0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1c8 = &data_4f9020;
                int64_t var_1c0_1 = 2;
                int64_t var_1a8_1 = 0;
                int128_t** var_1b8_1 = &var_1e8;
                int64_t var_1b0_1 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                
                if (rcx_1 & 1)
                {
                    var_1e8 = &var_188;
                    int64_t (* var_1e0_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_1c8 = &data_4f90b0;
                    int64_t var_1c0_2 = 1;
                    void* const var_1a8_2 = &data_41a8e0;
                    int64_t var_1a0_1 = 1;
                    int128_t** var_1b8_2 = &var_1e8;
                    int64_t var_1b0_2 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                    var_1e8 = &var_150;
                    int64_t (* var_1e0_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_1c8 = &data_4f9040;
                    int64_t var_1c0_3 = 2;
                    int64_t var_1a8_3 = 0;
                    var_1b8_1 = &var_1e8;
                    var_1b0_1 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                }
                
                int32_t var_198;
                int32_t var_194;
                
                if (rcx_2 & 1)
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf329c2e59eb871a4(&var_1c8, var_180, *var_180[8]);
                    var_1e8 = var_1c8;
                    std::path::PathBuf::push::had6f445dae3e5da7(&var_1e8, 
                        ".project\n       Februaryextern …");
                    var_1c8 = var_1e8;
                    std::fs::File::open::ha0c637b6d5aad0c6(&var_198, &var_1c8);
                    
                    if (var_198 != 1)
                    {
                        var_1c8 = &data_4f9060;
                        int64_t var_1c0_4 = 1;
                        var_1b8_1 = 8;
                        var_1b0_1 = {0};
                        std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                        uu_pinky::platform::unix::read_to_console::hc6a6cffdbcb4a9a1(var_194);
                    }
                    else
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h7f4d083a74fe168d(&var_198);
                }
                
                if (rcx_3 & 1)
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf329c2e59eb871a4(&var_1c8, var_180, *var_180[8]);
                    var_1e8 = var_1c8;
                    std::path::PathBuf::push::had6f445dae3e5da7(&var_1e8, 
                        ".plan(uutils coreutils) 0.0.30Di…");
                    int128_t** var_1b8_3 = var_1b8_1;
                    var_1c8 = var_1e8;
                    std::fs::File::open::ha0c637b6d5aad0c6(&var_198, &var_1c8);
                    
                    if (var_198 != 1)
                    {
                        var_1c8 = &data_4f9070;
                        int64_t var_1c0_5 = 1;
                        int64_t var_1b8_4 = 8;
                        var_1b0_1 = {0};
                        std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                        uu_pinky::platform::unix::read_to_console::hc6a6cffdbcb4a9a1(var_194);
                    }
                    else
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h7f4d083a74fe168d(&var_198);
                }
                
                var_1c8 = &data_4f8f70;
                int64_t var_1c0_6 = 1;
                var_1b8 = 8;
                var_1b0_1 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_150);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_188);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_168);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_138);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h29ddd331d55ccf59(
                    &var_120);
                result = core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h29ddd331d55ccf59(&var_d8);
            }
            
            rbp_1 += 0x18;
            i = i_1;
            i_1 -= 0x18;
        } while (i != 0x18);
    }
    
    return result;
}
