
  fn uu_cut::uumain::uumain::had17db8be8afe5d0(arg1: i64) -> u64

{
    let mut var_368: ();
    core::iter::traits::iterator::Iterator::collect::h302c5a2113f97498(&var_368, 
        core::iter::traits::iterator::Iterator::map::h1884fc5b1cb6b08e(arg1));
    let mut var_2f8: i32;
    uu_cut::uu_app::h38d211b96a5c967d(&var_2f8);
    let mut var_468: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h46fc889720c13b83(&var_468, 
        &var_2f8, &var_368);
    let rax_1: i64 = var_468;
    let mut var_460: i64;
    
    if -(rax_1) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_460);
    }
    
    let mut var_438: i64;
    let var_3d0: i64 = var_438;
    let mut var_448: i128;
    let var_3e0: i128 = var_448;
    let mut var_458: i128;
    let var_3f0: i128 = var_458;
    let mut var_400: i64 = rax_1;
    let var_3f8: i64 = var_460;
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_400, "complementonly-delimitedzero-ter…", 0xa);
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_400, "only-delimitedzero-terminatedbyt…", 0xe);
    uu_cut::get_delimiters::hcb390251ab0b3ea3(&var_2f8, &var_400);
    let result_2: u64;
    let mut result: u64 = result_2;
    
    if var_2f8 != 1
    {
        let mut result_4: u64;
        let result_5: u64 = result_4;
        let mut r14_1: i8 = 0xa;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_400, "zero-terminatedbytescharactersfi…", 0xf) != 0
        {
            r14_1 = 0;
        }
        
        let mut var_3a8: i128;
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(
            &var_3a8, &var_400, "bytescharactersfieldsdelimiterwh…", 5);
        let mut var_4b8: i128;
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(
            &var_4b8, &var_400, "charactersfieldsdelimiterwhitesp…", 0xa);
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(
            &var_468, &var_400, "fieldsdelimiterwhitespace-delimi…", 6);
        let zmm0_2: i128 = var_3a8;
        var_2f8 = zmm0_2;
        result_4 = var_4b8;
        let zmm1_2: i128 = var_468;
        let mut var_2c8_1: i128 = zmm1_2;
        let rax_11: i64 = var_458;
        let mut var_2b8_1: i64 = rax_11;
        let var_340_1: i128 = zmm0_2;
        let var_310_1: i128 = zmm1_2;
        let var_300_1: i64 = rax_11;
        let result_3: u64;
        let result_6: u64 = result_3;
        let result_7: u64 = result_4;
        let mut var_2d8: i64;
        let var_320_1: i64 = var_2d8;
        let mut var_4a8: i64;
        let var_318_1: i64 = var_4a8;
        let mut var_350: i64 = 0;
        let var_348_1: i64 = 3;
        let rax_16: i64 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1d1c3f14b2218463(&var_350);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0429bf5ed6033f41(
            &var_2f8, &var_400, "bytescharactersfieldsdelimiterwh…", 5);
        let rax_17: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h00aa4d22a6f6b799(
            "bytescharactersfieldsdelimiterwh…", 5, &var_2f8);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0429bf5ed6033f41(
            &var_2f8, &var_400, "charactersfieldsdelimiterwhitesp…", 0xa);
        let rax_18: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h00aa4d22a6f6b799(
            "charactersfieldsdelimiterwhitesp…", 0xa, &var_2f8);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0429bf5ed6033f41(
            &var_2f8, &var_400, "fieldsdelimiterwhitespace-delimi…", 6);
        let rax_19: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h00aa4d22a6f6b799(
            "fieldsdelimiterwhitespace-delimi…", 6, &var_2f8);
        let mut var_428: i128;
        let mut result_1: u64;
        let mut var_498: i128;
        let mut var_488: i128;
        let mut var_478: i128;
        
        if rax_16 == 0
        {
            'label_460126:
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h66af3a33255a12b8(&var_2f8, "invalid usage: expects one of --…", 0x49);
            'label_460133:
            result_1 = result_3;
            var_4b8 = var_2f8;
            var_4b8 = 3;
            'label_460153:
            var_428 = var_478;
            let rcx_9: i64 = *var_4b8[8];
            var_438 = var_488;
            var_448 = var_498;
            var_458 = var_4a8;
            *var_458[8] = result_1;
            var_468 = var_4b8;
            var_460 = rcx_9;
        }
        else
        {
            if rax_16 != 1
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h66af3a33255a12b8(&var_2f8, "invalid usage: expects no more t…", 0x56);
                goto 'label_460133;
            }
            
            if rax_17 != 0
            {
                if (rax_18 | rax_19) != 0
                {
                    goto 'label_460126;
                }
                
                uu_cut::list_to_ranges::ha2a167a13e4b3412(&var_2f8, *rax_17.byte_offset(8), 
                    *rax_17.byte_offset(0x10), rax_3);
                
                if var_2f8 == 1
                {
                    'label_460077:
                    result_1 = result_4;
                    var_4b8 = result_2;
                    var_4b8 = 3;
                    goto 'label_460153;
                }
                
                *var_478[8] = result_4;
                var_488 = result_2;
                *var_4b8[8] = result_5;
                var_4a8 = var_2d8;
                *var_498[8] = 2;
                var_488 = r14_1;
                var_4b8 = 0;
            }
            else if rax_18 == 0
            {
                if rax_19 == 0
                {
                    goto 'label_460126;
                }
                
                uu_cut::list_to_ranges::ha2a167a13e4b3412(&var_2f8, *rax_19.byte_offset(8), 
                    *rax_19.byte_offset(0x10), rax_3);
                
                if var_2f8 == 1
                {
                    goto 'label_460077;
                }
                
                *var_478[8] = result_4;
                var_488 = result_2;
                *var_4b8[8] = result_5;
                var_4a8 = var_2d8;
                result_1 = result;
                let var_2e8: *mut *mut c_void;
                var_498 = var_2e8;
                *var_498[8] = rax_4;
                var_488 = r14_1;
                var_4b8 = 2;
            }
            else
            {
                if rax_19 != 0
                {
                    goto 'label_460126;
                }
                
                uu_cut::list_to_ranges::ha2a167a13e4b3412(&var_2f8, *rax_18.byte_offset(8), 
                    *rax_18.byte_offset(0x10), rax_3);
                
                if var_2f8 == 1
                {
                    goto 'label_460077;
                }
                
                *var_478[8] = result_4;
                var_488 = result_2;
                *var_4b8[8] = result_5;
                var_4a8 = var_2d8;
                *var_498[8] = 2;
                var_488 = r14_1;
                var_4b8 = 1;
            }
            
            let rax_24: i64 = var_4b8;
            let mut rax_27: i8;
            
            if rax_24 == 0
            {
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_400, "delimiterwhitespace-delimited-d=…", 9) == 0
                {
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "whitespace-delimited-d=--delimit…", 0x14) != 0
                    {
                        'label_460439:
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h66af3a33255a12b8(&var_2f8, "invalid input: The '-w' option o…", 0x4b);
                        goto 'label_46047f;
                    }
                    
                    rax_27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "only-delimitedzero-terminatedbyt…", 0xe);
                    'label_46045a:
                    
                    if rax_27 == 0
                    {
                        goto 'label_4604ae;
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h66af3a33255a12b8(&var_2f8, "invalid input: The '--only-delim…", 0x60);
                    goto 'label_46047f;
                }
                
                'label_46039a:
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h66af3a33255a12b8(&var_2f8, "invalid input: The '--delimiter'…", 0x5b);
                'label_46047f:
                *var_458[8] = result_3;
                var_460 = var_2f8;
                var_468 = 3;
                core::ptr::drop_in_place$LT$uu_cut..Mode$GT$::h43444cf76aa506af(&var_4b8);
            }
            else
            {
                if rax_24 == 1
                {
                    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_400, "delimiterwhitespace-delimited-d=…", 9) != 0
                    {
                        goto 'label_46039a;
                    }
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "whitespace-delimited-d=--delimit…", 0x14) != 0
                    {
                        goto 'label_460439;
                    }
                    
                    rax_27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "only-delimitedzero-terminatedbyt…", 0xe);
                    goto 'label_46045a;
                }
                
                'label_4604ae:
                var_428 = var_478;
                var_438 = var_488;
                var_448 = var_498;
                var_458 = var_4a8;
                var_468 = var_4b8;
            }
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9159c1f91113d300(
            &var_2f8, &var_400);
        let mut rsi_15: *mut i32 = &var_2f8;
        clap_builder::parser::error::MatchesError::unwrap::hd1322662bf5dcddd(&var_3a8, rsi_15);
        let mut rax_30: fn() -> ! = var_3a8;
        let mut rcx_10: *const i8;
        let mut rdx_9: i64;
        let mut zmm0_4: i128;
        let mut zmm1_4: u128;
        
        if rax_30 == 0
        {
            zmm0_4 = {0};
            zmm1_4 = "/home/34r7hm4n/.cargo/registry/s…";
            rcx_10 = "/home/34r7hm4n/.cargo/registry/s…";
            rax_30 = core::ops::function::FnOnce::call_once::h4bed63b4620333e2;
            rdx_9 = 0;
        }
        else
        {
            rcx_10 = *var_3a8[8];
            zmm1_4 = result_3;
            let var_388: i128;
            zmm0_4 = var_388;
            let var_378: *mut i32;
            rsi_15 = var_378;
            let var_370: i64;
            rdx_9 = var_370;
        }
        
        var_2f8 = rax_30;
        let var_2f0: *const i8 = rcx_10;
        let mut var_2e8_1: u64;
        var_2e8_1 = zmm1_4;
        var_2d8 = zmm0_4;
        var_2c8_1 = rsi_15;
        *var_2c8_1[8] = rdx_9;
        let mut var_3c0: i128;
        core::iter::traits::iterator::Iterator::collect::hb0606489a4b1f7f0(&var_3c0, &var_2f8);
        
        if var_468 != 3
        {
            var_2b8_1 = var_428;
            let var_2c8_2: i128 = var_438;
            var_2d8 = var_448;
            var_2e8_1 = var_458;
            var_2f8 = var_468;
            let var_3b0: i64;
            let var_398: i64 = var_3b0;
            var_3a8 = var_3c0;
            uu_cut::cut_files::h785d6e985a8c4fa3(&var_3a8, &var_2f8);
            core::ptr::drop_in_place$LT$uu_cut..Mode$GT$::h43444cf76aa506af(&var_468);
            result = 0;
        }
        else
        {
            let var_2e8_2: i64 = *var_458[8];
            var_2f8 = var_460;
            result_4 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::hc4b90325c9150444(&var_2f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::ha61bc3c7502dfb92(&var_3c0);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdd10918ebed38779(&var_400);
    }
    else
    {
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdd10918ebed38779(&var_400);
    }
    
    result
}
