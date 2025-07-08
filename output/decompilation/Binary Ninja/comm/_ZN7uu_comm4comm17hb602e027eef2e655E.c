
  int64_t uu_comm::comm::hb602e027eef2e655(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4, void* arg5)

{
    int64_t var_1f8 = arg3;
    uint64_t var_1f0 = arg4;
    uint64_t r15 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, 
        "123totalzero-terminated-0.0.28Co…", 1) ^ 1;
    uint64_t r12_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, 
        "23totalzero-terminated-0.0.28Com…", 1) ^ 1;
    void var_1e8;
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_1e8, arg3, arg4, r15);
    void var_1d0;
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_1d0, arg3, arg4, r12_1 + r15);
    int64_t var_2c0 = 0;
    int64_t var_2b8 = 1;
    size_t var_2b0 = 0;
    int64_t rax_2;
    int64_t rdx_2;
    rax_2 = uu_comm::LineReader::read_line::h3933b983d3202395(arg1, &var_2c0);
    int64_t r14_1 = rax_2;
    int64_t rbx_1 = rdx_2;
    int64_t var_2a0 = 0;
    int64_t var_298 = 1;
    uint64_t var_290 = 0;
    int64_t rax_3;
    int64_t rdx_3;
    rax_3 = uu_comm::LineReader::read_line::h3933b983d3202395(arg2, &var_2a0);
    int64_t r13 = rax_3;
    int64_t r12_3 = rdx_3;
    int32_t var_2cc = 0;
    int32_t var_2c8 = 0;
    int32_t var_2c4 = 0;
    int32_t rax_4 = 0;
    int32_t var_2d0 = 0;
    int32_t var_2e8 = 0;
    
    while (true)
    {
        int64_t r15_1 = r12_3;
        int64_t rbp_1 = r13;
        void** var_278;
        void* var_248;
        void* const var_1b8;
        char rax_18;
        
        while (true)
        {
            if (r14_1)
            {
                if (rbp_1)
                    goto label_4ab001;
                
                rax_18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "23totalzero-terminated-0.0.28Com…", 1);
                break;
            }
            
            if (!rbp_1)
            {
                if (!(rbx_1 | r15_1))
                {
                    r15_1 = 0;
                    rbp_1 = 0;
                    rbx_1 = 0;
                    label_4ab001:
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "totalzero-terminated-0.0.28Compa…", 5))
                    {
                        char rax_23 = 0xa;
                        
                        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "zero-terminated-0.0.28Compare tw…", 0xf))
                            rax_23 = 0;
                        
                        char var_2e0 = rax_23;
                        var_248 = &var_2cc;
                        uint64_t (* var_240_3)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                        int64_t* var_238_3 = &var_1f8;
                        int64_t (* var_230_3)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h501bbda59a6f5bd5;
                        int32_t* var_228_1 = &var_2c8;
                        uint64_t (* var_220_1)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                        int32_t* var_218_1 = &var_2c4;
                        uint64_t (* var_210_1)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
                        char* var_208_1 = &var_2e0;
                        int64_t (* var_200_1)(char* arg1, void* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                        var_1b8 = 2;
                        int64_t var_1a8_4 = 2;
                        int64_t var_198_4 = 0;
                        int64_t var_190_1 = 0x20;
                        char var_188_1 = 3;
                        int64_t var_180_1 = 2;
                        int64_t var_170_1 = 2;
                        int64_t var_160;
                        __builtin_memcpy(&var_160, 
                            "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 
                            0x11);
                        int32_t var_2df;
                        int32_t var_14f_1 = var_2df;
                        var_14f_1 = var_2df;
                        int64_t var_148_1 = 2;
                        int64_t var_138_1 = 2;
                        int64_t var_128;
                        __builtin_memcpy(&var_128, 
                            "\x02\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 
                            0x11);
                        int64_t var_110_1 = 2;
                        int64_t var_100_1 = 2;
                        int64_t var_f0;
                        __builtin_memcpy(&var_f0, 
                            "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 
                            0x11);
                        int32_t var_dc_1 = var_2df;
                        int32_t var_df_1 = var_2df;
                        int64_t var_d8_1 = 2;
                        int64_t var_c8_1 = 2;
                        int64_t var_b8;
                        __builtin_memcpy(&var_b8, 
                            "\x03\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 
                            0x11);
                        int64_t var_a0_1 = 2;
                        int64_t var_90_1 = 2;
                        int64_t var_80;
                        __builtin_memcpy(&var_80, 
                            "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 
                            0x11);
                        int32_t var_6c_1 = var_2df;
                        int32_t var_6f_1 = var_2df;
                        int64_t var_68_1 = 2;
                        int64_t var_58_1 = 2;
                        int64_t var_48_1 = 4;
                        int64_t var_40_1 = 0x20;
                        char var_38_1 = 3;
                        var_278 = &data_511398;
                        int64_t var_270_2 = 7;
                        void* const* var_258_1 = &var_1b8;
                        int64_t var_250_1 = 7;
                        void** var_268_1 = &var_248;
                        int64_t var_260_1 = 5;
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
                
                if (!rbx_1)
                {
                    rax_18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "23totalzero-terminated-0.0.28Com…", 1);
                    break;
                    break;
                }
                
                if (r15_1)
                {
                    char rax_7 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::hd1958753a4b05d85(var_2b8, var_2b0, var_298, var_290);
                    
                    if (!rax_7)
                    {
                        int64_t* rdi_8 = arg1;
                        
                        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "3totalzero-terminated-0.0.28Comp…", 1))
                        {
                            alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&var_278, 
                                var_2b8, var_2b0);
                            var_248 = &var_1d0;
                            int64_t (* var_240_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            int64_t* var_238_1 = &var_278;
                            int64_t (* var_230_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h27f8659fad409ff3;
                            var_1b8 = &data_417fd8;
                            int64_t var_1b0_1 = 2;
                            int64_t var_198_1 = 0;
                            void** var_1a8_1 = &var_248;
                            int64_t var_1a0_1 = 2;
                            std::io::stdio::_print::he918bceb0c89db46(&var_1b8);
                            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h05c8280129835fa4(&var_278);
                            rdi_8 = arg1;
                        }
                        
                        var_2b0 = 0;
                        var_290 = 0;
                        int64_t rax_9;
                        int64_t rdx_6;
                        rax_9 = uu_comm::LineReader::read_line::h3933b983d3202395(rdi_8, &var_2c0);
                        r14_1 = rax_9;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(0, rbx_1);
                        int64_t rax_10;
                        int64_t rdx_7;
                        rax_10 = uu_comm::LineReader::read_line::h3933b983d3202395(arg2, &var_2a0);
                        rbp_1 = rax_10;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(0, r15_1);
                        int32_t rax_12 = var_2e8 + 1;
                        var_2e8 = rax_12;
                        var_2c4 = rax_12;
                        r15_1 = rdx_7;
                        rbx_1 = rdx_6;
                        continue;
                    }
                    else if (rax_7 == 1)
                    {
                        rax_18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg5, "23totalzero-terminated-0.0.28Com…", 1);
                        break;
                        break;
                    }
                }
            }
            
            int64_t* rdi_14 = arg1;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg5, "123totalzero-terminated-0.0.28Co…", 1))
            {
                alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&var_248, var_2b8, 
                    var_2b0);
                var_278 = &var_248;
                int64_t (* var_270_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h27f8659fad409ff3;
                var_1b8 = &data_414010;
                int64_t var_1b0_2 = 1;
                int64_t var_198_2 = 0;
                void*** var_1a8_2 = &var_278;
                int64_t var_1a0_2 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_1b8);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h05c8280129835fa4(
                    &var_248);
                rdi_14 = arg1;
            }
            
            var_2b0 = 0;
            int64_t rax_15;
            int64_t rdx_9;
            rax_15 = uu_comm::LineReader::read_line::h3933b983d3202395(rdi_14, &var_2c0);
            r14_1 = rax_15;
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(0, rbx_1);
            int32_t rax_17 = var_2d0 + 1;
            var_2d0 = rax_17;
            var_2cc = rax_17;
            rbx_1 = rdx_9;
        }
        
        if (!rax_18)
        {
            alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&var_278, var_298, var_290);
            var_248 = &var_1e8;
            int64_t (* var_240_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            void*** var_238_2 = &var_278;
            int64_t (* var_230_2)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h27f8659fad409ff3;
            var_1b8 = &data_417fd8;
            int64_t var_1b0_3 = 2;
            int64_t var_198_3 = 0;
            void** var_1a8_3 = &var_248;
            int64_t var_1a0_3 = 2;
            std::io::stdio::_print::he918bceb0c89db46(&var_1b8);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h05c8280129835fa4(
                &var_278);
        }
        
        var_290 = 0;
        int64_t rax_19;
        int64_t rdx_11;
        rax_19 = uu_comm::LineReader::read_line::h3933b983d3202395(arg2, &var_2a0);
        r13 = rax_19;
        r12_3 = rdx_11;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hab415938f50eea8e(rbp_1, r15_1);
        rax_4 += 1;
        var_2c8 = rax_4;
    }
}
