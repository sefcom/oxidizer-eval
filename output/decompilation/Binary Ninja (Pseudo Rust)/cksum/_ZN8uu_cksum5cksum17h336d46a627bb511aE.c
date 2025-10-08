
  fn uu_cksum::cksum::h336d46a627bb511a(arg1: *mut i8, arg2: *mut i128) -> u64

{
    let mut r13: *mut i8 = arg1;
    let mut var_168: i64;
    core::iter::traits::iterator::Iterator::collect::hb1e4d7e773409482(&var_168, arg2);
    let var_158: i64;
    let mut result: u64;
    
    if r13[0x3a] != 1 || var_158 < 2
    {
        let mut var_a8: ();
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h60d9513257eb0eb1(&var_a8, &var_168);
        let mut rax_1: *mut *mut i64;
        let mut rdx_1: u64;
        rax_1 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h41a86bffa5c54210(&var_a8);
        
        if rax_1 == 0
        {
            'label_48190b:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h51ccac9fcb54742f(&var_a8);
            result = 0;
        }
        else
        {
            let mut r14_1: *mut *mut i64 = rax_1;
            let mut r12_1: u64 = rdx_1;
            let mut var_178_1: *mut *mut [i8; 0xa8] = &data_562db0;
            let var_180_1: *mut i8 = r13;
            
            loop
            {
                let mut var_70: ();
                std::path::Path::components::hd0346d362206f2e9(&var_70, r14_1, r12_1);
                let mut var_248: *mut c_void;
                std::path::Path::components::hd0346d362206f2e9(&var_248, 
                    "-: \ncrcbsdcrc32bblake2b  (BLAKE…", 1);
                let rax_6: bool = _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(&var_70, &var_248);
                let mut result_2: *mut i8;
                let mut var_238: *mut c_void;
                let mut var_208: *mut i64;
                let mut result_6: *mut i8;
                let mut var_1f0: *mut *mut i64;
                let mut result_1: fn(arg1: *mut i64, arg2: i64) -> i64;
                let mut var_1e0: *mut c_void;
                let mut var_1d8: fn(arg1: *mut i64) -> i64;
                let mut var_1c0: i32;
                let mut var_1a0: *mut *mut i64;
                let mut rax_7: u64;
                let mut rdx_4: *mut c_void;
                
                if rax_6 == 0
                {
                    if std::path::Path::is_dir::h02edbc48c38d7d9e(r14_1, r12_1) != 0
                    {
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h6c2e0349894caf53(&var_248);
                        rax_7 = alloc::boxed::Box$LT$T$GT$::new::h61ab867a00341c2e(&var_248);
                        rdx_4 = &data_562c70;
                        goto 'label_480dd6;
                    }
                    
                    std::fs::File::open::h95d1ebc71d5bc123(&var_1c0, r14_1);
                    
                    if var_1c0 != 1
                    {
                        let var_1bc: i32;
                        rax_7 = alloc::boxed::Box$LT$T$GT$::new::hc90a017c3b0970d3(var_1bc);
                        rdx_4 = &data_562c18;
                        goto 'label_480dd6;
                    }
                    
                    var_1a0 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h33d0ae6f12f8c95d();
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                    let mut rax_10: *mut i64;
                    let mut result_12: *mut i8;
                    rax_10 = uucore::util_name::h074417a1e6395129();
                    var_208 = rax_10;
                    result_6 = result_12;
                    var_1f0 = &var_208;
                    result_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadc6a92ef31a9059;
                    var_1e0 = &var_1a0;
                    var_1d8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9646482404df5651;
                    var_248 = &data_562aa0;
                    result_2 = 3;
                    let var_228_2: i64 = 0;
                    var_238 = &var_1f0;
                    let var_230_2: i64 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_248);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h1d37b627a49668b5(var_1a0);
                }
                else
                {
                    std::io::stdio::stdin::h9a05a2c3e7544b2a();
                    rax_7 = alloc::boxed::Box$LT$T$GT$::new::h7c06c1b4b16eb5ae(
                        &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
                    rdx_4 = &data_562cc8;
                    'label_480dd6:
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd73f6c9a7bc8eff2(&var_70, rax_7, rdx_4);
                    
                    if std::path::Path::is_dir::h02edbc48c38d7d9e(r14_1, r12_1) == 0
                    {
                        uucore::features::checksum::digest_reader::h0b96abc958d00050(&var_248, 
                            &r13[0x20], &var_70, *r13.byte_offset(0x30));
                        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha82d747ca18b9e26(&var_1f0, &var_248);
                        let rcx_2: *mut *mut i64 = var_1f0;
                        
                        if -(rcx_2) == -0x8000000000000000
                        {
                            result = result_1;
                            'label_481925:
                            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h9ab3152754514e37(&var_70);
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h51ccac9fcb54742f(&var_a8);
                            break;
                        }
                        
                        let mut var_140: fn(arg1: *mut i64) -> i64 = var_1d8;
                        let rax_19: u32 = r13[0x3a];
                        let mut result_3: fn(arg1: *mut i64, arg2: i64) -> i64;
                        let mut var_190: *mut c_void;
                        let mut rbp_1: bool;
                        
                        if rax_19 == 0
                        {
                            var_1a0 = rcx_2;
                            result_3 = result_1;
                            var_190 = var_1e0;
                        }
                        else
                        {
                            if rax_19 != 2
                            {
                                let r14_2: i64 = *r13.byte_offset(0x10);
                                let r15_5: u64 = *r13.byte_offset(0x18);
                                let mut result_4: *mut i8;
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(r14_2, r15_5, "crcbsdcrc32bblake2b  (BLAKE2b (", 3) == 0
                                {
                                    let cond:4_1: bool = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(r14_2, r15_5, &data_411970[0x10], 4) != 0;
                                    result_4 = result_1;
                                    let mut rax_58: i8;
                                    
                                    if !cond:4_1
                                    {
                                        rax_58 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(r14_2, r15_5, "bsdcrc32bblake2b  (BLAKE2b (", 3);
                                    }
                                    
                                    if !cond:4_1 && rax_58 == 0
                                    {
                                        var_248 = rcx_2;
                                        result_2 = result_4;
                                        var_238 = var_1e0;
                                        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$hex..FromHex$GT$::from_hex::h607a63c4883149c8(&var_1f0, &var_248);
                                        core::result::Result$LT$T$C$E$GT$::unwrap::hda5e567a9340eba8(&var_248, &var_1f0);
                                        rbp_1 = false;
                                    }
                                    else
                                    {
                                        var_1f0 = core::result::Result$LT$T$C$E$GT$::unwrap::h8faa357aa9b57c0d(core::num::_$LT$impl$u20$u16$GT$::from_ascii_radix::h81be443e3f8b1a62(result_4, var_1e0)).rotate_left(8);
                                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9b02c4bb569ef277(&var_248, &var_1f0, 2);
                                        rbp_1 = true;
                                    }
                                }
                                else
                                {
                                    result_4 = result_1;
                                    var_1f0 = _bswap(core::result::Result$LT$T$C$E$GT$::unwrap::h68c8f15cbe1eda69(core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(result_4, var_1e0)));
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9b02c4bb569ef277(&var_248, &var_1f0, 4);
                                    rbp_1 = true;
                                }
                                
                                std::io::stdio::stdout::hb6a8e10bcccf3287();
                                var_1f0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                                
                                if _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(&var_1f0, result_2, var_238) == 0
                                {
                                    result = 0;
                                }
                                else
                                {
                                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hff252e251e10954d(var_248, result_2);
                                
                                if rbp_1 != 0
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4b980c8c114e5ace(rcx_2, result_4);
                                }
                                
                                goto 'label_481925;
                            }
                            
                            let r13_1: i64 = *r13.byte_offset(0x10);
                            let r15_1: u64 = *r13.byte_offset(0x18);
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(r13_1, r15_1, "crcbsdcrc32bblake2b  (BLAKE2b (", 3) != 0
                            {
                                'label_481044:
                                var_1a0 = rcx_2;
                                result_3 = result_1;
                                var_190 = var_1e0;
                                r13 = var_180_1;
                            }
                            else
                            {
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(r13_1, r15_1, "crc32bblake2b  (BLAKE2b (", 6) != 0
                                {
                                    goto 'label_481044;
                                }
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(r13_1, r15_1, &data_411970[0x10], 4) != 0
                                {
                                    goto 'label_481044;
                                }
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(r13_1, r15_1, "bsdcrc32bblake2b  (BLAKE2b (", 3) != 0
                                {
                                    goto 'label_481044;
                                }
                                
                                __builtin_memcpy(&var_208, 
                                    "\x00\x00\x00\x00\x00\x00\x00\x80\x31\x2d\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
                                var_248 = rcx_2;
                                result_2 = result_1;
                                var_238 = var_1e0;
                                _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$hex..FromHex$GT$::from_hex::h607a63c4883149c8(&var_1f0, &var_248);
                                core::result::Result$LT$T$C$E$GT$::unwrap::hda5e567a9340eba8(
                                    &var_248, &var_1f0);
                                r13 = var_180_1;
                                data_encoding::Encoding::encode::hb65c8f60a01607f2(&var_1a0, 
                                    &var_208, result_2, var_238);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hff252e251e10954d(var_248, result_2);
                                core::ptr::drop_in_place$LT$data_encoding..Encoding$GT$::hc9f4fcfbce7e8f5c(var_208, result_6);
                            }
                        }
                        
                        let rbx_1: i64 = *r13.byte_offset(0x10);
                        let r15_2: u64 = *r13.byte_offset(0x18);
                        let mut var_1f8: *mut c_void;
                        let mut result_11: *mut i8;
                        let mut rcx_8: *mut i64;
                        let mut rdx_19: *mut c_void;
                        let mut rbx_2: *mut c_void;
                        let mut result_5: *mut i8;
                        let mut r15_3: *mut *mut i64;
                        let mut var_24a: i16;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rbx_1, r15_2, &data_411970[0x10], 4) == 0
                        {
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rbx_1, r15_2, "bsdcrc32bblake2b  (BLAKE2b (", 3) == 0
                            {
                                let rax_38: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rbx_1, r15_2, "crcbsdcrc32bblake2b  (BLAKE2b (", 
                                    3);
                                let mut rax_39: i8;
                                
                                if rax_38 == 0
                                {
                                    rax_39 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rbx_1, r15_2, "crc32bblake2b  (BLAKE2b (", 6);
                                }
                                
                                if rax_38 == 0 && rax_39 == 0
                                {
                                    let rax_46: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a332431da5eb7c8(rbx_1, r15_2, "blake2b  (BLAKE2b (", 7);
                                    let rcx_9: i8 = r13[0x38];
                                    
                                    if rax_46 != 0
                                    {
                                        if (rcx_9 & 1) == 0
                                        {
                                            goto 'label_4817a8;
                                        }
                                        
                                        if (*r13 & 1) == 0
                                        {
                                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9b02c4bb569ef277(&var_248, "BLAKE2b (", 9);
                                            r15_3 = var_248;
                                            result_5 = result_2;
                                            rbx_2 = var_238;
                                        }
                                        else
                                        {
                                            var_1c0 = *r13.byte_offset(8) << 3;
                                            var_208 = &var_1c0;
                                            let var_200_4: fn(arg1: *mut i64, arg2: *mut i64) ->
                                                u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                                            var_248 = &data_562b20;
                                            let var_240_5: i64 = 2;
                                            let var_228_9: i64 = 0;
                                            let var_238_7: *mut *mut i64 = &var_208;
                                            let var_230_9: i64 = 1;
                                            core::option::Option$LT$T$GT$::map_or_else::h02fb2c4bf8d27115(&var_1f0, &var_248);
                                            r15_3 = var_1f0;
                                            result_5 = result_1;
                                            rbx_2 = var_1e0;
                                        }
                                        
                                        var_1f0 = &var_1a0;
                                        let var_1e8_7: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                        var_248 = &data_562b40;
                                        let var_240_9: i64 = 1;
                                        let var_228_13: i64 = 0;
                                        let var_238_11: *mut *mut *mut i64 = &var_1f0;
                                        let var_230_13: i64 = 1;
                                        let mut var_f0: *mut i64;
                                        core::option::Option$LT$T$GT$::map_or_else::h02fb2c4bf8d27115(&var_f0, &var_248);
                                        rcx_8 = var_f0;
                                        let result_14: *mut i8;
                                        result_11 = result_14;
                                        rbp_1 = true;
                                        let var_e0: *mut c_void;
                                        rdx_19 = var_e0;
                                    }
                                    else if (rcx_9 & 1) == 0
                                    {
                                        'label_4817a8:
                                        let mut rax_51: *mut i64 = "  (BLAKE2b (";
                                        
                                        if r13[0x39] != 0
                                        {
                                            rax_51 = &data_412f33;
                                        }
                                        
                                        var_208 = rax_51;
                                        let var_200_5: i64 = 1;
                                        var_1f0 = &var_1a0;
                                        let var_1e8_6: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                        let var_1e0_4: *mut *mut i64 = &var_208;
                                        let var_1d8_4: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadc6a92ef31a9059;
                                        var_248 = &data_562b70;
                                        let var_240_8: i64 = 2;
                                        let var_228_12: i64 = 0;
                                        let var_238_10: *mut *mut *mut i64 = &var_1f0;
                                        let var_230_12: i64 = 2;
                                        let mut var_c0: *mut *mut i64;
                                        core::option::Option$LT$T$GT$::map_or_else::h02fb2c4bf8d27115(&var_c0, &var_248);
                                        r15_3 = var_c0;
                                        let result_10: *mut i8;
                                        result_5 = result_10;
                                        let var_b0: *mut c_void;
                                        rbx_2 = var_b0;
                                        result_11 = 1;
                                        rbp_1 = true;
                                        rcx_8 = nullptr;
                                        rdx_19 = nullptr;
                                    }
                                    else
                                    {
                                        alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h035e9d4252a297af(&var_1f0, rbx_1, r15_2);
                                        var_1c0 = &var_1f0;
                                        let var_1b8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                        var_248 = &data_562b50;
                                        let var_240_6: i64 = 2;
                                        let var_228_10: i64 = 0;
                                        let var_238_8: *mut i32 = &var_1c0;
                                        let var_230_10: i64 = 1;
                                        core::option::Option$LT$T$GT$::map_or_else::h02fb2c4bf8d27115(&var_208, &var_248);
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4b980c8c114e5ace(var_1f0, result_1);
                                        r15_3 = var_208;
                                        result_5 = result_6;
                                        rbx_2 = var_1f8;
                                        var_1f0 = &var_1a0;
                                        let var_1e8_5: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                        var_248 = &data_562b40;
                                        let var_240_7: i64 = 1;
                                        let var_228_11: i64 = 0;
                                        let var_238_9: *mut *mut *mut i64 = &var_1f0;
                                        let var_230_11: i64 = 1;
                                        let mut var_d8: *mut i64;
                                        core::option::Option$LT$T$GT$::map_or_else::h02fb2c4bf8d27115(&var_d8, &var_248);
                                        rcx_8 = var_d8;
                                        let result_15: *mut i8;
                                        result_11 = result_15;
                                        rbp_1 = true;
                                        let var_c8: *mut c_void;
                                        rdx_19 = var_c8;
                                    }
                                }
                                else
                                {
                                    let mut rax_40: *mut i64 = "  (BLAKE2b (";
                                    
                                    if rax_6 != 0
                                    {
                                        rax_40 = 1;
                                    }
                                    
                                    rbp_1 = rax_6 ^ 1;
                                    var_208 = rax_40;
                                    let var_200_1: u64 = rbp_1;
                                    var_248 = &var_1a0;
                                    let var_240_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                    let var_238_3: *mut fn(arg1: *mut i64) -> i64 = &var_140;
                                    let var_230_5: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                                    let var_228_5: *mut *mut i64 = &var_208;
                                    let var_220_1: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadc6a92ef31a9059;
                                    var_1f0 = &data_562af0;
                                    let var_1e8_1: i64 = 3;
                                    let var_1d0_1: i64 = 0;
                                    let var_1e0_1: *const *mut c_void = &var_248;
                                    let var_1d8_1: i64 = 3;
                                    let mut var_108: *mut *mut i64;
                                    core::option::Option$LT$T$GT$::map_or_else::h02fb2c4bf8d27115(
                                        &var_108, &var_1f0);
                                    r15_3 = var_108;
                                    let result_9: *mut i8;
                                    result_5 = result_9;
                                    result_11 = 1;
                                    let var_f8: *mut c_void;
                                    rbx_2 = var_f8;
                                    rcx_8 = nullptr;
                                    rdx_19 = nullptr;
                                }
                            }
                            else
                            {
                                var_24a =
                                    core::result::Result$LT$T$C$E$GT$::unwrap::h8faa357aa9b57c0d(core::num::_$LT$impl$u20$u16$GT$::from_ascii_radix::h81be443e3f8b1a62(
                                    result_3, var_190));
                                let rcx_4: i64 = *r13.byte_offset(0x30);
                                
                                if rcx_4 == 0
                                {
                                    core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
                                    /* no return */
                                }
                                
                                let mut rax_37: u64;
                                let mut rdx_18: u64;
                                
                                if (var_1d8 | rcx_4) >> 0x20 == 0
                                {
                                    let temp2_4: i32 = rcx_4;
                                    rax_37 = COMBINE(0, var_1d8) / temp2_4;
                                    rdx_18 = COMBINE(0, var_1d8) % temp2_4;
                                }
                                else
                                {
                                    let rdx_17: i64 = 0;
                                    let temp2_2: i32 = rcx_4;
                                    rax_37 = COMBINE(rdx_17, var_1d8) / temp2_2;
                                    rdx_18 = COMBINE(rdx_17, var_1d8) % temp2_2;
                                }
                                
                                var_1c0 = rax_37 + 1;
                                let mut rax_44: *mut i64 = "  (BLAKE2b (";
                                
                                if rax_6 != 0
                                {
                                    rax_44 = 1;
                                }
                                
                                rbp_1 = rax_6 ^ 1;
                                var_208 = rax_44;
                                let var_200_3: u64 = rbp_1;
                                var_248 = &var_24a;
                                let var_240_3: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
                                let var_238_5: *mut i32 = &var_1c0;
                                let var_230_7: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                                let var_228_7: *mut *mut i64 = &var_208;
                                let var_220_3: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadc6a92ef31a9059;
                                let var_218_1: i64 = 0;
                                let var_210_1: i16 = 5;
                                var_1f0 = &data_562af0;
                                let var_1e8_3: i64 = 3;
                                let var_1d0_3: *mut c_void = &data_412f38;
                                let var_1c8_1: i64 = 3;
                                let var_1e0_3: *const *mut c_void = &var_248;
                                let var_1d8_3: i64 = 4;
                                let mut var_120: *mut *mut i64;
                                core::option::Option$LT$T$GT$::map_or_else::h02fb2c4bf8d27115(
                                    &var_120, &var_1f0);
                                r15_3 = var_120;
                                let result_8: *mut i8;
                                result_5 = result_8;
                                result_11 = 1;
                                let var_110: *mut c_void;
                                rbx_2 = var_110;
                                rcx_8 = nullptr;
                                rdx_19 = nullptr;
                            }
                        }
                        else
                        {
                            var_24a = core::result::Result$LT$T$C$E$GT$::unwrap::h8faa357aa9b57c0d(core::num::_$LT$impl$u20$u16$GT$::from_ascii_radix::h81be443e3f8b1a62(
                                result_3, var_190));
                            let rcx_3: i64 = *r13.byte_offset(0x30);
                            
                            if rcx_3 == 0
                            {
                                var_178_1 = &data_562de0;
                                core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
                                /* no return */
                            }
                            
                            let mut rax_32: u64;
                            let mut rdx_13: u64;
                            
                            if (var_1d8 | rcx_3) >> 0x20 == 0
                            {
                                let temp2_3: i32 = rcx_3;
                                rax_32 = COMBINE(0, var_1d8) / temp2_3;
                                rdx_13 = COMBINE(0, var_1d8) % temp2_3;
                            }
                            else
                            {
                                let rdx_12: i64 = 0;
                                let temp2_1: i32 = rcx_3;
                                rax_32 = COMBINE(rdx_12, var_1d8) / temp2_1;
                                rdx_13 = COMBINE(rdx_12, var_1d8) % temp2_1;
                            }
                            
                            let mut rcx_6: *const i8 = "  (BLAKE2b (";
                            
                            if rax_6 != 0
                            {
                                rcx_6 = 1;
                            }
                            
                            var_1c0 = rax_32 + 1;
                            rbp_1 = rax_6 ^ 1;
                            var_208 = rcx_6;
                            let var_200_2: u64 = rbp_1;
                            var_248 = &var_24a;
                            let var_240_2: fn(arg1: *mut i16, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
                            let var_238_4: *mut i32 = &var_1c0;
                            let var_230_6: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                            let var_228_6: *mut *mut i64 = &var_208;
                            let var_220_2: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadc6a92ef31a9059;
                            var_1f0 = &data_562af0;
                            let var_1e8_2: i64 = 3;
                            let var_1d0_2: i64 = 0;
                            let var_1e0_2: *const *mut c_void = &var_248;
                            let var_1d8_2: i64 = 3;
                            let mut var_138: *mut *mut i64;
                            core::option::Option$LT$T$GT$::map_or_else::h02fb2c4bf8d27115(&var_138, 
                                &var_1f0);
                            r15_3 = var_138;
                            let result_7: *mut i8;
                            result_5 = result_7;
                            result_11 = 1;
                            let var_128: *mut c_void;
                            rbx_2 = var_128;
                            rcx_8 = nullptr;
                            rdx_19 = nullptr;
                        }
                        var_1c0 = r15_3;
                        let var_1b0_1: *mut c_void = rbx_2;
                        var_208 = rcx_8;
                        result_6 = result_11;
                        var_1f8 = rdx_19;
                        var_1f0 = &var_1c0;
                        let var_1e8_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_248 = &data_411620;
                        let var_240_4: i64 = 1;
                        let var_228_8: i64 = 0;
                        let var_238_6: *mut *mut *mut i64 = &var_1f0;
                        let var_230_8: i64 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_248);
                        
                        if rbp_1 != 0
                        {
                            std::io::stdio::stdout::hb6a8e10bcccf3287();
                            var_248 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h64b7c03b50095bd4(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(&var_248, r14_1, r12_1));
                        }
                        
                        var_1f0 = &var_208;
                        result_1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_1e0 = &r13[0x3b];
                        var_1d8 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
                        var_248 = &data_412b38;
                        result_2 = 2;
                        let var_228_1: i64 = 0;
                        var_238 = &var_1f0;
                        let var_230_1: i64 = 2;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_248);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4b980c8c114e5ace(
                            var_208, result_6);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4b980c8c114e5ace(
                            var_1c0, result_5);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4b980c8c114e5ace(
                            var_1a0, result_3);
                        r13 = var_180_1;
                    }
                    else
                    {
                        var_1f0 = r14_1;
                        let var_1e8: u64 = r12_1;
                        var_208 = &var_1f0;
                        let var_200: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                        var_248 = &data_562ad0;
                        let var_240: i64 = 2;
                        let var_228_3: i64 = 0;
                        let var_238_1: *mut *mut i64 = &var_208;
                        let mut var_230_3: i64 = 1;
                        let mut var_88: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h02fb2c4bf8d27115(&var_88, 
                            &var_248);
                        var_230_3 = 1;
                        var_248 = var_88;
                        let var_78: i64;
                        let var_238_2: i64 = var_78;
                        let rax_13: u64 =
                            alloc::boxed::Box$LT$T$GT$::new::hcaa67f2931b5f70d(&var_248);
                        var_1c0 = rax_13;
                        let var_1b8: *mut i8 = &data_5629e8;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_13));
                        let mut rax_15: *mut i64;
                        let mut result_13: *mut i8;
                        rax_15 = uucore::util_name::h074417a1e6395129();
                        var_208 = rax_15;
                        result_6 = result_13;
                        var_1f0 = &var_208;
                        result_1 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadc6a92ef31a9059;
                        var_1e0 = &var_1c0;
                        var_1d8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hafd8bcb1828bb3dc;
                        var_248 = &data_562aa0;
                        result_2 = 3;
                        let var_228_4: i64 = 0;
                        var_238 = &var_1f0;
                        let var_230_4: i64 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_248);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hed70c0ec5ef0fd6f(var_1c0, var_1b8);
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h9ab3152754514e37(&var_70);
                }
                let mut rax_5: *mut *mut i64;
                let mut rdx_2: u64;
                rax_5 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h41a86bffa5c54210(&var_a8);
                r14_1 = rax_5;
                r12_1 = rdx_2;
                
                if rax_5 == 0
                {
                    goto 'label_48190b;
                }
            }
        }
    }
    else
    {
        result = alloc::boxed::Box$LT$T$GT$::new::hd32763c273953b02(0);
        let var_160: i64;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::h85ec7d2cdaf9b289(var_168, var_160);
    }
    
    core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::hb9d3c08ed2eee8cb(*r13.byte_offset(0x20), 
        *r13.byte_offset(0x28));
    result
}
