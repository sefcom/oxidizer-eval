
  fn uu_comm::uumain::uumain::hd07bb5cb783534dd(arg1: i64) -> *mut i64

{
    let mut var_2e8: i128;
    uu_comm::uu_app::ha6c652ac8df11865(&var_2e8);
    let mut result_1: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::h53526b6703d0467b(&result_1, 
        &var_2e8, arg1);
    let result_4: *mut i64 = result_1;
    let var_430: *mut *mut c_void;
    
    if result_4 == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_430);
    }
    
    let var_408: i64;
    let var_3b0_1: i64 = var_408;
    let var_418: i128;
    let var_3c0_1: i128 = var_418;
    let var_428: i128;
    let var_3d0_1: i128 = var_428;
    let mut result_5: *mut i64 = result_4;
    let var_3d8_1: *mut *mut c_void = var_430;
    let mut rbp_1: i8 = 0xa;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &result_5, "zero-terminated", 0xf) != 0
    {
        rbp_1 = 0;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce6c288fedebb544(
        &var_2e8, &result_5, "FILE1FILE2multiple conflicting o…", 5);
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h97be6f3b7f51ba89(
        "FILE1FILE2multiple conflicting o…", 5, &var_2e8);
    
    if rax_2 != 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce6c288fedebb544(
            &var_2e8, &result_5, "FILE2multiple conflicting output…", 5);
        let rax_3: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h97be6f3b7f51ba89(
            "FILE2multiple conflicting output…", 5, &var_2e8);
        
        if rax_3 != 0
        {
            uu_comm::open_file::he2f4406dcd44f5f5(&var_2e8, *rax_2.byte_offset(8), 
                *rax_2.byte_offset(0x10), rbp_1);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha3669787977011fc(&result_1, &var_2e8);
            let rax_4: i8 = var_408;
            let mut result: *mut i64 = result_1;
            
            if rax_4 != 0xb
            {
                let var_388_1: i128 = var_418;
                let var_398_1: i128 = var_428;
                let mut var_377_1: i32 = *var_408[1];
                var_377_1 = *var_408[4];
                let mut result_2: *mut i64 = result;
                let var_3a0_1: *mut *mut c_void = var_430;
                let var_378_1: i8 = rax_4;
                uu_comm::open_file::he2f4406dcd44f5f5(&var_2e8, *rax_3.byte_offset(8), 
                    *rax_3.byte_offset(0x10), rbp_1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h333d9779081ba83e(&result_1, &var_2e8);
                let rax_5: i8 = var_408;
                result = result_1;
                
                if rax_5 != 0xb
                {
                    let var_350_1: i128 = var_418;
                    let var_360_1: i128 = var_428;
                    let mut var_33f_1: i32 = *var_408[1];
                    var_33f_1 = *var_408[4];
                    let mut result_3: *mut i64 = result;
                    let var_368_1: *mut *mut c_void = var_430;
                    let var_340_1: i8 = rax_5;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h24fd000ef11150c2(&var_2e8, &result_5, "output-delimiterPermissionDenied…", 0x10);
                    clap_builder::parser::error::MatchesError::unwrap::h04dd569e38f606c4(&result_1, 
                        "output-delimiterPermissionDenied…", 0x10, &var_2e8);
                    
                    if result_1 == 0
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    let var_2f8_1: i128 = var_408;
                    let var_308_1: i128 = var_418;
                    let var_318_1: i128 = var_428;
                    let mut var_328: i128 = result_1;
                    let mut var_3f8: ();
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h349f0ef49bcba905(&var_3f8, &var_328);
                    let var_3e8: i64;
                    
                    if var_3e8 == 0
                    {
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(1, 0);
                        /* no return */
                    }
                    
                    let var_3f0: *mut c_void;
                    let mut var_338: *mut c_void = var_3f0.byte_offset(0x18);
                    let var_330_1: *mut c_void = var_3f0.byte_offset(var_3e8 * 0x18);
                    let mut i: i8;
                    
                    do
                    {
                        let rax_9: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h95a69d36af4a9080(&var_338);
                        
                        if rax_9 == 0
                        {
                            if var_3e8 == 0
                            {
                                core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
                                /* no return */
                            }
                            
                            let mut rbx_2: *const i8 = *var_3f0.byte_offset(8);
                            let mut r14_3: u64 = *var_3f0.byte_offset(0x10);
                            let rax_14: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha1a7951143d015a8(rbx_2, r14_3, 1, 0);
                            
                            if rax_14 != 0
                            {
                                rbx_2 = &data_41428d[0xf];
                            }
                            
                            if rax_14 != 0
                            {
                                r14_3 = 1;
                            }
                            
                            uu_comm::comm::hb602e027eef2e655(&result_2, &result_3, rbx_2, r14_3, 
                                &result_5);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h3132c80679b5f6ab(&var_3f8);
                            core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h53489cac618c2b5d(
                                &result_3);
                            core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h53489cac618c2b5d(
                                &result_2);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2fd4c7b1b897f9b8(&result_5);
                            return nullptr;
                        }
                        
                        if var_3e8 == 0
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
                            /* no return */
                        }
                        
                        i = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hb77978741638b557(*rax_9.byte_offset(8), *rax_9.byte_offset(0x10), 
                            *var_3f0.byte_offset(8), *var_3f0.byte_offset(0x10));
                    } while i != 0;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a897266881acf00(
                        &result_1);
                    let var_2d8_1: i64 = var_428;
                    var_2e8 = result_1;
                    let var_2d0_1: i32 = 1;
                    result = alloc::boxed::Box$LT$T$GT$::new::h9f840935a3110626(&var_2e8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h3132c80679b5f6ab(&var_3f8);
                    core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h53489cac618c2b5d(
                        &result_3);
                }
                
                core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h53489cac618c2b5d(&result_2);
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2fd4c7b1b897f9b8(&result_5);
            return result;
        }
    }
    
    core::option::unwrap_failed::h0e11329e76906eaa();
    /* no return */
}
