
  fn uu_pr::build_options::h49ff7384d8a5a7b3(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64, arg4: u64, arg5: i64, arg6: u64) -> *mut i64

{
    let mut r15: *mut i64 = arg1;
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "form-feedUse a <form-feed> for n…", 9);
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "mergeMerge files. Standard outpu…", 5);
    let mut var_328: i128;
    let mut var_318: i64;
    
    if rax_1 == 0
    {
        'label_533cd4:
        let var_2d0_1: *mut i64 = r15;
        let rax_5: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "mergeMerge files. Standard outpu…", 5);
        let mut r12_1: *const i8 = "headerUse the string header to r…";
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0e26f3cdbc6a68b8(
            &var_328, arg2, "headerUse the string header to r…", 6);
        let rax_6: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hfed9fdb9bcd55c4d(
            "headerUse the string header to r…", 6, &var_328);
        let mut rcx: *mut i8;
        let mut r13_1: i64;
        let mut r15_1: i64;
        
        if rax_6 == 0
        {
            r15_1 = 0;
            
            if rax_1 != 0
            {
                r13_1 = 1;
                rcx = nullptr;
            }
            else
            {
                'label_533d51:
                
                if arg4 == 0
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
                    /* no return */
                }
                
                let rbx_1: i64 = *arg3;
                let rbp_1: *mut i8 = arg3[1];
                r13_1 = 1;
                let rax_7: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h15fe555904e25436(rbx_1, rbp_1, "-cannot specify number of column…", 1);
                rcx = nullptr;
                
                if rax_7 == 0
                {
                    rcx = rbp_1;
                }
                
                if rax_7 == 0
                {
                    r13_1 = rbx_1;
                }
            }
        }
        else
        {
            r15_1 = *rax_6.byte_offset(8);
            r12_1 = *rax_6.byte_offset(0x10);
            
            if rax_1 == 0
            {
                goto 'label_533d51;
            }
            
            r13_1 = 1;
            rcx = nullptr;
        }
        
        if r15_1 == 0
        {
            r12_1 = rcx;
        }
        
        if r15_1 != 0
        {
            r13_1 = r15_1;
        }
        
        let mut var_118: i128;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h23093dee60541fbc(&var_118, r13_1, r12_1);
        _$LT$uu_pr..NumberingMode$u20$as$u20$core..default..Default$GT$::default::hd7c807d30f792e21(
            &var_328);
        let mut var_308: u64;
        let mut r12_2: u64 = var_308;
        core::ptr::drop_in_place$LT$uu_pr..NumberingMode$GT$::h50ed004e0d36ef9c(&var_328);
        let mut var_2b8: *const i8;
        uu_pr::parse_usize::ha0c8a08d466c6b5c(&var_2b8, arg2, "first-line-numberstart counting …", 
            0x11);
        *var_328[8] = r12_2;
        var_328 = -0x7ffffffffffffffb;
        let r15_2: *const i8 = var_2b8;
        let mut var_2b0: u64;
        let mut var_2a8: i128;
        let mut var_188: i128;
        
        if r15_2 != -0x7ffffffffffffffa
        {
            r12_2 = var_2b0;
            var_188 = var_2a8;
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$uu_pr..PrError$GT$$GT$::h00320ca948c261b3(&var_328);
        }
        
        if r15_2 != -0x7ffffffffffffffa && r15_2 != -0x7ffffffffffffffb
        {
            *var_2d0_1.byte_offset(0x18) = var_188;
            var_2d0_1[1] = r15_2;
            r15 = var_2d0_1;
            var_2d0_1[2] = r12_2;
            *var_2d0_1 = 2;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0e26f3cdbc6a68b8(
                &var_328, arg2, "number-linesProvide width digit …", 0xc);
            let rax_8: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hfed9fdb9bcd55c4d(
                "number-linesProvide width digit …", 0xc, &var_328);
            let mut var_298: u64;
            
            if rax_8 == 0
            {
                var_2b8 = -0x8000000000000000;
            }
            else
            {
                uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::hd85a3619a2918b8f(&var_328, 
                    r12_2, *rax_8.byte_offset(8), *rax_8.byte_offset(0x10));
                var_298 = var_308;
                var_2a8 = var_318;
                var_2b8 = var_328;
            }
            
            core::option::Option$LT$T$GT$::or_else::h6c44d0b2f3b39bf1(&var_188, &var_2b8, arg2);
            let mut var_238: *mut c_void;
            var_238 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "double-spaceProduce output that …", 0xc);
            r15 = var_2d0_1;
            
            if var_238 == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h23093dee60541fbc(&var_328, "\n argument -cannot specify numb…", 1);
            }
            else
            {
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::hfa961e56f6d04653(&var_328, 
                    "\n argument -cannot specify numb…", 2);
            }
            
            let var_1f8_1: i64 = var_318;
            let mut var_208: i128 = var_328;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h23093dee60541fbc(&var_328, "\n argument -cannot specify numb…", 1);
            let var_1b8_1: i64 = var_318;
            let mut var_1c8: i128 = var_328;
            let mut var_268: u64;
            let mut var_150: i128;
            
            if rax_1 != 0
            {
                'label_533fbc:
                chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_268);
                var_2b8 = "%b %d %H:%M %Yinvalid --pages ar…";
                var_2b0 = 0xe;
                var_2a8 = 8;
                *var_2a8[8] = 0;
                var_298 = 0;
                chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h05824ae9a378bc31(
                    &var_328, &var_268, &var_2b8);
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf8111304c9d8674f(&var_150, &var_328);
                core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::hacecf28d143e4d9c(&var_328);
            }
            else
            {
                if arg4 == 0
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
                    /* no return */
                }
                
                let r14_1: i64 = *arg3;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h15fe555904e25436(r14_1, arg3[1], "-cannot specify number of column…", 1) != 0
                {
                    goto 'label_533fbc;
                }
                
                uu_pr::file_last_modified_time::hae8021e2b64db77d(&var_150, r14_1);
            }
            
            let mut rax_15: i32;
            rax_15 = 1;
            let var_32c_1: i32 = rax_15;
            regex::regex::string::Regex::new::h830f62d081924685(&var_328, 
                "\s*\+(\d+:*\d*)\s*\s*-(\d+)\s*/h…");
            let mut var_100: ();
            core::result::Result$LT$T$C$E$GT$::unwrap::he4d140c960df2cf7(&var_100, &var_328);
            regex::regex::string::Regex::captures_at::hcab2228dfbb616d4(&var_2b8, &var_100, arg5, 
                arg6);
            let var_288: i128;
            let var_278: i64;
            let var_260: u64;
            let var_258: i128;
            let mut rax_18: u64;
            let mut rcx_3: u64;
            let mut r12_4: u64;
            let mut zmm0_8: i128;
            
            if var_2b8 != 2
            {
                let var_2e8_1: i64 = var_278;
                let var_2f8_1: i128 = var_288;
                var_308 = var_298;
                var_318 = var_2a8;
                var_328 = var_2b8;
                uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h35ecd20f304000c8(&var_268, 
                    &var_328);
                rcx_3 = var_268;
                rax_18 = var_260;
                
                if rcx_3 == -0x7ffffffffffffffb
                {
                    r12_4 = rax_18;
                    goto 'label_53419a;
                }
                
                r12_4 = 1;
                
                if rcx_3 == -0x7ffffffffffffffa
                {
                    goto 'label_53419a;
                }
                
                zmm0_8 = var_258;
                'label_534b1d:
                *r15.byte_offset(0x18) = zmm0_8;
                r15[1] = rcx_3;
                r15[2] = rax_18;
                *r15 = 2;
            }
            else
            {
                r12_4 = 1;
                'label_53419a:
                let mut rsi_16: *mut c_void =
                    regex::regex::string::Regex::captures_at::hcab2228dfbb616d4(&var_2b8, &var_100, 
                    arg5, arg6);
                let mut rdi_31: *mut i8;
                
                if var_2b8 != 2
                {
                    let var_2e8_2: i64 = var_278;
                    let var_2f8_2: i128 = var_288;
                    var_308 = var_298;
                    var_318 = var_2a8;
                    var_328 = var_2b8;
                    let mut rax_20: *mut i8;
                    let mut rdx_11: *mut c_void;
                    rax_20 = uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::hdc0f48f339ad165d(
                        &var_328);
                    rdi_31 = rax_20;
                    rsi_16 = rdx_11;
                }
                else
                {
                    rdi_31 = nullptr;
                }
                
                let mut rax_21: *mut i8;
                let mut rdx_12: i64;
                rax_21 = core::option::Option$LT$T$GT$::filter::h50c026d6fb7a436e(rdi_31, rsi_16);
                let mut var_2c0: i8;
                let mut var_240: u64;
                
                if rax_21 == 0
                {
                    'label_53424c:
                    var_2c0 = 0;
                    'label_534275:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0e26f3cdbc6a68b8(&var_328, arg2, "pagesBegin and stop printing wit…", 5);
                    let rax_23: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::hfed9fdb9bcd55c4d(
                        "pagesBegin and stop printing wit…", 5, &var_328);
                    
                    if rax_23 != 0
                    {
                        uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::ha083c7e1f7721869(
                            &var_328, *rax_23.byte_offset(8), *rax_23.byte_offset(0x10));
                        let rax_24: *mut i8 = var_328;
                        var_268 = var_328;
                        
                        if rax_24 != -0x8000000000000000
                        {
                            var_2b0 = var_268;
                            var_2b8 = rax_24;
                            core::ops::function::FnOnce::call_once::hb5ea1e12526abf18(&var_328, 
                                arg2, &var_2b8);
                            rcx_3 = var_328;
                            rax_18 = *var_328[8];
                            
                            if rcx_3 == -0x7ffffffffffffffb
                            {
                                r12_4 = rax_18;
                            }
                            else if rcx_3 != -0x7ffffffffffffffa
                            {
                                zmm0_8 = var_318;
                                goto 'label_534b1d;
                            }
                        }
                    }
                    
                    let mut var_1d0: u64 = r12_4;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0e26f3cdbc6a68b8(&var_328, arg2, "pagesBegin and stop printing wit…", 5);
                    let rax_26: *mut c_void =
                        core::option::Option$LT$T$GT$::filter::h9a2e099b43cab395(
                        clap_builder::parser::error::MatchesError::unwrap::hfed9fdb9bcd55c4d(
                        "pagesBegin and stop printing wit…", 5, &var_328));
                    
                    if rax_26 != 0
                    {
                        uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h89928382ec4813e7(
                            &var_328, *rax_26.byte_offset(8), *rax_26.byte_offset(0x10));
                        let rax_27: *mut i8 = var_328;
                        var_268 = var_328;
                        
                        if rax_27 == -0x8000000000000000
                        {
                            goto 'label_534425;
                        }
                        
                        var_2b0 = var_268;
                        var_2b8 = rax_27;
                        core::ops::function::FnOnce::call_once::hb5ea1e12526abf18(&var_328, arg2, 
                            &var_2b8);
                        rcx_3 = var_328;
                        rax_18 = *var_328[8];
                        
                        if rcx_3 == -0x7ffffffffffffffb
                        {
                            var_2c0 = 1;
                            var_240 = rax_18;
                            var_268 = var_240;
                            
                            if r12_4 > var_240
                            {
                                goto 'label_534452;
                            }
                            
                            goto 'label_534527;
                        }
                        
                        if rcx_3 != -0x7ffffffffffffffa
                        {
                            zmm0_8 = var_318;
                            goto 'label_534b1d;
                        }
                    }
                    
                    'label_534425:
                    
                    if var_2c0 == 0
                    {
                        'label_534527:
                        uu_pr::parse_usize::ha0c8a08d466c6b5c(&var_2b8, arg2, 
                            "lengthOverride the 66-line defau…", 6);
                        let mut r12_6: u64 = (rax ^ 1) * 3 + 0x3f;
                        *var_328[8] = r12_6;
                        var_328 = -0x7ffffffffffffffb;
                        let r14_2: *const i8 = var_2b8;
                        let mut r14_3: u64;
                        
                        if r14_2 != -0x7ffffffffffffffa
                        {
                            r12_6 = var_2b0;
                            var_268 = var_2a8;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$uu_pr..PrError$GT$$GT$::h00320ca948c261b3(&var_328);
                            
                            if r14_2 == -0x7ffffffffffffffb
                            {
                                if r12_6 >= 0xa
                                {
                                    goto 'label_534571;
                                }
                                
                                r14_3 = 0;
                                goto 'label_534588;
                            }
                            
                            *r15.byte_offset(0x18) = var_268;
                            r15[1] = r14_2;
                            r15[2] = r12_6;
                            *r15 = 2;
                        }
                        else
                        {
                            'label_534571:
                            r14_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "omit-headerWrite neither the fiv…", 0xb) ^ 1;
                            r12_6 -= 0xa;
                            'label_534588:
                            let mut var_1a8: i128;
                            let mut var_198: i64;
                            
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "form-feedUse a <form-feed> for n…", 9) == 0
                            {
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h23093dee60541fbc(&var_328, "\n argument -cannot specify numb…", 1);
                                var_198 = var_318;
                                var_1a8 = var_328;
                            }
                            else
                            {
                                let rax_35: u64 =
                                    alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 1);
                                
                                if rax_35 == 0
                                {
                                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                                    /* no return */
                                }
                                
                                *rax_35 = 0xc;
                                let mut var_e0: i64 = 1;
                                let var_d8_1: u64 = rax_35;
                                let var_d0_1: i64 = 1;
                                alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_328, 
                                    &var_e0);
                                core::result::Result$LT$T$C$E$GT$::unwrap::hd6c0c86cfb4923f7(
                                    &var_1a8, &var_328);
                            }
                            
                            let mut var_332: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "acrossModify the effect of the -…", 6);
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0e26f3cdbc6a68b8(&var_328, arg2, "sep-stringseparate columns by ST…", 0xa);
                            let mut rax_38: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hfed9fdb9bcd55c4d("sep-stringseparate columns by ST…", 0xa, 
                                &var_328);
                            let var_20c_1: i8 = r14_3;
                            let mut var_1e8: i64;
                            let mut var_1e0: i128;
                            let mut rax_39: i64;
                            
                            if rax_38 != 0
                            {
                                'label_534704:
                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_328, rax_38);
                                rax_39 = var_328;
                                var_2b8 = var_328;
                                
                                if rax_39 == -0x8000000000000000
                                {
                                    goto 'label_534725;
                                }
                                
                                var_1e0 = var_2b8;
                                var_1e8 = rax_39;
                            }
                            else
                            {
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0e26f3cdbc6a68b8(&var_328, arg2, "separatorSeparate text columns b…", 9);
                                rax_38 = clap_builder::parser::error::MatchesError::unwrap::hfed9fdb9bcd55c4d("separatorSeparate text columns b…", 9, &var_328);
                                
                                if rax_38 != 0
                                {
                                    goto 'label_534704;
                                }
                                
                                'label_534725:
                                var_268 = 0;
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h23093dee60541fbc(&var_328, 
                                    core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(9, 
                                        &var_268), 
                                    1);
                                *var_1e0[8] = var_318;
                                var_1e8 = var_328;
                            }
                            
                            rax_39 = 1;
                            let var_330_1: i32 = rax_39;
                            r14_3 = 1;
                            let mut rbp_2: u64 = 0x48;
                            
                            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "widthSet the width of the line t…", 5) != 0
                            {
                                r14_3 = 1;
                                rbp_2 = 0x48;
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "separatorSeparate text columns b…", 9) != 0
                                {
                                    rbp_2 = 0x200;
                                }
                            }
                            
                            r14_3 = 1;
                            uu_pr::parse_usize::ha0c8a08d466c6b5c(&var_2b8, arg2, 
                                "widthSet the width of the line t…", 5);
                            *var_328[8] = rbp_2;
                            var_328 = -0x7ffffffffffffffb;
                            let mut r15_3: u64 = var_2b8;
                            
                            if r15_3 != -0x7ffffffffffffffa
                            {
                                rbp_2 = var_2b0;
                                var_268 = var_2a8;
                                r14_3 = 1;
                                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$uu_pr..PrError$GT$$GT$::h00320ca948c261b3(&var_328);
                            }
                            
                            if r15_3 != -0x7ffffffffffffffa && r15_3 != -0x7ffffffffffffffb
                            {
                                *var_2d0_1.byte_offset(0x18) = var_268;
                                var_2d0_1[1] = r15_3;
                                r15 = var_2d0_1;
                                var_2d0_1[2] = rbp_2;
                                *var_2d0_1 = 2;
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_1e8);
                            }
                            else
                            {
                                let mut var_218: u64 = rbp_2;
                                r14_3 = 1;
                                let rax_43: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "join-linesmerge full lines, turn…", 0xa);
                                let mut rax_44: i64;
                                
                                if rax_43 == 0
                                {
                                    r14_3 = 1;
                                    uu_pr::parse_usize::ha0c8a08d466c6b5c(&var_328, arg2, 
                                        "page-widthset page width to PAGE…", 0xa);
                                    rax_44 = var_328;
                                }
                                
                                let mut var_228_1: i64;
                                
                                if rax_43 == 0 && rax_44 != -0x7ffffffffffffffa
                                {
                                    r15_3 = *var_328[8];
                                    var_228_1 = 1;
                                    
                                    if rax_44 == -0x7ffffffffffffffb
                                    {
                                        goto 'label_5348a9;
                                    }
                                    
                                    r15 = var_2d0_1;
                                    *r15.byte_offset(0x18) = var_318;
                                    r15[1] = rax_44;
                                    r15[2] = r15_3;
                                    *r15 = 2;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_1e8);
                                }
                                else
                                {
                                    var_228_1 = 0;
                                    'label_5348a9:
                                    r14_3 = 1;
                                    regex::regex::string::Regex::new::h830f62d081924685(&var_328, 
                                        "\s*-(\d+)\s*/home/34r7hm4n/.carg…");
                                    r14_3 = 1;
                                    let mut var_c8: ();
                                    core::result::Result$LT$T$C$E$GT$::unwrap::he4d140c960df2cf7(
                                        &var_c8, &var_328);
                                    regex::regex::string::Regex::captures_at::hcab2228dfbb616d4(
                                        &var_2b8, &var_c8, arg5, arg6);
                                    let mut rax_46: u64;
                                    let mut rcx_7: *mut i64;
                                    let mut zmm0_23: i128;
                                    
                                    if var_2b8 == 2
                                    {
                                        'label_53498d:
                                        rbp_2 = 0;
                                        'label_5349a3:
                                        uu_pr::parse_usize::ha0c8a08d466c6b5c(&var_328, arg2, 
                                            "columnProduce multi-column outpu…", 6);
                                        rax_46 = var_328;
                                        let mut var_310: u64;
                                        let mut var_2c8_1: u64;
                                        
                                        if rax_46 != -0x7ffffffffffffffa
                                        {
                                            r14_3 = *var_328[8];
                                            rcx_7 = var_2d0_1;
                                            
                                            if rax_46 != -0x7ffffffffffffffb
                                            {
                                                zmm0_23 = var_318;
                                                goto 'label_534c7e;
                                            }
                                            
                                            *var_2a8[8] = &var_218;
                                            var_2b8 = var_1e8;
                                            var_2a8 = *var_1e0[8];
                                            'label_534a71:
                                            var_2c8_1 = r15_3;
                                            var_318 = var_2a8;
                                            var_328 = var_2b8;
                                            var_310 = var_218;
                                            var_308 = r14_3;
                                            let var_300_1: i8 = var_332;
                                        }
                                        else
                                        {
                                            *var_2a8[8] = &var_218;
                                            var_2b8 = var_1e8;
                                            var_2a8 = *var_1e0[8];
                                            let var_298_1: *mut i8 = &var_332;
                                            
                                            if rbp_2 != 0
                                            {
                                                goto 'label_534a71;
                                            }
                                            
                                            var_2c8_1 = r15_3;
                                            var_328 = -0x8000000000000000;
                                            core::ptr::drop_in_place$LT$uu_pr..NumberingMode$GT$::h50ed004e0d36ef9c(&var_2b8);
                                        }
                                        
                                        uu_pr::parse_usize::ha0c8a08d466c6b5c(&var_268, arg2, 
                                            "indentEach line of output shall …", 6);
                                        let mut var_2b0_2: i64 = 0;
                                        var_2b8 = -0x8000000000000005;
                                        let r15_4: u64 = var_268;
                                        let mut r14_4: u64;
                                        
                                        if r15_4 == -0x7ffffffffffffffa
                                        {
                                            r14_4 = 0;
                                            'label_534b76:
                                            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::hfa961e56f6d04653(&var_2b8, " \s*\+(\d+:*\d*)\s*\s*-(\d+)\s*/…", r14_4);
                                            let zmm0_26: i128 = var_2b8;
                                            let rax_53: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
                                                "join-linesmerge full lines, turn…", 0xa);
                                            let r14_5: u64 = rax_5;
                                            let mut rdx_25: i64;
                                            
                                            if var_328 == -0x8000000000000000
                                            {
                                                'label_534c0f:
                                                uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h247c76d9d2a3c2bc(&var_2b8, r14_5);
                                                
                                                if rax_53 == 0
                                                {
                                                    'label_534d78:
                                                    let rax_57: i64 = var_328;
                                                    let mut rcx_10: u64;
                                                    
                                                    if rax_57 == -0x8000000000000000
                                                    {
                                                        rcx_10 = 0;
                                                    }
                                                    else
                                                    {
                                                        rcx_10 = var_308;
                                                    }
                                                    
                                                    if r14_5 != 0
                                                    {
                                                        rcx_10 = arg4;
                                                    }
                                                    
                                                    rdx_25 = var_228_1;
                                                    
                                                    if rcx_10 >= 2
                                                    {
                                                        var_2c8_1 = 0x48;
                                                        
                                                        if rax_57 != -0x8000000000000000
                                                        {
                                                            var_2c8_1 = var_310;
                                                        }
                                                        
                                                        rdx_25 = 1;
                                                    }
                                                }
                                                else
                                                {
                                                    rdx_25 = 0;
                                                }
                                            }
                                            else
                                            {
                                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_2b8, &var_328);
                                                let rax_54: *const i8 = var_2b8;
                                                var_268 = var_2b0_2;
                                                
                                                if rax_54 == -0x8000000000000000
                                                {
                                                    goto 'label_534c0f;
                                                }
                                                
                                                var_2b0_2 = var_268;
                                                var_2b8 = rax_54;
                                                
                                                if rax_53 == 0
                                                {
                                                    goto 'label_534d78;
                                                }
                                                
                                                rdx_25 = 0;
                                            }
                                            
                                            let var_168: i64;
                                            var_2d0_1[0x1f] = var_168;
                                            let zmm0_27: i128 = var_188;
                                            let var_178: i128;
                                            *var_2d0_1.byte_offset(0xe8) = var_178;
                                            *var_2d0_1.byte_offset(0xd8) = zmm0_27;
                                            let var_108: i64;
                                            var_2d0_1[8] = var_108;
                                            *var_2d0_1.byte_offset(0x30) = var_118;
                                            var_2d0_1[0xb] = var_1b8_1;
                                            *var_2d0_1.byte_offset(0x48) = var_1c8;
                                            var_2d0_1[0xe] = var_1f8_1;
                                            *var_2d0_1.byte_offset(0x60) = var_208;
                                            *var_2d0_1.byte_offset(0x78) = var_150;
                                            let var_140: i64;
                                            var_2d0_1[0x11] = var_140;
                                            let rax_64: u64 = var_1d0;
                                            *var_2d0_1.byte_offset(0x90) = var_1a8;
                                            var_2d0_1[0x14] = var_198;
                                            *var_2d0_1.byte_offset(0x100) = var_328;
                                            *var_2d0_1.byte_offset(0x110) = var_318;
                                            *var_2d0_1.byte_offset(0x120) = var_308;
                                            *var_2d0_1.byte_offset(0xa8) = zmm0_26;
                                            var_2d0_1[0x17] = var_2a8;
                                            *var_2d0_1.byte_offset(0xc0) = var_2b8;
                                            var_2d0_1[0x1a] = var_2a8;
                                            *var_2d0_1 = var_2c0;
                                            var_2d0_1[1] = var_240;
                                            var_2d0_1[2] = r14_5;
                                            var_2d0_1[3] = arg4;
                                            var_2d0_1[4] = rdx_25;
                                            var_2d0_1[5] = var_2c8_1;
                                            var_2d0_1[0x26] = rax_64;
                                            var_2d0_1[0x27] = r12_6;
                                            var_2d0_1[0x28] = var_238;
                                            *var_2d0_1.byte_offset(0x141) = var_20c_1;
                                            *var_2d0_1.byte_offset(0x142) = rax;
                                            *var_2d0_1.byte_offset(0x143) = rax_53;
                                            let var_330_2: i32 = 0;
                                            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::ha9f17d283cda3393(&var_c8);
                                            let var_32c_2: i32 = 0;
                                            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::ha9f17d283cda3393(&var_100);
                                            return var_2d0_1;
                                        }
                                        
                                        r14_4 = var_260;
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$uu_pr..PrError$GT$$GT$::h00320ca948c261b3(&var_2b8);
                                        
                                        if r15_4 == -0x7ffffffffffffffb
                                        {
                                            goto 'label_534b76;
                                        }
                                        
                                        *var_2d0_1.byte_offset(0x18) = var_258;
                                        var_2d0_1[1] = r15_4;
                                        var_2d0_1[2] = r14_4;
                                        *var_2d0_1 = 2;
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_pr..ColumnModeOptions$GT$$GT$::h167fafcfa954d42d(&var_328);
                                        r14_3 = 0;
                                    }
                                    else
                                    {
                                        let var_2e8_3: i64 = var_278;
                                        let var_2f8_3: i128 = var_288;
                                        var_308 = var_298;
                                        var_318 = var_2a8;
                                        var_328 = var_2b8;
                                        uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h3624a462462de9d1(&var_268, &var_328);
                                        rax_46 = var_268;
                                        r14_3 = var_260;
                                        
                                        if rax_46 == -0x7ffffffffffffffb
                                        {
                                            rbp_2 = 1;
                                            goto 'label_5349a3;
                                        }
                                        
                                        if rax_46 == -0x7ffffffffffffffa
                                        {
                                            goto 'label_53498d;
                                        }
                                        
                                        zmm0_23 = var_258;
                                        rcx_7 = var_2d0_1;
                                        'label_534c7e:
                                        *rcx_7.byte_offset(0x18) = zmm0_23;
                                        rcx_7[1] = rax_46;
                                        rcx_7[2] = r14_3;
                                        *rcx_7 = 2;
                                        r14_3 = 1;
                                    }
                                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::ha9f17d283cda3393(&var_c8);
                                    r15 = var_2d0_1;
                                    
                                    if r14_3 != 0
                                    {
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_1e8);
                                    }
                                }
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_1a8);
                        }
                    }
                    else
                    {
                        var_268 = var_240;
                        
                        if r12_4 <= var_240
                        {
                            goto 'label_534527;
                        }
                        
                        'label_534452:
                        var_2b8 = &var_1d0;
                        let var_2b0_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                        var_2a8 = &var_268;
                        *var_2a8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                        var_328 = &data_6691d8;
                        *var_328[8] = 3;
                        let var_308_1: i64 = 0;
                        let var_318_1: *const *const i8 = &var_2b8;
                        let var_310_1: i64 = 2;
                        let mut var_48: i128;
                        core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(&var_48, 
                            &var_328);
                        let var_38: i64;
                        r15[4] = var_38;
                        *r15.byte_offset(0x10) = var_48;
                        r15[1] = -0x7fffffffffffffff;
                        *r15 = 2;
                    }
                }
                else
                {
                    uu_pr::build_options::_$u7b$$u7b$closure$u7d$$u7d$::h90dcf61c779a8cd3(&var_328, 
                        rax_21, rdx_12);
                    let rax_22: i64 = var_328;
                    var_240 = *var_328[8];
                    
                    if rax_22 == -0x7ffffffffffffffb
                    {
                        var_2c0 = 1;
                        goto 'label_534275;
                    }
                    
                    if rax_22 == -0x7ffffffffffffffa
                    {
                        goto 'label_53424c;
                    }
                    
                    *r15.byte_offset(0x18) = var_318;
                    r15[1] = rax_22;
                    r15[2] = var_240;
                    *r15 = 2;
                }
            }
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::ha9f17d283cda3393(
                &var_100);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_150);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_1c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_208);
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_pr..NumberingMode$GT$$GT$::h7dc594af5be42e22(&var_188);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_118);
    }
    else
    {
        let mut rdx: u64;
        let mut rsi: *const i8;
        let mut rdi_3: *mut i64;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            arg2, "columnProduce multi-column outpu…", 6) == 0
        {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "acrossModify the effect of the -…", 6) == 0
            {
                goto 'label_533cd4;
            }
            
            rsi = "cannot specify both printing acr…";
            rdi_3 = &var_328;
            rdx = 0x3c;
            goto 'label_533c9e;
        }
        
        rsi = "cannot specify number of columns…";
        rdi_3 = &var_328;
        rdx = 0x3a;
        'label_533c9e:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h23093dee60541fbc(rdi_3, rsi, rdx);
        r15[1] = -0x7fffffffffffffff;
        *r15.byte_offset(0x10) = var_328;
        r15[4] = var_318;
        *r15 = 2;
    }
    r15
}
