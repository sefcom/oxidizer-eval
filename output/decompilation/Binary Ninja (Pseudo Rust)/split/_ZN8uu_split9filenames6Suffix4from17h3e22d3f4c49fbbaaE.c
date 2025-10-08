
  fn uu_split::filenames::Suffix::from::h3e22d3f4c49fbbaa(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i64) -> u64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg2, "numeric-suffixesentity not found", 0x10);
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg2, "hex-suffixes-xsuffix-lengthverbo…", 0xc);
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "-dhex-suffixes-xsuffix-lengthver…", 2);
    let rax_3: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "-xsuffix-lengthverboseseparatore…", 2);
    let mut result_10: u64;
    let mut var_90: i8;
    let mut result_3: u64;
    let mut rbp: i8;
    let mut r12_1: u64;
    let mut result_9: u32;
    
    if rax == 0
    {
        if rax_1 == 0
        {
            result_9 = 1;
            
            if rax_2 == 0
            {
                result_9 = rax_3 * 2;
            }
            
            goto 'label_46b17e;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(
            &result_3, arg2, "hex-suffixes-xsuffix-lengthverbo…", 0xc);
        let rax_5: u64 = clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
            "hex-suffixes-xsuffix-lengthverbo…", 0xc, &result_3);
        result_9 = 2;
        
        if rax_5 == 0
        {
            'label_46b17e:
            rbp = 1;
            result_10 = 0;
            goto 'label_46b1b2;
        }
        
        r12_1 = rax_5;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_90, 
            *(rax_5 + 8), *(rax_5 + 0x10), 0x10);
        
        if var_90 == 1
        {
            goto 'label_46b1f7;
        }
        
        goto 'label_46b163;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(
        &result_3, arg2, "numeric-suffixesentity not found", 0x10);
    let rax_4: u64 = clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
        "numeric-suffixesentity not found", 0x10, &result_3);
    result_9 = 1;
    let mut result: u64;
    let result_6: u64;
    let mut var_60: i128;
    
    if rax_4 == 0
    {
        result_10 = 0;
        rbp = 1;
        'label_46b1b2:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(
            &result_3, arg2, "suffix-lengthverboseseparatoreli…", 0xd);
        let mut rax_8: u64 = clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
            "suffix-lengthverboseseparatoreli…", 0xd, &result_3);
        r12_1 = rax_8;
        let mut result_1: u32;
        let mut result_5: u64;
        
        if rax_8 == 0
        {
            result_1 = result_9;
            result_5 = 2;
        }
        else
        {
            core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_90, 
                *(r12_1 + 8), *(r12_1 + 0x10), 0xa);
            
            if var_90 == 1
            {
                goto 'label_46b1f7;
            }
            
            result_1 = result_9;
            result_5 = result_6;
        }
        
        rax_8 = r12_1 != 0;
        result_9 = result_5 != 0;
        result_9 &= rax_8;
        let mut rbp_1: u32 = rbp;
        
        if result_9 != 0
        {
            rbp_1 = 0;
        }
        
        let rax_9: i64 = *arg3;
        
        if rax_9 >= 6
        {
            'label_46b367:
            let mut result_7: u64 = 2;
            
            if result_5 != 0
            {
                result_7 = result_5;
            }
            
            if r12_1 != 0
            {
                result_5 = result_7;
            }
            
            goto 'label_46b391;
        }
        
        let rcx_1: i64 = *arg3.byte_offset(*(&data_41d418).byte_offset(rax_9 << 3));
        let zmm1_1: u128 = __subpd_xmmpd_mempd(
            __punpckldq_xmmdq_memdq(result_10 + rcx_1, data_41ac80), data_41ac40);
        let mut zmm0_1: u128;
        zmm0_1 = _mm_unpackhi_pd(zmm1_1, zmm1_1) + zmm1_1;
        let zmm0_5: [u64; 0x2] =
            ceil(log(zmm0_1) / log(*(&data_41d448).byte_offset(result_1 << 3)));
        let rax_14: i64 = zmm0_5[0];
        zmm0_5[0] = zmm0_5[0] - 9.2233720368547758e+18;
        let result_8: u64 = (zmm0_5[0] & rax_14 >> 0x3f) | rax_14;
        let mut result_4: u64 = 0;
        let temp0_4: [u64; 0x2] = _mm_xor_pd(zmm0_5, zmm0_5);
        
        if zmm0_5[0] >= temp0_4[0]
        {
            result_4 = result_8;
        }
        
        result = -1;
        
        if zmm0_5[0] <= 1.844674407370955e+19
        {
            result = result_4;
        }
        
        if result_10 >= rcx_1
        {
            if result_5 >= result
            {
                goto 'label_46b367;
            }
            
            'label_46b34a:
            *arg1.byte_offset(8) = 2;
            arg1[1] = result;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            if result_9 == 0
            {
                if result_5 <= result
                {
                    result_5 = result;
                }
                
                rbp_1 = 0;
                goto 'label_46b367;
            }
            
            if result_5 < result
            {
                goto 'label_46b34a;
            }
            
            rbp_1 = 0;
            'label_46b391:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(
                &result_3, arg2, "additional-suffixfilternumber-dh…", 0x11);
            let rax_15: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                "additional-suffixfilternumber-dh…", 0x11, &result_3);
            
            if rax_15 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_90, rax_15);
            result_3 = result_6;
            let result_2: u64;
            var_60 = result_2 + result_6;
            
            if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h428b104382774de8(core::iter::traits::iterator::Iterator::try_fold::h5095833791d1b5f3(&result_3), 1)
                == 0
            {
                arg1[1] = result_2;
                *arg1 = var_90;
                *arg1.byte_offset(0x18) = result_5;
                arg1[2] = result_10;
                *arg1.byte_offset(0x28) = rbp_1;
                result = result_1;
                *arg1.byte_offset(0x29) = result;
            }
            else
            {
                result = result_2;
                arg1[2] = result;
                arg1[1] = var_90;
                *arg1.byte_offset(8) = 1;
                *arg1 = -0x8000000000000000;
            }
        }
    }
    else
    {
        r12_1 = rax_4;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_90, 
            *(rax_4 + 8), *(rax_4 + 0x10), 0xa);
        
        if var_90 != 1
        {
            'label_46b163:
            result_10 = result_6;
            rbp = 0;
            goto 'label_46b1b2;
        }
        
        'label_46b1f7:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &result_3, r12_1);
        result = result_3;
        *arg1.byte_offset(0x18) = var_60;
        *arg1.byte_offset(8) = 0;
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
    }
    result
}
