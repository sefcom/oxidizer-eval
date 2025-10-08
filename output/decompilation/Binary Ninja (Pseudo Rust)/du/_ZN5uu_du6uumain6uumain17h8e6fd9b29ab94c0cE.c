
  fn uu_du::uumain::uumain::h8e6fd9b29ab94c0c(arg1: i64) -> u64

{
    let mut var_4e8: i8;
    uu_du::uu_app::habf9d5389fa2ad43(&var_4e8);
    let mut var_6e8: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hf257c367152324ab(&var_6e8, 
        &var_4e8, arg1);
    let rax: i64 = var_6e8;
    let mut result: u64;
    let mut result_1: u64;
    
    if -(rax) != -0x8000000000000000
    {
        let var_6b8: i64;
        let var_760_1: i64 = var_6b8;
        let mut var_6c8: [i8; 0x10];
        let var_770_1: [i8; 0x10] = var_6c8;
        let mut var_6d8: i128;
        let var_780_1: i128 = var_6d8;
        let mut var_790: i64 = rax;
        let result_6: u64 = result_1;
        let rax_2: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_790, "sldfiles0-from-", 1);
        let rax_3: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_790, "ldfiles0-from-", 1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(
            &var_4e8, &var_790, "dfiles0-from-", 1);
        let mut rdx_1: *mut i8 = &var_4e8;
        let rax_4: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4("dfiles0-from-", 
            1, rdx_1);
        let mut rsi_3: *mut i8;
        
        if rax_4 == 0
        {
            rsi_3 = nullptr;
        }
        else
        {
            rsi_3 = *rax_4.byte_offset(8);
            rdx_1 = *rax_4.byte_offset(0x10);
        }
        
        uu_du::parse_depth::hceb993b72658530c(&var_4e8, rsi_3, rdx_1, rax_2, rax_4);
        let result_2: u64;
        result = result_2;
        let mut result_18: *mut *mut c_void;
        let result_25: *mut *mut c_void = result_18;
        
        if (var_4e8 & 1) == 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(
                &var_4e8, &var_790, "files0-from-", 0xb);
            let rax_5: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4(
                "files0-from-", 0xb, &var_4e8);
            let mut var_738: i64;
            let mut result_7: u64;
            let mut result_21: *mut *mut c_void;
            let mut var_4c8: [i8; 0x10];
            let mut var_4a8: *mut i64;
            
            if rax_5 == 0
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1e8d9c077ce615df(&var_4e8, &var_790);
                let mut var_1e8: i64;
                clap_builder::parser::error::MatchesError::unwrap::hbec4f085d5806c39(&var_1e8, 
                    &var_4e8);
                
                if var_1e8 == 0
                {
                    let result_19: u64 =
                        alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18, 0);
                    
                    if result_19 == 0
                    {
                        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                        /* no return */
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7651e926367bff37(&var_4e8, ".invalid -- argument %Y-%m-%d %H…", 1);
                    var_6d8 = result_18;
                    let zmm0_2: i128 = var_4e8;
                    var_6e8 = zmm0_2;
                    *(result_19 + 0x10) = result_18;
                    *result_19 = zmm0_2;
                    var_738 = 1;
                    result_7 = result_19;
                    result_21 = 1;
                }
                else if rax_3 == 0
                {
                    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1aeda11ed83b4b74(&var_4e8);
                    var_6c8 = var_4c8;
                    var_6d8 = result_18;
                    var_6e8 = var_4e8;
                    let var_1b8: i128;
                    let var_4b8_1: i128 = var_1b8;
                    let var_1c8: [i8; 0x10];
                    var_4c8 = var_1c8;
                    let var_1d8: i128;
                    result_18 = var_1d8;
                    var_4e8 = var_1e8;
                    var_4a8 = &var_6e8;
                    core::iter::traits::iterator::Iterator::collect::h22080d4473c3e9d8(&var_738, 
                        &var_4e8);
                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::hb2ba018c11aa0fcc(&var_6e8);
                }
                else
                {
                    core::iter::traits::iterator::Iterator::collect::hc4080f7e7a8dd1fe(&var_738, 
                        &var_1e8);
                }
                
                goto 'label_48323b;
            }
            
            let mut r14_1: i64 = *rax_5.byte_offset(8);
            let mut r12_1: u64 = *rax_5.byte_offset(0x10);
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he7eed17eb63b1446(r14_1, r12_1, "-", 1) == 0
            {
                goto 'label_483127;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(
                &var_4e8, &var_790, "FILEWORDcharJu", 4);
            let mut var_598: *mut i64;
            
            if clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4(
                "FILEWORDcharJu", 4, &var_4e8) == 0
            {
                r14_1 = *rax_5.byte_offset(8);
                r12_1 = *rax_5.byte_offset(0x10);
                'label_483127:
                uu_du::read_files_from::h40a5e404b0358f57(&var_4e8, r14_1, r12_1);
                let rax_12: i64 = var_4e8;
                
                if rax_12 != -0x8000000000000000
                {
                    var_738 = rax_12;
                    result_7 = result_2;
                    result_21 = result_18;
                    'label_48323b:
                    let mut var_798_1: i8 = 3;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_790, "timecodetip:\x1b[3mkeysu128for<\x1b…", 4) != 0
                    {
                        var_798_1 =
                            uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hac9031018db8eaa8(
                            &var_790);
                    }
                    
                    let mut rbx_3: i64 = 1;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "hsibkmblock-size???BUGallSone-fi…", 1) != 0
                    {
                        goto 'label_483324;
                    }
                    
                    let mut result_14: *mut *mut c_void;
                    let mut result_12: *mut *mut c_void;
                    let mut result_5: u64;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "sibkmblock-size???BUGallSone-fil…", 2) == 0
                    {
                        result_14 = 1;
                        rbx_3 = 2;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "bkmblock-size???BUGallSone-file-…", 1) != 0
                        {
                            goto 'label_483324;
                        }
                        
                        result_14 = 0x400;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "kmblock-size???BUGallSone-file-s…", 1) != 0
                        {
                            goto 'label_483324;
                        }
                        
                        result_14 = 0x100000;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "mblock-size???BUGallSone-file-sy…", 1) != 0
                        {
                            goto 'label_483324;
                        }
                        
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(&var_4e8, &var_790, "block-size???BUGallSone-file-sys…", 0xa);
                        let mut rdx_21: *mut i8 = &var_4e8;
                        let rax_57: *mut c_void =
                            clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4(
                            "block-size???BUGallSone-file-sys…", 0xa, rdx_21);
                        let mut rsi_40: *mut c_void;
                        
                        if rax_57 == 0
                        {
                            rsi_40 = nullptr;
                        }
                        else
                        {
                            rsi_40 = *rax_57.byte_offset(8);
                            rdx_21 = *rax_57.byte_offset(0x10);
                        }
                        
                        uu_du::read_block_size::hba09d611c2cef060(&var_4e8, rsi_40, rdx_21);
                        result_5 = var_4e8;
                        result_12 = result_2;
                        
                        if result_5 != 0
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h78ada35842c1c60c(&var_738);
                            result = result_5;
                        }
                        else
                        {
                            result_14 = result_12;
                            rbx_3 = 2;
                            
                            if result_12 != 0
                            {
                                goto 'label_483324;
                            }
                            
                            let mut rax_61: i64;
                            let mut rdx_23: i64;
                            rax_61 =
                                core::option::Option$LT$T$GT$::map_or::he13ac907a9cc0a4c(rax_57);
                            var_6e8 = 0;
                            let var_6e0_1: i64 = rax_61;
                            var_6d8 = rdx_23;
                            *var_6d8[8] = 1;
                            var_598 = &data_544518;
                            let var_590_1: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3abf390e95704a5f;
                            let var_588_1: *mut i64 = &var_6e8;
                            let var_580_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_4e8 = &data_5443f8;
                            let var_4e0_6: i64 = 2;
                            var_4c8[0] = 0;
                            let var_4d8_6: *mut *mut i64 = &var_598;
                            let var_4d0_8: i64 = 2;
                            let mut var_190: ();
                            core::option::Option$LT$T$GT$::map_or_else::h7a5b8d51dc97c2b7(&var_190, 
                                &var_4e8);
                            std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                                alloc::boxed::Box$LT$T$GT$::new::h44b81601374506c4(&var_190), 
                                &data_5444c0);
                            result_5 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h78ada35842c1c60c(&var_738);
                            result = result_5;
                        }
                    }
                    else
                    {
                        rbx_3 = 0;
                        'label_483324:
                        let rax_21: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "allSone-file-systemdereferenceve…", 3);
                        let rax_22: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "Sone-file-systemdereferenceverbo…", 1);
                        let rax_23: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "one-file-systemdereferenceverbos…", 0xf);
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "dereferenceverbosetime-stylecino…", 0xb) == 0
                        {
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "dereference-argsConnection reset…", 0x10) == 0
                            {
                                var_6e8 = -0x7ffffffffffffffe;
                            }
                            else
                            {
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hfec35f2891046d51(&var_4e8, result_7, result_21);
                                var_6d8 = result_18;
                                var_6e8 = var_4e8;
                            }
                        }
                        else
                        {
                            var_6e8 = -0x8000000000000000;
                        }
                        
                        let rax_28: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "verbosetime-stylecinodesthreshol…", 7);
                        uu_du::build_exclude_patterns::he2599e522f595380(&var_4e8, &var_790);
                        let rax_29: i64 = var_4e8;
                        result_12 = result_18;
                        
                        if rax_29 != -0x8000000000000000
                        {
                            let var_6f0_1: i8 = rax_21;
                            let var_6ef_1: i8 = rax_22;
                            let var_6ee_1: i8 = rax_23;
                            let var_708_1: i128 = var_6e8;
                            let var_6f8_1: i64 = var_6d8;
                            let var_6ed_1: i8 = rax_3;
                            let mut var_720: i64 = rax_29;
                            let result_15: *mut *mut c_void = result_12;
                            
                            if var_798_1 != 3
                            {
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(&var_4e8, &var_790, "time-stylecinodesthresholdappare…", 0xa);
                                let mut rdx_7: *mut i8 = &var_4e8;
                                let rax_30: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4("time-stylecinodesthresholdappare…", 0xa, 
                                    rdx_7);
                                let mut rsi_18: i64;
                                
                                if rax_30 == 0
                                {
                                    rsi_18 = 0;
                                }
                                else
                                {
                                    rsi_18 = *rax_30.byte_offset(8);
                                    rdx_7 = *rax_30.byte_offset(0x10);
                                }
                                
                                uu_du::parse_time_style::ha80c5924fa1465d3(&var_4e8, rsi_18, rdx_7);
                                result_5 = result_2;
                                result_12 = result_18;
                                
                                if (var_4e8 & 1) != 0
                                {
                                    goto 'label_483663;
                                }
                                
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7651e926367bff37(&var_4e8, result_5, result_12);
                                goto 'label_48359c;
                            }
                            
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7651e926367bff37(&var_4e8, "%Y-%m-%d %H:%M: warning: options…", 0xe);
                            'label_48359c:
                            let mut var_628: i128 = var_4e8;
                            let rax_32: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "cinodesthresholdapparent-size0fa…", 1);
                            let rax_33: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "inodesthresholdapparent-size0fai…", 6);
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(&var_4e8, &var_790, "thresholdapparent-size0failed to…", 9);
                            let rax_34: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4("thresholdapparent-size0failed to…", 9, 
                                &var_4e8);
                            
                            if rax_34 == 0
                            {
                                result_5 = 2;
                                'label_483694:
                                let mut r14_2: i8 = 1;
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "apparent-size0failed to spawn th…", 0xd) == 0
                                {
                                    r14_2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "bkmblock-size???BUGallSone-file-…", 1);
                                }
                                
                                let mut rax_38: i8 = 0xa;
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "0failed to spawn threadctimestat…", 1) != 0
                                {
                                    rax_38 = 0;
                                }
                                
                                let var_5b8_1: i8 = rax_32;
                                let var_5b7_1: i8 = rax_33;
                                let result_26: *mut *mut c_void = result_25;
                                let result_16: *mut *mut c_void = result_12;
                                let var_5b6_1: i8 = r14_2;
                                let result_22: *mut *mut c_void = result_14;
                                let var_5b4_1: i8 = var_798_1;
                                let zmm0_7: i128 = var_628;
                                let result_23: *mut *mut c_void = result_18;
                                let var_5b3_1: i8 = rax_38;
                                let var_5b5_1: i8 = rax_2;
                                let mut result_8: u64;
                                
                                if rax_33 != 0
                                {
                                    let rax_40: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "apparent-size0failed to spawn th…", 
                                        0xd);
                                    let mut rax_41: i8;
                                    
                                    if rax_40 == 0
                                    {
                                        rax_41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_790, "bkmblock-size???BUGallSone-file-…", 1);
                                    }
                                    
                                    if rax_40 != 0 || rax_41 != 0
                                    {
                                        let mut rax_42: i64;
                                        let mut result_11: u64;
                                        rax_42 = uucore::util_name::h074417a1e6395129();
                                        var_6e8 = rax_42;
                                        result_1 = result_11;
                                        var_598 = &var_6e8;
                                        result_8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3abf390e95704a5f;
                                        var_4e8 = &data_544418;
                                        let var_4e0_1: i64 = 2;
                                        var_4c8[0] = 0;
                                        let var_4d8_1: *mut *mut i64 = &var_598;
                                        let mut var_4d0_2: i64 = 1;
                                        std::io::stdio::_eprint::h57899770eacec2ad(&var_4e8);
                                        var_4e8 = &data_544438;
                                        let var_4e0_2: i64 = 1;
                                        result_18 = 8;
                                        var_4d0_2 = {0};
                                        std::io::stdio::_eprint::h57899770eacec2ad(&var_4e8);
                                    }
                                }
                                
                                std::sync::mpmc::channel::h09ea4bcf5f399c64(&var_4e8);
                                let zmm1_3: i128 = result_18;
                                let mut var_748: i128 = var_4e8;
                                var_4a8 = result_23;
                                let mut var_4b8_2: i128 = zmm0_7;
                                let mut var_4c8_1: [i8; 0x10] = rbx_3;
                                result_18 = result_5;
                                var_4e8 = result;
                                let var_498_1: i128 = zmm1_3;
                                var_6d8 = -0x8000000000000000;
                                var_6e8 = 0;
                                var_6c8[8] = 0;
                                result_12 = 1;
                                std::thread::Builder::spawn_unchecked::h1a74e926b26d7081(&var_598, 
                                    &var_6e8, &var_4e8);
                                let mut var_500: i128;
                                core::result::Result$LT$T$C$E$GT$::expect::h2f06b66bc931a73b(
                                    &var_500, &var_598);
                                let mut var_220: ();
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::ha530788e678a8673(&var_220, &var_738);
                                let mut var_5b0: i64;
                                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2fb691deda856684(&var_5b0, &var_220);
                                let mut rbp_3: i64 = var_5b0;
                                let mut rbx_4: *mut c_void;
                                
                                if rbp_3 != -0x8000000000000000
                                {
                                    loop
                                    {
                                        let var_5a8: i64;
                                        let mut rsi_32: i64 = var_5a8;
                                        let mut var_7a8_1: i8;
                                        var_7a8_1 = rsi_32;
                                        let mut rsi_29: *mut c_void;
                                        let mut var_658: i128;
                                        let var_5a0: u64;
                                        let var_588: i64;
                                        
                                        if result_15 == 0
                                        {
                                            'label_483c13:
                                            uu_du::Stat::new::hd07a900d361a9fcd(&var_598, rsi_32, 
                                                var_5a0, nullptr, &var_720);
                                            
                                            if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_598, 
                                                data_41d730)) != 0xffff
                                            {
                                                let mut var_7a0_1: i8;
                                                var_7a0_1 = rbp_3;
                                                let r14_5: *mut i64 = var_598;
                                                let var_558: i64;
                                                var_798_1 = var_558;
                                                let mut var_750_1: i8;
                                                let var_550: i64;
                                                var_750_1 = var_550;
                                                _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1aeda11ed83b4b74(&var_4e8);
                                                let var_638_1: [i8; 0x10] = var_4c8_1;
                                                let var_648_1: i128 = result_18;
                                                var_658 = var_4e8;
                                                let var_580: i64;
                                                let var_578: i64;
                                                
                                                if (r14_5 & 1) != 0
                                                {
                                                    let mut rbx_6: u64;
                                                    rbx_6 = 1;
                                                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h661577fb3310518c(&var_658, var_588, var_580, var_578);
                                                }
                                                
                                                let result_17: u64 = result_8;
                                                var_4e8 = r14_5;
                                                let var_4d0_6: i64 = var_580;
                                                let var_4d8_5: i64 = var_588;
                                                var_4c8_1[0] = var_578;
                                                let var_560: i64;
                                                *var_4b8_2[8] = var_560;
                                                let var_570: i128;
                                                var_4c8_1 = var_570;
                                                let mut var_4a8_1: i64 = var_798_1;
                                                let var_4a0_1: i64 = var_750_1;
                                                let var_518: i128;
                                                let var_468_1: i128 = var_518;
                                                let var_528: [i8; 0x10];
                                                let var_478_1: [i8; 0x10] = var_528;
                                                let var_538: i128;
                                                let var_488_1: i128 = var_538;
                                                let var_548: i128;
                                                let var_498_2: i128 = var_548;
                                                uu_du::du::h5e7b3b5654d85404(&var_6e8, &var_4e8, 
                                                    &var_720, 0, &var_658, &var_748);
                                                let result_24: *mut *mut c_void = var_6d8;
                                                
                                                if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_6e8, 
                                                    data_41d730)) == 0xffff
                                                {
                                                    result = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h8a613f6ada946d57(result_24);
                                                    'label_4840c3:
                                                    rbp_3 = var_7a0_1;
                                                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uu_du..FileInfo$GT$$GT$::h59a93eb5d5a0c8b8(var_658, *var_658[8]);
                                                    rsi_29 = var_7a8_1;
                                                    'label_4840e7:
                                                    core::mem::drop::ha3c1637ff772b3c5(rbp_3, 
                                                        rsi_29);
                                                    rbx_4 = 1;
                                                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::hb879ab12e0453d40(&var_220);
                                                    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hd2d73872bc1c73e5(&var_500);
                                                    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$uu_du..StatPrintInfo$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::h65223c277f44ec42(&var_748);
                                                    break;
                                                }
                                                
                                                let var_668: [i8; 0x10];
                                                let var_468_2: [i8; 0x10] = var_668;
                                                let var_678: [i8; 0x10];
                                                let var_478_2: [i8; 0x10] = var_678;
                                                let var_688: [i8; 0x10];
                                                let var_488_2: [i8; 0x10] = var_688;
                                                let var_698: i128;
                                                let var_498_3: i128 = var_698;
                                                let var_6a8: i128;
                                                var_4a8_1 = var_6a8;
                                                var_4b8_2 = var_6b8;
                                                var_4c8_1 = var_6c8;
                                                let result_9: u64 = result_1;
                                                var_4e8 = var_6e8;
                                                result_18 = result_24;
                                                let var_4d0_7: i64 = *var_6d8[8];
                                                let var_458_1: i64 = 0;
                                                let mut var_178: [i8; 0x10];
                                                std::sync::mpmc::Sender$LT$T$GT$::send::hde26e4fd3d4a569a(&var_178, var_748, *var_748[8], &var_4e8);
                                                let temp0_8: u32 = _mm_movemask_epi8(
                                                    __pcmpeqb_xmmdq_memdq(var_178, *data_41d8e0));
                                                let mut result_4: u64;
                                                
                                                if temp0_8 != 0xffff
                                                {
                                                    result_4 = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h1faeb4db56da009b(&var_178);
                                                    result = result_4;
                                                }
                                                
                                                if temp0_8 != 0xffff && result_4 != 0
                                                {
                                                    goto 'label_4840c3;
                                                }
                                                
                                                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uu_du..FileInfo$GT$$GT$::h59a93eb5d5a0c8b8(var_658, *var_658[8]);
                                                rbp_3 = var_7a0_1;
                                                rsi_29 = var_7a8_1;
                                            }
                                            else
                                            {
                                                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_du..Stat$C$std..io..error..Error$GT$$GT$::hc73781dfb8b4708d(&var_598);
                                                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_598, var_7a8_1, var_5a0);
                                                var_6e8 = 0;
                                                result_1 = result_8;
                                                *var_6d8[8] = 1;
                                                var_658 = &var_6e8;
                                                *var_658[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                                var_4e8 = &data_544468;
                                                let var_4e0_4: i64 = 2;
                                                var_4c8_1[0] = 0;
                                                let var_4d8_3: *mut i128 = &var_658;
                                                let mut var_4d0_4: i64 = 1;
                                                let mut var_200: i128;
                                                core::option::Option$LT$T$GT$::map_or_else::h7a5b8d51dc97c2b7(&var_200, &var_4e8);
                                                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h3e7c9b5222ed42c0(&var_598);
                                                var_4d0_4 = 1;
                                                var_4e8 = var_200;
                                                let var_1f0: i64;
                                                let var_4d8_4: i64 = var_1f0;
                                                result_18 = alloc::boxed::Box$LT$T$GT$::new::h0e985dccdd4461d4(&var_4e8);
                                                let var_4d0_5: *mut *mut c_void = &data_544560;
                                                let var_4e0_5: i64 = 0;
                                                var_4e8 = 2;
                                                let mut var_d8: [i8; 0x10];
                                                std::sync::mpmc::Sender$LT$T$GT$::send::hde26e4fd3d4a569a(&var_d8, var_748, *var_748[8], &var_4e8);
                                                rsi_29 = var_7a8_1;
                                                
                                                if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_d8, 
                                                    *data_41d8e0)) != 0xffff
                                                {
                                                    let result_3: u64 = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h1faeb4db56da009b(&var_d8);
                                                    result = result_3;
                                                    rsi_29 = var_7a8_1;
                                                    
                                                    if result_3 != 0
                                                    {
                                                        goto 'label_4840e7;
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_598, rsi_32, var_5a0);
                                            let mut result_13: u64 = result_2;
                                            let r14_4: i64 = result_15 * 0x38 + result_13;
                                            let mut i: i8;
                                            
                                            do
                                            {
                                                let mut result_20: u64 = result_13 + 0x38;
                                                
                                                if result_13 == r14_4
                                                {
                                                    result_20 = result_13;
                                                }
                                                
                                                if result_13 == r14_4
                                                {
                                                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h3e7c9b5222ed42c0(&var_598);
                                                    rsi_32 = var_7a8_1;
                                                    goto 'label_483c13;
                                                }
                                                
                                                i = glob::Pattern::matches::ha07a8c317a63e971(
                                                    result_13, result_8, var_588);
                                                result_13 = result_20;
                                            } while i == 0;
                                            
                                            if rax_28 != 0
                                            {
                                                var_6e8 = 0;
                                                result_1 = result_8;
                                                var_6d8 = var_588;
                                                *var_6d8[8] = 1;
                                                var_658 = &var_6e8;
                                                *var_658[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                                var_4e8 = &data_544448;
                                                let var_4e0_3: i64 = 2;
                                                var_4c8_1[0] = 0;
                                                result_18 = &var_658;
                                                let var_4d0_3: i64 = 1;
                                                std::io::stdio::_print::h5e446ff973c02de6(&var_4e8);
                                            }
                                            
                                            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h3e7c9b5222ed42c0(&var_598);
                                            rsi_29 = var_7a8_1;
                                        }
                                        core::mem::drop::ha3c1637ff772b3c5(rbp_3, rsi_29);
                                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2fb691deda856684(&var_5b0, &var_220);
                                        rbp_3 = var_5b0;
                                        
                                        if rbp_3 == -0x8000000000000000
                                        {
                                            goto 'label_48399c;
                                        }
                                    }
                                }
                                else
                                {
                                    'label_48399c:
                                    rbx_4 = 1;
                                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::hb879ab12e0453d40(&var_220);
                                    var_4e8 = var_748;
                                    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$uu_du..StatPrintInfo$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::h65223c277f44ec42(&var_4e8);
                                    let var_4f0: i64;
                                    let var_4d8_2: i64 = var_4f0;
                                    var_4e8 = var_500;
                                    std::thread::JoinInner$LT$T$GT$::join::hc56fb18cbf5b940d(
                                        &var_6e8, &var_4e8);
                                    result = result_1;
                                    
                                    if var_6e8 == 1
                                    {
                                        result = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hbd5ff82507294a37(result, var_6d8);
                                    }
                                    else if result == 0
                                    {
                                        core::ptr::drop_in_place$LT$uu_du..TraversalOptions$GT$::hcc4bf0d4031920a5(&var_720);
                                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h03f64aefb39393f7(&var_790);
                                        return 0;
                                    }
                                }
                                core::ptr::drop_in_place$LT$uu_du..TraversalOptions$GT$::hcc4bf0d4031920a5(&var_720);
                            }
                            else
                            {
                                uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h65ca9d671e2d2d73(&var_4e8, *rax_34.byte_offset(8), *rax_34.byte_offset(0x10));
                                let result_10: u64 = var_4e8;
                                result_5 = result_10;
                                
                                if result_10 != 2
                                {
                                    result_5 = result_2;
                                }
                                
                                result_12 = result_18;
                                
                                if (result_10 & 1) == 0
                                {
                                    goto 'label_483694;
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hab3f62d631b46647(&var_628);
                                'label_483663:
                                core::ptr::drop_in_place$LT$uu_du..TraversalOptions$GT$::hcc4bf0d4031920a5(&var_720);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h78ada35842c1c60c(&var_738);
                                result = result_5;
                            }
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$uu_du..Deref$GT$::h93f1fdf341a019aa(
                                &var_6e8);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h78ada35842c1c60c(&var_738);
                            result = result_2;
                        }
                    }
                }
                else
                {
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2517011d0d696a1e(&var_4e8, &var_790, "FILEWORDcharJu", 4);
                let rax_8: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hfa815ded740039e4(
                    "FILEWORDcharJu", 4, &var_4e8);
                
                if rax_8 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                let rcx_4: i64 = *rax_8.byte_offset(8);
                let rax_9: i64 = *rax_8.byte_offset(0x10);
                var_6e8 = 0;
                let var_6e0: i64 = rcx_4;
                var_6d8 = rax_9;
                *var_6d8[8] = 1;
                var_598 = &var_6e8;
                let var_590: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_4e8 = &data_5443d8;
                let var_4e0: i64 = 2;
                var_4c8[0] = 0;
                let var_4d8: *mut *mut i64 = &var_598;
                let var_4d0_1: i64 = 1;
                let mut var_1a8: ();
                core::option::Option$LT$T$GT$::map_or_else::h7a5b8d51dc97c2b7(&var_1a8, &var_4e8);
                std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                    alloc::boxed::Box$LT$T$GT$::new::h44b81601374506c4(&var_1a8), &data_5444c0);
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            }
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h03f64aefb39393f7(&var_790);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_1);
    }
    result
}
