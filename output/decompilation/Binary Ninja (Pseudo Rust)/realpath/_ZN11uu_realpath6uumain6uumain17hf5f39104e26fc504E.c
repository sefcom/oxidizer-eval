
  fn uu_realpath::uumain::uumain::hf5f39104e26fc504(arg1: i64) -> *mut i64

{
    let mut var_2f8: *mut c_void;
    uu_realpath::uu_app::hb0ffbeae13444ba5(&var_2f8);
    let mut var_3a0: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::h7b8b03d6141a8787(&var_3a0, 
        &var_2f8, arg1);
    let rax: *mut i64 = var_3a0;
    let mut result: *mut i64;
    let var_398: i64;
    
    if rax != -0x8000000000000000
    {
        let mut var_38c: i128;
        let var_3c4_1: i128 = var_38c;
        let var_37c: i128;
        let var_3b4_1: i128 = var_37c;
        let var_36c: i32;
        let var_3a4_1: i32 = var_36c;
        let mut var_3d8: *mut i64 = rax;
        let var_3d0_1: i64 = var_398;
        let mut var_390: i32;
        let var_3c8_1: i32 = var_390;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h416337ccbd5dbc14(
            &var_2f8, &var_3d8, "files0.0.28{} [OPTION]... FILE..…", 5);
        clap_builder::parser::error::MatchesError::unwrap::h7356003a6c200bff(&var_3a0, 
            "files0.0.28{} [OPTION]... FILE..…", 5, &var_2f8);
        
        if var_3a0 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let var_308_1: i128 = var_37c;
        let var_318_1: i128 = var_38c;
        let var_328_1: i128 = var_390;
        let mut var_338: i128 = var_3a0;
        let mut var_360: ();
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h23f5f70296f3017d(&var_360, &var_338);
        let rax_2: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3d8, "striplogicalfiles0.0.28{} [OPTIO…", 5);
        let mut r14_1: i8 = 0xa;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3d8, "zero -- \x1b[8mhelpNoneshimname\x1b…", 4) != 0
        {
            r14_1 = 0;
        }
        
        let rax_4: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3d8, "quietstriplogicalfiles0.0.28{} […", 5);
        let rax_5: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3d8, "logicalfiles0.0.28{} [OPTION]...…", 7);
        let mut rax_6: i8 = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3d8, "canonicalize-existingcanonicaliz…", 0x15) == 0
        {
            rax_6 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3d8, "canonicalize-missingdescription(…", 0x14) * 2;
        }
        
        let mut r15_1: i8 = 0;
        
        if rax_2 == 0
        {
            r15_1 = rax_5 + 1;
        }
        
        uu_realpath::prepare_relative_options::hce8b705a83476ef9(&var_2f8, &var_3d8, rax_6, r15_1);
        let rax_7: *mut c_void = var_2f8;
        let result_1: *mut i64;
        result = result_1;
        
        if rax_7 != -0x7fffffffffffffff
        {
            let mut var_2e0: i128;
            let mut var_408: i128 = var_2e0;
            let mut var_430: *mut c_void = rax_7;
            let var_358: *mut c_void;
            let mut var_3e8: *mut c_void = var_358;
            let var_350: i64;
            let var_3e0_1: *mut c_void = var_358.byte_offset(var_350 * 0x18);
            let i_3: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&var_3e8);
            
            if i_3 != 0
            {
                let mut i_2: *mut c_void = i_3;
                let var_2e8: *mut *mut c_void;
                let var_2d0: i64;
                
                if rax_4 == 0
                {
                    let mut i: *mut c_void;
                    
                    do
                    {
                        let mut result_3: *mut i64 = nullptr;
                        
                        if var_430 != -0x8000000000000000
                        {
                            result_3 = result;
                        }
                        
                        let mut rax_12: i64 = 0;
                        
                        if var_408 != -0x8000000000000000
                        {
                            rax_12 = *var_408[8];
                        }
                        
                        let rax_14: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h051db6d61166b42e(
                            uu_realpath::resolve_path::h12f80bacada43346(*i_2.byte_offset(8), 
                                *i_2.byte_offset(0x10), r14_1, r15_1, rax_6, result_3, var_2e8, 
                                rax_12, var_2d0), 
                            i_2);
                        
                        if rax_14 != 0
                        {
                            let mut var_418: *mut i128 = rax_14;
                            let var_410_1: *mut i64 = &data_520fc0;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                            let mut rax_15: i64;
                            let mut rdx_6: i64;
                            rax_15 = uucore::util_name::h60d842bf27b05e82();
                            let mut var_348: i64 = rax_15;
                            let var_340_1: i64 = rdx_6;
                            var_3a0 = &var_348;
                            let var_398_1: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h87f610677bb13b0c;
                            var_390 = &var_418;
                            *var_38c[4] = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hbb1d36f9ebdb9b04;
                            var_2f8 = &data_520e38;
                            let var_2f0: i64 = 3;
                            *var_2e0[8] = 0;
                            let var_2e8_1: *mut *mut i64 = &var_3a0;
                            var_2e0 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h234f35a2ffb064b3(var_418, var_410_1);
                        }
                        
                        i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&var_3e8);
                        i_2 = i;
                    } while i != 0;
                }
                else
                {
                    let mut i_1: *mut c_void;
                    
                    do
                    {
                        let mut result_2: *mut i64 = nullptr;
                        
                        if var_430 != -0x8000000000000000
                        {
                            result_2 = result;
                        }
                        
                        let mut rax_9: i64 = 0;
                        
                        if var_408 != -0x8000000000000000
                        {
                            rax_9 = *var_408[8];
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc7b44fbfad25f6f6(uu_realpath::resolve_path::h12f80bacada43346(*i_2.byte_offset(8), 
                            *i_2.byte_offset(0x10), r14_1, r15_1, rax_6, result_2, var_2e8, rax_9, 
                            var_2d0));
                        i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&var_3e8);
                        i_2 = i_1;
                    } while i_1 != 0;
                }
            }
            
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hb958e3bcaa0fe370(&var_408);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hb958e3bcaa0fe370(&var_430);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h46da251bdeece735(&var_360);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0936fb64c2ae8dd7(&var_3d8);
            return nullptr;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h46da251bdeece735(&var_360);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0936fb64c2ae8dd7(&var_3d8);
    }
    else
    {
        result = alloc::boxed::Box$LT$T$GT$::new::h5baf976cfb5a61c3(var_398, 1);
    }
    result
}
