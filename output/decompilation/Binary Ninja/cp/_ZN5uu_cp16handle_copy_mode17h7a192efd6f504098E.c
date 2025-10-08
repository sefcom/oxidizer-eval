
  int128_t* uu_cp::handle_copy_mode::h7a192efd6f504098(int64_t* arg1, char* arg2, uint64_t arg3, char* arg4, int128_t* arg5, void* arg6, uint64_t arg7, int64_t arg8, void* arg9, char** arg10, char arg11, char arg12, char arg13)

{
    int64_t* result_7 = arg1;
    int64_t r14 = -0x7ffffffffffffff4;
    int32_t rbx = 0xf000 & *(arg9 + 0x38);
    uint64_t var_278_1;
    int64_t var_270_1;
    char var_268_1;
    char var_260_1;
    char** var_258_1;
    char var_250_1;
    int32_t var_220;
    int32_t result_2;
    char**** var_210;
    int64_t var_208;
    int128_t var_1f8;
    char** var_170;
    char* var_f8;
    int128_t* result_4;
    int128_t* result;
    char* rcx_2;
    int64_t* rdi_9;
    void* r9_2;
    
    switch (*(arg6 + 0x67))
    {
        case 0:
        {
            uint64_t var_240_1 = arg5;
            std::fs::metadata::h87a95e5fd9b91fc7(&var_220, arg4);
            int32_t rbx_1 = var_220;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_220);
            
            if (rbx_1 == 2)
            {
                label_4a37ec:
                char const (** rax_9)[0xe8];
                uint64_t rbx_6;
                
                if (!*(arg6 + 0x59) && (!arg11 || *(arg6 + 0x58) != 1))
                {
                    rbx_6 = var_240_1;
                    rax_9 = std::fs::hard_link::h192ee4d7eeae67ad(arg2, arg3, arg4);
                }
                else if (!std::path::Path::is_symlink::h004cfac91d04dbc0(arg2, arg3))
                {
                    rbx_6 = var_240_1;
                    rax_9 = std::fs::hard_link::h192ee4d7eeae67ad(arg2, arg3, arg4);
                }
                else
                {
                    uucore::features::fs::canonicalize::h2a46952db6a00ca6(&var_220, arg2, arg3, 2, 
                        1);
                    void var_48;
                    core::result::Result$LT$T$C$E$GT$::unwrap::h71961d5fd3e5dea1(&var_48, &var_220);
                    rbx_6 = var_240_1;
                    rax_9 = std::fs::hard_link::h54c195aab9fb1046(&var_48, arg4);
                }
                
                char const (** var_150_1)[0xe8] = rax_9;
                char const* const rax_14;
                int64_t rdx_10;
                rax_14 = uucore::features::fs::get_filename::hf3decfe9888d2f9f(arg4, rbx_6);
                
                if (!rax_14)
                    rdx_10 = 0x11;
                
                char const* const rbx_7 = "invalid file namecannot create s…";
                
                if (!rax_14)
                    rax_14 = "invalid file namecannot create s…";
                
                var_170 = nullptr;
                char const* const var_168_1 = rax_14;
                int64_t var_160_1 = rdx_10;
                char var_158_1 = 1;
                char* rax_15;
                int128_t* result_5;
                rax_15 = uucore::features::fs::get_filename::hf3decfe9888d2f9f(arg2, arg3);
                
                if (!rax_15)
                    result_5 = 0x11;
                
                if (rax_15)
                    rbx_7 = rax_15;
                
                var_f8 = nullptr;
                char const* const var_f0_1 = rbx_7;
                result_4 = result_5;
                char var_e0_1 = 1;
                char*** var_118 = &var_170;
                int64_t (* var_110_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                char** var_108_1 = &var_f8;
                int64_t (* var_100_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_220 = &data_55ec90;
                result_2 = 2;
                int64_t var_200_1 = 0;
                var_210 = &var_118;
                int64_t var_208_1 = 2;
                int128_t* result_3;
                core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&result_3, &var_220);
                
                if (!rax_9)
                {
                    result = core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h92d6353b521410cd(&result_3);
                    result_7[1] = 0;
                    *result_7 = -0x7ffffffffffffff4;
                }
                else
                {
                    result = result_3;
                    
                    if (result == -0x8000000000000000)
                    {
                        result_7[1] = 0;
                        *result_7 = -0x7ffffffffffffff4;
                    }
                    else
                    {
                        int128_t var_128;
                        *(result_7 + 0x10) = var_128;
                        *result_7 = -0x7ffffffffffffffe;
                        result_7[1] = result;
                        result_7[4] = rax_9;
                    }
                }
            }
            else
            {
                uucore::features::backup_control::get_backup_path::hd1136aea6807a071(&var_f8, 
                    *(arg6 + 0x65), arg4, var_240_1, *(arg6 + 8), *(arg6 + 0x10));
                
                if (var_f8 != -0x8000000000000000)
                {
                    int64_t var_f0;
                    uu_cp::backup_dest::hdc34a5fbd97a8cc7(&var_220, arg4, var_240_1, var_f0, 
                        result_4, std::path::Path::is_symlink::h004cfac91d04dbc0(arg4, var_240_1));
                    int64_t rax_18 = var_220;
                    int128_t var_148 = result_2;
                    
                    if (rax_18 != -0x7ffffffffffffff4)
                    {
                        result_7[6] = *var_1f8[8];
                        int64_t var_200;
                        *(result_7 + 0x20) = var_200;
                        result_7[3] = var_208;
                        *(result_7 + 8) = var_148;
                        *result_7 = rax_18;
                        return 
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                            &var_f8);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_148);
                    int64_t rax_19 = std::fs::remove_file::h19277b2d7a4f8643(arg4);
                    
                    if (rax_19)
                    {
                        *result_7 = -0x7fffffffffffffff;
                        result_7[1] = rax_19;
                        return 
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                            &var_f8);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_f8);
                }
                
                if (!_$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::h7b31402d4d005f5e(*(arg6 + 0x54), *(arg6 + 0x55)))
                    goto label_4a37ec;
                
                result = std::fs::remove_file::h19277b2d7a4f8643(arg4);
                
                if (!result)
                    goto label_4a37ec;
                
                *result_7 = -0x7fffffffffffffff;
                result_7[1] = result;
            }
            break;
        }
        case 1:
        {
            std::fs::metadata::h87a95e5fd9b91fc7(&var_220, arg4);
            int32_t rbx_4 = var_220;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_220);
            
            if (rbx_4 == 2)
            {
                label_4a36a4:
                uu_cp::symlink_file::haf96ef023560a2f2(&var_220, arg2, arg3, arg4, arg5, arg10);
                result = var_220;
                
                if (result != -0x7ffffffffffffff4)
                    goto label_4a36d0;
                
                result_7[1] = 0;
                *result_7 = -0x7ffffffffffffff4;
            }
            else
            {
                if (!_$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::h7b31402d4d005f5e(*(arg6 + 0x54), *(arg6 + 0x55)))
                    goto label_4a36a4;
                
                result = std::fs::remove_file::h19277b2d7a4f8643(arg4);
                
                if (!result)
                    goto label_4a36a4;
                
                *result_7 = -0x7fffffffffffffff;
                result_7[1] = result;
            }
            break;
        }
        case 2:
        {
            rdi_9 = &var_220;
            rcx_2 = arg4;
            r9_2 = arg6;
            var_250_1 = arg13;
            var_258_1 = arg10;
            var_260_1 = arg12;
            var_268_1 = rbx == 0xa000;
            var_270_1 = arg8;
            var_278_1 = arg7;
            label_4a3546:
            uu_cp::copy_helper::hc581f8ab4f6e163d(rdi_9, arg2, arg3, rcx_2, arg5, r9_2, var_278_1, 
                var_270_1, var_268_1, var_260_1, var_258_1, var_250_1);
            result = var_220;
            
            if (result != -0x7ffffffffffffff4)
            {
                label_4a36d0:
                *(result_7 + 0x28) = var_1f8;
                *(result_7 + 0x18) = var_208;
                *(result_7 + 8) = result_2;
                *result_7 = result;
            }
            else
            {
                result_7[1] = 0;
                *result_7 = r14;
            }
            break;
        }
        case 3:
        {
            int128_t** result_1 = result_7;
            std::fs::metadata::h87a95e5fd9b91fc7(&var_220, arg4);
            int32_t r14_1 = var_220;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_220);
            
            if (r14_1 != 2)
            {
                result_7 = result_1;
                r14 = -0x7ffffffffffffff4;
                
                switch (*(arg6 + 0x66))
                {
                    case 0:
                    {
                        rdi_9 = &var_220;
                        rcx_2 = arg4;
                        r9_2 = arg6;
                        var_250_1 = arg13;
                        var_258_1 = arg10;
                        var_260_1 = arg12;
                        var_268_1 = rbx == 0xa000;
                        var_270_1 = arg8;
                        var_278_1 = arg7;
                        goto label_4a3546;
                    }
                    case 1:
                    {
                        result = arg5;
                        
                        if (!*(arg6 + 0x5f))
                            result_7[1] = 1;
                        else
                        {
                            var_f8 = 1;
                            char* var_f0_3 = arg4;
                            result_4 = result;
                            char var_e0_2 = 1;
                            var_170 = &var_f8;
                            int64_t (* var_168_3)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_220 = &data_55eb08;
                            result_2 = 2;
                            int64_t var_200_3 = 0;
                            var_210 = &var_170;
                            int64_t var_208_3 = 1;
                            result = std::io::stdio::_print::h5e446ff973c02de6(&var_220);
                            result_7[1] = 1;
                        }
                        
                        *result_7 = r14;
                        break;
                    }
                    case 2:
                    {
                        std::fs::symlink_metadata::h814bc3976f7d40c5(&var_220, arg4);
                        char* r14_3 = var_220;
                        int64_t rcx_8 = result_2;
                        
                        if (r14_3 != 2)
                        {
                            memcpy(&result_4, &var_210, 0xa0);
                            var_f8 = r14_3;
                            int64_t var_f0_4 = rcx_8;
                            std::fs::Metadata::modified::he3c19aa683c05d81(&var_220, arg9);
                            int64_t r14_4 = var_220;
                            
                            if (result_2 != 0x3b9aca00)
                            {
                                std::fs::Metadata::modified::he3c19aa683c05d81(&var_220, &var_f8);
                                result = result_2;
                                rcx_8 = var_220;
                                
                                if (result == 0x3b9aca00)
                                    goto label_4a3a4c;
                                
                                int128_t** result_6;
                                
                                if (r14_4 == rcx_8)
                                {
                                    result_6 = result_1;
                                    r14 = -0x7ffffffffffffff4;
                                    
                                    if (result_2 > result)
                                    {
                                        label_4a3c9c:
                                        uu_cp::OverwriteMode::verify::hcf2d8eaa11706b21(&var_220, 
                                            *(arg6 + 0x54), arg4, arg5, *(arg6 + 0x5f));
                                        result = var_220;
                                        
                                        if (result != -0x7ffffffffffffff4)
                                        {
                                            label_4a3d4f:
                                            *(result_6 + 0x28) = var_1f8;
                                            *(result_6 + 0x18) = var_208;
                                            *(result_6 + 8) = result_2;
                                            *result_6 = result;
                                        }
                                        else
                                        {
                                            uu_cp::copy_helper::hc581f8ab4f6e163d(&var_220, arg2, 
                                                arg3, arg4, arg5, arg6, arg7, arg8, rbx == 0xa000, 
                                                arg12, arg10, arg13);
                                            result = var_220;
                                            
                                            if (result != -0x7ffffffffffffff4)
                                                goto label_4a3d4f;
                                            
                                            result_7 = result_6;
                                            result_7[1] = 0;
                                            *result_7 = r14;
                                        }
                                    }
                                    else
                                    {
                                        result_6[1] = 1;
                                        *result_6 = -0x800000000000000c;
                                    }
                                }
                                else
                                {
                                    result_6 = result_1;
                                    r14 = -0x7ffffffffffffff4;
                                    
                                    if (r14_4 > rcx_8)
                                        goto label_4a3c9c;
                                    
                                    result_6[1] = 1;
                                    *result_6 = -0x800000000000000c;
                                }
                            }
                            else
                            {
                                result = result_1;
                                *result = -0x7fffffffffffffff;
                                *(result + 8) = r14_4;
                            }
                        }
                        else
                        {
                            label_4a3a4c:
                            result = result_1;
                            *result = -0x7fffffffffffffff;
                            *(result + 8) = rcx_8;
                        }
                        break;
                    }
                    case 3:
                    {
                        var_f8 = arg4;
                        int128_t* var_f0_2 = arg5;
                        var_170 = &var_f8;
                        uint64_t (* var_168_2)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                        var_220 = &data_55ecb0;
                        result_2 = 2;
                        int64_t var_200_2 = 0;
                        var_210 = &var_170;
                        int64_t var_208_2 = 1;
                        result = core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(
                            &result_7[1], &var_220);
                        *result_7 = -0x7ffffffffffffffd;
                        break;
                    }
                }
            }
            else
            {
                uu_cp::copy_helper::hc581f8ab4f6e163d(&var_220, arg2, arg3, arg4, arg5, arg6, arg7, 
                    arg8, rbx == 0xa000, arg12, arg10, arg13);
                result = var_220;
                result_7 = result_1;
                
                if (result != -0x7ffffffffffffff4)
                    goto label_4a36d0;
                
                result_7[1] = 0;
                *result_7 = -0x7ffffffffffffff4;
            }
            break;
        }
        case 4:
        {
            var_220 = 0x1b600000000;
            int32_t var_218 = 0;
            int16_t var_214_1 = 0;
            *var_218[1] = 1;
            var_214_1 = 1;
            std::fs::OpenOptions::open::h9d0227b1746e74f9(&var_f8, &var_220, arg4);
            result = core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(
                core::result::Result$LT$T$C$E$GT$::unwrap::h46a0ee1c7738c33e(&var_f8));
            result_7[1] = 0;
            *result_7 = r14;
            break;
        }
    }
    
    return result;
}
