
  fn uu_rm::handle_dir::h040a6908c8ea150b(arg1: i64, arg2: i64, arg3: *mut c_void) -> u64

{
    let mut var_1d8: *mut c_void;
    std::path::Path::components::h4f3217acf0fc8653(&var_1d8, arg1, arg2);
    let mut var_1c8: i8;
    let var_19e: i8;
    let mut rax_1: u64;
    
    if var_19e == 0
    {
        rax_1 = var_1c8 - 5;
    }
    
    let mut rbp: u64;
    let mut var_228: *mut i64;
    let mut var_128: *mut i64;
    let mut rcx_1: bool;
    
    if var_19e != 0 || rax_1 >= 2
    {
        let mut rdx: i64;
        rax_1 = std::path::Path::parent::h65c9a340a6266f2d(arg1, arg2);
        rcx_1 = rax_1 == 0;
        
        if *arg3.byte_offset(3) != 0
        {
            if rax_1 != 0 || *arg3.byte_offset(2) == 0
            {
                goto 'label_4b7273;
            }
            
            rax_1 = 0;
            rcx_1 = true;
            
            if *arg3.byte_offset(4) != 0
            {
                goto 'label_4b73f5;
            }
            
            goto 'label_4b7405;
        }
        
        rax_1 = 1;
        
        if *arg3.byte_offset(4) == 0
        {
            'label_4b7405:
            let mut rax_8: *mut *mut c_void;
            
            if rax_1 == 0
            {
                let mut rax_9: *mut i64;
                let mut rdx_3: i64;
                rax_9 = uucore::util_name::h60d842bf27b05e82();
                var_228 = rax_9;
                let var_220_5: i64 = rdx_3;
                var_128 = &var_228;
                let var_120_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_1d8 = &data_527970;
                let var_1d0_4: i64 = 2;
                let var_1b8_4: i64 = 0;
                var_1c8 = &var_128;
                let var_1c0_4: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                var_228 = 1;
                let var_220_6: i64 = arg1;
                let var_218_3: i64 = arg2;
                let var_210_3: i8 = 1;
                var_128 = &var_228;
                let var_120_6: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                rax_8 = &data_527a30;
            }
            else
            {
                let mut rax_7: *mut i64;
                let mut rdx_2: i64;
                rax_7 = uucore::util_name::h60d842bf27b05e82();
                var_228 = rax_7;
                let var_220_3: i64 = rdx_2;
                var_128 = &var_228;
                let var_120_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_1d8 = &data_527970;
                let var_1d0_3: i64 = 2;
                let var_1b8_3: i64 = 0;
                var_1c8 = &var_128;
                let var_1c0_3: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                var_228 = 1;
                let var_220_4: i64 = arg1;
                let var_218_2: i64 = arg2;
                let var_210_2: i8 = 1;
                var_128 = &var_228;
                let var_120_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                rax_8 = &data_527a50;
            }
            
            var_1d8 = rax_8;
            let var_1d0_5: i64 = 2;
            let var_1b8_5: i64 = 0;
            var_1c8 = &var_128;
            let var_1c0_5: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
            rbp = 1;
        }
        else
        {
            'label_4b73f5:
            rdx = *arg3.byte_offset(2) != 0;
            
            if (rcx_1 & rdx) != 0
            {
                goto 'label_4b7405;
            }
            
            rbp = uu_rm::remove_dir::h7d132cab7d9f675c(arg1, arg2, arg3);
        }
    }
    else
    {
        if *arg3.byte_offset(3) == 0
        {
            rax_1 = 1;
            rcx_1 = false;
            
            if *arg3.byte_offset(4) != 0
            {
                goto 'label_4b73f5;
            }
            
            goto 'label_4b7405;
        }
        
        'label_4b7273:
        let rbx_1: i8 = *arg3.byte_offset(5);
        let r14_1: i8 = *arg3.byte_offset(6);
        let mut var_268: *mut c_void;
        let mut var_110: i128;
        
        if r14_1 == 2 || rbx_1 != 0
        {
            let mut var_c8: i64 = 0;
            let var_b8_1: i128 = {0};
            let var_c0_1: i64 = 8;
            let mut var_e8: i64 = 0;
            let var_e0_1: *mut i64 = 8;
            let var_d8_1: i64 = 0;
            walkdir::WalkDir::new::h94b43d608c112e6d(&var_228, arg1);
            let mut var_1f0: i128;
            let var_148_1: i128 = var_1f0;
            let var_200: i128;
            let var_158_1: i128 = var_200;
            let mut var_210: i8;
            let var_168_1: i128 = var_210;
            let var_180_1: i128 = var_228;
            let mut var_218: i64;
            let var_170_1: i64 = var_218;
            var_1d8 = nullptr;
            var_1c8 = 0;
            let var_1c0_6: i64 = 8;
            let mut var_1b8: i64;
            var_1b8 = {0};
            let var_1a8_1: i64 = 8;
            let var_1a0_1: i128 = {0};
            let var_190_1: i64 = 8;
            let var_188_1: i64 = 0;
            let var_138_1: i128 = {0};
            rbp = 0;
            
            loop
            {
                let mut var_260: *mut i8;
                let mut var_258: size_t;
                let mut var_248: i64;
                let mut var_68_1: i128;
                let mut var_58_1: i128;
                let mut var_48_1: i128;
                let mut rax_14: *mut i64;
                let var_240: i32;
                let var_120: i64;
                let var_100: i128;
                
                if r14_1 == 2
                {
                    'label_4b77f0:
                    _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&var_128, &var_1d8);
                    rax_14 = var_128;
                    
                    if rax_14 == 3
                    {
                        break;
                    }
                    
                    var_48_1 = var_100;
                    var_58_1 = var_110;
                    var_68_1 = var_120;
                    
                    if rax_14 == 2
                    {
                        var_248 = var_100;
                        var_258 = var_110;
                        var_268 = var_120;
                        var_228 = var_e0_1;
                        
                        loop
                        {
                            let rax_18: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h401dddcc1f8bca7a(&var_228);
                            
                            if rax_18 == 0
                            {
                                break;
                            }
                            
                            if std::path::Path::starts_with::h2e2f372e672a1657(var_260, var_258, 
                                rax_18) != 0
                            {
                                core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h372f3c80b2dcbfec(&var_268);
                                goto 'label_4b77f0;
                            }
                        }
                        
                        if (var_240 & 0xf000) != 0x4000
                        {
                            goto 'label_4b796d;
                        }
                        
                        std::fs::read_dir::h67bbb91b5f22fd39(&var_228, var_260);
                        let mut rax_22: i64;
                        let mut rdx_8: i8;
                        rax_22 = core::result::Result$LT$T$C$E$GT$::unwrap::h16565dcf888e9ebf(
                            var_228, var_e0_1 + var_d8_1 * 0x18);
                        
                        if core::iter::traits::iterator::Iterator::fold::h676339c190ac643e(rax_22)
                            == 0
                        {
                            goto 'label_4b771e;
                        }
                        
                        if uu_rm::prompt_descend::h39295f8defb4b16a() == 0
                        {
                            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(
                                &var_228, var_260, var_258);
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hc1adebded84362db(&var_e8, 
                                &var_228);
                        }
                        else
                        {
                            let var_208_2: i128 = var_248;
                            var_218 = var_258;
                            var_228 = var_268;
                            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha11ee268e055e361(&var_c8, &var_228);
                            continue;
                        }
                        
                        core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h372f3c80b2dcbfec(
                            &var_268);
                        continue;
                    }
                }
                else
                {
                    _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&var_128, &var_1d8);
                    rax_14 = var_128;
                    
                    if rax_14 == 3
                    {
                        break;
                    }
                    
                    var_48_1 = var_100;
                    var_58_1 = var_110;
                    var_68_1 = var_120;
                    
                    if rax_14 == 2
                    {
                        var_248 = var_100;
                        var_258 = var_110;
                        var_268 = var_120;
                        
                        if (var_240 & 0xf000) == 0x4000
                        {
                            'label_4b771e:
                            let var_208_1: i128 = var_248;
                            var_218 = var_258;
                            var_228 = var_268;
                            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha11ee268e055e361(&var_c8, &var_228);
                            continue;
                        }
                        else
                        {
                            'label_4b796d:
                            rbp |= uu_rm::remove_file::hfb41d07f759de271(var_260, var_258, rbx_1, 
                                r14_1);
                            rbp &= 1;
                            core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h372f3c80b2dcbfec(&var_268);
                            continue;
                        }
                    }
                }
                var_228 = rax_14;
                let var_200_1: i128 = var_48_1;
                var_210 = var_58_1;
                let var_220: i32 = var_68_1;
                let var_f0: i64;
                var_1f0 = var_f0;
                let mut rax_26: i64;
                let mut rdx_10: i64;
                rax_26 = uucore::util_name::h60d842bf27b05e82();
                let mut var_88: i64 = rax_26;
                let var_80_1: i64 = rdx_10;
                let mut var_a8: *mut i64 = &var_88;
                let var_a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_268 = &data_527970;
                let var_260_1: i64 = 2;
                let var_248_1: i64 = 0;
                let var_258_1: *mut *mut i64 = &var_a8;
                let var_250_1: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_268);
                var_88 = 1;
                let var_80_2: i64 = arg1;
                let var_78_1: i64 = arg2;
                let var_70_1: i8 = 1;
                var_a8 = &var_88;
                let var_a0_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                let var_98_1: *mut *mut i64 = &var_228;
                let var_90_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h133db1da499347d6;
                var_268 = &data_527a00;
                var_260 = 3;
                var_248 = 0;
                var_258 = &var_a8;
                let var_250_2: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_268);
                core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::hc1425b400c799960(&var_228);
                rbp = 1;
            }
            
            core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h3761202ee7f4baa7(&var_1d8);
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h7ec7afdb8ff5890d(&var_228, 
                &var_c8);
            var_1c8 = var_218;
            var_1d8 = var_228;
            
            loop
            {
                let mut rax_28: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hc080de13743d3b84(&var_1c8);
                
                if rax_28 == 0
                {
                    var_1d8 = var_1c8;
                    var_1c8 = var_1d8;
                    rax_28 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hc080de13743d3b84(&var_1c8);
                    
                    if rax_28 == 0
                    {
                        break;
                    }
                }
                
                rbp |= uu_rm::remove_dir::h7d132cab7d9f675c(*rax_28.byte_offset(8), 
                    *rax_28.byte_offset(0x10), arg3);
                rbp &= 1;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h0424e9eb358fe413(&var_e8);
            core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$walkdir..dent..DirEntry$GT$$GT$::hf45a67b5be4375a6(&var_c8);
        }
        else
        {
            let rax_2: *mut c_void = std::fs::remove_dir_all::ha0bf453026099f20(arg1);
            
            if rax_2 == 0
            {
                rbp = 0;
            }
            else
            {
                var_268 = rax_2;
                let rax_3: *mut c_void = std::fs::remove_dir::h3ace2cb00c00de8e(arg1);
                var_1d8 = rax_3;
                
                if rax_3 == 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc630b8980b1a585c(&var_1d8);
                    rbp = 0;
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc630b8980b1a585c(&var_1d8);
                    
                    if std::io::error::Error::kind::hb2ff5fa058639b3d(rax_2) != 1
                    {
                        let mut rax_30: *mut i64;
                        let mut rdx_13: i64;
                        rax_30 = uucore::util_name::h60d842bf27b05e82();
                        var_228 = rax_30;
                        let var_220_7: i64 = rdx_13;
                        var_128 = &var_228;
                        let var_120_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                        var_1d8 = &data_527970;
                        let var_1d0_6: i64 = 2;
                        let var_1b8_6: i64 = 0;
                        var_1c8 = &var_128;
                        let var_1c0_7: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                        var_228 = 1;
                        let var_220_8: i64 = arg1;
                        let var_218_4: i64 = arg2;
                        let var_210_4: i8 = 1;
                        var_128 = &var_228;
                        let var_120_8: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        let var_118_1: *mut i64 = &var_268;
                        var_110 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        var_1d8 = &data_5279d0;
                        let var_1d0_7: i64 = 3;
                        let var_1b8_7: i64 = 0;
                        var_1c8 = &var_128;
                        let var_1c0_8: i64 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                    }
                    else
                    {
                        let mut rax_5: *mut i64;
                        let mut rdx_1: i64;
                        rax_5 = uucore::util_name::h60d842bf27b05e82();
                        var_228 = rax_5;
                        let var_220_1: i64 = rdx_1;
                        var_128 = &var_228;
                        let var_120_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                        var_1d8 = &data_527970;
                        let var_1d0_1: i64 = 2;
                        let var_1b8_1: i64 = 0;
                        var_1c8 = &var_128;
                        let var_1c0_1: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                        var_228 = 1;
                        let var_220_2: i64 = arg1;
                        let var_218_1: i64 = arg2;
                        let var_210_1: i8 = 1;
                        var_128 = &var_228;
                        let var_120_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_1d8 = &data_5279b0;
                        let var_1d0_2: i64 = 2;
                        let var_1b8_2: i64 = 0;
                        var_1c8 = &var_128;
                        let var_1c0_2: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                    }
                    
                    rbp = 1;
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&var_268);
            }
        }
    }
    rbp &= 1;
    rbp
}
