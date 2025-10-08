
  uint64_t just::parser::Parser::parse_conjunct::hbe3e06ad6ae14250(int64_t* arg1, void* arg2)

{
    bool result_1;
    just::parser::Parser::accepted_keyword::h41084b1fcaf79f7b(&result_1, arg2, 0xd);
    uint64_t result = result_1;
    char var_2b0;
    char rcx = var_2b0;
    int128_t var_2f7;
    int128_t var_2e7;
    int128_t var_2d7;
    int128_t var_2c7;
    int64_t var_2b8;
    int32_t var_2af;
    
    if (rcx != 0x25)
    {
        label_67b623:
        arg1[9] = var_2b8;
        *(arg1 + 0x39) = var_2c7;
        *(arg1 + 0x29) = var_2d7;
        *(arg1 + 0x19) = var_2e7;
        *(arg1 + 9) = var_2f7;
        *(arg1 + 0x51) = var_2af;
        *(arg1 + 0x54) = var_2af;
        arg1[1] = result;
        arg1[0xa] = rcx;
        *arg1 = 0x12;
    }
    else
    {
        if (result & 1)
            /* tailcall */
            return just::parser::Parser::parse_conditional::ha3af2d2e81215f39(arg1, arg2);
        
        just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x20);
        result = result_1;
        rcx = var_2b0;
        
        if (rcx != 0x25)
            goto label_67b623;
        
        int128_t var_2a0;
        int128_t var_290;
        int64_t var_280;
        int128_t var_268;
        int128_t var_218;
        
        if (!(result & 1))
        {
            just::parser::Parser::parse_value::h216c4bdeb7f558a6(&result_1, arg2);
            result = result_1;
            var_268 = var_2f7;
            int128_t var_228_1 = var_2b0;
            
            if (result != 0x12)
            {
                int64_t var_1a0_1 = var_280;
                var_218 = var_268;
                var_218 = result;
                just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x20);
                result = result_1;
                char rcx_3 = var_2b0;
                
                if (rcx_3 != 0x25)
                {
                    label_67bad8:
                    arg1[9] = var_2b8;
                    *(arg1 + 0x39) = var_2c7;
                    *(arg1 + 0x29) = var_2d7;
                    *(arg1 + 0x19) = var_2e7;
                    *(arg1 + 9) = var_2f7;
                    *(arg1 + 0x51) = var_2af;
                    *(arg1 + 0x54) = var_2af;
                    arg1[1] = result;
                    arg1[0xa] = rcx_3;
                    *arg1 = 0x12;
                    return core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(&var_218);
                }
                
                uint64_t var_270;
                int128_t var_1c8;
                
                if (!(result & 1))
                {
                    just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x1e);
                    result = result_1;
                    rcx_3 = var_2b0;
                    
                    if (rcx_3 != 0x25)
                        goto label_67bad8;
                    
                    if (!(result & 1))
                    {
                        *(arg1 + 0x70) = var_290;
                        *(arg1 + 0x60) = var_2a0;
                        *(arg1 + 0x50) = var_1c8;
                        *(arg1 + 0x40) = var_228_1;
                        int128_t zmm0_4 = var_218;
                        *(arg1 + 0x30) = var_2c7;
                        *(arg1 + 0x20) = var_2d7;
                        *(arg1 + 0x10) = var_2e7;
                        *arg1 = zmm0_4;
                    }
                    else
                    {
                        int128_t var_2a8_2 = var_1c8;
                        var_2b8 = var_228_1;
                        result_1 = var_218;
                        uint64_t rax_4 =
                            alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&result_1);
                        var_270 = rax_4;
                        just::parser::Parser::parse_conjunct::hbe3e06ad6ae14250(&result_1, arg2);
                        int64_t rax_5 = result_1;
                        var_268 = var_2e7;
                        int128_t var_228_3 = var_2b0;
                        
                        if (rax_5 == 0x12)
                        {
                            *(arg1 + 0x48) = var_228_3;
                            int128_t zmm0_6 = var_268;
                            *(arg1 + 0x38) = var_2c7;
                            *(arg1 + 0x28) = var_2c7;
                            *(arg1 + 0x18) = var_2d7;
                            *(arg1 + 8) = zmm0_6;
                            *arg1 = 0x12;
                            return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$::h95e5d821ad53849f(&var_270);
                        }
                        
                        int64_t var_20_1 = var_280;
                        int128_t var_30_1 = var_290;
                        int128_t var_40_1 = var_2a0;
                        int64_t var_98 = rax_5;
                        int128_t var_90_1 = var_268;
                        int128_t var_80_1 = var_2d7;
                        int128_t var_70_1 = var_2c7;
                        int128_t var_60_1 = var_2c7;
                        int128_t var_50_1 = var_228_3;
                        result = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_98);
                        *arg1 = 0xb;
                        arg1[1] = rax_4;
                        arg1[2] = result;
                    }
                }
                else
                {
                    int128_t var_2a8_1 = var_1c8;
                    var_2b8 = var_228_1;
                    result_1 = var_218;
                    uint64_t rax_2 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&result_1);
                    var_270 = rax_2;
                    just::parser::Parser::parse_conjunct::hbe3e06ad6ae14250(&result_1, arg2);
                    int64_t rax_3 = result_1;
                    var_268 = var_2e7;
                    int128_t var_228_2 = var_2b0;
                    
                    if (rax_3 == 0x12)
                    {
                        *(arg1 + 0x48) = var_228_2;
                        int128_t zmm0_5 = var_268;
                        *(arg1 + 0x38) = var_2c7;
                        *(arg1 + 0x28) = var_2c7;
                        *(arg1 + 0x18) = var_2d7;
                        *(arg1 + 8) = zmm0_5;
                        *arg1 = 0x12;
                        return core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$$GT$::hf818742006b8584c(&var_270);
                    }
                    
                    int64_t var_a0_1 = var_280;
                    int128_t var_b0_1 = var_290;
                    int128_t var_c0_1 = var_2a0;
                    int64_t var_118 = rax_3;
                    int128_t var_110_1 = var_268;
                    int128_t var_100_1 = var_2d7;
                    int128_t var_f0_1 = var_2c7;
                    int128_t var_e0_1 = var_2c7;
                    int128_t var_d0_1 = var_228_2;
                    result = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_118);
                    *arg1 = 0xe;
                    arg1[1] = result;
                    arg1[2] = rax_2;
                }
            }
            else
            {
                *(arg1 + 0x48) = var_228_1;
                int128_t zmm0_3 = var_268;
                *(arg1 + 0x38) = var_2c7;
                *(arg1 + 0x28) = var_2d7;
                *(arg1 + 0x18) = var_2e7;
                *(arg1 + 8) = zmm0_3;
                *arg1 = 0x12;
            }
        }
        else
        {
            var_268 = 0;
            just::parser::Parser::parse_conjunct::hbe3e06ad6ae14250(&result_1, arg2);
            int64_t rax_1 = result_1;
            var_218 = var_2f7;
            int128_t var_1d8_1 = var_2b0;
            
            if (rax_1 == 0x12)
            {
                *(arg1 + 0x48) = var_1d8_1;
                int128_t zmm0_2 = var_218;
                *(arg1 + 0x38) = var_2c7;
                *(arg1 + 0x28) = var_2d7;
                *(arg1 + 0x18) = var_2e7;
                *(arg1 + 8) = zmm0_2;
                *arg1 = 0x12;
                return core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$$GT$::hf818742006b8584c(&var_268);
            }
            
            int64_t var_120_1 = var_280;
            int128_t var_130_1 = var_290;
            int128_t var_140_1 = var_2a0;
            int64_t var_198 = rax_1;
            int128_t var_190_1 = var_218;
            int128_t var_180_1 = var_2e7;
            int128_t var_170_1 = var_2d7;
            int128_t var_160_1 = var_2c7;
            int128_t var_150_1 = var_1d8_1;
            result = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_198);
            *arg1 = 0xe;
            arg1[1] = result;
            arg1[2] = 0;
        }
    }
    return result;
}
