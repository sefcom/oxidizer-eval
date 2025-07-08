
  int64_t* uu_cp::copy::h5586f24b20d7299d(int64_t* arg1, int64_t arg2, int64_t arg3, char* arg4, uint64_t arg5, int64_t* arg6)

{
    int64_t* r12 = arg6;
    char rax = uu_cp::TargetType::determine::h09744ae410e88efc(arg3, arg4, arg5);
    char var_319 = rax;
    int64_t* var_2c0 = arg4;
    char const (** const var_298)[0x93];
    uu_cp::verify_target_type::h7b1c78bb10dff0f5(&var_298, arg4, arg5, &var_319);
    char const (** const rax_1)[0x93] = var_298;
    int128_t var_290;
    int128_t var_280;
    int128_t var_270;
    int64_t var_260;
    
    if (rax_1 != 0xd)
    {
        arg1[7] = var_260;
        *(arg1 + 0x28) = var_270;
        *(arg1 + 0x18) = var_280;
        *(arg1 + 8) = var_290;
        *arg1 = rax_1;
    }
    else
    {
        std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&var_298);
        int64_t rax_2;
        int64_t rdx_2;
        rax_2 = core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&var_298);
        hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hf9e3a8b2e0b29c10(
            &var_298, arg3, rax_2, rdx_2);
        int128_t var_c8_1 = var_280;
        int128_t var_d8_1 = var_290;
        int128_t var_e8 = var_298;
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::hb9c79e3835ee1500(&var_298);
        int128_t var_98_1 = var_280;
        int128_t var_a8_1 = var_290;
        int128_t var_b8 = var_298;
        std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&var_298);
        int64_t rax_3;
        int64_t rdx_4;
        rax_3 = core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&var_298);
        hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h07f3e8be27af1af7(
            &var_298, arg3, rax_3, rdx_4);
        int128_t var_68_1 = var_280;
        int128_t var_78_1 = var_290;
        int128_t var_88 = var_298;
        std::thread::local::LocalKey$LT$T$GT$::try_with::h886da043dfb4063d(&var_298);
        int64_t rax_4;
        int64_t rdx_6;
        rax_4 = core::result::Result$LT$T$C$E$GT$::expect::hddedd585ff7aa4c1(&var_298);
        hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hf9e3a8b2e0b29c10(
            &var_298, arg3, rax_4, rdx_6);
        int128_t var_f8_1 = var_280;
        int128_t var_108_1 = var_290;
        int128_t var_118 = var_298;
        int128_t var_318;
        char* var_2e8;
        int128_t var_2b0;
        int64_t var_2a0;
        int64_t var_1e8;
        int64_t var_1d8;
        int32_t var_1a0;
        
        if (!*(r12 + 0x49))
        {
            var_1e8 = 0;
            label_503509:
            int64_t var_1b0 = arg2;
            int64_t var_1a8_1 = arg2 + arg3 * 0x18;
            void* rax_11 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&var_1b0);
            void* rbx_3;
            
            if (!rax_11)
            {
                rbx_3 = 0xd;
                
                if (var_1e8)
                {
                    label_503ab1:
                    *var_290[8] = var_1d8;
                    var_298 = var_1e8;
                    indicatif::progress_bar::ProgressBar::finish::h204a36c2f269e760(&var_298);
                    int64_t* rbp_1;
                    rbp_1 = 1;
                    core::ptr::drop_in_place$LT$indicatif..progress_bar..ProgressBar$GT$::h2d075ec2e7438ac9(&var_298);
                }
            }
            else
            {
                void* r14_1 = rax_11;
                char rax_12 = *(r12 + 0x4c);
                char rax_13 = *(r12 + 0x4e);
                char r15_1 = 0;
                char var_2f0;
                var_2f0 = rax;
                char rax_15 = *(r12 + 0x44);
                char rax_16 = *(r12 + 0x42);
                int64_t* var_1c8_1 = r12;
                
                while (true)
                {
                    char* rbx_1 = *(r14_1 + 8);
                    uint64_t r13_1 = *(r14_1 + 0x10);
                    uucore::features::fs::normalize_path::hf9d1827f61a753a1(&var_2b0, rbx_1);
                    void* rax_20;
                    
                    if (!rax_12)
                        rax_20 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h4ae3d79167c533bf(&var_e8, &var_2b0);
                    
                    int128_t var_198;
                    int128_t var_190;
                    
                    if (rax_12 || !rax_20)
                    {
                        uu_cp::construct_dest_path::hfc66a1b24656cf26(&var_1a0, rbx_1, r13_1, 
                            var_2c0, arg5, var_2f0, rax_16, rax_15);
                        int128_t var_180;
                        int128_t var_170;
                        
                        if (var_1a0 != 0xd)
                        {
                            var_270 = var_170;
                            var_280 = var_180;
                            var_290 = var_190;
                            var_298 = var_1a0;
                            uu_cp::copy::_$u7b$$u7b$closure$u7d$$u7d$::h5a73338177addea2(&var_318, 
                                var_2c0, arg5, &var_298);
                        }
                        else
                        {
                            int64_t var_308_1 = *var_190[8];
                            var_318 = var_198;
                        }
                        
                        std::fs::metadata::hcf81ab27d993cd47(&var_298, &var_318);
                        
                        if (var_298 == 2)
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_298);
                            label_5036d0:
                            std::fs::metadata::hcf81ab27d993cd47(&var_298, r14_1);
                            
                            if (var_298 == 2)
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_298);
                                
                                if (rax_13 != 1)
                                    goto label_503922;
                                
                                goto label_5038c8;
                            }
                            
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_298);
                            std::fs::symlink_metadata::h087c360320e6b054(&var_298, r14_1);
                            
                            if (var_298 == 2)
                                goto label_503b23;
                            
                            if ((var_260 & 0xf000) == 0xa000 || rax_13 == 1)
                                goto label_5038c8;
                            
                            goto label_503922;
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_298);
                        std::fs::symlink_metadata::h087c360320e6b054(&var_298, &var_318);
                        
                        if (var_298 == 2)
                        {
                            label_503b23:
                            *arg1 = 2;
                            arg1[1] = var_290;
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(
                                &var_318);
                        }
                        else
                        {
                            if ((var_260 & 0xf000) == 0xa000)
                                goto label_5036d0;
                            
                            label_5038c8:
                            
                            if (rax_12 == 2 || !hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h4ae3d79167c533bf(&var_118, &var_318))
                            {
                                label_503922:
                                uu_cp::copy_source::ha83fca4ba2cc8af7(&var_1a0, &var_1e8, rbx_1, 
                                    r13_1, var_2c0, arg5, var_2f0, r12, &var_b8, &var_118, &var_88);
                                int64_t rbx_2 = var_1a0;
                                
                                if (rbx_2 == 0xd)
                                {
                                    r14_1 = 1;
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h250bb613d8eaf262(&var_298, &var_318);
                                    int64_t var_2d8_2 = *var_290[8];
                                    var_2e8 = var_298;
                                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h718e59b98232a8b0(&var_118, &var_2e8);
                                    r14_1 = 1;
                                }
                                else
                                {
                                    var_270 = var_170;
                                    var_280 = var_180;
                                    var_298 = var_1a0;
                                    uu_cp::show_error_if_needed::h934143ac50374c6e(&var_298);
                                    int32_t r13_2 = var_298;
                                    core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(
                                        &var_298);
                                    
                                    if (var_190)
                                        r15_1 = 1;
                                    
                                    if (r13_2 != 8)
                                        r15_1 = 1;
                                }
                                
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_318);
                                r12 = var_1c8_1;
                                
                                if (rbx_2 == 0xd && var_1a0 != 0xd)
                                    core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(
                                        &var_1a0);
                                
                                goto label_503a38;
                            }
                            
                            int128_t var_40 = var_318;
                            var_2e8 = rbx_1;
                            uint64_t var_2e0_3 = r13_1;
                            var_1a0 = &var_40;
                            var_198 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            var_190 = &var_2e8;
                            *var_190[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            var_298 = &data_5b5d58;
                            var_290 = 3;
                            *var_280[8] = 0;
                            *var_290[8] = &var_1a0;
                            var_280 = 2;
                            int128_t var_58;
                            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_58, 
                                &var_298);
                            int64_t var_48;
                            arg1[3] = var_48;
                            *(arg1 + 8) = var_58;
                            *arg1 = 4;
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(
                                &var_318);
                        }
                    }
                    else
                    {
                        std::fs::symlink_metadata::h8589e79b0a107dee(&var_298, rbx_1);
                        
                        if (var_298 == 2)
                        {
                            *arg1 = 2;
                            arg1[1] = var_290;
                        }
                        else
                        {
                            int32_t rax_22 = var_260 & 0xf000;
                            char const* const rax_23 = "file";
                            
                            if (rax_22 == 0x4000)
                                rax_23 = "directorycannot overwrite direct…";
                            
                            int64_t rcx_8;
                            rcx_8 = rax_22 == 0x4000;
                            var_318 = rax_23;
                            *var_318[8] = rcx_8 * 5 + 4;
                            int64_t rax_24;
                            int64_t rdx_18;
                            rax_24 = uucore::util_name::h60d842bf27b05e82();
                            var_1a0 = rax_24;
                            var_198 = rdx_18;
                            var_2e8 = &var_1a0;
                            int64_t (* var_2e0_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                            var_298 = &data_5b5d08;
                            var_290 = 2;
                            *var_280[8] = 0;
                            *var_290[8] = &var_2e8;
                            var_280 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_298);
                            var_1a0 = 1;
                            var_198 = rbx_1;
                            var_190 = r13_1;
                            *var_190[8] = 1;
                            var_2e8 = &var_318;
                            int64_t (* var_2e0_2)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                            int32_t* var_2d8_1 = &var_1a0;
                            int64_t (* var_2d0_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            var_298 = &data_5b5d28;
                            var_290 = 3;
                            *var_280[8] = 0;
                            *var_290[8] = &var_2e8;
                            var_280 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_298);
                            label_503a38:
                            *var_290[8] = var_2a0;
                            var_298 = var_2b0;
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h718e59b98232a8b0(
                                &var_e8, &var_298);
                            void* rax_31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&var_1b0);
                            r14_1 = rax_31;
                            
                            if (rax_31)
                                continue;
                            
                            int64_t rax_32;
                            rax_32 = !(r15_1 & 1);
                            rbx_3 = (rax_32 << 3) + 5;
                            break;
                        }
                    }
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b0);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h1c11d9db54c24981(&var_1e8);
                    goto label_503c26;
                }
                
                if (var_1e8)
                    goto label_503ab1;
            }
            
            *arg1 = rbx_3;
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de(&var_118);
            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$uucore..features..fs..FileInformation$C$std..path..PathBuf$GT$$GT$::hdb5bb62842dabe10(&var_88);
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::hc9dd8b4806c91bc9(&var_b8);
        }
        else
        {
            int64_t rax_5;
            int64_t rdx_9;
            rax_5 = uu_cp::disk_usage::hdb6cf68ba645e675(arg2, arg3, *(r12 + 0x46));
            
            if (!rax_5)
            {
                indicatif::progress_bar::ProgressBar::new::h3f65a405722ce42a(&var_2e8, rdx_9);
                indicatif::style::ProgressStyle::with_template::hadd9cefcdac397a1(&var_298);
                core::result::Result$LT$T$C$E$GT$::unwrap::h16219874c036777a(&var_1a0, &var_298);
                indicatif::progress_bar::ProgressBar::with_style::hfb345490eb32754b(&var_318, 
                    &var_2e8, &var_1a0);
                int64_t rax_6;
                int64_t rdx_12;
                rax_6 = uucore::util_name::h60d842bf27b05e82();
                indicatif::progress_bar::ProgressBar::with_message::h08019f690f508299(&var_2b0, 
                    &var_318, rax_6, rdx_12);
                indicatif::progress_bar::ProgressBar::tick::h5b31c589e9d52cbd(&var_2b0);
                var_1d8 = var_2a0;
                var_1e8 = var_2b0;
                goto label_503509;
            }
            
            *arg1 = 2;
            arg1[1] = rdx_9;
            label_503c26:
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de(&var_118);
            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$uucore..features..fs..FileInformation$C$std..path..PathBuf$GT$$GT$::hdb5bb62842dabe10(&var_88);
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::hc9dd8b4806c91bc9(&var_b8);
        }
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h14a0aeb76ec618de(&var_e8);
    }
    return arg1;
}
