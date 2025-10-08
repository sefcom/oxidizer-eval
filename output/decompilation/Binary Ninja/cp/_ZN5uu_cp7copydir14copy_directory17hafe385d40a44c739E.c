
  int128_t* uu_cp::copydir::copy_directory::hafe385d40a44c739(void** arg1, int64_t* arg2, char* arg3, uint64_t arg4, int64_t* arg5, uint64_t arg6, void* arg7, char** arg8, int64_t* arg9, char** arg10)

{
    char r13 = *(arg7 + 0x59);
    
    if (!r13 && !*(arg7 + 0x58) && std::path::Path::is_symlink::h004cfac91d04dbc0(arg3, arg4))
        return uu_cp::copy_file::h2d5f479453081e34(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, 
            arg9, arg10, 1);
    
    int128_t* result;
    void* i_4;
    int128_t** i_1;
    void* i_10;
    
    if (!*(arg7 + 0x5e))
    {
        i_4 = 1;
        char* var_380_1 = arg3;
        uint64_t var_378_1 = arg4;
        char var_370_1 = 1;
        i_1 = &i_4;
        int64_t (* var_320_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        i_10 = &data_55e690;
        int64_t var_1e0 = 1;
        int64_t var_1c8_1 = 0;
        int128_t*** var_1d8_1 = &i_1;
        int64_t var_1d0_1 = 1;
        int64_t* rbx_1 = arg1;
        result = core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&rbx_1[1], &i_10);
        *rbx_1 = -0x7ffffffffffffffd;
    }
    else
    {
        uu_cp::copydir::path_has_prefix::h6e510270f6f80f62(&i_10, arg5, arg6, arg3, arg4);
        int128_t* result_1;
        
        if (i_10 != 1)
        {
            int64_t** var_380;
            int128_t* result_3;
            int128_t var_218;
            int128_t*** var_138;
            
            if (!(*i_10[1] & 1))
            {
                char rax_4 = *(arg7 + 0x5c);
                char* rax_5;
                int64_t rdx_5;
                
                if (rax_4)
                    rax_5 = std::path::Path::parent::hef287f60afa56900(arg3, arg4);
                int64_t* var_378;
                char var_370;
                int64_t** var_320;
                int128_t* var_318;
                int128_t var_2d8;
                uint64_t var_2c8;
                int128_t var_288;
                uint64_t var_278;
                int128_t** i_2;
                int64_t var_258;
                void** var_1d8;
                int64_t var_1c8;
                int128_t var_1c0;
                
                if (!rax_4 || !rax_5)
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                        &var_288, arg5, arg6);
                else
                {
                    std::path::Path::join::h10fbe6df042abede(&var_2d8, arg5, arg6, rax_5);
                    int64_t var_3d8;
                    uu_cp::copydir::build_dir::hcf48ec2566a6908d(&i_10, &var_2d8, 1, 
                        *(arg7 + 0x48), *(arg7 + 0x4a), 0, var_3d8);
                    void* i_12 = i_10;
                    
                    if (i_12 != -0x7ffffffffffffff4)
                    {
                        *(arg1 + 0x28) = var_1c0;
                        int64_t var_1d0;
                        *(arg1 + 0x18) = var_1d0;
                        *(arg1 + 8) = result_1;
                        *arg1 = i_12;
                        return 
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                            &var_2d8);
                    }
                    
                    if (*(arg7 + 0x60))
                    {
                        std::path::Path::join::h10fbe6df042abede(&result_3, arg5, arg6, arg3);
                        int128_t* var_398_1 = &var_2d8;
                        uu_cp::aligned_ancestors::h2e8a6c5e1cc13323(&i_10, arg3, arg4, var_218);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h22eacf00db38bb5e(&var_138, &i_10);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&i_1, &var_138);
                        
                        for (int128_t** i = i_1; i; i = i_1)
                        {
                            i_2 = i;
                            int64_t** var_268_1 = var_320;
                            var_258 = var_318;
                            i_4 = &i_2;
                            var_380 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                            var_378 = &var_258;
                            var_370 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                            i_10 = &data_55e6c0;
                            result_1 = 3;
                            var_1c8 = 0;
                            var_1d8 = &i_4;
                            int64_t var_1d0_3 = 2;
                            std::io::stdio::_print::h5e446ff973c02de6(&i_10);
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&i_1, &var_138);
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0259dd8f81e67d9c(&var_138);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                            &result_3);
                    }
                    
                    var_278 = var_2c8;
                    var_288 = var_2d8;
                }
                
                char rbx_2 = *(arg7 + 0x50);
                int64_t var_280;
                uu_cp::copydir::Context::new::h1971362967e4b6cd(&i_10, arg3, arg4, var_280, 
                    var_278);
                
                if (i_10 != -0x8000000000000000)
                {
                    int128_t var_1a8;
                    int128_t var_f8_1 = var_1a8;
                    int128_t var_108_1 = var_1c0;
                    int128_t var_118_1 = var_1c8;
                    int64_t var_128;
                    var_128 = var_1d8;
                    var_138 = i_10;
                    var_258 = -0x8000000000000000;
                    int32_t var_3ac_1 = 1;
                    walkdir::WalkDir::new::had0dfc259ecbd7b1(&i_4, arg3);
                    char var_345_1 = *(arg7 + 0x5b);
                    int64_t* var_350;
                    int64_t* var_158_1 = var_350;
                    int128_t var_360;
                    int128_t var_168_1 = var_360;
                    int128_t var_178_1 = var_370;
                    int32_t var_347;
                    int32_t var_14f_1 = var_347;
                    int32_t var_344;
                    var_14f_1 = var_344;
                    int128_t var_190_1 = i_4;
                    int64_t* var_180_1 = var_378;
                    i_10 = nullptr;
                    int64_t var_1d8_3 = 0;
                    int64_t var_1d0_4 = 8;
                    var_1c8 = {0};
                    *var_1c0[8] = 8;
                    int128_t var_1b0_1 = {0};
                    *var_1a8[8] = 8;
                    int64_t var_198_1 = 0;
                    char var_150_1 = r13;
                    int128_t var_148_1 = {0};
                    char rax_18 = *(arg7 + 0x5a);
                    void* var_338_1 = -0x800000000000000c;
                    
                    while (true)
                    {
                        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca085ed089cd688a(&result_3, &i_10);
                        int128_t* result_4 = result_3;
                        char rcx_35;
                        int64_t rdx_38;
                        char var_310;
                        int64_t var_250;
                        int64_t var_248;
                        int128_t var_208;
                        int128_t var_1f8;
                        
                        if (result_4 == -0x7fffffffffffffff)
                        {
                            int96_t var_2b8_1 = var_1f8;
                            var_2c8 = var_208;
                            var_2d8 = var_218;
                            int64_t rdx_13 = *var_2d8[8];
                            uu_cp::copydir::Entry::new::h80a7ef3aebe5fae7(&i_4, &var_138, rdx_13, 
                                var_2c8, rax_18);
                            void* i_5 = i_4;
                            
                            if (i_5 == -0x8000000000000000)
                                *arg1 = -0x8000000000000006;
                            else
                            {
                                int64_t var_340;
                                int64_t var_38_1 = var_340;
                                int128_t var_48_1 = var_350;
                                int128_t var_58_1 = var_360;
                                int128_t var_68_1 = var_370;
                                int128_t var_78_1 = var_380;
                                void* i_11 = i_5;
                                uu_cp::copydir::copy_direntry::h5128c59f3878fb79(&i_4, arg2, &i_11, 
                                    arg7, arg8, rbx_2, arg9, arg10);
                                void* i_6 = i_4;
                                
                                if (i_6 != var_338_1)
                                {
                                    *(arg1 + 0x28) = var_360;
                                    *(arg1 + 0x18) = var_370;
                                    *(arg1 + 8) = var_380;
                                    *arg1 = i_6;
                                }
                                else if ((*var_2b8_1[8] & 0xf000) != 0x4000)
                                {
                                    core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h444cd82b19c00334(&var_218);
                                    continue;
                                }
                                else
                                {
                                    char* rbx_4;
                                    
                                    if (var_258 == -0x8000000000000000)
                                    {
                                        label_49a638:
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$walkdir..dent..DirEntry$GT$$GT$::ha461187a0f94669f(&var_258);
                                        int128_t var_238_1 = var_1f8;
                                        var_248 = var_208;
                                        var_258 = var_218;
                                        continue;
                                    }
                                    else
                                    {
                                        if (!std::path::Path::strip_prefix::hf232be0ca9110327(
                                                var_250, var_248, rdx_13))
                                            goto label_49a638;
                                        
                                        int64_t rax_24;
                                        int64_t rdx_17;
                                        rax_24 = std::path::Path::strip_prefix::hf232be0ca9110327(
                                            var_250, var_248, rdx_13);
                                        int64_t rax_25;
                                        int64_t rdx_19;
                                        rax_25 = core::result::Result$LT$T$C$E$GT$::unwrap::h60e8458df1e66a99(rax_24);
                                        char* var_d0;
                                        uu_cp::copydir::skip_last::hccc8afbbff581cdb(&var_d0, 
                                            rax_25, rdx_19);
                                        rbx_4 = var_d0;
                                        
                                        if (!rbx_4)
                                            goto label_49a638;
                                    }
                                    
                                    int64_t var_c8;
                                    int64_t rbp_1 = var_c8;
                                    char* var_c0;
                                    char* r14_3 = var_c0;
                                    
                                    while (true)
                                    {
                                        char* r12_1 = rbx_4;
                                        char* rax_26;
                                        int64_t rdx_20;
                                        rax_26 = std::path::Path::parent::hef287f60afa56900(rbx_4, 
                                            rbp_1);
                                        
                                        if (!r14_3)
                                            goto label_49a638;
                                        
                                        rbx_4 = rax_26;
                                        rbp_1 = rdx_20;
                                        std::path::Path::join::h10fbe6df042abede(&i_2, rdx_13, 
                                            var_2c8, r14_3);
                                        uu_cp::copydir::Entry::new::h6fc819f4164af7ea(&i_4, 
                                            &var_138, &i_2, rax_18);
                                        int128_t** i_3 = i_4;
                                        
                                        if (i_3 == -0x8000000000000000)
                                            *arg1 = -0x8000000000000006;
                                        else
                                        {
                                            int64_t var_2e0_1 = var_340;
                                            int128_t zmm3_3 = var_350;
                                            int128_t var_300_1 = var_360;
                                            var_310 = var_370;
                                            var_320 = var_380;
                                            i_1 = i_3;
                                            uu_cp::copy_attributes::h279b81c598780b21(&i_4, 
                                                var_320, var_318, zmm3_3, *zmm3_3[8], arg7 + 0x48);
                                            void* i_7 = i_4;
                                            
                                            if (i_7 != var_338_1)
                                            {
                                                *(arg1 + 0x28) = var_360;
                                                *(arg1 + 0x18) = var_370;
                                                *(arg1 + 8) = var_380;
                                                *arg1 = i_7;
                                                core::ptr::drop_in_place$LT$uu_cp..copydir..Entry$GT$::h89a476cd5a29a964(&i_1);
                                            }
                                            else
                                            {
                                                core::ptr::drop_in_place$LT$uu_cp..copydir..Entry$GT$::h89a476cd5a29a964(&i_1);
                                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&i_2);
                                                r14_3 = r12_1;
                                                
                                                if (!rbx_4)
                                                    goto label_49a638;
                                                
                                                continue;
                                            }
                                        }
                                        
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&i_2);
                                        break;
                                    }
                                }
                            }
                            
                            core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h444cd82b19c00334(&var_2d8);
                            core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::hd310f303c53c6874(
                                &i_10);
                            rdx_38 = var_258;
                            rcx_35 = 0;
                        }
                        else if (result_4 == -0x7ffffffffffffffe)
                        {
                            core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::hd310f303c53c6874(
                                &i_10);
                            int64_t rdx_24 = var_258;
                            int32_t rcx_22;
                            rcx_22 = 1;
                            
                            if (rdx_24 != -0x8000000000000000)
                            {
                                int64_t rax_27;
                                int64_t rdx_26;
                                rax_27 = std::path::Path::strip_prefix::hf232be0ca9110327(var_250, 
                                    var_248, arg3);
                                char* rax_28;
                                int64_t rdx_28;
                                rax_28 =
                                    core::result::Result$LT$T$C$E$GT$::unwrap::h60e8458df1e66a99(
                                    rax_27);
                                char* r13_2 = rax_28;
                                
                                if (rax_28)
                                {
                                    int64_t rbp_2 = rdx_28;
                                    
                                    while (true)
                                    {
                                        char* rax_29;
                                        int64_t rdx_29;
                                        rax_29 = std::path::Path::parent::hef287f60afa56900(r13_2, 
                                            rbp_2);
                                        std::path::Path::join::h10fbe6df042abede(&i_1, arg3, arg4, 
                                            r13_2);
                                        uu_cp::copydir::Entry::new::h6fc819f4164af7ea(&i_10, 
                                            &var_138, &i_1, rax_18);
                                        void* i_8 = i_10;
                                        
                                        if (i_8 == -0x8000000000000000)
                                            *arg1 = -0x8000000000000006;
                                        else
                                        {
                                            int64_t var_340_1 = *var_1a8[8];
                                            var_350 = var_1b0_1;
                                            int128_t var_360_1 = var_1c0;
                                            var_370 = var_1d0_4;
                                            var_380 = result_1;
                                            i_4 = i_8;
                                            int64_t var_348;
                                            uu_cp::copy_attributes::h279b81c598780b21(&i_10, 
                                                var_380, var_378, var_350, var_348, arg7 + 0x48);
                                            void* i_13 = i_10;
                                            
                                            if (i_13 != var_338_1)
                                            {
                                                *(arg1 + 0x28) = var_1c0;
                                                *(arg1 + 0x18) = var_1d0_4;
                                                *(arg1 + 8) = result_1;
                                                *arg1 = i_13;
                                                core::ptr::drop_in_place$LT$uu_cp..copydir..Entry$GT$::h89a476cd5a29a964(&i_4);
                                            }
                                            else
                                            {
                                                core::ptr::drop_in_place$LT$uu_cp..copydir..Entry$GT$::h89a476cd5a29a964(&i_4);
                                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&i_1);
                                                r13_2 = rax_29;
                                                rbp_2 = rdx_29;
                                                
                                                if (!rax_29)
                                                    goto label_49a830;
                                                
                                                continue;
                                            }
                                        }
                                        
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&i_1);
                                        break;
                                    }
                                    
                                    goto label_49aa6c;
                                }
                                
                                label_49a830:
                                core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h444cd82b19c00334(&var_258);
                                rcx_22 = 0;
                            }
                            
                            if (!rax_4)
                                goto label_49aabb;
                            
                            int64_t rax_30;
                            int64_t rdx_33;
                            rax_30 = std::path::Path::file_name::h6d40d88bf3fb287a(arg3, arg4);
                            
                            if (!rax_30)
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            std::path::Path::join::h10fbe6df042abede(&var_2d8, var_280, var_278, 
                                rax_30);
                            uu_cp::aligned_ancestors::h2e8a6c5e1cc13323(&i_10, arg3, arg4, 
                                *var_2d8[8]);
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h22eacf00db38bb5e(&i_1, &i_10);
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&i_4, &i_1);
                            void* i_9 = i_4;
                            
                            if (!i_9)
                            {
                                label_49aa98:
                                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0259dd8f81e67d9c(&i_1);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_2d8);
                                label_49aabb:
                                *arg1 = var_338_1;
                                
                                if (rdx_24 != -0x8000000000000000 && rcx_22)
                                    core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h444cd82b19c00334(&var_258);
                                
                                core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h778f54a505d07da4(&var_138);
                                break;
                                break;
                            }
                            
                            while (true)
                            {
                                uucore::features::fs::canonicalize::h2a46952db6a00ca6(&result_3, 
                                    i_9, var_380, 0, 1);
                                
                                if (result_3 == -0x8000000000000000)
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd1372b83dff59979(&result_3);
                                else
                                {
                                    uu_cp::copy_attributes::h279b81c598780b21(&i_10, var_218, 
                                        *var_218[8], var_378, var_370, arg7 + 0x48);
                                    void* i_14 = i_10;
                                    
                                    if (i_14 != var_338_1)
                                    {
                                        *(arg1 + 0x28) = var_1c0;
                                        *(arg1 + 0x18) = var_1d0_4;
                                        *(arg1 + 8) = result_1;
                                        *arg1 = i_14;
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&result_3);
                                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0259dd8f81e67d9c(&i_1);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_2d8);
                                        rcx_35 = rcx_22 ^ 1;
                                        rdx_38 = rdx_24;
                                        break;
                                    }
                                    
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&result_3);
                                }
                                
                                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&i_4, &i_1);
                                i_9 = i_4;
                                
                                if (!i_9)
                                    goto label_49aa98;
                            }
                        }
                        else
                        {
                            i_4 = result_4;
                            var_360 = var_1f8;
                            var_370 = var_208;
                            var_380 = var_218;
                            int64_t rax_20;
                            int64_t rdx_12;
                            rax_20 = uucore::util_name::h074417a1e6395129();
                            var_2d8 = rax_20;
                            *var_2d8[8] = rdx_12;
                            i_2 = &var_2d8;
                            int64_t (* var_268_2)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
                            i_1 = &data_55e700;
                            int64_t var_320_4 = 2;
                            int64_t var_308_1 = 0;
                            int128_t*** var_318_2 = &i_2;
                            var_310 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&i_1);
                            var_2d8 = &i_4;
                            *var_2d8[8] = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h1e123ae21f310ff7;
                            i_1 = &data_55e620;
                            var_320 = 2;
                            int64_t var_308_2 = 0;
                            var_318 = &var_2d8;
                            var_310 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&i_1);
                            core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::h67581e15ba29d162(&i_4);
                            continue;
                            continue;
                        }
                        
                        if ((rdx_38 == -0x8000000000000000 | rcx_35) & 1)
                        {
                            core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h778f54a505d07da4(&var_138);
                            break;
                        }
                        
                        label_49aa6c:
                        core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h444cd82b19c00334(
                            &var_258);
                        core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h778f54a505d07da4(
                            &var_138);
                        break;
                    }
                }
                else
                {
                    result_3 = result_1;
                    i_1 = &result_3;
                    int64_t (* var_320_3)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    i_4 = &data_55e6f0;
                    int64_t var_380_2 = 1;
                    int64_t var_368_1 = 0;
                    int128_t*** var_378_2 = &i_1;
                    var_370 = 1;
                    int128_t var_98;
                    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_98, &i_4);
                    int64_t var_88;
                    arg1[3] = var_88;
                    *(arg1 + 8) = var_98;
                    *arg1 = -0x8000000000000003;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb23d8f5d6ef8daac(
                        &result_3);
                }
                
                return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                    &var_288);
            }
            
            i_1 = 1;
            char* var_320_2 = arg3;
            uint64_t var_318_1 = arg4;
            char var_310_1 = 1;
            int64_t rax_2;
            int64_t rdx_3;
            rax_2 = std::path::Path::file_name::h6d40d88bf3fb287a(arg3, arg4);
            
            if (!rax_2)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            std::path::Path::join::h10fbe6df042abede(&result_3, arg5, arg6, rax_2);
            int128_t zmm0_1 = var_218;
            i_4 = 1;
            var_380 = zmm0_1;
            char var_370_2 = 1;
            var_138 = &i_1;
            int64_t (* var_130_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            void** var_128_1 = &i_4;
            int64_t (* var_120_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            i_10 = &data_55e6a0;
            int64_t var_1e0_1 = 2;
            int64_t var_1c8_2 = 0;
            int128_t**** var_1d8_2 = &var_138;
            int64_t var_1d0_2 = 2;
            int128_t var_b0;
            core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_b0, &i_10);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&result_3);
            int128_t* result_2;
            result = result_2;
            arg1[3] = result;
            *(arg1 + 8) = var_b0;
            *arg1 = -0x8000000000000003;
        }
        else
        {
            result = result_1;
            *arg1 = -0x8000000000000001;
            arg1[1] = result;
        }
    }
    return result;
}
