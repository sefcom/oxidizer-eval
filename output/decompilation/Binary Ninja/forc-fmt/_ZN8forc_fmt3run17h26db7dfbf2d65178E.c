
  uint64_t forc_fmt::run::h26db7dfbf2d65178()

{
    void var_1a8;
    clap_builder::derive::Parser::parse::h8f640226a90708df(&var_1a8);
    int64_t var_178;
    uint64_t result;
    int128_t var_368;
    uint64_t var_358_1;
    int128_t var_2c8;
    uint64_t var_2b8;
    
    if (!(0 + -(var_178)))
    {
        int64_t var_170;
        uint64_t var_168;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7952c7604fb58122(&var_2c8, var_170, var_168);
        var_358_1 = var_2b8;
        var_368 = var_2c8;
        label_7d2dbc:
        int64_t rax_3;
        int64_t rdx_2;
        rax_3 = std::thread::local::LocalKey$LT$T$GT$::with::h2e9f557e2f4c9675();
        var_2b8 = data_c0a2e0;
        var_2c8 = *data_c0a2d0;
        int32_t var_348;
        void* var_1a0;
        int64_t var_198;
        void* var_188;
        int64_t var_180;
        sway_features::ExperimentalFeatures::new::h3e26f148e42ffdec(&var_348, &var_2c8, var_1a0, 
            var_198, var_188, var_180);
        int128_t var_128;
        
        if (var_348 != 2)
        {
            int128_t var_338;
            int128_t var_118_1 = var_338;
            var_128 = var_348;
            result = forc_fmt::run::_$u7b$$u7b$closure$u7d$$u7d$::hc32e8b493192a6a7(&var_128);
            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$bool$GT$$GT$::hb9272940ba99fd80(&var_2c8);
        }
        else
        {
            int32_t var_340;
            int32_t rbp_1 = var_340;
            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$bool$GT$$GT$::hb9272940ba99fd80(&var_2c8);
            swayfmt::formatter::Formatter::from_dir::h2e7272f170636a28(&var_2c8, *var_368[8], 
                var_358_1, rbp_1);
            int64_t r14_1 = var_2c8;
            var_348 = var_2c8;
            int128_t var_328_1 = rdx_2;
            int128_t var_290;
            int128_t var_318_1 = var_290;
            int128_t var_280;
            int128_t var_308_1 = var_280;
            int128_t var_2b0;
            int64_t var_2a8_1;
            int128_t var_270;
            
            if (r14_1 != 2)
            {
                void var_260;
                void var_c0;
                memcpy(&var_c0, &var_260, 0xa8);
                var_128 = var_348;
                int128_t var_118 = var_2b0;
                int128_t var_100_1 = var_328_1;
                int128_t var_f0_1 = var_318_1;
                int128_t var_e0_1 = var_308_1;
                int128_t var_d0_1 = var_270;
                var_128 = r14_1;
                int64_t var_160;
                int32_t var_148;
                
                if (var_160 != -0x8000000000000000)
                {
                    int64_t var_158;
                    uint64_t var_150;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7952c7604fb58122(&var_2c8, var_158, var_150);
                    int128_t var_338_1;
                    var_338_1 = var_2b8;
                    var_348 = var_2c8;
                    int64_t r14_3 = var_340;
                    char rax_6;
                    uint64_t rdx_7;
                    rax_6 = sway_utils::helpers::is_sway_file::hba6cb499f5e692c0(r14_3, var_2b8);
                    int64_t var_2d8;
                    
                    if (!rax_6)
                    {
                        var_2d8 = r14_3;
                        uint64_t var_2d0 = var_2b8;
                        int64_t* var_1b8 = &var_2d8;
                        uint64_t (* var_1b0_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                        var_2c8 = &data_c0a2b0;
                        *var_2c8[8] = 2;
                        int64_t var_2a8_2 = 0;
                        int64_t** var_2b8_1 = &var_1b8;
                        var_2b0 = 1;
                        void var_140;
                        core::option::Option$LT$T$GT$::map_or_else::he9085a4e14fd35e7(&var_140, 0, 
                            rdx_7, &var_2c8);
                        result =
                            anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::hbb2939ea4f0c1592(
                            &var_140);
                    }
                    else
                    {
                        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                            &var_2c8, r14_3, var_2b8);
                        forc_fmt::format_file::haa7995617547e0cf(&var_2d8, var_148, &var_2c8, 
                            &var_128);
                        uint64_t result_1;
                        
                        if (!var_2d8)
                            result = 0;
                        else
                            result = result_1;
                    }
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_348);
                    core::ptr::drop_in_place$LT$swayfmt..formatter..Formatter$GT$::h30c270609a11d181(&var_128);
                }
                else
                {
                    _$LT$forc_pkg..manifest..ManifestFile$u20$as$u20$forc_pkg..manifest..GenericManifestFile$GT$::from_dir::hd2dd87b8697dd315(&var_2c8, &var_368);
                    int64_t r14_2 = var_2c8;
                    result = *var_2c8[8];
                    
                    if (r14_2 == 3)
                        core::ptr::drop_in_place$LT$swayfmt..formatter..Formatter$GT$::h30c270609a11d181(&var_128);
                    else
                    {
                        var_348 = r14_2;
                        var_340 = result;
                        
                        if (r14_2 == 2)
                        {
                            uint64_t result_2 = forc_fmt::format_pkg_at_dir::h8cf58775fa0cc2a4(
                                var_148, *var_368[8], var_358_1, &var_128);
                            result = result_2;
                            
                            if (result_2)
                                goto label_7d3272;
                            
                            goto label_7d32d4;
                        }
                        
                        int128_t var_298;
                        int128_t var_298_2 = var_298;
                        var_2a8_1 = rax_3;
                        var_2b8 = var_2b8;
                        var_2c8 = var_348;
                        *var_2c8[8] = var_340;
                        uint64_t result_3 = forc_fmt::format_workspace_at_dir::h57c190d59c7609d7(
                            var_148, &var_2c8, *var_368[8], var_358_1, rbp_1);
                        result = result_3;
                        
                        if (!result_3)
                        {
                            core::ptr::drop_in_place$LT$forc_pkg..manifest..WorkspaceManifestFile$GT$::h7cded83f4db471ba(&var_2c8);
                            label_7d32d4:
                            
                            if (var_348 == 2)
                                core::ptr::drop_in_place$LT$forc_pkg..manifest..ManifestFile$GT$::h998dc06577c4d739(&var_348);
                            
                            core::ptr::drop_in_place$LT$swayfmt..formatter..Formatter$GT$::h30c270609a11d181(&var_128);
                            result = 0;
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$forc_pkg..manifest..WorkspaceManifestFile$GT$::h7cded83f4db471ba(&var_2c8);
                            label_7d3272:
                            
                            if (var_348 != 2)
                                core::ptr::drop_in_place$LT$swayfmt..formatter..Formatter$GT$::h30c270609a11d181(&var_128);
                            else
                            {
                                core::ptr::drop_in_place$LT$forc_pkg..manifest..ManifestFile$GT$::h998dc06577c4d739(&var_348);
                                core::ptr::drop_in_place$LT$swayfmt..formatter..Formatter$GT$::h30c270609a11d181(&var_128);
                            }
                        }
                    }
                }
            }
            else
            {
                var_280 = var_270;
                var_290 = var_308_1;
                int128_t var_298_1 = var_318_1;
                var_2a8_1 = var_328_1;
                var_2b8 = var_2b0;
                var_2c8 = var_348;
                result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h2e7d7e3a9cfa8b6c(&var_2c8);
            }
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_368);
    }
    else
    {
        std::env::current_dir::h2d02f56ea8ff76eb(&var_2c8);
        int64_t rax = var_2c8;
        int64_t rdi_2 = *var_2c8[8];
        
        if (rax != -0x8000000000000000)
        {
            var_368 = rax;
            *var_368[8] = rdi_2;
            var_358_1 = var_2b8;
            goto label_7d2dbc;
        }
        
        result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h49e8656b8ef808ed(rdi_2);
    }
    core::ptr::drop_in_place$LT$forc_fmt..App$GT$::h612df9bb7e621ec3(&var_1a8);
    return result;
}
