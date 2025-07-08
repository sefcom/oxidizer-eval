
  int64_t* uu_cp::copydir::copy_directory::h28c1a7346111a6c9(int64_t* arg1, int64_t* arg2, char* arg3, uint64_t arg4, int64_t* arg5, uint64_t arg6, int64_t* arg7, int64_t* arg8, int64_t* arg9, int64_t* arg10, char arg11)

{
    int64_t* r12 = arg7;
    char r14 = *(r12 + 0x41);
    
    if (r14 || (arg11 && r12[8]))
    {
        label_50e791:
        int64_t* var_288;
        void** const var_218;
        int64_t** i_1;
        
        if (!*(r12 + 0x46))
        {
            var_288 = 1;
            char* var_280_1 = arg3;
            uint64_t var_278_1 = arg4;
            char var_270_1 = 1;
            i_1 = &var_288;
            int64_t (* var_100_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_218 = &data_5b6330;
            int64_t var_210_1 = 1;
            int64_t var_1f8_1 = 0;
            int64_t*** var_208_1 = &i_1;
            int64_t var_200_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&arg1[1], &var_218);
            *arg1 = 4;
        }
        else
        {
            uu_cp::copydir::path_has_prefix::hcf43da5c11f3d99b(&var_218, arg5, arg6, arg3, arg4);
            void* var_210;
            
            if (var_218)
            {
                *arg1 = 2;
                arg1[1] = var_210;
            }
            else
            {
                int128_t var_2d8;
                uint64_t var_2c8;
                void* const var_2b8;
                int128_t var_2b0;
                int64_t (* var_280)(int64_t* arg1, void* arg2);
                int64_t* var_148;
                
                if (!*var_218[1])
                {
                    char r14_2 = *(r12 + 0x44);
                    char* rax_6;
                    int64_t rdx_4;
                    
                    if (r14_2)
                        rax_6 = std::path::Path::parent::h65c9a340a6266f2d(arg3, arg4);
                    int128_t* rdi_31;
                    int128_t* var_278;
                    char var_270;
                    int128_t var_238;
                    int64_t** var_208;
                    int64_t var_1f8;
                    int128_t var_1f0;
                    int64_t var_1e0;
                    int128_t var_168;
                    uint64_t var_158;
                    int64_t var_f8;
                    
                    if (!r14_2 || !rax_6)
                    {
                        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(
                            &var_168, arg5, arg6);
                        label_50ebb3:
                        char rax_9 = r12[7];
                        void* var_160;
                        uu_cp::copydir::Context::new::h4cc136cbd57b6fd2(&var_218, arg3, arg4, 
                            var_160, var_158);
                        
                        if (var_218 != -0x8000000000000000)
                        {
                            int128_t var_1d8;
                            int128_t var_c8_1 = var_1d8;
                            int128_t var_d8_1 = var_1f0;
                            int128_t var_e8_1 = var_1f8;
                            var_f8 = var_208;
                            i_1 = var_218;
                            walkdir::WalkDir::new::h4dd3b028fcf7969e(&var_288, arg3);
                            char* var_220_1 = &r12[6];
                            char var_245_1 = *(r12 + 0x43);
                            int64_t var_250;
                            int64_t var_188_1 = var_250;
                            int128_t var_260;
                            int128_t var_198_1 = var_260;
                            int128_t var_1a8_1 = var_270;
                            int32_t var_247;
                            int32_t var_17f_1 = var_247;
                            int32_t var_244;
                            var_17f_1 = var_244;
                            int128_t var_1c0_1 = var_288;
                            int128_t* var_1b0_1 = var_278;
                            var_218 = nullptr;
                            int64_t var_208_3 = 0;
                            int64_t var_200_4 = 8;
                            var_1f8 = {0};
                            *var_1f0[8] = 8;
                            var_1e0 = {0};
                            *var_1d8[8] = 8;
                            int64_t var_1c8_1 = 0;
                            char var_180_1 = r14;
                            int128_t var_178_1 = {0};
                            char rax_20 = *(r12 + 0x42);
                            char var_2bc_1;
                            var_2bc_1 = rax_9;
                            
                            while (true)
                            {
                                _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&var_148, &var_218);
                                int64_t* rax_22 = var_148;
                                int128_t var_298;
                                int64_t var_140;
                                int64_t var_130;
                                int128_t var_120;
                                
                                if (rax_22 == 2)
                                {
                                    int128_t zmm1_3 = var_130;
                                    var_298 = var_120;
                                    var_2b8 = var_140;
                                    uu_cp::copydir::Entry::new::heaaef3e8d8dce243(&var_288, &i_1, 
                                        zmm1_3, *zmm1_3[8], rax_20);
                                    int64_t* rax_24 = var_288;
                                    int64_t* rax_25;
                                    
                                    if (rax_24 == -0x8000000000000000)
                                        rax_25 = 7;
                                    else
                                    {
                                        int64_t var_240;
                                        int64_t var_38_1 = var_240;
                                        int128_t var_48_1 = var_250;
                                        int128_t var_58_1 = var_260;
                                        int128_t var_68_1 = var_270;
                                        int128_t var_78_1 = var_280;
                                        int64_t* var_80 = rax_24;
                                        uu_cp::copydir::copy_direntry::he742c4f146ad7097(&var_288, 
                                            arg2, &var_80, arg7, arg8, var_2bc_1, arg9, arg10);
                                        rax_25 = var_288;
                                        
                                        if (rax_25 != 0xd)
                                        {
                                            arg1[7] = var_250;
                                            *(arg1 + 0x28) = var_260;
                                            *(arg1 + 0x18) = var_270;
                                            *(arg1 + 8) = var_280;
                                        }
                                        else
                                        {
                                            core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h9d34ac2f24bfd23e(&var_2b8);
                                            continue;
                                        }
                                    }
                                    
                                    *arg1 = rax_25;
                                    core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h9d34ac2f24bfd23e(&var_2b8);
                                    core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h27f2d4fc927cd168(&var_218);
                                }
                                else if (rax_22 == 3)
                                {
                                    core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h27f2d4fc927cd168(&var_218);
                                    
                                    if (!r14_2)
                                    {
                                        uu_cp::copy_attributes::h0ca124c6c7245f78(&var_218, arg3, 
                                            arg4, var_160, var_158, var_220_1);
                                        void** const rax_30 = var_218;
                                        
                                        if (rax_30 == 0xd)
                                            goto label_50f380;
                                        
                                        arg1[7] = var_1e0;
                                        *(arg1 + 0x28) = var_1f0;
                                        *(arg1 + 0x18) = var_200_4;
                                        *(arg1 + 8) = var_210;
                                        *arg1 = rax_30;
                                    }
                                    else
                                    {
                                        int64_t rax_26;
                                        int64_t rdx_15;
                                        rax_26 = std::path::Path::file_name::h79ecbb7850a9c7f3(
                                            arg3, arg4);
                                        
                                        if (!rax_26)
                                        {
                                            core::option::unwrap_failed::h0e11329e76906eaa();
                                            /* no return */
                                        }
                                        
                                        std::path::Path::join::h58957b2d6fcd4dce(&var_238, var_160, 
                                            var_158, rax_26);
                                        int64_t var_228;
                                        uu_cp::copy_attributes::h0ca124c6c7245f78(&var_218, arg3, 
                                            arg4, *var_238[8], var_228, var_220_1);
                                        void** const rax_27 = var_218;
                                        
                                        if (rax_27 != 0xd)
                                        {
                                            arg1[7] = var_1e0;
                                            *(arg1 + 0x28) = var_1f0;
                                            *(arg1 + 0x18) = var_200_4;
                                            *(arg1 + 8) = var_210;
                                            *arg1 = rax_27;
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_238);
                                        }
                                        else
                                        {
                                            uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&var_218, 
                                                arg3, arg4, *var_238[8]);
                                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&var_148, &var_218);
                                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&var_288, &var_148);
                                            int64_t* rsi_28 = var_288;
                                            
                                            if (!rsi_28)
                                            {
                                                label_50f36e:
                                                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_148);
                                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_238);
                                                label_50f380:
                                                *arg1 = 0xd;
                                                core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h0379bb3a1fe34402(&i_1);
                                                break;
                                            }
                                            
                                            while (true)
                                            {
                                                uucore::features::fs::canonicalize::hb17a5541a57984e7(&var_2d8, rsi_28, var_280, 0, 1);
                                                
                                                if (var_2d8 == -0x8000000000000000)
                                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_2d8);
                                                else
                                                {
                                                    *var_2b0[8] = var_2c8;
                                                    var_2b8 = var_2d8;
                                                    uu_cp::copy_attributes::h0ca124c6c7245f78(
                                                        &var_218, var_2b0, var_2c8, var_278, 
                                                        var_270, var_220_1);
                                                    void** const rax_28 = var_218;
                                                    
                                                    if (rax_28 != 0xd)
                                                    {
                                                        arg1[7] = var_1e0;
                                                        *(arg1 + 0x28) = var_1f0;
                                                        *(arg1 + 0x18) = var_200_4;
                                                        *(arg1 + 8) = var_210;
                                                        *arg1 = rax_28;
                                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                                                        
                                                        if (var_2d8 == -0x8000000000000000)
                                                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_2d8);
                                                        
                                                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_148);
                                                        break;
                                                    }
                                                    
                                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                                                    
                                                    if (var_2d8 == -0x8000000000000000)
                                                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_2d8);
                                                }
                                                
                                                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&var_288, &var_148);
                                                rsi_28 = var_288;
                                                
                                                if (!rsi_28)
                                                    goto label_50f36e;
                                            }
                                            
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_238);
                                        }
                                    }
                                }
                                else
                                {
                                    var_288 = rax_22;
                                    var_260 = var_120;
                                    var_270 = var_130;
                                    var_280 = var_140;
                                    int64_t var_110;
                                    var_250 = var_110;
                                    int64_t rax_23;
                                    int64_t rdx_12;
                                    rax_23 = uucore::util_name::h60d842bf27b05e82();
                                    var_2d8 = rax_23;
                                    *var_2d8[8] = rdx_12;
                                    var_238 = &var_2d8;
                                    *var_238[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                                    var_2b8 = &data_5b63a0;
                                    var_2b0 = 2;
                                    var_298 = 0;
                                    *var_2b0[8] = &var_238;
                                    int64_t var_2a0_1 = 1;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2b8);
                                    var_2d8 = &var_288;
                                    *var_2d8[8] = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h133db1da499347d6;
                                    var_2b8 = &data_5b62c0;
                                    var_2b0 = 2;
                                    var_298 = 0;
                                    *var_2b0[8] = &var_2d8;
                                    int64_t var_2a0_2 = 1;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2b8);
                                    core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::he082ec0f4c9f2f1f(&var_288);
                                    continue;
                                }
                                core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h0379bb3a1fe34402(&i_1);
                                break;
                            }
                        }
                        else
                        {
                            var_2b8 = var_210;
                            var_148 = &var_2b8;
                            int64_t (* var_140_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            var_288 = &data_5b6390;
                            int64_t var_280_2 = 1;
                            int64_t var_268_1 = 0;
                            int64_t** var_278_2 = &var_148;
                            var_270 = 1;
                            int128_t var_98;
                            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_98, 
                                &var_288);
                            int64_t var_88;
                            arg1[3] = var_88;
                            *(arg1 + 8) = var_98;
                            *arg1 = 4;
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199(var_2b8);
                        }
                        
                        rdi_31 = &var_168;
                    }
                    else
                    {
                        std::path::Path::join::hb28666e9f3e91503(&var_2d8, arg5, arg6, rax_6);
                        uu_cp::copydir::build_dir::h8f7105fdecd19cc9(&var_218, r12[6], 
                            *(r12 + 0x32), &var_2d8);
                        void** const rax_7 = var_218;
                        
                        if (rax_7 == 0xd)
                        {
                            if (r12[9])
                            {
                                std::path::Path::join::hb28666e9f3e91503(&var_2b8, arg5, arg6, 
                                    arg3);
                                uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&var_218, arg3, arg4, 
                                    var_2b0);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&var_148, &var_218);
                                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&i_1, &var_148);
                                
                                for (int64_t** i = i_1; i; i = i_1)
                                {
                                    int64_t** i_2 = i;
                                    int64_t var_100;
                                    int64_t var_a0_1 = var_100;
                                    var_238 = var_f8;
                                    var_288 = &i_2;
                                    var_280 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                                    var_278 = &var_238;
                                    var_270 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                                    var_218 = &data_5b6360;
                                    var_210 = 3;
                                    var_1f8 = 0;
                                    var_208 = &var_288;
                                    int64_t var_200_3 = 2;
                                    std::io::stdio::_print::he918bceb0c89db46(&var_218);
                                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&i_1, &var_148);
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_148);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                            }
                            
                            var_158 = var_2c8;
                            var_168 = var_2d8;
                            goto label_50ebb3;
                        }
                        
                        arg1[7] = var_1e0;
                        *(arg1 + 0x28) = var_1f0;
                        int64_t var_200;
                        *(arg1 + 0x18) = var_200;
                        *(arg1 + 8) = var_210;
                        *arg1 = rax_7;
                        rdi_31 = &var_2d8;
                    }
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(rdi_31);
                }
                else
                {
                    i_1 = 1;
                    char* var_100_2 = arg3;
                    uint64_t var_f8_1 = arg4;
                    char var_f0_1 = 1;
                    int64_t rax_4;
                    int64_t rdx_2;
                    rax_4 = std::path::Path::file_name::h79ecbb7850a9c7f3(arg3, arg4);
                    
                    if (!rax_4)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    std::path::Path::join::h58957b2d6fcd4dce(&var_2b8, arg5, arg6, rax_4);
                    var_288 = 1;
                    var_280 = var_2b0;
                    char var_270_2 = 1;
                    var_148 = &i_1;
                    int64_t (* var_140_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    int64_t* var_138_1 = &var_288;
                    int64_t (* var_130_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_218 = &data_5b6340;
                    int64_t var_210_2 = 2;
                    int64_t var_1f8_2 = 0;
                    int64_t** var_208_2 = &var_148;
                    int64_t var_200_2 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_2d8, 
                        &var_218);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                    arg1[3] = var_2c8;
                    *(arg1 + 8) = var_2d8;
                    *arg1 = 4;
                }
            }
        }
    }
    else
    {
        r12 = arg7;
        
        if (!std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4))
            goto label_50e791;
        
        uu_cp::copy_file::h3a721c0b700148ba(arg1, arg2, arg3, arg4, arg5, arg6, r12, arg8, arg9, 
            arg10, arg11);
    }
    
    return arg1;
}
