
  fn uu_join::uumain::uumain::h8d1d569db9477de2(arg1: i64) -> u64

{
    let mut var_460: i64;
    uu_join::uu_app::hf0c646455b56e430(&var_460);
    let mut var_180: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h6344f1457e8c4b42(&var_180, 
        &var_460, arg1);
    let rax: i64 = var_180;
    let var_178: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_178);
    }
    
    let var_150: i64;
    let var_4c8_1: i64 = var_150;
    let var_160: i128;
    let var_4d8_1: i128 = var_160;
    let var_170: i128;
    let var_4e8_1: i128 = var_170;
    let mut var_4f8: i64 = rax;
    let var_4f0_1: i64 = var_178;
    uu_join::parse_settings::ha7f529424dcbcc67(&var_460, &var_4f8);
    let rax_2: i64 = var_460;
    let result_2: u64;
    let mut result: u64 = result_2;
    
    if rax_2 != -0x8000000000000000
    {
        let var_408: i64;
        let var_510_1: i64 = var_408;
        let mut var_568: i64 = rax_2;
        let result_1: u64 = result;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h044ef7089f501803(
            &var_460, &var_4f8, "file1file2-/home/34r7hm4n/.rustu…");
        let rax_3: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h303782eb8d86c058(
            "file1file2-/home/34r7hm4n/.rustu…", &var_460);
        let mut rax_4: *mut c_void;
        
        if rax_3 != 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h044ef7089f501803(
                &var_460, &var_4f8, "file2-/home/34r7hm4n/.rustup/too…");
            rax_4 = clap_builder::parser::error::MatchesError::unwrap::h303782eb8d86c058(
                "file2-/home/34r7hm4n/.rustup/too…", &var_460);
        }
        
        if rax_3 == 0 || rax_4 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let mut r12_1: u64 = 1;
        let rax_5: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6dfc583ec70d37c7(*rax_3.byte_offset(8), *rax_3.byte_offset(0x10), 
            "-/home/34r7hm4n/.rustup/toolchai…", 1);
        let mut rax_6: i8;
        
        if rax_5 != 0
        {
            rax_6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6dfc583ec70d37c7(*rax_4.byte_offset(8), *rax_4.byte_offset(0x10), 
                "-/home/34r7hm4n/.rustup/toolchai…", 1);
        }
        
        let mut var_448: i128;
        
        if rax_5 == 0 || rax_6 == 0
        {
            let var_438: i128;
            let mut r15_1: i64 = *var_438[8];
            let rcx_5: u64 = r15_1 ^ 0x8000000000000000;
            
            if rcx_5 < 4
            {
                r12_1 = rcx_5;
            }
            
            let var_428: i128;
            let mut rax_9: u64;
            
            match r12_1
            {
                0 =>
                {
                    rax_9 = var_428;
                    r12_1 = *var_428[1] | (*var_428[5] | *var_428[7] << 0x10) << 0x20;
                    let mut rdx_5: u64 = 1;
                    
                    if rcx_5 < 4
                    {
                        rdx_5 = rcx_5;
                    }
                    
                    let mut var_450: *mut *mut c_void;
                    let mut result_3: u64;
                    let mut rdx_18: *mut *mut c_void;
                    
                    match rdx_5
                    {
                        0 =>
                        {
                            'label_4660cf:
                            var_450 = var_450;
                            var_460 = var_568;
                            result_3 = uu_join::exec::h240f3fcdcfc58a54(*rax_3.byte_offset(8), 
                                *rax_3.byte_offset(0x10), *rax_4.byte_offset(8), 
                                *rax_4.byte_offset(0x10), &var_460, rax_9);
                            result = result_3;
                        }
                        1 =>
                        {
                            'label_4661df:
                            let r12_5: u64 = r12_1 << 8 | rax_9;
                            let r13_3: i64 = *rax_3.byte_offset(8);
                            let rax_11: u64 = *rax_3.byte_offset(0x10);
                            let rax_12: u64 = *rax_4.byte_offset(8);
                            let r14_3: u64 = *rax_4.byte_offset(0x10);
                            let var_418: i128;
                            let var_470_1: i128 = var_418;
                            let var_480_1: i128 = var_428;
                            let var_490_1: i128 = var_438;
                            let var_4a0_1: i128 = var_448;
                            let var_4b0_1: i128 = var_450;
                            let mut var_4c0: i128 = var_568;
                            memchr::memmem::FinderBuilder::build_forward_with_ranker::he3705527259d3c49(&var_460, 1, r12_5);
                            memcpy(&var_180, &var_460, 0x120);
                            let mut result_4: u64;
                            let mut rdx_23: *mut *mut c_void;
                            result_4 = uu_join::exec::h3f5682ee62539478(r13_3, rax_11, rax_12, 
                                r14_3, &var_4c0, &var_180);
                            result = result_4;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h58ee7191efc6e1eb(r15_1, r12_5);
                        }
                        2 =>
                        {
                            'label_466143:
                            var_450 = var_450;
                            var_460 = var_568;
                            result_3 = uu_join::exec::hdc95ee4ff91a8f17(*rax_3.byte_offset(8), 
                                *rax_3.byte_offset(0x10), *rax_4.byte_offset(8), 
                                *rax_4.byte_offset(0x10), &var_460);
                            result = result_3;
                        }
                        3 =>
                        {
                            'label_4661b0:
                            var_450 = var_450;
                            var_460 = var_568;
                            result_3 = uu_join::exec::hfcb69fdd78287944(*rax_3.byte_offset(8), 
                                *rax_3.byte_offset(0x10), *rax_4.byte_offset(8), 
                                *rax_4.byte_offset(0x10), &var_460);
                            result = result_3;
                        }
                    }
                }
                1 =>
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h950c0b3c5b783c8f(&var_460, var_428, *var_428[8]);
                    r15_1 = var_460;
                    rax_9 = result_2;
                    r12_1 = *result_2[1] | (*result_2[5] | *result_2[7] << 0x10) << 0x20;
                    let r13_2: i64 = -0x8000000000000000 ^ r15_1;
                    let mut rdx_14: i64 = 1;
                    
                    if r13_2 < 4
                    {
                        rdx_14 = r13_2;
                    }
                    
                    match rdx_14
                    {
                        0 =>
                        {
                            goto 'label_4660cf;
                        }
                        1 =>
                        {
                            goto 'label_4661df;
                        }
                        2 =>
                        {
                            goto 'label_466143;
                        }
                        3 =>
                        {
                            goto 'label_4661b0;
                        }
                    }
                }
                2 =>
                {
                    r15_1 = -0x7ffffffffffffffe;
                    'label_465fee:
                    let r13_1: u64 = -0x8000000000000000 ^ r15_1;
                    rax_9 = 1;
                    
                    if r13_1 < 4
                    {
                        rax_9 = r13_1;
                    }
                    
                    match rax_9
                    {
                        1 =>
                        {
                            goto 'label_4661df;
                        }
                        2 =>
                        {
                            goto 'label_466143;
                        }
                        3 =>
                        {
                            goto 'label_4661b0;
                        }
                    }
                }
                3 =>
                {
                    r15_1 = -0x7ffffffffffffffd;
                    goto 'label_465fee;
                }
            }
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h2e3148bc2a0eecbc(&var_180, "both files cannot be standard in…", 0x23);
            let var_450_1: i64 = var_170;
            var_460 = var_180;
            var_448 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::ha572905631bde212(&var_460);
            core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha1256ac33370452f(&var_568);
        }
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbafc4eb677249fa1(&var_4f8);
    result
}
