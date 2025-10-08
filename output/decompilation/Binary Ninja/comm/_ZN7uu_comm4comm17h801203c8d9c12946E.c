
  uint64_t uu_comm::comm::h801203c8d9c12946(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, void* arg5)

{
    int64_t var_40 = arg3;
    int64_t var_38 = arg4;
    uint64_t r15 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, 
        "12", 1) ^ 1;
    uint64_t r12_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, 
        "2", 1) ^ 1;
    int64_t var_58;
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::hc2a5695c2bc3fc96(&var_58, arg3, arg4, 
        r15);
    int128_t var_148;
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::hc2a5695c2bc3fc96(&var_148, arg3, arg4, 
        r12_1 + r15);
    int64_t var_138;
    int64_t var_68 = var_138;
    int128_t var_78 = var_148;
    int64_t var_1a8 = 0;
    int64_t var_1a0 = 1;
    uint64_t var_198 = 0;
    int64_t rax_3;
    int64_t rdx_2;
    rax_3 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg1, &var_1a8);
    int64_t var_1c8 = rdx_2;
    int64_t r15_1 = rax_3;
    int64_t var_190 = 0;
    int64_t var_188 = 1;
    uint64_t var_180 = 0;
    int64_t rax_4;
    int64_t rdx_3;
    rax_4 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg2, &var_190);
    int64_t var_1d0 = rax_4;
    int64_t var_1c0 = rdx_3;
    uint32_t var_16c = 0;
    int32_t var_168 = 0;
    uint32_t var_164 = 0;
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, 
        "check-ordernocheck-orderFILE1FIL…", 0xb);
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, 
        "nocheck-orderFILE1FILE23totalzer…", 0xd);
    char rbp;
    
    if (!(rax_5 | rax_6))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7c48d0fe3c563640(
            &var_148, arg5, "FILE1FILE23totalzero-terminated");
        void* rax_8 = clap_builder::parser::error::MatchesError::unwrap::hf45bdcd571c42201(
            "FILE1FILE23totalzero-terminated", &var_148);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7c48d0fe3c563640(
            &var_148, arg5, "FILE23totalzero-terminated");
        void* r14_1 = clap_builder::parser::error::MatchesError::unwrap::hf45bdcd571c42201(
            "FILE23totalzero-terminated", &var_148);
        void* rax_9;
        rax_9 = !rax_8;
        rbp = 1;
        
        if (!(!r14_1 | rax_9))
        {
            if (!uucore::features::fs::paths_refer_to_same_file::h3fff10633e6ff57f(rax_8, r14_1))
            {
                uu_comm::are_files_identical::hd9a64e92504ea60b(&var_148, *(rax_8 + 8), 
                    *(rax_8 + 0x10), *(r14_1 + 8));
                rbp = var_148;
                char rbx_1 = *var_148[1];
                
                if (rbp == 1)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::ha3f821727ae26b39(rbp, *var_148[8]);
                
                rbp |= rbx_1 ^ 1;
            }
            else
                rbp = 0;
        }
    }
    else
        rbp = rax_6 ^ 1;
    
    int64_t var_c0 = 0;
    int64_t var_b8 = 1;
    int64_t var_b0 = 0;
    char var_a8 = 0;
    uint32_t rax_11 = rax_5;
    char var_a7 = rax_11;
    char var_a6 = 0;
    int64_t var_a0 = 0;
    int64_t var_98 = 1;
    int64_t var_90 = 0;
    char var_88 = 1;
    char var_87 = rax_11;
    char var_86 = 0;
    bool rcx_2 = !r15_1;
    rax_11 = !var_1d0;
    int32_t rbp_1 = 0;
    char var_160;
    int64_t (* var_130)(int64_t* arg1, int64_t arg2);
    void* const var_f8;
    int128_t* var_e8;
    char r13_1;
    
    if ((rcx_2 | rax_11) != 1)
        r13_1 = 0;
    else
    {
        uint32_t var_170_1 = 0;
        uint32_t var_174_1 = 0;
        r13_1 = 0;
        
        while (true)
        {
            if (!(rcx_2 & 1))
            {
                if (rax_11 & 1)
                    goto label_457c1d;
                
                core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
                /* no return */
            }
            
            int64_t (* var_158)(int64_t* arg1, int64_t arg2);
            int64_t (* var_f0)(void* arg1, int64_t arg2);
            
            if (!(rax_11 & 1))
            {
                label_457ad5:
                
                if (rbp & 1 && !uu_comm::OrderChecker::verify_order::h2c1501d0f87e8821(&var_c0, 
                        var_1a0, var_198))
                    break;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, "12", 1))
                {
                    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_f8, var_1a0, 
                        var_198);
                    var_160 = &var_f8;
                    var_158 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h57a5f77fa7ff21ec;
                    var_148 = &data_417ef0;
                    *var_148[8] = 1;
                    int64_t var_128_1 = 0;
                    char* var_138_1 = &var_160;
                    var_130 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_148);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hf71096e857d2a8cf(var_f8, var_f0);
                }
                
                var_198 = 0;
                int64_t rax_18;
                int64_t rdx_9;
                rax_18 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg1, &var_1a8);
                core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h9f566212b124935e(r15_1, var_1c8);
                rax_11 = var_170_1 + 1;
                var_170_1 = rax_11;
                var_16c = rax_11;
                var_1c8 = rdx_9;
                r15_1 = rax_18;
                
                if (var_a6 || var_86 == 1)
                    goto label_457d70;
            }
            else
            {
                if (!(var_1c8 | var_1c0))
                    break;
                
                if (!var_1c8)
                {
                    label_457c1d:
                    
                    if (rbp & 1 && !uu_comm::OrderChecker::verify_order::h2c1501d0f87e8821(&var_a0, 
                            var_188, var_180))
                        break;
                    
                    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, "2", 1))
                    {
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_160, 
                            var_188, var_180);
                        var_f8 = &var_58;
                        var_f0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_e8 = &var_160;
                        int64_t (* var_e0_1)(int64_t* arg1, int64_t arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h57a5f77fa7ff21ec;
                        var_148 = &data_4190e8;
                        *var_148[8] = 2;
                        int64_t var_128_2 = 0;
                        void* const* var_138_2 = &var_f8;
                        var_130 = 2;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_148);
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hf71096e857d2a8cf(var_160, var_158);
                    }
                    
                    var_180 = 0;
                    int64_t rax_22;
                    int64_t rdx_12;
                    rax_22 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg2, &var_190);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h9f566212b124935e(var_1d0, var_1c0);
                    rbp_1 += 1;
                    var_168 = rbp_1;
                    var_1c0 = rdx_12;
                    var_1d0 = rax_22;
                    
                    if (var_a6 || var_86 == 1)
                    {
                        label_457d70:
                        rax_11 = r13_1;
                        r13_1 = 1;
                        
                        if (rax_11 & 1)
                            r13_1 = rax_11;
                        
                        if (rax_5)
                            r13_1 = rax_11;
                    }
                }
                else
                {
                    if (!var_1c0)
                        goto label_457ad5;
                    
                    char rax_14 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h97e01b4f27d9aef2(var_1a0, var_198, var_188, var_180);
                    
                    if (rax_14)
                    {
                        if (rax_14 == 1)
                            goto label_457c1d;
                        
                        goto label_457ad5;
                    }
                    
                    if (rbp & 1)
                    {
                        if (!uu_comm::OrderChecker::verify_order::h2c1501d0f87e8821(&var_c0, 
                                var_1a0, var_198))
                            break;
                        
                        if (!uu_comm::OrderChecker::verify_order::h2c1501d0f87e8821(&var_a0, 
                                var_188, var_180))
                            break;
                    }
                    
                    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, "3totalzero-terminated", 1))
                    {
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_160, 
                            var_1a0, var_198);
                        var_f8 = &var_78;
                        var_f0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_e8 = &var_160;
                        int64_t (* var_e0_2)(int64_t* arg1, int64_t arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h57a5f77fa7ff21ec;
                        var_148 = &data_4190e8;
                        *var_148[8] = 2;
                        int64_t var_128_3 = 0;
                        void* const* var_138_3 = &var_f8;
                        var_130 = 2;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_148);
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hf71096e857d2a8cf(var_160, var_158);
                    }
                    
                    var_198 = 0;
                    var_180 = 0;
                    int64_t rax_26;
                    int64_t rdx_16;
                    rax_26 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg1, &var_1a8);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h9f566212b124935e(r15_1, var_1c8);
                    int64_t var_1c8_1 = rdx_16;
                    int64_t rax_27;
                    int64_t rdx_17;
                    rax_27 = uu_comm::LineReader::read_line::hcee5e6e842767e3f(arg2, &var_190);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h9f566212b124935e(var_1d0, var_1c0);
                    rax_11 = var_174_1 + 1;
                    var_174_1 = rax_11;
                    var_164 = rax_11;
                    var_1c0 = rdx_17;
                    var_1d0 = rax_27;
                    var_1c8 = rdx_16;
                    r15_1 = rax_26;
                    
                    if (var_a6 || var_86 == 1)
                        goto label_457d70;
                }
            }
            rax_11 = !var_1d0;
            rcx_2 = !r15_1;
            
            if (r15_1)
            {
                if (var_1d0)
                    break;
            }
        }
    }
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg5, 
        "totalzero-terminated", 5))
    {
        char rax_31 = 0xa;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg5, "zero-terminated", 0xf))
            rax_31 = 0;
        
        var_160 = rax_31;
        var_148 = &var_16c;
        *var_148[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        int64_t* var_138_4 = &var_40;
        var_130 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4b6cb7d1e879db89;
        int32_t* var_128_4 = &var_168;
        uint64_t (* var_120_1)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        uint32_t* var_118_1 = &var_164;
        uint64_t (* var_110_1)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        char* var_108_1 = &var_160;
        int64_t (* var_100_1)(char* arg1, int64_t* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
        var_f8 = &data_4e0cd0;
        int64_t var_f0_1 = 7;
        void* const var_d8_1 = &data_419288;
        int64_t var_d0_1 = 7;
        var_e8 = &var_148;
        int64_t var_e0_3 = 5;
        std::io::stdio::_print::h5e446ff973c02de6(&var_f8);
    }
    
    uint64_t result;
    
    if (!(rbp & 1) || (!var_a6 && var_86 != 1))
        result = 0;
    else
    {
        if (r13_1 & 1)
        {
            var_148 = &data_4e0ca8;
            *var_148[8] = 1;
            int64_t var_138_5 = 8;
            var_130 = {0};
            std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h397e91f739d192db(&var_f8, 1, 0);
        int128_t* var_138_6 = var_e8;
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
    int64_t var_50;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4070afa48d0f3fd9(var_58, var_50);
    return result;
}
