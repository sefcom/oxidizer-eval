
  void* uu_mv::rename_dir_fallback::h020a561b2c304e40(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t* arg5)

{
    int32_t var_1a0;
    std::fs::metadata::h12bb7891128f5212(&var_1a0, arg3);
    int32_t r13 = var_1a0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&var_1a0);
    void* result_1;
    void* result;
    
    if (r13 != 2)
    {
        result_1 = std::fs::remove_dir_all::h4dafc3aa331c121d(arg3);
        result = result_1;
    }
    
    if (r13 == 2 || !result_1)
    {
        int64_t var_200 = 0xfa00;
        int32_t var_1f0_1 = 0x10000;
        int64_t var_1f8_1 = 0;
        int64_t rbp_1 = arg2;
        fs_extra::dir::get_size::hd67999eb2328e755(&var_1a0, arg1);
        int64_t var_248;
        int64_t var_230;
        int64_t var_198;
        int128_t var_d8;
        
        if (!(0 + -(var_1a0)))
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$fs_extra..error..Error$GT$$GT$::heb9e2e8befbfc09d(&var_1a0);
            var_248 = 0;
        }
        else if (!arg5)
            var_248 = 0;
        else
        {
            indicatif::style::ProgressStyle::with_template::h894553d49f3431cc(&var_1a0, 
                "{msg}: [{elapsed_precise}] {wide…", 0x40);
            core::result::Result$LT$T$C$E$GT$::unwrap::h5857c2b3993b5cd1(&var_d8, &var_1a0);
            indicatif::progress_bar::ProgressBar::new::h418645bcba389941(&var_230, var_198);
            memcpy(&var_1a0, &var_d8, 0x88);
            void var_48;
            indicatif::multi::MultiProgress::add::h73b460dac8bde2c8(&var_248, arg5, &var_48, 
                indicatif::progress_bar::ProgressBar::with_style::hca9219836070d110(&var_48, 
                    &var_230, &var_1a0));
            rbp_1 = arg2;
        }
        
        uucore::features::fsxattr::retrieve_xattrs::h91101786feeb0ab4(&var_1a0, arg1);
        int128_t var_1d8;
        int128_t var_190;
        int128_t var_180;
        
        if (!var_1a0)
            uu_mv::rename_dir_fallback::_$u7b$$u7b$closure$u7d$$u7d$::h7404bb051f47ff39(&var_1d8, 
                var_198);
        else
        {
            int128_t var_1b8_1 = var_180;
            int128_t var_1c8_1 = var_190;
            var_1d8 = var_1a0;
        }
        
        if (!var_248)
            fs_extra::dir::move_dir::h2b0d405202f70d94(&var_230, arg1, rbp_1, arg3, arg4, &var_200);
        else
        {
            int64_t* var_258_1 = &var_248;
            fs_extra::dir::move_dir_with_progress::h2fbb281b0a0058fc(&var_230, arg1, rbp_1, arg3, 
                arg4, &var_200);
        }
        
        void* result_2 =
            uucore::features::fsxattr::apply_xattrs::h3c4d8e00e28b6930(arg3, arg4, &var_1d8);
        result = result_2;
        
        if (result_2)
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$fs_extra..error..Error$GT$$GT$::heb9e2e8befbfc09d(&var_230);
        else if (var_230 != -0x8000000000000000)
        {
            int128_t var_210;
            int128_t var_b8_1 = var_210;
            var_d8 = var_230;
            int128_t var_220;
            void* result_3;
            
            if (*var_220[8] != -0x7fffffffffffffff)
            {
                int128_t* var_1e8 = &var_d8;
                int64_t (* var_1e0_1)(int64_t arg1, int64_t* arg2) = _$LT$fs_extra..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::hf6ebd0cbf729a667;
                var_1a0 = &data_41fc00;
                int64_t var_198_1 = 1;
                var_180 = 0;
                var_190 = &var_1e8;
                *var_190[8] = 1;
                void var_f0;
                core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_f0, &var_1a0);
                result_3 = std::io::error::Error::new::ha2b5f63706640a17(0x28, &var_f0);
            }
            else
                result_3 = std::io::error::Error::new::h31653b416e5e1c98(1, 
                    "Permission deniedinter-device mo…", 0x11);
            
            result = result_3;
            core::ptr::drop_in_place$LT$fs_extra..error..Error$GT$::hd77cbc2a5fc6718a(&var_d8);
        }
        else
            result = nullptr;
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h1e5753e0444693da(&var_248);
    }
    
    return result;
}
