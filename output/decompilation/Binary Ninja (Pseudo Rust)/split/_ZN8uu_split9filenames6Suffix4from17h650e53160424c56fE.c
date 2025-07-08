
  fn uu_split::filenames::Suffix::from::h650e53160424c56f(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i64) -> *mut i128

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "numeric-suffixesk", 0x10);
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "hex-suffixes-xsuffix-lengthverbo…", 0xc);
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "-dhex-suffixes-xsuffix-lengthver…", 2);
    let rax_3: bool =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "-xsuffix-lengthverboseseparatore…", 2);
    let mut var_a0_1: size_t;
    let mut var_90: i8;
    let mut var_68: size_t;
    let mut rbp: i8;
    let mut r12_1: *mut i8;
    let mut r15: bool;
    
    if rax == 0
    {
        if rax_1 == 0
        {
            r15 = true;
            
            if rax_2 == 0
            {
                r15 = rax_3 * 2;
            }
            
            goto 'label_4d970c;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(
            &var_68, arg2, "hex-suffixes-xsuffix-lengthverbo…", 0xc);
        let rax_5: *mut i8 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
            "hex-suffixes-xsuffix-lengthverbo…", 0xc, &var_68);
        r15 = true;
        
        if rax_5 == 0
        {
            'label_4d970c:
            rbp = 1;
            var_a0_1 = 0;
            goto 'label_4d973c;
        }
        
        r12_1 = rax_5;
        core::num::_$LT$impl$u20$usize$GT$::from_str_radix::h79418e6c334030c0(&var_90, 
            *rax_5.byte_offset(8), *rax_5.byte_offset(0x10), 0x10);
        
        if var_90 != 0
        {
            goto 'label_4d977d;
        }
        
        goto 'label_4d96f1;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&var_68, 
        arg2, "numeric-suffixesk", 0x10);
    let rax_4: *mut i8 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
        "numeric-suffixesk", 0x10, &var_68);
    r15 = true;
    let var_88: size_t;
    let mut var_60: i128;
    
    if rax_4 == 0
    {
        var_a0_1 = 0;
        rbp = 1;
        'label_4d973c:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(
            &var_68, arg2, "suffix-lengthverboseseparatoreli…", 0xd);
        let mut rax_8: *mut i8 =
            clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
            "suffix-lengthverboseseparatoreli…", 0xd, &var_68);
        r12_1 = rax_8;
        let mut var_94_1: bool;
        let mut r13_1: size_t;
        
        if rax_8 == 0
        {
            var_94_1 = r15;
            r13_1 = 2;
        }
        else
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_90, *r12_1.byte_offset(8), *r12_1.byte_offset(0x10));
            
            if var_90 != 0
            {
                goto 'label_4d977d;
            }
            
            var_94_1 = r15;
            r13_1 = var_88;
        }
        
        rax_8 = r12_1 != 0;
        r15 = r13_1 != 0 & rax_8;
        let mut rbp_1: u32 = rbp;
        
        if r15 != 0
        {
            rbp_1 = 0;
        }
        
        let rax_10: i64 = *arg3;
        
        if rax_10 >= 6
        {
            'label_4d98ed:
            let mut rax_17: size_t = 2;
            
            if r13_1 != 0
            {
                rax_17 = r13_1;
            }
            
            if r12_1 != 0
            {
                r13_1 = rax_17;
            }
            
            goto 'label_4d9917;
        }
        
        let rcx_1: i64 = *arg3.byte_offset(*(&data_4224c8).byte_offset(rax_10 << 3));
        let zmm1_1: u128 = __subpd_xmmpd_mempd(
            __punpckldq_xmmdq_memdq(var_a0_1 + rcx_1, data_417fd0), data_417f70);
        let mut zmm0_1: u128;
        zmm0_1 = _mm_unpackhi_pd(zmm1_1, zmm1_1) + zmm1_1;
        let zmm0_5: [u64; 0x2] =
            ceil(log(zmm0_1) / log(*(&data_4224f8).byte_offset(var_94_1 << 3)));
        let rax_15: i64 = zmm0_5[0];
        zmm0_5[0] = zmm0_5[0] - 9.2233720368547758e+18;
        let rdx_9: i64 = (zmm0_5[0] & rax_15 >> 0x3f) | rax_15;
        let mut rcx_4: i64 = 0;
        let temp0_4: [u64; 0x2] = _mm_xor_pd(zmm0_5, zmm0_5);
        
        if zmm0_5[0] >= temp0_4[0]
        {
            rcx_4 = rdx_9;
        }
        
        let mut rax_16: i64 = -1;
        
        if zmm0_5[0] <= 1.844674407370955e+19
        {
            rax_16 = rcx_4;
        }
        
        if var_a0_1 >= rcx_1
        {
            if r13_1 >= rax_16
            {
                goto 'label_4d98ed;
            }
            
            'label_4d98d0:
            *arg1.byte_offset(8) = 2;
            arg1[1] = rax_16;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            if r15 == 0
            {
                if r13_1 <= rax_16
                {
                    r13_1 = rax_16;
                }
                
                rbp_1 = 0;
                goto 'label_4d98ed;
            }
            
            if r13_1 < rax_16
            {
                goto 'label_4d98d0;
            }
            
            rbp_1 = 0;
            'label_4d9917:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(
                &var_68, arg2, "additional-suffixfilternumber-dh…", 0x11);
            let rax_18: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
                "additional-suffixfilternumber-dh…", 0x11, &var_68);
            
            if rax_18 == 0
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_90, rax_18);
            var_68 = var_88;
            let var_80: i64;
            var_60 = var_80 + var_88;
            
            if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha5fb3b5979973e2a(core::iter::traits::iterator::Iterator::try_fold::heae82aa079024b40(&var_68)) == 0
            {
                arg1[1] = var_80;
                *arg1 = var_90;
                *arg1.byte_offset(0x18) = r13_1;
                arg1[2] = var_a0_1;
                *arg1.byte_offset(0x28) = rbp_1;
                *arg1.byte_offset(0x29) = var_94_1;
            }
            else
            {
                arg1[2] = var_80;
                arg1[1] = var_90;
                *arg1.byte_offset(8) = 1;
                *arg1 = -0x8000000000000000;
            }
        }
    }
    else
    {
        r12_1 = rax_4;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_90, *rax_4.byte_offset(8), *rax_4.byte_offset(0x10));
        
        if var_90 == 0
        {
            'label_4d96f1:
            var_a0_1 = var_88;
            rbp = 0;
            goto 'label_4d973c;
        }
        
        'label_4d977d:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_68, r12_1);
        let rax_9: size_t = var_68;
        *arg1.byte_offset(0x18) = var_60;
        *arg1.byte_offset(8) = 0;
        arg1[1] = rax_9;
        *arg1 = -0x8000000000000000;
    }
    arg1
}
