
  fn just::parser::Parser::parse_set::ha11a3ca6b0fbece6(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let mut var_368: i128;
    let mut result: i8 =
        just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_368, arg2, 0x15);
    let mut var_358: i128;
    let var_348: i128;
    let mut var_338: i128;
    let mut var_328: i128;
    let mut result_1: i8;
    let mut zmm0: i128;
    let mut zmm1: i128;
    let mut zmm2: i128;
    let mut zmm3: i128;
    
    if result_1 != 0x25
    {
        *arg1.byte_offset(0x48) = var_328;
        zmm0 = var_368;
        zmm1 = var_358;
        zmm2 = var_348;
        zmm3 = var_338;
        'label_680e81:
        *arg1.byte_offset(0x38) = zmm3;
        *arg1.byte_offset(0x28) = zmm2;
        *arg1.byte_offset(0x18) = zmm1;
        *arg1.byte_offset(8) = zmm0;
        *arg1 = 0x14;
        return result;
    }
    
    just::parser::Parser::presume::he2055272497a907b(&var_368, arg2, 0x18);
    result = result_1;
    let mut var_68: i128 = var_368;
    let var_31f: i32;
    let mut zmm0_1: i128;
    let mut zmm1_1: i128;
    let mut zmm2_1: i128;
    let mut zmm3_1: i128;
    
    if result != 0x25
    {
        *arg1.byte_offset(0x54) = var_31f;
        *arg1.byte_offset(0x51) = var_31f;
        *arg1.byte_offset(0x48) = var_328;
        zmm0_1 = var_68;
        zmm1_1 = var_358;
        zmm2_1 = var_348;
        zmm3_1 = var_338;
        'label_680ecd:
        *arg1.byte_offset(0x38) = zmm3_1;
        *arg1.byte_offset(0x28) = zmm2_1;
        *arg1.byte_offset(0x18) = zmm1_1;
        *arg1.byte_offset(8) = zmm0_1;
    }
    else
    {
        let mut var_100: i128;
        just::name::Name::from_identifier::hbd4ef0ea8f6e05d8(&var_100, &var_68);
        let mut rax: *mut c_void;
        let mut rdx_1: u64;
        rax = just::token::Token::lexeme::h66587cdf67f63270(&var_100);
        let rax_1: i8 = just::keyword::Keyword::from_lexeme::h4f2cf9490352ebc3(rax, rdx_1);
        let mut var_2c8: i128;
        let mut var_2b8: i128;
        let mut var_2a8: i128;
        let mut var_298: i128;
        let mut var_288: i128;
        
        if rax_1 == 0x1f
        {
            let mut rax_2: *mut c_void;
            let mut rdx_2: i64;
            rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&var_100);
            *var_368[8] = rax_2;
            var_358 = rdx_2;
            var_368 = -0x7fffffffffffffbd;
            result = just::token::Token::error::h986494da066a4455(&var_2c8, &var_100, &var_368);
            *arg1.byte_offset(0x48) = var_288;
            zmm0 = var_2c8;
            zmm1 = var_2b8;
            zmm2 = var_2a8;
            zmm3 = var_298;
            goto 'label_680e81;
        }
        
        let r15_1: u32 = rax_1;
        let rax_3: u64 = r15_1 - 1;
        let mut result_3: i8;
        
        if rax_3 <= 0x1a
        {
            let mut result_2: i8;
            
            match rax_3
            {
                0 =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        'label_681255:
                        *arg1.byte_offset(0x48) = var_328;
                        zmm0_1 = var_368;
                        *arg1.byte_offset(0x39) = var_338;
                        *arg1.byte_offset(0x29) = var_348;
                        *arg1.byte_offset(0x19) = var_358;
                        *arg1.byte_offset(9) = zmm0_1;
                        *arg1.byte_offset(0x51) = var_31f;
                        *arg1.byte_offset(0x54) = var_31f;
                        arg1[8] = result;
                        arg1[0x50] = result_2;
                        *arg1 = 0x14;
                        return result;
                    }
                    
                    result_2 = 0;
                }
                1 =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 1;
                }
                2 | 3 | 6 | 8 | 0xb | 0xc | 0xe | 0xf | 0x13 | 0x14 | 0x15 | 0x16 | 0x17 | 0x18 =>
                {
                    goto 'label_68100d;
                }
                4 =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 3;
                }
                5 =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 4;
                }
                7 =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 6;
                }
                9 =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 7;
                }
                0xa =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 8;
                }
                0xd =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 9;
                }
                0x10 =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 0xa;
                }
                0x11 =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 0xb;
                }
                0x12 =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 0xc;
                }
                0x19 =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 0x10;
                }
                0x1a =>
                {
                    just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(&var_368, arg2);
                    result = var_368;
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        goto 'label_681255;
                    }
                    
                    result_2 = 0x11;
                }
            }
            
            result_3 = result_2;
            let var_78: i128;
            let var_328_1: i128 = var_78;
            let var_88: i128;
            let var_338_1: i128 = var_88;
            let var_98: i128;
            let var_348_1: i128 = var_98;
            let var_a8: i128;
            let var_358_1: i128 = var_a8;
            var_368 = result_3;
            *var_368[1] = result;
            let var_b6: i64;
            *var_368[2] = var_b6;
            let var_ae: i32;
            *var_368[0xa] = var_ae;
            let var_aa: i16;
            *var_368[0xe] = var_aa;
            'label_681213:
            let var_318_1: i128 = var_100;
            let var_f0: i128;
            let var_308_1: i128 = var_f0;
            let var_e0: i128;
            let var_2f8_1: i128 = var_e0;
            let var_d0: i128;
            let var_2e8_1: i128 = var_d0;
            let var_c0: i64;
            let var_2d8_1: i64 = var_c0;
            return memcpy(arg1, &var_368, 0x98);
        }
        
        'label_68100d:
        result_3 = 0x14;
        just::parser::Parser::expect::h35e1151927597ac7(&var_368, arg2, 0xe);
        result = result_1;
        
        if result == 0x25
        {
            let r15_2: u64 = r15_1 - 4;
            let mut var_270: i8;
            
            if r15_2 > 0x19
            {
                'label_68130a:
                var_270 = 0x14;
                let mut rax_12: *mut c_void;
                let mut rdx_8: i64;
                rax_12 = just::token::Token::lexeme::h66587cdf67f63270(&var_100);
                *var_368[8] = rax_12;
                var_358 = rdx_8;
                var_368 = -0x7fffffffffffffbd;
                just::token::Token::error::h986494da066a4455(&var_2c8, &var_100, &var_368);
                *arg1.byte_offset(0x48) = var_288;
                let zmm0_3: i128 = var_2c8;
                *arg1.byte_offset(0x38) = var_298;
                *arg1.byte_offset(0x28) = var_2a8;
                *arg1.byte_offset(0x18) = var_2b8;
                *arg1.byte_offset(8) = zmm0_3;
                *arg1 = 0x14;
                core::ptr::drop_in_place$LT$core..option..Option$LT$just..setting..Setting$GT$$GT$::hbd2a03c3d67d7930(&var_270);
                return core::ptr::drop_in_place$LT$core..option..Option$LT$just..setting..Setting$GT$$GT$::hbd2a03c3d67d7930(&result_3);
            }
            
            let mut var_26f_1: i128;
            let mut var_25f_1: i128;
            let mut var_24f_1: i128;
            let mut var_23f: i128;
            let mut var_228: i64;
            let mut var_218_1: i128;
            let mut var_208_1: i128;
            let mut var_1f8_1: i128;
            
            match r15_2
            {
                0 =>
                {
                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_368, arg2);
                    result = result_1;
                    
                    if result != 0x25
                    {
                        'label_68180e:
                        var_288 = var_328;
                        var_2c8 = var_368;
                        *arg1.byte_offset(0x54) = var_31f;
                        *arg1.byte_offset(0x51) = var_31f;
                        *arg1.byte_offset(0x48) = var_288;
                        zmm0_1 = var_2c8;
                        zmm1_1 = var_358;
                        zmm2_1 = var_348;
                        zmm3_1 = var_338;
                        goto 'label_680ecd;
                    }
                    
                    let var_2a8_1: i128 = var_348;
                    let var_2b8_1: i128 = var_358;
                    var_218_1 = var_368;
                    var_208_1 = var_358;
                    var_1f8_1 = var_348;
                    var_270 = 2;
                    'label_681741:
                    let var_21f: i128;
                    var_26f_1 = var_21f;
                    var_25f_1 = var_218_1;
                    var_24f_1 = var_208_1;
                    *var_24f_1[0xf] = *var_1f8_1[8];
                }
                1 | 2 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x11 | 0x14 |
                    0x15 | 0x16 | 0x17 =>
                {
                    goto 'label_68130a;
                }
                3 =>
                {
                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_368, arg2);
                    result = result_1;
                    
                    if result != 0x25
                    {
                        goto 'label_68180e;
                    }
                    
                    let var_2a8_2: i128 = var_348;
                    let var_2b8_2: i128 = var_358;
                    var_218_1 = var_368;
                    var_208_1 = var_358;
                    var_1f8_1 = var_348;
                    var_270 = 5;
                    goto 'label_681741;
                }
                0x10 =>
                {
                    just::parser::Parser::parse_interpreter::h05239d662dee6e80(&var_368, arg2);
                    result = result_1;
                    zmm0_1 = var_368;
                    let rcx_8: i64 = var_328;
                    
                    if result == 0x25
                    {
                        var_2c8 = zmm0_1;
                        var_2b8 = var_358;
                        var_2a8 = var_348;
                        var_298 = var_338;
                        *var_288[7] = rcx_8;
                        var_270 = 0xd;
                        goto 'label_681686;
                    }
                    
                    *arg1.byte_offset(0x54) = var_31f;
                    *arg1.byte_offset(0x51) = var_31f;
                    *arg1.byte_offset(0x48) = rcx_8;
                    zmm1_1 = var_358;
                    zmm2_1 = var_348;
                    zmm3_1 = var_338;
                    goto 'label_680ecd;
                }
                0x12 =>
                {
                    just::parser::Parser::parse_interpreter::h05239d662dee6e80(&var_368, arg2);
                    result = result_1;
                    zmm0_1 = var_368;
                    let rcx_9: i64 = var_328;
                    
                    if result == 0x25
                    {
                        var_2c8 = zmm0_1;
                        var_2b8 = var_358;
                        var_2a8 = var_348;
                        var_298 = var_338;
                        *var_288[7] = rcx_9;
                        var_270 = 0xe;
                        goto 'label_681686;
                    }
                    
                    *arg1.byte_offset(0x54) = var_31f;
                    *arg1.byte_offset(0x51) = var_31f;
                    *arg1.byte_offset(0x48) = rcx_9;
                    zmm1_1 = var_358;
                    zmm2_1 = var_348;
                    zmm3_1 = var_338;
                    goto 'label_680ecd;
                }
                0x13 =>
                {
                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_368, arg2);
                    result = result_1;
                    
                    if result != 0x25
                    {
                        goto 'label_68180e;
                    }
                    
                    let var_2a8_4: i128 = var_348;
                    let var_2b8_4: i128 = var_358;
                    var_218_1 = var_368;
                    var_208_1 = var_358;
                    var_1f8_1 = var_348;
                    var_270 = 0xf;
                    goto 'label_681741;
                }
                0x18 =>
                {
                    just::parser::Parser::parse_interpreter::h05239d662dee6e80(&var_368, arg2);
                    result = result_1;
                    zmm0_1 = var_368;
                    let rcx_7: i64 = var_328;
                    
                    if result != 0x25
                    {
                        *arg1.byte_offset(0x54) = var_31f;
                        *arg1.byte_offset(0x51) = var_31f;
                        *arg1.byte_offset(0x48) = rcx_7;
                        zmm1_1 = var_358;
                        zmm2_1 = var_348;
                        zmm3_1 = var_338;
                        goto 'label_680ecd;
                    }
                    
                    var_2c8 = zmm0_1;
                    var_2b8 = var_358;
                    var_2a8 = var_348;
                    var_298 = var_338;
                    *var_288[7] = rcx_7;
                    var_270 = 0x12;
                    'label_681686:
                    var_26f_1 = var_2c8;
                    var_25f_1 = var_2b8;
                    var_24f_1 = var_2a8;
                    var_23f = var_298;
                    *var_23f[0xf] = *var_298[0xf];
                    var_228 = *var_288[7];
                }
                0x19 =>
                {
                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_368, arg2);
                    result = result_1;
                    
                    if result != 0x25
                    {
                        goto 'label_68180e;
                    }
                    
                    let var_2a8_3: i128 = var_348;
                    let var_2b8_3: i128 = var_358;
                    var_218_1 = var_368;
                    var_208_1 = var_358;
                    var_1f8_1 = var_348;
                    var_270 = 0x13;
                    goto 'label_681741;
                }
            }
            
            var_328 = *var_23f[0xf];
            result_1 = var_228;
            var_338 = *var_24f_1[0xf];
            *var_338[8] = *var_23f[7];
            let var_348_2: i128 = var_25f_1;
            let var_358_2: i128 = var_26f_1;
            var_368 = var_270;
            *var_368[1] = var_26f_1;
            *var_368[9] = *var_26f_1[8];
            *var_368[0xd] = *var_26f_1[0xc];
            *var_368[0xf] = *var_26f_1[0xe];
            goto 'label_681213;
        }
        
        let rcx_6: i64 = var_368;
        let zmm0_2: i128 = var_368;
        var_2c8 = *var_328[1];
        *var_2c8[3] = *var_328[4];
        *arg1.byte_offset(0x54) = var_31f;
        *arg1.byte_offset(0x51) = var_31f;
        let rdi_27: i32 = var_2c8;
        *arg1.byte_offset(0x4c) = *var_2c8[3];
        *arg1.byte_offset(0x49) = rdi_27;
        *arg1.byte_offset(8) = rcx_6;
        *arg1.byte_offset(0x10) = zmm0_2;
        *arg1.byte_offset(0x20) = var_358;
        *arg1.byte_offset(0x30) = var_348;
        *arg1.byte_offset(0x40) = *var_338[8];
        arg1[0x48] = var_328;
    }
    arg1[0x50] = result;
    *arg1 = 0x14;
    result
}
