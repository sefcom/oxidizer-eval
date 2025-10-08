
  int64_t* uu_cp::copy::h4c277fa9041cf566(int64_t* arg1, void* arg2, int64_t arg3, int64_t* arg4, uint64_t arg5, void* arg6)

{
    void* r13 = arg2;
    char rax = uu_cp::TargetType::determine::he8b1575a948836bb(arg3, arg4, arg5);
    char var_355 = rax;
    void** const var_2d8;
    uu_cp::verify_target_type::h2b848ad41a27e25d(&var_2d8, arg4, arg5, &var_355);
    void** const rax_1 = var_2d8;
    int64_t var_220 = -0x7ffffffffffffff4;
    int128_t var_2d0;
    int128_t var_2c0;
    int128_t var_2b0;
    
    if (rax_1 != -0x7ffffffffffffff4)
    {
        *(arg1 + 0x28) = var_2b0;
        *(arg1 + 0x18) = var_2c0;
        *(arg1 + 8) = var_2d0;
        *arg1 = rax_1;
    }
    else
    {
        int64_t rax_2;
        int64_t rdx_2;
        rax_2 = std::thread::local::LocalKey$LT$T$GT$::with::h9b313c171fed200d();
        hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h931f5d841f7faff0(
            &var_2d8, arg3, rax_2, rdx_2);
        int128_t var_d8_1 = var_2c0;
        int128_t var_e8_1 = var_2d0;
        int128_t var_f8 = var_2d8;
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h62824615338220f8(&var_2d8);
        int128_t var_1c8_1 = var_2c0;
        int128_t var_1d8_1 = var_2d0;
        int128_t var_1e8 = var_2d8;
        int64_t rax_3;
        int64_t rdx_4;
        rax_3 = std::thread::local::LocalKey$LT$T$GT$::with::h9b313c171fed200d();
        hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::he3fc3d62c72efa66(
            &var_2d8, arg3, rax_3, rdx_4);
        int128_t var_a8_1 = var_2c0;
        int128_t var_b8_1 = var_2d0;
        int128_t var_c8 = var_2d8;
        int64_t rax_4;
        int64_t rdx_6;
        rax_4 = std::thread::local::LocalKey$LT$T$GT$::with::h9b313c171fed200d();
        hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h931f5d841f7faff0(
            &var_2d8, arg3, rax_4, rdx_6);
        int128_t var_198_1 = var_2c0;
        int128_t var_1a8_1 = var_2d0;
        int128_t var_1b8 = var_2d8;
        int128_t var_348;
        void** var_318;
        int64_t var_308;
        int128_t var_2f0;
        int128_t var_210;
        int128_t* var_188;
        
        if (!*(arg6 + 0x61))
        {
            var_318 = nullptr;
            void** rbx_1;
            
            if (arg3)
            {
                label_4a0351:
                char rax_8 = *(arg6 + 0x65);
                char rax_9 = *(arg6 + 0x67);
                int64_t r15_2 = arg3 * 0x18;
                char var_354_1 = 0;
                char var_320;
                var_320 = rax;
                char rcx_6 = *(arg6 + 0x5c);
                char rax_11 = *(arg6 + 0x5a);
                int64_t rcx_13;
                
                while (true)
                {
                    char* r14_1 = *(r13 + 8);
                    uint64_t rbp_1 = *(r13 + 0x10);
                    uucore::features::fs::normalize_path::hf21e1a2770e03e24(&var_210, r14_1, rbp_1);
                    int64_t rax_15;
                    
                    if (!rax_8)
                        rax_15 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h2c14f1e81e7a0f17(&var_f8, &var_210);
                    
                    int128_t** var_338;
                    int32_t var_2a0;
                    uint64_t var_178;
                    char var_170;
                    
                    if (rax_8 || !rax_15)
                    {
                        char const (** var_68)[0x63];
                        uu_cp::construct_dest_path::h35c9b894b22c07c1(&var_68, r14_1, rbp_1, arg4, 
                            arg5, var_320, rax_11, rcx_6);
                        
                        if (var_68 != -0x7ffffffffffffff4)
                            uu_cp::copy::_$u7b$$u7b$closure$u7d$$u7d$::h91e457ffb0efc3ea(&var_348, 
                                arg4, arg5, &var_68);
                        else
                        {
                            int128_t** var_50;
                            var_338 = var_50;
                            int128_t var_60;
                            var_348 = var_60;
                        }
                        
                        std::fs::metadata::hfc8772c33100161d(&var_2d8, &var_348);
                        
                        if (var_2d8 == 2)
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_2d8);
                            label_4a04b0:
                            std::fs::metadata::hfc8772c33100161d(&var_2d8, r13);
                            
                            if (var_2d8 != 2)
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_2d8);
                                std::fs::symlink_metadata::hcd0e4e3d0fab3f23(&var_2d8, r13);
                                
                                if (var_2d8 == 2)
                                    goto label_4a0913;
                                
                                int32_t rax_21;
                                rax_21 = (var_2a0 & 0xf000) == 0xa000;
                                rax_21 |= rax_9 == 1;
                                
                                if (!rax_21)
                                    goto label_4a06d3;
                                
                                goto label_4a06be;
                            }
                            
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_2d8);
                            
                            if (rax_9 == 1)
                                goto label_4a06be;
                            
                            label_4a06d3:
                            void** rsi_20 = var_318;
                            
                            if (rsi_20)
                                rsi_20 = &var_318;
                            
                            uu_cp::copy_source::h7730ca89bda1d16f(&var_188, rsi_20, r14_1, rbp_1, 
                                arg4, arg5, var_320, arg6, &var_1e8, &var_1b8, &var_c8);
                            
                            if (var_188 != -0x7ffffffffffffff4)
                            {
                                int64_t var_158;
                                *var_2b0[8] = var_158;
                                int128_t var_168;
                                var_2c0 = var_168;
                                var_2d8 = var_188;
                                uu_cp::show_error_if_needed::h37308d2f7c80265f(&var_2d8);
                                void** const r14_2 = var_2d8;
                                core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h9ee7df58e7d9e41e(
                                    &var_2d8);
                                void* rax_26;
                                rax_26 = r14_2 != -0x7ffffffffffffff9;
                                var_354_1 = var_178 | var_354_1 | rax_26;
                            }
                            else
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cp..Error$GT$$GT$::h38297071204f1dde(&var_188);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hdde023ffc5414155(&var_2d8, *var_348[8], var_338);
                                var_178 = *var_2d0[8];
                                var_188 = var_2d8;
                                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h2f5c71e7b4c433df(&var_1b8, &var_188);
                            }
                            
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                                &var_348);
                            goto label_4a0838;
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_2d8);
                        std::fs::symlink_metadata::hcd0e4e3d0fab3f23(&var_2d8, &var_348);
                        
                        if (var_2d8 == 2)
                        {
                            label_4a0913:
                            *arg1 = -0x7fffffffffffffff;
                            arg1[1] = var_2d0;
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                                &var_348);
                        }
                        else
                        {
                            if ((var_2a0 & 0xf000) == 0xa000)
                                goto label_4a04b0;
                            
                            label_4a06be:
                            
                            if (rax_8 == 2 || !hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h2c14f1e81e7a0f17(&var_1b8, &var_348))
                                goto label_4a06d3;
                            
                            int128_t var_78 = var_348;
                            var_2f0 = r14_1;
                            *var_2f0[8] = rbp_1;
                            var_188 = &var_78;
                            uint64_t (* var_180_3)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                            int128_t* var_178_1 = &var_2f0;
                            var_170 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                            var_2d8 = &data_55eaa0;
                            var_2d0 = 3;
                            *var_2c0[8] = 0;
                            *var_2d0[8] = &var_188;
                            var_2c0 = 2;
                            int128_t var_90;
                            core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_90, 
                                &var_2d8);
                            int64_t var_80;
                            arg1[3] = var_80;
                            *(arg1 + 8) = var_90;
                            *arg1 = -0x7ffffffffffffffd;
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                                &var_348);
                        }
                    }
                    else
                    {
                        std::fs::symlink_metadata::h814bc3976f7d40c5(&var_2d8, r14_1);
                        
                        if (var_2d8 == 2)
                        {
                            *arg1 = -0x7fffffffffffffff;
                            arg1[1] = var_2d0;
                        }
                        else
                        {
                            int32_t rax_17 = var_2a0 & 0xf000;
                            char const* const rax_18 = "file";
                            
                            if (rax_17 == 0x4000)
                                rax_18 = "directorycannot overwrite direct…";
                            
                            int64_t rcx_9;
                            rcx_9 = rax_17 == 0x4000;
                            var_2f0 = rax_18;
                            *var_2f0[8] = rcx_9 * 5 + 4;
                            int128_t* rax_19;
                            int64_t rdx_17;
                            rax_19 = uucore::util_name::h074417a1e6395129();
                            var_188 = rax_19;
                            int64_t var_180_1 = rdx_17;
                            var_348 = &var_188;
                            *var_348[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
                            var_2d8 = &data_55ea50;
                            var_2d0 = 2;
                            *var_2c0[8] = 0;
                            *var_2d0[8] = &var_348;
                            var_2c0 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_2d8);
                            var_188 = 1;
                            char* var_180_2 = r14_1;
                            var_178 = rbp_1;
                            var_170 = 1;
                            var_348 = &var_2f0;
                            *var_348[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
                            var_338 = &var_188;
                            int64_t (* var_330_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_2d8 = &data_55ea70;
                            var_2d0 = 3;
                            *var_2c0[8] = 0;
                            *var_2d0[8] = &var_348;
                            var_2c0 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_2d8);
                            label_4a0838:
                            int64_t var_200;
                            *var_2d0[8] = var_200;
                            var_2d8 = var_210;
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h2f5c71e7b4c433df(
                                &var_f8, &var_2d8);
                            r13 += 0x18;
                            int64_t temp0_1 = r15_2;
                            r15_2 -= 0x18;
                            
                            if (temp0_1 != 0x18)
                                continue;
                            
                            rcx_13 = -0x7ffffffffffffff4;
                            break;
                        }
                    }
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_210);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h2886b36a14075ab5(&var_318);
                    goto label_4a0a1a;
                }
                
                if (var_354_1 & 1)
                    rcx_13 = -0x7ffffffffffffffc;
                
                var_220 = rcx_13;
                rbx_1 = var_318;
                
                if (rbx_1)
                    goto label_4a08a1;
            }
            else
            {
                label_4a029b:
                rbx_1 = var_318;
                
                if (rbx_1)
                {
                    label_4a08a1:
                    *var_2d0[8] = var_308;
                    var_2d8 = var_318;
                    indicatif::progress_bar::ProgressBar::finish::h663df6ae4365ac56(&var_2d8);
                    core::ptr::drop_in_place$LT$indicatif..progress_bar..ProgressBar$GT$::h7c951950d32a6cfe(&var_2d8);
                }
            }
            
            *arg1 = var_220;
            
            if (!rbx_1 && var_318)
                core::ptr::drop_in_place$LT$indicatif..progress_bar..ProgressBar$GT$::h7c951950d32a6cfe(&var_318);
        }
        else
        {
            char rax_5;
            int64_t rdx_9;
            rax_5 = uu_cp::disk_usage::hb4f518c6ef29284a(r13, arg3, *(arg6 + 0x5e));
            
            if (!(rax_5 & 1))
            {
                indicatif::progress_bar::ProgressBar::new::h418645bcba389941(&var_348, rdx_9);
                indicatif::style::ProgressStyle::with_template::h894553d49f3431cc(&var_2d8, 
                    "{msg}: [{elapsed_precise}] {wide…", 0x40);
                core::result::Result$LT$T$C$E$GT$::unwrap::had63be82db54ca64(&var_188, &var_2d8);
                indicatif::progress_bar::ProgressBar::with_style::hca9219836070d110(&var_210, 
                    &var_348, &var_188);
                int64_t rax_6;
                int64_t rdx_11;
                rax_6 = uucore::util_name::h074417a1e6395129();
                indicatif::progress_bar::ProgressBar::with_message::h1f29d092ae092cd1(&var_2f0, 
                    &var_210, rax_6, rdx_11);
                indicatif::progress_bar::ProgressBar::tick::h7463cf14f8fd6a05(&var_2f0);
                int64_t var_2e0;
                var_308 = var_2e0;
                var_318 = var_2f0;
                
                if (!arg3)
                    goto label_4a029b;
                
                goto label_4a0351;
            }
            
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = rdx_9;
        }
        label_4a0a1a:
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h839c2185cd09c670(&var_1b8);
        core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$uucore..features..fs..FileInformation$C$std..path..PathBuf$GT$$GT$::h5adc5f89404339b2(&var_c8);
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h5d52bab0cf96a877(var_1e8, *var_1e8[8]);
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h839c2185cd09c670(&var_f8);
    }
    return arg1;
}
