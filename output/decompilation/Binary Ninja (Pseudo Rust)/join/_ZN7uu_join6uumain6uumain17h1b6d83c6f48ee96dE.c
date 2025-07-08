
  fn uu_join::uumain::uumain::h1b6d83c6f48ee96d(arg1: i64) -> *mut i64

{
    let mut var_460: i64;
    uu_join::uu_app::h2d689a8b41cf12f0(&var_460);
    let mut var_180: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h7cd18d2507ff2cb6(&var_180, 
        &var_460, arg1);
    let rax: i64 = var_180;
    let mut result: *mut i64;
    let var_178: i64;
    
    if rax != -0x8000000000000000
    {
        let var_150: i64;
        let var_4c8_1: i64 = var_150;
        let var_160: i128;
        let var_4d8_1: i128 = var_160;
        let var_170: i128;
        let var_4e8_1: i128 = var_170;
        let mut var_4f8: i64 = rax;
        let var_4f0_1: i64 = var_178;
        uu_join::parse_settings::h8cf47cd535767909(&var_460, &var_4f8);
        let rax_2: i64 = var_460;
        let result_2: *mut i64;
        result = result_2;
        
        if rax_2 != -0x8000000000000000
        {
            let var_408: i64;
            let var_528_1: i64 = var_408;
            let mut var_438: i128;
            let mut var_558: i128 = var_438;
            let mut var_580: i64 = rax_2;
            let result_1: *mut i64 = result;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a3561c1fe3beb95(
                &var_460, &var_4f8, "file1file2-capacity overflow/rus…", 5);
            let rax_3: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hed9f402bd0e7a7b2(
                "file1file2-capacity overflow/rus…", 5, &var_460);
            let mut rax_4: *mut c_void;
            
            if rax_3 != 0
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a3561c1fe3beb95(&var_460, &var_4f8, "file2-capacity overflow/rustc/8b…", 5);
                rax_4 = clap_builder::parser::error::MatchesError::unwrap::hed9f402bd0e7a7b2(
                    "file2-capacity overflow/rustc/8b…", 5, &var_460);
            }
            
            if rax_3 == 0 || rax_4 == 0
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            let r14_2: i64 = *rax_3.byte_offset(8);
            let rbx_2: u64 = *rax_3.byte_offset(0x10);
            let rax_5: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8d59285a30fd8aff(r14_2, rbx_2, "-capacity overflow/rustc/8bfcae7…", 1);
            let mut rax_6: i8;
            
            if rax_5 != 0
            {
                rax_6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8d59285a30fd8aff(*rax_4.byte_offset(8), *rax_4.byte_offset(0x10), 
                    "-capacity overflow/rustc/8bfcae7…", 1);
            }
            
            let mut var_448: i128;
            
            if rax_5 == 0 || rax_6 == 0
            {
                let mut rax_10: i64 = *var_558[8] ^ 0x8000000000000000;
                let mut rdx_3: i64 = 1;
                
                if rax_10 >= 4
                {
                    rax_10 = 1;
                }
                
                let mut result_5: *mut i64;
                let mut result_7: *mut *mut c_void;
                let mut rax_13: i8;
                let mut result_3: *mut c_void;
                let mut rcx_3: i64;
                let mut rdx_13: *mut *mut c_void;
                
                match rax_10
                {
                    0 =>
                    {
                        let var_428: i128;
                        rax_13 = var_428;
                        rcx_3 = -0x8000000000000000;
                        
                        match 0
                        {
                            0 =>
                            {
                                'label_475406:
                                var_438 = var_558;
                                result_7 = result_7;
                                var_460 = var_580;
                                result_3 = uu_join::exec::h84507deb68976620(r14_2, rbx_2, 
                                    *rax_4.byte_offset(8), *rax_4.byte_offset(0x10), &var_460, 
                                    rax_13);
                                result = result_3;
                            }
                            1 =>
                            {
                                'label_47551f:
                                let mut var_520: i64 = rcx_3;
                                let var_518_1: i8 = rax_13;
                                let mut result_6: *mut i64 = result_5;
                                result_6 = result_5;
                                let r12_3: i64 = *rax_4.byte_offset(8);
                                let r15_2: u64 = *rax_4.byte_offset(0x10);
                                let var_418: i128;
                                let var_470_1: i128 = var_418;
                                let var_480_1: i128 = var_428;
                                let var_490_1: i128 = var_558;
                                let var_4a0_1: i128 = var_448;
                                let var_4b0_1: i128 = result_7;
                                let mut var_4c0: i128 = var_580;
                                var_180 = 1;
                                memchr::memmem::FinderBuilder::build_forward_with_ranker::h00ab6db1a626f082(&var_460, &var_180, &var_520);
                                memcpy(&var_180, &var_460, 0x120);
                                let mut result_4: *mut i128;
                                let mut rdx_18: *mut *mut c_void;
                                result_4 = uu_join::exec::h99a16e0e986e240a(r14_2, rbx_2, r12_3, 
                                    r15_2, &var_4c0, &var_180);
                                result = result_4;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8146444ea6c0efb2(&var_520);
                            }
                        }
                    }
                    1 =>
                    {
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0ad05dcf4e8c4432(&var_460, &*var_558[8]);
                        rcx_3 = var_460;
                        rax_13 = result_2;
                        result_5 = result_2;
                        let r12_2: i64 = -0x8000000000000000 ^ rcx_3;
                        let mut rdx_9: i64 = 1;
                        
                        if r12_2 < 4
                        {
                            rdx_9 = r12_2;
                        }
                        
                        result_5 = result_7;
                        
                        match rdx_9
                        {
                            0 =>
                            {
                                goto 'label_475406;
                            }
                            1 =>
                            {
                                goto 'label_47551f;
                            }
                            2 =>
                            {
                                'label_475477:
                                var_438 = var_558;
                                result_7 = result_7;
                                var_460 = var_580;
                                result_3 = uu_join::exec::h3549e6cfd5b8c4ea(r14_2, rbx_2, 
                                    *rax_4.byte_offset(8), *rax_4.byte_offset(0x10), &var_460);
                                result = result_3;
                            }
                            3 =>
                            {
                                'label_4754e1:
                                var_438 = var_558;
                                result_7 = result_7;
                                var_460 = var_580;
                                result_3 = uu_join::exec::he72a5f97bdf4dbef(r14_2, rbx_2, 
                                    *rax_4.byte_offset(8), *rax_4.byte_offset(0x10), &var_460);
                                result = result_3;
                            }
                        }
                    }
                    2 =>
                    {
                        rcx_3 = -0x7ffffffffffffffe;
                        'label_47535a:
                        let r12_1: i64 = -0x8000000000000000 ^ rcx_3;
                        
                        if r12_1 < 4
                        {
                            rdx_3 = r12_1;
                        }
                        
                        rax_13 = 0x38;
                        
                        match rdx_3
                        {
                            1 =>
                            {
                                goto 'label_47551f;
                            }
                            2 =>
                            {
                                goto 'label_475477;
                            }
                            3 =>
                            {
                                goto 'label_4754e1;
                            }
                        }
                    }
                    3 =>
                    {
                        rcx_3 = -0x7ffffffffffffffd;
                        goto 'label_47535a;
                    }
                }
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hffccecc10e570152(
                    &var_180);
                let var_450: i64 = var_170;
                var_460 = var_180;
                var_448 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h5d0185bc8dd5466c(&var_460);
                core::ptr::drop_in_place$LT$uu_join..Settings$GT$::h9f47be3a5d5db85b(&var_580);
            }
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he0c483a964158d1e(&var_4f8);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_178);
    }
    result
}
