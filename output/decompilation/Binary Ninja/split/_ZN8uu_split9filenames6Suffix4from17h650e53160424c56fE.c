
  int128_t* uu_split::filenames::Suffix::from::h650e53160424c56f(int128_t* arg1, void* arg2, int64_t* arg3)

{
    char rax =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "numeric-suffixesk", 0x10);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "hex-suffixes-xsuffix-lengthverbo…", 0xc);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "-dhex-suffixes-xsuffix-lengthver…", 2);
    bool rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "-xsuffix-lengthverboseseparatore…", 2);
    size_t var_a0_1;
    char var_90;
    size_t var_68;
    char rbp;
    char* r12_1;
    bool r15;
    
    if (!rax)
    {
        if (!rax_1)
        {
            r15 = true;
            
            if (!rax_2)
                r15 = rax_3 * 2;
            
            goto label_4d970c;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(
            &var_68, arg2, "hex-suffixes-xsuffix-lengthverbo…", 0xc);
        char* rax_5 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
            "hex-suffixes-xsuffix-lengthverbo…", 0xc, &var_68);
        r15 = true;
        
        if (!rax_5)
        {
            label_4d970c:
            rbp = 1;
            var_a0_1 = 0;
            goto label_4d973c;
        }
        
        r12_1 = rax_5;
        core::num::_$LT$impl$u20$usize$GT$::from_str_radix::h79418e6c334030c0(&var_90, 
            *(rax_5 + 8), *(rax_5 + 0x10), 0x10);
        
        if (var_90)
            goto label_4d977d;
        
        goto label_4d96f1;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&var_68, 
        arg2, "numeric-suffixesk", 0x10);
    char* rax_4 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
        "numeric-suffixesk", 0x10, &var_68);
    r15 = true;
    size_t var_88;
    int128_t var_60;
    
    if (!rax_4)
    {
        var_a0_1 = 0;
        rbp = 1;
        label_4d973c:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(
            &var_68, arg2, "suffix-lengthverboseseparatoreli…", 0xd);
        char* rax_8 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
            "suffix-lengthverboseseparatoreli…", 0xd, &var_68);
        r12_1 = rax_8;
        bool var_94_1;
        size_t r13_1;
        
        if (!rax_8)
        {
            var_94_1 = r15;
            r13_1 = 2;
        }
        else
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_90, *(r12_1 + 8), *(r12_1 + 0x10));
            
            if (var_90)
                goto label_4d977d;
            
            var_94_1 = r15;
            r13_1 = var_88;
        }
        
        rax_8 = r12_1;
        r15 = r13_1 & rax_8;
        uint32_t rbp_1 = rbp;
        
        if (r15)
            rbp_1 = 0;
        
        int64_t rax_10 = *arg3;
        
        if (rax_10 >= 6)
        {
            label_4d98ed:
            size_t rax_17 = 2;
            
            if (r13_1)
                rax_17 = r13_1;
            
            if (r12_1)
                r13_1 = rax_17;
            
            goto label_4d9917;
        }
        
        int64_t rcx_1 = *(arg3 + *(&data_4224c8 + (rax_10 << 3)));
        uint128_t zmm1_1 = __subpd_xmmpd_mempd(
            __punpckldq_xmmdq_memdq(var_a0_1 + rcx_1, data_417fd0), data_417f70);
        uint128_t zmm0_1;
        zmm0_1 = _mm_unpackhi_pd(zmm1_1, zmm1_1) + zmm1_1;
        uint64_t zmm0_5[0x2] = ceil(log(zmm0_1) / log(*(&data_4224f8 + (var_94_1 << 3))));
        int64_t rax_15 = zmm0_5[0];
        zmm0_5[0] = zmm0_5[0] - 9.2233720368547758e+18;
        int64_t rdx_9 = (zmm0_5[0] & rax_15 >> 0x3f) | rax_15;
        int64_t rcx_4 = 0;
        uint64_t temp0_4[0x2] = _mm_xor_pd(zmm0_5, zmm0_5);
        
        if (zmm0_5[0] >= temp0_4[0])
            rcx_4 = rdx_9;
        
        int64_t rax_16 = -1;
        
        if (zmm0_5[0] <= 1.844674407370955e+19)
            rax_16 = rcx_4;
        
        if (var_a0_1 >= rcx_1)
        {
            if (r13_1 >= rax_16)
                goto label_4d98ed;
            
            label_4d98d0:
            *(arg1 + 8) = 2;
            arg1[1] = rax_16;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            if (!r15)
            {
                if (r13_1 <= rax_16)
                    r13_1 = rax_16;
                
                rbp_1 = 0;
                goto label_4d98ed;
            }
            
            if (r13_1 < rax_16)
                goto label_4d98d0;
            
            rbp_1 = 0;
            label_4d9917:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(
                &var_68, arg2, "additional-suffixfilternumber-dh…", 0x11);
            void* rax_18 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
                "additional-suffixfilternumber-dh…", 0x11, &var_68);
            
            if (!rax_18)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_90, rax_18);
            var_68 = var_88;
            int64_t var_80;
            var_60 = var_80 + var_88;
            
            if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha5fb3b5979973e2a(core::iter::traits::iterator::Iterator::try_fold::heae82aa079024b40(&var_68)))
            {
                arg1[1] = var_80;
                *arg1 = var_90;
                *(arg1 + 0x18) = r13_1;
                arg1[2] = var_a0_1;
                *(arg1 + 0x28) = rbp_1;
                *(arg1 + 0x29) = var_94_1;
            }
            else
            {
                arg1[2] = var_80;
                arg1[1] = var_90;
                *(arg1 + 8) = 1;
                *arg1 = -0x8000000000000000;
            }
        }
    }
    else
    {
        r12_1 = rax_4;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_90, *(rax_4 + 8), *(rax_4 + 0x10));
        
        if (!var_90)
        {
            label_4d96f1:
            var_a0_1 = var_88;
            rbp = 0;
            goto label_4d973c;
        }
        
        label_4d977d:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_68, r12_1);
        size_t rax_9 = var_68;
        *(arg1 + 0x18) = var_60;
        *(arg1 + 8) = 0;
        arg1[1] = rax_9;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
