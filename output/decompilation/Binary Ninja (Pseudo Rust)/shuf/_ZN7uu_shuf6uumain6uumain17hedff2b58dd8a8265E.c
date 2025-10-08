
  fn uu_shuf::uumain::uumain::hedff2b58dd8a8265(arg1: i64, arg2: i64 @ r13) -> u64

{
    let var_20: i64 = arg2;
    let mut var_2f8: i128;
    uu_shuf::uu_app::h51a53df890e82932(&var_2f8);
    let mut var_438: fn() -> !;
    clap_builder::builder::command::Command::try_get_matches_from::h1b56f836ecd248ac(&var_438, 
        &var_2f8, arg1);
    let rax: fn() -> ! = var_438;
    let mut result: u64;
    let result_1: u64;
    
    if -(rax) != -0x8000000000000000
    {
        let var_408: *mut c_void;
        let var_320_1: *mut c_void = var_408;
        let var_418: i128;
        let var_330_1: i128 = var_418;
        let mut var_428: u128;
        let var_340_1: u128 = var_428;
        let mut var_350: fn() -> ! = rax;
        let result_6: u64 = result_1;
        let var_400: i64;
        let mut var_3e8: i128;
        let mut var_3d8: i8;
        let mut var_2e8: i8;
        let mut rax_7: i64;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_350, "echoi128 as dyn ERANGEEDEADLKENA…", 4) != 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h59f6811787992051(
                &var_2f8, &var_350, "file-or-args(uutils coreutils) 0…", 0xc);
            let mut rsi_3: *mut c_void = "file-or-args(uutils coreutils) 0…";
            clap_builder::parser::error::MatchesError::unwrap::h3b06173179f33a28(&var_438, 
                "file-or-args(uutils coreutils) 0…", 0xc, &var_2f8);
            let mut rax_3: fn() -> ! = var_438;
            let mut result_7: u64;
            let mut rdx_1: i64;
            let mut zmm0_2: i128;
            let mut zmm1_2: u128;
            
            if rax_3 == 0
            {
                zmm0_2 = {0};
                zmm1_2 = "/home/34r7hm4n/.cargo/registry/s…";
                result_7 = "/home/34r7hm4n/.cargo/registry/s…";
                rax_3 = core::ops::function::FnOnce::call_once::hcf99c56a241a2abc;
                rdx_1 = 0;
            }
            else
            {
                result_7 = result_1;
                zmm1_2 = var_428;
                zmm0_2 = var_418;
                rsi_3 = var_408;
                rdx_1 = var_400;
            }
            
            var_2f8 = rax_3;
            *var_2f8[8] = result_7;
            var_2e8 = zmm1_2;
            let var_2d8_1: i128 = zmm0_2;
            let var_2c8_1: *mut c_void = rsi_3;
            let var_2c0_1: i64 = rdx_1;
            core::iter::traits::iterator::Iterator::collect::h386b4ae5f25d38a7(&var_438, &var_2f8);
            var_3e8 = var_438;
            var_3d8 = var_428;
            let var_3f0_1: i64 = 1;
            rax_7 = 1;
            goto 'label_45f287;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h933ae22ec05fedde(
            &var_2f8, &var_350, "input-rangehead-countoutputrando…", 0xb);
        let rax_4: *mut i128 = clap_builder::parser::error::MatchesError::unwrap::h5b4fae1e20bf99e6(
            "input-rangehead-countoutputrando…", 0xb, &var_2f8);
        let mut var_3c8: i32;
        
        if rax_4 != 0
        {
            _$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he208c34151454f8f(&var_2f8, rax_4);
            var_438 = var_2f8;
            let var_2e7: i32;
            var_3c8 = var_2e7;
            var_3c8 = var_2e7;
        }
        
        let mut var_3b0: i64;
        let mut var_3a8: i64;
        let mut var_390: i16;
        let mut result_2: u64;
        
        if rax_4 != 0 && var_2e8 != 2
        {
            var_3e8 = var_438;
            let mut var_3d7_1: i32 = var_3c8;
            var_3d7_1 = var_3c8;
            var_3d8 = var_2e8;
            let var_3f0_2: i64 = 2;
            rax_7 = 2;
            'label_45f287:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h107b91d7d21a3329(
                &var_2f8, &var_350, "head-countoutputrandom-sourcerep…", 0xa);
            let mut rsi_13: *mut c_void = "head-countoutputrandom-sourcerep…";
            clap_builder::parser::error::MatchesError::unwrap::h3b06173179f33a28(&var_438, 
                "head-countoutputrandom-sourcerep…", 0xa, &var_2f8);
            let mut rax_13: fn() -> ! = var_438;
            let mut result_8: u64;
            let mut rdx_5: i64;
            let mut zmm0_7: i128;
            let mut zmm1_4: u128;
            
            if rax_13 == 0
            {
                zmm0_7 = {0};
                zmm1_4 = "/home/34r7hm4n/.cargo/registry/s…";
                result_8 = "/home/34r7hm4n/.cargo/registry/s…";
                rax_13 = core::ops::function::FnOnce::call_once::hbfdf60db88ee0bad;
                rdx_5 = 0;
            }
            else
            {
                result_8 = result_1;
                zmm1_4 = var_428;
                zmm0_7 = var_418;
                rsi_13 = var_408;
                rdx_5 = var_400;
            }
            
            var_2f8 = rax_13;
            *var_2f8[8] = result_8;
            var_2e8 = zmm1_4;
            let var_2d8_2: i128 = zmm0_7;
            let var_2c8_2: *mut c_void = rsi_13;
            let var_2c0_2: i64 = rdx_5;
            let mut rax_14: i8;
            let mut rdx_6: i64;
            rax_14 = core::iter::traits::iterator::Iterator::reduce::h498be5ebde0c0fc3(&var_2f8);
            let mut r15_2: *mut i128 = 6;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2717c3350bcb7728(
                &var_2f8, &var_350, "outputrandom-sourcerepeatzero-te…", 6);
            let rax_15: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h5b4fae1e20bf99e6(
                "outputrandom-sourcerepeatzero-te…", 6, &var_2f8);
            let mut var_358: i64;
            let mut var_318: i64;
            let mut rbp_2: u64;
            
            if rax_15 == 0
            {
                rbp_2 = -0x8000000000000000;
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h10351ebe9e4824c9(&var_2f8, *rax_15.byte_offset(8), *rax_15.byte_offset(0x10));
                rbp_2 = var_2f8;
                var_358 = *var_2f8[8];
                var_318 = var_2e8;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2717c3350bcb7728(
                &var_2f8, &var_350, "random-sourcerepeatzero-terminat…", 0xd);
            let rax_18: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h5b4fae1e20bf99e6(
                "random-sourcerepeatzero-terminat…", 0xd, &var_2f8);
            let mut var_360: i64;
            let mut r13: i64;
            
            if rax_18 == 0
            {
                r13 = -0x8000000000000000;
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h10351ebe9e4824c9(&var_2f8, *rax_18.byte_offset(8), *rax_18.byte_offset(0x10));
                r13 = var_2f8;
                var_360 = *var_2f8[8];
                r15_2 = var_2e8;
            }
            
            let r14_1: *mut *mut c_void =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_350, "repeatzero-terminatedfile-or-arg…", 6);
            let mut rax_22: i8 = 0xa;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_350, "zero-terminatedfile-or-args(uuti…", 0xf) != 0
            {
                rax_22 = 0;
            }
            
            var_3c8 = rbp_2;
            let var_3c0_2: i64 = var_358;
            let var_3b8_2: i64 = var_318;
            var_3b0 = r13;
            var_3a8 = var_360;
            let var_3a0_2: *mut i128 = r15_2;
            var_390 = r14_1;
            *var_390[1] = rax_22;
            let mut r12_4: i64;
            let var_368: *mut *mut c_void;
            let mut rax_23: u64;
            let mut rdx_11: *mut c_void;
            
            if rbp_2 != -0x8000000000000000
            {
                rbp_2 = 1;
                r15_2 = 1;
                r12_4 = rax_7;
                std::fs::File::create::h2f5971c059453d14(&var_438, &var_3c8);
                r15_2 = 1;
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h3a9194a7936d8fc3(&result_2, &var_438);
                result = result_2;
                rbp_2 = 1;
                
                if result == 0
                {
                    rbp_2 = 1;
                    r15_2 = 1;
                    rax_23 = alloc::boxed::Box$LT$T$GT$::new::hbb3d70d0569267e6(var_368);
                    rdx_11 = &data_4f90a0;
                    goto 'label_45f57b;
                }
                
                r15_2 = 1;
            }
            else
            {
                rbp_2 = 1;
                r15_2 = 1;
                r12_4 = rax_7;
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                r15_2 = 1;
                rax_23 = alloc::boxed::Box$LT$T$GT$::new::hf4381db234660265(
                    &std::io::stdio::STDOUT::h411b213c5c9add46);
                rdx_11 = &data_4f9048;
                'label_45f57b:
                rbp_2 = 1;
                r15_2 = 1;
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hde16fa8d922ef556(
                    &var_2f8, rax_23, rdx_11);
                
                if ((0 - 0) | rdx_6) == 0
                {
                    rbp_2 = 1;
                    result = 0;
                    r15_2 = 1;
                }
                else
                {
                    let mut var_380: i32;
                    
                    if var_3b0 != -0x8000000000000000
                    {
                        rbp_2 = 1;
                        r15_2 = 1;
                        std::fs::File::open::h7a160c4deb55eb11(&var_438, &var_3b0);
                        r15_2 = 1;
                        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h5ca446cc5f876c2d(&result_2, &var_438);
                        result = result_2;
                        rbp_2 = 1;
                        
                        if result == 0
                        {
                            let var_37c_1: i32 = var_368;
                            var_380 = 0;
                            
                            if r12_4 != 0
                            {
                                goto 'label_45f5e1;
                            }
                            
                            goto 'label_45f720;
                        }
                        
                        r15_2 = 1;
                    }
                    else
                    {
                        rbp_2 = 1;
                        r15_2 = 1;
                        let var_378_1: *mut i64 = rand::rngs::thread::rng::h4ff389470e265d23();
                        var_380 = 1;
                        
                        if r12_4 == 0
                        {
                            'label_45f720:
                            let r12_5: i64 = var_3e8;
                            let r15_3: i64 = *var_3e8[8];
                            uu_shuf::read_input_file::h0dd917eae59a80a6(&var_438, r15_3, var_3d8);
                            let r13_1: fn() -> ! = var_438;
                            result = result_1;
                            
                            if r13_1 == -0x8000000000000000
                            {
                                goto 'label_45f7bd;
                            }
                            
                            uu_shuf::split_seps::he07f8c4bbcda6c2a(&var_438, result, var_428, 
                                *var_390[1]);
                            let mut result_5: u64;
                            let mut rdx_22: *mut *mut c_void;
                            result_5 = uu_shuf::shuf_exec::h79873914e861185e(&var_438, &var_3c8, 
                                &var_380, &var_2f8);
                            
                            if result_5 == 0
                            {
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8013aa03af9fd79f(var_438, result_1);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he88919c0f298a561(r13_1, result);
                                core::mem::drop::haba8bbc81b3b7f82(r12_5, r15_3);
                                rbp_2 = 1;
                                'label_45f89e:
                                core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::ha4d21bee6a71849c(&var_380);
                                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..display..OsWrite$GT$$GT$$GT$::h82c51d27cb490d12(&var_2f8);
                                core::ptr::drop_in_place$LT$uu_shuf..Options$GT$::h26199cbe53904ea6(
                                    &var_3c8);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h05c4f566b5c53a35(&var_350);
                                return 0;
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8013aa03af9fd79f(var_438, result_1);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he88919c0f298a561(r13_1, result);
                            result = result_5;
                            'label_45f7bd:
                            core::mem::drop::haba8bbc81b3b7f82(r12_5, r15_3);
                            rbp_2 = 1;
                            r15_2 = nullptr;
                            r12_4 = rax_7;
                            core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::ha4d21bee6a71849c(
                                &var_380);
                        }
                        else
                        {
                            'label_45f5e1:
                            
                            if r12_4 != 1
                            {
                                var_428 = var_3d8;
                                var_438 = var_3e8;
                                let mut result_4: u64;
                                let mut rdx_18: *mut *mut c_void;
                                result_4 = uu_shuf::shuf_exec::hf79dbab0ae70f8a2(&var_438, 
                                    &var_3c8, &var_380, &var_2f8);
                                result = result_4;
                                
                                if result_4 == 0
                                {
                                    rbp_2 = 1;
                                    r15_2 = 1;
                                    goto 'label_45f89e;
                                }
                                
                                rbp_2 = 1;
                                r15_2 = 1;
                                core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::ha4d21bee6a71849c(&var_380);
                            }
                            else
                            {
                                core::iter::traits::iterator::Iterator::collect::h5369f70057094df7(
                                    &var_438, *var_3e8[8]);
                                let mut result_3: u64;
                                let mut rdx_15: *mut *mut c_void;
                                result_3 = uu_shuf::shuf_exec::h8c6a34276eb3a6e3(&var_438, 
                                    &var_3c8, &var_380, &var_2f8);
                                result = result_3;
                                
                                if result_3 == 0
                                {
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8013aa03af9fd79f(var_438, result_1);
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h3d87a4ccf2b72ae9(&var_3e8);
                                    r15_2 = 1;
                                    goto 'label_45f89e;
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8013aa03af9fd79f(var_438, result_1);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h3d87a4ccf2b72ae9(&var_3e8);
                                r15_2 = 1;
                                rbp_2 = 0;
                                core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::ha4d21bee6a71849c(&var_380);
                            }
                        }
                    }
                }
                
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..display..OsWrite$GT$$GT$$GT$::h82c51d27cb490d12(&var_2f8);
            }
            core::ptr::drop_in_place$LT$uu_shuf..Options$GT$::h26199cbe53904ea6(&var_3c8);
            
            if r12_4 != 2
            {
                if r12_4 != 1
                {
                    if r15_2 != 0
                    {
                        core::mem::drop::haba8bbc81b3b7f82(var_3e8, *var_3e8[8]);
                    }
                }
                else if rbp_2 != 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h3d87a4ccf2b72ae9(&var_3e8);
                }
            }
        }
        else
        {
            let mut r14_2: *mut c_void = "file-or-args(uutils coreutils) 0…";
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h59f6811787992051(
                &var_2f8, &var_350, "file-or-args(uutils coreutils) 0…", 0xc);
            clap_builder::parser::error::MatchesError::unwrap::h3b06173179f33a28(&var_438, 
                "file-or-args(uutils coreutils) 0…", 0xc, &var_2f8);
            
            if var_438 == 0
            {
                var_3c8 = core::ops::function::FnOnce::call_once::hcf99c56a241a2abc;
                let var_3c0_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
                let var_3b8_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
                var_3b0 = 0;
                let var_3a0_1: i64 = 0;
                var_390 = 0;
            }
            else
            {
                let var_398: *mut c_void = var_408;
                var_3a8 = var_418;
                let mut var_3b8: i64;
                var_3b8 = var_428;
                var_3c8 = var_438;
            }
            
            let rax_8: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h69219f20d5bc9bd7(&var_3c8);
            let mut rbp_1: i64;
            
            if rax_8 == 0
            {
                rbp_1 = -0x8000000000000000;
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h10351ebe9e4824c9(&var_2f8, *rax_8.byte_offset(8), *rax_8.byte_offset(0x10));
                rbp_1 = var_2f8;
                arg2 = *var_2f8[8];
                r14_2 = var_2e8;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h07c2de588eccaa05(&var_2f8, "-failed to open random source fa…", 1);
            let mut r12_1: i64 = var_2f8;
            let mut r15_1: i64 = *var_2f8[8];
            
            if rbp_1 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hda7a5348c59c9f41(
                    r12_1, r15_1);
                r15_1 = arg2;
                r12_1 = rbp_1;
            }
            else
            {
                r14_2 = var_2e8;
            }
            
            let rax_9: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h69219f20d5bc9bd7(&var_3c8);
            
            if rax_9 == 0
            {
                var_3e8 = r12_1;
                *var_3e8[8] = r15_1;
                var_3d8 = r14_2;
                let var_3f0_3: i64 = 0;
                rax_7 = 0;
                goto 'label_45f287;
            }
            
            let rcx_8: i64 = *rax_9.byte_offset(8);
            let rax_10: i64 = *rax_9.byte_offset(0x10);
            var_438 = 1;
            let var_430: i64 = rcx_8;
            var_428 = rax_10;
            *var_428[8] = 1;
            result_2 = &var_438;
            let var_368_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_2f8 = &data_4f8fa0;
            *var_2f8[8] = 2;
            let mut var_2d8: i128;
            var_2d8 = 0;
            var_2e8 = &result_2;
            let mut var_2e0_1: i64 = 1;
            let mut var_310: i128;
            core::option::Option$LT$T$GT$::map_or_else::h0b421a2599015f91(&var_310, &var_2f8);
            var_2e0_1 = 1;
            var_2f8 = var_310;
            let var_300: i64;
            var_2e8 = var_300;
            result = alloc::boxed::Box$LT$T$GT$::new::h27ff8fca799d73dd(&var_2f8);
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hda7a5348c59c9f41(r12_1, 
                r15_1);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h05c4f566b5c53a35(&var_350);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_1);
    }
    result
}
