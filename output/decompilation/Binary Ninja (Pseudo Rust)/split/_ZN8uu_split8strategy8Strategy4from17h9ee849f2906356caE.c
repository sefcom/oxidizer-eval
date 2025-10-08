
  fn uu_split::strategy::Strategy::from::h9ee849f2906356ca(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: u64) -> *mut i64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(
        arg2, "linesadditional-suffixfilternumb…", 5);
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(
        arg2, "bytesline-byteslinesadditional-s…", 5);
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(
        arg2, "line-byteslinesadditional-suffix…", 0xa);
    let rax_3: bool =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(
        arg2, "number-dhex-suffixes-xsuffix-len…", 6);
    let mut result: *mut i64;
    
    if rax_3 != 3
    {
        let mut var_d8: i64;
        let result_1: *mut i64;
        let var_c8: i128;
        
        if arg3 == 0
        {
            if rax == 2
            {
                if rax_2 != 2 && rax_1 != 2 && rax_3 != 2
                {
                    'label_46ce2e:
                    /* tailcall */
                    return uu_split::strategy::Strategy::from::get_and_parse::hab7e9d5bff2b170a(
                        arg1, arg2, "linesadditional-suffixfilternumb…", 5, 
                        uu_split::strategy::Strategy::Lines::hdcf7ada74ecbd750, 
                        uu_split::strategy::StrategyError::Lines::hecced561c0a9074b);
                }
                
                result = arg1;
                *result = 3;
            }
            else if rax_1 == 2
            {
                if (rax_2 == 2 | rax_3 == 2) == 0
                {
                    'label_46cedf:
                    /* tailcall */
                    return uu_split::strategy::Strategy::from::get_and_parse::hab7e9d5bff2b170a(
                        arg1, arg2, "bytesline-byteslinesadditional-s…", 5, 
                        uu_split::strategy::Strategy::Bytes::h389c294e0bdb9103, 
                        uu_split::strategy::StrategyError::Bytes::he256feb8297d9309);
                }
                
                result = arg1;
                *result = 3;
            }
            else if rax_2 == 2
            {
                if rax_3 != 2
                {
                    goto 'label_46cfb8;
                }
                
                result = arg1;
                *result = 3;
            }
            else if rax_3 != 2
            {
                result = arg1;
                __builtin_memcpy(result, 
                    "\x04\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\xe8\x03\x00\x00\x00\x00\x00\x00", 0x18);
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_d8, arg2, "number-dhex-suffixes-xsuffix-len…", 6);
                let rax_6: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                    "number-dhex-suffixes-xsuffix-len…", 6, &var_d8);
                
                if rax_6 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                uu_split::strategy::NumberType::from::hc4926dd19f854e4e(&var_d8, 
                    *rax_6.byte_offset(8), *rax_6.byte_offset(0x10));
                let mut zmm0_4: i128;
                
                if var_d8 != 2
                {
                    result = var_c8;
                    let result_2: *mut i64 = result;
                    zmm0_4 = var_d8;
                    let var_88_2: i128 = zmm0_4;
                    let result_4: *mut i64 = result;
                    arg1[3] = result;
                    *arg1.byte_offset(8) = zmm0_4;
                    *arg1 = 2;
                    arg1[4] = *var_c8[8];
                }
                else
                {
                    result = *var_c8[8];
                    zmm0_4 = result_1;
                    let var_88_1: i128 = zmm0_4;
                    let result_3: *mut i64 = result;
                    arg1[3] = result;
                    *arg1.byte_offset(8) = zmm0_4;
                    *arg1 = 4;
                }
            }
        }
        else if rax_2 == 2 || rax_1 == 2 || rax == 2 || rax_3 == 2
        {
            result = arg1;
            *result = 3;
        }
        else
        {
            'label_46cdcc:
            let mut var_68: i32;
            uucore::features::parser::parse_size::parse_size_u64_max::hec104ac5ce610c62(&var_68, 
                arg3, arg4);
            
            if var_68 != 4
            {
                uu_split::strategy::Strategy::from::_$u7b$$u7b$closure$u7d$$u7d$::h308887bee19c411e(
                    &var_d8, arg3, arg4, &var_68);
                let rcx_2: i64 = var_d8;
                result = result_1;
                
                if rcx_2 == 4
                {
                    goto 'label_46ce88;
                }
                
                let var_b8: i64;
                arg1[4] = var_b8;
                *arg1.byte_offset(0x10) = var_c8;
                *arg1 = rcx_2;
                arg1[1] = result;
            }
            else
            {
                let result_5: *mut i64;
                result = result_5;
                'label_46ce88:
                
                if result == 0
                {
                    let mut rax_5: i64;
                    let mut rdx_6: u64;
                    rax_5 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(0, 
                        &var_d8, 0x14);
                    let mut var_48: i128;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_48, rax_5, rdx_6);
                    *arg1 = 0;
                    arg1[1] = 1;
                    *arg1.byte_offset(0x10) = var_48;
                    let result_6: *mut i64;
                    result = result_6;
                    arg1[4] = result;
                }
                else
                {
                    arg1[1] = 6;
                    arg1[2] = result;
                    *arg1 = 4;
                }
            }
        }
    }
    else if arg3 != 0
    {
        if (rax == 2 | rax_1 == 2 | rax_2 == 2) == 0
        {
            goto 'label_46cdcc;
        }
        
        result = arg1;
        *result = 3;
    }
    else if rax == 2
    {
        if (rax_1 == 2 | rax_2 == 2) == 0
        {
            goto 'label_46ce2e;
        }
        
        result = arg1;
        *result = 3;
    }
    else if rax_1 != 2
    {
        if rax_2 == 2
        {
            'label_46cfb8:
            /* tailcall */
            return uu_split::strategy::Strategy::from::get_and_parse::hab7e9d5bff2b170a(arg1, arg2, 
                "line-byteslinesadditional-suffix…", 0xa, 
                uu_split::strategy::Strategy::LineBytes::h19bda4236560f972, 
                uu_split::strategy::StrategyError::Bytes::he256feb8297d9309);
        }
        
        result = arg1;
        __builtin_memcpy(result, 
            "\x04\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\xe8\x03\x00\x00\x00\x00\x00\x00", 0x18);
    }
    else
    {
        if rax_2 != 2
        {
            goto 'label_46cedf;
        }
        
        result = arg1;
        *result = 3;
    }
    
    result
}
