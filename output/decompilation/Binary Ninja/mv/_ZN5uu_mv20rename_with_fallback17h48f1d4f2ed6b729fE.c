
  void** uu_mv::rename_with_fallback::h48f1d4f2ed6b729f(int64_t arg1, int64_t arg2, char* arg3, uint64_t arg4, int64_t* arg5)

{
    int64_t var_218 = arg1;
    int64_t var_210 = arg2;
    char* var_208 = arg3;
    uint64_t var_200 = arg4;
    void* rax = std::fs::rename::hd948dfb1db41879e(arg1, arg2, arg3);
    void* const var_1e8 = rax;
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h5e1e22b88b1aa83a(&var_1e8);
    
    if (rax)
    {
        std::fs::symlink_metadata::h7febb2c461a7cc90(&var_1e8, arg1);
        void** var_1e0;
        
        if (var_1e8 == 2)
            return var_1e0;
        
        int32_t var_1b0;
        int32_t rax_2 = var_1b0 & 0xf000;
        void** rbp_1;
        
        if (rax_2 == 0x4000)
        {
            std::fs::metadata::h1d9ddf5324749f9a(&var_1e8, arg3);
            int32_t rbp_2 = var_1e8;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_1e8);
            void** rax_4;
            
            if (rbp_2 != 2)
            {
                rax_4 = std::fs::remove_dir_all::heb08d5b595e80c8a(arg3);
                rbp_1 = rax_4;
            }
            
            if (rbp_2 != 2 && rax_4)
                return rbp_1;
            
            int32_t var_220_1 = 0x10000;
            int64_t var_230 = 0xfa00;
            int64_t var_228_1 = 0;
            fs_extra::dir::get_size::hbbe91904dfa02d0c(&var_1e8, arg1);
            int64_t var_278;
            int64_t var_260;
            int128_t var_b8;
            
            if (var_1e8 != -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$fs_extra..error..Error$GT$$GT$::hff1e9b61bee0c0a4(&var_1e8);
                var_278 = 0;
            }
            else if (!arg5)
                var_278 = 0;
            else
            {
                indicatif::progress_bar::ProgressBar::new::h3f65a405722ce42a(&var_260, var_1e0);
                indicatif::style::ProgressStyle::with_template::hadd9cefcdac397a1(&var_1e8);
                core::result::Result$LT$T$C$E$GT$::unwrap::h7d26c333f6a83544(&var_b8, &var_1e8);
                void var_e8;
                indicatif::progress_bar::ProgressBar::with_style::hfb345490eb32754b(&var_e8, 
                    &var_260, &var_b8);
                indicatif::multi::MultiProgress::add::h9f882db003b558ae(&var_278, arg5, &var_e8);
            }
            
            uucore::features::fsxattr::retrieve_xattrs::h93bd4c6665c83aa3(&var_1e8, arg1);
            int128_t var_138;
            int128_t var_128;
            int128_t var_118;
            
            if (!var_1e8)
                uu_mv::rename_with_fallback::_$u7b$$u7b$closure$u7d$$u7d$::h82d99eba55661758(
                    &var_138, var_1e0);
            else
            {
                int128_t var_1c8;
                var_118 = var_1c8;
                int128_t var_1d8;
                var_128 = var_1d8;
                var_138 = var_1e8;
            }
            
            if (!var_278)
                fs_extra::dir::move_dir::h895849f132645a29(&var_260, arg1, arg2, arg3, arg4, 
                    &var_230);
            else
            {
                int64_t* var_288_1 = &var_278;
                fs_extra::dir::move_dir_with_progress::hc90f1a00a6c1a6fa(&var_260, arg1, arg2, 
                    arg3, arg4, &var_230);
            }
            
            int128_t var_1c8_1 = var_118;
            int128_t var_1d8_1 = var_128;
            var_1e8 = var_138;
            core::result::Result$LT$T$C$E$GT$::unwrap::h925beb8dbedc658c(
                uucore::features::fsxattr::apply_xattrs::h5a1614cc87ee2729(arg3, arg4, &var_1e8));
            
            if (var_260 != -0x8000000000000000)
            {
                int128_t var_240;
                int128_t var_98_1 = var_240;
                var_b8 = var_260;
                int128_t var_250;
                void** rax_12;
                
                if (*var_250[8] != -0x7fffffffffffffff)
                {
                    int128_t* var_1f8 = &var_b8;
                    int64_t* (* var_1f0_1)(int64_t arg1, void* arg2) = _$LT$fs_extra..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::hd11c1069b969729b;
                    var_1e8 = &data_41c350;
                    int64_t var_1e0_1 = 1;
                    var_1c8_1 = 0;
                    var_1d8_1 = &var_1f8;
                    *var_1d8_1[8] = 1;
                    void var_d0;
                    core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_d0, 
                        &var_1e8);
                    rax_12 = std::io::error::Error::new::h3b474d96466fa494(0x27, &var_d0);
                }
                else
                    rax_12 = std::io::error::Error::new::h0657970bda442b78(1, 
                        "Permission deniedinter-device mo…", 0x11);
                
                core::ptr::drop_in_place$LT$fs_extra..error..Error$GT$::hd05771686690bc86(&var_b8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h4962931619fca08b(&var_278);
                return rax_12;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$fs_extra..error..Error$GT$$GT$::hff1e9b61bee0c0a4(&var_260);
            core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h4962931619fca08b(&var_278);
        }
        else
        {
            void** rax_3;
            
            if (rax_2 != 0xa000)
            {
                if (std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4))
                {
                    int64_t rax_6 = std::fs::remove_file::hac48d4e29d9c97ea(arg3);
                    char* var_108 = arg3;
                    uint64_t var_100_1 = arg4;
                    int64_t var_f8_1 = arg1;
                    int64_t var_f0_1 = arg2;
                    
                    if (rax_6)
                        return uu_mv::rename_with_fallback::_$u7b$$u7b$closure$u7d$$u7d$::hc604898f20a204e8(&var_108, rax_6);
                }
                
                int64_t rax_8;
                void** rdx_9;
                rax_8 = std::fs::copy::h1bd7b955a3942b36(arg1, arg2, arg3);
                
                if (!rax_8)
                {
                    rbp_1 = uucore::features::fsxattr::copy_xattrs::hdfb623434415deaf(&var_218, 
                        &var_208);
                    
                    if (rbp_1)
                        return rbp_1;
                }
                else if (rdx_9)
                    return rdx_9;
                
                rax_3 = std::fs::remove_file::hac48d4e29d9c97ea(arg1);
            }
            else
                rax_3 = uu_mv::rename_symlink_fallback::h50f184778666e82c(arg1, arg2, arg3);
            
            if (rax_3)
                return rax_3;
        }
    }
    
    return nullptr;
}
