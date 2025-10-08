
  fn uu_comm::uumain::uumain::h1b2cb6cdb95a033a(arg1: i64) -> u64

{
    let mut var_2e8: i128;
    uu_comm::uu_app::heda42fe78558df76(&var_2e8);
    let mut result_1: u64;
    clap_builder::builder::command::Command::try_get_matches_from::h181a77cac1f57dc4(&result_1, 
        &var_2e8, arg1);
    let result_4: u64 = result_1;
    let var_3e0: *mut *mut c_void;
    
    if -(result_4) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3e0);
    }
    
    let var_3b8: i64;
    let var_360: i64 = var_3b8;
    let var_3c8: i128;
    let var_370: i128 = var_3c8;
    let var_3d8: i128;
    let var_380: i128 = var_3d8;
    let mut result_5: u64 = result_4;
    let var_388: *mut *mut c_void = var_3e0;
    let mut rbp: i8 = 0xa;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &result_5, "zero-terminatedFILE1FILE2", 0xf) != 0
    {
        rbp = 0;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc986bf75dfb2bd0b(
        &var_2e8, &result_5, "FILE1FILE2");
    let rax_2: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h99a8cffcdf606bc7(
        "FILE1FILE2", &var_2e8);
    
    if rax_2 != 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc986bf75dfb2bd0b(
            &var_2e8, &result_5, "FILE2");
        let rax_3: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h99a8cffcdf606bc7("FILE2", &var_2e8);
        
        if rax_3 != 0
        {
            uu_comm::open_file::h7884d427373f2014(&var_2e8, *rax_2.byte_offset(8), 
                *rax_2.byte_offset(0x10), rbp);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::haafc44006a8851b9(&result_1, &var_2e8);
            let rax_4: i8 = var_3b8;
            let mut result: u64 = result_1;
            
            if rax_4 != 0xb
            {
                let var_338_1: i128 = var_3c8;
                let var_348_1: i128 = var_3d8;
                let mut var_327_1: i32 = *var_3b8[1];
                var_327_1 = *var_3b8[4];
                let mut result_2: u64 = result;
                let var_350_1: *mut *mut c_void = var_3e0;
                let var_328_1: i8 = rax_4;
                uu_comm::open_file::h7884d427373f2014(&var_2e8, *rax_3.byte_offset(8), 
                    *rax_3.byte_offset(0x10), rbp);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::haafc44006a8851b9(&result_1, &var_2e8);
                let rax_5: i8 = var_3b8;
                result = result_1;
                
                if rax_5 != 0xb
                {
                    let var_300_1: i128 = var_3c8;
                    let var_310_1: i128 = var_3d8;
                    let mut var_2ef_1: i32 = *var_3b8[1];
                    var_2ef_1 = *var_3b8[4];
                    let mut result_3: u64 = result;
                    let var_318_1: *mut *mut c_void = var_3e0;
                    let var_2f0_1: i8 = rax_5;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h201bea90c25efd84(&var_2e8, &result_5);
                    clap_builder::parser::error::MatchesError::unwrap::hbd3b62ba7e51e5e0(&result_1, 
                        &var_2e8);
                    
                    if result_1 == 0
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    let var_2b8_1: i128 = var_3b8;
                    let var_2c8_1: i128 = var_3c8;
                    let mut var_2d8_1: i128 = var_3d8;
                    var_2e8 = result_1;
                    let mut var_3a8: ();
                    core::iter::traits::iterator::Iterator::collect::h4381b22585bb38a4(&var_3a8, 
                        &var_2e8);
                    let var_398: i64;
                    
                    if var_398 == 0
                    {
                        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(1, 0);
                        /* no return */
                    }
                    
                    let mut r15_2: i64 = 0;
                    
                    loop
                    {
                        let var_3a0: *mut c_void;
                        
                        if var_398 * 0x18 + -0xffffffffffffffe8 == r15_2
                        {
                            let rbx_3: *mut i8 = *var_3a0.byte_offset(8);
                            let r14_3: u64 = *var_3a0.byte_offset(0x10);
                            let mut r15_3: u64 = 1;
                            let rax_11: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::heef2191397db73b6(rbx_3, r14_3, 1, 0);
                            let mut rdx_7: *const i8 = &data_418183[0x19];
                            
                            if rax_11 == 0
                            {
                                rdx_7 = rbx_3;
                            }
                            
                            if rax_11 == 0
                            {
                                r15_3 = r14_3;
                            }
                            
                            result = uu_comm::comm::h801203c8d9c12946(&result_2, &result_3, rdx_7, 
                                r15_3, &result_5);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h56d5ca914f97bac9(&var_3a8);
                            core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h10723131176a625c(
                                &result_3);
                            break;
                        }
                        
                        let rax_8: i8 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h55b011975c5ce3ef(*var_3a0.byte_offset(r15_2).byte_offset(0x20), 
                            *var_3a0.byte_offset(r15_2).byte_offset(0x28), *var_3a0.byte_offset(8), 
                            *var_3a0.byte_offset(0x10));
                        r15_2 += 0x18;
                        
                        if rax_8 == 0
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hb4fb8443dc0132f8(&result_1, "multiple conflicting output deli…", 0x30);
                            var_2d8_1 = var_3d8;
                            var_2e8 = result_1;
                            *var_2d8_1[8] = 1;
                            result = alloc::boxed::Box$LT$T$GT$::new::heeaf76c1ef99f7fa(&var_2e8);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h56d5ca914f97bac9(&var_3a8);
                            core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h10723131176a625c(
                                &result_3);
                            break;
                        }
                    }
                }
                
                core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h10723131176a625c(&result_2);
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h013d5c357a168e48(&result_5);
            return result;
        }
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
