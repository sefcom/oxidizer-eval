
  int64_t* uu_split::strategy::Strategy::from::h55013c26ce2fc8ab(int64_t* arg1, void* arg2, int64_t* arg3)

{
    char rax =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(
        arg2, "linesadditional-suffixfilternumb…", 5);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(
        arg2, "bytesline-byteslinesadditional-s…", 5);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(
        arg2, "line-byteslinesadditional-suffix…", 0xa);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(
        arg2, "number-dhex-suffixes-xsuffix-len…", 6);
    int64_t* result;
    
    if (rax_3 != 3)
    {
        int128_t var_d8;
        int32_t var_b8;
        int128_t var_a8;
        int64_t var_98;
        int64_t var_90;
        int128_t var_88;
        int64_t var_78;
        
        if (*arg3 != -0x8000000000000000)
        {
            if (rax == 2 || rax_1 == 2 || rax_2 == 2 || rax_3 == 2)
            {
                result = arg1;
                *result = 3;
            }
            else
            {
                label_4d7532:
                uucore::parser::parse_size::parse_size_u64_max::h351ae83d3c4e9b23(&var_b8, arg3[1], 
                    arg3[2]);
                int64_t rax_4;
                
                if (var_b8 != 3)
                {
                    int128_t var_c8_1 = var_a8;
                    var_d8 = var_b8;
                    uu_split::strategy::Strategy::from::_$u7b$$u7b$closure$u7d$$u7d$::h0a4775b5dcd4ac08(&var_98, arg3, &var_d8);
                    int64_t rcx_1 = var_98;
                    rax_4 = var_90;
                    
                    if (rcx_1 == 4)
                        goto label_4d759a;
                    
                    result = arg1;
                    result[4] = var_78;
                    *(result + 0x10) = var_88;
                    *result = rcx_1;
                    result[1] = rax_4;
                }
                else
                {
                    int64_t var_b0;
                    rax_4 = var_b0;
                    label_4d759a:
                    result = arg1;
                    int64_t var_70 = rax_4;
                    int128_t zmm0_1;
                    
                    if (!rax_4)
                    {
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hfac9650ce491ceb2(
                            &result[2], &var_70);
                        zmm0_1 = data_418050;
                    }
                    else
                    {
                        result[2] = rax_4;
                        zmm0_1 = data_418100;
                    }
                    
                    *result = zmm0_1;
                }
            }
        }
        else
        {
            char const* const rdx;
            int64_t* (* r8_1)(int64_t* arg1, int64_t arg2);
            int64_t* (* r9_1)(int64_t* arg1, int128_t* arg2);
            
            if (rax == 2)
            {
                if (rax_1 != 2 && rax_2 != 2 && rax_3 != 2)
                {
                    label_4d74c6:
                    rdx = "linesadditional-suffixfilternumb…";
                    r8_1 = uu_split::strategy::Strategy::Lines::h8a517b33f81912db;
                    r9_1 = uu_split::strategy::StrategyError::Lines::h90ca753e299957d9;
                    goto label_4d75fb;
                }
                
                result = arg1;
                *result = 3;
            }
            else if (rax_1 != 2)
            {
                if (rax_2 == 2)
                {
                    if (rax_3 != 2)
                        goto label_4d7684;
                    
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
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&var_98, arg2, "number-dhex-suffixes-xsuffix-len…", 6);
                    void* rax_6 =
                        clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
                        "number-dhex-suffixes-xsuffix-len…", 6, &var_98);
                    
                    if (!rax_6)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    int32_t var_50;
                    uu_split::strategy::NumberType::from::h9e6ddc21e9e979a9(&var_50, *(rax_6 + 8), 
                        *(rax_6 + 0x10));
                    int64_t var_c8;
                    int128_t zmm0_2;
                    
                    if (var_50 != 2)
                    {
                        core::ops::function::FnOnce::call_once::h363c2133120cb604(&var_98, &var_50);
                        int64_t rax_8 = var_98;
                        var_d8 = var_90;
                        var_c8 = *var_88[8];
                        result = arg1;
                        
                        if (rax_8 == 4)
                            goto label_4d777b;
                        
                        var_a8 = var_c8;
                        zmm0_2 = var_d8;
                        var_b8 = zmm0_2;
                        result[3] = var_c8;
                        *(result + 8) = zmm0_2;
                        *result = rax_8;
                        result[4] = var_78;
                    }
                    else
                    {
                        int64_t var_38;
                        var_c8 = var_38;
                        int128_t var_48;
                        var_d8 = var_48;
                        result = arg1;
                        label_4d777b:
                        var_a8 = var_c8;
                        zmm0_2 = var_d8;
                        var_b8 = zmm0_2;
                        result[3] = var_c8;
                        *(result + 8) = zmm0_2;
                        *result = 4;
                    }
                }
            }
            else if (rax_2 == 2 || rax_3 == 2)
            {
                result = arg1;
                *result = 3;
            }
            else
            {
                label_4d75e6:
                rdx = "bytesline-byteslinesadditional-s…";
                r8_1 = uu_split::strategy::Strategy::Bytes::hb7425c208cd7a728;
                r9_1 = uu_split::strategy::StrategyError::Bytes::h676736075b7531fc;
                label_4d75fb:
                result = arg1;
                uu_split::strategy::Strategy::from::get_and_parse::h2131435d3ea4b88e(result, arg2, 
                    rdx, 5, r8_1, r9_1);
            }
        }
    }
    else if (*arg3 != -0x8000000000000000)
    {
        if (rax != 2 && rax_1 != 2 && rax_2 != 2)
            goto label_4d7532;
        
        result = arg1;
        *result = 3;
    }
    else if (rax == 2)
    {
        if (rax_1 != 2 && rax_2 != 2)
            goto label_4d74c6;
        
        result = arg1;
        *result = 3;
    }
    else if (rax_1 == 2)
    {
        if (rax_2 != 2)
            goto label_4d75e6;
        
        result = arg1;
        *result = 3;
    }
    else if (rax_2 == 2)
    {
        label_4d7684:
        result = arg1;
        uu_split::strategy::Strategy::from::get_and_parse::h2131435d3ea4b88e(result, arg2, 
            "line-byteslinesadditional-suffix…", 0xa, 
            uu_split::strategy::Strategy::LineBytes::hf26230de56a853cc, 
            uu_split::strategy::StrategyError::Bytes::h676736075b7531fc);
    }
    else
    {
        result = arg1;
        __builtin_memcpy(result, 
            "\x04\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00\xe8\x03\x00\x00\x00\x00\x00\x00", 0x18);
    }
    
    return result;
}
