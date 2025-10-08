
  int64_t* uu_split::strategy::Strategy::from::h9ee849f2906356ca(int64_t* arg1, void* arg2, void* arg3, uint64_t arg4)

{
    char rax =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(
        arg2, "linesadditional-suffixfilternumb…", 5);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(
        arg2, "bytesline-byteslinesadditional-s…", 5);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(
        arg2, "line-byteslinesadditional-suffix…", 0xa);
    bool rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(
        arg2, "number-dhex-suffixes-xsuffix-len…", 6);
    int64_t* result;
    
    if (rax_3 != 3)
    {
        int64_t var_d8;
        int64_t* result_1;
        int128_t var_c8;
        
        if (!arg3)
        {
            if (rax == 2)
            {
                if (rax_2 != 2 && rax_1 != 2 && rax_3 != 2)
                {
                    label_46ce2e:
                    /* tailcall */
                    return uu_split::strategy::Strategy::from::get_and_parse::hab7e9d5bff2b170a(
                        arg1, arg2, "linesadditional-suffixfilternumb…", 5, 
                        uu_split::strategy::Strategy::Lines::hdcf7ada74ecbd750, 
                        uu_split::strategy::StrategyError::Lines::hecced561c0a9074b);
                }
                
                result = arg1;
                *result = 3;
            }
            else if (rax_1 == 2)
            {
                if (!(rax_2 == 2 | rax_3 == 2))
                {
                    label_46cedf:
                    /* tailcall */
                    return uu_split::strategy::Strategy::from::get_and_parse::hab7e9d5bff2b170a(
                        arg1, arg2, "bytesline-byteslinesadditional-s…", 5, 
                        uu_split::strategy::Strategy::Bytes::h389c294e0bdb9103, 
                        uu_split::strategy::StrategyError::Bytes::he256feb8297d9309);
                }
                
                result = arg1;
                *result = 3;
            }
            else if (rax_2 == 2)
            {
                if (rax_3 != 2)
                    goto label_46cfb8;
                
                result = arg1;
                *result = 3;
            }
            else if (rax_3 != 2)
            {
                result = arg1;
                __builtin_memcpy(result, 
                    "\x04\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\xe8\x03\x00\x00\x00\x00\x00\x00", 0x18);
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_d8, arg2, "number-dhex-suffixes-xsuffix-len…", 6);
                void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                    "number-dhex-suffixes-xsuffix-len…", 6, &var_d8);
                
                if (!rax_6)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                uu_split::strategy::NumberType::from::hc4926dd19f854e4e(&var_d8, *(rax_6 + 8), 
                    *(rax_6 + 0x10));
                int128_t zmm0_4;
                
                if (var_d8 != 2)
                {
                    result = var_c8;
                    int64_t* result_2 = result;
                    zmm0_4 = var_d8;
                    int128_t var_88_2 = zmm0_4;
                    int64_t* result_4 = result;
                    arg1[3] = result;
                    *(arg1 + 8) = zmm0_4;
                    *arg1 = 2;
                    arg1[4] = *var_c8[8];
                }
                else
                {
                    result = *var_c8[8];
                    zmm0_4 = result_1;
                    int128_t var_88_1 = zmm0_4;
                    int64_t* result_3 = result;
                    arg1[3] = result;
                    *(arg1 + 8) = zmm0_4;
                    *arg1 = 4;
                }
            }
        }
        else if (rax_2 == 2 || rax_1 == 2 || rax == 2 || rax_3 == 2)
        {
            result = arg1;
            *result = 3;
        }
        else
        {
            label_46cdcc:
            int32_t var_68;
            uucore::features::parser::parse_size::parse_size_u64_max::hec104ac5ce610c62(&var_68, 
                arg3, arg4);
            
            if (var_68 != 4)
            {
                uu_split::strategy::Strategy::from::_$u7b$$u7b$closure$u7d$$u7d$::h308887bee19c411e(
                    &var_d8, arg3, arg4, &var_68);
                int64_t rcx_2 = var_d8;
                result = result_1;
                
                if (rcx_2 == 4)
                    goto label_46ce88;
                
                int64_t var_b8;
                arg1[4] = var_b8;
                *(arg1 + 0x10) = var_c8;
                *arg1 = rcx_2;
                arg1[1] = result;
            }
            else
            {
                int64_t* result_5;
                result = result_5;
                label_46ce88:
                
                if (!result)
                {
                    int64_t rax_5;
                    uint64_t rdx_6;
                    rax_5 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(0, 
                        &var_d8, 0x14);
                    int128_t var_48;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_48, rax_5, rdx_6);
                    *arg1 = 0;
                    arg1[1] = 1;
                    *(arg1 + 0x10) = var_48;
                    int64_t* result_6;
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
    else if (arg3)
    {
        if (!(rax == 2 | rax_1 == 2 | rax_2 == 2))
            goto label_46cdcc;
        
        result = arg1;
        *result = 3;
    }
    else if (rax == 2)
    {
        if (!(rax_1 == 2 | rax_2 == 2))
            goto label_46ce2e;
        
        result = arg1;
        *result = 3;
    }
    else if (rax_1 != 2)
    {
        if (rax_2 == 2)
        {
            label_46cfb8:
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
        if (rax_2 != 2)
            goto label_46cedf;
        
        result = arg1;
        *result = 3;
    }
    
    return result;
}
