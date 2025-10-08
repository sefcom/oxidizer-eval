
  int64_t just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(char* arg1, void* arg2)

{
    char result_1;
    just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0xe);
    char result = result_1;
    char result_2;
    int128_t var_16f;
    int128_t var_15f;
    int128_t var_14f;
    int64_t var_130;
    int32_t var_127;
    
    if (result_2 != 0x25)
    {
        *(arg1 + 0x40) = var_130;
        int128_t var_13f;
        *(arg1 + 0x31) = var_13f;
        *(arg1 + 0x21) = var_14f;
        *(arg1 + 0x11) = var_15f;
        *(arg1 + 1) = var_16f;
        *(arg1 + 0x49) = var_127;
        *(arg1 + 0x4c) = var_127;
        *arg1 = result;
        arg1[0x48] = result_2;
    }
    else if (!(result & 1))
    {
        *arg1 = 1;
        arg1[0x48] = 0x25;
    }
    else
    {
        just::parser::Parser::expect::h35e1151927597ac7(&result_1, arg2, 0x18);
        result = result_2;
        int128_t zmm0_2 = result_1;
        
        if (result != 0x25)
        {
            *(arg1 + 0x4c) = var_127;
            *(arg1 + 0x49) = var_127;
            *(arg1 + 0x40) = var_130;
            *(arg1 + 0x30) = var_14f;
            *(arg1 + 0x20) = var_15f;
            *(arg1 + 0x10) = var_16f;
            *arg1 = zmm0_2;
            arg1[0x48] = result;
        }
        else
        {
            int128_t var_a8_1 = var_16f;
            int128_t var_98_1 = var_15f;
            int64_t var_78_1 = var_130;
            int128_t var_68 = zmm0_2;
            int128_t var_58_1 = var_16f;
            int128_t var_48_1 = var_15f;
            int128_t var_38_1 = var_14f;
            int64_t var_28_1 = var_130;
            void* rax_1;
            int64_t rdx_1;
            rax_1 = just::token::Token::lexeme::h66587cdf67f63270(&var_68);
            result_1 = rax_1;
            *var_16f[7] = rdx_1;
            result = _$LT$just..keyword..Keyword$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h72387ea6ad90b2ef(&data_46e88e, &result_1);
            char result_3 = result;
            
            if (!result)
            {
                void* rax_2;
                int64_t rdx_2;
                rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&var_68);
                result_1 = rax_2;
                *var_16f[7] = rdx_2;
                result = _$LT$just..keyword..Keyword$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h72387ea6ad90b2ef(&data_46e311, &result_1);
                
                if (!result)
                {
                    uint64_t rax_3 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 2);
                    
                    if (!rax_3)
                    {
                        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                        /* no return */
                    }
                    
                    *rax_3 = 0xc18;
                    *var_16f[7] = 2;
                    *var_16f[0xf] = rax_3;
                    *var_15f[7] = 2;
                    int128_t zmm3_3 = var_14f;
                    var_15f = zmm0_2;
                    var_14f = var_a8_1;
                    var_130 = var_98_1;
                    int128_t var_120_1 = zmm3_3;
                    int64_t var_110_1 = var_78_1;
                    result_1 = -0x7fffffffffffffdf;
                    return just::token::Token::error::h986494da066a4455(arg1, &var_68, &result_1);
                }
            }
            
            *arg1 = result_3;
            arg1[0x48] = 0x25;
        }
    }
    return result;
}
