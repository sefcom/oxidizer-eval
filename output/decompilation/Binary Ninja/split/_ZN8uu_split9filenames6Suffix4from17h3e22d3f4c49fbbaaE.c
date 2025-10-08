
  uint64_t uu_split::filenames::Suffix::from::h3e22d3f4c49fbbaa(int128_t* arg1, void* arg2, int64_t* arg3)

{
    char rax =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg2, "numeric-suffixesentity not found", 0x10);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg2, "hex-suffixes-xsuffix-lengthverbo…", 0xc);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "-dhex-suffixes-xsuffix-lengthver…", 2);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "-xsuffix-lengthverboseseparatore…", 2);
    uint64_t result_10;
    char var_90;
    uint64_t result_3;
    char rbp;
    uint64_t r12_1;
    uint32_t result_9;
    
    if (!rax)
    {
        if (!rax_1)
        {
            result_9 = 1;
            
            if (!rax_2)
                result_9 = rax_3 * 2;
            
            goto label_46b17e;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(
            &result_3, arg2, "hex-suffixes-xsuffix-lengthverbo…", 0xc);
        uint64_t rax_5 = clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
            "hex-suffixes-xsuffix-lengthverbo…", 0xc, &result_3);
        result_9 = 2;
        
        if (!rax_5)
        {
            label_46b17e:
            rbp = 1;
            result_10 = 0;
            goto label_46b1b2;
        }
        
        r12_1 = rax_5;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_90, 
            *(rax_5 + 8), *(rax_5 + 0x10), 0x10);
        
        if (var_90 == 1)
            goto label_46b1f7;
        
        goto label_46b163;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(
        &result_3, arg2, "numeric-suffixesentity not found", 0x10);
    uint64_t rax_4 = clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
        "numeric-suffixesentity not found", 0x10, &result_3);
    result_9 = 1;
    uint64_t result;
    uint64_t result_6;
    int128_t var_60;
    
    if (!rax_4)
    {
        result_10 = 0;
        rbp = 1;
        label_46b1b2:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(
            &result_3, arg2, "suffix-lengthverboseseparatoreli…", 0xd);
        uint64_t rax_8 = clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
            "suffix-lengthverboseseparatoreli…", 0xd, &result_3);
        r12_1 = rax_8;
        uint32_t result_1;
        uint64_t result_5;
        
        if (!rax_8)
        {
            result_1 = result_9;
            result_5 = 2;
        }
        else
        {
            core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_90, 
                *(r12_1 + 8), *(r12_1 + 0x10), 0xa);
            
            if (var_90 == 1)
                goto label_46b1f7;
            
            result_1 = result_9;
            result_5 = result_6;
        }
        
        rax_8 = r12_1;
        result_9 = result_5;
        result_9 &= rax_8;
        uint32_t rbp_1 = rbp;
        
        if (result_9)
            rbp_1 = 0;
        
        int64_t rax_9 = *arg3;
        
        if (rax_9 >= 6)
        {
            label_46b367:
            uint64_t result_7 = 2;
            
            if (result_5)
                result_7 = result_5;
            
            if (r12_1)
                result_5 = result_7;
            
            goto label_46b391;
        }
        
        int64_t rcx_1 = *(arg3 + *(&data_41d418 + (rax_9 << 3)));
        uint128_t zmm1_1 = __subpd_xmmpd_mempd(
            __punpckldq_xmmdq_memdq(result_10 + rcx_1, data_41ac80), data_41ac40);
        uint128_t zmm0_1;
        zmm0_1 = _mm_unpackhi_pd(zmm1_1, zmm1_1) + zmm1_1;
        uint64_t zmm0_5[0x2] = ceil(log(zmm0_1) / log(*(&data_41d448 + (result_1 << 3))));
        int64_t rax_14 = zmm0_5[0];
        zmm0_5[0] = zmm0_5[0] - 9.2233720368547758e+18;
        uint64_t result_8 = (zmm0_5[0] & rax_14 >> 0x3f) | rax_14;
        uint64_t result_4 = 0;
        uint64_t temp0_4[0x2] = _mm_xor_pd(zmm0_5, zmm0_5);
        
        if (zmm0_5[0] >= temp0_4[0])
            result_4 = result_8;
        
        result = -1;
        
        if (zmm0_5[0] <= 1.844674407370955e+19)
            result = result_4;
        
        if (result_10 >= rcx_1)
        {
            if (result_5 >= result)
                goto label_46b367;
            
            label_46b34a:
            *(arg1 + 8) = 2;
            arg1[1] = result;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            if (!result_9)
            {
                if (result_5 <= result)
                    result_5 = result;
                
                rbp_1 = 0;
                goto label_46b367;
            }
            
            if (result_5 < result)
                goto label_46b34a;
            
            rbp_1 = 0;
            label_46b391:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(
                &result_3, arg2, "additional-suffixfilternumber-dh…", 0x11);
            void* rax_15 = clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                "additional-suffixfilternumber-dh…", 0x11, &result_3);
            
            if (!rax_15)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_90, rax_15);
            result_3 = result_6;
            uint64_t result_2;
            var_60 = result_2 + result_6;
            
            if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h428b104382774de8(core::iter::traits::iterator::Iterator::try_fold::h5095833791d1b5f3(&result_3), 1))
            {
                arg1[1] = result_2;
                *arg1 = var_90;
                *(arg1 + 0x18) = result_5;
                arg1[2] = result_10;
                *(arg1 + 0x28) = rbp_1;
                result = result_1;
                *(arg1 + 0x29) = result;
            }
            else
            {
                result = result_2;
                arg1[2] = result;
                arg1[1] = var_90;
                *(arg1 + 8) = 1;
                *arg1 = -0x8000000000000000;
            }
        }
    }
    else
    {
        r12_1 = rax_4;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_90, 
            *(rax_4 + 8), *(rax_4 + 0x10), 0xa);
        
        if (var_90 != 1)
        {
            label_46b163:
            result_10 = result_6;
            rbp = 0;
            goto label_46b1b2;
        }
        
        label_46b1f7:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &result_3, r12_1);
        result = result_3;
        *(arg1 + 0x18) = var_60;
        *(arg1 + 8) = 0;
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
    }
    return result;
}
