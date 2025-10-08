
  int64_t just::parser::Parser::parse_assignment::h686a366a81169095(int64_t* arg1, uint64_t arg2, char arg3, int64_t* arg4)

{
    int128_t var_268;
    just::parser::Parser::parse_name::he2804e36e47b7e10(&var_268, arg2);
    int128_t var_198 = var_268;
    char var_220;
    int128_t var_258;
    int128_t var_248;
    int128_t var_238;
    int64_t var_228;
    int32_t var_21f;
    int128_t zmm0;
    
    if (var_220 != 0x25)
    {
        *(arg1 + 0x54) = var_21f;
        *(arg1 + 0x51) = var_21f;
        arg1[9] = var_228;
        zmm0 = var_198;
        *(arg1 + 0x38) = var_238;
        *(arg1 + 0x28) = var_248;
        *(arg1 + 0x18) = var_258;
        *(arg1 + 8) = zmm0;
        arg1[0xa] = var_220;
        *arg1 = 0x12;
    }
    else
    {
        zmm0 = var_198;
        int128_t var_c8 = zmm0;
        int64_t var_88_1 = var_228;
        int128_t var_78 = zmm0;
        int128_t var_68_1 = var_258;
        int128_t var_58_1 = var_248;
        int128_t var_48_1 = var_238;
        int64_t var_38_1 = var_228;
        just::parser::Parser::presume::he2055272497a907b(&var_268, arg2, 0xe);
        
        if (var_220 != 0x25)
        {
            int64_t rcx_3 = var_268;
            int128_t zmm0_1 = var_268;
            var_198 = *var_228[1];
            *var_198[3] = *var_228[4];
            *(arg1 + 0x54) = var_21f;
            *(arg1 + 0x51) = var_21f;
            int32_t rdi_7 = var_198;
            *(arg1 + 0x4c) = *var_198[3];
            *(arg1 + 0x49) = rdi_7;
            arg1[1] = rcx_3;
            *(arg1 + 0x10) = zmm0_1;
            *(arg1 + 0x20) = var_258;
            *(arg1 + 0x30) = var_248;
            arg1[8] = *var_238[8];
            arg1[9] = var_228;
            arg1[0xa] = var_220;
            *arg1 = 0x12;
        }
        else
        {
            just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_268, arg2);
            int64_t rax_2 = var_268;
            int128_t var_118_1 = var_268;
            int128_t var_d8_1 = var_220;
            
            if (rax_2 != 0x12)
            {
                int64_t var_1f0;
                int64_t var_120_1 = var_1f0;
                var_198 = var_118_1;
                var_198 = rax_2;
                just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(&var_268, arg2);
                
                if (var_220 != 0x25)
                {
                    label_67a9f3:
                    *(arg1 + 0x48) = var_228;
                    int128_t zmm0_3 = var_268;
                    *(arg1 + 0x38) = var_238;
                    *(arg1 + 0x28) = var_248;
                    *(arg1 + 0x18) = var_258;
                    *(arg1 + 8) = zmm0_3;
                    *arg1 = 0x12;
                    core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                        &var_198);
                }
                else
                {
                    char rax_4 =
                        just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg4, 0xf);
                    just::attribute_set::AttributeSet::ensure_valid_attributes::h6f0be17f12135348(
                        &var_268, arg4, "AssignmentxError getting current…", 0xa, &var_c8, 
                        &data_4715f0, 1);
                    
                    if (var_220 != 0x25)
                        goto label_67a9f3;
                    
                    int32_t r13_1 = *(arg2 + 0x80);
                    uint64_t r15;
                    r15 = 1;
                    
                    if (!rax_4)
                    {
                        void* rax_5;
                        int64_t rdx_2;
                        rax_5 = just::token::Token::lexeme::h66587cdf67f63270(&var_78);
                        var_268 = 0;
                        char* rax_6;
                        uint64_t rdx_3;
                        rax_6 =
                            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x5f, &var_268);
                        r15 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_5, rdx_2, rax_6, rdx_3);
                    }
                    
                    int128_t var_218_1 = var_d8_1;
                    var_228 = var_228;
                    int128_t var_238_1 = var_238;
                    int128_t var_248_1 = var_248;
                    int128_t var_258_1 = var_258;
                    var_268 = var_198;
                    int128_t var_1e8_1 = var_c8;
                    int128_t var_1d8_1 = var_258;
                    int128_t var_1c8_1 = var_248;
                    int128_t var_1b8_1 = var_238;
                    int64_t var_1a8_1 = var_88_1;
                    memcpy(arg1, &var_268, 0xc8);
                    arg1[0x19] = r13_1;
                    *(arg1 + 0xcc) = 0;
                    *(arg1 + 0xcd) = arg3;
                    *(arg1 + 0xce) = r15;
                }
            }
            else
            {
                *(arg1 + 0x48) = var_d8_1;
                *(arg1 + 0x38) = var_238;
                *(arg1 + 0x28) = var_248;
                *(arg1 + 0x18) = var_258;
                *(arg1 + 8) = var_118_1;
                *arg1 = 0x12;
            }
        }
    }
    return core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(
        arg4);
}
