
  fn uu_comm::comm::h801203c8d9c12946(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: *mut c_void) -> u64

{
    let mut var_40: i64 = arg3;
    let var_38: i64 = arg4;
    let r15: u64 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, 
        "12", 1) ^ 1;
    let r12_1: u64 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, 
        "2", 1) ^ 1;
    let mut var_58: i64;
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::hc2a5695c2bc3fc96(&var_58, arg3, arg4, 
        r15);
    let mut var_148: i128;
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::hc2a5695c2bc3fc96(&var_148, arg3, arg4, 
        r12_1 + r15);
    let var_138: i64;
    let var_68: i64 = var_138;
    let mut var_78: i128 = var_148;
    let mut var_1a8: i64 = 0;
    let var_1a0: i64 = 1;
    let mut var_198: u64 = 0;
    let mut rax_3: i64;
    let mut rdx_2: i64;
    rax_3 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg1, &var_1a8);
    let mut var_1c8: i64 = rdx_2;
    let mut r15_1: i64 = rax_3;
    let mut var_190: i64 = 0;
    let var_188: i64 = 1;
    let mut var_180: u64 = 0;
    let mut rax_4: i64;
    let mut rdx_3: i64;
    rax_4 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg2, &var_190);
    let mut var_1d0: i64 = rax_4;
    let mut var_1c0: i64 = rdx_3;
    let mut var_16c: u32 = 0;
    let mut var_168: i32 = 0;
    let mut var_164: u32 = 0;
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, 
        "check-ordernocheck-orderFILE1FIL…", 0xb);
    let rax_6: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, 
        "nocheck-orderFILE1FILE23totalzer…", 0xd);
    let mut rbp: i8;
    
    if (rax_5 | rax_6) == 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7c48d0fe3c563640(
            &var_148, arg5, "FILE1FILE23totalzero-terminated");
        let rax_8: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hf45bdcd571c42201(
            "FILE1FILE23totalzero-terminated", &var_148);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7c48d0fe3c563640(
            &var_148, arg5, "FILE23totalzero-terminated");
        let r14_1: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hf45bdcd571c42201(
            "FILE23totalzero-terminated", &var_148);
        let mut rax_9: *mut c_void;
        rax_9 = rax_8 == 0;
        rbp = 1;
        
        if (r14_1 == 0 | rax_9) == 0
        {
            if uucore::features::fs::paths_refer_to_same_file::h3fff10633e6ff57f(rax_8, r14_1) == 0
            {
                uu_comm::are_files_identical::hd9a64e92504ea60b(&var_148, *rax_8.byte_offset(8), 
                    *rax_8.byte_offset(0x10), *r14_1.byte_offset(8));
                rbp = var_148;
                let rbx_1: i8 = *var_148[1];
                
                if rbp == 1
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::ha3f821727ae26b39(rbp, *var_148[8]);
                }
                
                rbp |= rbx_1 ^ 1;
            }
            else
            {
                rbp = 0;
            }
        }
    }
    else
    {
        rbp = rax_6 ^ 1;
    }
    
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 1;
    let var_b0: i64 = 0;
    let var_a8: i8 = 0;
    let mut rax_11: u32 = rax_5;
    let var_a7: i8 = rax_11;
    let var_a6: i8 = 0;
    let mut var_a0: i64 = 0;
    let var_98: i64 = 1;
    let var_90: i64 = 0;
    let var_88: i8 = 1;
    let var_87: i8 = rax_11;
    let var_86: i8 = 0;
    let mut rcx_2: bool = r15_1 == 0;
    rax_11 = var_1d0 == 0;
    let mut rbp_1: i32 = 0;
    let mut var_160: i8;
    let mut var_130: fn(arg1: *mut i64, arg2: i64) -> i64;
    let mut var_f8: *mut c_void;
    let mut var_e8: *mut i128;
    let mut r13_1: i8;
    
    if (rcx_2 | rax_11) != 1
    {
        r13_1 = 0;
    }
    else
    {
        let mut var_170_1: u32 = 0;
        let mut var_174_1: u32 = 0;
        r13_1 = 0;
        
        loop
        {
            if (rcx_2 & 1) == 0
            {
                if (rax_11 & 1) != 0
                {
                    goto 'label_457c1d;
                }
                
                core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
                /* no return */
            }
            
            let mut var_158: fn(arg1: *mut i64, arg2: i64) -> i64;
            let mut var_f0: fn(arg1: *mut c_void, arg2: i64) -> i64;
            
            if (rax_11 & 1) == 0
            {
                'label_457ad5:
                
                if (rbp & 1) != 0 && uu_comm::OrderChecker::verify_order::h2c1501d0f87e8821(
                    &var_c0, var_1a0, var_198) == 0
                {
                    break;
                }
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, "12", 1) == 0
                {
                    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_f8, var_1a0, 
                        var_198);
                    var_160 = &var_f8;
                    var_158 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h57a5f77fa7ff21ec;
                    var_148 = &data_417ef0;
                    *var_148[8] = 1;
                    let var_128_1: i64 = 0;
                    let var_138_1: *mut i8 = &var_160;
                    var_130 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_148);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hf71096e857d2a8cf(var_f8, var_f0);
                }
                
                var_198 = 0;
                let mut rax_18: i64;
                let mut rdx_9: i64;
                rax_18 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg1, &var_1a8);
                core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h9f566212b124935e(r15_1, var_1c8);
                rax_11 = var_170_1 + 1;
                var_170_1 = rax_11;
                var_16c = rax_11;
                var_1c8 = rdx_9;
                r15_1 = rax_18;
                
                if var_a6 != 0 || var_86 == 1
                {
                    goto 'label_457d70;
                }
            }
            else
            {
                if (var_1c8 | var_1c0) == 0
                {
                    break;
                }
                
                if var_1c8 == 0
                {
                    'label_457c1d:
                    
                    if (rbp & 1) != 0 && uu_comm::OrderChecker::verify_order::h2c1501d0f87e8821(
                        &var_a0, var_188, var_180) == 0
                    {
                        break;
                    }
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, "2", 1) == 0
                    {
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_160, 
                            var_188, var_180);
                        var_f8 = &var_58;
                        var_f0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_e8 = &var_160;
                        let var_e0_1: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h57a5f77fa7ff21ec;
                        var_148 = &data_4190e8;
                        *var_148[8] = 2;
                        let var_128_2: i64 = 0;
                        let var_138_2: *const *mut c_void = &var_f8;
                        var_130 = 2;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_148);
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hf71096e857d2a8cf(var_160, var_158);
                    }
                    
                    var_180 = 0;
                    let mut rax_22: i64;
                    let mut rdx_12: i64;
                    rax_22 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg2, &var_190);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h9f566212b124935e(var_1d0, var_1c0);
                    rbp_1 += 1;
                    var_168 = rbp_1;
                    var_1c0 = rdx_12;
                    var_1d0 = rax_22;
                    
                    if var_a6 != 0 || var_86 == 1
                    {
                        'label_457d70:
                        rax_11 = r13_1;
                        r13_1 = 1;
                        
                        if (rax_11 & 1) != 0
                        {
                            r13_1 = rax_11;
                        }
                        
                        if rax_5 != 0
                        {
                            r13_1 = rax_11;
                        }
                    }
                }
                else
                {
                    if var_1c0 == 0
                    {
                        goto 'label_457ad5;
                    }
                    
                    let rax_14: i8 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h97e01b4f27d9aef2(var_1a0, var_198, var_188, var_180);
                    
                    if rax_14 != 0
                    {
                        if rax_14 == 1
                        {
                            goto 'label_457c1d;
                        }
                        
                        goto 'label_457ad5;
                    }
                    
                    if (rbp & 1) != 0
                    {
                        if uu_comm::OrderChecker::verify_order::h2c1501d0f87e8821(&var_c0, var_1a0, 
                            var_198) == 0
                        {
                            break;
                        }
                        
                        if uu_comm::OrderChecker::verify_order::h2c1501d0f87e8821(&var_a0, var_188, 
                            var_180) == 0
                        {
                            break;
                        }
                    }
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, "3totalzero-terminated", 1) == 0
                    {
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_160, 
                            var_1a0, var_198);
                        var_f8 = &var_78;
                        var_f0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_e8 = &var_160;
                        let var_e0_2: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h57a5f77fa7ff21ec;
                        var_148 = &data_4190e8;
                        *var_148[8] = 2;
                        let var_128_3: i64 = 0;
                        let var_138_3: *const *mut c_void = &var_f8;
                        var_130 = 2;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_148);
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hf71096e857d2a8cf(var_160, var_158);
                    }
                    
                    var_198 = 0;
                    var_180 = 0;
                    let mut rax_26: i64;
                    let mut rdx_16: i64;
                    rax_26 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg1, &var_1a8);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h9f566212b124935e(r15_1, var_1c8);
                    let var_1c8_1: i64 = rdx_16;
                    let mut rax_27: i64;
                    let mut rdx_17: i64;
                    rax_27 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg2, &var_190);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h9f566212b124935e(var_1d0, var_1c0);
                    rax_11 = var_174_1 + 1;
                    var_174_1 = rax_11;
                    var_164 = rax_11;
                    var_1c0 = rdx_17;
                    var_1d0 = rax_27;
                    var_1c8 = rdx_16;
                    r15_1 = rax_26;
                    
                    if var_a6 != 0 || var_86 == 1
                    {
                        goto 'label_457d70;
                    }
                }
            }
            rax_11 = var_1d0 == 0;
            rcx_2 = r15_1 == 0;
            
            if r15_1 != 0
            {
                if var_1d0 != 0
                {
                    break;
                }
            }
        }
    }
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, 
        "totalzero-terminated", 5) != 0
    {
        let mut rax_31: i8 = 0xa;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg5, "zero-terminated", 0xf) != 0
        {
            rax_31 = 0;
        }
        
        var_160 = rax_31;
        var_148 = &var_16c;
        *var_148[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        let var_138_4: *mut i64 = &var_40;
        var_130 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4b6cb7d1e879db89;
        let var_128_4: *mut i32 = &var_168;
        let var_120_1: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        let var_118_1: *mut u32 = &var_164;
        let var_110_1: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        let var_108_1: *mut i8 = &var_160;
        let var_100_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
        var_f8 = &data_4e0cd0;
        let var_f0_1: i64 = 7;
        let var_d8_1: *mut c_void = &data_419288;
        let var_d0_1: i64 = 7;
        var_e8 = &var_148;
        let var_e0_3: i64 = 5;
        std::io::stdio::_print::h5e446ff973c02de6(&var_f8);
    }
    
    let mut result: u64;
    
    if (rbp & 1) == 0 || (var_a6 == 0 && var_86 != 1)
    {
        result = 0;
    }
    else
    {
        if (r13_1 & 1) != 0
        {
            var_148 = &data_4e0ca8;
            *var_148[8] = 1;
            let var_138_5: i64 = 8;
            var_130 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h397e91f739d192db(&var_f8, 1, 0);
        let var_138_6: *mut i128 = var_e8;
        var_148 = var_f8;
        var_130 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h1d022f484ddf2fc1(&var_148);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4070afa48d0f3fd9(var_a0, var_98);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4070afa48d0f3fd9(var_c0, var_b8);
    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h9f566212b124935e(var_1d0, var_1c0);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he0a0047fc625cdb7(var_190, var_188);
    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h9f566212b124935e(r15_1, var_1c8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he0a0047fc625cdb7(var_1a8, var_1a0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4070afa48d0f3fd9(var_78, *var_78[8]);
    let var_50: i64;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4070afa48d0f3fd9(var_58, var_50);
    result
}
