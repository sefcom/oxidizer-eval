
  fn uu_mv::uumain::uumain::hf64ab4b108c670ee(arg1: i64) -> u64

{
    let mut var_2f8: ();
    uu_mv::uu_app::hb7098f4f79f9c6f5(&var_2f8);
    let mut result_1: u64;
    clap_builder::builder::command::Command::try_get_matches_from_mut::h8c3ef30f3f3d5295(&result_1, 
        &var_2f8, arg1);
    let result_3: u64 = result_1;
    let mut result: u64;
    let var_430: i64;
    
    if -(result_3) != -0x8000000000000000
    {
        let var_408: i64;
        let var_3a0_1: i64 = var_408;
        let var_418: i128;
        let var_3b0_1: i128 = var_418;
        let var_428: i128;
        let var_3c0_1: i128 = var_428;
        let mut result_8: u64 = result_3;
        let var_3c8_1: i64 = var_430;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h40b8e37a44bc9878(
            &result_1, &result_8, "filesdebug\n\n(uutils coreutils)…", 5);
        let mut rsi_3: *const i8 = "filesdebug\n\n(uutils coreutils)…";
        let mut result_9: u64;
        clap_builder::parser::error::MatchesError::unwrap::hb1e01cb39b52e2de(&result_9, 
            "filesdebug\n\n(uutils coreutils)…", 5, &result_1);
        let mut result_4: u64 = result_9;
        let mut result_11: u64;
        let mut rcx_4: *mut *mut c_void;
        let mut rdx_1: i64;
        let mut zmm0_2: i128;
        let mut result_15: u64;
        
        if result_4 == 0
        {
            zmm0_2 = {0};
            result_15 = "/home/34r7hm4n/.cargo/registry/s…";
            rcx_4 = "/home/34r7hm4n/.cargo/registry/s…";
            result_4 = core::ops::function::FnOnce::call_once::ha5ab3eb56bb88db9;
            rdx_1 = 0;
        }
        else
        {
            let var_390: *mut *mut c_void;
            rcx_4 = var_390;
            result_15 = result_11;
            let var_378: i128;
            zmm0_2 = var_378;
            let var_368: *mut i8;
            rsi_3 = var_368;
            let var_360: i64;
            rdx_1 = var_360;
        }
        
        result_1 = result_4;
        let mut var_418_1: i128 = zmm0_2;
        let mut var_408_1: *const i8 = rsi_3;
        let var_400_1: i64 = rdx_1;
        let mut var_358: ();
        core::iter::traits::iterator::Iterator::collect::h8ee1872fdf51efe2(&var_358, &result_1);
        let mut result_10: u64;
        let var_348: i64;
        
        if var_348 == 1 &&
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            &result_8, &data_41fd30[0x10], 0x10) == 0
        {
            result_9 = &uu_mv::ARG_FILES::he14f9154b9a463ac;
            let var_390_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h16459f5c56ff6206;
            result_1 = &data_540570;
            let var_430_2: i64 = 2;
            var_418_1 = 0;
            result_10 = &result_9;
            result_10 = 1;
            let mut var_310: ();
            core::option::Option$LT$T$GT$::map_or_else::hba77342b09338459(&var_310, &result_1);
            let result_5: u64 =
                clap_builder::error::Error$LT$F$GT$::raw::h6826e9614edca253(&var_310);
            clap_builder::error::Error$LT$F$GT$::format::hb05558fcd316c9a7(result_5, &var_2f8);
            result_1 = result_5;
            clap_builder::error::Error$LT$F$GT$::exit::ha83c546345cc47c3(&result_1);
            /* no return */
        }
        
        let rax_2: i8 = uu_mv::determine_overwrite_mode::h4edbdb1a5a4f8cbc(&result_8);
        uucore::features::backup_control::determine_backup_mode::h09b58a9d9bda0a55(&result_1, 
            &result_8);
        result = result_1;
        
        if result == 0
        {
            let r13_1: bool =
                uucore::features::update_control::determine_update_mode::h24daef92534aa2cd(
                &result_8);
            
            if rcx_4 == 0 || ((rax_2 == 0 | r13_1) & 1) == 0
            {
                let mut var_340: i128;
                uucore::features::backup_control::determine_backup_suffix::ha7b1c82b4746605a(
                    &var_340);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha1a2491a3edcae93(&result_1, &result_8, &data_41fd30[0x10], 0x10);
                let rax_6: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hc69077a721d63ea9(
                    &data_41fd30[0x10], 0x10, &result_1);
                let mut var_43a_1: bool;
                let mut var_3e8: *mut *mut c_void;
                let mut result_7: u64;
                let mut result_14: u64;
                
                if rax_6 == 0
                {
                    result_7 = -0x8000000000000000;
                    var_43a_1 = r13_1;
                    'label_479c86:
                    let rax_8: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "no-target-directoryverbosefilesd…", 0x13);
                    let mut r15: i8 = 1;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "verbosefilesdebug\n\n(uutils cor…", 7) == 0
                    {
                        r15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "debug\n\n(uutils coreutils) 0.0.…", 5);
                    }
                    
                    let rax_11: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "strip-trailing-slashesno-target-…", 0x16);
                    let rax_12: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "progress", 8);
                    let rax_13: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&result_8, "debug\n\n(uutils coreutils) 0.0.…", 5);
                    *var_408_1[5] = rax_2;
                    *var_408_1[6] = rcx_4;
                    result_1 = var_340;
                    let result_12: u64;
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
                    let var_350: i64;
                    let mut result_2: u64;
                    let mut rdx_5: *mut *mut c_void;
                    result_2 = uu_mv::mv::h16154d6ab76310c1(var_350, var_348, &result_1);
                    result = result_2;
                    core::ptr::drop_in_place$LT$uu_mv..Options$GT$::h88377726de0ffeb1(&result_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h69bc54a3be683dd2(&var_358);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd8f8b8df2d072d85(&result_8);
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8fc533723eb1648d(&result_1, *rax_6.byte_offset(8), *rax_6.byte_offset(0x10));
                    let result_6: u64 = result_1;
                    var_3e8 = rcx_4;
                    result_14 = result_15;
                    
                    if result_6 == -0x8000000000000000
                    {
                        result_7 = -0x8000000000000000;
                        var_43a_1 = r13_1;
                        goto 'label_479c86;
                    }
                    
                    if std::path::Path::is_dir::h02edbc48c38d7d9e(rcx_4, result_15) != 0
                    {
                        var_43a_1 = r13_1;
                        result_7 = result_6;
                        goto 'label_479c86;
                    }
                    
                    result_9 = 1;
                    let var_390_1: *mut *mut c_void = var_3e8;
                    result_11 = result_14;
                    *result_11[8] = 1;
                    let mut var_328: i128;
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h3ac6065177d62def(&var_328, &result_9);
                    let result_13: i64;
                    result_10 = result_13;
                    let mut var_430_1: *mut *mut c_void;
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
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_430);
    }
    core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hba0c8e8bddbe54d2(
        &var_2f8);
    result
}
