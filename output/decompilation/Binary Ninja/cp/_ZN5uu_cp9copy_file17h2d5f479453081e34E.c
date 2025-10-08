
  int128_t* uu_cp::copy_file::h2d5f479453081e34(int64_t* arg1, void** arg2, char* arg3, uint64_t arg4, int64_t* arg5, uint64_t arg6, void* arg7, char** arg8, int64_t* arg9, char** arg10, char arg11)

{
    uint64_t r15 = arg6;
    char* r13 = arg3;
    void* rbp = arg7;
    char result_2 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg3, arg4);
    char rax = std::path::Path::is_symlink::h004cfac91d04dbc0(arg5, r15);
    char var_358;
    int64_t** result_4;
    char var_320;
    int64_t** result_1;
    int64_t** var_310;
    char* var_270;
    int64_t* var_248;
    int128_t* result;
    
    if (rax)
    {
        char* rbp_1 = r13;
        uint64_t r14_1 = r15;
        uucore::features::fs::FileInformation::from_path::hfd069e4f76a9cc58(&var_320, arg5, r15, 0);
        
        if (!(var_320 & 1))
        {
            memcpy(&var_248, &result_1, 0x90);
            
            if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h09bdbbaed60d7c0e(arg8, 
                    &var_248))
                goto label_4a3fea;
            
            var_270 = rbp_1;
            uint64_t var_268_1 = arg4;
            var_358 = arg5;
            uint64_t var_350 = r14_1;
            var_248 = &var_270;
            uint64_t (* var_240_1)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            char* var_238_1 = &var_358;
            uint64_t (* var_230_1)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            var_320 = &data_55ed00;
            result_1 = 3;
            int64_t var_300_1 = 0;
            var_310 = &var_248;
            label_4a407f:
            int64_t var_308_1 = 2;
            label_4a409a:
            result =
                core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&arg1[1], &var_320);
            *arg1 = -0x7ffffffffffffffd;
            return result;
        }
        
        result_4 = result_1;
        var_358 = 1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::h045b393fe041be74(&var_358);
        label_4a3fea:
        
        if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h7b4041879891822c(arg9, arg5, 
            r14_1))
        {
            if (!*(arg7 + 0x59))
            {
                r13 = rbp_1;
                
                if (!arg11)
                {
                    if (!result_2)
                        goto label_4a40d6;
                }
                else if (!result_2 || *(arg7 + 0x58))
                    goto label_4a40d6;
            }
            else
            {
                label_4a40d6:
                std::fs::metadata::h87a95e5fd9b91fc7(&var_320, arg5);
                int32_t rbx_2 = var_320;
                r13 = rbp_1;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_320);
                
                if (rbx_2 == 2 && (*(arg7 + 0x54) || *(arg7 + 0x55) != 1)
                    && !uucore::features::fs::is_symlink_loop::h04d1ad90472ac98a(arg5, r14_1))
                {
                    std::env::var_os::h9c19d2ca6c58ed5c(&var_320);
                    int64_t rdi_12 = var_320;
                    int64_t** result_8 = result_1;
                    
                    if (rdi_12 == -0x8000000000000000)
                    {
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h4d2013ddd054f4db(-0x8000000000000000, result_8);
                        var_248 = arg5;
                        uint64_t var_240_3 = r14_1;
                        var_358 = &var_248;
                        uint64_t (* var_350_2)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                        var_320 = &data_55ed30;
                        result_1 = 2;
                        int64_t var_300_3 = 0;
                        var_310 = &var_358;
                        int64_t var_308_2 = 1;
                        goto label_4a409a;
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h4d2013ddd054f4db(rdi_12, result_8);
                }
            }
            
            r15 = r14_1;
            rbp = arg7;
            
            if (!uucore::features::fs::paths_refer_to_same_file::h63765c86a5a0b9e6(r13, arg4, arg5, 
                    r14_1, 1) || *(rbp + 0x54) || *(rbp + 0x55) != 1 || *(rbp + 0x65))
                goto label_4a425b;
            
            result = std::fs::remove_file::h19277b2d7a4f8643(arg5);
            
            if (result)
                goto label_4a482f;
            
            goto label_4a425b;
        }
        
        var_270 = rbp_1;
        uint64_t var_268_2 = arg4;
        var_358 = arg5;
        uint64_t var_350_1 = r14_1;
        var_248 = &var_270;
        uint64_t (* var_240_2)(int64_t* arg1, int64_t arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        char* var_238_2 = &var_358;
        uint64_t (* var_230_2)(int64_t* arg1, int64_t arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        var_320 = &data_55ed00;
        result_1 = 3;
        int64_t var_300_2 = 0;
        var_310 = &var_248;
        goto label_4a407f;
    }
    
    label_4a425b:
    
    if (uucore::features::fs::are_hardlinks_to_same_file::hed60833ae00362c2(r13, arg4, arg5))
    {
        std::path::Path::components::hd0346d362206f2e9(&var_248, r13, arg4);
        std::path::Path::components::hd0346d362206f2e9(&var_320, arg5, r15);
        
        if (!_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(
            &var_248, &var_320) && !*(rbp + 0x54) && *(rbp + 0x55) == 1)
        {
            result = std::fs::remove_file::h19277b2d7a4f8643(arg5);
            
            if (result)
            {
                label_4a482f:
                *arg1 = -0x7fffffffffffffff;
                arg1[1] = result;
                return result;
            }
        }
    }
    
    char rax_12 = uu_cp::file_or_link_exists::h2275c94decc1c7b4(arg5);
    char rbx_3 = *(rbp + 0x56);
    int64_t var_308;
    int128_t var_2f8;
    
    if (rax_12 && (!(rbx_3 & 1) || (!*(rbp + 0x54) && *(rbp + 0x55) == 1)))
    {
        result = uucore::features::fs::paths_refer_to_same_file::h63765c86a5a0b9e6(r13, arg4, arg5, 
            r15, 1);
        char result_3 = *(rbp + 0x67);
        
        if (result & !result_3)
        {
            if (!result_2)
            {
                result = !*(rbp + 0x65);
                result |= rax;
                
                if (!result)
                {
                    std::path::Path::components::hd0346d362206f2e9(&var_248, r13, arg4);
                    std::path::Path::components::hd0346d362206f2e9(&var_320, arg5, r15);
                    
                    if (!_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(&var_248, &var_320))
                    {
                        result = arg1;
                        *result = -0x7ffffffffffffff4;
                        return result;
                    }
                    
                    result = *(rbp + 0x55) | *(rbp + 0x54);
                    
                    if (result)
                    {
                        *arg1 = -0x7ffffffffffffff4;
                        return result;
                    }
                }
            }
            else if (!rax || !*(rbp + 0x59))
            {
                *arg1 = -0x7ffffffffffffff4;
                return result;
            }
        }
        
        uu_cp::handle_existing_dest::h73cbfdf242938a56(&var_320, r13, arg4, arg5, r15, rbp, arg11, 
            arg10);
        result = var_320;
        
        if (result != -0x7ffffffffffffff4)
        {
            int128_t zmm0_1 = result_1;
            *(arg1 + 0x28) = var_2f8;
            *(arg1 + 0x18) = var_308;
            *(arg1 + 8) = zmm0_1;
            *arg1 = result;
            return result;
        }
        
        rbp = arg7;
        
        if (uucore::features::fs::are_hardlinks_to_same_file::hed60833ae00362c2(r13, arg4, arg5))
        {
            result = result_3;
            
            if (!result)
            {
                result = result_2;
                
                if (!(rax & result))
                {
                    *arg1 = -0x7ffffffffffffff4;
                    return result;
                }
            }
            else if (result == 2)
            {
                *arg1 = -0x7ffffffffffffff4;
                return result;
            }
        }
    }
    
    if (result_2 & rbx_3 && (*(rbp + 0x54) || *(rbp + 0x55) != 1))
    {
        var_248 = 1;
        int64_t* var_240_4 = arg5;
        uint64_t var_238_3 = r15;
        int64_t var_230;
        var_230 = 1;
        var_358 = &var_248;
        int64_t (* var_350_3)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_320 = &data_55ed50;
        result_1 = 2;
        int64_t var_300_4 = 0;
        var_310 = &var_358;
        int64_t var_308_3 = 1;
        result = core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&arg1[1], &var_320);
        *arg1 = -0x7ffffffffffffffd;
        return result;
    }
    
    char var_380;
    var_380 = r15;
    char*** var_348;
    int64_t var_300;
    int128_t var_2e8;
    int128_t var_2d8;
    int128_t var_2c8;
    int128_t var_2b8;
    int128_t var_2a8;
    int128_t var_298;
    uint64_t var_268;
    uint64_t var_260;
    int64_t var_238;
    int128_t var_218;
    int128_t var_208;
    int128_t var_1f8;
    int128_t var_1e8;
    int128_t var_1d8;
    int128_t var_1c8;
    char** r13_3;
    char r15_4;
    
    if (*(rbp + 0x50))
    {
        char rcx_5 = *(rbp + 0x59);
        int64_t* var_378;
        var_378 = rcx_5;
        char rax_18 = rcx_5;
        
        if (!((arg11 ^ 1) | rcx_5))
            rax_18 = *(rbp + 0x58);
        
        uint64_t rbx_4 = r13;
        uucore::features::fs::FileInformation::from_path::hfd069e4f76a9cc58(&var_320, rbx_4, arg4, 
            rax_18);
        var_270 = 1;
        var_268 = rbx_4;
        var_260 = arg4;
        char var_258_1 = 1;
        char** var_198 = &var_270;
        int64_t (* var_190_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_358 = &data_55ec38;
        result_4 = 1;
        int64_t var_338_1 = 0;
        var_348 = &var_198;
        int64_t var_340_1 = 1;
        int128_t var_170;
        core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_170, &var_358);
        
        if (!(var_320 & 1))
        {
            r13_3 = arg10;
            int128_t var_188_1 = result_1;
            core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h92d6353b521410cd(&var_170);
            int64_t var_148_1 = var_308;
            int128_t var_158_1 = var_188_1;
            var_248 = var_188_1;
            var_238 = var_308;
            int64_t var_230_3 = var_300;
            int128_t var_228_1 = var_2f8;
            var_218 = var_2e8;
            var_208 = var_2d8;
            var_1f8 = var_2c8;
            var_1e8 = var_2b8;
            var_1d8 = var_2a8;
            var_1c8 = var_298;
            void* rax_20 =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h13e176d417cda5ca(arg10, 
                &var_248);
            
            if (!rax_20)
            {
                r15_4 = var_378;
                goto label_4a485b;
            }
            
            result = std::fs::hard_link::hc46b68337ed0a177(rax_20 + 0x90, arg5);
            
            if (result)
                goto label_4a482f;
            
            if (*(rbp + 0x60))
                result = uu_cp::print_verbose_output::h224f7f61cc9bdc36(*(rbp + 0x5c), arg2, r13, 
                    arg4, arg5);
            
            *arg1 = -0x7ffffffffffffff4;
            return result;
        }
        
        result = result_1;
        int64_t var_160;
        arg1[3] = var_160;
        *(arg1 + 8) = var_170;
        *arg1 = -0x7ffffffffffffffe;
        arg1[4] = result;
        return result;
    }
    
    r15_4 = *(rbp + 0x59);
    r13_3 = arg10;
    label_4a485b:
    uu_cp::context_for::h4d8c781d36af7105(&var_270);
    
    if (!(r15_4 & 1) && (!arg11 || !*(rbp + 0x58)))
        std::fs::symlink_metadata::h814bc3976f7d40c5(&var_320, r13);
    else
        std::fs::metadata::h87a95e5fd9b91fc7(&var_320, r13);
    
    int64_t* rax_24 = var_320;
    int64_t** result_6 = result_1;
    int64_t** result_5;
    
    if (rax_24 != 2)
    {
        int32_t rbx_7 = var_2e8;
        int32_t var_274;
        int32_t var_19c_1 = var_274;
        int128_t var_284;
        int128_t var_1ac_1 = var_284;
        var_1c8 = var_298;
        var_1d8 = var_2a8;
        var_1e8 = var_2b8;
        var_1f8 = var_2c8;
        var_208 = var_2d8;
        var_218 = var_2e8;
        int128_t var_228_2 = var_300;
        var_218 = *var_2f8[8];
        var_238 = var_310;
        var_248 = rax_24;
        int64_t** result_9 = result_6;
        *var_218[8] = rbx_7;
        uu_cp::calculate_dest_permissions::h5f84cb330fdd911e(&var_320, arg5, var_380, rbx_7, 
            *(rbp + 0x4a), *(rbp + 0x4b), var_268, var_260);
        int64_t rax_25 = var_320;
        int32_t rdx_21 = result_1;
        
        if (rax_25 != -0x7ffffffffffffff4)
        {
            int128_t zmm0_6 = *result_1[4];
            *(arg1 + 0x28) = var_2f8;
            *(arg1 + 0x1c) = *var_308[4];
            *(arg1 + 0xc) = zmm0_6;
            *arg1 = rax_25;
            arg1[1] = rdx_21;
        }
        else
        {
            int32_t rbx_8 = rbx_7 & 0xf000;
            rax_25 = 1;
            char var_364_1 = rax_25;
            
            if (rbx_8 != 0x1000 && rbx_8 != 0x2000 && rbx_8 != 0x6000)
                var_364_1 = 0;
            
            uu_cp::handle_copy_mode::h7a192efd6f504098(&var_320, r13, arg4, arg5, var_380, rbp, 
                var_268, var_260, &var_248, arg8, arg11, rbx_8 == 0x1000, var_364_1);
            int64_t rcx_13 = var_320;
            char rax_27 = result_1;
            
            if (rcx_13 != -0x7ffffffffffffff4)
            {
                int128_t zmm0_7 = *result_1[1];
                *(arg1 + 0x28) = var_2f8;
                *(arg1 + 0x19) = *var_308[1];
                *(arg1 + 9) = zmm0_7;
                *arg1 = rcx_13;
                arg1[1] = rax_27;
            }
            else
            {
                if (*(rbp + 0x60) && !(rax_27 & 1))
                    uu_cp::print_verbose_output::h224f7f61cc9bdc36(*(rbp + 0x5c), arg2, r13, arg4, 
                        arg5);
                
                if (!rax)
                {
                    int64_t rax_28 =
                        std::fs::set_permissions::h0aec1725d40e979b(arg5, var_380, rdx_21);
                    var_320 = rax_28;
                    
                    if (rax_28)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6803c44012521573(&var_320);
                }
                
                void* r9_5 = rbp + 0x48;
                char var_370;
                
                if (!(r15_4 & 1) && (!arg11 || !*(rbp + 0x58)))
                {
                    if (var_364_1)
                    {
                        var_370 = r9_5;
                        std::fs::metadata::h87a95e5fd9b91fc7(&var_320, r13);
                        int32_t rbx_9 = var_320;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_320);
                        r9_5 = var_370;
                        
                        if (rbx_9 != 2)
                            goto label_4a4d5f;
                        
                        goto label_4a4c8f;
                    }
                    
                    label_4a4c8f:
                    uu_cp::copy_attributes::h279b81c598780b21(&var_320, r13, arg4, arg5, var_380, 
                        r9_5);
                    int64_t rax_29 = var_320;
                    
                    if (rax_29 == -0x7ffffffffffffff4)
                        goto label_4a4d5f;
                    
                    int128_t zmm0_8 = result_1;
                    *(arg1 + 0x28) = var_2f8;
                    *(arg1 + 0x18) = var_308;
                    *(arg1 + 8) = zmm0_8;
                    *arg1 = rax_29;
                }
                else
                {
                    var_370 = r9_5;
                    uucore::features::fs::canonicalize::h2a46952db6a00ca6(&var_358, r13, arg4, 0, 
                        1);
                    
                    if (var_358 != -0x8000000000000000)
                    {
                        std::fs::metadata::h87a95e5fd9b91fc7(&var_320, result_4);
                        int32_t rbx_10 = var_320;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_320);
                        int64_t rax_30;
                        
                        if (rbx_10 != 2)
                        {
                            uu_cp::copy_attributes::h279b81c598780b21(&var_320, result_4, var_348, 
                                arg5, var_380, var_370);
                            rax_30 = var_320;
                        }
                        
                        if (rbx_10 == 2 || rax_30 == -0x7ffffffffffffff4)
                        {
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                                &var_358);
                            goto label_4a4d5f;
                        }
                        
                        int128_t zmm0_9 = result_1;
                        *(arg1 + 0x28) = var_2f8;
                        *(arg1 + 0x18) = var_308;
                        *(arg1 + 8) = zmm0_9;
                        *arg1 = rax_30;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                            &var_358);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd1372b83dff59979(&var_358);
                        label_4a4d5f:
                        
                        if (!((~arg11 | r15_4) & 1))
                            r15_4 = *(rbp + 0x58);
                        
                        uucore::features::fs::FileInformation::from_path::hfd069e4f76a9cc58(
                            &var_320, r13, arg4, r15_4 & 1);
                        int64_t** result_7 = result_1;
                        
                        if (var_320 != 1)
                        {
                            void var_b8;
                            memcpy(&var_b8, &var_310, 0x88);
                            int64_t** result_10 = result_7;
                            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                                &var_320, arg5, var_380);
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hd78ac1061f7c6c28(
                                &var_358, r13_3, &result_10, &var_320);
                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hf94fc9edf2322537(&var_358);
                            
                            if (!arg2)
                                *arg1 = -0x7ffffffffffffff4;
                            else
                            {
                                std::fs::metadata::h87a95e5fd9b91fc7(&var_320, r13);
                                
                                if (var_320 != 2)
                                {
                                    indicatif::progress_bar::ProgressBar::inc::h6821cd6efd4a2245(
                                        arg2, *var_2d8[8]);
                                    *arg1 = -0x7ffffffffffffff4;
                                }
                                else
                                {
                                    result_5 = result_1;
                                    *arg1 = -0x7fffffffffffffff;
                                    arg1[1] = result_5;
                                }
                            }
                        }
                        else
                        {
                            *arg1 = -0x7fffffffffffffff;
                            arg1[1] = result_7;
                        }
                    }
                }
            }
        }
    }
    else
    {
        uu_cp::copy_file::_$u7b$$u7b$closure$u7d$$u7d$::h75931459cf981f47(&var_358, r13, arg4, 
            result_6);
        result_5 = var_358;
        int128_t zmm0_5 = result_4;
        int128_t var_158_2 = zmm0_5;
        *(arg1 + 0x10) = zmm0_5;
        *arg1 = -0x7ffffffffffffffd;
        arg1[1] = result_5;
    }
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(&var_270);
}
