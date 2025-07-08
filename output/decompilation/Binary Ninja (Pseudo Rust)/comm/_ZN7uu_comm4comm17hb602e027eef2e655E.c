
  fn uu_comm::comm::hb602e027eef2e655(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64, arg5: *mut c_void) -> i64

{
    let mut var_1f8: i64 = arg3;
    let var_1f0: u64 = arg4;
    let r15: u64 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, 
        "123totalzero-terminated-0.0.28Co…", 1) ^ 1;
    let r12_1: u64 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, 
        "23totalzero-terminated-0.0.28Com…", 1) ^ 1;
    let mut var_1e8: ();
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_1e8, arg3, arg4, r15);
    let mut var_1d0: ();
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_1d0, arg3, arg4, r12_1 + r15);
    let mut var_2c0: i64 = 0;
    let var_2b8: i64 = 1;
    let mut var_2b0: size_t = 0;
    let mut rax_2: i64;
    let mut rdx_2: i64;
    rax_2 = uu_comm::LineReader::read_line::h3933b983d3202395(arg1, &var_2c0);
    let mut r14_1: i64 = rax_2;
    let mut rbx_1: i64 = rdx_2;
    let mut var_2a0: i64 = 0;
    let var_298: i64 = 1;
    let mut var_290: u64 = 0;
    let mut rax_3: i64;
    let mut rdx_3: i64;
    rax_3 = uu_comm::LineReader::read_line::h3933b983d3202395(arg2, &var_2a0);
    let mut r13: i64 = rax_3;
    let mut r12_3: i64 = rdx_3;
    let mut var_2cc: i32 = 0;
    let mut var_2c8: i32 = 0;
    let mut var_2c4: i32 = 0;
    let mut rax_4: i32 = 0;
    let mut var_2d0: i32 = 0;
    let mut var_2e8: i32 = 0;
    
    loop
    {
        let mut r15_1: i64 = r12_3;
        let mut rbp_1: i64 = r13;
        let mut var_278: *mut *mut c_void;
        let mut var_248: *mut c_void;
        let mut var_1b8: *mut c_void;
        let mut rax_18: i8;
        
        loop
        {
            if r14_1 != 0
            {
                if rbp_1 != 0
                {
                    goto 'label_4ab001;
                }
                
                rax_18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "23totalzero-terminated-0.0.28Com…", 1);
                break;
            }
            
            if rbp_1 == 0
            {
                if (rbx_1 | r15_1) == 0
                {
                    r15_1 = 0;
                    rbp_1 = 0;
                    rbx_1 = 0;
                    'label_4ab001:
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "totalzero-terminated-0.0.28Compa…", 5) != 0
                    {
                        let mut rax_23: i8 = 0xa;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "zero-terminated-0.0.28Compare tw…", 0xf) != 0
                        {
                            rax_23 = 0;
                        }
                        
                        let mut var_2e0: i8 = rax_23;
                        var_248 = &var_2cc;
                        let var_240_3: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                        let var_238_3: *mut i64 = &var_1f8;
                        let var_230_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h501bbda59a6f5bd5;
                        let var_228_1: *mut i32 = &var_2c8;
                        let var_220_1: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                        let var_218_1: *mut i32 = &var_2c4;
                        let var_210_1: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                        let var_208_1: *mut i8 = &var_2e0;
                        let var_200_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                        var_1b8 = 2;
                        let var_1a8_4: i64 = 2;
                        let var_198_4: i64 = 0;
                        let var_190_1: i64 = 0x20;
                        let var_188_1: i8 = 3;
                        let var_180_1: i64 = 2;
                        let var_170_1: i64 = 2;
                        let mut var_160: i64;
                        __builtin_memcpy(&var_160, 
                            "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 
                            0x11);
                        let var_2df: i32;
                        let mut var_14f_1: i32 = var_2df;
                        var_14f_1 = var_2df;
                        let var_148_1: i64 = 2;
                        let var_138_1: i64 = 2;
                        let mut var_128: i64;
                        __builtin_memcpy(&var_128, 
                            "\x02\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 
                            0x11);
                        let var_110_1: i64 = 2;
                        let var_100_1: i64 = 2;
                        let mut var_f0: i64;
                        __builtin_memcpy(&var_f0, 
                            "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 
                            0x11);
                        let var_dc_1: i32 = var_2df;
                        let var_df_1: i32 = var_2df;
                        let var_d8_1: i64 = 2;
                        let var_c8_1: i64 = 2;
                        let mut var_b8: i64;
                        __builtin_memcpy(&var_b8, 
                            "\x03\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 
                            0x11);
                        let var_a0_1: i64 = 2;
                        let var_90_1: i64 = 2;
                        let mut var_80: i64;
                        __builtin_memcpy(&var_80, 
                            "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 
                            0x11);
                        let var_6c_1: i32 = var_2df;
                        let var_6f_1: i32 = var_2df;
                        let var_68_1: i64 = 2;
                        let var_58_1: i64 = 2;
                        let var_48_1: i64 = 4;
                        let var_40_1: i64 = 0x20;
                        let var_38_1: i8 = 3;
                        var_278 = &data_511398;
                        let var_270_2: i64 = 7;
                        let var_258_1: *const *mut c_void = &var_1b8;
                        let var_250_1: i64 = 7;
                        let var_268_1: *mut *mut c_void = &var_248;
                        let var_260_1: i64 = 5;
                        std::io::stdio::_print::he918bceb0c89db46(&var_278);
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(rbp_1, r15_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hdf26cf7b4a8875cd(
                        &var_2a0);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(r14_1, rbx_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hdf26cf7b4a8875cd(
                        &var_2c0);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdc84461bed04814e(
                        &var_1d0);
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdc84461bed04814e(
                        &var_1e8);
                }
                
                if rbx_1 == 0
                {
                    rax_18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "23totalzero-terminated-0.0.28Com…", 1);
                    break;
                    break;
                }
                
                if r15_1 != 0
                {
                    let rax_7: i8 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::hd1958753a4b05d85(var_2b8, var_2b0, var_298, var_290);
                    
                    if rax_7 == 0
                    {
                        let mut rdi_8: *mut i64 = arg1;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "3totalzero-terminated-0.0.28Comp…", 1) == 0
                        {
                            alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&var_278, 
                                var_2b8, var_2b0);
                            var_248 = &var_1d0;
                            let var_240_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            let var_238_1: *mut i64 = &var_278;
                            let var_230_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h27f8659fad409ff3;
                            var_1b8 = &data_417fd8;
                            let var_1b0_1: i64 = 2;
                            let var_198_1: i64 = 0;
                            let var_1a8_1: *mut *mut c_void = &var_248;
                            let var_1a0_1: i64 = 2;
                            std::io::stdio::_print::he918bceb0c89db46(&var_1b8);
                            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h05c8280129835fa4(&var_278);
                            rdi_8 = arg1;
                        }
                        
                        var_2b0 = 0;
                        var_290 = 0;
                        let mut rax_9: i64;
                        let mut rdx_6: i64;
                        rax_9 = uu_comm::LineReader::read_line::h3933b983d3202395(rdi_8, &var_2c0);
                        r14_1 = rax_9;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(0, rbx_1);
                        let mut rax_10: i64;
                        let mut rdx_7: i64;
                        rax_10 = uu_comm::LineReader::read_line::h3933b983d3202395(arg2, &var_2a0);
                        rbp_1 = rax_10;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(0, r15_1);
                        let rax_12: i32 = var_2e8 + 1;
                        var_2e8 = rax_12;
                        var_2c4 = rax_12;
                        r15_1 = rdx_7;
                        rbx_1 = rdx_6;
                        continue;
                    }
                    else if rax_7 == 1
                    {
                        rax_18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "23totalzero-terminated-0.0.28Com…", 1);
                        break;
                        break;
                    }
                }
            }
            
            let mut rdi_14: *mut i64 = arg1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg5, "123totalzero-terminated-0.0.28Co…", 1) == 0
            {
                alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&var_248, var_2b8, 
                    var_2b0);
                var_278 = &var_248;
                let var_270_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h27f8659fad409ff3;
                var_1b8 = &data_414010;
                let var_1b0_2: i64 = 1;
                let var_198_2: i64 = 0;
                let var_1a8_2: *mut *mut *mut c_void = &var_278;
                let var_1a0_2: i64 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_1b8);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h05c8280129835fa4(
                    &var_248);
                rdi_14 = arg1;
            }
            
            var_2b0 = 0;
            let mut rax_15: i64;
            let mut rdx_9: i64;
            rax_15 = uu_comm::LineReader::read_line::h3933b983d3202395(rdi_14, &var_2c0);
            r14_1 = rax_15;
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(0, rbx_1);
            let rax_17: i32 = var_2d0 + 1;
            var_2d0 = rax_17;
            var_2cc = rax_17;
            rbx_1 = rdx_9;
        }
        
        if rax_18 == 0
        {
            alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&var_278, var_298, var_290);
            var_248 = &var_1e8;
            let var_240_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            let var_238_2: *mut *mut *mut c_void = &var_278;
            let var_230_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h27f8659fad409ff3;
            var_1b8 = &data_417fd8;
            let var_1b0_3: i64 = 2;
            let var_198_3: i64 = 0;
            let var_1a8_3: *mut *mut c_void = &var_248;
            let var_1a0_3: i64 = 2;
            std::io::stdio::_print::he918bceb0c89db46(&var_1b8);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h05c8280129835fa4(
                &var_278);
        }
        
        var_290 = 0;
        let mut rax_19: i64;
        let mut rdx_11: i64;
        rax_19 = uu_comm::LineReader::read_line::h3933b983d3202395(arg2, &var_2a0);
        r13 = rax_19;
        r12_3 = rdx_11;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(rbp_1, r15_1);
        rax_4 += 1;
        var_2c8 = rax_4;
    }
}
