
  uint64_t uu_mv::uumain::uumain::hf64ab4b108c670ee(int64_t arg1)

{
    void var_2f8;
    uu_mv::uu_app::hb7098f4f79f9c6f5(&var_2f8);
    uint64_t result_1;
    clap_builder::builder::command::Command::try_get_matches_from_mut::h8c3ef30f3f3d5295(&result_1, 
        &var_2f8, arg1);
    uint64_t result_3 = result_1;
    uint64_t result;
    int64_t var_430;
    
    if (-(result_3) != -0x8000000000000000)
    {
        int64_t var_408;
        int64_t var_3a0_1 = var_408;
        int128_t var_418;
        int128_t var_3b0_1 = var_418;
        int128_t var_428;
        int128_t var_3c0_1 = var_428;
        uint64_t result_8 = result_3;
        int64_t var_3c8_1 = var_430;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h40b8e37a44bc9878(
            &result_1, &result_8, "filesdebug\n\n(uutils coreutils)…", 5);
        char const* const rsi_3 = "filesdebug\n\n(uutils coreutils)…";
        uint64_t result_9;
        clap_builder::parser::error::MatchesError::unwrap::hb1e01cb39b52e2de(&result_9, 
            "filesdebug\n\n(uutils coreutils)…", 5, &result_1);
        uint64_t result_4 = result_9;
        uint64_t result_11;
        void** rcx_4;
        int64_t rdx_1;
        int128_t zmm0_2;
        uint64_t result_15;
        
        if (!result_4)
        {
            zmm0_2 = {0};
            result_15 = "/home/34r7hm4n/.cargo/registry/s…";
            rcx_4 = "/home/34r7hm4n/.cargo/registry/s…";
            result_4 = core::ops::function::FnOnce::call_once::ha5ab3eb56bb88db9;
            rdx_1 = 0;
        }
        else
        {
            void** var_390;
            rcx_4 = var_390;
            result_15 = result_11;
            int128_t var_378;
            zmm0_2 = var_378;
            char* var_368;
            rsi_3 = var_368;
            int64_t var_360;
            rdx_1 = var_360;
        }
        
        result_1 = result_4;
        int128_t var_418_1 = zmm0_2;
        char const* const var_408_1 = rsi_3;
        int64_t var_400_1 = rdx_1;
        void var_358;
        core::iter::traits::iterator::Iterator::collect::h8ee1872fdf51efe2(&var_358, &result_1);
        uint64_t result_10;
        int64_t var_348;
        
        if (var_348 == 1 && !
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            &result_8, &data_41fd30[0x10], 0x10))
        {
            result_9 = &uu_mv::ARG_FILES::he14f9154b9a463ac;
            int64_t (* var_390_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16459f5c56ff6206;
            result_1 = &data_540570;
            int64_t var_430_2 = 2;
            var_418_1 = 0;
            result_10 = &result_9;
            result_10 = 1;
            void var_310;
            core::option::Option$LT$T$GT$::map_or_else::hba77342b09338459(&var_310, &result_1);
            uint64_t result_5 =
                clap_builder::error::Error$LT$F$GT$::raw::h6826e9614edca253(&var_310);
            clap_builder::error::Error$LT$F$GT$::format::hb05558fcd316c9a7(result_5, &var_2f8);
            result_1 = result_5;
            clap_builder::error::Error$LT$F$GT$::exit::ha83c546345cc47c3(&result_1);
            /* no return */
        }
        
        char rax_2 = uu_mv::determine_overwrite_mode::h4edbdb1a5a4f8cbc(&result_8);
        uucore::features::backup_control::determine_backup_mode::h09b58a9d9bda0a55(&result_1, 
            &result_8);
        result = result_1;
        
        if (!result)
        {
            bool r13_1 = uucore::features::update_control::determine_update_mode::h24daef92534aa2cd(
                &result_8);
            
            if (!rcx_4 || !((!rax_2 | r13_1) & 1))
            {
                int128_t var_340;
                uucore::features::backup_control::determine_backup_suffix::ha7b1c82b4746605a(
                    &var_340);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha1a2491a3edcae93(&result_1, &result_8, &data_41fd30[0x10], 0x10);
                void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::hc69077a721d63ea9(
                    &data_41fd30[0x10], 0x10, &result_1);
                bool var_43a_1;
                void** var_3e8;
                uint64_t result_7;
                uint64_t result_14;
                
                if (!rax_6)
                {
                    result_7 = -0x8000000000000000;
                    var_43a_1 = r13_1;
                    label_479c86:
                    char rax_8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "no-target-directoryverbosefilesd…", 0x13);
                    char r15 = 1;
                    
                    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "verbosefilesdebug\n\n(uutils cor…", 7))
                        r15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "debug\n\n(uutils coreutils) 0.0.…", 5);
                    
                    char rax_11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "strip-trailing-slashesno-target-…", 0x16);
                    char rax_12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "progress", 8);
                    char rax_13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "debug\n\n(uutils coreutils) 0.0.…", 5);
                    *var_408_1[5] = rax_2;
                    *var_408_1[6] = rcx_4;
                    result_1 = var_340;
                    uint64_t result_12;
                    result_10 = result_12;
                    *var_408_1[7] = var_43a_1;
                    result_10 = result_7;
                    var_418_1 = var_3e8;
                    *var_418_1[8] = result_14;
                    var_408_1 = rax_8;
                    *var_408_1[1] = r15;
                    *var_408_1[2] = rax_11;
                    *var_408_1[3] = rax_12;
                    *var_408_1[4] = rax_13;
                    int64_t var_350;
                    uint64_t result_2;
                    void** rdx_5;
                    result_2 = uu_mv::mv::h16154d6ab76310c1(var_350, var_348, &result_1);
                    result = result_2;
                    core::ptr::drop_in_place$LT$uu_mv..Options$GT$::h88377726de0ffeb1(&result_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h69bc54a3be683dd2(&var_358);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd8f8b8df2d072d85(&result_8);
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8fc533723eb1648d(&result_1, *(rax_6 + 8), *(rax_6 + 0x10));
                    uint64_t result_6 = result_1;
                    var_3e8 = rcx_4;
                    result_14 = result_15;
                    
                    if (result_6 == -0x8000000000000000)
                    {
                        result_7 = -0x8000000000000000;
                        var_43a_1 = r13_1;
                        goto label_479c86;
                    }
                    
                    if (std::path::Path::is_dir::h02edbc48c38d7d9e(rcx_4, result_15))
                    {
                        var_43a_1 = r13_1;
                        result_7 = result_6;
                        goto label_479c86;
                    }
                    
                    result_9 = 1;
                    void** var_390_1 = var_3e8;
                    result_11 = result_14;
                    *result_11[8] = 1;
                    int128_t var_328;
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h3ac6065177d62def(&var_328, &result_9);
                    int64_t result_13;
                    result_10 = result_13;
                    void** var_430_1;
                    var_430_1 = var_328;
                    result_1 = 7;
                    result = alloc::boxed::Box$LT$T$GT$::new::hc81506f24a7fbb8e(&result_1);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::ha3fb43353162eed4(result_6, var_3e8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h304c8b815f41dee8(
                        &var_340);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h69bc54a3be683dd2(&var_358);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd8f8b8df2d072d85(&result_8);
                }
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8fc533723eb1648d(&result_9, "cannot combine --backup with -n/…", 0x42);
                result_10 = result_11;
                result_1 = result_9;
                *result_10[8] = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h7fc323307b658e09(&result_1);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h69bc54a3be683dd2(&var_358);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd8f8b8df2d072d85(&result_8);
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h69bc54a3be683dd2(&var_358);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd8f8b8df2d072d85(&result_8);
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_430);
    core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hba0c8e8bddbe54d2(
        &var_2f8);
    return result;
}
