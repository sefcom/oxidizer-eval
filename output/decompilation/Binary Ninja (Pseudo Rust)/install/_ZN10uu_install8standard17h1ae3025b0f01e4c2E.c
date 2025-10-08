
  fn uu_install::standard::h1ae3025b0f01e4c2(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    let mut r15: i64 = arg1[2];
    let mut result: u64;
    let mut var_220: i128;
    let mut var_210: u64;
    let mut var_188: i128;
    
    if r15 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(&var_220, "missing file operandmissing dest…", 0x14);
        let var_178_1: u64 = var_210;
        var_188 = var_220;
        let var_170_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hae126c8da24cfb03(&var_188);
    }
    else
    {
        let r13_1: i8 = *arg2.byte_offset(0x66);
        let mut var_1d8: i128;
        let mut var_170: i32;
        
        if (r13_1 & r15 >= 3) == 0
        {
            let rbp_1: i64 = *arg2.byte_offset(0x30);
            let mut var_248: i128;
            let mut var_238_1: u64;
            let mut var_1f0: *mut i128;
            let mut var_178: u64;
            let mut var_168: i128;
            let mut rsi_2: i64;
            
            if -(rbp_1) != -0x8000000000000000
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(&var_188, *arg2.byte_offset(0x38), *arg2.byte_offset(0x40));
                var_238_1 = var_178;
                var_248 = var_188;
                rsi_2 = arg1[1];
                'label_4677c8:
                let mut var_1a0: ();
                core::iter::traits::iterator::Iterator::collect::h325c3cb57b76267a(&var_1a0, rsi_2);
                let var_190: i64;
                let mut result_1: u64;
                
                if *arg2.byte_offset(0x65) != 0
                {
                    let mut rdx_3: u64;
                    let mut rsi_6: *mut i8;
                    
                    if rbp_1 != -0x8000000000000000
                    {
                        rsi_6 = *var_248[8];
                        rdx_3 = var_238_1;
                        'label_46783f:
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_188, rsi_6, 
                            rdx_3);
                        var_220 = 0;
                        let rax_17: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h2c8134897838899f(*var_188[8], var_178, 
                            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2f, 
                                &var_220));
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hee1da1bf1377c72a(&var_188);
                        let mut rdx_5: u64 = rdx_3;
                        let mut rax_18: *mut i8 = rsi_6;
                        let mut rbp_3: i64 = rbp_1;
                        
                        if rax_17 != 0
                        {
                            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_188, rsi_6, 
                                rdx_3);
                            
                            if (var_188 & 1) != 0
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            rax_18 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hdbf734c8efac5f42(*var_188[8], var_178);
                        }
                        
                        std::fs::metadata::hd1e2f191d36a0fa4(&var_188, rax_18);
                        let r15_4: i32 = var_188;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_188);
                        
                        if r15_4 == 2
                        {
                            if *arg2.byte_offset(0x61) != 0
                            {
                                var_1f0 = nullptr;
                                let var_1e8_1: i64 = 1;
                                let var_1e0_1: u64 = 0;
                                let mut var_a8: i128;
                                std::path::Path::components::hd0346d362206f2e9(&var_a8, rax_18, 
                                    rdx_5);
                                let mut var_158: i64;
                                let var_78: i128;
                                var_158 = var_78;
                                let var_88: i128;
                                var_168 = var_88;
                                let var_98: i128;
                                var_178 = var_98;
                                var_188 = var_a8;
                                
                                loop
                                {
                                    let mut var_68: i8;
                                    _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h73ed8dd6f02f5cb4(&var_68, &var_188);
                                    
                                    if var_68 == 0xa
                                    {
                                        break;
                                    }
                                    
                                    std::path::PathBuf::push::h2d55bb206594316e(&var_1f0, 
                                        std::path::Component::as_os_str::hf9025a90ab753f63(
                                            &var_68));
                                    
                                    if std::path::Path::is_dir::h02edbc48c38d7d9e(var_1e8_1, 
                                        var_1e0_1) == 0
                                    {
                                        var_1d8 = 1;
                                        var_1d8 = var_1e8_1;
                                        let var_1c0_1: i8 = 1;
                                        let mut var_d0: *mut i128 = &var_1d8;
                                        let var_c8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                        var_220 = &data_502348;
                                        *var_220[8] = 2;
                                        let var_200_1: i64 = 0;
                                        var_210 = &var_d0;
                                        let var_208_1: i64 = 1;
                                        std::io::stdio::_print::h5e446ff973c02de6(&var_220);
                                    }
                                }
                                
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_1f0);
                                rbp_3 = rbp_1;
                            }
                            
                            let rax_24: *mut i128 =
                                std::fs::create_dir_all::hd557ad1207496242(rax_18);
                            var_1f0 = rax_24;
                            
                            if rax_24 != 0
                            {
                                var_1d8 = rax_24;
                                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_220, rax_18, rdx_5);
                                var_168 = var_210;
                                var_178 = var_220;
                                *var_188[8] = rax_24;
                                var_188 = 2;
                                result_1 =
                                    alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_188);
                                goto 'label_467efa;
                            }
                            
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb3cb1d78c02156cf(&var_1f0);
                        }
                        
                        if rbp_3 != -0x8000000000000000
                        {
                            std::fs::metadata::hd1e2f191d36a0fa4(&var_188, rsi_6);
                            let r15_7: i32 = var_188;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_188);
                            let mut rax_31: i8;
                            
                            if r15_7 != 2
                            {
                                rax_31 = std::path::Path::is_dir::h02edbc48c38d7d9e(rsi_6, rdx_3);
                            }
                            
                            if r15_7 == 2 || rax_31 == 0
                            {
                                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_220, rsi_6, rdx_3);
                                var_170 = var_210;
                                var_188 = var_220;
                                var_188 = 0xe;
                                result_1 =
                                    alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_188);
                                goto 'label_467efa;
                            }
                        }
                    }
                    else if var_190 <= 1
                    {
                        let r15_2: i64 = *var_248[8];
                        
                        if uu_install::is_potential_directory_path::h7ceb262fd8e27eff(r15_2, 
                            var_238_1) == 0
                        {
                            let mut rax_15: *mut i8;
                            rax_15 = std::path::Path::parent::hef287f60afa56900(r15_2, var_238_1);
                            
                            if rax_15 != 0
                            {
                                rsi_6 = rax_15;
                                goto 'label_46783f;
                            }
                        }
                    }
                }
                
                let var_198: *mut c_void;
                
                if var_190 <= 1
                {
                    if var_190 != 1
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    if std::path::Path::is_dir::h02edbc48c38d7d9e(*var_198.byte_offset(8), 
                        *var_198.byte_offset(0x10)) == 0
                    {
                        let r13_2: *mut i8 = *var_248[8];
                        let mut rbp_4: i32;
                        
                        if r13_1 != 0
                        {
                            std::fs::metadata::hd1e2f191d36a0fa4(&var_188, r13_2);
                            rbp_4 = var_188;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_188);
                        }
                        
                        if r13_1 != 0 && rbp_4 != 2
                        {
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0734b0984fa3fab3(&var_188, r13_2, var_238_1);
                            var_1d8 = var_188;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0734b0984fa3fab3(&var_220, *var_198.byte_offset(8), *var_198.byte_offset(0x10));
                            let var_158_2: u64 = var_210;
                            let var_168_2: i128 = var_220;
                            var_188 = var_1d8;
                            var_170 = var_178;
                            var_188 = 0xf;
                            result_1 = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_188);
                            goto 'label_467efa;
                        }
                        
                        if uu_install::is_potential_directory_path::h7ceb262fd8e27eff(r13_2, 
                            var_238_1) != 0
                        {
                            result_1 = uu_install::copy_files_into_dir::h5c95c64ab3c0a1be(var_198, 
                                1, r13_2, var_238_1, arg2);
                            goto 'label_467efa;
                        }
                        
                        let rax_33: i8 =
                            std::path::Path::is_file::h6e28d87ff76ffc41(r13_2, var_238_1);
                        let mut rax_34: i8;
                        
                        if rax_33 == 0
                        {
                            rax_34 =
                                uu_install::is_new_file_path::h9334458914048442(r13_2, var_238_1);
                        }
                        
                        if rax_33 == 0 && rax_34 == 0
                        {
                            var_170 = var_238_1;
                            var_188 = var_248;
                            var_188 = 5;
                            result = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_188);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hfe8a0e72f8f4f348(&var_1a0);
                        }
                        else
                        {
                            let mut result_2: u64;
                            let mut rdx_17: *mut *mut c_void;
                            result_2 = uu_install::copy::h306162d3f0e5e6d2(*var_198.byte_offset(8), 
                                *var_198.byte_offset(0x10), r13_2, var_238_1, arg2);
                            result = result_2;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hfe8a0e72f8f4f348(&var_1a0);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(
                                &var_248);
                        }
                    }
                    else
                    {
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0734b0984fa3fab3(&var_220, *var_198.byte_offset(8), *var_198.byte_offset(0x10));
                        var_170 = var_210;
                        var_188 = var_220;
                        var_188 = 0xd;
                        result_1 = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_188);
                        'label_467efa:
                        result = result_1;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hfe8a0e72f8f4f348(&var_1a0);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(
                            &var_248);
                    }
                }
                else
                {
                    result = uu_install::copy_files_into_dir::h5c95c64ab3c0a1be(var_198, var_190, 
                        *var_248[8], var_238_1, arg2);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hfe8a0e72f8f4f348(&var_1a0);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_248);
                }
            }
            else
            {
                r15 -= 1;
                arg1[2] = r15;
                rsi_2 = arg1[1];
                let rcx_1: i64 = r15 * 3;
                let rax_8: i64 = *(rsi_2 + (rcx_1 << 3));
                
                if rax_8 == -0x8000000000000000
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                var_220 = *(rsi_2 + (rcx_1 << 3)).byte_offset(8);
                var_220 = rax_8;
                
                if r15 != 0
                {
                    var_238_1 = var_210;
                    var_248 = var_220;
                    *var_248[8] = *var_220[8];
                    goto 'label_4677c8;
                }
                
                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_188, *var_220[8], var_210);
                
                if (var_188 & 1) != 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                var_1d8 = *var_188[8];
                *var_1d8[8] = var_178;
                var_1f0 = &var_1d8;
                let var_1e8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb0c432d6311a3dda;
                var_188 = &data_502328;
                *var_188[8] = 2;
                var_168 = 0;
                let var_178_2: *mut *mut i128 = &var_1f0;
                var_170 = 1;
                let mut var_c0: i128;
                core::option::Option$LT$T$GT$::map_or_else::hf9ae0c5a9ad5f899(&var_c0, &var_188);
                let var_170_2: i32 = 1;
                var_188 = var_c0;
                let var_b0: i64;
                let var_178_3: i64 = var_b0;
                result = alloc::boxed::Box$LT$T$GT$::new::hae126c8da24cfb03(&var_188);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_220);
            }
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_1d8, arg1[1] + 0x30);
            uucore::format_usage::he053403a896311ed(&var_220, "{} [OPTION]... [FILE]...compare …", 
                0x18);
            let var_1c8: i64;
            var_170 = var_1c8;
            var_188 = var_1d8;
            let var_168_1: i128 = var_220;
            let var_158_1: u64 = var_210;
            var_188 = 0x11;
            result = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_188);
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2a0498192df60b94(
        arg1);
    result
}
