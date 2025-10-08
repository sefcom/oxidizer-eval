
  int64_t just::parser::Parser::parse_set::ha11a3ca6b0fbece6(char* arg1, void* arg2)

{
    int128_t var_368;
    char result = just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_368, arg2, 0x15);
    int128_t var_358;
    int128_t var_348;
    int128_t var_338;
    int128_t var_328;
    char result_1;
    int128_t zmm0;
    int128_t zmm1;
    int128_t zmm2;
    int128_t zmm3;
    
    if (result_1 != 0x25)
    {
        *(arg1 + 0x48) = var_328;
        zmm0 = var_368;
        zmm1 = var_358;
        zmm2 = var_348;
        zmm3 = var_338;
        label_680e81:
        *(arg1 + 0x38) = zmm3;
        *(arg1 + 0x28) = zmm2;
        *(arg1 + 0x18) = zmm1;
        *(arg1 + 8) = zmm0;
        *arg1 = 0x14;
        return result;
    }
    
    just::parser::Parser::presume::he2055272497a907b(&var_368, arg2, 0x18);
    result = result_1;
    int128_t var_68 = var_368;
    int32_t var_31f;
    int128_t zmm0_1;
    int128_t zmm1_1;
    int128_t zmm2_1;
    int128_t zmm3_1;
    
    if (result != 0x25)
    {
        *(arg1 + 0x54) = var_31f;
        *(arg1 + 0x51) = var_31f;
        *(arg1 + 0x48) = var_328;
        zmm0_1 = var_68;
        zmm1_1 = var_358;
        zmm2_1 = var_348;
        zmm3_1 = var_338;
        label_680ecd:
        *(arg1 + 0x38) = zmm3_1;
        *(arg1 + 0x28) = zmm2_1;
        *(arg1 + 0x18) = zmm1_1;
        *(arg1 + 8) = zmm0_1;
    }
    else
    {
        int128_t var_100;
        just::name::Name::from_identifier::hbd4ef0ea8f6e05d8(&var_100, &var_68);
        void* rax;
        uint64_t rdx_1;
        rax = just::token::Token::lexeme::h66587cdf67f63270(&var_100);
        char rax_1 = just::keyword::Keyword::from_lexeme::h4f2cf9490352ebc3(rax, rdx_1);
        int128_t var_2c8;
        int128_t var_2b8;
        int128_t var_2a8;
        int128_t var_298;
        int128_t var_288;
        
        if (rax_1 == 0x1f)
        {
            void* rax_2;
            int64_t rdx_2;
            rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&var_100);
            *var_368[8] = rax_2;
            var_358 = rdx_2;
            var_368 = -0x7fffffffffffffbd;
            result = just::token::Token::error::h986494da066a4455(&var_2c8, &var_100, &var_368);
            *(arg1 + 0x48) = var_288;
            zmm0 = var_2c8;
            zmm1 = var_2b8;
            zmm2 = var_2a8;
            zmm3 = var_298;
            goto label_680e81;
        }
        
        uint32_t r15_1 = rax_1;
        uint64_t rax_3 = r15_1 - 1;
        char result_3;
        
        if (rax_3 <= 0x1a)
        {
            char result_2;
            
            switch (rax_3)
            {
                case 0:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                    {
                        label_681255:
                        *(arg1 + 0x48) = var_328;
                        zmm0_1 = var_368;
                        *(arg1 + 0x39) = var_338;
                        *(arg1 + 0x29) = var_348;
                        *(arg1 + 0x19) = var_358;
                        *(arg1 + 9) = zmm0_1;
                        *(arg1 + 0x51) = var_31f;
                        *(arg1 + 0x54) = var_31f;
                        arg1[8] = result;
                        arg1[0x50] = result_2;
                        *arg1 = 0x14;
                        return result;
                    }
                    
                    result_2 = 0;
                    break;
                }
                case 1:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 1;
                    break;
                }
                case 2:
                case 3:
                case 6:
                case 8:
                case 0xb:
                case 0xc:
                case 0xe:
                case 0xf:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                {
                    goto label_68100d;
                }
                case 4:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 3;
                    break;
                }
                case 5:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 4;
                    break;
                }
                case 7:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 6;
                    break;
                }
                case 9:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 7;
                    break;
                }
                case 0xa:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 8;
                    break;
                }
                case 0xd:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 9;
                    break;
                }
                case 0x10:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 0xa;
                    break;
                }
                case 0x11:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 0xb;
                    break;
                }
                case 0x12:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 0xc;
                    break;
                }
                case 0x19:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 0x10;
                    break;
                }
                case 0x1a:
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if (result_2 != 0x25)
                        goto label_681255;
                    
                    result_2 = 0x11;
                    break;
                }
            }
            
            result_3 = result_2;
            int128_t var_78;
            int128_t var_328_1 = var_78;
            int128_t var_88;
            int128_t var_338_1 = var_88;
            int128_t var_98;
            int128_t var_348_1 = var_98;
            int128_t var_a8;
            int128_t var_358_1 = var_a8;
            var_368 = result_3;
            *var_368[1] = result;
            int64_t var_b6;
            *var_368[2] = var_b6;
            int32_t var_ae;
            *var_368[0xa] = var_ae;
            int16_t var_aa;
            *var_368[0xe] = var_aa;
            label_681213:
            int128_t var_318_1 = var_100;
            int128_t var_f0;
            int128_t var_308_1 = var_f0;
            int128_t var_e0;
            int128_t var_2f8_1 = var_e0;
            int128_t var_d0;
            int128_t var_2e8_1 = var_d0;
            int64_t var_c0;
            int64_t var_2d8_1 = var_c0;
            return memcpy(arg1, &var_368, 0x98);
        }
        
        label_68100d:
        result_3 = 0x14;
        just::parser::Parser::expect::h35e1151927597ac7(&var_368, arg2, 0xe);
        result = result_1;
        
        if (result == 0x25)
        {
            uint64_t r15_2 = r15_1 - 4;
            char var_270;
            
            if (r15_2 > 0x19)
            {
                label_68130a:
                var_270 = 0x14;
                void* rax_12;
                int64_t rdx_8;
                rax_12 = just::token::Token::lexeme::h66587cdf67f63270(&var_100);
                *var_368[8] = rax_12;
                var_358 = rdx_8;
                var_368 = -0x7fffffffffffffbd;
                just::token::Token::error::h986494da066a4455(&var_2c8, &var_100, &var_368);
                *(arg1 + 0x48) = var_288;
                int128_t zmm0_3 = var_2c8;
                *(arg1 + 0x38) = var_298;
                *(arg1 + 0x28) = var_2a8;
                *(arg1 + 0x18) = var_2b8;
                *(arg1 + 8) = zmm0_3;
                *arg1 = 0x14;
                core::ptr::drop_in_place$LT$core..option..Option$LT$just..setting..Setting$GT$$GT$::hbd2a03c3d67d7930(&var_270);
                return core::ptr::drop_in_place$LT$core..option..Option$LT$just..setting..Setting$GT$$GT$::hbd2a03c3d67d7930(&result_3);
            }
            
            int128_t var_26f_1;
            int128_t var_25f_1;
            int128_t var_24f_1;
            int128_t var_23f;
            int64_t var_228;
            int128_t var_218_1;
            int128_t var_208_1;
            int128_t var_1f8_1;
            
            switch (r15_2)
            {
                case 0:
                {
                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_368, arg2);
                    result = result_1;
                    
                    if (result != 0x25)
                    {
                        label_68180e:
                        var_288 = var_328;
                        var_2c8 = var_368;
                        *(arg1 + 0x54) = var_31f;
                        *(arg1 + 0x51) = var_31f;
                        *(arg1 + 0x48) = var_288;
                        zmm0_1 = var_2c8;
                        zmm1_1 = var_358;
                        zmm2_1 = var_348;
                        zmm3_1 = var_338;
                        goto label_680ecd;
                    }
                    
                    int128_t var_2a8_1 = var_348;
                    int128_t var_2b8_1 = var_358;
                    var_218_1 = var_368;
                    var_208_1 = var_358;
                    var_1f8_1 = var_348;
                    var_270 = 2;
                    label_681741:
                    int128_t var_21f;
                    var_26f_1 = var_21f;
                    var_25f_1 = var_218_1;
                    var_24f_1 = var_208_1;
                    *var_24f_1[0xf] = *var_1f8_1[8];
                    break;
                }
                case 1:
                case 2:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 0xa:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x11:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                {
                    goto label_68130a;
                }
                case 3:
                {
                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_368, arg2);
                    result = result_1;
                    
                    if (result != 0x25)
                        goto label_68180e;
                    
                    int128_t var_2a8_2 = var_348;
                    int128_t var_2b8_2 = var_358;
                    var_218_1 = var_368;
                    var_208_1 = var_358;
                    var_1f8_1 = var_348;
                    var_270 = 5;
                    goto label_681741;
                }
                case 0x10:
                {
                    just::parser::Parser::parse_interpreter::h05239d662dee6e80(&var_368, arg2);
                    result = result_1;
                    zmm0_1 = var_368;
                    int64_t rcx_8 = var_328;
                    
                    if (result == 0x25)
                    {
                        var_2c8 = zmm0_1;
                        var_2b8 = var_358;
                        var_2a8 = var_348;
                        var_298 = var_338;
                        *var_288[7] = rcx_8;
                        var_270 = 0xd;
                        goto label_681686;
                    }
                    
                    *(arg1 + 0x54) = var_31f;
                    *(arg1 + 0x51) = var_31f;
                    *(arg1 + 0x48) = rcx_8;
                    zmm1_1 = var_358;
                    zmm2_1 = var_348;
                    zmm3_1 = var_338;
                    goto label_680ecd;
                }
                case 0x12:
                {
                    just::parser::Parser::parse_interpreter::h05239d662dee6e80(&var_368, arg2);
                    result = result_1;
                    zmm0_1 = var_368;
                    int64_t rcx_9 = var_328;
                    
                    if (result == 0x25)
                    {
                        var_2c8 = zmm0_1;
                        var_2b8 = var_358;
                        var_2a8 = var_348;
                        var_298 = var_338;
                        *var_288[7] = rcx_9;
                        var_270 = 0xe;
                        goto label_681686;
                    }
                    
                    *(arg1 + 0x54) = var_31f;
                    *(arg1 + 0x51) = var_31f;
                    *(arg1 + 0x48) = rcx_9;
                    zmm1_1 = var_358;
                    zmm2_1 = var_348;
                    zmm3_1 = var_338;
                    goto label_680ecd;
                }
                case 0x13:
                {
                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_368, arg2);
                    result = result_1;
                    
                    if (result != 0x25)
                        goto label_68180e;
                    
                    int128_t var_2a8_4 = var_348;
                    int128_t var_2b8_4 = var_358;
                    var_218_1 = var_368;
                    var_208_1 = var_358;
                    var_1f8_1 = var_348;
                    var_270 = 0xf;
                    goto label_681741;
                }
                case 0x18:
                {
                    just::parser::Parser::parse_interpreter::h05239d662dee6e80(&var_368, arg2);
                    result = result_1;
                    zmm0_1 = var_368;
                    int64_t rcx_7 = var_328;
                    
                    if (result != 0x25)
                    {
                        *(arg1 + 0x54) = var_31f;
                        *(arg1 + 0x51) = var_31f;
                        *(arg1 + 0x48) = rcx_7;
                        zmm1_1 = var_358;
                        zmm2_1 = var_348;
                        zmm3_1 = var_338;
                        goto label_680ecd;
                    }
                    
                    var_2c8 = zmm0_1;
                    var_2b8 = var_358;
                    var_2a8 = var_348;
                    var_298 = var_338;
                    *var_288[7] = rcx_7;
                    var_270 = 0x12;
                    label_681686:
                    var_26f_1 = var_2c8;
                    var_25f_1 = var_2b8;
                    var_24f_1 = var_2a8;
                    var_23f = var_298;
                    *var_23f[0xf] = *var_298[0xf];
                    var_228 = *var_288[7];
                    break;
                }
                case 0x19:
                {
                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_368, arg2);
                    result = result_1;
                    
                    if (result != 0x25)
                        goto label_68180e;
                    
                    int128_t var_2a8_3 = var_348;
                    int128_t var_2b8_3 = var_358;
                    var_218_1 = var_368;
                    var_208_1 = var_358;
                    var_1f8_1 = var_348;
                    var_270 = 0x13;
                    goto label_681741;
                }
            }
            
            var_328 = *var_23f[0xf];
            result_1 = var_228;
            var_338 = *var_24f_1[0xf];
            *var_338[8] = *var_23f[7];
            int128_t var_348_2 = var_25f_1;
            int128_t var_358_2 = var_26f_1;
            var_368 = var_270;
            *var_368[1] = var_26f_1;
            *var_368[9] = *var_26f_1[8];
            *var_368[0xd] = *var_26f_1[0xc];
            *var_368[0xf] = *var_26f_1[0xe];
            goto label_681213;
        }
        
        int64_t rcx_6 = var_368;
        int128_t zmm0_2 = var_368;
        var_2c8 = *var_328[1];
        *var_2c8[3] = *var_328[4];
        *(arg1 + 0x54) = var_31f;
        *(arg1 + 0x51) = var_31f;
        int32_t rdi_27 = var_2c8;
        *(arg1 + 0x4c) = *var_2c8[3];
        *(arg1 + 0x49) = rdi_27;
        *(arg1 + 8) = rcx_6;
        *(arg1 + 0x10) = zmm0_2;
        *(arg1 + 0x20) = var_358;
        *(arg1 + 0x30) = var_348;
        *(arg1 + 0x40) = *var_338[8];
        arg1[0x48] = var_328;
    }
    arg1[0x50] = result;
    *arg1 = 0x14;
    return result;
}
