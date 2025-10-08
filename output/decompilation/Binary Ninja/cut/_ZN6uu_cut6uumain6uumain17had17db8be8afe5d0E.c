
  uint64_t uu_cut::uumain::uumain::had17db8be8afe5d0(int64_t arg1)

{
    void var_368;
    core::iter::traits::iterator::Iterator::collect::h302c5a2113f97498(&var_368, 
        core::iter::traits::iterator::Iterator::map::h1884fc5b1cb6b08e(arg1));
    int32_t var_2f8;
    uu_cut::uu_app::h38d211b96a5c967d(&var_2f8);
    int64_t var_468;
    clap_builder::builder::command::Command::try_get_matches_from::h46fc889720c13b83(&var_468, 
        &var_2f8, &var_368);
    int64_t rax_1 = var_468;
    int64_t var_460;
    
    if (-(rax_1) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_460);
    
    int64_t var_438;
    int64_t var_3d0 = var_438;
    int128_t var_448;
    int128_t var_3e0 = var_448;
    int128_t var_458;
    int128_t var_3f0 = var_458;
    int64_t var_400 = rax_1;
    int64_t var_3f8 = var_460;
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_400, "complementonly-delimitedzero-ter…", 0xa);
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_400, "only-delimitedzero-terminatedbyt…", 0xe);
    uu_cut::get_delimiters::hcb390251ab0b3ea3(&var_2f8, &var_400);
    uint64_t result_2;
    uint64_t result = result_2;
    
    if (var_2f8 != 1)
    {
        uint64_t result_4;
        uint64_t result_5 = result_4;
        char r14_1 = 0xa;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "zero-terminatedbytescharactersfi…", 0xf))
            r14_1 = 0;
        
        int128_t var_3a8;
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(
            &var_3a8, &var_400, "bytescharactersfieldsdelimiterwh…", 5);
        int128_t var_4b8;
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(
            &var_4b8, &var_400, "charactersfieldsdelimiterwhitesp…", 0xa);
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(
            &var_468, &var_400, "fieldsdelimiterwhitespace-delimi…", 6);
        int128_t zmm0_2 = var_3a8;
        var_2f8 = zmm0_2;
        result_4 = var_4b8;
        int128_t zmm1_2 = var_468;
        int128_t var_2c8_1 = zmm1_2;
        int64_t rax_11 = var_458;
        int64_t var_2b8_1 = rax_11;
        int128_t var_340_1 = zmm0_2;
        int128_t var_310_1 = zmm1_2;
        int64_t var_300_1 = rax_11;
        uint64_t result_3;
        uint64_t result_6 = result_3;
        uint64_t result_7 = result_4;
        int64_t var_2d8;
        int64_t var_320_1 = var_2d8;
        int64_t var_4a8;
        int64_t var_318_1 = var_4a8;
        int64_t var_350 = 0;
        int64_t var_348_1 = 3;
        int64_t rax_16 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1d1c3f14b2218463(&var_350);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0429bf5ed6033f41(
            &var_2f8, &var_400, "bytescharactersfieldsdelimiterwh…", 5);
        void* rax_17 = clap_builder::parser::error::MatchesError::unwrap::h00aa4d22a6f6b799(
            "bytescharactersfieldsdelimiterwh…", 5, &var_2f8);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0429bf5ed6033f41(
            &var_2f8, &var_400, "charactersfieldsdelimiterwhitesp…", 0xa);
        void* rax_18 = clap_builder::parser::error::MatchesError::unwrap::h00aa4d22a6f6b799(
            "charactersfieldsdelimiterwhitesp…", 0xa, &var_2f8);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0429bf5ed6033f41(
            &var_2f8, &var_400, "fieldsdelimiterwhitespace-delimi…", 6);
        void* rax_19 = clap_builder::parser::error::MatchesError::unwrap::h00aa4d22a6f6b799(
            "fieldsdelimiterwhitespace-delimi…", 6, &var_2f8);
        int128_t var_428;
        uint64_t result_1;
        int128_t var_498;
        int128_t var_488;
        int128_t var_478;
        
        if (!rax_16)
        {
            label_460126:
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h66af3a33255a12b8(&var_2f8, "invalid usage: expects one of --…", 0x49);
            label_460133:
            result_1 = result_3;
            var_4b8 = var_2f8;
            var_4b8 = 3;
            label_460153:
            var_428 = var_478;
            int64_t rcx_9 = *var_4b8[8];
            var_438 = var_488;
            var_448 = var_498;
            var_458 = var_4a8;
            *var_458[8] = result_1;
            var_468 = var_4b8;
            var_460 = rcx_9;
        }
        else
        {
            if (rax_16 != 1)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h66af3a33255a12b8(&var_2f8, "invalid usage: expects no more t…", 0x56);
                goto label_460133;
            }
            
            if (rax_17)
            {
                if (rax_18 | rax_19)
                    goto label_460126;
                
                uu_cut::list_to_ranges::ha2a167a13e4b3412(&var_2f8, *(rax_17 + 8), 
                    *(rax_17 + 0x10), rax_3);
                
                if (var_2f8 == 1)
                {
                    label_460077:
                    result_1 = result_4;
                    var_4b8 = result_2;
                    var_4b8 = 3;
                    goto label_460153;
                }
                
                *var_478[8] = result_4;
                var_488 = result_2;
                *var_4b8[8] = result_5;
                var_4a8 = var_2d8;
                *var_498[8] = 2;
                var_488 = r14_1;
                var_4b8 = 0;
            }
            else if (!rax_18)
            {
                if (!rax_19)
                    goto label_460126;
                
                uu_cut::list_to_ranges::ha2a167a13e4b3412(&var_2f8, *(rax_19 + 8), 
                    *(rax_19 + 0x10), rax_3);
                
                if (var_2f8 == 1)
                    goto label_460077;
                
                *var_478[8] = result_4;
                var_488 = result_2;
                *var_4b8[8] = result_5;
                var_4a8 = var_2d8;
                result_1 = result;
                void** var_2e8;
                var_498 = var_2e8;
                *var_498[8] = rax_4;
                var_488 = r14_1;
                var_4b8 = 2;
            }
            else
            {
                if (rax_19)
                    goto label_460126;
                
                uu_cut::list_to_ranges::ha2a167a13e4b3412(&var_2f8, *(rax_18 + 8), 
                    *(rax_18 + 0x10), rax_3);
                
                if (var_2f8 == 1)
                    goto label_460077;
                
                *var_478[8] = result_4;
                var_488 = result_2;
                *var_4b8[8] = result_5;
                var_4a8 = var_2d8;
                *var_498[8] = 2;
                var_488 = r14_1;
                var_4b8 = 1;
            }
            
            int64_t rax_24 = var_4b8;
            char rax_27;
            
            if (!rax_24)
            {
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_400, "delimiterwhitespace-delimited-d=…", 9))
                {
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "whitespace-delimited-d=--delimit…", 0x14))
                    {
                        label_460439:
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h66af3a33255a12b8(&var_2f8, "invalid input: The '-w' option o…", 0x4b);
                        goto label_46047f;
                    }
                    
                    rax_27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "only-delimitedzero-terminatedbyt…", 0xe);
                    label_46045a:
                    
                    if (!rax_27)
                        goto label_4604ae;
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h66af3a33255a12b8(&var_2f8, "invalid input: The '--only-delim…", 0x60);
                    goto label_46047f;
                }
                
                label_46039a:
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h66af3a33255a12b8(&var_2f8, "invalid input: The '--delimiter'…", 0x5b);
                label_46047f:
                *var_458[8] = result_3;
                var_460 = var_2f8;
                var_468 = 3;
                core::ptr::drop_in_place$LT$uu_cut..Mode$GT$::h43444cf76aa506af(&var_4b8);
            }
            else
            {
                if (rax_24 == 1)
                {
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_400, "delimiterwhitespace-delimited-d=…", 9))
                        goto label_46039a;
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "whitespace-delimited-d=--delimit…", 0x14))
                        goto label_460439;
                    
                    rax_27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "only-delimitedzero-terminatedbyt…", 0xe);
                    goto label_46045a;
                }
                
                label_4604ae:
                var_428 = var_478;
                var_438 = var_488;
                var_448 = var_498;
                var_458 = var_4a8;
                var_468 = var_4b8;
            }
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9159c1f91113d300(
            &var_2f8, &var_400);
        int32_t* rsi_15 = &var_2f8;
        clap_builder::parser::error::MatchesError::unwrap::hd1322662bf5dcddd(&var_3a8, rsi_15);
        void (* rax_30)() __noreturn = var_3a8;
        char const* const rcx_10;
        int64_t rdx_9;
        int128_t zmm0_4;
        uint128_t zmm1_4;
        
        if (!rax_30)
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
            int128_t var_388;
            zmm0_4 = var_388;
            int32_t* var_378;
            rsi_15 = var_378;
            int64_t var_370;
            rdx_9 = var_370;
        }
        
        var_2f8 = rax_30;
        char const* const var_2f0 = rcx_10;
        uint64_t var_2e8_1;
        var_2e8_1 = zmm1_4;
        var_2d8 = zmm0_4;
        var_2c8_1 = rsi_15;
        *var_2c8_1[8] = rdx_9;
        int128_t var_3c0;
        core::iter::traits::iterator::Iterator::collect::hb0606489a4b1f7f0(&var_3c0, &var_2f8);
        
        if (var_468 != 3)
        {
            var_2b8_1 = var_428;
            int128_t var_2c8_2 = var_438;
            var_2d8 = var_448;
            var_2e8_1 = var_458;
            var_2f8 = var_468;
            int64_t var_3b0;
            int64_t var_398 = var_3b0;
            var_3a8 = var_3c0;
            uu_cut::cut_files::h785d6e985a8c4fa3(&var_3a8, &var_2f8);
            core::ptr::drop_in_place$LT$uu_cut..Mode$GT$::h43444cf76aa506af(&var_468);
            result = 0;
        }
        else
        {
            int64_t var_2e8_2 = *var_458[8];
            var_2f8 = var_460;
            result_4 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::hc4b90325c9150444(&var_2f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::ha61bc3c7502dfb92(&var_3c0);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdd10918ebed38779(&var_400);
    }
    else
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdd10918ebed38779(&var_400);
    
    return result;
}
