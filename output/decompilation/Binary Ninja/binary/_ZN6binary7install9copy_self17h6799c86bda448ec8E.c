
  int64_t binary::install::copy_self::h6799c86bda448ec8()

{
    int128_t var_b8;
    uint64_t var_a8;
    int128_t var_a0;
    char const* const var_88;
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
    {
        var_b8 = &data_1ce6c30;
        *var_b8[8] = 1;
        var_a8 = 8;
        var_a0 = {0};
        int64_t rax_1 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6c90);
        var_88 = &data_45022a[0x15];
        int64_t var_80_1 = 0xf;
        char const* const var_78_1 = &data_45022a[0x15];
        int64_t var_70_1 = 0xf;
        int64_t var_68_1 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 3, &var_88);
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he316f2bb80969970(&var_b8, &data_4502fc, 0xf);
    int128_t var_28 = var_b8;
    int64_t rax_3 = std::fs::create_dir_all::hc291693ada78da95(&var_28);
    var_b8 = rax_3;
    
    if (!rax_3)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
        int64_t rax_6 = std::fs::set_permissions::hdbf67fe33a3ba539(&var_28, 0x1ff);
        var_b8 = rax_6;
        
        if (!rax_6)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
            void var_40;
            std::path::Path::join::hdfe81d13f7920fb5(&var_40, *var_28[8], var_a8, &data_4503e2);
            std::env::current_exe::hba8dd19674473539(&var_b8);
            core::result::Result$LT$T$C$E$GT$::unwrap::hfe1546b7d02f4ad7(&var_88, &var_b8);
            int64_t rax_9;
            int64_t rdx_5;
            rax_9 = std::fs::copy::hed1bccf4751e7b50(&var_88, &var_40);
            int64_t var_50 = rax_9;
            int64_t var_48_1 = rdx_5;
            int64_t* var_60;
            int128_t var_38;
            
            if (!rax_9)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h36b83b7aa703e08b(&var_50);
                int64_t rax_12 = std::fs::set_permissions::hdbf67fe33a3ba539(&var_40, 0x1ff);
                var_b8 = rax_12;
                
                if (!rax_12)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
                    
                    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
                    {
                        var_50 = var_38;
                        var_60 = &var_50;
                        uint64_t (* var_58_3)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
                        var_b8 = &data_1ce6c80;
                        *var_b8[8] = 1;
                        *var_a0[8] = 0;
                        int64_t** var_a8_5 = &var_60;
                        var_a0 = 1;
                        int64_t rax_17 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6cc0);
                        var_88 = &data_45022a[0x15];
                        int64_t var_80_6 = 0xf;
                        char const* const var_78_6 = &data_45022a[0x15];
                        int64_t var_70_6 = 0xf;
                        int64_t var_68_6 = rax_17;
                        log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 3, &var_88);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_40);
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
                    
                    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
                    {
                        var_50 = var_38;
                        var_60 = &var_50;
                        uint64_t (* var_58_2)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
                        var_b8 = &data_1ce6c70;
                        *var_b8[8] = 1;
                        *var_a0[8] = 0;
                        int64_t** var_a8_4 = &var_60;
                        var_a0 = 1;
                        int64_t rax_14 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6cd8);
                        var_88 = &data_45022a[0x15];
                        int64_t var_80_5 = 0xf;
                        char const* const var_78_5 = &data_45022a[0x15];
                        int64_t var_70_5 = 0xf;
                        int64_t var_68_5 = rax_14;
                        log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 1, &var_88);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_40);
                }
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h36b83b7aa703e08b(&var_50);
                
                if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
                {
                    var_50 = var_38;
                    var_60 = &var_50;
                    uint64_t (* var_58_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
                    var_b8 = &data_1ce6c60;
                    *var_b8[8] = 1;
                    *var_a0[8] = 0;
                    int64_t** var_a8_3 = &var_60;
                    var_a0 = 1;
                    int64_t rax_11 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6cf0);
                    var_88 = &data_45022a[0x15];
                    int64_t var_80_4 = 0xf;
                    char const* const var_78_4 = &data_45022a[0x15];
                    int64_t var_70_4 = 0xf;
                    int64_t var_68_4 = rax_11;
                    log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 1, &var_88);
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_40);
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
            
            if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
            {
                var_b8 = &data_1ce6c50;
                *var_b8[8] = 1;
                int64_t var_a8_2 = 8;
                int128_t var_a0_2 = {0};
                int64_t rax_8 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6d08);
                var_88 = &data_45022a[0x15];
                int64_t var_80_3 = 0xf;
                char const* const var_78_3 = &data_45022a[0x15];
                int64_t var_70_3 = 0xf;
                int64_t var_68_3 = rax_8;
                log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 1, &var_88);
            }
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_b8);
        
        if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
        {
            var_b8 = &data_1ce6c40;
            *var_b8[8] = 1;
            int64_t var_a8_1 = 8;
            int128_t var_a0_1 = {0};
            int64_t rax_5 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6d20);
            var_88 = &data_45022a[0x15];
            int64_t var_80_2 = 0xf;
            char const* const var_78_2 = &data_45022a[0x15];
            int64_t var_70_2 = 0xf;
            int64_t var_68_2 = rax_5;
            log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 1, &var_88);
        }
    }
    
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_28);
}
