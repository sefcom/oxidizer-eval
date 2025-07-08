
  fn uu_mv::rename_with_fallback::h48f1d4f2ed6b729f(arg1: i64, arg2: i64, arg3: *mut i8, arg4: u64, arg5: *mut i64) -> *mut *mut c_void

{
    let mut var_218: i64 = arg1;
    let var_210: i64 = arg2;
    let mut var_208: *mut i8 = arg3;
    let var_200: u64 = arg4;
    let rax: *mut c_void = std::fs::rename::hd948dfb1db41879e(arg1, arg2, arg3);
    let mut var_1e8: *mut c_void = rax;
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h5e1e22b88b1aa83a(&var_1e8);
    
    if rax != 0
    {
        std::fs::symlink_metadata::h7febb2c461a7cc90(&var_1e8, arg1);
        let var_1e0: *mut *mut c_void;
        
        if var_1e8 == 2
        {
            return var_1e0;
        }
        
        let var_1b0: i32;
        let rax_2: i32 = var_1b0 & 0xf000;
        let mut rbp_1: *mut *mut c_void;
        
        if rax_2 == 0x4000
        {
            std::fs::metadata::h1d9ddf5324749f9a(&var_1e8, arg3);
            let rbp_2: i32 = var_1e8;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_1e8);
            let mut rax_4: *mut *mut c_void;
            
            if rbp_2 != 2
            {
                rax_4 = std::fs::remove_dir_all::heb08d5b595e80c8a(arg3);
                rbp_1 = rax_4;
            }
            
            if rbp_2 != 2 && rax_4 != 0
            {
                return rbp_1;
            }
            
            let var_220_1: i32 = 0x10000;
            let mut var_230: i64 = 0xfa00;
            let var_228_1: i64 = 0;
            fs_extra::dir::get_size::hbbe91904dfa02d0c(&var_1e8, arg1);
            let mut var_278: i64;
            let mut var_260: i64;
            let mut var_b8: i128;
            
            if var_1e8 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$fs_extra..error..Error$GT$$GT$::hff1e9b61bee0c0a4(&var_1e8);
                var_278 = 0;
            }
            else if arg5 == 0
            {
                var_278 = 0;
            }
            else
            {
                indicatif::progress_bar::ProgressBar::new::h3f65a405722ce42a(&var_260, var_1e0);
                indicatif::style::ProgressStyle::with_template::hadd9cefcdac397a1(&var_1e8);
                core::result::Result$LT$T$C$E$GT$::unwrap::h7d26c333f6a83544(&var_b8, &var_1e8);
                let mut var_e8: ();
                indicatif::progress_bar::ProgressBar::with_style::hfb345490eb32754b(&var_e8, 
                    &var_260, &var_b8);
                indicatif::multi::MultiProgress::add::h9f882db003b558ae(&var_278, arg5, &var_e8);
            }
            
            uucore::features::fsxattr::retrieve_xattrs::h93bd4c6665c83aa3(&var_1e8, arg1);
            let mut var_138: i128;
            let mut var_128: i128;
            let mut var_118: i128;
            
            if var_1e8 == 0
            {
                uu_mv::rename_with_fallback::_$u7b$$u7b$closure$u7d$$u7d$::h82d99eba55661758(
                    &var_138, var_1e0);
            }
            else
            {
                let var_1c8: i128;
                var_118 = var_1c8;
                let var_1d8: i128;
                var_128 = var_1d8;
                var_138 = var_1e8;
            }
            
            if var_278 == 0
            {
                fs_extra::dir::move_dir::h895849f132645a29(&var_260, arg1, arg2, arg3, arg4, 
                    &var_230);
            }
            else
            {
                let var_288_1: *mut i64 = &var_278;
                fs_extra::dir::move_dir_with_progress::hc90f1a00a6c1a6fa(&var_260, arg1, arg2, 
                    arg3, arg4, &var_230);
            }
            
            let mut var_1c8_1: i128 = var_118;
            let mut var_1d8_1: i128 = var_128;
            var_1e8 = var_138;
            core::result::Result$LT$T$C$E$GT$::unwrap::h925beb8dbedc658c(
                uucore::features::fsxattr::apply_xattrs::h5a1614cc87ee2729(arg3, arg4, &var_1e8));
            
            if var_260 != -0x8000000000000000
            {
                let var_240: i128;
                let var_98_1: i128 = var_240;
                var_b8 = var_260;
                let var_250: i128;
                let mut rax_12: *mut *mut c_void;
                
                if *var_250[8] != -0x7fffffffffffffff
                {
                    let mut var_1f8: *mut i128 = &var_b8;
                    let var_1f0_1: fn(arg1: i64, arg2: *mut c_void) -> *mut i64 = _$LT$fs_extra..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::hd11c1069b969729b;
                    var_1e8 = &data_41c350;
                    let var_1e0_1: i64 = 1;
                    var_1c8_1 = 0;
                    var_1d8_1 = &var_1f8;
                    *var_1d8_1[8] = 1;
                    let mut var_d0: ();
                    core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_d0, 
                        &var_1e8);
                    rax_12 = std::io::error::Error::new::h3b474d96466fa494(0x27, &var_d0);
                }
                else
                {
                    rax_12 = std::io::error::Error::new::h0657970bda442b78(1, 
                        "Permission deniedinter-device mo…", 0x11);
                }
                
                core::ptr::drop_in_place$LT$fs_extra..error..Error$GT$::hd05771686690bc86(&var_b8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h4962931619fca08b(&var_278);
                return rax_12;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$fs_extra..error..Error$GT$$GT$::hff1e9b61bee0c0a4(&var_260);
            core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h4962931619fca08b(&var_278);
        }
        else
        {
            let mut rax_3: *mut *mut c_void;
            
            if rax_2 != 0xa000
            {
                if std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4) != 0
                {
                    let rax_6: i64 = std::fs::remove_file::hac48d4e29d9c97ea(arg3);
                    let mut var_108: *mut i8 = arg3;
                    let var_100_1: u64 = arg4;
                    let var_f8_1: i64 = arg1;
                    let var_f0_1: i64 = arg2;
                    
                    if rax_6 != 0
                    {
                        return uu_mv::rename_with_fallback::_$u7b$$u7b$closure$u7d$$u7d$::hc604898f20a204e8(&var_108, rax_6);
                    }
                }
                
                let mut rax_8: i64;
                let mut rdx_9: *mut *mut c_void;
                rax_8 = std::fs::copy::h1bd7b955a3942b36(arg1, arg2, arg3);
                
                if rax_8 == 0
                {
                    rbp_1 = uucore::features::fsxattr::copy_xattrs::hdfb623434415deaf(&var_218, 
                        &var_208);
                    
                    if rbp_1 != 0
                    {
                        return rbp_1;
                    }
                }
                else if rdx_9 != 0
                {
                    return rdx_9;
                }
                
                rax_3 = std::fs::remove_file::hac48d4e29d9c97ea(arg1);
            }
            else
            {
                rax_3 = uu_mv::rename_symlink_fallback::h50f184778666e82c(arg1, arg2, arg3);
            }
            
            if rax_3 != 0
            {
                return rax_3;
            }
        }
    }
    
    nullptr
}
