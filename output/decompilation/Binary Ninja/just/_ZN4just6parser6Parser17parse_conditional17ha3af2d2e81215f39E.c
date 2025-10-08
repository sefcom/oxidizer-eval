
  uint64_t just::parser::Parser::parse_conditional::ha3af2d2e81215f39(int64_t* arg1, void* arg2)

{
    int128_t var_288;
    just::parser::Parser::parse_condition::h084dccdf2ccc72f1(&var_288, arg2);
    char result_1;
    uint64_t result = result_1;
    int128_t var_278;
    int128_t var_268;
    int128_t var_258;
    int64_t var_248;
    int32_t var_23f;
    int32_t var_23c;
    int128_t var_208;
    
    if (result != 0x25)
    {
        var_208 = var_288;
        *(arg1 + 0x54) = var_23c;
        *(arg1 + 0x51) = var_23f;
        arg1[9] = var_248;
        int128_t zmm0 = var_208;
        *(arg1 + 0x38) = var_258;
        *(arg1 + 0x28) = var_268;
        *(arg1 + 0x18) = var_278;
        *(arg1 + 8) = zmm0;
        arg1[0xa] = result;
        *arg1 = 0x12;
    }
    else
    {
        int128_t var_188 = var_288;
        just::parser::Parser::expect::h35e1151927597ac7(&var_288, arg2, 7);
        
        if (result_1 != 0x25)
        {
            int64_t rcx_5 = var_288;
            int128_t zmm0_1 = var_288;
            var_208 = *var_248[1];
            *var_208[3] = *var_248[4];
            *(arg1 + 0x54) = var_23c;
            *(arg1 + 0x51) = var_23f;
            int32_t rdi_7 = var_208;
            *(arg1 + 0x4c) = *var_208[3];
            *(arg1 + 0x49) = rdi_7;
            arg1[1] = rcx_5;
            *(arg1 + 0x10) = zmm0_1;
            *(arg1 + 0x20) = var_278;
            *(arg1 + 0x30) = var_268;
            arg1[8] = *var_258[8];
            arg1[9] = var_248;
            arg1[0xa] = result_1;
            *arg1 = 0x12;
            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(
                &var_188);
        }
        
        just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_288, arg2);
        int64_t rax_2 = var_288;
        var_208 = var_288;
        int64_t var_1c8;
        var_1c8 = result_1;
        int128_t zmm0_2;
        
        if (rax_2 == 0x12)
        {
            *(arg1 + 0x48) = var_1c8;
            zmm0_2 = var_208;
            *(arg1 + 0x38) = var_258;
            *(arg1 + 0x28) = var_268;
            *(arg1 + 0x18) = var_278;
            *(arg1 + 8) = zmm0_2;
            *arg1 = 0x12;
            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(
                &var_188);
        }
        
        int64_t var_210;
        int64_t var_20_1 = var_210;
        int128_t var_90_1 = var_208;
        zmm0_2 = var_1c8;
        int64_t var_98 = rax_2;
        just::parser::Parser::expect::h35e1151927597ac7(&var_288, arg2, 8);
        char result_2 = result_1;
        
        if (result_2 != 0x25)
        {
            label_67c1c6:
            int64_t rcx_8 = var_288;
            int128_t zmm0_3 = var_288;
            var_208 = *var_248[1];
            *var_208[3] = *var_248[4];
            *(arg1 + 0x54) = var_23c;
            *(arg1 + 0x51) = var_23f;
            int32_t rdi_18 = var_208;
            *(arg1 + 0x4c) = *var_208[3];
            *(arg1 + 0x49) = rdi_18;
            arg1[1] = rcx_8;
            *(arg1 + 0x10) = zmm0_3;
            *(arg1 + 0x20) = var_278;
            *(arg1 + 0x30) = var_268;
            arg1[8] = *var_258[8];
            arg1[9] = var_248;
            arg1[0xa] = result_2;
            label_67c238:
            *arg1 = 0x12;
            core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                &var_98);
            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(
                &var_188);
        }
        
        just::parser::Parser::expect_keyword::h29d7686c3c631ba9(&var_288, arg2, 9);
        int128_t zmm0_4;
        int128_t zmm1_4;
        int128_t zmm2_4;
        int128_t zmm3_3;
        
        if (result_1 != 0x25)
        {
            *(arg1 + 0x48) = var_248;
            zmm0_4 = var_288;
            zmm1_4 = var_278;
            zmm2_4 = var_268;
            zmm3_3 = var_258;
            label_67c0c3:
            *(arg1 + 0x38) = zmm3_3;
            *(arg1 + 0x28) = zmm2_4;
            *(arg1 + 0x18) = zmm1_4;
            *(arg1 + 8) = zmm0_4;
            goto label_67c238;
        }
        
        just::parser::Parser::accepted_keyword::h41084b1fcaf79f7b(&var_288, arg2, 0xd);
        char rax_3 = var_288;
        
        if (result_1 != 0x25)
        {
            arg1[9] = var_248;
            int128_t zmm0_5 = var_288;
            *(arg1 + 0x39) = var_258;
            *(arg1 + 0x29) = var_268;
            *(arg1 + 0x19) = var_278;
            *(arg1 + 9) = zmm0_5;
            *(arg1 + 0x51) = var_23f;
            *(arg1 + 0x54) = var_23c;
            arg1[1] = rax_3;
            arg1[0xa] = result_1;
            goto label_67c238;
        }
        
        int128_t var_230;
        int128_t var_220;
        int64_t var_118;
        int128_t var_110;
        int128_t var_100;
        int128_t var_f0;
        int128_t var_e0;
        int128_t var_d0;
        int128_t var_c0;
        int128_t var_b0;
        
        if (!(rax_3 & 1))
        {
            just::parser::Parser::expect::h35e1151927597ac7(&var_288, arg2, 7);
            result_2 = result_1;
            
            if (result_2 != 0x25)
                goto label_67c1c6;
            
            just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_288, arg2);
            int64_t rax_5 = var_288;
            int128_t var_168_1 = var_288;
            int128_t var_128_1 = result_1;
            
            if (rax_5 == 0x12)
            {
                *(arg1 + 0x48) = var_128_1;
                zmm0_4 = var_168_1;
                zmm1_4 = var_278;
                zmm2_4 = var_268;
                zmm3_3 = var_258;
                goto label_67c0c3;
            }
            
            int64_t var_190_1 = var_210;
            var_208 = var_168_1;
            var_208 = rax_5;
            just::parser::Parser::expect::h35e1151927597ac7(&var_288, arg2, 8);
            
            if (result_1 != 0x25)
            {
                int64_t rcx_12 = var_288;
                zmm0_4 = var_288;
                var_168_1 = *var_248[1];
                *var_168_1[3] = *var_248[4];
                *(arg1 + 0x54) = var_23c;
                *(arg1 + 0x51) = var_23f;
                *(arg1 + 0x4c) = *var_168_1[3];
                *(arg1 + 0x49) = var_168_1;
                arg1[1] = rcx_12;
                *(arg1 + 0x10) = zmm0_4;
                *(arg1 + 0x20) = var_278;
                *(arg1 + 0x30) = var_268;
                arg1[8] = *var_258[8];
                arg1[9] = var_248;
                arg1[0xa] = result_1;
                *arg1 = 0x12;
                core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                    &var_208);
                core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                    &var_98);
                return 
                    core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(
                    &var_188);
            }
            
            var_118 = var_208;
            var_110 = var_278;
            var_100 = var_268;
            var_f0 = var_258;
            var_e0 = var_1c8;
            var_d0 = var_128_1;
            var_c0 = var_230;
            var_b0 = var_220;
        }
        else
        {
            just::parser::Parser::parse_conditional::ha3af2d2e81215f39(&var_288, arg2);
            int64_t rax_4 = var_288;
            var_208 = var_288;
            var_1c8 = result_1;
            
            if (rax_4 == 0x12)
            {
                *(arg1 + 0x48) = var_1c8;
                zmm0_4 = var_208;
                zmm1_4 = var_278;
                zmm2_4 = var_268;
                zmm3_3 = var_258;
                goto label_67c0c3;
            }
            
            int64_t var_a0_1 = var_210;
            var_b0 = var_220;
            var_c0 = var_230;
            var_110 = var_208;
            var_100 = var_278;
            var_f0 = var_268;
            var_e0 = var_258;
            var_d0 = var_1c8;
            var_118 = rax_4;
        }
        
        int128_t var_238_1 = zmm0_2;
        var_248 = var_258;
        int128_t var_258_1 = var_268;
        int128_t var_268_1 = var_278;
        int128_t var_278_1 = var_90_1;
        var_288 = var_98;
        uint64_t rax_6 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_288);
        var_208 = rax_6;
        var_220 = var_b0;
        var_230 = var_c0;
        int128_t var_238_2 = var_d0;
        var_248 = var_e0;
        int128_t var_258_2 = var_f0;
        int128_t var_268_2 = var_100;
        int128_t var_278_2 = var_110;
        var_288 = var_118;
        result = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_288);
        arg1[5] = var_278;
        *(arg1 + 0x18) = var_188;
        *arg1 = 0xc;
        arg1[1] = rax_6;
        arg1[2] = result;
    }
    return result;
}
