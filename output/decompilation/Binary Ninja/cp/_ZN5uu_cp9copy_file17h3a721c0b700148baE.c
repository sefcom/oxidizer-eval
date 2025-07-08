
  int64_t* uu_cp::copy_file::h3a721c0b700148ba(int64_t* arg1, int64_t* arg2, char* arg3, uint64_t arg4, int64_t* arg5, uint64_t arg6, int64_t* arg7, int64_t* arg8, int64_t* arg9, int64_t* arg10, char arg11)

{
    uint64_t r15 = arg6;
    char rax = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4);
    char rax_1 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg5, r15);
    int64_t* rbx = arg7;
    int64_t* result;
    char* var_3b8;
    uint64_t var_390;
    char* var_388;
    int64_t** var_380;
    char var_2b8;
    char* var_2b0;
    int64_t* var_218;
    void** const rax_8;
    
    if (!rax_1)
    {
        label_5075a0:
        result = arg1;
        int64_t rax_14;
        
        if (!uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(arg3, arg4, arg5))
        {
            label_50760f:
            bool rax_15 = uu_cp::file_or_link_exists::h0326283b1ad33442(arg5);
            bool rbx_1 = *(rbx + 0x3e);
            char var_3d0;
            int64_t var_378;
            int128_t var_368;
            int64_t var_358;
            
            if (!rax_15)
            {
                rax_15 = rbx_1;
                label_5076aa:
                
                if (!(rax & rax_15) || (!*(arg7 + 0x3c) && *(arg7 + 0x3d) == 1))
                {
                    if (arg7[9])
                        uu_cp::print_verbose_output::h1215961a97776bc3(*(arg7 + 0x44), arg2, arg3, 
                            arg4, arg5);
                    
                    char* var_3b0;
                    char*** var_3a8;
                    int128_t var_348;
                    int128_t var_2d8;
                    int64_t var_2c8;
                    char*** var_2a8;
                    int64_t var_208;
                    int128_t var_1f8;
                    int96_t var_1e8;
                    char rbx_3;
                    char r15_4;
                    
                    if (!arg7[7])
                    {
                        rbx_3 = arg7[8];
                        r15_4 = *(arg7 + 0x41);
                        label_50784d:
                        char var_3c8;
                        var_3c8 = arg5;
                        uu_cp::context_for::h98549e35fded8509(&var_2d8);
                        int64_t var_2d0;
                        var_3d0 = var_2d0;
                        char rcx_10 = rbx_3;
                        
                        if (!arg11)
                            rcx_10 = r15_4;
                        
                        if (r15_4)
                            rcx_10 = r15_4;
                        
                        if (!rcx_10)
                            std::fs::symlink_metadata::h8589e79b0a107dee(&var_390, arg3);
                        else
                            std::fs::metadata::h003d8cdbffde7c56(&var_390, arg3);
                        
                        int64_t* r15_5 = var_390;
                        char* rbx_4 = var_388;
                        char* rax_29;
                        
                        if (r15_5 != 2)
                        {
                            memcpy(&var_2b8, &var_380, 0xa0);
                            memcpy(&var_1f8, &var_2a8, 0x90);
                            var_208 = var_380;
                            var_218 = r15_5;
                            char* var_210_5 = rbx_4;
                            uu_cp::calculate_dest_permissions::he28553ee8e44ce96(&var_390, var_3c8, 
                                r15, *var_1e8[8], *(arg7 + 0x32), *(arg7 + 0x33), var_3d0, var_2c8);
                            uint64_t rax_30 = var_390;
                            int32_t r15_6 = var_388;
                            
                            if (rax_30 != 0xd)
                            {
                                *(result + 0x3c) = *var_358[4];
                                int128_t zmm0_5 = *var_388[4];
                                *(result + 0x2c) = var_368;
                                *(result + 0x1c) = *var_378[4];
                                *(result + 0xc) = zmm0_5;
                                *result = rax_30;
                                result[1] = r15_6;
                            }
                            else
                            {
                                uu_cp::handle_copy_mode::h448f778e1ab38150(&var_390, arg3, arg4, 
                                    var_3c8, r15, arg7, var_3d0, var_2c8, &var_218, arg8, arg11);
                                uint64_t rax_32 = var_390;
                                
                                if (rax_32 != 0xd)
                                {
                                    label_507e91:
                                    result[7] = var_358;
                                    int128_t zmm0_6 = var_388;
                                    *(result + 0x28) = var_368;
                                    *(result + 0x18) = var_378;
                                    *(result + 8) = zmm0_6;
                                    *result = rax_32;
                                }
                                else
                                {
                                    if (!rax_1)
                                    {
                                        uint64_t rax_33 =
                                            std::fs::set_permissions::hb44ce266ed57ae7b(var_3c8, 
                                            r15, r15_6);
                                        var_390 = rax_33;
                                        
                                        if (rax_33)
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb146834ab15375cc(&var_390);
                                    }
                                    
                                    if (!rcx_10)
                                    {
                                        uu_cp::copy_attributes::h0ca124c6c7245f78(&var_390, arg3, 
                                            arg4, var_3c8, r15, &arg7[6]);
                                        rax_32 = var_390;
                                        
                                        if (rax_32 == 0xd)
                                            goto label_507f2a;
                                        
                                        goto label_507e91;
                                    }
                                    
                                    uucore::features::fs::canonicalize::hb17a5541a57984e7(&var_3b8, 
                                        arg3, arg4, 0, 1);
                                    
                                    if (var_3b8 != -0x8000000000000000)
                                    {
                                        var_2a8 = var_3a8;
                                        var_2b8 = var_3b8;
                                        uu_cp::copy_attributes::h0ca124c6c7245f78(&var_390, 
                                            var_2b0, var_3a8, var_3c8, r15, &arg7[6]);
                                        uint64_t rax_42 = var_390;
                                        
                                        if (rax_42 == 0xd)
                                        {
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                                            
                                            if (var_3b8 == -0x8000000000000000)
                                                goto label_507c93;
                                            
                                            goto label_507f2a;
                                        }
                                        
                                        result[7] = var_358;
                                        int128_t zmm0_9 = var_388;
                                        *(result + 0x28) = var_368;
                                        *(result + 0x18) = var_378;
                                        *(result + 8) = zmm0_9;
                                        *result = rax_42;
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                                        
                                        if (var_3b8 == -0x8000000000000000)
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_3b8);
                                    }
                                    else
                                    {
                                        label_507c93:
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_3b8);
                                        label_507f2a:
                                        int32_t rcx_24;
                                        rcx_24 = rcx_10;
                                        uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&var_390, arg3, arg4, rcx_24);
                                        char* rbx_7 = var_388;
                                        
                                        if (!var_390)
                                        {
                                            void var_b8;
                                            memcpy(&var_b8, &var_380, 0x88);
                                            char* var_c0 = rbx_7;
                                            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_390, var_3c8, r15);
                                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6dd09ea9bc601e27(&var_2b8, arg10, &var_c0, &var_390);
                                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::he488659846a394d7(&var_2b8);
                                            
                                            if (!*arg2)
                                                *result = 0xd;
                                            else
                                            {
                                                std::fs::metadata::h003d8cdbffde7c56(&var_390, 
                                                    arg3);
                                                
                                                if (var_390 != 2)
                                                {
                                                    indicatif::progress_bar::ProgressBar::inc::he12f7743cfc9ae04(arg2, *var_348[8]);
                                                    *result = 0xd;
                                                }
                                                else
                                                {
                                                    rax_29 = var_388;
                                                    *result = 2;
                                                    result[1] = rax_29;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            *result = 2;
                                            result[1] = rbx_7;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            uu_cp::copy_file::_$u7b$$u7b$closure$u7d$$u7d$::h1d4007727df2d8d4(
                                &var_3b8, arg3, arg4, rbx_4);
                            rax_29 = var_3b8;
                            *(result + 0x10) = var_3b0;
                            *result = 4;
                            result[1] = rax_29;
                        }
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(
                            &var_2d8);
                    }
                    else
                    {
                        rbx_3 = arg7[8];
                        r15_4 = *(arg7 + 0x41);
                        bool rax_19 = r15_4;
                        bool rcx_6 = rbx_3;
                        
                        if (!arg11)
                            rcx_6 = rax_19;
                        
                        if (r15_4)
                            rcx_6 = rax_19;
                        
                        char*** r13_1 = arg4;
                        uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(
                            &var_390, arg3, r13_1, rcx_6);
                        var_3b8 = 1;
                        var_3b0 = arg3;
                        var_3a8 = r13_1;
                        char var_3a0_1 = 1;
                        char** var_148 = &var_3b8;
                        int64_t (* var_140_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_2b8 = &data_5b5f08;
                        var_2b0 = 1;
                        int64_t var_298_1 = 0;
                        var_2a8 = &var_148;
                        int64_t var_2a0_1 = 1;
                        int128_t var_160;
                        core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_160, 
                            &var_2b8);
                        char*** var_150;
                        var_2a8 = var_150;
                        var_2b8 = var_160;
                        
                        if (!var_390)
                        {
                            var_3d0 = result;
                            var_2c8 = var_378;
                            var_2d8 = var_388;
                            int96_t var_128_1 = var_358;
                            core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1ef8f78603d21391(&var_2b8);
                            var_218 = var_2d8;
                            var_208 = var_2c8;
                            int64_t var_370;
                            int64_t var_200_3 = var_370;
                            var_1f8 = var_368;
                            var_1e8 = var_128_1;
                            int128_t var_1d8_1 = var_348;
                            int128_t var_338;
                            int128_t var_1c8_1 = var_338;
                            int128_t var_328;
                            int128_t var_1b8_1 = var_328;
                            int128_t var_318;
                            int128_t var_1a8_1 = var_318;
                            int128_t var_308;
                            int128_t var_198_1 = var_308;
                            void* rax_27 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hef26ad6068154428(arg10, &var_218);
                            
                            if (!rax_27)
                            {
                                result = var_3d0;
                                goto label_50784d;
                            }
                            
                            rax_14 = std::fs::hard_link::h6f8316d677157df8(rax_27 + 0x90, arg5);
                            
                            if (!rax_14)
                            {
                                result = var_3d0;
                                *result = 0xd;
                            }
                            else
                            {
                                result = var_3d0;
                                *result = 2;
                                result[1] = rax_14;
                            }
                        }
                        else
                        {
                            char* rax_21 = var_388;
                            result[3] = var_150;
                            *(result + 8) = var_160;
                            *result = 3;
                            result[4] = rax_21;
                        }
                    }
                }
                else
                {
                    var_218 = 1;
                    int64_t* var_210_4 = arg5;
                    uint64_t var_208_3 = r15;
                    int64_t var_200;
                    var_200 = 1;
                    var_2b8 = &var_218;
                    int64_t (* var_2b0_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    rax_8 = &data_5b6038;
                    label_5078fe:
                    var_390 = rax_8;
                    var_388 = 2;
                    int64_t var_370_3 = 0;
                    var_380 = &var_2b8;
                    int64_t var_378_2 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&result[1], 
                        &var_390);
                    *result = 4;
                }
            }
            else
            {
                if (rbx_1)
                    rax_15 = true;
                
                if (rbx_1 && (*(arg7 + 0x3c) || *(arg7 + 0x3d) != 1))
                    goto label_5076aa;
                
                char rax_16 = uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(
                    arg3, arg4, arg5, r15, 1);
                char r15_3 = *(arg7 + 0x4e);
                
                if (!rax_16 || r15_3)
                {
                    label_507cee:
                    uu_cp::handle_existing_dest::h1a418223b4b32809(&var_390, arg3, arg4, arg5, r15, 
                        arg7, arg11, arg10);
                    uint64_t rax_36 = var_390;
                    
                    if (rax_36 != 0xd)
                    {
                        result[7] = var_358;
                        int128_t zmm0_8 = var_388;
                        *(result + 0x28) = var_368;
                        *(result + 0x18) = var_378;
                        *(result + 8) = zmm0_8;
                        *result = rax_36;
                    }
                    else
                    {
                        if (!uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(
                            arg3, arg4, arg5))
                        {
                            rax_15 = rbx_1;
                            goto label_5076aa;
                        }
                        
                        if (r15_3 != 2 || !*(arg7 + 0x4c))
                        {
                            if (rax_1 & rax)
                            {
                                rax_15 = rbx_1;
                                goto label_5076aa;
                            }
                            
                            rax_15 = rbx_1;
                            
                            if (r15_3)
                                goto label_5076aa;
                            
                            *result = 0xd;
                        }
                        else
                            *result = 0xd;
                    }
                }
                else if (!rax)
                {
                    int64_t* rax_34;
                    rax_34 = !*(arg7 + 0x4c);
                    rax_34 |= rax_1;
                    
                    if (rax_34)
                        goto label_507cee;
                    
                    var_3d0 = result;
                    std::path::Path::components::h4f3217acf0fc8653(&var_218, arg3, arg4);
                    std::path::Path::components::h4f3217acf0fc8653(&var_390, arg5, r15);
                    
                    if (!_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&var_218, &var_390))
                    {
                        result = var_3d0;
                        *result = 0xd;
                    }
                    else
                    {
                        result = var_3d0;
                        
                        if (!(*(arg7 + 0x3c) | *(arg7 + 0x3d)))
                            goto label_507cee;
                        
                        *result = 0xd;
                    }
                }
                else
                {
                    if (rax_1 && *(arg7 + 0x41))
                        goto label_507cee;
                    
                    *result = 0xd;
                }
            }
        }
        else
        {
            std::path::Path::components::h4f3217acf0fc8653(&var_218, arg3, arg4);
            std::path::Path::components::h4f3217acf0fc8653(&var_390, arg5, r15);
            rbx = arg7;
            
            if (_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&var_218, &var_390) || *(rbx + 0x3c) || *(rbx + 0x3d) != 1)
                goto label_50760f;
            
            rax_14 = std::fs::remove_file::h38159f05e7b4dc34(arg5);
            
            if (!rax_14)
                goto label_50760f;
            
            *result = 2;
            result[1] = rax_14;
        }
    }
    else
    {
        uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&var_390, arg5, r15, 0);
        
        if (!var_390)
        {
            memcpy(&var_218, &var_388, 0x90);
            result = arg1;
            
            if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd8db7bc2a0d0ef09(arg8, 
                    &var_218))
                goto label_5072dd;
            
            var_3b8 = arg3;
            uint64_t var_3b0_2 = arg4;
            var_2b8 = arg5;
            uint64_t var_2b0_2 = r15;
            var_218 = &var_3b8;
            int64_t (* var_210_2)(int64_t* arg1, void* arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            char* var_208_2 = &var_2b8;
            int64_t (* var_200_2)(int64_t* arg1, void* arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            var_390 = &data_5b5fe8;
            var_388 = 3;
            int64_t var_370_2 = 0;
            var_380 = &var_218;
            label_50741b:
            int64_t var_378_1 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&result[1], &var_390);
            *result = 4;
        }
        else
        {
            var_2b0 = var_388;
            var_2b8 = 1;
            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h9c31107a5315a077(&var_2b8);
            result = arg1;
            label_5072dd:
            void* rax_3 =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hf39b9bbbffc687fc(arg9, 
                arg5, r15);
            
            if (rax_3)
            {
                var_3b8 = arg3;
                uint64_t var_3b0_1 = arg4;
                var_2b8 = arg5;
                uint64_t var_2b0_1 = r15;
                var_218 = &var_3b8;
                int64_t (* var_210_1)(int64_t* arg1, void* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                char* var_208_1 = &var_2b8;
                int64_t (* var_200_1)(int64_t* arg1, void* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                var_390 = &data_5b5fe8;
                var_388 = 3;
                int64_t var_370_1 = 0;
                var_380 = &var_218;
                goto label_50741b;
            }
            
            rbx = arg7;
            
            if (!*(rbx + 0x41))
                rax_3 = rbx[8];
            
            if (*(rbx + 0x41) || arg11 & rax_3 || rax != 1)
            {
                std::fs::metadata::h003d8cdbffde7c56(&var_390, arg5);
                uint64_t var_3d8_1 = r15;
                int32_t r15_1 = var_390;
                rbx = arg7;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_390);
                r15 = var_3d8_1;
                
                if (r15_1 != 2 || (!*(rbx + 0x3c) && *(rbx + 0x3d) == 1))
                    goto label_50754d;
                
                if (uucore::features::fs::is_symlink_loop::h6176a52fb38b92f8(arg5, r15))
                    goto label_50754d;
                
                std::env::var_os::h1986be097247ce4a(&var_390, "POSIXLY_CORRECTNo such file or d…");
                uint64_t r15_2 = var_390;
                rbx = arg7;
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h221d2028a300d640(&var_390);
                r15 = var_3d8_1;
                
                if (r15_2 != -0x8000000000000000)
                    goto label_50754d;
                
                var_218 = arg5;
                uint64_t var_210_3 = r15;
                var_2b8 = &var_218;
                int64_t (* var_2b0_3)(int64_t* arg1, void* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                rax_8 = &data_5b6018;
                goto label_5078fe;
            }
            
            label_50754d:
            
            if (!uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(arg3, arg4, 
                    arg5, r15, 1) || *(rbx + 0x3c) || *(rbx + 0x3d) != 1 || *(rbx + 0x4c))
                goto label_5075a0;
            
            int64_t rax_11 = std::fs::remove_file::h38159f05e7b4dc34(arg5);
            
            if (!rax_11)
                goto label_5075a0;
            
            result = arg1;
            *arg1 = 2;
            arg1[1] = rax_11;
        }
    }
    return result;
}
