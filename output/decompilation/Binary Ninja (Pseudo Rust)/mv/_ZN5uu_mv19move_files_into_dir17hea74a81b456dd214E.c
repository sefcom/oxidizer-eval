
  fn uu_mv::move_files_into_dir::hea74a81b456dd214(arg1: i64, arg2: i64, arg3: *mut i8, arg4: u64, arg5: *mut c_void) -> *mut i128

{
    let mut var_178: *mut *mut c_void;
    std::thread::local::LocalKey$LT$T$GT$::try_with::ha3d0a2de6b6a2a9f(&var_178);
    let mut rax: i64;
    let mut rdx: i64;
    rax = core::result::Result$LT$T$C$E$GT$::expect::hf1b80da9ba1f81f4(&var_178);
    let mut var_88: ();
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hdc874b6797fedd23(&var_88, 
        arg2, rax, rdx);
    let mut var_2d0: i128;
    let mut var_2c0: *mut i64;
    let mut var_228: *mut *mut i128;
    
    if std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4) == 0
    {
        var_228 = 1;
        let var_220_1: *mut i8 = arg3;
        let var_218_1: u64 = arg4;
        let var_210_1: i8 = 1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(&var_2d0, 
            &var_228);
        let var_160_1: *mut i64 = var_2c0;
        let var_170_1: i128 = var_2d0;
        var_178 = 7;
        let result: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h0e8b01bf032e1a6a(&var_178);
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h3a17ce3d5c845dcb(&var_88);
        return result;
    }
    
    std::fs::canonicalize::hde632c5d9c152691(&var_178, arg3);
    let mut var_198: i128;
    let mut var_188: i64;
    let mut var_170: i128;
    
    if var_178 != -0x8000000000000000
    {
        var_188 = *var_170[8];
        var_198 = var_178;
    }
    else
    {
        uu_mv::move_files_into_dir::_$u7b$$u7b$closure$u7d$$u7d$::he4f083fce89ebeff(&var_198, arg3, 
            arg4, var_170);
    }
    
    let mut var_2e8: *mut i64;
    let mut var_278: i64;
    
    if *arg5.byte_offset(0x33) == 0
    {
        var_2e8 = nullptr;
        var_278 = 0;
    }
    else
    {
        var_2e8 = core::ops::function::FnOnce::call_once::hbf1b5780df2247c4();
        
        if arg2 <= 1
        {
            var_278 = 0;
        }
        else
        {
            indicatif::progress_bar::ProgressBar::new::h3f65a405722ce42a(&var_2d0, arg2);
            indicatif::style::ProgressStyle::with_template::hadd9cefcdac397a1(&var_178);
            core::result::Result$LT$T$C$E$GT$::unwrap::h7d26c333f6a83544(&var_228, &var_178);
            indicatif::progress_bar::ProgressBar::with_style::hfb345490eb32754b(&var_178, &var_2d0, 
                &var_228);
            indicatif::multi::MultiProgress::add::h9f882db003b558ae(&var_228, &var_2e8, &var_178);
            var_278 = var_228;
            let var_218: i64;
            let var_268_1: i64 = var_218;
        }
    }
    
    let mut var_a8: i64 = arg1;
    let var_a0_1: i64 = arg1 + arg2 * 0x18;
    let i_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68171754d1dad8d6(&var_a8);
    
    if i_2 != 0
    {
        let mut i_1: *mut c_void = i_2;
        let rax_13: i8 = *arg5.byte_offset(0x36);
        let mut i: *mut c_void;
        
        do
        {
            let r15_1: *mut c_void = *i_1.byte_offset(8);
            let r14_1: size_t = *i_1.byte_offset(0x10);
            std::fs::metadata::h1d9ddf5324749f9a(&var_178, r15_1);
            let mut var_300: *mut i128;
            let mut var_210: i8;
            
            if var_178 != 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_178);
                
                if var_278 != 0
                {
                    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_178, 
                        r15_1, r14_1);
                    _$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&var_228, var_170, *var_170[8]);
                    indicatif::progress_bar::ProgressBar::set_message::h77492990969b1322(&var_278, 
                        &var_228);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hee6ae0c580e79f89(&var_178);
                }
                
                let mut rax_16: i64;
                let mut rdx_12: i64;
                rax_16 = std::path::Path::file_name::h79ecbb7850a9c7f3(r15_1, r14_1);
                
                if rax_16 == 0
                {
                    var_228 = 1;
                    let var_220_6: *mut c_void = r15_1;
                    let var_218_6: size_t = r14_1;
                    var_210 = 1;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                        &var_2d0, &var_228);
                    let var_160_5: *mut i64 = var_2c0;
                    var_170 = var_2d0;
                    var_178 = nullptr;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    let mut rax_23: *mut i128;
                    let mut rdx_15: i64;
                    rax_23 = uucore::util_name::h60d842bf27b05e82();
                    var_300 = rax_23;
                    let var_2f8_3: i64 = rdx_15;
                    var_2d0 = &var_300;
                    *var_2d0[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                    var_2c0 = &var_178;
                    let var_2b8_2: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::h51bb9d950ecc6a52;
                    var_228 = &data_5880d0;
                    let var_220_7: i64 = 3;
                    let var_208_2: i64 = 0;
                    let var_218_7: *mut i128 = &var_2d0;
                    var_210 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_228);
                    core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hb0f2c59e69cfedd9(
                        &var_178);
                }
                else
                {
                    let mut var_258: ();
                    std::path::Path::join::h3b80008b40549e98(&var_258, arg3, arg4, rax_16);
                    let var_250: i128;
                    
                    if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h5c44f985d977b358(
                        &var_88, &var_258) == 0 || rax_13 == 2
                    {
                        let mut var_240: u64;
                        std::fs::canonicalize::hde632c5d9c152691(&var_240, r15_1);
                        let mut var_290: *mut *mut c_void;
                        
                        if var_240 != -0x8000000000000000
                        {
                            let mut var_c8: i128 = var_240;
                            let var_230: i64;
                            let var_b8_1: i64 = var_230;
                            
                            if _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(*var_c8[8], var_230, *var_198[8], var_188) == 0
                            {
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&var_c8);
                                
                                if var_240 == -0x8000000000000000
                                {
                                    goto 'label_4ea624;
                                }
                                
                                goto 'label_4ea639;
                            }
                            
                            let mut var_98: *mut c_void = r15_1;
                            let var_90_1: size_t = r14_1;
                            uucore::features::fs::normalize_path::hf9d1827f61a753a1(&var_290, arg3);
                            let var_288: i128;
                            let mut var_40: i128 = var_288;
                            std::path::Path::components::h4f3217acf0fc8653(&var_178, *var_198[8], 
                                var_188);
                            var_228 = 0xa;
                            core::iter::traits::iterator::Iterator::fold::h37e4f9fde7d2dd93(
                                &var_2d0, &var_178, &var_228);
                            core::option::Option$LT$T$GT$::map_or_else::ha11fb6aa50fc66bf(&var_300, 
                                &var_2d0, arg3);
                            var_178 = &var_98;
                            var_170 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            *var_170[8] = &var_40;
                            let mut var_160_6: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            let var_158_3: *mut *mut i128 = &var_300;
                            let var_150_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_228 = &data_588130;
                            let var_220_8: i64 = 4;
                            let var_208_3: i64 = 0;
                            let var_218_8: *mut *mut *mut c_void = &var_178;
                            var_210 = 3;
                            core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_2d0, 
                                &var_228);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&var_300);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                                &var_290);
                            *var_170[8] = var_2c0;
                            var_178 = var_2d0;
                            var_160_6 = 1;
                            let rax_28: *mut i128 =
                                alloc::boxed::Box$LT$T$GT$::new::hb29f62ded121125b(&var_178);
                            var_300 = rax_28;
                            let var_2f8_4: *mut i64 = &data_587f60;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_28));
                            let mut rax_30: i64;
                            let mut rdx_25: i64;
                            rax_30 = uucore::util_name::h60d842bf27b05e82();
                            var_2d0 = rax_30;
                            *var_2d0[8] = rdx_25;
                            var_228 = &var_2d0;
                            let var_220_9: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                            let var_218_9: *mut *mut i128 = &var_300;
                            var_210 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7a0d8bad1d3a886c;
                            var_178 = &data_5880d0;
                            var_170 = 3;
                            let var_158_4: i64 = 0;
                            *var_170[8] = &var_228;
                            let var_160_7: i64 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::ha3c2118ebdfb1144(var_300, var_2f8_4);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                                &var_c8);
                            
                            if var_240 == -0x8000000000000000
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h57ad1af1f1c9aa26(&var_240);
                            }
                            
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                                &var_258);
                        }
                        else
                        {
                            'label_4ea624:
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h57ad1af1f1c9aa26(&var_240);
                            'label_4ea639:
                            let mut r9_1: *mut i64 = var_2e8;
                            
                            if r9_1 != 0
                            {
                                r9_1 = &var_2e8;
                            }
                            
                            let mut rax_24: *mut *mut c_void;
                            let mut rdx_18: i64;
                            rax_24 = uu_mv::rename::hfc95a4bd2fcddeec(r15_1, r14_1, var_250, 
                                *var_250[8], arg5, r9_1);
                            var_290 = rax_24;
                            
                            if rax_24 != 0
                            {
                                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h23e5007a1b44b441(&var_178, &var_290, rdx_18);
                                
                                if *var_170[8] == 0
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&var_178);
                                    var_178 = var_290;
                                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbb55e5b4020a58ba(&var_178);
                                }
                                else
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&var_178);
                                    let rax_25: *mut i128 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc501c0ef7d3cfc3f(var_290, i_1, &var_258);
                                    
                                    if var_2e8 == 0
                                    {
                                        var_300 = rax_25;
                                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                                        let mut rax_32: i64;
                                        let mut rdx_26: i64;
                                        rax_32 = uucore::util_name::h60d842bf27b05e82();
                                        var_2d0 = rax_32;
                                        *var_2d0[8] = rdx_26;
                                        var_228 = &var_2d0;
                                        let var_220_10: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                                        let var_218_10: *mut *mut i128 = &var_300;
                                        var_210 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d9a93934d3f4680;
                                        var_178 = &data_5880d0;
                                        var_170 = 3;
                                        let var_158_5: i64 = 0;
                                        *var_170[8] = &var_228;
                                        let var_160_8: i64 = 2;
                                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hd70df9f725f15388(var_300);
                                    }
                                    else
                                    {
                                        indicatif::multi::MultiProgress::suspend::hfe9402cb2a1cce7f(
                                            &var_2e8, rax_25);
                                    }
                                }
                            }
                            
                            if var_278 != 0
                            {
                                indicatif::progress_bar::ProgressBar::inc::he12f7743cfc9ae04(
                                    &var_278, 1);
                            }
                            
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h1e71081e8e91d8e8(&var_178, &var_258);
                            let var_218_11: i64 = *var_170[8];
                            var_228 = var_178;
                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h663343a02dd1e8c9(
                                &var_88, &var_228);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                                &var_258);
                        }
                    }
                    else
                    {
                        var_300 = var_250;
                        var_2d0 = r15_1;
                        *var_2d0[8] = r14_1;
                        var_228 = &var_300;
                        let var_220_4: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        let var_218_4: *mut i128 = &var_2d0;
                        var_210 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        var_178 = &data_588100;
                        var_170 = 3;
                        let var_158_1: i64 = 0;
                        *var_170[8] = &var_228;
                        let mut var_160_3: i64 = 2;
                        let mut var_58: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_58, 
                            &var_178);
                        var_160_3 = 1;
                        var_178 = var_58;
                        let var_48: i64;
                        *var_170[8] = var_48;
                        let rax_19: *mut i128 =
                            alloc::boxed::Box$LT$T$GT$::new::hb29f62ded121125b(&var_178);
                        var_300 = rax_19;
                        let var_2f8_2: *mut i64 = &data_587f60;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_19));
                        let mut rax_21: i64;
                        let mut rdx_14: i64;
                        rax_21 = uucore::util_name::h60d842bf27b05e82();
                        var_2d0 = rax_21;
                        *var_2d0[8] = rdx_14;
                        var_228 = &var_2d0;
                        let var_220_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                        let var_218_5: *mut *mut i128 = &var_300;
                        var_210 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7a0d8bad1d3a886c;
                        var_178 = &data_5880d0;
                        var_170 = 3;
                        let var_158_2: i64 = 0;
                        *var_170[8] = &var_228;
                        let var_160_4: i64 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::ha3c2118ebdfb1144(var_300, var_2f8_2);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                            &var_258);
                    }
                }
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_178);
                var_228 = 1;
                let var_220_2: *mut c_void = r15_1;
                let var_218_2: size_t = r14_1;
                var_210 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h29e878758f75f5ed(
                    &var_2d0, &var_228);
                let var_160_2: *mut i64 = var_2c0;
                var_170 = var_2d0;
                var_178 = nullptr;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                let mut rax_15: *mut i128;
                let mut rdx_9: i64;
                rax_15 = uucore::util_name::h60d842bf27b05e82();
                var_300 = rax_15;
                let var_2f8_1: i64 = rdx_9;
                var_2d0 = &var_300;
                *var_2d0[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                var_2c0 = &var_178;
                let var_2b8_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::h51bb9d950ecc6a52;
                var_228 = &data_5880d0;
                let var_220_3: i64 = 3;
                let var_208_1: i64 = 0;
                let var_218_3: *mut i128 = &var_2d0;
                var_210 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_228);
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hb0f2c59e69cfedd9(&var_178);
            }
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68171754d1dad8d6(&var_a8);
            i_1 = i;
        } while i != 0;
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h4962931619fca08b(&var_278);
    core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..multi..MultiProgress$GT$$GT$::ha439cdb5b0953c56(&var_2e8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&var_198);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h3a17ce3d5c845dcb(&var_88);
    nullptr
}
