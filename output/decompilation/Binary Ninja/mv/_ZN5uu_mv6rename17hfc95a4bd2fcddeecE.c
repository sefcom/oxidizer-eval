
  void** uu_mv::rename::hfc95a4bd2fcddeec(char* arg1, uint64_t arg2, char* arg3, int32_t* arg4, void* arg5, int64_t* arg6)

{
    int64_t var_318 = -0x8000000000000000;
    int32_t rax;
    rax = 1;
    int32_t var_32c = rax;
    int32_t var_2c8;
    std::fs::metadata::h1d9ddf5324749f9a(&var_2c8, arg3);
    void** result;
    uint64_t var_308;
    char const (** const** result_8)[0x41];
    int32_t var_2e8;
    int64_t* var_2b8;
    char const (** const result_2)[0x41];
    int32_t* var_208;
    char var_200;
    void* var_148;
    char const (** const* var_128)[0x41];
    uint64_t var_118;
    
    if (var_2c8 != 2)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_2c8);
        char r12_1 = *(arg5 + 0x35);
        char rax_1 = *(arg5 + 0x37);
        
        if (rax_1 == 2 && r12_1 == 1)
            result = nullptr;
        else if (rax_1 == 1)
        {
            if (*(arg5 + 0x34))
            {
                result_2 = 1;
                char* var_210_1 = arg3;
                var_208 = arg4;
                char var_200_1 = 1;
                var_128 = &result_2;
                int64_t (* var_120_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_2c8 = &data_5881a0;
                int64_t var_2c0 = 2;
                int64_t var_2a8_1 = 0;
                var_2b8 = &var_128;
                int64_t var_2b0_1 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_2c8);
            }
            
            result = nullptr;
        }
        else if (rax_1 == 2)
        {
            std::fs::metadata::h1d9ddf5324749f9a(&var_2c8, arg1);
            char const (*** r13_1)[0x41] = var_2c8;
            char const (**** result_1)[0x41];
            result = result_1;
            
            if (r13_1 != 2)
            {
                memcpy(&var_118, &var_2b8, 0xa0);
                var_128 = r13_1;
                void** result_3 = result;
                std::fs::Metadata::modified::h6f16921acf618ae6(&result_2, &var_128);
                result = result_2;
                int32_t var_210;
                
                if (var_210 != 0x3b9aca00)
                {
                    std::fs::metadata::h1d9ddf5324749f9a(&var_2c8, arg3);
                    char const (** result_11)[0x41] = var_2c8;
                    char const (** const** result_7)[0x41] = result_1;
                    
                    if (result_11 != 2)
                    {
                        memcpy(&var_208, &var_2b8, 0xa0);
                        result_2 = result_11;
                        char const (** const** result_9)[0x41] = result_7;
                        std::fs::Metadata::modified::h6f16921acf618ae6(&result_8, &result_2);
                        result_7 = result_8;
                    }
                    
                    if (result_11 != 2 && var_2e8 != 0x3b9aca00)
                    {
                        bool rcx_2 = result != result_7;
                        
                        if (result < result_7)
                            rcx_2 = true;
                        
                        bool rsi_19 = var_210 != var_2e8;
                        
                        if (var_210 < var_2e8)
                            rsi_19 = true;
                        
                        if (rcx_2)
                            rsi_19 = rcx_2;
                        
                        if (rsi_19 == 1)
                            goto label_4eb40e;
                        
                        result = nullptr;
                    }
                    else
                        result = result_7;
                }
            }
        }
        else if (rax_1 != 3)
        {
            label_4eb40e:
            uint32_t rax_18 = r12_1;
            
            if (!rax_18)
            {
                if (*(arg5 + 0x34))
                {
                    result_2 = 1;
                    char* var_210_7 = arg3;
                    var_208 = arg4;
                    char var_200_4 = 1;
                    var_128 = &result_2;
                    int64_t (* var_120_8)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_2c8 = &data_5881a0;
                    int64_t var_2c0_8 = 2;
                    int64_t var_2a8_8 = 0;
                    var_2b8 = &var_128;
                    int64_t var_2b0_8 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&var_2c8);
                }
                
                result = nullptr;
            }
            else
            {
                char rax_19;
                
                if (rax_18 == 1)
                {
                    char const (** result_10)[0x41];
                    int64_t rdx_6;
                    result_10 = uucore::util_name::h60d842bf27b05e82();
                    result_2 = result_10;
                    int64_t var_210_5 = rdx_6;
                    var_128 = &result_2;
                    int64_t (* var_120_6)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                    var_2c8 = &data_587e10;
                    int64_t var_2c0_5 = 2;
                    int64_t var_2a8_6 = 0;
                    var_2b8 = &var_128;
                    int64_t var_2b0_6 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    result_2 = 1;
                    char* var_210_6 = arg3;
                    var_208 = arg4;
                    var_200 = 1;
                    var_128 = &result_2;
                    int64_t (* var_120_7)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_2c8 = &data_5881d0;
                    int64_t var_2c0_6 = 2;
                    int64_t var_2a8_7 = 0;
                    var_2b8 = &var_128;
                    int64_t var_2b0_7 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    var_2c8 = &data_587e50;
                    int64_t var_2c0_7 = 1;
                    var_2b8 = 8;
                    var_2b0_7 = {0};
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    var_148 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&var_148);
                    rax_19 = uucore::read_yes::hc350e858ab85cf03();
                }
                
                if (rax_18 == 1 && !rax_19)
                    result = std::io::error::Error::new::h0657970bda442b78(0x27, 1, 0);
                else
                {
                    uucore::features::backup_control::get_backup_path::hb28e229807111f9d(&var_2c8, 
                        *(arg5 + 0x36), arg3, arg4, *(arg5 + 8), *(arg5 + 0x10));
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&var_318);
                    var_308 = var_2b8;
                    var_318 = var_2c8;
                    
                    if (var_318 == -0x8000000000000000)
                        goto label_4ead4d;
                    
                    char* var_310;
                    void** result_6 = uu_mv::rename_with_fallback::h48f1d4f2ed6b729f(arg3, arg4, 
                        var_310, var_308, arg6);
                    result = result_6;
                    
                    if (!result_6)
                        goto label_4ead4d;
                }
            }
        }
        else
        {
            result_2 = 1;
            char* var_210_3 = arg3;
            var_208 = arg4;
            char var_200_2 = 1;
            var_128 = &result_2;
            int64_t (* var_120_3)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_2c8 = &data_5881c0;
            int64_t var_2c0_2 = 1;
            int64_t var_2a8_3 = 0;
            var_2b8 = &var_128;
            int64_t var_2b0_3 = 1;
            void var_48;
            core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_48, &var_2c8);
            result = std::io::error::Error::new::h3b474d96466fa494(0x27, &var_48);
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_2c8);
        label_4ead4d:
        std::fs::metadata::h1d9ddf5324749f9a(&var_2c8, arg3);
        
        if (var_2c8 != 2)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_2c8);
            
            if (!std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4))
                goto label_4eae97;
            
            if (!std::path::Path::is_dir::h9ac0db933706da51(arg1, arg2))
                goto label_4eae97;
            
            if (!uu_mv::is_empty_dir::he3f2d58304cc65e8(arg3))
                result = std::io::error::Error::new::h0657970bda442b78(0x27, 
                    "Directory not empty{msg}: [{elap…", 0x13);
            else
            {
                void** result_4 = std::fs::remove_dir::hab61638394c5814d(arg3);
                result = result_4;
                
                if (!result_4)
                    goto label_4eae97;
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_2c8);
            label_4eae97:
            void** result_5 =
                uu_mv::rename_with_fallback::h48f1d4f2ed6b729f(arg1, arg2, arg3, arg4, arg6);
            result = result_5;
            
            if (!result_5)
            {
                if (!*(arg5 + 0x31))
                    result = nullptr;
                else
                {
                    int64_t temp0_1 = var_318;
                    result = temp0_1 != -0x8000000000000000;
                    
                    if (temp0_1 == -0x8000000000000000)
                    {
                        var_128 = 1;
                        char* var_120_4 = arg1;
                        var_118 = arg2;
                        char var_110_2 = 1;
                        result_2 = 1;
                        char* var_210_4 = arg3;
                        var_208 = arg4;
                        char var_200_3 = 1;
                        result_8 = &var_128;
                        var_2e8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        char const (** const* var_2e0_2)[0x41] = &result_2;
                        int64_t (* var_2d8_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_2c8 = &data_588230;
                        int64_t var_2c0_3 = 2;
                        int64_t var_2a8_4 = 0;
                        var_2b8 = &result_8;
                        int64_t var_2b0_4 = 2;
                        int128_t var_60;
                        core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_60, 
                            &var_2c8);
                        result_2 = var_60;
                        int32_t* var_50;
                        var_208 = var_50;
                        int32_t* rax_17;
                        rax_17 = 1;
                        int32_t var_32c_3 = rax_17;
                    }
                    else
                    {
                        int128_t var_168 = var_318;
                        var_148 = 1;
                        char* var_140_1 = arg1;
                        uint64_t var_138_1 = arg2;
                        char var_130_1 = 1;
                        result_8 = 1;
                        var_2e8 = arg3;
                        int32_t* var_2e0_1 = arg4;
                        int64_t var_2d8;
                        var_2d8 = 1;
                        int64_t rax_9 = *var_168[8];
                        var_128 = 1;
                        int64_t var_120_2 = rax_9;
                        var_118 = var_308;
                        char var_110_1 = 1;
                        var_2c8 = &var_148;
                        int64_t (* var_2c0_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_2b8 = &result_8;
                        int64_t (* var_2b0_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        int64_t* var_2a8_2 = &var_128;
                        int64_t (* var_2a0_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        result_2 = &data_5881f0;
                        int64_t var_210_2 = 4;
                        int64_t var_1f8_1 = 0;
                        var_208 = &var_2c8;
                        var_200 = 3;
                        int128_t var_78;
                        core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_78, 
                            &result_2);
                        result_2 = var_78;
                        int32_t* var_68;
                        var_208 = var_68;
                        int32_t var_32c_1 = 0;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                            &var_168);
                        int32_t var_32c_2 = 0;
                    }
                    
                    if (!arg6)
                    {
                        var_128 = &result_2;
                        int64_t (* var_120_5)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        var_2c8 = &data_587e60;
                        int64_t var_2c0_4 = 2;
                        int64_t var_2a8_5 = 0;
                        var_2b8 = &var_128;
                        int64_t var_2b0_5 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&var_2c8);
                    }
                    else
                        indicatif::multi::MultiProgress::suspend::hc6003d08fa5df55b(arg6, 
                            &result_2);
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(
                        &result_2);
                }
                
                if (!result && var_318 != -0x8000000000000000)
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&var_318);
                
                return nullptr;
            }
        }
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&var_318);
    return result;
}
