
  void** uu_mv::rename::h274fbdeb4e433295(int64_t arg1, uint64_t arg2, int64_t arg3, uint64_t arg4, void* arg5, void** arg6)

{
    int128_t* result_23 = -0x8000000000000000;
    int128_t* result_14;
    std::fs::metadata::h12bb7891128f5212(&result_14, arg3);
    int32_t result_17 = result_14;
    void** result_16 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&result_14);
    void** result;
    void** result_9;
    void** result_10;
    int32_t var_2b8;
    uint64_t var_2a0;
    void** result_1;
    void*** var_288;
    void*** result_2;
    int128_t** var_1d8;
    char var_1d0;
    void** result_21;
    uint64_t var_100;
    uint32_t rax_7;
    void* result_7;
    int128_t* result_22;
    
    if (result_17 != 2)
        switch (*(arg5 + 0x37))
        {
            case 0:
            {
                rax_7 = *(arg5 + 0x35);
                
                if (!rax_7)
                {
                    label_48d465:
                    
                    if (!*(arg5 + 0x34))
                        result = nullptr;
                    else
                    {
                        result_2 = 1;
                        int64_t var_1e0_8 = arg3;
                        var_1d8 = arg4;
                        char var_1d0_4 = 1;
                        result_21 = &result_2;
                        int64_t (* var_108_8)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_14 = &data_5419a0;
                        int64_t var_290_7 = 2;
                        int64_t var_278_9 = 0;
                        var_288 = &result_21;
                        int64_t var_280_9 = 1;
                        result_16 = std::io::stdio::_print::h5e446ff973c02de6(&result_14);
                        result = nullptr;
                    }
                }
                else
                {
                    label_48cba4:
                    char rax_11;
                    
                    if (rax_7 == 1)
                    {
                        void*** result_12;
                        int64_t rdx_4;
                        result_12 = uucore::util_name::h074417a1e6395129();
                        result_2 = result_12;
                        int64_t var_1e0_1 = rdx_4;
                        result_21 = &result_2;
                        int64_t (* var_108_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                        result_14 = &data_541650;
                        int64_t var_290 = 2;
                        int64_t var_278_1 = 0;
                        var_288 = &result_21;
                        int64_t var_280_1 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&result_14);
                        result_2 = 1;
                        int64_t var_1e0_2 = arg3;
                        var_1d8 = arg4;
                        var_1d0 = 1;
                        result_21 = &result_2;
                        int64_t (* var_108_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_14 = &data_5419d0;
                        int64_t var_290_1 = 2;
                        int64_t var_278_2 = 0;
                        var_288 = &result_21;
                        int64_t var_280_2 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&result_14);
                        result_14 = &data_541690;
                        result_1 = 1;
                        var_288 = 8;
                        var_280_2 = {0};
                        std::io::stdio::_eprint::h57899770eacec2ad(&result_14);
                        result_14 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                        _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(&result_14);
                        rax_11 = uucore::read_yes::h67cb9532536454c0();
                    }
                    
                    if (rax_7 == 1 && !rax_11)
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h19a54565959f0f6f(&result_2, 1, 0);
                        var_288 = var_1d8;
                        result_14 = result_2;
                        result_7 = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                            alloc::boxed::Box$LT$T$GT$::new::hfa7a333923b705a4(&result_14), 
                            &data_541778);
                        result = result_7;
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h69e481ccc24b6e8d(-0x8000000000000000, 
                            uucore::features::backup_control::get_backup_path::hd1136aea6807a071(
                                &result_14, *(arg5 + 0x36), arg3, arg4, *(arg5 + 8), 
                                *(arg5 + 0x10)));
                        int128_t* result_19 = result_14;
                        uint64_t rcx_2 = var_288;
                        result_9 = result_1;
                        var_2a0 = rcx_2;
                        
                        if (result_19 == -0x8000000000000000)
                            goto label_48cac3;
                        
                        void** result_6 = uu_mv::rename_with_fallback::h3652858bdc29b866(arg3, 
                            arg4, result_1, rcx_2, arg6);
                        result = result_6;
                        
                        if (!result_6)
                        {
                            result_22 = result_19;
                            goto label_48cad4;
                        }
                        
                        result_23 = result_19;
                        result_16 = result_9;
                    }
                }
                break;
            }
            case 1:
            {
                if (*(arg5 + 0x34) == 1)
                {
                    result_2 = 1;
                    int64_t var_1e0_6 = arg3;
                    var_1d8 = arg4;
                    char var_1d0_2 = 1;
                    result_21 = &result_2;
                    int64_t (* var_108_5)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_14 = &data_5419a0;
                    int64_t var_290_4 = 2;
                    int64_t var_278_6 = 0;
                    var_288 = &result_21;
                    int64_t var_280_6 = 1;
                    result_16 = std::io::stdio::_print::h5e446ff973c02de6(&result_14);
                }
                
                result = nullptr;
                break;
            }
            case 2:
            {
                result_16 = std::fs::metadata::h12bb7891128f5212(&result_14, arg1);
                int128_t* result_18 = result_14;
                result = result_1;
                
                if (result_18 != 2)
                {
                    memcpy(&var_100, &var_288, 0xa0);
                    result_21 = result_18;
                    void** result_3 = result;
                    result_16 =
                        std::fs::Metadata::modified::he3c19aa683c05d81(&result_2, &result_21);
                    result = result_2;
                    int32_t var_1e0;
                    
                    if (var_1e0 != 0x3b9aca00)
                    {
                        var_2a0 = var_1e0;
                        result_16 = std::fs::metadata::h12bb7891128f5212(&result_14, arg3);
                        int128_t* result_13 = result_14;
                        void** result_8 = result_1;
                        
                        if (result_13 != 2)
                        {
                            memcpy(&var_1d8, &var_288, 0xa0);
                            result_2 = result_13;
                            void** result_11 = result_8;
                            result_16 = std::fs::Metadata::modified::he3c19aa683c05d81(&result_10, 
                                &result_2);
                            result_8 = result_10;
                        }
                        
                        if (result_13 == 2 || var_2b8 == 0x3b9aca00)
                            result = result_8;
                        else if (result == result_8)
                        {
                            if (var_2a0 > var_2b8)
                            {
                                label_48d454:
                                rax_7 = *(arg5 + 0x35);
                                
                                if (rax_7)
                                    goto label_48cba4;
                                
                                goto label_48d465;
                            }
                            
                            result = nullptr;
                        }
                        else
                        {
                            if (result > result_8)
                                goto label_48d454;
                            
                            result = nullptr;
                        }
                    }
                }
                break;
            }
            case 3:
            {
                result_2 = 1;
                int64_t var_1e0_5 = arg3;
                var_1d8 = arg4;
                char var_1d0_1 = 1;
                result_21 = &result_2;
                int64_t (* var_108_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                result_14 = &data_5419c0;
                int64_t var_290_3 = 1;
                int64_t var_278_5 = 0;
                var_288 = &result_21;
                int64_t var_280_5 = 1;
                void var_48;
                core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_48, &result_14);
                result_7 = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                    alloc::boxed::Box$LT$T$GT$::new::hfa7a333923b705a4(&var_48), &data_541778);
                result = result_7;
                break;
            }
        }
    else
    {
        label_48cac3:
        result_22 = -0x8000000000000000;
        label_48cad4:
        std::fs::metadata::h12bb7891128f5212(&result_14, arg3);
        int32_t result_20 = result_14;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&result_14);
        
        if (result_20 == 2)
        {
            label_48cb5f:
            void** result_5 =
                uu_mv::rename_with_fallback::h3652858bdc29b866(arg1, arg2, arg3, arg4, arg6);
            result = result_5;
            
            if (!result_5)
            {
                if (!*(arg5 + 0x31))
                {
                    void* rax_13;
                    rax_13 = result_22 == -0x8000000000000000;
                    rax_13 = rax_13;
                    
                    if (!rax_13)
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(
                            result_22, result_9);
                }
                else
                {
                    result = result_22 != -0x8000000000000000;
                    int128_t var_130;
                    
                    if (result_22 == -0x8000000000000000)
                    {
                        result_21 = 1;
                        int64_t var_108_6 = arg1;
                        var_100 = arg2;
                        char var_f8_2 = 1;
                        result_2 = 1;
                        int64_t var_1e0_7 = arg3;
                        var_1d8 = arg4;
                        char var_1d0_3 = 1;
                        result_10 = &result_21;
                        var_2b8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        void**** var_2b0_2 = &result_2;
                        int64_t (* var_2a8_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_14 = &data_541a30;
                        int64_t var_290_5 = 2;
                        int64_t var_278_7 = 0;
                        var_288 = &result_10;
                        int64_t var_280_7 = 2;
                        core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_130, 
                            &result_14);
                        result_2 = var_130;
                        int128_t** var_120;
                        var_1d8 = var_120;
                        
                        if (arg6)
                            indicatif::multi::MultiProgress::suspend::h8665c0f9399b7cba(*arg6, 
                                &result_2);
                        else
                        {
                            label_48d316:
                            result_21 = &result_2;
                            int64_t (* var_108_7)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            result_14 = &data_541a50;
                            int64_t var_290_6 = 2;
                            int64_t var_278_8 = 0;
                            var_288 = &result_21;
                            int64_t var_280_8 = 1;
                            std::io::stdio::_print::h5e446ff973c02de6(&result_14);
                        }
                    }
                    else
                    {
                        var_130 = 1;
                        *var_130[8] = arg1;
                        uint64_t var_120_1 = arg2;
                        char var_118_1 = 1;
                        result_10 = 1;
                        var_2b8 = arg3;
                        uint64_t var_2b0_1 = arg4;
                        int64_t var_2a8;
                        var_2a8 = 1;
                        result_21 = 1;
                        void** result_15 = result_9;
                        var_100 = var_2a0;
                        char var_f8_1 = 1;
                        result_14 = &var_130;
                        int64_t (* var_290_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_288 = &result_10;
                        int64_t (* var_280_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        void*** var_278_4 = &result_21;
                        int64_t (* var_270_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_2 = &data_5419f0;
                        int64_t var_1e0_4 = 4;
                        int64_t var_1c8_1 = 0;
                        var_1d8 = &result_14;
                        var_1d0 = 3;
                        int128_t var_60;
                        core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_60, 
                            &result_2);
                        result_2 = var_60;
                        int128_t** var_50;
                        var_1d8 = var_50;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(
                            result_22, result_9);
                        
                        if (!arg6)
                            goto label_48d316;
                        
                        indicatif::multi::MultiProgress::suspend::h8665c0f9399b7cba(*arg6, 
                            &result_2);
                    }
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8db761034a9103d6(
                        &result_2);
                    
                    if (!(result_22 == -0x8000000000000000 | result))
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(
                            result_22, result_9);
                }
                
                return nullptr;
            }
        }
        else
        {
            if (!std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4))
                goto label_48cb5f;
            
            if (!std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2))
                goto label_48cb5f;
            
            if (!uu_mv::is_empty_dir::h380343aaab058219(arg3))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h19a54565959f0f6f(&result_2, "Directory not empty (backup: ){m…", 0x13);
                var_288 = var_1d8;
                result_14 = result_2;
                result = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                    alloc::boxed::Box$LT$T$GT$::new::hfa7a333923b705a4(&result_14), &data_541778);
            }
            else
            {
                void** result_4 = std::fs::remove_dir::h83cddb2f81627111(arg3);
                result = result_4;
                
                if (!result_4)
                    goto label_48cb5f;
            }
        }
        
        result_23 = result_22;
        result_16 = result_9;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h69e481ccc24b6e8d(result_23, result_16);
    return result;
}
